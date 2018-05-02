// genShellCode.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

//pe to shellcode to header file
#include <windows.h>
#include <bcrypt.h>
#include <stdio.h>
#pragma comment (lib, "crypt32.lib")
#pragma comment (lib, "bcrypt.lib")

typedef unsigned __int64		QWORD;

VOID Util_SHA256(_In_ PBYTE pb, _In_ DWORD cb, _Out_ __bcount(32) PBYTE pbHash)
{
	BCRYPT_ALG_HANDLE hAlg = NULL;
	BCRYPT_HASH_HANDLE hHash = NULL;
	BCryptOpenAlgorithmProvider(&hAlg, BCRYPT_SHA256_ALGORITHM, NULL, 0);
	BCryptCreateHash(hAlg, &hHash, NULL, 0, NULL, 0, 0);
	BCryptHashData(hHash, pb, cb, 0);
	BCryptFinishHash(hHash, pbHash, 32, 0);
	BCryptDestroyHash(hHash);
	BCryptCloseAlgorithmProvider(hAlg, 0);
}

_Success_(return) BOOL PEGetSectionRawData(_In_ HMODULE hModule, _In_ LPSTR szSection, _Out_ PDWORD pdwSectionBaseRel, _Out_ PDWORD pdwSectionSize)
{
	PIMAGE_DOS_HEADER dosHeader = (PIMAGE_DOS_HEADER)hModule;
	if (!dosHeader || dosHeader->e_magic != IMAGE_DOS_SIGNATURE) { return FALSE; }
	PIMAGE_NT_HEADERS ntHeader = (PIMAGE_NT_HEADERS)((ULONG_PTR)hModule + dosHeader->e_lfanew);
	if (!ntHeader ||
		ntHeader->Signature != IMAGE_NT_SIGNATURE
		/*||ntHeader->FileHeader.Machine != IMAGE_FILE_MACHINE_AMD64 ||
		ntHeader->OptionalHeader.Magic != IMAGE_NT_OPTIONAL_HDR64_MAGIC*/) {
		return FALSE;
	}
	WORD nSections = ntHeader->FileHeader.NumberOfSections;
	for (int i = 0; i < nSections; i++) {
		PIMAGE_SECTION_HEADER sectionHeader = (PIMAGE_SECTION_HEADER)((ULONG_PTR)hModule + dosHeader->e_lfanew + sizeof(IMAGE_NT_HEADERS) + i * sizeof(IMAGE_SECTION_HEADER));
		if (strcmp((char*)sectionHeader->Name, szSection) == 0) {
			*pdwSectionBaseRel = sectionHeader->PointerToRawData;
			*pdwSectionSize = sectionHeader->Misc.VirtualSize;
			return TRUE;
		}
	}
	return FALSE;
}

BOOL ExistsDataDirectoryForbidden(_In_ HMODULE hModule)
{
	PIMAGE_DOS_HEADER dosHeader = (PIMAGE_DOS_HEADER)hModule;
	PIMAGE_NT_HEADERS ntHeader = (PIMAGE_NT_HEADERS)((ULONG_PTR)hModule + dosHeader->e_lfanew);
	for (DWORD i = 0; i < IMAGE_NUMBEROF_DIRECTORY_ENTRIES; i++) {
		if (i != IMAGE_DIRECTORY_ENTRY_EXCEPTION && i != IMAGE_DIRECTORY_ENTRY_DEBUG) {
			if (ntHeader->OptionalHeader.DataDirectory[i].Size) {
				return TRUE;
			}
		}
	}
	return FALSE;
}

_Success_(return) BOOL Util_LoadFile(_In_ LPSTR szFileName, _Out_ PBYTE* ppb, _Out_ DWORD* pcb)
{
	BOOL result;
	HANDLE hFile = CreateFileA(
		szFileName,
		GENERIC_READ,
		FILE_SHARE_READ,
		NULL,
		OPEN_EXISTING,
		FILE_ATTRIBUTE_NORMAL,
		NULL);
	if (!hFile) { return FALSE; }
	*ppb = (PBYTE)LocalAlloc(LMEM_ZEROINIT, 0x400000);
	result = ReadFile(hFile, *ppb, 0x400000, pcb, NULL);
	CloseHandle(hFile);
	return result;
}

