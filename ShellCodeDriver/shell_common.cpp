#include "shell_common.h"

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

QWORD PEGetProcAddressH(_In_ QWORD hModule, _In_ DWORD dwProcNameH)
{
	PDWORD pdwRVAAddrNames, pdwRVAAddrFunctions;
	PWORD pwNameOrdinals;
	DWORD i, dwFnIdx, dwHash;
	LPSTR sz;
	PIMAGE_DOS_HEADER dosHeader = (PIMAGE_DOS_HEADER)hModule; // dos header.
	if (!dosHeader || dosHeader->e_magic != IMAGE_DOS_SIGNATURE) { return 0; }
	PIMAGE_NT_HEADERS ntHeader = (PIMAGE_NT_HEADERS)(hModule + dosHeader->e_lfanew); // nt header
	if (!ntHeader || ntHeader->Signature != IMAGE_NT_SIGNATURE) { return 0; }
	PIMAGE_EXPORT_DIRECTORY exp = (PIMAGE_EXPORT_DIRECTORY)(ntHeader->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_EXPORT].VirtualAddress + hModule);
	if (!exp || !exp->NumberOfNames || !exp->AddressOfNames) { return 0; }
	pdwRVAAddrNames = (PDWORD)(hModule + exp->AddressOfNames);
	pwNameOrdinals = (PWORD)(hModule + exp->AddressOfNameOrdinals);
	pdwRVAAddrFunctions = (PDWORD)(hModule + exp->AddressOfFunctions);
	for (i = 0; i < exp->NumberOfNames; i++) {
		sz = (LPSTR)(hModule + pdwRVAAddrNames[i]);
		dwHash = HashROR13A(sz);
		if (dwHash == dwProcNameH) {
			dwFnIdx = pwNameOrdinals[i];
			if (dwFnIdx >= exp->NumberOfFunctions) { return 0; }
			return (QWORD)(hModule + pdwRVAAddrFunctions[dwFnIdx]);
		}
	}
	return 0;
}

