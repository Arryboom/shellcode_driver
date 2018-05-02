#pragma once
#ifdef __cplusplus
#ifndef _HAS_EXCEPTIONS
#define _HAS_EXCEPTIONS 0
#endif
#endif

#include <initguid.h>
#include <fltKernel.h>
#include <windef.h>
#include <ntimage.h>

#include "xor_string.h"
#pragma warning( disable : 4047 4055 4127 4200 4201 4204 4324)
//
typedef unsigned __int64		QWORD, *PQWORD;
//typedef UCHAR KIRQL;
//typedef KIRQL *PKIRQL;
//typedef struct _EPROCESS *PEPROCESS;
//typedef struct _ETHREAD *PETHREAD;
////#define _bs64 _byteswap_uint64  
//#define _bs32(x) ((x << 24) | (x >> 24) | ((x << 8) & 0x00ff0000 ) | ((x >> 8) & 0x0000ff00))
//#define _bs16(x) ((x << 8) | (x >> 8))
//
//#define NT_SUCCESS(Status) (((NTSTATUS)(Status)) >= 0)
//#define NT_INFORMATION(Status) ((((ULONG)(Status)) >> 30) == 1)
//#define NT_WARNING(Status) ((((ULONG)(Status)) >> 30) == 2)
//#define NT_ERROR(Status) ((((ULONG)(Status)) >> 30) == 3)
//
//#define OBJ_CASE_INSENSITIVE    				0x00000040
//#define FILE_SYNCHRONOUS_IO_NONALERT			0x00000020
//#define FILE_OPEN								0x00000001
//#define FILE_OPEN_IF							0x00000003
//#define FILE_OVERWRITE_IF						0x00000005
//#define OBJ_KERNEL_HANDLE       				0x00000200
//#define FILE_NON_DIRECTORY_FILE                 0x00000040

//typedef struct _UNICODE_STRING {
//	USHORT Length;
//	USHORT MaximumLength;
//	PWSTR  Buffer;
//} UNICODE_STRING, *PUNICODE_STRING;
//
//typedef struct _ANSI_STRING {
//	USHORT Length;
//	USHORT MaximumLength;
//	PCHAR  Buffer;
//} ANSI_STRING, *PANSI_STRING;
//
//typedef struct _OBJECT_ATTRIBUTES {
//	ULONG Length;
//	HANDLE RootDirectory;
//	PUNICODE_STRING ObjectName;
//	ULONG Attributes;
//	PVOID SecurityDescriptor;
//	PVOID SecurityQualityOfService;
//} OBJECT_ATTRIBUTES;
//typedef OBJECT_ATTRIBUTES *POBJECT_ATTRIBUTES;

//typedef struct _IO_STATUS_BLOCK {
//	union {
//		NTSTATUS Status;
//		PVOID Pointer;
//	} DUMMYUNIONNAME;
//
//	ULONG_PTR Information;
//} IO_STATUS_BLOCK, *PIO_STATUS_BLOCK;
//
//
//#define InitializeObjectAttributes( p, n, a, r, s ) { \
//    (p)->Length = sizeof( OBJECT_ATTRIBUTES );          \
//    (p)->RootDirectory = r;                             \
//    (p)->Attributes = a;                                \
//    (p)->ObjectName = n;                                \
//    (p)->SecurityDescriptor = s;                        \
//    (p)->SecurityQualityOfService = NULL;               \
//    }

typedef enum _SYSTEM_INFORMATION_CLASS {
	SystemProcessInformation = 5,
	SystemModuleInformation = 11,
} SYSTEM_INFORMATION_CLASS, *PSYSTEM_INFORMATION_CLASS;

typedef struct _RTL_PROCESS_MODULE_INFORMATION {
	HANDLE Section;                 // Not filled in
	PVOID MappedBase;
	PVOID ImageBase;
	ULONG ImageSize;
	ULONG Flags;
	USHORT LoadOrderIndex;
	USHORT InitOrderIndex;
	USHORT LoadCount;
	USHORT OffsetToFileName;
	UCHAR  FullPathName[256];
} RTL_PROCESS_MODULE_INFORMATION, *PRTL_PROCESS_MODULE_INFORMATION;