_Success_(return) BOOL Util_WriteFile(_In_ LPSTR szFileName, _In_ PBYTE pb, _In_ DWORD cb, _In_ BOOL fOverwrite)
{
	DWORD cbWritten;
	BOOL result;
	HANDLE hFile = CreateFileA(
		szFileName,
		GENERIC_WRITE,
		FILE_SHARE_READ,
		NULL,
		fOverwrite ? CREATE_ALWAYS : CREATE_NEW,
		FILE_ATTRIBUTE_NORMAL,
		NULL);
	if (!hFile) { return FALSE; }
	result = WriteFile(hFile, pb, cb, &cbWritten, NULL);
	CloseHandle(hFile);
	return result;
}

void Util_OutHeaderFile(LPCSTR lpszFileName, PBYTE _buffer, DWORD _buffSize)
{
	CHAR szHeaderName[MAX_PATH] = {};
	auto pFileName = PathFindFileNameA(lpszFileName);
	memcpy(szHeaderName, pFileName, strlen(pFileName));
	memcpy(szHeaderName + strlen(pFileName) - 2, "\0\0", 2);
	DeleteFileA(lpszFileName);
	auto pfile = std::experimental::make_unique_resource(fopen(lpszFileName, "w+"), &fclose);
	auto _file = pfile.get();
	fprintf(_file, "#pragma once\n");
	fprintf(_file, "unsigned char code_%s[]={\n\t", szHeaderName);
	for (auto i = 0ul; i < _buffSize; i++)
	{
		if (i > 0)
			fprintf(_file, ", ");
		if (i != 0 && (i % 16) == 0)
			fprintf(_file, "\n\t");
		fprintf(_file, "0x%02x", _buffer[i]);
	}
	fprintf(_file, "\n};\n");

}
int main(_In_ unsigned int argc, _In_ char* argv[])
{
	PBYTE pb, pbCode;
	DWORD cb, cbCode, cbCodeRVA;
	CHAR szFileBIN[MAX_PATH] = {};
	CHAR szFileHeader[MAX_PATH] = {};
	LPSTR szPE;
	if (argc != 2)
	{
		printf("usage:shellcode_maker <pefile>\r\n");
		return 1;
	}
	szPE = argv[1];
	memset(szFileBIN, 0, MAX_PATH);
	memcpy(szFileBIN, szPE, strlen(szPE));
	memcpy(szFileBIN + strlen(szPE) - 3, "bin", 3);
	memcpy(szFileHeader, szPE, strlen(szPE));
	memcpy(szFileHeader + strlen(szPE) - 3, "h\0", 2);

	if (!Util_LoadFile(szPE, &pb, &cb)) {
		printf("failed! cannot open file: %s\n", szPE);
		return 1;
	}
	if (!PEGetSectionRawData((HMODULE)pb, ".text", &cbCodeRVA, &cbCode)) {
		printf("failed! cannot parse 64-bit PE information.\n");
		return 1;
	}
	if (ExistsDataDirectoryForbidden((HMODULE)pb)) {
		{
			printf("failed! data directory which may invalidate the shell code exists.\n");
			return 1;
		}
		printf("warning! data directory which may invalidate the shell code exists.\n");
	}
	pbCode = pb + cbCodeRVA;
	Util_WriteFile(szFileBIN, pbCode, cbCode, TRUE);

	//这里开始干活
	Util_OutHeaderFile(szFileHeader, pbCode, cbCode);
	printf("Succeeded! Loaded PE contents from file: '%s'\nWrote 0x%x (%i) bytes of shell code to files:\n'%s'\n", szPE, cbCode, cbCode, szFileBIN);
	return 0;
}