VOID InitializeKernelFunctions(_In_ QWORD qwNtosBase, _Out_ PKERNEL_FUNCTIONS fnk)
{
	QWORD FUNC2[][2] = {
		{ (QWORD)&fnk->_stricmp,						H__stricmp						},
		{ (QWORD)&fnk->ExAllocatePool,					H_ExAllocatePool				},
		{ (QWORD)&fnk->ExFreePool,						H_ExFreePool					},
		{ (QWORD)&fnk->IoCreateDriver,					H_IoCreateDriver				},
		{ (QWORD)&fnk->KeDelayExecutionThread,			H_KeDelayExecutionThread		},
		{ (QWORD)&fnk->KeGetCurrentIrql,				H_KeGetCurrentIrql				},
		{ (QWORD)&fnk->MmGetPhysicalAddress,			H_MmGetPhysicalAddress			},
		{ (QWORD)&fnk->MmLoadSystemImage,				H_MmLoadSystemImage				},
		{ (QWORD)&fnk->MmMapIoSpace,					H_MmMapIoSpace					},
		{ (QWORD)&fnk->MmUnloadSystemImage,				H_MmUnloadSystemImage			},
		{ (QWORD)&fnk->MmUnmapIoSpace,					H_MmUnmapIoSpace				},
		{ (QWORD)&fnk->RtlAnsiStringToUnicodeString,	H_RtlAnsiStringToUnicodeString	},
		{ (QWORD)&fnk->RtlCopyMemory,					H_RtlCopyMemory					},
		{ (QWORD)&fnk->RtlFreeUnicodeString,			H_RtlFreeUnicodeString			},
		{ (QWORD)&fnk->RtlInitAnsiString,				H_RtlInitAnsiString				},
		{ (QWORD)&fnk->RtlInitUnicodeString,			H_RtlInitUnicodeString			},
		{ (QWORD)&fnk->RtlInitUnicodeString,			H_RtlInitUnicodeString			},
		{ (QWORD)&fnk->RtlZeroMemory,					H_RtlZeroMemory					},
		{ (QWORD)&fnk->ZwClose,							H_ZwClose						},
		{ (QWORD)&fnk->ZwCreateFile,					H_ZwCreateFile					},
		{ (QWORD)&fnk->ZwOpenFile,						H_ZwOpenFile					},
		{ (QWORD)&fnk->ZwReadFile,						H_ZwReadFile					},
		{ (QWORD)&fnk->ZwQueryDirectoryFile,			H_ZwQueryDirectoryFile			},
		{ (QWORD)&fnk->ZwQuerySystemInformation,		H_ZwQuerySystemInformation		},
		{ (QWORD)&fnk->ZwSetSystemInformation,			H_ZwSetSystemInformation		},
		{ (QWORD)&fnk->ZwWriteFile,						H_ZwWriteFile					},
		{ (QWORD)&fnk->_strlen,							H_strlen						}
	};
	for (QWORD j = 0; j < (sizeof(FUNC2) / sizeof(QWORD[2])); j++) {
		*(PQWORD)FUNC2[j][0] = PEGetProcAddressH(qwNtosBase, (DWORD)FUNC2[j][1]);
	}
	fnk->pvStart = (PVOID)qwNtosBase;
}

 DWORD PEGetImageSize(_In_ QWORD hModule)
{
	PIMAGE_DOS_HEADER dosHeader = (PIMAGE_DOS_HEADER)hModule; // dos header.
	if (!dosHeader || dosHeader->e_magic != IMAGE_DOS_SIGNATURE) { return 0; }
	PIMAGE_NT_HEADERS ntHeader = (PIMAGE_NT_HEADERS)((LONG_PTR)hModule + dosHeader->e_lfanew); // nt header
	if (!ntHeader || ntHeader->Signature != IMAGE_NT_SIGNATURE) { return 0; }
	return ntHeader->OptionalHeader.SizeOfImage;
}

VOID CommonSleep(_In_ PKERNEL_FUNCTIONS fnk, _In_ DWORD ms)
{
	LONGLONG llTimeToWait = -10000LL * ms;
	fnk->KeDelayExecutionThread(KernelMode, FALSE, &llTimeToWait);
}

QWORD KernelGetModuleBase(_In_ PKERNEL_FUNCTIONS fnk, _In_ LPSTR szModuleName)
{
	PBYTE pbSystemInfoBuffer;
	SIZE_T cbSystemInfoBuffer = 0;
	PRTL_PROCESS_MODULE_INFORMATION pSME;
	QWORD i, qwAddrModuleBase = 0;
	fnk->ZwQuerySystemInformation(SystemModuleInformation, NULL, 0, (PULONG)&cbSystemInfoBuffer);
	if (!cbSystemInfoBuffer) { return 0; }
	pbSystemInfoBuffer = (PBYTE)fnk->ExAllocatePool(0, cbSystemInfoBuffer);
	if (!pbSystemInfoBuffer) { return 0; }
	if (0 == fnk->ZwQuerySystemInformation(SystemModuleInformation, pbSystemInfoBuffer, (ULONG)cbSystemInfoBuffer, (PULONG)&cbSystemInfoBuffer)) {
		pSME = ((PRTL_PROCESS_MODULES)(pbSystemInfoBuffer))->Modules;
		for (i = 0; i < ((PRTL_PROCESS_MODULES)(pbSystemInfoBuffer))->NumberOfModules; i++) {
			if (0 == fnk->_stricmp(szModuleName, (char *)pSME[i].FullPathName + pSME[i].OffsetToFileName)) {
				qwAddrModuleBase = (QWORD)pSME[i].ImageBase;
			}
		}
	}
	if (pbSystemInfoBuffer) { fnk->ExFreePool(pbSystemInfoBuffer); }
	return qwAddrModuleBase;
}