typedef struct _RTL_PROCESS_MODULES {
	ULONG NumberOfModules;
	RTL_PROCESS_MODULE_INFORMATION Modules[1];
} RTL_PROCESS_MODULES, *PRTL_PROCESS_MODULES;


typedef CCHAR KPROCESSOR_MODE;

//typedef enum _MODE {
//	KernelMode,
//	UserMode,
//	MaximumMode
//} MODE;

//typedef enum _MEMORY_CACHING_TYPE {
//	MmNonCached = 0,
//	MmCached = 1,
//	MmWriteCombined = 2,
//	MmHardwareCoherentCached = 3,
//	MmNonCachedUnordered = 4,
//	MmUSWCCached = 5,
//	MmMaximumCacheType = 6
//} MEMORY_CACHING_TYPE;

#undef RtlCopyMemory
#undef RtlZeroMemory
#undef ExFreePool
typedef struct tdKERNEL_FUNCTIONS {
	int(*_stricmp)(
		const char *string1,
		const char *string2);
	PVOID(*ExAllocatePool)(
		_In_ QWORD PoolType,
		_In_ SIZE_T NumberOfBytes);
	VOID(*ExFreePool)(
		_In_ PVOID P);
	NTSTATUS(*IoCreateDriver)(
		_In_opt_ PUNICODE_STRING DriverName,
		_In_ QWORD  PDriverEntry
		);
	NTSTATUS(*KeDelayExecutionThread)(
		_In_ KPROCESSOR_MODE WaitMode,
		_In_ BOOLEAN         Alertable,
		_In_ PINT64          pllInterval_Neg100ns
		);
	KIRQL(*KeGetCurrentIrql)(
		);
	QWORD(*MmGetPhysicalAddress)(
		_In_ PVOID BaseAddress
		);
	NTSTATUS(*MmLoadSystemImage)(
		_In_ PUNICODE_STRING  FileName,
		_In_opt_ PUNICODE_STRING NamePrefix,
		_In_opt_ PUNICODE_STRING LoadedName,
		_In_ ULONG  Flags,
		_Out_ PVOID *ModuleObject,
		_Out_ PVOID *ImageBaseAddress
		);
	PVOID(*MmMapIoSpace)(
		_In_  QWORD  PhysicalAddress,
		_In_  SIZE_T NumberOfBytes,
		_In_  MEMORY_CACHING_TYPE CacheType
		);
	NTSTATUS(*MmUnloadSystemImage)(
		_In_ PVOID *ModuleObject
		);
	VOID(*MmUnmapIoSpace)(
		_In_  PVOID  BaseAddress,
		_In_  SIZE_T NumberOfBytes
		);
	NTSTATUS(*RtlAnsiStringToUnicodeString)(
		_Inout_ PUNICODE_STRING DestinationString,
		_In_    PANSI_STRING    SourceString,
		_In_    BOOLEAN         AllocateDestinationString
		);
	VOID(*RtlCopyMemory)(
		_Out_ VOID UNALIGNED *Destination,
		_In_ const VOID UNALIGNED *Source,
		_In_ SIZE_T Length
		);
	VOID(*RtlFreeUnicodeString)(
		_Inout_ PUNICODE_STRING UnicodeString
		);
	VOID(*RtlInitAnsiString)(
		_Out_    PANSI_STRING DestinationString,
		_In_opt_ PCSTR         SourceString
		);
	VOID(*RtlInitUnicodeString)(
		_Out_ PUNICODE_STRING DestinationString,
		_In_opt_ PCWSTR SourceString
		);
	VOID(*RtlZeroMemory)(
		_Out_ VOID UNALIGNED *Destination,
		_In_ SIZE_T Length
		);
	NTSTATUS(*ZwClose)(
		_In_ HANDLE hObject
		);
	NTSTATUS(*ZwCreateFile)(
		_Out_	 PHANDLE			FileHandle,
		_In_	 ACCESS_MASK		DesiredAccess,
		_In_	 PVOID				ObjectAttributes,
		_Out_	 PIO_STATUS_BLOCK	IoStatusBlock,
		_In_opt_ PLARGE_INTEGER		AllocationSize,
		_In_	 ULONG				FileAttributes,
		_In_	 ULONG				ShareAccess,
		_In_	 ULONG				CreateDisposition,
		_In_	 ULONG				CreateOptions,
		_In_reads_bytes_opt_(EaLength) PVOID EaBuffer,
		_In_	 ULONG				EaLength
		);
	NTSTATUS(*ZwOpenFile)(
		_Out_	 PHANDLE            FileHandle,
		_In_	 ACCESS_MASK        DesiredAccess,
		_In_	 POBJECT_ATTRIBUTES ObjectAttributes,
		_Out_	 PIO_STATUS_BLOCK   IoStatusBlock,
		_In_	 ULONG              ShareAccess,
		_In_	 ULONG              OpenOptions
		);
	NTSTATUS(*ZwQueryDirectoryFile)(
		_In_	 HANDLE				FileHandle,
		_In_opt_ HANDLE				Event,
		_In_opt_ PVOID				ApcRoutine,
		_In_opt_ PVOID				ApcContext,
		_Out_	 PIO_STATUS_BLOCK	IoStatusBlock,
		_Out_	 PVOID				FileInformation,
		_In_	 ULONG				Length,
		_In_	 QWORD				FileInformationClass,
		_In_	 BOOLEAN			ReturnSingleEntry,
		_In_opt_ PUNICODE_STRING	FileName,
		_In_	 BOOLEAN			RestartScan
		);
	NTSTATUS(*ZwQuerySystemInformation)(
		_In_ SYSTEM_INFORMATION_CLASS SystemInformationClass,
		_Inout_ PVOID SystemInformation,
		_In_ ULONG SystemInformationLength,
		_Out_opt_ PULONG ReturnLength);
	NTSTATUS(*ZwReadFile)(
		_In_     HANDLE           FileHandle,
		_In_opt_ HANDLE           Event,
		_In_opt_ PVOID			  ApcRoutine,
		_In_opt_ PVOID            ApcContext,
		_Out_    PIO_STATUS_BLOCK IoStatusBlock,
		_Out_    PVOID            Buffer,
		_In_     ULONG            Length,
		_In_opt_ PQWORD           ByteOffset,
		_In_opt_ PULONG           Key
		);
	NTSTATUS(*ZwSetSystemInformation)(
		_In_ QWORD SystemInformationClass,
		_In_ PVOID SystemInformation,
		_In_ ULONG SystemInformationLength
		);
	NTSTATUS(*ZwWriteFile)(
		_In_ HANDLE FileHandle,
		_In_opt_ HANDLE Event,
		_In_opt_ PVOID ApcRoutine,
		_In_opt_ PVOID ApcContext,
		_Out_ PVOID IoStatusBlock,
		_In_reads_bytes_(Length) PVOID Buffer,
		_In_ ULONG Length,
		_In_opt_ PLARGE_INTEGER ByteOffset,
		_In_opt_ PULONG Key
		);
	decltype(&strlen) _strlen;
	PVOID pvStart;
} KERNEL_FUNCTIONS, *PKERNEL_FUNCTIONS;


// ----------------------------- ROR13 HASHES BELOW -----------------------------

#include "ntos_hash.h"
#include "ci_hash.h"

// ----------------------------- FUNCTION DECLARATIONS BELOW -----------------------------

DWORD HashROR13A(_In_ LPCSTR sz);
QWORD PEGetProcAddressH(_In_ QWORD hModule, _In_ DWORD dwProcNameH);
VOID InitializeKernelFunctions(_In_ QWORD qwNtosBase, _Out_ PKERNEL_FUNCTIONS fnk);
DWORD PEGetImageSize(_In_ QWORD hModule);
QWORD KernelGetModuleBase(_In_ PKERNEL_FUNCTIONS fnk, _In_ LPSTR szModuleName);
VOID CommonSleep(_In_ PKERNEL_FUNCTIONS fnk, _In_ DWORD ms);

EXTERN_C QWORD GetCR3();
EXTERN_C VOID CacheFlush();

