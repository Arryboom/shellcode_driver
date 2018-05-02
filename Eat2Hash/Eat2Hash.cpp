// Eat2Hash.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

DWORD HashROR13A(_In_ LPCSTR sz)
{
	DWORD dwVal, dwHash = 0;
	while (*sz) {
		dwVal = (DWORD)*sz++;
		dwHash = (dwHash >> 13) | (dwHash << 19);
		dwHash += dwVal;
	}
	return dwHash;
}

void usage()
{
	printf("usage:eat2hash <pefile> <outfile>\r\n");
	printf("example:eat2hash kernel32.dll kernel32_hash.h\r\n");
	printf("eat2hash ntoskrnl.exe ntos_hash.h\r\n");
}

PVOID load_dll(std::wstring filename)
{
	HANDLE hSection, hFile;
	ntdll::UNICODE_STRING dllName;
	PVOID BaseAddress = NULL;
	SIZE_T size = 0;
	NTSTATUS stat;
	ntdll::OBJECT_ATTRIBUTES oa = { sizeof(oa), 0, &dllName, OBJ_CASE_INSENSITIVE };
	ntdll::IO_STATUS_BLOCK iosb;
	auto full_dll_path = (PWSTR)filename.c_str();
	ntdll::RtlInitUnicodeString(&dllName, full_dll_path);


	//_asm int 3;
	stat = ntdll::ZwOpenFile(&hFile, FILE_EXECUTE | SYNCHRONIZE, &oa, &iosb,
		FILE_SHARE_READ, FILE_SYNCHRONOUS_IO_NONALERT);

	if (!NT_SUCCESS(stat)) {
		printf("WRN: Can't open %ws: %x\n", full_dll_path, stat);
		return 0;
	}

	oa.ObjectName = 0;

	stat = ZwCreateSection(&hSection, SECTION_ALL_ACCESS, &oa, 0, PAGE_EXECUTE,
		SEC_IMAGE, hFile);

	if (!NT_SUCCESS(stat)) {
		printf("WRN: Can't create section %ws: %x\n", full_dll_path, stat);
		return 0;
	}

	stat = ntdll::ZwMapViewOfSection(hSection, ntdll::NtCurrentProcess(), &BaseAddress, 0,
		1000, 0, &size, (ntdll::SECTION_INHERIT)1, MEM_TOP_DOWN, PAGE_READWRITE);

	if (!NT_SUCCESS(stat)) {
		printf("WRN: Can't map section %ws: %x\n", full_dll_path, stat);
		return 0;
	}

	ntdll::ZwClose(hSection);
	ntdll::ZwClose(hFile);

	return BaseAddress;
}
VOID free_dll(HANDLE hMod)
{
	ntdll::ZwUnmapViewOfSection(ntdll::NtCurrentProcess(), hMod);
}

void print_eat_hash(PVOID Image,FILE *fout)
{
	auto RVATOVA = [](auto _base_, auto _offset_) {
		return ((PUCHAR)(_base_)+(ULONG)(_offset_));
	};
	fprintf(fout, "#pragma once\n");
	__try
	{
		PIMAGE_EXPORT_DIRECTORY pExport = NULL;

		PIMAGE_NT_HEADERS32 pHeaders32 = (PIMAGE_NT_HEADERS32)
			((PUCHAR)Image + ((PIMAGE_DOS_HEADER)Image)->e_lfanew);

		if (pHeaders32->FileHeader.Machine == IMAGE_FILE_MACHINE_I386)
		{
			// 32-bit image
			if (pHeaders32->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT].VirtualAddress)
			{
				pExport = (PIMAGE_EXPORT_DIRECTORY)RVATOVA(
					Image,
					pHeaders32->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT].VirtualAddress
				);
			}
		}
		else if (pHeaders32->FileHeader.Machine == IMAGE_FILE_MACHINE_AMD64)
		{
			// 64-bit image
			PIMAGE_NT_HEADERS64 pHeaders64 = (PIMAGE_NT_HEADERS64)
				((PUCHAR)Image + ((PIMAGE_DOS_HEADER)Image)->e_lfanew);

			if (pHeaders64->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT].VirtualAddress)
			{
				pExport = (PIMAGE_EXPORT_DIRECTORY)RVATOVA(
					Image,
					pHeaders64->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT].VirtualAddress
				);
			}
		}

		if (pExport)
		{
			PULONG AddressOfFunctions = (PULONG)RVATOVA(Image, pExport->AddressOfFunctions);
			PSHORT AddrOfOrdinals = (PSHORT)RVATOVA(Image, pExport->AddressOfNameOrdinals);
			PULONG AddressOfNames = (PULONG)RVATOVA(Image, pExport->AddressOfNames);
			ULONG i = 0;
			for (i = 0; i < pExport->NumberOfFunctions; i++)
			{
				auto api_name = (char *)RVATOVA(Image, AddressOfNames[i]);
				auto hash = HashROR13A(api_name);
				auto is_printable_char = [](auto _char) {
					if (_char>='a'&&_char<='z')
					{
						return true;
					}
					if (_char>='A'&&_char<='Z')
					{
						return true;
					}
					if (_char=='_')
					{
						return true;
					}
					if (_char>='0'&&_char<='9')
					{
						return true;
					}
					return false;
				};
				if (hash && is_printable_char(api_name[0]))
				{
					fprintf(fout, "using T_%s = decltype(&%s);\n", api_name, api_name);
					fprintf(fout, "#define H_%s 0x%08x\n", api_name, hash);
				}
			}
		}
	}
	__except (EXCEPTION_EXECUTE_HANDLER)
	{

	}
}
int wmain(int argc,const wchar_t *argv[])
{
	if (argc!=3)
	{
		usage();
		return -1;
	}
	auto h_dll = std::experimental::make_unique_resource(load_dll(std::wstring(L"\\??\\")+argv[1]), &free_dll);
	auto _dllBase = h_dll.get();
	if (!_dllBase)
	{
		printf("ERR load dll failed\r\n");
		return -1;
	}
	DeleteFile(argv[2]);
	auto fout = std::experimental::make_unique_resource(_wfopen(argv[2], L"w+"), &fclose);
	print_eat_hash(_dllBase,fout.get());

    return 0;
}

