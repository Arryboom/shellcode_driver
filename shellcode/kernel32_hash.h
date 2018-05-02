#pragma once
using T_AcquireSRWLockExclusive = decltype(&AcquireSRWLockExclusive);
#define H_AcquireSRWLockExclusive 0xa77d8d5a
using T_AcquireSRWLockShared = decltype(&AcquireSRWLockShared);
#define H_AcquireSRWLockShared 0xe2385c49
using T_ActivateActCtx = decltype(&ActivateActCtx);
#define H_ActivateActCtx 0x2fa60624
using T_AddAtomA = decltype(&AddAtomA);
#define H_AddAtomA 0xecfc3453
using T_AddAtomW = decltype(&AddAtomW);
#define H_AddAtomW 0xecfc3469
using T_AddConsoleAliasA = decltype(&AddConsoleAliasA);
#define H_AddConsoleAliasA 0x99161276
using T_AddConsoleAliasW = decltype(&AddConsoleAliasW);
#define H_AddConsoleAliasW 0x9916128c
using T_AddDllDirectory = decltype(&AddDllDirectory);
#define H_AddDllDirectory 0xe3eac3e7
using T_AddIntegrityLabelToBoundaryDescriptor = decltype(&AddIntegrityLabelToBoundaryDescriptor);
#define H_AddIntegrityLabelToBoundaryDescriptor 0x730cefae
//using T_AddLocalAlternateComputerNameA = decltype(&AddLocalAlternateComputerNameA);
#define H_AddLocalAlternateComputerNameA 0x33675025
//using T_AddLocalAlternateComputerNameW = decltype(&AddLocalAlternateComputerNameW);
#define H_AddLocalAlternateComputerNameW 0x3367503b
using T_AddRefActCtx = decltype(&AddRefActCtx);
#define H_AddRefActCtx 0xbfc36e12
using T_AddSIDToBoundaryDescriptor = decltype(&AddSIDToBoundaryDescriptor);
#define H_AddSIDToBoundaryDescriptor 0xcdc729ab
using T_AddSecureMemoryCacheCallback = decltype(&AddSecureMemoryCacheCallback);
#define H_AddSecureMemoryCacheCallback 0x6b8b8fd9
using T_AddVectoredContinueHandler = decltype(&AddVectoredContinueHandler);
#define H_AddVectoredContinueHandler 0x1a945c3b
using T_AddVectoredExceptionHandler = decltype(&AddVectoredExceptionHandler);
#define H_AddVectoredExceptionHandler 0x159b3ea0
//using T_AdjustCalendarDate = decltype(&AdjustCalendarDate);
#define H_AdjustCalendarDate 0x2ca68404
using T_AllocConsole = decltype(&AllocConsole);
#define H_AllocConsole 0xd9f868d8
using T_AllocateUserPhysicalPages = decltype(&AllocateUserPhysicalPages);
#define H_AllocateUserPhysicalPages 0x6493dfd5
using T_AllocateUserPhysicalPagesNuma = decltype(&AllocateUserPhysicalPagesNuma);
#define H_AllocateUserPhysicalPagesNuma 0xdd6573ea
using T_ApplicationRecoveryFinished = decltype(&ApplicationRecoveryFinished);
#define H_ApplicationRecoveryFinished 0xceb4fb95
using T_ApplicationRecoveryInProgress = decltype(&ApplicationRecoveryInProgress);
#define H_ApplicationRecoveryInProgress 0xcffaea64
using T_AreFileApisANSI = decltype(&AreFileApisANSI);
#define H_AreFileApisANSI 0xe4efb688
using T_AssignProcessToJobObject = decltype(&AssignProcessToJobObject);
#define H_AssignProcessToJobObject 0x6a5da562
using T_AttachConsole = decltype(&AttachConsole);
#define H_AttachConsole 0xce5e158a
using T_BackupRead = decltype(&BackupRead);
#define H_BackupRead 0x89bd363f
using T_BackupSeek = decltype(&BackupSeek);
#define H_BackupSeek 0x8bdd3646
using T_BackupWrite = decltype(&BackupWrite);
#define H_BackupWrite 0xcc7ca04e
//using T_BaseCheckAppcompatCache = decltype(&BaseCheckAppcompatCache);
#define H_BaseCheckAppcompatCache 0xb683d0d4
//using T_BaseCheckAppcompatCacheEx = decltype(&BaseCheckAppcompatCacheEx);
#define H_BaseCheckAppcompatCacheEx 0xa31c35a5
//using T_BaseCheckRunApp = decltype(&BaseCheckRunApp);
#define H_BaseCheckRunApp 0x3781bc7b
//using T_BaseCleanupAppcompatCacheSupport = decltype(&BaseCleanupAppcompatCacheSupport);
#define H_BaseCleanupAppcompatCacheSupport 0xcac9c870
//using T_BaseDllReadWriteIniFile = decltype(&BaseDllReadWriteIniFile);
#define H_BaseDllReadWriteIniFile 0x375ae853
//using T_BaseDumpAppcompatCache = decltype(&BaseDumpAppcompatCache);
#define H_BaseDumpAppcompatCache 0xdf047eac
//using T_BaseFlushAppcompatCache = decltype(&BaseFlushAppcompatCache);
#define H_BaseFlushAppcompatCache 0xb753c4f6
//using T_BaseFormatObjectAttributes = decltype(&BaseFormatObjectAttributes);
#define H_BaseFormatObjectAttributes 0x22f82c45
//using T_BaseFormatTimeOut = decltype(&BaseFormatTimeOut);
#define H_BaseFormatTimeOut 0x83a42b72
//using T_BaseGenerateAppCompatData = decltype(&BaseGenerateAppCompatData);
#define H_BaseGenerateAppCompatData 0x6810e3a3
//using T_BaseGetNamedObjectDirectory = decltype(&BaseGetNamedObjectDirectory);
#define H_BaseGetNamedObjectDirectory 0x90b64fe0
// using T_BaseInitAppcompatCacheSupport = decltype(&BaseInitAppcompatCacheSupport);
#define H_BaseInitAppcompatCacheSupport 0x4494f6fb
//using T_BaseIsAppcompatInfrastructureDisabled = decltype(&BaseIsAppcompatInfrastructureDisabled);
#define H_BaseIsAppcompatInfrastructureDisabled 0xeacee92d
//using T_BaseQueryModuleData = decltype(&BaseQueryModuleData);
#define H_BaseQueryModuleData 0x28d52adb
//using T_BaseSetLastNTError = decltype(&BaseSetLastNTError);
#define H_BaseSetLastNTError 0xe682201e
//using T_BaseThreadInitThunk = decltype(&BaseThreadInitThunk);
#define H_BaseThreadInitThunk 0x43dae5f3
//using T_BaseUpdateAppcompatCache = decltype(&BaseUpdateAppcompatCache);
#define H_BaseUpdateAppcompatCache 0x0a089932
//using T_BaseVerifyUnicodeString = decltype(&BaseVerifyUnicodeString);
#define H_BaseVerifyUnicodeString 0xbb8f6b00
//using T_Basep8BitStringToDynamicUnicodeString = decltype(&Basep8BitStringToDynamicUnicodeString);
#define H_Basep8BitStringToDynamicUnicodeString 0x6b889138
//using T_BasepAllocateActivationContextActivationBlock = decltype(&BasepAllocateActivationContextActivationBlock);
#define H_BasepAllocateActivationContextActivationBlock 0xcd75ff00
//using T_BasepAnsiStringToDynamicUnicodeString = decltype(&BasepAnsiStringToDynamicUnicodeString);
#define H_BasepAnsiStringToDynamicUnicodeString 0x1ad9b639
//using T_BasepCheckAppCompat = decltype(&BasepCheckAppCompat);
#define H_BasepCheckAppCompat 0x33113c44
//using T_BasepCheckBadapp = decltype(&BasepCheckBadapp);
#define H_BasepCheckBadapp 0x6c96ff9b
// T_BasepCheckWinSaferRestrictions = decltype(&BasepCheckWinSaferRestrictions);
#define H_BasepCheckWinSaferRestrictions 0xbc3379df
//using T_BasepFreeActivationContextActivationBlock = decltype(&BasepFreeActivationContextActivationBlock);
#define H_BasepFreeActivationContextActivationBlock 0x2454eb00
//using T_BasepFreeAppCompatData = decltype(&BasepFreeAppCompatData);
#define H_BasepFreeAppCompatData 0x19730033
//using T_BasepMapModuleHandle = decltype(&BasepMapModuleHandle);
#define H_BasepMapModuleHandle 0x5fbe19cc
using T_Beep = decltype(&Beep);
#define H_Beep 0x872819b0
using T_BeginUpdateResourceA = decltype(&BeginUpdateResourceA);
#define H_BeginUpdateResourceA 0xcd6b7f7c
using T_BeginUpdateResourceW = decltype(&BeginUpdateResourceW);
#define H_BeginUpdateResourceW 0xcd6b7f92
using T_BindIoCompletionCallback = decltype(&BindIoCompletionCallback);
#define H_BindIoCompletionCallback 0xb236b57c
using T_BuildCommDCBA = decltype(&BuildCommDCBA);
#define H_BuildCommDCBA 0xb0c04dd2
using T_BuildCommDCBAndTimeoutsA = decltype(&BuildCommDCBAndTimeoutsA);
#define H_BuildCommDCBAndTimeoutsA 0xdefb9c30
using T_BuildCommDCBAndTimeoutsW = decltype(&BuildCommDCBAndTimeoutsW);
#define H_BuildCommDCBAndTimeoutsW 0xdefb9c46
using T_BuildCommDCBW = decltype(&BuildCommDCBW);
#define H_BuildCommDCBW 0xb0c04de8
using T_CallNamedPipeA = decltype(&CallNamedPipeA);
#define H_CallNamedPipeA 0x5a1ba03f
using T_CallNamedPipeW = decltype(&CallNamedPipeW);
#define H_CallNamedPipeW 0x5a1ba055
using T_CallbackMayRunLong = decltype(&CallbackMayRunLong);
#define H_CallbackMayRunLong 0xefea2bd2
using T_CancelDeviceWakeupRequest = decltype(&CancelDeviceWakeupRequest);
#define H_CancelDeviceWakeupRequest 0x64f69166
using T_CancelIo = decltype(&CancelIo);
#define H_CancelIo 0xcdd25406
using T_CancelIoEx = decltype(&CancelIoEx);
#define H_CancelIoEx 0x76bd022b
using T_CancelSynchronousIo = decltype(&CancelSynchronousIo);
#define H_CancelSynchronousIo 0x7e2fd007
using T_CancelThreadpoolIo = decltype(&CancelThreadpoolIo);
#define H_CancelThreadpoolIo 0x3a6d3cc8
using T_CancelTimerQueueTimer = decltype(&CancelTimerQueueTimer);
#define H_CancelTimerQueueTimer 0x4d350c9c
using T_CancelWaitableTimer = decltype(&CancelWaitableTimer);
#define H_CancelWaitableTimer 0x9fd2a4c4
using T_ChangeTimerQueueTimer = decltype(&ChangeTimerQueueTimer);
#define H_ChangeTimerQueueTimer 0x69f71af3
//using T_CheckElevation = decltype(&CheckElevation);
#define H_CheckElevation 0x145f9703
//using T_CheckElevationEnabled = decltype(&CheckElevationEnabled);
#define H_CheckElevationEnabled 0x54350bfe
//using T_CheckForReadOnlyResource = decltype(&CheckForReadOnlyResource);
#define H_CheckForReadOnlyResource 0x235b6ce4
using T_CheckNameLegalDOS8Dot3A = decltype(&CheckNameLegalDOS8Dot3A);
#define H_CheckNameLegalDOS8Dot3A 0x97112b36
using T_CheckNameLegalDOS8Dot3W = decltype(&CheckNameLegalDOS8Dot3W);
#define H_CheckNameLegalDOS8Dot3W 0x97112b4c
using T_CheckRemoteDebuggerPresent = decltype(&CheckRemoteDebuggerPresent);
#define H_CheckRemoteDebuggerPresent 0x43af7d80
using T_ClearCommBreak = decltype(&ClearCommBreak);
#define H_ClearCommBreak 0x0e0dde9b
using T_ClearCommError = decltype(&ClearCommError);
#define H_ClearCommError 0x0e7e11e2
//using T_CloseConsoleHandle = decltype(&CloseConsoleHandle);
#define H_CloseConsoleHandle 0xe3c9a17b
using T_CloseHandle = decltype(&CloseHandle);
#define H_CloseHandle 0x0ffd97fb
using T_ClosePrivateNamespace = decltype(&ClosePrivateNamespace);
#define H_ClosePrivateNamespace 0x3440281c
//using T_CloseProfileUserMapping = decltype(&CloseProfileUserMapping);
#define H_CloseProfileUserMapping 0x28e3498f
using T_CloseThreadpool = decltype(&CloseThreadpool);
#define H_CloseThreadpool 0x43fc1da7
using T_CloseThreadpoolCleanupGroup = decltype(&CloseThreadpoolCleanupGroup);
#define H_CloseThreadpoolCleanupGroup 0x8acb9cb8
using T_CloseThreadpoolCleanupGroupMembers = decltype(&CloseThreadpoolCleanupGroupMembers);
#define H_CloseThreadpoolCleanupGroupMembers 0xa23e80f7
using T_CloseThreadpoolIo = decltype(&CloseThreadpoolIo);
#define H_CloseThreadpoolIo 0x014f6a40
using T_CloseThreadpoolTimer = decltype(&CloseThreadpoolTimer);
#define H_CloseThreadpoolTimer 0x772b6a86
using T_CloseThreadpoolWait = decltype(&CloseThreadpoolWait);
#define H_CloseThreadpoolWait 0x73228cf4
using T_CloseThreadpoolWork = decltype(&CloseThreadpoolWork);
#define H_CloseThreadpoolWork 0x736a906b
//using T_CmdBatNotification = decltype(&CmdBatNotification);
#define H_CmdBatNotification 0x47afe921
using T_CommConfigDialogA = decltype(&CommConfigDialogA);
#define H_CommConfigDialogA 0x5cf42170
using T_CommConfigDialogW = decltype(&CommConfigDialogW);
#define H_CommConfigDialogW 0x5cf42186
//using T_CompareCalendarDates = decltype(&CompareCalendarDates);
#define H_CompareCalendarDates 0xa427e7ec
using T_CompareFileTime = decltype(&CompareFileTime);
#define H_CompareFileTime 0x8a771684
using T_CompareStringA = decltype(&CompareStringA);
#define H_CompareStringA 0x6ae857a8
using T_CompareStringEx = decltype(&CompareStringEx);
#define H_CompareStringEx 0xbd6357ba
using T_CompareStringOrdinal = decltype(&CompareStringOrdinal);
#define H_CompareStringOrdinal 0x33e807c7
using T_CompareStringW = decltype(&CompareStringW);
#define H_CompareStringW 0x6ae857be
using T_ConnectNamedPipe = decltype(&ConnectNamedPipe);
#define H_ConnectNamedPipe 0xcb09c9f9
//using T_ConsoleMenuControl = decltype(&ConsoleMenuControl);
#define H_ConsoleMenuControl 0x134908be
using T_ContinueDebugEvent = decltype(&ContinueDebugEvent);
#define H_ContinueDebugEvent 0x0c256f48
//using T_ConvertCalDateTimeToSystemTime = decltype(&ConvertCalDateTimeToSystemTime);
#define H_ConvertCalDateTimeToSystemTime 0x33cf5cc1
using T_ConvertDefaultLocale = decltype(&ConvertDefaultLocale);
#define H_ConvertDefaultLocale 0xb73c7422
using T_ConvertFiberToThread = decltype(&ConvertFiberToThread);
#define H_ConvertFiberToThread 0xd1d82244
//using T_ConvertNLSDayOfWeekToWin32DayOfWeek = decltype(&ConvertNLSDayOfWeekToWin32DayOfWeek);
#define H_ConvertNLSDayOfWeekToWin32DayOfWeek 0xa03f5a7b
//using T_ConvertSystemTimeToCalDateTime = decltype(&ConvertSystemTimeToCalDateTime);
#define H_ConvertSystemTimeToCalDateTime 0xb3b4b5d8
using T_ConvertThreadToFiber = decltype(&ConvertThreadToFiber);
#define H_ConvertThreadToFiber 0x2e880484
using T_ConvertThreadToFiberEx = decltype(&ConvertThreadToFiberEx);
#define H_ConvertThreadToFiberEx 0xa4292183
using T_CopyContext = decltype(&CopyContext);
#define H_CopyContext 0x9cd6811d
using T_CopyFileA = decltype(&CopyFileA);
#define H_CopyFileA 0x99ec895e
using T_CopyFileExA = decltype(&CopyFileExA);
#define H_CopyFileExA 0x7ee258e7
using T_CopyFileExW = decltype(&CopyFileExW);
#define H_CopyFileExW 0x7ee258fd
using T_CopyFileTransactedA = decltype(&CopyFileTransactedA);
#define H_CopyFileTransactedA 0x347109cf
using T_CopyFileTransactedW = decltype(&CopyFileTransactedW);
#define H_CopyFileTransactedW 0x347109e5
using T_CopyFileW = decltype(&CopyFileW);
#define H_CopyFileW 0x99ec8974
using T_CopyLZFile = decltype(&CopyLZFile);
#define H_CopyLZFile 0x004be0cc
using T_CreateActCtxA = decltype(&CreateActCtxA);
#define H_CreateActCtxA 0xbfb2765c
using T_CreateActCtxW = decltype(&CreateActCtxW);
#define H_CreateActCtxW 0xbfb27672
using T_CreateBoundaryDescriptorA = decltype(&CreateBoundaryDescriptorA);
#define H_CreateBoundaryDescriptorA 0x313c79e9
using T_CreateBoundaryDescriptorW = decltype(&CreateBoundaryDescriptorW);
#define H_CreateBoundaryDescriptorW 0x313c79ff
using T_CreateConsoleScreenBuffer = decltype(&CreateConsoleScreenBuffer);
#define H_CreateConsoleScreenBuffer 0xec325b3e
using T_CreateDirectoryA = decltype(&CreateDirectoryA);
#define H_CreateDirectoryA 0x9fcf5965
using T_CreateDirectoryExA = decltype(&CreateDirectoryExA);
#define H_CreateDirectoryExA 0xf7965aa8
using T_CreateDirectoryExW = decltype(&CreateDirectoryExW);
#define H_CreateDirectoryExW 0xf7965abe
using T_CreateDirectoryTransactedA = decltype(&CreateDirectoryTransactedA);
#define H_CreateDirectoryTransactedA 0xf5e9bdd0
using T_CreateDirectoryTransactedW = decltype(&CreateDirectoryTransactedW);
#define H_CreateDirectoryTransactedW 0xf5e9bde6
using T_CreateDirectoryW = decltype(&CreateDirectoryW);
#define H_CreateDirectoryW 0x9fcf597b
using T_CreateEventA = decltype(&CreateEventA);
#define H_CreateEventA 0x30c4b281
using T_CreateEventExA = decltype(&CreateEventExA);
#define H_CreateEventExA 0x34eca18d
using T_CreateEventExW = decltype(&CreateEventExW);
#define H_CreateEventExW 0x34eca1a3
using T_CreateEventW = decltype(&CreateEventW);
#define H_CreateEventW 0x30c4b297
using T_CreateFiber = decltype(&CreateFiber);
#define H_CreateFiber 0x7c001556
using T_CreateFiberEx = decltype(&CreateFiberEx);
#define H_CreateFiberEx 0x022d5617
using T_CreateFileA = decltype(&CreateFileA);
#define H_CreateFileA 0x7c0017a5
using T_CreateFileMappingA = decltype(&CreateFileMappingA);
#define H_CreateFileMappingA 0x56c61229
using T_CreateFileMappingNumaA = decltype(&CreateFileMappingNumaA);
#define H_CreateFileMappingNumaA 0x4e2b80ee
using T_CreateFileMappingNumaW = decltype(&CreateFileMappingNumaW);
#define H_CreateFileMappingNumaW 0x4e2b8104
using T_CreateFileMappingW = decltype(&CreateFileMappingW);
#define H_CreateFileMappingW 0x56c6123f
using T_CreateFileTransactedA = decltype(&CreateFileTransactedA);
#define H_CreateFileTransactedA 0xecf5ed60
using T_CreateFileTransactedW = decltype(&CreateFileTransactedW);
#define H_CreateFileTransactedW 0xecf5ed76
using T_CreateFileW = decltype(&CreateFileW);
#define H_CreateFileW 0x7c0017bb
using T_CreateHardLinkA = decltype(&CreateHardLinkA);
#define H_CreateHardLinkA 0x58eb2281
using T_CreateHardLinkTransactedA = decltype(&CreateHardLinkTransactedA);
#define H_CreateHardLinkTransactedA 0xe430b017
using T_CreateHardLinkTransactedW = decltype(&CreateHardLinkTransactedW);
#define H_CreateHardLinkTransactedW 0xe430b02d
using T_CreateHardLinkW = decltype(&CreateHardLinkW);
#define H_CreateHardLinkW 0x58eb2297
using T_CreateIoCompletionPort = decltype(&CreateIoCompletionPort);
#define H_CreateIoCompletionPort 0x05617ba9
using T_CreateJobObjectA = decltype(&CreateJobObjectA);
#define H_CreateJobObjectA 0x114ee3a5
using T_CreateJobObjectW = decltype(&CreateJobObjectW);
#define H_CreateJobObjectW 0x114ee3bb
using T_CreateJobSet = decltype(&CreateJobSet);
#define H_CreateJobSet 0xaa4c3bf6
using T_CreateMailslotA = decltype(&CreateMailslotA);
#define H_CreateMailslotA 0x641192c5
using T_CreateMailslotW = decltype(&CreateMailslotW);
#define H_CreateMailslotW 0x641192db
using T_CreateMemoryResourceNotification = decltype(&CreateMemoryResourceNotification);
#define H_CreateMemoryResourceNotification 0x55fe87e3
using T_CreateMutexA = decltype(&CreateMutexA);
#define H_CreateMutexA 0x4ee4a045
using T_CreateMutexExA = decltype(&CreateMutexExA);
#define H_CreateMutexExA 0xbce81294
using T_CreateMutexExW = decltype(&CreateMutexExW);
#define H_CreateMutexExW 0xbce812aa
using T_CreateMutexW = decltype(&CreateMutexW);
#define H_CreateMutexW 0x4ee4a05b
using T_CreateNamedPipeA = decltype(&CreateNamedPipeA);
#define H_CreateNamedPipeA 0x0b2d6846
using T_CreateNamedPipeW = decltype(&CreateNamedPipeW);
#define H_CreateNamedPipeW 0x0b2d685c
using T_CreatePipe = decltype(&CreatePipe);
#define H_CreatePipe 0x170c8f80
using T_CreatePrivateNamespaceA = decltype(&CreatePrivateNamespaceA);
#define H_CreatePrivateNamespaceA 0xd139074d
using T_CreatePrivateNamespaceW = decltype(&CreatePrivateNamespaceW);
#define H_CreatePrivateNamespaceW 0xd1390763
using T_CreateProcessA = decltype(&CreateProcessA);
#define H_CreateProcessA 0x16b3fe72
using T_CreateProcessAsUserW = decltype(&CreateProcessAsUserW);
#define H_CreateProcessAsUserW 0x635dc4a1
//using T_CreateProcessInternalA = decltype(&CreateProcessInternalA);
#define H_CreateProcessInternalA 0xdb4dfa72
//using T_CreateProcessInternalW = decltype(&CreateProcessInternalW);
#define H_CreateProcessInternalW 0xdb4dfa88
using T_CreateProcessW = decltype(&CreateProcessW);
#define H_CreateProcessW 0x16b3fe88
using T_CreateRemoteThread = decltype(&CreateRemoteThread);
#define H_CreateRemoteThread 0x72bd9cdd
using T_CreateRemoteThreadEx = decltype(&CreateRemoteThreadEx);
#define H_CreateRemoteThreadEx 0xb18f37d4
using T_CreateSemaphoreA = decltype(&CreateSemaphoreA);
#define H_CreateSemaphoreA 0x1b1f10cc
using T_CreateSemaphoreExA = decltype(&CreateSemaphoreExA);
#define H_CreateSemaphoreExA 0xcb843447
using T_CreateSemaphoreExW = decltype(&CreateSemaphoreExW);
#define H_CreateSemaphoreExW 0xcb84345d
using T_CreateSemaphoreW = decltype(&CreateSemaphoreW);
#define H_CreateSemaphoreW 0x1b1f10e2
using T_CreateSymbolicLinkA = decltype(&CreateSymbolicLinkA);
#define H_CreateSymbolicLinkA 0x6a9cd25b
using T_CreateSymbolicLinkTransactedA = decltype(&CreateSymbolicLinkTransactedA);
#define H_CreateSymbolicLinkTransactedA 0x689d1c0e
using T_CreateSymbolicLinkTransactedW = decltype(&CreateSymbolicLinkTransactedW);
#define H_CreateSymbolicLinkTransactedW 0x689d1c24
using T_CreateSymbolicLinkW = decltype(&CreateSymbolicLinkW);
#define H_CreateSymbolicLinkW 0x6a9cd271
using T_CreateTapePartition = decltype(&CreateTapePartition);
#define H_CreateTapePartition 0xa1b2b801
using T_CreateThread = decltype(&CreateThread);
#define H_CreateThread 0xca2bd06b
using T_CreateThreadpool = decltype(&CreateThreadpool);
#define H_CreateThreadpool 0xa07ed8cf
using T_CreateThreadpoolCleanupGroup = decltype(&CreateThreadpoolCleanupGroup);
#define H_CreateThreadpoolCleanupGroup 0x52f74f3e
using T_CreateThreadpoolIo = decltype(&CreateThreadpoolIo);
#define H_CreateThreadpoolIo 0x21fe3457
using T_CreateThreadpoolTimer = decltype(&CreateThreadpoolTimer);
#define H_CreateThreadpoolTimer 0xa56cc81a
using T_CreateThreadpoolWait = decltype(&CreateThreadpoolWait);
#define H_CreateThreadpoolWait 0x9ed512bc
using T_CreateThreadpoolWork = decltype(&CreateThreadpoolWork);
#define H_CreateThreadpoolWork 0x9f1d1633
using T_CreateTimerQueue = decltype(&CreateTimerQueue);
#define H_CreateTimerQueue 0x2bada5b1
using T_CreateTimerQueueTimer = decltype(&CreateTimerQueueTimer);
#define H_CreateTimerQueueTimer 0x6b042e8b
using T_CreateToolhelp32Snapshot = decltype(&CreateToolhelp32Snapshot);
#define H_CreateToolhelp32Snapshot 0xe454dfed
using T_CreateUmsCompletionList = decltype(&CreateUmsCompletionList);
#define H_CreateUmsCompletionList 0xb23102c0
using T_CreateUmsThreadContext = decltype(&CreateUmsThreadContext);
#define H_CreateUmsThreadContext 0x60ef357b
using T_CreateWaitableTimerA = decltype(&CreateWaitableTimerA);
#define H_CreateWaitableTimerA 0x0a62e290
using T_CreateWaitableTimerExA = decltype(&CreateWaitableTimerExA);
#define H_CreateWaitableTimerExA 0x9c78a543
using T_CreateWaitableTimerExW = decltype(&CreateWaitableTimerExW);
#define H_CreateWaitableTimerExW 0x9c78a559
using T_CreateWaitableTimerW = decltype(&CreateWaitableTimerW);
#define H_CreateWaitableTimerW 0x0a62e2a6
//using T_CtrlRoutine = decltype(&CtrlRoutine);
#define H_CtrlRoutine 0x9ec3186e
using T_DeactivateActCtx = decltype(&DeactivateActCtx);
#define H_DeactivateActCtx 0xbfa79a2c
using T_DebugActiveProcess = decltype(&DebugActiveProcess);
#define H_DebugActiveProcess 0xb58f38e6
using T_DebugActiveProcessStop = decltype(&DebugActiveProcessStop);
#define H_DebugActiveProcessStop 0x9d0688c9
using T_DebugBreak = decltype(&DebugBreak);
#define H_DebugBreak 0xcde2661f
using T_DebugBreakProcess = decltype(&DebugBreakProcess);
#define H_DebugBreakProcess 0x872bcde6
using T_DebugSetProcessKillOnExit = decltype(&DebugSetProcessKillOnExit);
#define H_DebugSetProcessKillOnExit 0x40d495c6
using T_DecodePointer = decltype(&DecodePointer);
#define H_DecodePointer 0x853c36a3
using T_DecodeSystemPointer = decltype(&DecodeSystemPointer);
#define H_DecodeSystemPointer 0xaa48f3cd
using T_DefineDosDeviceA = decltype(&DefineDosDeviceA);
#define H_DefineDosDeviceA 0xb91f4246
using T_DefineDosDeviceW = decltype(&DefineDosDeviceW);
#define H_DefineDosDeviceW 0xb91f425c
//using T_DelayLoadFailureHook = decltype(&DelayLoadFailureHook);
#define H_DelayLoadFailureHook 0xf0404375
using T_DeleteAtom = decltype(&DeleteAtom);
#define H_DeleteAtom 0xec149b27
using T_DeleteBoundaryDescriptor = decltype(&DeleteBoundaryDescriptor);
#define H_DeleteBoundaryDescriptor 0xcf5885f3
using T_DeleteCriticalSection = decltype(&DeleteCriticalSection);
#define H_DeleteCriticalSection 0x432b5045
using T_DeleteFiber = decltype(&DeleteFiber);
#define H_DeleteFiber 0xc2ffadd6
using T_DeleteFileA = decltype(&DeleteFileA);
#define H_DeleteFileA 0xc2ffb025
using T_DeleteFileTransactedA = decltype(&DeleteFileTransactedA);
#define H_DeleteFileTransactedA 0xfeb5d380
using T_DeleteFileTransactedW = decltype(&DeleteFileTransactedW);
#define H_DeleteFileTransactedW 0xfeb5d396
using T_DeleteFileW = decltype(&DeleteFileW);
#define H_DeleteFileW 0xc2ffb03b
using T_DeleteProcThreadAttributeList = decltype(&DeleteProcThreadAttributeList);
#define H_DeleteProcThreadAttributeList 0x1806cebd
using T_DeleteTimerQueue = decltype(&DeleteTimerQueue);
#define H_DeleteTimerQueue 0x4f2d71f1
using T_DeleteTimerQueueEx = decltype(&DeleteTimerQueueEx);
#define H_DeleteTimerQueueEx 0xcd847ccb
using T_DeleteTimerQueueTimer = decltype(&DeleteTimerQueueTimer);
#define H_DeleteTimerQueueTimer 0x7cc414ab
using T_DeleteUmsCompletionList = decltype(&DeleteUmsCompletionList);
#define H_DeleteUmsCompletionList 0x222a8ac5
using T_DeleteUmsThreadContext = decltype(&DeleteUmsThreadContext);
#define H_DeleteUmsThreadContext 0x91efc37a
using T_DeleteVolumeMountPointA = decltype(&DeleteVolumeMountPointA);
#define H_DeleteVolumeMountPointA 0x854f96da
using T_DeleteVolumeMountPointW = decltype(&DeleteVolumeMountPointW);
#define H_DeleteVolumeMountPointW 0x854f96f0
using T_DequeueUmsCompletionListItems = decltype(&DequeueUmsCompletionListItems);
#define H_DequeueUmsCompletionListItems 0xc8e4ef58
using T_DeviceIoControl = decltype(&DeviceIoControl);
#define H_DeviceIoControl 0xa8e14a7d
using T_DisableThreadLibraryCalls = decltype(&DisableThreadLibraryCalls);
#define H_DisableThreadLibraryCalls 0xb142a2ab
using T_DisableThreadProfiling = decltype(&DisableThreadProfiling);
#define H_DisableThreadProfiling 0xead01976
using T_DisassociateCurrentThreadFromCallback = decltype(&DisassociateCurrentThreadFromCallback);
#define H_DisassociateCurrentThreadFromCallback 0x62be0696
using T_DisconnectNamedPipe = decltype(&DisconnectNamedPipe);
#define H_DisconnectNamedPipe 0xdc7ccd45
using T_DnsHostnameToComputerNameA = decltype(&DnsHostnameToComputerNameA);
#define H_DnsHostnameToComputerNameA 0xcea9b8c4
using T_DnsHostnameToComputerNameW = decltype(&DnsHostnameToComputerNameW);
#define H_DnsHostnameToComputerNameW 0xcea9b8da
using T_DosDateTimeToFileTime = decltype(&DosDateTimeToFileTime);
#define H_DosDateTimeToFileTime 0x64128e78
//using T_DosPathToSessionPathA = decltype(&DosPathToSessionPathA);
#define H_DosPathToSessionPathA 0x81ce4a35
// using T_DosPathToSessionPathW = decltype(&DosPathToSessionPathW);
#define H_DosPathToSessionPathW 0x81ce4a4b
//using T_DuplicateConsoleHandle = decltype(&DuplicateConsoleHandle);
#define H_DuplicateConsoleHandle 0x8ee386b1
using T_DuplicateHandle = decltype(&DuplicateHandle);
#define H_DuplicateHandle 0xbd566724
using T_EnableThreadProfiling = decltype(&EnableThreadProfiling);
#define H_EnableThreadProfiling 0xaaae0f74
using T_EncodePointer = decltype(&EncodePointer);
#define H_EncodePointer 0x854e36b3
using T_EncodeSystemPointer = decltype(&EncodeSystemPointer);
#define H_EncodeSystemPointer 0xaa88f415
using T_EndUpdateResourceA = decltype(&EndUpdateResourceA);
#define H_EndUpdateResourceA 0x742ffa6b
using T_EndUpdateResourceW = decltype(&EndUpdateResourceW);
#define H_EndUpdateResourceW 0x742ffa81
using T_EnterCriticalSection = decltype(&EnterCriticalSection);
#define H_EnterCriticalSection 0xa39c10ba
using T_EnterUmsSchedulingMode = decltype(&EnterUmsSchedulingMode);
#define H_EnterUmsSchedulingMode 0x17d7f7cb
using T_EnumCalendarInfoA = decltype(&EnumCalendarInfoA);
#define H_EnumCalendarInfoA 0x468cb6d4
using T_EnumCalendarInfoExA = decltype(&EnumCalendarInfoExA);
#define H_EnumCalendarInfoExA 0xa6edb652
using T_EnumCalendarInfoExEx = decltype(&EnumCalendarInfoExEx);
#define H_EnumCalendarInfoExEx 0xb2b537e5
using T_EnumCalendarInfoExW = decltype(&EnumCalendarInfoExW);
#define H_EnumCalendarInfoExW 0xa6edb668
using T_EnumCalendarInfoW = decltype(&EnumCalendarInfoW);
#define H_EnumCalendarInfoW 0x468cb6ea
using T_EnumDateFormatsA = decltype(&EnumDateFormatsA);
#define H_EnumDateFormatsA 0x4768552c
using T_EnumDateFormatsExA = decltype(&EnumDateFormatsExA);
#define H_EnumDateFormatsExA 0xddd54c52
using T_EnumDateFormatsExEx = decltype(&EnumDateFormatsExEx);
#define H_EnumDateFormatsExEx 0x62b6ef22
using T_EnumDateFormatsExW = decltype(&EnumDateFormatsExW);
#define H_EnumDateFormatsExW 0xddd54c68
using T_EnumDateFormatsW = decltype(&EnumDateFormatsW);
#define H_EnumDateFormatsW 0x47685542
using T_EnumLanguageGroupLocalesA = decltype(&EnumLanguageGroupLocalesA);
#define H_EnumLanguageGroupLocalesA 0xcab007dc
using T_EnumLanguageGroupLocalesW = decltype(&EnumLanguageGroupLocalesW);
#define H_EnumLanguageGroupLocalesW 0xcab007f2
using T_EnumResourceLanguagesA = decltype(&EnumResourceLanguagesA);
#define H_EnumResourceLanguagesA 0x8b4cc75b
using T_EnumResourceLanguagesExA = decltype(&EnumResourceLanguagesExA);
#define H_EnumResourceLanguagesExA 0xd6f1d823
using T_EnumResourceLanguagesExW = decltype(&EnumResourceLanguagesExW);
#define H_EnumResourceLanguagesExW 0xd6f1d839
using T_EnumResourceLanguagesW = decltype(&EnumResourceLanguagesW);
#define H_EnumResourceLanguagesW 0x8b4cc771
using T_EnumResourceNamesA = decltype(&EnumResourceNamesA);
#define H_EnumResourceNamesA 0xdb8b9aab
using T_EnumResourceNamesExA = decltype(&EnumResourceNamesExA);
#define H_EnumResourceNamesExA 0xe6a6ac37
using T_EnumResourceNamesExW = decltype(&EnumResourceNamesExW);
#define H_EnumResourceNamesExW 0xe6a6ac4d
using T_EnumResourceNamesW = decltype(&EnumResourceNamesW);
#define H_EnumResourceNamesW 0xdb8b9ac1
using T_EnumResourceTypesA = decltype(&EnumResourceTypesA);
#define H_EnumResourceTypesA 0xe18d1aae
using T_EnumResourceTypesExA = decltype(&EnumResourceTypesExA);
#define H_EnumResourceTypesExA 0x6706acf9
using T_EnumResourceTypesExW = decltype(&EnumResourceTypesExW);
#define H_EnumResourceTypesExW 0x6706ad0f
using T_EnumResourceTypesW = decltype(&EnumResourceTypesW);
#define H_EnumResourceTypesW 0xe18d1ac4
using T_EnumSystemCodePagesA = decltype(&EnumSystemCodePagesA);
#define H_EnumSystemCodePagesA 0x386dc738
using T_EnumSystemCodePagesW = decltype(&EnumSystemCodePagesW);
#define H_EnumSystemCodePagesW 0x386dc74e
using T_EnumSystemFirmwareTables = decltype(&EnumSystemFirmwareTables);
#define H_EnumSystemFirmwareTables 0x253ad7ed
using T_EnumSystemGeoID = decltype(&EnumSystemGeoID);
#define H_EnumSystemGeoID 0xb8bf7e20
using T_EnumSystemLanguageGroupsA = decltype(&EnumSystemLanguageGroupsA);
#define H_EnumSystemLanguageGroupsA 0xc22a149f
using T_EnumSystemLanguageGroupsW = decltype(&EnumSystemLanguageGroupsW);
#define H_EnumSystemLanguageGroupsW 0xc22a14b5
using T_EnumSystemLocalesA = decltype(&EnumSystemLocalesA);
#define H_EnumSystemLocalesA 0x95331917
using T_EnumSystemLocalesEx = decltype(&EnumSystemLocalesEx);
#define H_EnumSystemLocalesEx 0xc8dcaa10
using T_EnumSystemLocalesW = decltype(&EnumSystemLocalesW);
#define H_EnumSystemLocalesW 0x9533192d
using T_EnumTimeFormatsA = decltype(&EnumTimeFormatsA);
#define H_EnumTimeFormatsA 0x47881d2e
using T_EnumTimeFormatsEx = decltype(&EnumTimeFormatsEx);
#define H_EnumTimeFormatsEx 0xe9923cb8
using T_EnumTimeFormatsW = decltype(&EnumTimeFormatsW);
#define H_EnumTimeFormatsW 0x47881d44
using T_EnumUILanguagesA = decltype(&EnumUILanguagesA);
#define H_EnumUILanguagesA 0xcf685667
using T_EnumUILanguagesW = decltype(&EnumUILanguagesW);
#define H_EnumUILanguagesW 0xcf68567d
//using T_EnumerateLocalComputerNamesA = decltype(&EnumerateLocalComputerNamesA);
#define H_EnumerateLocalComputerNamesA 0x9e15d236
//using T_EnumerateLocalComputerNamesW = decltype(&EnumerateLocalComputerNamesW);
#define H_EnumerateLocalComputerNamesW 0x9e15d24c
using T_EraseTape = decltype(&EraseTape);
#define H_EraseTape 0x720a771f
using T_EscapeCommFunction = decltype(&EscapeCommFunction);
#define H_EscapeCommFunction 0xb3504846
using T_ExecuteUmsThread = decltype(&ExecuteUmsThread);
#define H_ExecuteUmsThread 0x1149b5c5
using T_ExitProcess = decltype(&ExitProcess);
#define H_ExitProcess 0x73e2d87e
using T_ExitThread = decltype(&ExitThread);
#define H_ExitThread 0x60e0ceef
//using T_ExitVDM = decltype(&ExitVDM);
#define H_ExitVDM 0xeb3aa609
using T_ExpandEnvironmentStringsA = decltype(&ExpandEnvironmentStringsA);
#define H_ExpandEnvironmentStringsA 0xeeb585d8
using T_ExpandEnvironmentStringsW = decltype(&ExpandEnvironmentStringsW);
#define H_ExpandEnvironmentStringsW 0xeeb585ee
//using T_ExpungeConsoleCommandHistoryA = decltype(&ExpungeConsoleCommandHistoryA);
#define H_ExpungeConsoleCommandHistoryA 0xa66cb8f7
//using T_ExpungeConsoleCommandHistoryW = decltype(&ExpungeConsoleCommandHistoryW);
#define H_ExpungeConsoleCommandHistoryW 0xa66cb90d
using T_FatalAppExitA = decltype(&FatalAppExitA);
#define H_FatalAppExitA 0x62297f57
using T_FatalAppExitW = decltype(&FatalAppExitW);
#define H_FatalAppExitW 0x62297f6d
using T_FatalExit = decltype(&FatalExit);
#define H_FatalExit 0x551eeac5
using T_FileTimeToDosDateTime = decltype(&FileTimeToDosDateTime);
#define H_FileTimeToDosDateTime 0xeeaa79ea
using T_FileTimeToLocalFileTime = decltype(&FileTimeToLocalFileTime);
#define H_FileTimeToLocalFileTime 0x87171ee8
using T_FileTimeToSystemTime = decltype(&FileTimeToSystemTime);
#define H_FileTimeToSystemTime 0x3810cb0f
using T_FillConsoleOutputAttribute = decltype(&FillConsoleOutputAttribute);
#define H_FillConsoleOutputAttribute 0x70aa69fa
using T_FillConsoleOutputCharacterA = decltype(&FillConsoleOutputCharacterA);
#define H_FillConsoleOutputCharacterA 0x423b9f70
using T_FillConsoleOutputCharacterW = decltype(&FillConsoleOutputCharacterW);
#define H_FillConsoleOutputCharacterW 0x423b9f86
using T_FindActCtxSectionGuid = decltype(&FindActCtxSectionGuid);
#define H_FindActCtxSectionGuid 0x3429e0e2
using T_FindActCtxSectionStringA = decltype(&FindActCtxSectionStringA);
#define H_FindActCtxSectionStringA 0x51d0ff82
using T_FindActCtxSectionStringW = decltype(&FindActCtxSectionStringW);
#define H_FindActCtxSectionStringW 0x51d0ff98
using T_FindAtomA = decltype(&FindAtomA);
#define H_FindAtomA 0x33243954
using T_FindAtomW = decltype(&FindAtomW);
#define H_FindAtomW 0x3324396a
using T_FindClose = decltype(&FindClose);
#define H_FindClose 0x23545978
using T_FindCloseChangeNotification = decltype(&FindCloseChangeNotification);
#define H_FindCloseChangeNotification 0x48b46d47
using T_FindFirstChangeNotificationA = decltype(&FindFirstChangeNotificationA);
#define H_FindFirstChangeNotificationA 0x6a9be3d8
using T_FindFirstChangeNotificationW = decltype(&FindFirstChangeNotificationW);
#define H_FindFirstChangeNotificationW 0x6a9be3ee
using T_FindFirstFileA = decltype(&FindFirstFileA);
#define H_FindFirstFileA 0x63d6c065
using T_FindFirstFileExA = decltype(&FindFirstFileExA);
#define H_FindFirstFileExA 0xf9701a99
using T_FindFirstFileExW = decltype(&FindFirstFileExW);
#define H_FindFirstFileExW 0xf9701aaf
using T_FindFirstFileNameTransactedW = decltype(&FindFirstFileNameTransactedW);
#define H_FindFirstFileNameTransactedW 0x5a41b7fd
using T_FindFirstFileNameW = decltype(&FindFirstFileNameW);
#define H_FindFirstFileNameW 0x312f41d5
using T_FindFirstFileTransactedA = decltype(&FindFirstFileTransactedA);
#define H_FindFirstFileTransactedA 0xe6eb9790
using T_FindFirstFileTransactedW = decltype(&FindFirstFileTransactedW);
#define H_FindFirstFileTransactedW 0xe6eb97a6
using T_FindFirstFileW = decltype(&FindFirstFileW);
#define H_FindFirstFileW 0x63d6c07b
using T_FindFirstStreamTransactedW = decltype(&FindFirstStreamTransactedW);
#define H_FindFirstStreamTransactedW 0x6c4907f5
using T_FindFirstStreamW = decltype(&FindFirstStreamW);
#define H_FindFirstStreamW 0x794c81b5
using T_FindFirstVolumeA = decltype(&FindFirstVolumeA);
#define H_FindFirstVolumeA 0x1918249d
using T_FindFirstVolumeMountPointA = decltype(&FindFirstVolumeMountPointA);
#define H_FindFirstVolumeMountPointA 0x92c09ad4
using T_FindFirstVolumeMountPointW = decltype(&FindFirstVolumeMountPointW);
#define H_FindFirstVolumeMountPointW 0x92c09aea
using T_FindFirstVolumeW = decltype(&FindFirstVolumeW);
#define H_FindFirstVolumeW 0x191824b3
using T_FindNLSString = decltype(&FindNLSString);
#define H_FindNLSString 0x379888cd
using T_FindNLSStringEx = decltype(&FindNLSStringEx);
#define H_FindNLSStringEx 0xe84a33c5
using T_FindNextChangeNotification = decltype(&FindNextChangeNotification);
#define H_FindNextChangeNotification 0x9593f2c9
using T_FindNextFileA = decltype(&FindNextFileA);
#define H_FindNextFileA 0xa5e1ac97
using T_FindNextFileNameW = decltype(&FindNextFileNameW);
#define H_FindNextFileNameW 0xdff265f5
using T_FindNextFileW = decltype(&FindNextFileW);
#define H_FindNextFileW 0xa5e1acad
using T_FindNextStreamW = decltype(&FindNextStreamW);
#define H_FindNextStreamW 0xfc078e45
using T_FindNextVolumeA = decltype(&FindNextVolumeA);
#define H_FindNextVolumeA 0x9bd3312d
using T_FindNextVolumeMountPointA = decltype(&FindNextVolumeMountPointA);
#define H_FindNextVolumeMountPointA 0xb36f5df8
using T_FindNextVolumeMountPointW = decltype(&FindNextVolumeMountPointW);
#define H_FindNextVolumeMountPointW 0xb36f5e0e
using T_FindNextVolumeW = decltype(&FindNextVolumeW);
#define H_FindNextVolumeW 0x9bd33143
using T_FindResourceA = decltype(&FindResourceA);
#define H_FindResourceA 0x3bd09a55
using T_FindResourceExA = decltype(&FindResourceExA);
#define H_FindResourceExA 0xf7e6968f
using T_FindResourceExW = decltype(&FindResourceExW);
#define H_FindResourceExW 0xf7e696a5
using T_FindResourceW = decltype(&FindResourceW);
#define H_FindResourceW 0x3bd09a6b
using T_FindStringOrdinal = decltype(&FindStringOrdinal);
#define H_FindStringOrdinal 0x177d6e60
using T_FindVolumeClose = decltype(&FindVolumeClose);
#define H_FindVolumeClose 0x7e9cf1ee
using T_FindVolumeMountPointClose = decltype(&FindVolumeMountPointClose);
#define H_FindVolumeMountPointClose 0xad743e5f
using T_FlsAlloc = decltype(&FlsAlloc);
#define H_FlsAlloc 0x5d2c345d
using T_FlsFree = decltype(&FlsFree);
#define H_FlsFree 0x90474d1b
using T_FlsGetValue = decltype(&FlsGetValue);
#define H_FlsGetValue 0xba44e491
using T_FlsSetValue = decltype(&FlsSetValue);
#define H_FlsSetValue 0xba44e611
using T_FlushConsoleInputBuffer = decltype(&FlushConsoleInputBuffer);
#define H_FlushConsoleInputBuffer 0xe3f4a4cb
using T_FlushFileBuffers = decltype(&FlushFileBuffers);
#define H_FlushFileBuffers 0x37f385d9
using T_FlushInstructionCache = decltype(&FlushInstructionCache);
#define H_FlushInstructionCache 0x53120980
using T_FlushProcessWriteBuffers = decltype(&FlushProcessWriteBuffers);
#define H_FlushProcessWriteBuffers 0x2c3bbf2f
using T_FlushViewOfFile = decltype(&FlushViewOfFile);
#define H_FlushViewOfFile 0xb12c56d7
using T_FoldStringA = decltype(&FoldStringA);
#define H_FoldStringA 0xc28ec08d
using T_FoldStringW = decltype(&FoldStringW);
#define H_FoldStringW 0xc28ec0a3
using T_FormatMessageA = decltype(&FormatMessageA);
#define H_FormatMessageA 0x1eaa62e7
using T_FormatMessageW = decltype(&FormatMessageW);
#define H_FormatMessageW 0x1eaa62fd
using T_FreeConsole = decltype(&FreeConsole);
#define H_FreeConsole 0x4f76990f
using T_FreeEnvironmentStringsA = decltype(&FreeEnvironmentStringsA);
#define H_FreeEnvironmentStringsA 0x4fbdc230
using T_FreeEnvironmentStringsW = decltype(&FreeEnvironmentStringsW);
#define H_FreeEnvironmentStringsW 0x4fbdc246
using T_FreeLibrary = decltype(&FreeLibrary);
#define H_FreeLibrary 0x4dc9d5a0
using T_FreeLibraryAndExitThread = decltype(&FreeLibraryAndExitThread);
#define H_FreeLibraryAndExitThread 0x31e3b803
using T_FreeLibraryWhenCallbackReturns = decltype(&FreeLibraryWhenCallbackReturns);
#define H_FreeLibraryWhenCallbackReturns 0xecebc948
using T_FreeResource = decltype(&FreeResource);
#define H_FreeResource 0x54423f7c
using T_FreeUserPhysicalPages = decltype(&FreeUserPhysicalPages);
#define H_FreeUserPhysicalPages 0x831c3f23
using T_GenerateConsoleCtrlEvent = decltype(&GenerateConsoleCtrlEvent);
#define H_GenerateConsoleCtrlEvent 0x3ddc4cf9
using T_GetACP = decltype(&GetACP);
#define H_GetACP 0x6a1e60b4
using T_GetActiveProcessorCount = decltype(&GetActiveProcessorCount);
#define H_GetActiveProcessorCount 0x586f2659
using T_GetActiveProcessorGroupCount = decltype(&GetActiveProcessorGroupCount);
#define H_GetActiveProcessorGroupCount 0x90c8001f
using T_GetApplicationRecoveryCallback = decltype(&GetApplicationRecoveryCallback);
#define H_GetApplicationRecoveryCallback 0xb2d54de3
using T_GetApplicationRestartSettings = decltype(&GetApplicationRestartSettings);
#define H_GetApplicationRestartSettings 0xe671fdae
using T_GetAtomNameA = decltype(&GetAtomNameA);
#define H_GetAtomNameA 0xc87aaa51
using T_GetAtomNameW = decltype(&GetAtomNameW);
#define H_GetAtomNameW 0xc87aaa67
using T_GetBinaryType = decltype(&GetBinaryType);
#define H_GetBinaryType 0x16d7d12c
using T_GetBinaryTypeA = decltype(&GetBinaryTypeA);
#define H_GetBinaryTypeA 0x8960b6ff
using T_GetBinaryTypeW = decltype(&GetBinaryTypeW);
#define H_GetBinaryTypeW 0x8960b715
using T_GetCPInfo = decltype(&GetCPInfo);
#define H_GetCPInfo 0x5e0528b1
using T_GetCPInfoExA = decltype(&GetCPInfoExA);
#define H_GetCPInfoExA 0x667c1bd2
using T_GetCPInfoExW = decltype(&GetCPInfoExW);
#define H_GetCPInfoExW 0x667c1be8
//using T_GetCalendarDateFormat = decltype(&GetCalendarDateFormat);
#define H_GetCalendarDateFormat 0x0ecaa0df
//using T_GetCalendarDateFormatEx = decltype(&GetCalendarDateFormatEx);
#define H_GetCalendarDateFormatEx 0xb4d0383b
//using T_GetCalendarDaysInMonth = decltype(&GetCalendarDaysInMonth);
#define H_GetCalendarDaysInMonth 0x90022bbc
//using T_GetCalendarDifferenceInDays = decltype(&GetCalendarDifferenceInDays);
#define H_GetCalendarDifferenceInDays 0x494cec53
using T_GetCalendarInfoA = decltype(&GetCalendarInfoA);
#define H_GetCalendarInfoA 0x69c776cf
using T_GetCalendarInfoEx = decltype(&GetCalendarInfoEx);
#define H_GetCalendarInfoEx 0xb69b4eb3
using T_GetCalendarInfoW = decltype(&GetCalendarInfoW);
#define H_GetCalendarInfoW 0x69c776e5
//using T_GetCalendarMonthsInYear = decltype(&GetCalendarMonthsInYear);
#define H_GetCalendarMonthsInYear 0xb4d218a4
//using T_GetCalendarSupportedDateRange = decltype(&GetCalendarSupportedDateRange);
#define H_GetCalendarSupportedDateRange 0x8ab4577e
//using T_GetCalendarWeekNumber = decltype(&GetCalendarWeekNumber);
#define H_GetCalendarWeekNumber 0x09039441
//using T_GetComPlusPackageInstallStatus = decltype(&GetComPlusPackageInstallStatus);
#define H_GetComPlusPackageInstallStatus 0x8d082211
using T_GetCommConfig = decltype(&GetCommConfig);
#define H_GetCommConfig 0xd0cf3436
using T_GetCommMask = decltype(&GetCommMask);
#define H_GetCommMask 0x535e1954
using T_GetCommModemStatus = decltype(&GetCommModemStatus);
#define H_GetCommModemStatus 0xa426f767
using T_GetCommProperties = decltype(&GetCommProperties);
#define H_GetCommProperties 0xe1949fde
using T_GetCommState = decltype(&GetCommState);
#define H_GetCommState 0xf0eaf6d5
using T_GetCommTimeouts = decltype(&GetCommTimeouts);
#define H_GetCommTimeouts 0xc35503c6
using T_GetCommandLineA = decltype(&GetCommandLineA);
#define H_GetCommandLineA 0x36ef7370
using T_GetCommandLineW = decltype(&GetCommandLineW);
#define H_GetCommandLineW 0x36ef7386
using T_GetCompressedFileSizeA = decltype(&GetCompressedFileSizeA);
#define H_GetCompressedFileSizeA 0x7199b6ea
using T_GetCompressedFileSizeTransactedA = decltype(&GetCompressedFileSizeTransactedA);
#define H_GetCompressedFileSizeTransactedA 0x2a5c5532
using T_GetCompressedFileSizeTransactedW = decltype(&GetCompressedFileSizeTransactedW);
#define H_GetCompressedFileSizeTransactedW 0x2a5c5548
using T_GetCompressedFileSizeW = decltype(&GetCompressedFileSizeW);
#define H_GetCompressedFileSizeW 0x7199b700
using T_GetComputerNameA = decltype(&GetComputerNameA);
#define H_GetComputerNameA 0x96a4228f
using T_GetComputerNameExA = decltype(&GetComputerNameExA);
#define H_GetComputerNameExA 0xacc8a526
using T_GetComputerNameExW = decltype(&GetComputerNameExW);
#define H_GetComputerNameExW 0xacc8a53c
using T_GetComputerNameW = decltype(&GetComputerNameW);
#define H_GetComputerNameW 0x96a422a5
using T_GetConsoleAliasA = decltype(&GetConsoleAliasA);
#define H_GetConsoleAliasA 0x61161677
using T_GetConsoleAliasExesA = decltype(&GetConsoleAliasExesA);
#define H_GetConsoleAliasExesA 0x54ffcf93
using T_GetConsoleAliasExesLengthA = decltype(&GetConsoleAliasExesLengthA);
#define H_GetConsoleAliasExesLengthA 0x8fc05173
using T_GetConsoleAliasExesLengthW = decltype(&GetConsoleAliasExesLengthW);
#define H_GetConsoleAliasExesLengthW 0x8fc05189
using T_GetConsoleAliasExesW = decltype(&GetConsoleAliasExesW);
#define H_GetConsoleAliasExesW 0x54ffcfa9
using T_GetConsoleAliasW = decltype(&GetConsoleAliasW);
#define H_GetConsoleAliasW 0x6116168d
using T_GetConsoleAliasesA = decltype(&GetConsoleAliasesA);
#define H_GetConsoleAliasesA 0x491da719
using T_GetConsoleAliasesLengthA = decltype(&GetConsoleAliasesLengthA);
#define H_GetConsoleAliasesLengthA 0xedd821ea
using T_GetConsoleAliasesLengthW = decltype(&GetConsoleAliasesLengthW);
#define H_GetConsoleAliasesLengthW 0xedd82200
using T_GetConsoleAliasesW = decltype(&GetConsoleAliasesW);
#define H_GetConsoleAliasesW 0x491da72f
using T_GetConsoleCP = decltype(&GetConsoleCP);
#define H_GetConsoleCP 0xdf68b7c3
//using T_GetConsoleCharType = decltype(&GetConsoleCharType);
#define H_GetConsoleCharType 0x0af6bc79
//using T_GetConsoleCommandHistoryA = decltype(&GetConsoleCommandHistoryA);
#define H_GetConsoleCommandHistoryA 0xf9c0913f
//using T_GetConsoleCommandHistoryLengthA = decltype(&GetConsoleCommandHistoryLengthA);
#define H_GetConsoleCommandHistoryLengthA 0x9672e476
//using T_GetConsoleCommandHistoryLengthW = decltype(&GetConsoleCommandHistoryLengthW);
#define H_GetConsoleCommandHistoryLengthW 0x9672e48c
//using T_GetConsoleCommandHistoryW = decltype(&GetConsoleCommandHistoryW);
#define H_GetConsoleCommandHistoryW 0xf9c09155
using T_GetConsoleCursorInfo = decltype(&GetConsoleCursorInfo);
#define H_GetConsoleCursorInfo 0xffe2b31e
//using T_GetConsoleCursorMode = decltype(&GetConsoleCursorMode);
#define H_GetConsoleCursorMode 0x07d2b355
using T_GetConsoleDisplayMode = decltype(&GetConsoleDisplayMode);
#define H_GetConsoleDisplayMode 0x1796a152
//using T_GetConsoleFontInfo = decltype(&GetConsoleFontInfo);
#define H_GetConsoleFontInfo 0x74c2da29
using T_GetConsoleFontSize = decltype(&GetConsoleFontSize);
#define H_GetConsoleFontSize 0x8962d8df
//using T_GetConsoleHardwareState = decltype(&GetConsoleHardwareState);
#define H_GetConsoleHardwareState 0xd41a3436
using T_GetConsoleHistoryInfo = decltype(&GetConsoleHistoryInfo);
#define H_GetConsoleHistoryInfo 0x8fb2a1a5
//using T_GetConsoleInputExeNameA = decltype(&GetConsoleInputExeNameA);
#define H_GetConsoleInputExeNameA 0x2ad46ba2
// using T_GetConsoleInputExeNameW = decltype(&GetConsoleInputExeNameW);
#define H_GetConsoleInputExeNameW 0x2ad46bb8
// T_GetConsoleInputWaitHandle = decltype(&GetConsoleInputWaitHandle);
#define H_GetConsoleInputWaitHandle 0x3412c223
//using T_GetConsoleKeyboardLayoutNameA = decltype(&GetConsoleKeyboardLayoutNameA);
#define H_GetConsoleKeyboardLayoutNameA 0xaf0c93a2
//using T_GetConsoleKeyboardLayoutNameW = decltype(&GetConsoleKeyboardLayoutNameW);
#define H_GetConsoleKeyboardLayoutNameW 0xaf0c93b8
using T_GetConsoleMode = decltype(&GetConsoleMode);
#define H_GetConsoleMode 0xf14df91c
//using T_GetConsoleNlsMode = decltype(&GetConsoleNlsMode);
#define H_GetConsoleNlsMode 0x8d07a815
using T_GetConsoleOriginalTitleA = decltype(&GetConsoleOriginalTitleA);
#define H_GetConsoleOriginalTitleA 0x183f7e04
using T_GetConsoleOriginalTitleW = decltype(&GetConsoleOriginalTitleW);
#define H_GetConsoleOriginalTitleW 0x183f7e1a
using T_GetConsoleOutputCP = decltype(&GetConsoleOutputCP);
#define H_GetConsoleOutputCP 0xcbc29cad
using T_GetConsoleProcessList = decltype(&GetConsoleProcessList);
#define H_GetConsoleProcessList 0x11f2864d
using T_GetConsoleScreenBufferInfo = decltype(&GetConsoleScreenBufferInfo);
#define H_GetConsoleScreenBufferInfo 0xe87abacd
using T_GetConsoleScreenBufferInfoEx = decltype(&GetConsoleScreenBufferInfoEx);
#define H_GetConsoleScreenBufferInfoEx 0x20d6b3f2
using T_GetConsoleSelectionInfo = decltype(&GetConsoleSelectionInfo);
#define H_GetConsoleSelectionInfo 0xe98ff293
using T_GetConsoleTitleA = decltype(&GetConsoleTitleA);
#define H_GetConsoleTitleA 0xf6a5e940
using T_GetConsoleTitleW = decltype(&GetConsoleTitleW);
#define H_GetConsoleTitleW 0xf6a5e956
using T_GetConsoleWindow = decltype(&GetConsoleWindow);
#define H_GetConsoleWindow 0x6af5e778
using T_GetCurrencyFormatA = decltype(&GetCurrencyFormatA);
#define H_GetCurrencyFormatA 0xbd8ccd59
using T_GetCurrencyFormatEx = decltype(&GetCurrencyFormatEx);
#define H_GetCurrencyFormatEx 0x6aedecde
using T_GetCurrencyFormatW = decltype(&GetCurrencyFormatW);
#define H_GetCurrencyFormatW 0xbd8ccd6f
using T_GetCurrentActCtx = decltype(&GetCurrentActCtx);
#define H_GetCurrentActCtx 0x6d65776f
using T_GetCurrentConsoleFont = decltype(&GetCurrentConsoleFont);
#define H_GetCurrentConsoleFont 0xc0158de6
using T_GetCurrentConsoleFontEx = decltype(&GetCurrentConsoleFontEx);
#define H_GetCurrentConsoleFontEx 0x078b7a28
using T_GetCurrentDirectoryA = decltype(&GetCurrentDirectoryA);
#define H_GetCurrentDirectoryA 0xbfc6eb4f
using T_GetCurrentDirectoryW = decltype(&GetCurrentDirectoryW);
#define H_GetCurrentDirectoryW 0xbfc6eb65
using T_GetCurrentProcess = decltype(&GetCurrentProcess);
#define H_GetCurrentProcess 0x7b8f17e6
using T_GetCurrentProcessId = decltype(&GetCurrentProcessId);
#define H_GetCurrentProcessId 0xe60dfa02
using T_GetCurrentProcessorNumber = decltype(&GetCurrentProcessorNumber);
#define H_GetCurrentProcessorNumber 0xc5730611
using T_GetCurrentProcessorNumberEx = decltype(&GetCurrentProcessorNumberEx);
#define H_GetCurrentProcessorNumberEx 0x5ee984e9
using T_GetCurrentThread = decltype(&GetCurrentThread);
#define H_GetCurrentThread 0xe8cdcfe4
using T_GetCurrentThreadId = decltype(&GetCurrentThreadId);
#define H_GetCurrentThreadId 0x35bbf99e
using T_GetCurrentUmsThread = decltype(&GetCurrentUmsThread);
#define H_GetCurrentUmsThread 0x69de25db
using T_GetDateFormatA = decltype(&GetDateFormatA);
#define H_GetDateFormatA 0xf72a53ba
using T_GetDateFormatEx = decltype(&GetDateFormatEx);
#define H_GetDateFormatEx 0x9df7b9ca
using T_GetDateFormatW = decltype(&GetDateFormatW);
#define H_GetDateFormatW 0xf72a53d0
using T_GetDefaultCommConfigA = decltype(&GetDefaultCommConfigA);
#define H_GetDefaultCommConfigA 0x061dd75c
using T_GetDefaultCommConfigW = decltype(&GetDefaultCommConfigW);
#define H_GetDefaultCommConfigW 0x061dd772
using T_GetDevicePowerState = decltype(&GetDevicePowerState);
#define H_GetDevicePowerState 0x6a377599
using T_GetDiskFreeSpaceA = decltype(&GetDiskFreeSpaceA);
#define H_GetDiskFreeSpaceA 0x3bf42c83
using T_GetDiskFreeSpaceExA = decltype(&GetDiskFreeSpaceExA);
#define H_GetDiskFreeSpaceExA 0x00cb2210
using T_GetDiskFreeSpaceExW = decltype(&GetDiskFreeSpaceExW);
#define H_GetDiskFreeSpaceExW 0x00cb2226
using T_GetDiskFreeSpaceW = decltype(&GetDiskFreeSpaceW);
#define H_GetDiskFreeSpaceW 0x3bf42c99
using T_GetDllDirectoryA = decltype(&GetDllDirectoryA);
#define H_GetDllDirectoryA 0xe73f2397
using T_GetDllDirectoryW = decltype(&GetDllDirectoryW);
#define H_GetDllDirectoryW 0xe73f23ad
using T_GetDriveTypeA = decltype(&GetDriveTypeA);
#define H_GetDriveTypeA 0xe9d18e21
using T_GetDriveTypeW = decltype(&GetDriveTypeW);
#define H_GetDriveTypeW 0xe9d18e37
using T_GetDurationFormat = decltype(&GetDurationFormat);
#define H_GetDurationFormat 0x54f7912d
using T_GetDurationFormatEx = decltype(&GetDurationFormatEx);
#define H_GetDurationFormatEx 0x400c4bcd
using T_GetDynamicTimeZoneInformation = decltype(&GetDynamicTimeZoneInformation);
#define H_GetDynamicTimeZoneInformation 0xc386dc63
using T_GetEnabledXStateFeatures = decltype(&GetEnabledXStateFeatures);
#define H_GetEnabledXStateFeatures 0x52777be2
using T_GetEnvironmentStrings = decltype(&GetEnvironmentStrings);
#define H_GetEnvironmentStrings 0x0bdae9f5
using T_GetEnvironmentStringsA = decltype(&GetEnvironmentStringsA);
#define H_GetEnvironmentStringsA 0x4fa85f18
using T_GetEnvironmentStringsW = decltype(&GetEnvironmentStringsW);
#define H_GetEnvironmentStringsW 0x4fa85f2e
using T_GetEnvironmentVariableA = decltype(&GetEnvironmentVariableA);
#define H_GetEnvironmentVariableA 0xf2e1a963
using T_GetEnvironmentVariableW = decltype(&GetEnvironmentVariableW);
#define H_GetEnvironmentVariableW 0xf2e1a979
//using T_GetEraNameCountedString = decltype(&GetEraNameCountedString);
#define H_GetEraNameCountedString 0xcd6b9df6
using T_GetErrorMode = decltype(&GetErrorMode);
#define H_GetErrorMode 0xa480eab6
using T_GetExitCodeProcess = decltype(&GetExitCodeProcess);
#define H_GetExitCodeProcess 0xac30ab74
using T_GetExitCodeThread = decltype(&GetExitCodeThread);
#define H_GetExitCodeThread 0x1b3f95f9
using T_GetExpandedNameA = decltype(&GetExpandedNameA);
#define H_GetExpandedNameA 0x4fb5a8a9
using T_GetExpandedNameW = decltype(&GetExpandedNameW);
#define H_GetExpandedNameW 0x4fb5a8bf
using T_GetFileAttributesA = decltype(&GetFileAttributesA);
#define H_GetFileAttributesA 0x56f7390a
using T_GetFileAttributesExA = decltype(&GetFileAttributesExA);
#define H_GetFileAttributesExA 0xc18e43d6
using T_GetFileAttributesExW = decltype(&GetFileAttributesExW);
#define H_GetFileAttributesExW 0xc18e43ec
using T_GetFileAttributesTransactedA = decltype(&GetFileAttributesTransactedA);
#define H_GetFileAttributesTransactedA 0x23b3b5ba
using T_GetFileAttributesTransactedW = decltype(&GetFileAttributesTransactedW);
#define H_GetFileAttributesTransactedW 0x23b3b5d0
using T_GetFileAttributesW = decltype(&GetFileAttributesW);
#define H_GetFileAttributesW 0x56f73920
using T_GetFileBandwidthReservation = decltype(&GetFileBandwidthReservation);
#define H_GetFileBandwidthReservation 0x8cc7c80b
using T_GetFileInformationByHandle = decltype(&GetFileInformationByHandle);
#define H_GetFileInformationByHandle 0xc0132b93
using T_GetFileInformationByHandleEx = decltype(&GetFileInformationByHandleEx);
#define H_GetFileInformationByHandleEx 0x06f2e568
using T_GetFileMUIInfo = decltype(&GetFileMUIInfo);
#define H_GetFileMUIInfo 0x26d4071c
using T_GetFileMUIPath = decltype(&GetFileMUIPath);
#define H_GetFileMUIPath 0x354403d5
using T_GetFileSize = decltype(&GetFileSize);
#define H_GetFileSize 0xdf7d9bad
using T_GetFileSizeEx = decltype(&GetFileSizeEx);
#define H_GetFileSizeEx 0xe18eebef
using T_GetFileTime = decltype(&GetFileTime);
#define H_GetFileTime 0xe1159bad
using T_GetFileType = decltype(&GetFileType);
#define H_GetFileType 0xe12d9fad
using T_GetFinalPathNameByHandleA = decltype(&GetFinalPathNameByHandleA);
#define H_GetFinalPathNameByHandleA 0xd86a2fd0
using T_GetFinalPathNameByHandleW = decltype(&GetFinalPathNameByHandleW);
#define H_GetFinalPathNameByHandleW 0xd86a2fe6
using T_GetFirmwareEnvironmentVariableA = decltype(&GetFirmwareEnvironmentVariableA);
#define H_GetFirmwareEnvironmentVariableA 0xc52309db
using T_GetFirmwareEnvironmentVariableW = decltype(&GetFirmwareEnvironmentVariableW);
#define H_GetFirmwareEnvironmentVariableW 0xc52309f1
using T_GetFullPathNameA = decltype(&GetFullPathNameA);
#define H_GetFullPathNameA 0x31ec005a
using T_GetFullPathNameTransactedA = decltype(&GetFullPathNameTransactedA);
#define H_GetFullPathNameTransactedA 0x1a70e78e
using T_GetFullPathNameTransactedW = decltype(&GetFullPathNameTransactedW);
#define H_GetFullPathNameTransactedW 0x1a70e7a4
using T_GetFullPathNameW = decltype(&GetFullPathNameW);
#define H_GetFullPathNameW 0x31ec0070
using T_GetGeoInfoA = decltype(&GetGeoInfoA);
#define H_GetGeoInfoA 0x9513daeb
using T_GetGeoInfoW = decltype(&GetGeoInfoW);
#define H_GetGeoInfoW 0x9513db01
using T_GetHandleInformation = decltype(&GetHandleInformation);
#define H_GetHandleInformation 0x7f9df944
using T_GetLargePageMinimum = decltype(&GetLargePageMinimum);
#define H_GetLargePageMinimum 0x89e59e38
using T_GetLargestConsoleWindowSize = decltype(&GetLargestConsoleWindowSize);
#define H_GetLargestConsoleWindowSize 0xad9312e2
using T_GetLastError = decltype(&GetLastError);
#define H_GetLastError 0x75da1966
using T_GetLocalTime = decltype(&GetLocalTime);
#define H_GetLocalTime 0xb98c88cf
using T_GetLocaleInfoA = decltype(&GetLocaleInfoA);
#define H_GetLocaleInfoA 0xe8983477
using T_GetLocaleInfoEx = decltype(&GetLocaleInfoEx);
#define H_GetLocaleInfoEx 0xa3df4539
using T_GetLocaleInfoW = decltype(&GetLocaleInfoW);
#define H_GetLocaleInfoW 0xe898348d
using T_GetLogicalDriveStringsA = decltype(&GetLogicalDriveStringsA);
#define H_GetLogicalDriveStringsA 0x79b4095d
using T_GetLogicalDriveStringsW = decltype(&GetLogicalDriveStringsW);
#define H_GetLogicalDriveStringsW 0x79b40973
using T_GetLogicalDrives = decltype(&GetLogicalDrives);
#define H_GetLogicalDrives 0x14c22b19
using T_GetLogicalProcessorInformation = decltype(&GetLogicalProcessorInformation);
#define H_GetLogicalProcessorInformation 0x56472c4b
using T_GetLogicalProcessorInformationEx = decltype(&GetLogicalProcessorInformationEx);
#define H_GetLogicalProcessorInformationEx 0x93f3134d
using T_GetLongPathNameA = decltype(&GetLongPathNameA);
#define H_GetLongPathNameA 0xb1dfd8ba
using T_GetLongPathNameTransactedA = decltype(&GetLongPathNameTransactedA);
#define H_GetLongPathNameTransactedA 0x3a6ddda6
using T_GetLongPathNameTransactedW = decltype(&GetLongPathNameTransactedW);
#define H_GetLongPathNameTransactedW 0x3a6dddbc
using T_GetLongPathNameW = decltype(&GetLongPathNameW);
#define H_GetLongPathNameW 0xb1dfd8d0
using T_GetMailslotInfo = decltype(&GetMailslotInfo);
#define H_GetMailslotInfo 0xf605d5df
using T_GetMaximumProcessorCount = decltype(&GetMaximumProcessorCount);
#define H_GetMaximumProcessorCount 0xd69b0676
using T_GetMaximumProcessorGroupCount = decltype(&GetMaximumProcessorGroupCount);
#define H_GetMaximumProcessorGroupCount 0x4fddf02e
using T_GetModuleFileNameA = decltype(&GetModuleFileNameA);
#define H_GetModuleFileNameA 0x45b06d76
using T_GetModuleFileNameW = decltype(&GetModuleFileNameW);
#define H_GetModuleFileNameW 0x45b06d8c
using T_GetModuleHandleA = decltype(&GetModuleHandleA);
#define H_GetModuleHandleA 0xd3324904
using T_GetModuleHandleExA = decltype(&GetModuleHandleExA);
#define H_GetModuleHandleExA 0xd0524275
using T_GetModuleHandleExW = decltype(&GetModuleHandleExW);
#define H_GetModuleHandleExW 0xd052428b
using T_GetModuleHandleW = decltype(&GetModuleHandleW);
#define H_GetModuleHandleW 0xd332491a
using T_GetNLSVersion = decltype(&GetNLSVersion);
#define H_GetNLSVersion 0xb7a3b9ce
using T_GetNLSVersionEx = decltype(&GetNLSVersionEx);
#define H_GetNLSVersionEx 0xeb167425
//using T_GetNamedPipeAttribute = decltype(&GetNamedPipeAttribute);
#define H_GetNamedPipeAttribute 0x6aaf49fd
using T_GetNamedPipeClientComputerNameA = decltype(&GetNamedPipeClientComputerNameA);
#define H_GetNamedPipeClientComputerNameA 0xffdb6d5a
using T_GetNamedPipeClientComputerNameW = decltype(&GetNamedPipeClientComputerNameW);
#define H_GetNamedPipeClientComputerNameW 0xffdb6d70
using T_GetNamedPipeClientProcessId = decltype(&GetNamedPipeClientProcessId);
#define H_GetNamedPipeClientProcessId 0xa752af24
using T_GetNamedPipeClientSessionId = decltype(&GetNamedPipeClientSessionId);
#define H_GetNamedPipeClientSessionId 0xa262ec4c
using T_GetNamedPipeHandleStateA = decltype(&GetNamedPipeHandleStateA);
#define H_GetNamedPipeHandleStateA 0x28174c1f
using T_GetNamedPipeHandleStateW = decltype(&GetNamedPipeHandleStateW);
#define H_GetNamedPipeHandleStateW 0x28174c35
using T_GetNamedPipeInfo = decltype(&GetNamedPipeInfo);
#define H_GetNamedPipeInfo 0x55a1372c
using T_GetNamedPipeServerProcessId = decltype(&GetNamedPipeServerProcessId);
#define H_GetNamedPipeServerProcessId 0x63f4dfb2
using T_GetNamedPipeServerSessionId = decltype(&GetNamedPipeServerSessionId);
#define H_GetNamedPipeServerSessionId 0x5f051cda
using T_GetNativeSystemInfo = decltype(&GetNativeSystemInfo);
#define H_GetNativeSystemInfo 0xdd2b205d
using T_GetNextUmsListItem = decltype(&GetNextUmsListItem);
#define H_GetNextUmsListItem 0x7da51103
//using T_GetNextVDMCommand = decltype(&GetNextVDMCommand);
#define H_GetNextVDMCommand 0x6abe78f6
using T_GetNumaAvailableMemoryNode = decltype(&GetNumaAvailableMemoryNode);
#define H_GetNumaAvailableMemoryNode 0xbe9c8436
using T_GetNumaAvailableMemoryNodeEx = decltype(&GetNumaAvailableMemoryNodeEx);
#define H_GetNumaAvailableMemoryNodeEx 0xa9490e27
using T_GetNumaHighestNodeNumber = decltype(&GetNumaHighestNodeNumber);
#define H_GetNumaHighestNodeNumber 0xa75076b5
using T_GetNumaNodeNumberFromHandle = decltype(&GetNumaNodeNumberFromHandle);
#define H_GetNumaNodeNumberFromHandle 0x289696ae
using T_GetNumaNodeProcessorMask = decltype(&GetNumaNodeProcessorMask);
#define H_GetNumaNodeProcessorMask 0x5c7ce30e
using T_GetNumaNodeProcessorMaskEx = decltype(&GetNumaNodeProcessorMaskEx);
#define H_GetNumaNodeProcessorMaskEx 0x2160c40f
using T_GetNumaProcessorNode = decltype(&GetNumaProcessorNode);
#define H_GetNumaProcessorNode 0x30eaad88
using T_GetNumaProcessorNodeEx = decltype(&GetNumaProcessorNodeEx);
#define H_GetNumaProcessorNodeEx 0x3cd36284
using T_GetNumaProximityNode = decltype(&GetNumaProximityNode);
#define H_GetNumaProximityNode 0xb4c3c4ca
using T_GetNumaProximityNodeEx = decltype(&GetNumaProximityNodeEx);
#define H_GetNumaProximityNodeEx 0x33193325
using T_GetNumberFormatA = decltype(&GetNumberFormatA);
#define H_GetNumberFormatA 0x1eadeffe
using T_GetNumberFormatEx = decltype(&GetNumberFormatEx);
#define H_GetNumberFormatEx 0x8010f5e7
using T_GetNumberFormatW = decltype(&GetNumberFormatW);
#define H_GetNumberFormatW 0x1eadf014
//using T_GetNumberOfConsoleFonts = decltype(&GetNumberOfConsoleFonts);
#define H_GetNumberOfConsoleFonts 0xbc34e91a
using T_GetNumberOfConsoleInputEvents = decltype(&GetNumberOfConsoleInputEvents);
#define H_GetNumberOfConsoleInputEvents 0xb416650a
using T_GetNumberOfConsoleMouseButtons = decltype(&GetNumberOfConsoleMouseButtons);
#define H_GetNumberOfConsoleMouseButtons 0xf22ab605
using T_GetOEMCP = decltype(&GetOEMCP);
#define H_GetOEMCP 0x8db10caa
using T_GetOverlappedResult = decltype(&GetOverlappedResult);
#define H_GetOverlappedResult 0xc087dce8
using T_GetPhysicallyInstalledSystemMemory = decltype(&GetPhysicallyInstalledSystemMemory);
#define H_GetPhysicallyInstalledSystemMemory 0xe3457f10
using T_GetPriorityClass = decltype(&GetPriorityClass);
#define H_GetPriorityClass 0x2a556734
using T_GetPrivateProfileIntA = decltype(&GetPrivateProfileIntA);
#define H_GetPrivateProfileIntA 0xe50cb49d
using T_GetPrivateProfileIntW = decltype(&GetPrivateProfileIntW);
#define H_GetPrivateProfileIntW 0xe50cb4b3
using T_GetPrivateProfileSectionA = decltype(&GetPrivateProfileSectionA);
#define H_GetPrivateProfileSectionA 0x20992b8a
using T_GetPrivateProfileSectionNamesA = decltype(&GetPrivateProfileSectionNamesA);
#define H_GetPrivateProfileSectionNamesA 0x6deabf4d
using T_GetPrivateProfileSectionNamesW = decltype(&GetPrivateProfileSectionNamesW);
#define H_GetPrivateProfileSectionNamesW 0x6deabf63
using T_GetPrivateProfileSectionW = decltype(&GetPrivateProfileSectionW);
#define H_GetPrivateProfileSectionW 0x20992ba0
using T_GetPrivateProfileStringA = decltype(&GetPrivateProfileStringA);
#define H_GetPrivateProfileStringA 0x8f2a152d
using T_GetPrivateProfileStringW = decltype(&GetPrivateProfileStringW);
#define H_GetPrivateProfileStringW 0x8f2a1543
using T_GetPrivateProfileStructA = decltype(&GetPrivateProfileStructA);
#define H_GetPrivateProfileStructA 0xa792126d
using T_GetPrivateProfileStructW = decltype(&GetPrivateProfileStructW);
#define H_GetPrivateProfileStructW 0xa7921283
using T_GetProcAddress = decltype(&GetProcAddress);
#define H_GetProcAddress 0x7c0dfcaa
using T_GetProcessAffinityMask = decltype(&GetProcessAffinityMask);
#define H_GetProcessAffinityMask 0x86dded92
using T_GetProcessDEPPolicy = decltype(&GetProcessDEPPolicy);
#define H_GetProcessDEPPolicy 0x2ae27d01
using T_GetProcessGroupAffinity = decltype(&GetProcessGroupAffinity);
#define H_GetProcessGroupAffinity 0x48be5041
using T_GetProcessHandleCount = decltype(&GetProcessHandleCount);
#define H_GetProcessHandleCount 0x7201c23c
using T_GetProcessHeap = decltype(&GetProcessHeap);
#define H_GetProcessHeap 0xa80eecae
using T_GetProcessHeaps = decltype(&GetProcessHeaps);
#define H_GetProcessHeaps 0x657540ea
using T_GetProcessId = decltype(&GetProcessId);
#define H_GetProcessId 0xfa9c1baf
using T_GetProcessIdOfThread = decltype(&GetProcessIdOfThread);
#define H_GetProcessIdOfThread 0x98a13fca
using T_GetProcessIoCounters = decltype(&GetProcessIoCounters);
#define H_GetProcessIoCounters 0x284d9e6a
using T_GetProcessPreferredUILanguages = decltype(&GetProcessPreferredUILanguages);
#define H_GetProcessPreferredUILanguages 0x9c984528
using T_GetProcessPriorityBoost = decltype(&GetProcessPriorityBoost);
#define H_GetProcessPriorityBoost 0x4cebb754
using T_GetProcessShutdownParameters = decltype(&GetProcessShutdownParameters);
#define H_GetProcessShutdownParameters 0x3cc0ca31
using T_GetProcessTimes = decltype(&GetProcessTimes);
#define H_GetProcessTimes 0x6d1e03ea
//using T_GetProcessUserModeExceptionPolicy = decltype(&GetProcessUserModeExceptionPolicy);
#define H_GetProcessUserModeExceptionPolicy 0x942a3817
using T_GetProcessVersion = decltype(&GetProcessVersion);
#define H_GetProcessVersion 0x67014887
using T_GetProcessWorkingSetSize = decltype(&GetProcessWorkingSetSize);
#define H_GetProcessWorkingSetSize 0x0acc6b83
using T_GetProcessWorkingSetSizeEx = decltype(&GetProcessWorkingSetSizeEx);
#define H_GetProcessWorkingSetSizeEx 0xb542e13a
using T_GetProcessorSystemCycleTime = decltype(&GetProcessorSystemCycleTime);
#define H_GetProcessorSystemCycleTime 0x2ce0b8bd
using T_GetProductInfo = decltype(&GetProductInfo);
#define H_GetProductInfo 0xaa76ff05
using T_GetProfileIntA = decltype(&GetProfileIntA);
#define H_GetProfileIntA 0x2ab60f1c
using T_GetProfileIntW = decltype(&GetProfileIntW);
#define H_GetProfileIntW 0x2ab60f32
using T_GetProfileSectionA = decltype(&GetProfileSectionA);
#define H_GetProfileSectionA 0xb6410fe4
using T_GetProfileSectionW = decltype(&GetProfileSectionW);
#define H_GetProfileSectionW 0xb6410ffa
using T_GetProfileStringA = decltype(&GetProfileStringA);
#define H_GetProfileStringA 0x8bb567e2
using T_GetProfileStringW = decltype(&GetProfileStringW);
#define H_GetProfileStringW 0x8bb567f8
using T_GetQueuedCompletionStatus = decltype(&GetQueuedCompletionStatus);
#define H_GetQueuedCompletionStatus 0x0232649f
using T_GetQueuedCompletionStatusEx = decltype(&GetQueuedCompletionStatusEx);
#define H_GetQueuedCompletionStatusEx 0x8ec12838
using T_GetShortPathNameA = decltype(&GetShortPathNameA);
#define H_GetShortPathNameA 0x61a77e7f
using T_GetShortPathNameW = decltype(&GetShortPathNameW);
#define H_GetShortPathNameW 0x61a77e95
using T_GetStartupInfoA = decltype(&GetStartupInfoA);
#define H_GetStartupInfoA 0x867ae3d7
using T_GetStartupInfoW = decltype(&GetStartupInfoW);
#define H_GetStartupInfoW 0x867ae3ed
using T_GetStdHandle = decltype(&GetStdHandle);
#define H_GetStdHandle 0x7487d823
using T_GetStringScripts = decltype(&GetStringScripts);
#define H_GetStringScripts 0x5fe02adb
using T_GetStringTypeA = decltype(&GetStringTypeA);
#define H_GetStringTypeA 0xcd510ffa
using T_GetStringTypeExA = decltype(&GetStringTypeExA);
#define H_GetStringTypeExA 0x5803fff4
using T_GetStringTypeExW = decltype(&GetStringTypeExW);
#define H_GetStringTypeExW 0x5804000a
using T_GetStringTypeW = decltype(&GetStringTypeW);
#define H_GetStringTypeW 0xcd511010
using T_GetSystemDEPPolicy = decltype(&GetSystemDEPPolicy);
#define H_GetSystemDEPPolicy 0x1e30d112
using T_GetSystemDefaultLCID = decltype(&GetSystemDefaultLCID);
#define H_GetSystemDefaultLCID 0x7695e96b
using T_GetSystemDefaultLangID = decltype(&GetSystemDefaultLangID);
#define H_GetSystemDefaultLangID 0xf1c443e1
using T_GetSystemDefaultLocaleName = decltype(&GetSystemDefaultLocaleName);
#define H_GetSystemDefaultLocaleName 0x71904673
using T_GetSystemDefaultUILanguage = decltype(&GetSystemDefaultUILanguage);
#define H_GetSystemDefaultUILanguage 0x9960ab94
using T_GetSystemDirectoryA = decltype(&GetSystemDirectoryA);
#define H_GetSystemDirectoryA 0xb8e579c1
using T_GetSystemDirectoryW = decltype(&GetSystemDirectoryW);
#define H_GetSystemDirectoryW 0xb8e579d7
using T_GetSystemFileCacheSize = decltype(&GetSystemFileCacheSize);
#define H_GetSystemFileCacheSize 0x0b10a352
using T_GetSystemFirmwareTable = decltype(&GetSystemFirmwareTable);
#define H_GetSystemFirmwareTable 0x5adbd192
using T_GetSystemInfo = decltype(&GetSystemInfo);
#define H_GetSystemInfo 0x90d3970f
using T_GetSystemPowerStatus = decltype(&GetSystemPowerStatus);
#define H_GetSystemPowerStatus 0x32ea4651
using T_GetSystemPreferredUILanguages = decltype(&GetSystemPreferredUILanguages);
#define H_GetSystemPreferredUILanguages 0x44ba2bc5
using T_GetSystemRegistryQuota = decltype(&GetSystemRegistryQuota);
#define H_GetSystemRegistryQuota 0xbf1387f5
using T_GetSystemTime = decltype(&GetSystemTime);
#define H_GetSystemTime 0xa70b95c5
using T_GetSystemTimeAdjustment = decltype(&GetSystemTimeAdjustment);
#define H_GetSystemTimeAdjustment 0x2d1054a0
using T_GetSystemTimeAsFileTime = decltype(&GetSystemTimeAsFileTime);
#define H_GetSystemTimeAsFileTime 0x89d7610d
using T_GetSystemTimes = decltype(&GetSystemTimes);
#define H_GetSystemTimes 0xae2d38cf
using T_GetSystemWindowsDirectoryA = decltype(&GetSystemWindowsDirectoryA);
#define H_GetSystemWindowsDirectoryA 0x6faa1c0b
using T_GetSystemWindowsDirectoryW = decltype(&GetSystemWindowsDirectoryW);
#define H_GetSystemWindowsDirectoryW 0x6faa1c21
using T_GetSystemWow64DirectoryA = decltype(&GetSystemWow64DirectoryA);
#define H_GetSystemWow64DirectoryA 0xfa92e5f7
using T_GetSystemWow64DirectoryW = decltype(&GetSystemWow64DirectoryW);
#define H_GetSystemWow64DirectoryW 0xfa92e60d
using T_GetTapeParameters = decltype(&GetTapeParameters);
#define H_GetTapeParameters 0xd945ce60
using T_GetTapePosition = decltype(&GetTapePosition);
#define H_GetTapePosition 0x45675841
using T_GetTapeStatus = decltype(&GetTapeStatus);
#define H_GetTapeStatus 0xa910102a
using T_GetTempFileNameA = decltype(&GetTempFileNameA);
#define H_GetTempFileNameA 0xe7ac2238
using T_GetTempFileNameW = decltype(&GetTempFileNameW);
#define H_GetTempFileNameW 0xe7ac224e
using T_GetTempPathA = decltype(&GetTempPathA);
#define H_GetTempPathA 0x5b8aca33
using T_GetTempPathW = decltype(&GetTempPathW);
#define H_GetTempPathW 0x5b8aca49
using T_GetThreadContext = decltype(&GetThreadContext);
#define H_GetThreadContext 0x68a7c7d2
using T_GetThreadErrorMode = decltype(&GetThreadErrorMode);
#define H_GetThreadErrorMode 0x5922c41c
using T_GetThreadGroupAffinity = decltype(&GetThreadGroupAffinity);
#define H_GetThreadGroupAffinity 0x49be4eec
using T_GetThreadIOPendingFlag = decltype(&GetThreadIOPendingFlag);
#define H_GetThreadIOPendingFlag 0x36ebb416
using T_GetThreadId = decltype(&GetThreadId);
#define H_GetThreadId 0xf9f19c2f
using T_GetThreadIdealProcessorEx = decltype(&GetThreadIdealProcessorEx);
#define H_GetThreadIdealProcessorEx 0xca8faf9e
using T_GetThreadLocale = decltype(&GetThreadLocale);
#define H_GetThreadLocale 0x6323c846
using T_GetThreadPreferredUILanguages = decltype(&GetThreadPreferredUILanguages);
#define H_GetThreadPreferredUILanguages 0xbc981a88
using T_GetThreadPriority = decltype(&GetThreadPriority);
#define H_GetThreadPriority 0xd89ef394
using T_GetThreadPriorityBoost = decltype(&GetThreadPriorityBoost);
#define H_GetThreadPriorityBoost 0x4debb5ff
using T_GetThreadSelectorEntry = decltype(&GetThreadSelectorEntry);
#define H_GetThreadSelectorEntry 0x7cb598d1
using T_GetThreadTimes = decltype(&GetThreadTimes);
#define H_GetThreadTimes 0x6d1caeeb
using T_GetThreadUILanguage = decltype(&GetThreadUILanguage);
#define H_GetThreadUILanguage 0x03bce3f9
using T_GetTickCount = decltype(&GetTickCount);
#define H_GetTickCount 0xf791fb23
using T_GetTickCount64 = decltype(&GetTickCount64);
#define H_GetTickCount64 0xe62ec931
using T_GetTimeFormatA = decltype(&GetTimeFormatA);
#define H_GetTimeFormatA 0xf02a93be
using T_GetTimeFormatEx = decltype(&GetTimeFormatEx);
#define H_GetTimeFormatEx 0x9e1781cc
using T_GetTimeFormatW = decltype(&GetTimeFormatW);
#define H_GetTimeFormatW 0xf02a93d4
using T_GetTimeZoneInformation = decltype(&GetTimeZoneInformation);
#define H_GetTimeZoneInformation 0x51268313
using T_GetTimeZoneInformationForYear = decltype(&GetTimeZoneInformationForYear);
#define H_GetTimeZoneInformationForYear 0x5af79c54
using T_GetUILanguageInfo = decltype(&GetUILanguageInfo);
#define H_GetUILanguageInfo 0x891ebf78
using T_GetUmsCompletionListEvent = decltype(&GetUmsCompletionListEvent);
#define H_GetUmsCompletionListEvent 0x1e9050c8
using T_GetUmsSystemThreadInformation = decltype(&GetUmsSystemThreadInformation);
#define H_GetUmsSystemThreadInformation 0x4b52517d
using T_GetUserDefaultLCID = decltype(&GetUserDefaultLCID);
#define H_GetUserDefaultLCID 0xbcf0e202
using T_GetUserDefaultLangID = decltype(&GetUserDefaultLangID);
#define H_GetUserDefaultLangID 0x888269b3
using T_GetUserDefaultLocaleName = decltype(&GetUserDefaultLocaleName);
#define H_GetUserDefaultLocaleName 0x53ed5fdf
using T_GetUserDefaultUILanguage = decltype(&GetUserDefaultUILanguage);
#define H_GetUserDefaultUILanguage 0x7bbdc500
using T_GetUserGeoID = decltype(&GetUserGeoID);
#define H_GetUserGeoID 0x63723ab7
using T_GetUserPreferredUILanguages = decltype(&GetUserPreferredUILanguages);
#define H_GetUserPreferredUILanguages 0x1c7ee5f8
//using T_GetVDMCurrentDirectories = decltype(&GetVDMCurrentDirectories);
#define H_GetVDMCurrentDirectories 0x4af7ba3f
using T_GetVersion = decltype(&GetVersion);
#define H_GetVersion 0xcfd98161
using T_GetVersionExA = decltype(&GetVersionExA);
#define H_GetVersionExA 0xc75fc483
using T_GetVersionExW = decltype(&GetVersionExW);
#define H_GetVersionExW 0xc75fc499
using T_GetVolumeInformationA = decltype(&GetVolumeInformationA);
#define H_GetVolumeInformationA 0x8ab241a0
using T_GetVolumeInformationByHandleW = decltype(&GetVolumeInformationByHandleW);
#define H_GetVolumeInformationByHandleW 0xedd9bce9
using T_GetVolumeInformationW = decltype(&GetVolumeInformationW);
#define H_GetVolumeInformationW 0x8ab241b6
using T_GetVolumeNameForVolumeMountPointA = decltype(&GetVolumeNameForVolumeMountPointA);
#define H_GetVolumeNameForVolumeMountPointA 0x5cedcada
using T_GetVolumeNameForVolumeMountPointW = decltype(&GetVolumeNameForVolumeMountPointW);
#define H_GetVolumeNameForVolumeMountPointW 0x5cedcaf0
using T_GetVolumePathNameA = decltype(&GetVolumePathNameA);
#define H_GetVolumePathNameA 0x0fd090f8
using T_GetVolumePathNameW = decltype(&GetVolumePathNameW);
#define H_GetVolumePathNameW 0x0fd0910e
using T_GetVolumePathNamesForVolumeNameA = decltype(&GetVolumePathNamesForVolumeNameA);
#define H_GetVolumePathNamesForVolumeNameA 0x990d3199
using T_GetVolumePathNamesForVolumeNameW = decltype(&GetVolumePathNamesForVolumeNameW);
#define H_GetVolumePathNamesForVolumeNameW 0x990d31af
using T_GetWindowsDirectoryA = decltype(&GetWindowsDirectoryA);
#define H_GetWindowsDirectoryA 0xf8ecdbed
using T_GetWindowsDirectoryW = decltype(&GetWindowsDirectoryW);
#define H_GetWindowsDirectoryW 0xf8ecdc03
using T_GetWriteWatch = decltype(&GetWriteWatch);
#define H_GetWriteWatch 0xb9ba5748
using T_GetXStateFeaturesMask = decltype(&GetXStateFeaturesMask);
#define H_GetXStateFeaturesMask 0x1b4bb6bb
using T_GlobalAddAtomA = decltype(&GlobalAddAtomA);
#define H_GlobalAddAtomA 0xfd5d432c
using T_GlobalAddAtomW = decltype(&GlobalAddAtomW);
#define H_GlobalAddAtomW 0xfd5d4342
using T_GlobalAlloc = decltype(&GlobalAlloc);
#define H_GlobalAlloc 0x0c0397ec
using T_GlobalCompact = decltype(&GlobalCompact);
#define H_GlobalCompact 0x86060af8
using T_GlobalDeleteAtom = decltype(&GlobalDeleteAtom);
#define H_GlobalDeleteAtom 0x0458516c
using T_GlobalFindAtomA = decltype(&GlobalFindAtomA);
#define H_GlobalFindAtomA 0xa9ecbc5c
using T_GlobalFindAtomW = decltype(&GlobalFindAtomW);
#define H_GlobalFindAtomW 0xa9ecbc72
using T_GlobalFix = decltype(&GlobalFix);
#define H_GlobalFix 0x240a2faa
using T_GlobalFlags = decltype(&GlobalFlags);
#define H_GlobalFlags 0x0bc3e53c
using T_GlobalFree = decltype(&GlobalFree);
#define H_GlobalFree 0x7cb922f6
using T_GlobalGetAtomNameA = decltype(&GlobalGetAtomNameA);
#define H_GlobalGetAtomNameA 0xd9683b57
using T_GlobalGetAtomNameW = decltype(&GlobalGetAtomNameW);
#define H_GlobalGetAtomNameW 0xd9683b6d
using T_GlobalHandle = decltype(&GlobalHandle);
#define H_GlobalHandle 0x43a7adc5
using T_GlobalLock = decltype(&GlobalLock);
#define H_GlobalLock 0x88a9223c
using T_GlobalMemoryStatus = decltype(&GlobalMemoryStatus);
#define H_GlobalMemoryStatus 0x081e64fd
using T_GlobalMemoryStatusEx = decltype(&GlobalMemoryStatusEx);
#define H_GlobalMemoryStatusEx 0x09c13fba
using T_GlobalReAlloc = decltype(&GlobalReAlloc);
#define H_GlobalReAlloc 0x7e9f4da2
using T_GlobalSize = decltype(&GlobalSize);
#define H_GlobalSize 0x976120b6
using T_GlobalUnWire = decltype(&GlobalUnWire);
#define H_GlobalUnWire 0x95d87f0b
using T_GlobalUnfix = decltype(&GlobalUnfix);
#define H_GlobalUnfix 0x0fd4d681
using T_GlobalUnlock = decltype(&GlobalUnlock);
#define H_GlobalUnlock 0xbf608091
using T_GlobalWire = decltype(&GlobalWire);
#define H_GlobalWire 0x9f2120b6
using T_Heap32First = decltype(&Heap32First);
#define H_Heap32First 0x376bb320
using T_Heap32ListFirst = decltype(&Heap32ListFirst);
#define H_Heap32ListFirst 0x16cb406c
using T_Heap32ListNext = decltype(&Heap32ListNext);
#define H_Heap32ListNext 0x782f01da
using T_Heap32Next = decltype(&Heap32Next);
#define H_Heap32Next 0x868585ee
using T_HeapAlloc = decltype(&HeapAlloc);
#define H_HeapAlloc 0x2500383c
using T_HeapCompact = decltype(&HeapCompact);
#define H_HeapCompact 0xc52e1efe
using T_HeapCreate = decltype(&HeapCreate);
#define H_HeapCreate 0xb46984e7
using T_HeapDestroy = decltype(&HeapDestroy);
#define H_HeapDestroy 0xcd92833e
using T_HeapFree = decltype(&HeapFree);
#define H_HeapFree 0x10c32616
using T_HeapLock = decltype(&HeapLock);
#define H_HeapLock 0x1cb3255c
using T_HeapQueryInformation = decltype(&HeapQueryInformation);
#define H_HeapQueryInformation 0x806e170a
using T_HeapReAlloc = decltype(&HeapReAlloc);
#define H_HeapReAlloc 0xbdc761a8
using T_HeapSetInformation = decltype(&HeapSetInformation);
#define H_HeapSetInformation 0x5e187174
using T_HeapSize = decltype(&HeapSize);
#define H_HeapSize 0x2b6b23d6
using T_HeapSummary = decltype(&HeapSummary);
#define H_HeapSummary 0xbfe61f06
using T_HeapUnlock = decltype(&HeapUnlock);
#define H_HeapUnlock 0xc1e14876
using T_HeapValidate = decltype(&HeapValidate);
#define H_HeapValidate 0x7dbdbbb5
using T_HeapWalk = decltype(&HeapWalk);
#define H_HeapWalk 0x32fb21dc
using T_IdnToAscii = decltype(&IdnToAscii);
#define H_IdnToAscii 0xce9e7f21
using T_IdnToNameprepUnicode = decltype(&IdnToNameprepUnicode);
#define H_IdnToNameprepUnicode 0x5a1e1ec7
using T_IdnToUnicode = decltype(&IdnToUnicode);
#define H_IdnToUnicode 0x1f102a56
using T_InitAtomTable = decltype(&InitAtomTable);
#define H_InitAtomTable 0xc9010c46
using T_InitOnceBeginInitialize = decltype(&InitOnceBeginInitialize);
#define H_InitOnceBeginInitialize 0xc3567b2d
using T_InitOnceComplete = decltype(&InitOnceComplete);
#define H_InitOnceComplete 0x9785f9a1
using T_InitOnceExecuteOnce = decltype(&InitOnceExecuteOnce);
#define H_InitOnceExecuteOnce 0x126a7e40
using T_InitOnceInitialize = decltype(&InitOnceInitialize);
#define H_InitOnceInitialize 0x545e5949
using T_InitializeConditionVariable = decltype(&InitializeConditionVariable);
#define H_InitializeConditionVariable 0xe55eea6d
using T_InitializeContext = decltype(&InitializeContext);
#define H_InitializeContext 0xe1e2f945
using T_InitializeCriticalSection = decltype(&InitializeCriticalSection);
#define H_InitializeCriticalSection 0xa12b930b
using T_InitializeCriticalSectionAndSpinCount = decltype(&InitializeCriticalSectionAndSpinCount);
#define H_InitializeCriticalSectionAndSpinCount 0xc956acc1
using T_InitializeCriticalSectionEx = decltype(&InitializeCriticalSectionEx);
#define H_InitializeCriticalSectionEx 0x4d0cc360
using T_InitializeProcThreadAttributeList = decltype(&InitializeProcThreadAttributeList);
#define H_InitializeProcThreadAttributeList 0xde64ceff
using T_InitializeSListHead = decltype(&InitializeSListHead);
#define H_InitializeSListHead 0xabb339bb
using T_InitializeSRWLock = decltype(&InitializeSRWLock);
#define H_InitializeSRWLock 0x11798bae
using T_InterlockedFlushSList = decltype(&InterlockedFlushSList);
#define H_InterlockedFlushSList 0x692a2b8c
using T_InterlockedPopEntrySList = decltype(&InterlockedPopEntrySList);
#define H_InterlockedPopEntrySList 0x930503d1
using T_InterlockedPushEntrySList = decltype(&InterlockedPushEntrySList);
#define H_InterlockedPushEntrySList 0x9e6dbed7
//using T_InterlockedPushListSList = decltype(&InterlockedPushListSList);
#define H_InterlockedPushListSList 0xb1161a6f
//using T_InvalidateConsoleDIBits = decltype(&InvalidateConsoleDIBits);
#define H_InvalidateConsoleDIBits 0x4737eb21
using T_IsBadCodePtr = decltype(&IsBadCodePtr);
#define H_IsBadCodePtr 0x70467147
using T_IsBadHugeReadPtr = decltype(&IsBadHugeReadPtr);
#define H_IsBadHugeReadPtr 0xf5bbab70
using T_IsBadHugeWritePtr = decltype(&IsBadHugeWritePtr);
#define H_IsBadHugeWritePtr 0x85cca5f3
using T_IsBadReadPtr = decltype(&IsBadReadPtr);
#define H_IsBadReadPtr 0x6e824142
using T_IsBadStringPtrA = decltype(&IsBadStringPtrA);
#define H_IsBadStringPtrA 0x53805bf2
using T_IsBadStringPtrW = decltype(&IsBadStringPtrW);
#define H_IsBadStringPtrW 0x53805c08
using T_IsBadWritePtr = decltype(&IsBadWritePtr);
#define H_IsBadWritePtr 0x34586c28
//using T_IsCalendarLeapDay = decltype(&IsCalendarLeapDay);
#define H_IsCalendarLeapDay 0xd6d562d6
// using T_IsCalendarLeapMonth = decltype(&IsCalendarLeapMonth);
#define H_IsCalendarLeapMonth 0xd4f9435d
// using T_IsCalendarLeapYear = decltype(&IsCalendarLeapYear);
#define H_IsCalendarLeapYear 0x3ff6b81d
using T_IsDBCSLeadByte = decltype(&IsDBCSLeadByte);
#define H_IsDBCSLeadByte 0x01448797
using T_IsDBCSLeadByteEx = decltype(&IsDBCSLeadByteEx);
#define H_IsDBCSLeadByteEx 0x5349e638
using T_IsDebuggerPresent = decltype(&IsDebuggerPresent);
#define H_IsDebuggerPresent 0xa36dc676
using T_IsNLSDefinedString = decltype(&IsNLSDefinedString);
#define H_IsNLSDefinedString 0x41c8e61d
using T_IsNormalizedString = decltype(&IsNormalizedString);
#define H_IsNormalizedString 0xdd4174ae
using T_IsProcessInJob = decltype(&IsProcessInJob);
#define H_IsProcessInJob 0x696c2f09
using T_IsProcessorFeaturePresent = decltype(&IsProcessorFeaturePresent);
#define H_IsProcessorFeaturePresent 0x78cb00e8
using T_IsSystemResumeAutomatic = decltype(&IsSystemResumeAutomatic);
#define H_IsSystemResumeAutomatic 0xe8ecea5d
using T_IsThreadAFiber = decltype(&IsThreadAFiber);
#define H_IsThreadAFiber 0xe0e81c7d
using T_IsThreadpoolTimerSet = decltype(&IsThreadpoolTimerSet);
#define H_IsThreadpoolTimerSet 0x236016f6
/*using T_IsTimeZoneRedirectionEnabled = decltype(&IsTimeZoneRedirectionEnabled);*/
#define H_IsTimeZoneRedirectionEnabled 0xa89d3595
/*using T_IsValidCalDateTime = decltype(&IsValidCalDateTime);*/
#define H_IsValidCalDateTime 0xd0320853
using T_IsValidCodePage = decltype(&IsValidCodePage);
#define H_IsValidCodePage 0x4340e2b3
using T_IsValidLanguageGroup = decltype(&IsValidLanguageGroup);
#define H_IsValidLanguageGroup 0x2e310e1d
using T_IsValidLocale = decltype(&IsValidLocale);
#define H_IsValidLocale 0xb7e02291
using T_IsValidLocaleName = decltype(&IsValidLocaleName);
#define H_IsValidLocaleName 0xa1913423
using T_IsWow64Process = decltype(&IsWow64Process);
#define H_IsWow64Process 0xe610cfb8
// using T_K32EmptyWorkingSet = decltype(&K32EmptyWorkingSet);
#define H_K32EmptyWorkingSet 0x7979d926
// using T_K32EnumDeviceDrivers = decltype(&K32EnumDeviceDrivers);
#define H_K32EnumDeviceDrivers 0xd7fb6e88
// using T_K32EnumPageFilesA = decltype(&K32EnumPageFilesA);
#define H_K32EnumPageFilesA 0x01eb0587
// using T_K32EnumPageFilesW = decltype(&K32EnumPageFilesW);
#define H_K32EnumPageFilesW 0x01eb059d
/*using T_K32EnumProcessModules = decltype(&K32EnumProcessModules);*/
#define H_K32EnumProcessModules 0x2733b580
// using T_K32EnumProcessModulesEx = decltype(&K32EnumProcessModulesEx);
#define H_K32EnumProcessModulesEx 0xcf156081
//using T_K32EnumProcesses = decltype(&K32EnumProcesses);
#define H_K32EnumProcesses 0x74cab41c
//using T_K32GetDeviceDriverBaseNameA = decltype(&K32GetDeviceDriverBaseNameA);
#define H_K32GetDeviceDriverBaseNameA 0xa1fa6f6c
//using T_K32GetDeviceDriverBaseNameW = decltype(&K32GetDeviceDriverBaseNameW);
#define H_K32GetDeviceDriverBaseNameW 0xa1fa6f82
//using T_K32GetDeviceDriverFileNameA = decltype(&K32GetDeviceDriverFileNameA);
#define H_K32GetDeviceDriverFileNameA 0xa5de706c
//using T_K32GetDeviceDriverFileNameW = decltype(&K32GetDeviceDriverFileNameW);
#define H_K32GetDeviceDriverFileNameW 0xa5de7082
//using T_K32GetMappedFileNameA = decltype(&K32GetMappedFileNameA);
#define H_K32GetMappedFileNameA 0x3b26cc39
//using T_K32GetMappedFileNameW = decltype(&K32GetMappedFileNameW);
#define H_K32GetMappedFileNameW 0x3b26cc4f
//using T_K32GetModuleBaseNameA = decltype(&K32GetModuleBaseNameA);
#define H_K32GetModuleBaseNameA 0xfe4cd27a
//using T_K32GetModuleBaseNameW = decltype(&K32GetModuleBaseNameW);
#define H_K32GetModuleBaseNameW 0xfe4cd290
//using T_K32GetModuleFileNameExA = decltype(&K32GetModuleFileNameExA);
#define H_K32GetModuleFileNameExA 0x8ff4e001
//using T_K32GetModuleFileNameExW = decltype(&K32GetModuleFileNameExW);
#define H_K32GetModuleFileNameExW 0x8ff4e017
//using T_K32GetModuleInformation = decltype(&K32GetModuleInformation);
#define H_K32GetModuleInformation 0x683c5275
//using T_K32GetPerformanceInfo = decltype(&K32GetPerformanceInfo);
#define H_K32GetPerformanceInfo 0xb424b7c8
//using T_K32GetProcessImageFileNameA = decltype(&K32GetProcessImageFileNameA);
#define H_K32GetProcessImageFileNameA 0x8f76de7f
//using T_K32GetProcessImageFileNameW = decltype(&K32GetProcessImageFileNameW);
#define H_K32GetProcessImageFileNameW 0x8f76de95
//using T_K32GetProcessMemoryInfo = decltype(&K32GetProcessMemoryInfo);
#define H_K32GetProcessMemoryInfo 0x6807f713
//using T_K32GetWsChanges = decltype(&K32GetWsChanges);
#define H_K32GetWsChanges 0x914d0801
//using T_K32GetWsChangesEx = decltype(&K32GetWsChangesEx);
#define H_K32GetWsChangesEx 0x556a00dc
//using T_K32InitializeProcessForWsWatch = decltype(&K32InitializeProcessForWsWatch);
#define H_K32InitializeProcessForWsWatch 0x48a7b418
//using T_K32QueryWorkingSet = decltype(&K32QueryWorkingSet);
#define H_K32QueryWorkingSet 0x7d760876
//using T_K32QueryWorkingSetEx = decltype(&K32QueryWorkingSetEx);
#define H_K32QueryWorkingSetEx 0x5faa1e17
using T_LCIDToLocaleName = decltype(&LCIDToLocaleName);
#define H_LCIDToLocaleName 0x751de5a1
using T_LCMapStringA = decltype(&LCMapStringA);
#define H_LCMapStringA 0xf825b20c
using T_LCMapStringEx = decltype(&LCMapStringEx);
#define H_LCMapStringEx 0x9087c1a5
using T_LCMapStringW = decltype(&LCMapStringW);
#define H_LCMapStringW 0xf825b222
using T_LZClose = decltype(&LZClose);
#define H_LZClose 0xdccc4c52
//using T_LZCloseFile = decltype(&LZCloseFile);
#define H_LZCloseFile 0x54254872
using T_LZCopy = decltype(&LZCopy);
#define H_LZCopy 0x8985bc5f
//using T_LZCreateFileW = decltype(&LZCreateFileW);
#define H_LZCreateFileW 0x7cb41c7b
using T_LZDone = decltype(&LZDone);
#define H_LZDone 0x8b75bc4b
using T_LZInit = decltype(&LZInit);
#define H_LZInit 0x954dbc1a
using T_LZOpenFileA = decltype(&LZOpenFileA);
#define H_LZOpenFileA 0x25c3598c
using T_LZOpenFileW = decltype(&LZOpenFileW);
#define H_LZOpenFileW 0x25c359a2
using T_LZRead = decltype(&LZRead);
#define H_LZRead 0xa70db9ca
using T_LZSeek = decltype(&LZSeek);
#define H_LZSeek 0xa92db9d1
using T_LZStart = decltype(&LZStart);
#define H_LZStart 0xecc548e1
using T_LeaveCriticalSection = decltype(&LeaveCriticalSection);
#define H_LeaveCriticalSection 0x016d1e21
using T_LeaveCriticalSectionWhenCallbackReturns = decltype(&LeaveCriticalSectionWhenCallbackReturns);
#define H_LeaveCriticalSectionWhenCallbackReturns 0x337ccab0
//using T_LoadAppInitDlls = decltype(&LoadAppInitDlls);
#define H_LoadAppInitDlls 0xf56c1ae8
using T_LoadLibraryA = decltype(&LoadLibraryA);
#define H_LoadLibraryA 0xec0e4e8e
using T_LoadLibraryExA = decltype(&LoadLibraryExA);
#define H_LoadLibraryExA 0x0753a4fc
using T_LoadLibraryExW = decltype(&LoadLibraryExW);
#define H_LoadLibraryExW 0x0753a512
using T_LoadLibraryW = decltype(&LoadLibraryW);
#define H_LoadLibraryW 0xec0e4ea4
using T_LoadModule = decltype(&LoadModule);
#define H_LoadModule 0xbbf979ec
using T_LoadResource = decltype(&LoadResource);
#define H_LoadResource 0x934e1f7b
//using T_LoadStringBaseExW = decltype(&LoadStringBaseExW);
#define H_LoadStringBaseExW 0x50082003
//using T_LoadStringBaseW = decltype(&LoadStringBaseW);
#define H_LoadStringBaseW 0xb1312090
using T_LocalAlloc = decltype(&LocalAlloc);
#define H_LocalAlloc 0x4c0297fa
using T_LocalCompact = decltype(&LocalCompact);
#define H_LocalCompact 0x85c60e88
using T_LocalFileTimeToFileTime = decltype(&LocalFileTimeToFileTime);
#define H_LocalFileTimeToFileTime 0x5291f3b9
using T_LocalFlags = decltype(&LocalFlags);
#define H_LocalFlags 0x4bc2e54a
using T_LocalFree = decltype(&LocalFree);
#define H_LocalFree 0x5cbaeaf6
using T_LocalHandle = decltype(&LocalHandle);
#define H_LocalHandle 0x4419adbd
using T_LocalLock = decltype(&LocalLock);
#define H_LocalLock 0x68aaea3c
using T_LocalReAlloc = decltype(&LocalReAlloc);
#define H_LocalReAlloc 0x7e5f5132
using T_LocalShrink = decltype(&LocalShrink);
#define H_LocalShrink 0xcc2a1f08
using T_LocalSize = decltype(&LocalSize);
#define H_LocalSize 0x7762e8b6
using T_LocalUnlock = decltype(&LocalUnlock);
#define H_LocalUnlock 0xbfd28089
using T_LocaleNameToLCID = decltype(&LocaleNameToLCID);
#define H_LocaleNameToLCID 0xef3f4101
using T_LocateXStateFeature = decltype(&LocateXStateFeature);
#define H_LocateXStateFeature 0x473c1b9a
using T_LockFile = decltype(&LockFile);
#define H_LockFile 0x1122d457
using T_LockFileEx = decltype(&LockFileEx);
#define H_LockFileEx 0x4add163c
using T_LockResource = decltype(&LockResource);
#define H_LockResource 0x9a4e2f7b
using T_MapUserPhysicalPages = decltype(&MapUserPhysicalPages);
#define H_MapUserPhysicalPages 0x221bf577
using T_MapUserPhysicalPagesScatter = decltype(&MapUserPhysicalPagesScatter);
#define H_MapUserPhysicalPagesScatter 0xaff8dc88
using T_MapViewOfFile = decltype(&MapViewOfFile);
#define H_MapViewOfFile 0x7b073c59
using T_MapViewOfFileEx = decltype(&MapViewOfFileEx);
#define H_MapViewOfFileEx 0xc3f716d6
using T_MapViewOfFileExNuma = decltype(&MapViewOfFileExNuma);
#define H_MapViewOfFileExNuma 0x10d589e1
using T_Module32First = decltype(&Module32First);
#define H_Module32First 0x434a3697
using T_Module32FirstW = decltype(&Module32FirstW);
#define H_Module32FirstW 0xb4ba1aa8
using T_Module32Next = decltype(&Module32Next);
#define H_Module32Next 0x56f4676a
using T_Module32NextW = decltype(&Module32NextW);
#define H_Module32NextW 0x3b52b7fa
using T_MoveFileA = decltype(&MoveFileA);
#define H_MoveFileA 0xa4048954
using T_MoveFileExA = decltype(&MoveFileExA);
#define H_MoveFileExA 0x04e2566a
using T_MoveFileExW = decltype(&MoveFileExW);
#define H_MoveFileExW 0x04e25680
using T_MoveFileTransactedA = decltype(&MoveFileTransactedA);
#define H_MoveFileTransactedA 0xb6f709cc
using T_MoveFileTransactedW = decltype(&MoveFileTransactedW);
#define H_MoveFileTransactedW 0xb6f709e2
using T_MoveFileW = decltype(&MoveFileW);
#define H_MoveFileW 0xa404896a
using T_MoveFileWithProgressA = decltype(&MoveFileWithProgressA);
#define H_MoveFileWithProgressA 0xe079223c
using T_MoveFileWithProgressW = decltype(&MoveFileWithProgressW);
#define H_MoveFileWithProgressW 0xe0792252
using T_MulDiv = decltype(&MulDiv);
#define H_MulDiv 0x5b4f619d
using T_MultiByteToWideChar = decltype(&MultiByteToWideChar);
#define H_MultiByteToWideChar 0xef4ac4e4
using T_NeedCurrentDirectoryForExePathA = decltype(&NeedCurrentDirectoryForExePathA);
#define H_NeedCurrentDirectoryForExePathA 0x211a67cb
using T_NeedCurrentDirectoryForExePathW = decltype(&NeedCurrentDirectoryForExePathW);
#define H_NeedCurrentDirectoryForExePathW 0x211a67e1
//using T_NlsCheckPolicy = decltype(&NlsCheckPolicy);
#define H_NlsCheckPolicy 0x29b45e13
//using T_NlsEventDataDescCreate = decltype(&NlsEventDataDescCreate);
#define H_NlsEventDataDescCreate 0xa8ec2714
//using T_NlsGetCacheUpdateCount = decltype(&NlsGetCacheUpdateCount);
#define H_NlsGetCacheUpdateCount 0x6bef4dd4
//using T_NlsUpdateLocale = decltype(&NlsUpdateLocale);
#define H_NlsUpdateLocale 0x62a97698
//using T_NlsUpdateSystemLocale = decltype(&NlsUpdateSystemLocale);
#define H_NlsUpdateSystemLocale 0x36f71294
//using T_NlsWriteEtwEvent = decltype(&NlsWriteEtwEvent);
#define H_NlsWriteEtwEvent 0x10adc825
using T_NormalizeString = decltype(&NormalizeString);
#define H_NormalizeString 0x4a6a094a
// using T_NotifyMountMgr = decltype(&NotifyMountMgr);
#define H_NotifyMountMgr 0x4de63498
using T_NotifyUILanguageChange = decltype(&NotifyUILanguageChange);
#define H_NotifyUILanguageChange 0x39946653
//using T_OpenConsoleW = decltype(&OpenConsoleW);
#define H_OpenConsoleW 0x518c7c0b
using T_OpenEventA = decltype(&OpenEventA);
#define H_OpenEventA 0xbf620084
using T_OpenEventW = decltype(&OpenEventW);
#define H_OpenEventW 0xbf62009a
using T_OpenFile = decltype(&OpenFile);
#define H_OpenFile 0x112704b8
using T_OpenFileById = decltype(&OpenFileById);
#define H_OpenFileById 0xf6939fb6
using T_OpenFileMappingA = decltype(&OpenFileMappingA);
#define H_OpenFileMappingA 0x8ed44c9e
using T_OpenFileMappingW = decltype(&OpenFileMappingW);
#define H_OpenFileMappingW 0x8ed44cb4
using T_OpenJobObjectA = decltype(&OpenJobObjectA);
#define H_OpenJobObjectA 0xe62f1c8e
using T_OpenJobObjectW = decltype(&OpenJobObjectW);
#define H_OpenJobObjectW 0xe62f1ca4
using T_OpenMutexA = decltype(&OpenMutexA);
#define H_OpenMutexA 0xdd81ee48
using T_OpenMutexW = decltype(&OpenMutexW);
#define H_OpenMutexW 0xdd81ee5e
using T_OpenPrivateNamespaceA = decltype(&OpenPrivateNamespaceA);
#define H_OpenPrivateNamespaceA 0x6d402488
using T_OpenPrivateNamespaceW = decltype(&OpenPrivateNamespaceW);
#define H_OpenPrivateNamespaceW 0x6d40249e
using T_OpenProcess = decltype(&OpenProcess);
#define H_OpenProcess 0xefe297c0
using T_OpenProcessToken = decltype(&OpenProcessToken);
#define H_OpenProcessToken 0x591ea70f
//using T_OpenProfileUserMapping = decltype(&OpenProfileUserMapping);
#define H_OpenProfileUserMapping 0x3b14ac83
using T_OpenSemaphoreA = decltype(&OpenSemaphoreA);
#define H_OpenSemaphoreA 0xefff49b5
using T_OpenSemaphoreW = decltype(&OpenSemaphoreW);
#define H_OpenSemaphoreW 0xefff49cb
using T_OpenThread = decltype(&OpenThread);
#define H_OpenThread 0x58c91e6f
using T_OpenThreadToken = decltype(&OpenThreadToken);
#define H_OpenThreadToken 0x8d91ea66
using T_OpenWaitableTimerA = decltype(&OpenWaitableTimerA);
#define H_OpenWaitableTimerA 0x0df17fde
using T_OpenWaitableTimerW = decltype(&OpenWaitableTimerW);
#define H_OpenWaitableTimerW 0x0df17ff4
using T_OutputDebugStringA = decltype(&OutputDebugStringA);
#define H_OutputDebugStringA 0x470d22bc
using T_OutputDebugStringW = decltype(&OutputDebugStringW);
#define H_OutputDebugStringW 0x470d22d2
using T_PeekConsoleInputA = decltype(&PeekConsoleInputA);
#define H_PeekConsoleInputA 0x2aee3b7f
using T_PeekConsoleInputW = decltype(&PeekConsoleInputW);
#define H_PeekConsoleInputW 0x2aee3b95
using T_PeekNamedPipe = decltype(&PeekNamedPipe);
#define H_PeekNamedPipe 0xb407c411
using T_PostQueuedCompletionStatus = decltype(&PostQueuedCompletionStatus);
#define H_PostQueuedCompletionStatus 0x83f28ca1
using T_PowerClearRequest = decltype(&PowerClearRequest);
#define H_PowerClearRequest 0xe3424370
using T_PowerCreateRequest = decltype(&PowerCreateRequest);
#define H_PowerCreateRequest 0x3d3ed960
using T_PowerSetRequest = decltype(&PowerSetRequest);
#define H_PowerSetRequest 0x8c3517f4
using T_PrepareTape = decltype(&PrepareTape);
#define H_PrepareTape 0x120e06f3
//using T_PrivCopyFileExW = decltype(&PrivCopyFileExW);
#define H_PrivCopyFileExW 0xb8cf9f8d
//using T_PrivMoveFileIdentityW = decltype(&PrivMoveFileIdentityW);
#define H_PrivMoveFileIdentityW 0x4e48564d
using T_Process32First = decltype(&Process32First);
#define H_Process32First 0x3249baa7
using T_Process32FirstW = decltype(&Process32FirstW);
#define H_Process32FirstW 0xd53992a4
using T_Process32Next = decltype(&Process32Next);
#define H_Process32Next 0x4776654a
using T_Process32NextW = decltype(&Process32NextW);
#define H_Process32NextW 0x2a523c0a
using T_ProcessIdToSessionId = decltype(&ProcessIdToSessionId);
#define H_ProcessIdToSessionId 0xac4ba4e8
using T_PulseEvent = decltype(&PulseEvent);
#define H_PulseEvent 0xe642f767
using T_PurgeComm = decltype(&PurgeComm);
#define H_PurgeComm 0x5b367b01
using T_QueryActCtxSettingsW = decltype(&QueryActCtxSettingsW);
#define H_QueryActCtxSettingsW 0xa42c2786
using T_QueryActCtxW = decltype(&QueryActCtxW);
#define H_QueryActCtxW 0xbd7094c6
using T_QueryDepthSList = decltype(&QueryDepthSList);
#define H_QueryDepthSList 0x7dd4c357
using T_QueryDosDeviceA = decltype(&QueryDosDeviceA);
#define H_QueryDosDeviceA 0x40a6f203
using T_QueryDosDeviceW = decltype(&QueryDosDeviceW);
#define H_QueryDosDeviceW 0x40a6f219
using T_QueryFullProcessImageNameA = decltype(&QueryFullProcessImageNameA);
#define H_QueryFullProcessImageNameA 0xf660f67e
using T_QueryFullProcessImageNameW = decltype(&QueryFullProcessImageNameW);
#define H_QueryFullProcessImageNameW 0xf660f694
using T_QueryIdleProcessorCycleTime = decltype(&QueryIdleProcessorCycleTime);
#define H_QueryIdleProcessorCycleTime 0xd3919ec3
using T_QueryIdleProcessorCycleTimeEx = decltype(&QueryIdleProcessorCycleTimeEx);
#define H_QueryIdleProcessorCycleTimeEx 0xe68fb16c
using T_QueryInformationJobObject = decltype(&QueryInformationJobObject);
#define H_QueryInformationJobObject 0x8ec65af2
using T_QueryMemoryResourceNotification = decltype(&QueryMemoryResourceNotification);
#define H_QueryMemoryResourceNotification 0xd23b2fde
using T_QueryPerformanceCounter = decltype(&QueryPerformanceCounter);
#define H_QueryPerformanceCounter 0xea7af15b
using T_QueryPerformanceFrequency = decltype(&QueryPerformanceFrequency);
#define H_QueryPerformanceFrequency 0x249466d5
using T_QueryProcessAffinityUpdateMode = decltype(&QueryProcessAffinityUpdateMode);
#define H_QueryProcessAffinityUpdateMode 0x919c2eb3
using T_QueryProcessCycleTime = decltype(&QueryProcessCycleTime);
#define H_QueryProcessCycleTime 0x1203cde8
using T_QueryThreadCycleTime = decltype(&QueryThreadCycleTime);
#define H_QueryThreadCycleTime 0xa27b966b
using T_QueryThreadProfiling = decltype(&QueryThreadProfiling);
#define H_QueryThreadProfiling 0xdfb3d58a
using T_QueryThreadpoolStackInformation = decltype(&QueryThreadpoolStackInformation);
#define H_QueryThreadpoolStackInformation 0xf9adc78c
using T_QueryUmsThreadInformation = decltype(&QueryUmsThreadInformation);
#define H_QueryUmsThreadInformation 0x01017729
using T_QueryUnbiasedInterruptTime = decltype(&QueryUnbiasedInterruptTime);
#define H_QueryUnbiasedInterruptTime 0xafe2fff1
using T_QueueUserAPC = decltype(&QueueUserAPC);
#define H_QueueUserAPC 0x1d7f957b
using T_QueueUserWorkItem = decltype(&QueueUserWorkItem);
#define H_QueueUserWorkItem 0xa46a9b02
using T_RaiseException = decltype(&RaiseException);
#define H_RaiseException 0x9be0580e
using T_RaiseFailFastException = decltype(&RaiseFailFastException);
#define H_RaiseFailFastException 0xf6024798
using T_ReOpenFile = decltype(&ReOpenFile);
#define H_ReOpenFile 0x762994b8
using T_ReadConsoleA = decltype(&ReadConsoleA);
#define H_ReadConsoleA 0x87925bf2
using T_ReadConsoleInputA = decltype(&ReadConsoleInputA);
#define H_ReadConsoleInputA 0x27702b7f
//using T_ReadConsoleInputExA = decltype(&ReadConsoleInputExA);
#define H_ReadConsoleInputExA 0xdfcae10a
//using T_ReadConsoleInputExW = decltype(&ReadConsoleInputExW);
#define H_ReadConsoleInputExW 0xdfcae120
using T_ReadConsoleInputW = decltype(&ReadConsoleInputW);
#define H_ReadConsoleInputW 0x27702b95
using T_ReadConsoleOutputA = decltype(&ReadConsoleOutputA);
#define H_ReadConsoleOutputA 0xd3a97c05
using T_ReadConsoleOutputAttribute = decltype(&ReadConsoleOutputAttribute);
#define H_ReadConsoleOutputAttribute 0xcf4a65da
using T_ReadConsoleOutputCharacterA = decltype(&ReadConsoleOutputCharacterA);
#define H_ReadConsoleOutputCharacterA 0x213e9470
using T_ReadConsoleOutputCharacterW = decltype(&ReadConsoleOutputCharacterW);
#define H_ReadConsoleOutputCharacterW 0x213e9486
using T_ReadConsoleOutputW = decltype(&ReadConsoleOutputW);
#define H_ReadConsoleOutputW 0xd3a97c1b
using T_ReadConsoleW = decltype(&ReadConsoleW);
#define H_ReadConsoleW 0x87925c08
using T_ReadDirectoryChangesW = decltype(&ReadDirectoryChangesW);
#define H_ReadDirectoryChangesW 0x18312da7
using T_ReadFile = decltype(&ReadFile);
#define H_ReadFile 0x10fa6516
using T_ReadFileEx = decltype(&ReadFileEx);
#define H_ReadFileEx 0x40c145fc
using T_ReadFileScatter = decltype(&ReadFileScatter);
#define H_ReadFileScatter 0x8bc6d066
using T_ReadProcessMemory = decltype(&ReadProcessMemory);
#define H_ReadProcessMemory 0x579d1be9
using T_ReadThreadProfilingData = decltype(&ReadThreadProfilingData);
#define H_ReadThreadProfilingData 0xaed89c0f
using T_RegCloseKey = decltype(&RegCloseKey);
#define H_RegCloseKey 0x35e273e6
using T_RegCreateKeyExA = decltype(&RegCreateKeyExA);
#define H_RegCreateKeyExA 0x8b64e6b4
using T_RegCreateKeyExW = decltype(&RegCreateKeyExW);
#define H_RegCreateKeyExW 0x8b64e6ca
using T_RegDeleteKeyExA = decltype(&RegDeleteKeyExA);
#define H_RegDeleteKeyExA 0x4f671eb1
using T_RegDeleteKeyExW = decltype(&RegDeleteKeyExW);
#define H_RegDeleteKeyExW 0x4f671ec7
using T_RegDeleteTreeA = decltype(&RegDeleteTreeA);
#define H_RegDeleteTreeA 0xfece94b5
using T_RegDeleteTreeW = decltype(&RegDeleteTreeW);
#define H_RegDeleteTreeW 0xfece94cb
using T_RegDeleteValueA = decltype(&RegDeleteValueA);
#define H_RegDeleteValueA 0xb4ceeab6
using T_RegDeleteValueW = decltype(&RegDeleteValueW);
#define H_RegDeleteValueW 0xb4ceeacc
using T_RegDisablePredefinedCacheEx = decltype(&RegDisablePredefinedCacheEx);
#define H_RegDisablePredefinedCacheEx 0xc72a90b7
using T_RegEnumKeyExA = decltype(&RegEnumKeyExA);
#define H_RegEnumKeyExA 0xa6469d81
using T_RegEnumKeyExW = decltype(&RegEnumKeyExW);
#define H_RegEnumKeyExW 0xa6469d97
using T_RegEnumValueA = decltype(&RegEnumValueA);
#define H_RegEnumValueA 0x0bae6987
using T_RegEnumValueW = decltype(&RegEnumValueW);
#define H_RegEnumValueW 0x0bae699d
using T_RegFlushKey = decltype(&RegFlushKey);
#define H_RegFlushKey 0x3be27449
using T_RegGetKeySecurity = decltype(&RegGetKeySecurity);
#define H_RegGetKeySecurity 0x66fa3fbb
using T_RegGetValueA = decltype(&RegGetValueA);
#define H_RegGetValueA 0x64a57266
using T_RegGetValueW = decltype(&RegGetValueW);
#define H_RegGetValueW 0x64a5727c
//using T_RegKrnGetGlobalState = decltype(&RegKrnGetGlobalState);
#define H_RegKrnGetGlobalState 0x9a221ac4
//using T_RegKrnInitialize = decltype(&RegKrnInitialize);
#define H_RegKrnInitialize 0xc00e18d0
using T_RegLoadKeyA = decltype(&RegLoadKeyA);
#define H_RegLoadKeyA 0x028d8b47
using T_RegLoadKeyW = decltype(&RegLoadKeyW);
#define H_RegLoadKeyW 0x028d8b5d
using T_RegLoadMUIStringA = decltype(&RegLoadMUIStringA);
#define H_RegLoadMUIStringA 0xf2a35031
using T_RegLoadMUIStringW = decltype(&RegLoadMUIStringW);
#define H_RegLoadMUIStringW 0xf2a35047
using T_RegNotifyChangeKeyValue = decltype(&RegNotifyChangeKeyValue);
#define H_RegNotifyChangeKeyValue 0x9ae4c899
using T_RegOpenCurrentUser = decltype(&RegOpenCurrentUser);
#define H_RegOpenCurrentUser 0xfa0958a7
using T_RegOpenKeyExA = decltype(&RegOpenKeyExA);
#define H_RegOpenKeyExA 0xa84aeb81
using T_RegOpenKeyExW = decltype(&RegOpenKeyExW);
#define H_RegOpenKeyExW 0xa84aeb97
using T_RegOpenUserClassesRoot = decltype(&RegOpenUserClassesRoot);
#define H_RegOpenUserClassesRoot 0xa902e6bc
using T_RegQueryInfoKeyA = decltype(&RegQueryInfoKeyA);
#define H_RegQueryInfoKeyA 0xc8f63c08
using T_RegQueryInfoKeyW = decltype(&RegQueryInfoKeyW);
#define H_RegQueryInfoKeyW 0xc8f63c1e
using T_RegQueryValueExA = decltype(&RegQueryValueExA);
#define H_RegQueryValueExA 0xfcba95ab
using T_RegQueryValueExW = decltype(&RegQueryValueExW);
#define H_RegQueryValueExW 0xfcba95c1
using T_RegRestoreKeyA = decltype(&RegRestoreKeyA);
#define H_RegRestoreKeyA 0xb85ba69f
using T_RegRestoreKeyW = decltype(&RegRestoreKeyW);
#define H_RegRestoreKeyW 0xb85ba6b5
using T_RegSaveKeyExA = decltype(&RegSaveKeyExA);
#define H_RegSaveKeyExA 0x99270da1
using T_RegSaveKeyExW = decltype(&RegSaveKeyExW);
#define H_RegSaveKeyExW 0x99270db7
using T_RegSetKeySecurity = decltype(&RegSetKeySecurity);
#define H_RegSetKeySecurity 0x6cfa3fbb
using T_RegSetValueExA = decltype(&RegSetValueExA);
#define H_RegSetValueExA 0x2d1c9add
using T_RegSetValueExW = decltype(&RegSetValueExW);
#define H_RegSetValueExW 0x2d1c9af3
using T_RegUnLoadKeyA = decltype(&RegUnLoadKeyA);
#define H_RegUnLoadKeyA 0x4a57106c
using T_RegUnLoadKeyW = decltype(&RegUnLoadKeyW);
#define H_RegUnLoadKeyW 0x4a571082
using T_RegisterApplicationRecoveryCallback = decltype(&RegisterApplicationRecoveryCallback);
#define H_RegisterApplicationRecoveryCallback 0x820a9948
using T_RegisterApplicationRestart = decltype(&RegisterApplicationRestart);
#define H_RegisterApplicationRestart 0x0b3107b9
//using T_RegisterConsoleIME = decltype(&RegisterConsoleIME);
#define H_RegisterConsoleIME 0x57eda677
//using T_RegisterConsoleOS2 = decltype(&RegisterConsoleOS2);
#define H_RegisterConsoleOS2 0x581da7e4
//using T_RegisterConsoleVDM = decltype(&RegisterConsoleVDM);
#define H_RegisterConsoleVDM 0x57a5a9bf
//using T_RegisterWaitForInputIdle = decltype(&RegisterWaitForInputIdle);
#define H_RegisterWaitForInputIdle 0xed1eed89
using T_RegisterWaitForSingleObject = decltype(&RegisterWaitForSingleObject);
#define H_RegisterWaitForSingleObject 0x5375a683
//using T_RegisterWaitForSingleObjectEx = decltype(&RegisterWaitForSingleObjectEx);
#define H_RegisterWaitForSingleObjectEx 0xdf91a14c
//using T_RegisterWowBaseHandlers = decltype(&RegisterWowBaseHandlers);
#define H_RegisterWowBaseHandlers 0x877bb570
// using T_RegisterWowExec = decltype(&RegisterWowExec);
#define H_RegisterWowExec 0x66e28b68
using T_ReleaseActCtx = decltype(&ReleaseActCtx);
#define H_ReleaseActCtx 0xcf077cf4
using T_ReleaseMutex = decltype(&ReleaseMutex);
#define H_ReleaseMutex 0x14a059e5
using T_ReleaseMutexWhenCallbackReturns = decltype(&ReleaseMutexWhenCallbackReturns);
#define H_ReleaseMutexWhenCallbackReturns 0x99f452d6
using T_ReleaseSRWLockExclusive = decltype(&ReleaseSRWLockExclusive);
#define H_ReleaseSRWLockExclusive 0x557e6da6
using T_ReleaseSRWLockShared = decltype(&ReleaseSRWLockShared);
#define H_ReleaseSRWLockShared 0xe2a88220
using T_ReleaseSemaphore = decltype(&ReleaseSemaphore);
#define H_ReleaseSemaphore 0xdf11eb6d
using T_ReleaseSemaphoreWhenCallbackReturns = decltype(&ReleaseSemaphoreWhenCallbackReturns);
#define H_ReleaseSemaphoreWhenCallbackReturns 0x7d17646b
using T_RemoveDirectoryA = decltype(&RemoveDirectoryA);
#define H_RemoveDirectoryA 0x83d32647
using T_RemoveDirectoryTransactedA = decltype(&RemoveDirectoryTransactedA);
#define H_RemoveDirectoryTransactedA 0x6eeab109
using T_RemoveDirectoryTransactedW = decltype(&RemoveDirectoryTransactedW);
#define H_RemoveDirectoryTransactedW 0x6eeab11f
using T_RemoveDirectoryW = decltype(&RemoveDirectoryW);
#define H_RemoveDirectoryW 0x83d3265d
using T_RemoveDllDirectory = decltype(&RemoveDllDirectory);
#define H_RemoveDllDirectory 0x8d507e95
//using T_RemoveLocalAlternateComputerNameA = decltype(&RemoveLocalAlternateComputerNameA);
#define H_RemoveLocalAlternateComputerNameA 0xe894077a
//using T_RemoveLocalAlternateComputerNameW = decltype(&RemoveLocalAlternateComputerNameW);
#define H_RemoveLocalAlternateComputerNameW 0xe8940790
using T_RemoveSecureMemoryCacheCallback = decltype(&RemoveSecureMemoryCacheCallback);
#define H_RemoveSecureMemoryCacheCallback 0xc26042b6
using T_RemoveVectoredContinueHandler = decltype(&RemoveVectoredContinueHandler);
#define H_RemoveVectoredContinueHandler 0x8fefaf06
using T_RemoveVectoredExceptionHandler = decltype(&RemoveVectoredExceptionHandler);
#define H_RemoveVectoredExceptionHandler 0xabf6e97a
using T_ReplaceFile = decltype(&ReplaceFile);
#define H_ReplaceFile 0x00eda06c
using T_ReplaceFileA = decltype(&ReplaceFileA);
#define H_ReplaceFileA 0x036007ae
using T_ReplaceFileW = decltype(&ReplaceFileW);
#define H_ReplaceFileW 0x036007c4
using T_ReplacePartitionUnit = decltype(&ReplacePartitionUnit);
#define H_ReplacePartitionUnit 0x84e6e355
using T_RequestDeviceWakeup = decltype(&RequestDeviceWakeup);
#define H_RequestDeviceWakeup 0xf34084cc
using T_RequestWakeupLatency = decltype(&RequestWakeupLatency);
#define H_RequestWakeupLatency 0x77cc0b4a
using T_ResetEvent = decltype(&ResetEvent);
#define H_ResetEvent 0x560b084f
using T_ResetWriteWatch = decltype(&ResetWriteWatch);
#define H_ResetWriteWatch 0xec3ba208
using T_ResolveLocaleName = decltype(&ResolveLocaleName);
#define H_ResolveLocaleName 0x28b4a822
//using T_RestoreLastError = decltype(&RestoreLastError);
#define H_RestoreLastError 0x2fab3cb4
using T_ResumeThread = decltype(&ResumeThread);
#define H_ResumeThread 0x9e4a3f88
using T_RtlAddFunctionTable = decltype(&RtlAddFunctionTable);
#define H_RtlAddFunctionTable 0x22fc1661
using T_RtlCaptureContext = decltype(&RtlCaptureContext);
#define H_RtlCaptureContext 0x818a64c8
using T_RtlCaptureStackBackTrace = decltype(&RtlCaptureStackBackTrace);
#define H_RtlCaptureStackBackTrace 0x2bdc1fd7
using T_RtlCompareMemory = decltype(&RtlCompareMemory);
#define H_RtlCompareMemory 0x770dcef6
//using T_RtlCopyMemory = decltype(&RtlCopyMemory);
#define H_RtlCopyMemory 0xcf64979b
using T_RtlDeleteFunctionTable = decltype(&RtlDeleteFunctionTable);
#define H_RtlDeleteFunctionTable 0xe0262df4
//using T_RtlFillMemory = decltype(&RtlFillMemory);
#define H_RtlFillMemory 0xc930af1b
using T_RtlInstallFunctionTableCallback = decltype(&RtlInstallFunctionTableCallback);
#define H_RtlInstallFunctionTableCallback 0x7491200b
using T_RtlLookupFunctionEntry = decltype(&RtlLookupFunctionEntry);
#define H_RtlLookupFunctionEntry 0xc1d846d9
//using T_RtlMoveMemory = decltype(&RtlMoveMemory);
#define H_RtlMoveMemory 0xcf14e85b
using T_RtlPcToFileHeader = decltype(&RtlPcToFileHeader);
#define H_RtlPcToFileHeader 0x98c05d71
//using T_RtlRaiseException = decltype(&RtlRaiseException);
#define H_RtlRaiseException 0x1c34081d
using T_RtlRestoreContext = decltype(&RtlRestoreContext);
#define H_RtlRestoreContext 0x89103508
using T_RtlUnwind = decltype(&RtlUnwind);
#define H_RtlUnwind 0xc527094f
using T_RtlUnwindEx = decltype(&RtlUnwindEx);
#define H_RtlUnwindEx 0x4bea5469
using T_RtlVirtualUnwind = decltype(&RtlVirtualUnwind);
#define H_RtlVirtualUnwind 0xdefe7c76
//using T_RtlZeroMemory = decltype(&RtlZeroMemory);
#define H_RtlZeroMemory 0xc53d4fdb
using T_ScrollConsoleScreenBufferA = decltype(&ScrollConsoleScreenBufferA);
#define H_ScrollConsoleScreenBufferA 0xcb93530c
using T_ScrollConsoleScreenBufferW = decltype(&ScrollConsoleScreenBufferW);
#define H_ScrollConsoleScreenBufferW 0xcb935322
using T_SearchPathA = decltype(&SearchPathA);
#define H_SearchPathA 0xe7d453ca
using T_SearchPathW = decltype(&SearchPathW);
#define H_SearchPathW 0xe7d453e0
using T_SetCalendarInfoA = decltype(&SetCalendarInfoA);
#define H_SetCalendarInfoA 0xe9c776d0
using T_SetCalendarInfoW = decltype(&SetCalendarInfoW);
#define H_SetCalendarInfoW 0xe9c776e6
//using T_SetClientDynamicTimeZoneInformation = decltype(&SetClientDynamicTimeZoneInformation);
#define H_SetClientDynamicTimeZoneInformation 0x7897862b
//using T_SetClientTimeZoneInformation = decltype(&SetClientTimeZoneInformation);
#define H_SetClientTimeZoneInformation 0x8ecf0861
//using T_SetComPlusPackageInstallStatus = decltype(&SetComPlusPackageInstallStatus);
#define H_SetComPlusPackageInstallStatus 0x8d082811
using T_SetCommBreak = decltype(&SetCommBreak);
#define H_SetCommBreak 0xec69e7db
using T_SetCommConfig = decltype(&SetCommConfig);
#define H_SetCommConfig 0xd0cf34f6
using T_SetCommMask = decltype(&SetCommMask);
#define H_SetCommMask 0x535e1957
using T_SetCommState = decltype(&SetCommState);
#define H_SetCommState 0xf102f6d5
using T_SetCommTimeouts = decltype(&SetCommTimeouts);
#define H_SetCommTimeouts 0xc35533c6
using T_SetComputerNameA = decltype(&SetComputerNameA);
#define H_SetComputerNameA 0x16a42291
using T_SetComputerNameExA = decltype(&SetComputerNameExA);
#define H_SetComputerNameExA 0xacc8a586
using T_SetComputerNameExW = decltype(&SetComputerNameExW);
#define H_SetComputerNameExW 0xacc8a59c
using T_SetComputerNameW = decltype(&SetComputerNameW);
#define H_SetComputerNameW 0x16a422a7
using T_SetConsoleActiveScreenBuffer = decltype(&SetConsoleActiveScreenBuffer);
#define H_SetConsoleActiveScreenBuffer 0x6969909c
using T_SetConsoleCP = decltype(&SetConsoleCP);
#define H_SetConsoleCP 0xdf80b7c3
using T_SetConsoleCtrlHandler = decltype(&SetConsoleCtrlHandler);
#define H_SetConsoleCtrlHandler 0xc40e481f
//using T_SetConsoleCursor = decltype(&SetConsoleCursor);
#define H_SetConsoleCursor 0xf2f6ab2a
using T_SetConsoleCursorInfo = decltype(&SetConsoleCursorInfo);
#define H_SetConsoleCursorInfo 0xffe2cb1e
//using T_SetConsoleCursorMode = decltype(&SetConsoleCursorMode);
#define H_SetConsoleCursorMode 0x07d2cb55
using T_SetConsoleCursorPosition = decltype(&SetConsoleCursorPosition);
#define H_SetConsoleCursorPosition 0x982dab93
using T_SetConsoleDisplayMode = decltype(&SetConsoleDisplayMode);
#define H_SetConsoleDisplayMode 0xd796a152
//using T_SetConsoleFont = decltype(&SetConsoleFont);
#define H_SetConsoleFont 0xe99df92b
//using T_SetConsoleHardwareState = decltype(&SetConsoleHardwareState);
#define H_SetConsoleHardwareState 0xd41a3466
using T_SetConsoleHistoryInfo = decltype(&SetConsoleHistoryInfo);
#define H_SetConsoleHistoryInfo 0x4fb2a1a6
//using T_SetConsoleIcon = decltype(&SetConsoleIcon);
#define H_SetConsoleIcon 0xefa5f625
//using T_SetConsoleInputExeNameA = decltype(&SetConsoleInputExeNameA);
#define H_SetConsoleInputExeNameA 0x2ad46bd2
// using T_SetConsoleInputExeNameW = decltype(&SetConsoleInputExeNameW);
#define H_SetConsoleInputExeNameW 0x2ad46be8
//using T_SetConsoleKeyShortcuts = decltype(&SetConsoleKeyShortcuts);
#define H_SetConsoleKeyShortcuts 0x565760e3
//using T_SetConsoleLocalEUDC = decltype(&SetConsoleLocalEUDC);
#define H_SetConsoleLocalEUDC 0x06c9d210
//using T_SetConsoleMaximumWindowSize = decltype(&SetConsoleMaximumWindowSize);
#define H_SetConsoleMaximumWindowSize 0xa5d04e83
//using T_SetConsoleMenuClose = decltype(&SetConsoleMenuClose);
#define H_SetConsoleMenuClose 0x576b477c
using T_SetConsoleMode = decltype(&SetConsoleMode);
#define H_SetConsoleMode 0xf74df91c
//using T_SetConsoleNlsMode = decltype(&SetConsoleNlsMode);
#define H_SetConsoleNlsMode 0x8d13a815
// using T_SetConsoleNumberOfCommandsA = decltype(&SetConsoleNumberOfCommandsA);
#define H_SetConsoleNumberOfCommandsA 0xb23638b9
//using T_SetConsoleNumberOfCommandsW = decltype(&SetConsoleNumberOfCommandsW);
#define H_SetConsoleNumberOfCommandsW 0xb23638cf
// using T_SetConsoleOS2OemFormat = decltype(&SetConsoleOS2OemFormat);
#define H_SetConsoleOS2OemFormat 0xefbcd669
using T_SetConsoleOutputCP = decltype(&SetConsoleOutputCP);
#define H_SetConsoleOutputCP 0xcbc29d0d
//using T_SetConsolePalette = decltype(&SetConsolePalette);
#define H_SetConsolePalette 0x3d9b3950
using T_SetConsoleScreenBufferInfoEx = decltype(&SetConsoleScreenBufferInfoEx);
#define H_SetConsoleScreenBufferInfoEx 0x20d6b40a
using T_SetConsoleScreenBufferSize = decltype(&SetConsoleScreenBufferSize);
#define H_SetConsoleScreenBufferSize 0x5d1ab984
using T_SetConsoleTextAttribute = decltype(&SetConsoleTextAttribute);
#define H_SetConsoleTextAttribute 0x7a2c1c8e
using T_SetConsoleTitleA = decltype(&SetConsoleTitleA);
#define H_SetConsoleTitleA 0x76a5e942
using T_SetConsoleTitleW = decltype(&SetConsoleTitleW);
#define H_SetConsoleTitleW 0x76a5e958
using T_SetConsoleWindowInfo = decltype(&SetConsoleWindowInfo);
#define H_SetConsoleWindowInfo 0xf3a7ba9e
using T_SetCriticalSectionSpinCount = decltype(&SetCriticalSectionSpinCount);
#define H_SetCriticalSectionSpinCount 0x1245f22d
using T_SetCurrentConsoleFontEx = decltype(&SetCurrentConsoleFontEx);
#define H_SetCurrentConsoleFontEx 0x078b7a58
using T_SetCurrentDirectoryA = decltype(&SetCurrentDirectoryA);
#define H_SetCurrentDirectoryA 0xbfc7034f
using T_SetCurrentDirectoryW = decltype(&SetCurrentDirectoryW);
#define H_SetCurrentDirectoryW 0xbfc70365
using T_SetDefaultCommConfigA = decltype(&SetDefaultCommConfigA);
#define H_SetDefaultCommConfigA 0xc61dd75c
using T_SetDefaultCommConfigW = decltype(&SetDefaultCommConfigW);
#define H_SetDefaultCommConfigW 0xc61dd772
using T_SetDefaultDllDirectories = decltype(&SetDefaultDllDirectories);
#define H_SetDefaultDllDirectories 0x6228050d
using T_SetDllDirectoryA = decltype(&SetDllDirectoryA);
#define H_SetDllDirectoryA 0x673f2399
using T_SetDllDirectoryW = decltype(&SetDllDirectoryW);
#define H_SetDllDirectoryW 0x673f23af
using T_SetDynamicTimeZoneInformation = decltype(&SetDynamicTimeZoneInformation);
#define H_SetDynamicTimeZoneInformation 0xc446dc63
using T_SetEndOfFile = decltype(&SetEndOfFile);
#define H_SetEndOfFile 0x96a028a6
using T_SetEnvironmentStringsA = decltype(&SetEnvironmentStringsA);
#define H_SetEnvironmentStringsA 0x4fae5f18
using T_SetEnvironmentStringsW = decltype(&SetEnvironmentStringsW);
#define H_SetEnvironmentStringsW 0x4fae5f2e
using T_SetEnvironmentVariableA = decltype(&SetEnvironmentVariableA);
#define H_SetEnvironmentVariableA 0xf2e1a993
using T_SetEnvironmentVariableW = decltype(&SetEnvironmentVariableW);
#define H_SetEnvironmentVariableW 0xf2e1a9a9
using T_SetErrorMode = decltype(&SetErrorMode);
#define H_SetErrorMode 0xa498eab6
using T_SetEvent = decltype(&SetEvent);
#define H_SetEvent 0xf108744e
using T_SetEventWhenCallbackReturns = decltype(&SetEventWhenCallbackReturns);
#define H_SetEventWhenCallbackReturns 0x6a29268f
using T_SetFileApisToANSI = decltype(&SetFileApisToANSI);
#define H_SetFileApisToANSI 0xfa99efc9
using T_SetFileApisToOEM = decltype(&SetFileApisToOEM);
#define H_SetFileApisToOEM 0x3da822cd
using T_SetFileAttributesA = decltype(&SetFileAttributesA);
#define H_SetFileAttributesA 0x56f7396a
using T_SetFileAttributesTransactedA = decltype(&SetFileAttributesTransactedA);
#define H_SetFileAttributesTransactedA 0x23b3b5d2
using T_SetFileAttributesTransactedW = decltype(&SetFileAttributesTransactedW);
#define H_SetFileAttributesTransactedW 0x23b3b5e8
using T_SetFileAttributesW = decltype(&SetFileAttributesW);
#define H_SetFileAttributesW 0x56f73980
using T_SetFileBandwidthReservation = decltype(&SetFileBandwidthReservation);
#define H_SetFileBandwidthReservation 0x8ccac80b
using T_SetFileCompletionNotificationModes = decltype(&SetFileCompletionNotificationModes);
#define H_SetFileCompletionNotificationModes 0x2ff90f2d
using T_SetFileInformationByHandle = decltype(&SetFileInformationByHandle);
#define H_SetFileInformationByHandle 0x20132b94
using T_SetFileIoOverlappedRange = decltype(&SetFileIoOverlappedRange);
#define H_SetFileIoOverlappedRange 0xd89d6b51
using T_SetFilePointer = decltype(&SetFilePointer);
#define H_SetFilePointer 0x76da08ac
using T_SetFilePointerEx = decltype(&SetFilePointerEx);
#define H_SetFilePointerEx 0xb8aa2b95
using T_SetFileShortNameA = decltype(&SetFileShortNameA);
#define H_SetFileShortNameA 0x33247852
using T_SetFileShortNameW = decltype(&SetFileShortNameW);
#define H_SetFileShortNameW 0x33247868
using T_SetFileTime = decltype(&SetFileTime);
#define H_SetFileTime 0xe1159bb0
using T_SetFileValidData = decltype(&SetFileValidData);
#define H_SetFileValidData 0xfe2d257b
using T_SetFirmwareEnvironmentVariableA = decltype(&SetFirmwareEnvironmentVariableA);
#define H_SetFirmwareEnvironmentVariableA 0xf52309db
using T_SetFirmwareEnvironmentVariableW = decltype(&SetFirmwareEnvironmentVariableW);
#define H_SetFirmwareEnvironmentVariableW 0xf52309f1
using T_SetHandleCount = decltype(&SetHandleCount);
#define H_SetHandleCount 0xfb8f68c9
using T_SetHandleInformation = decltype(&SetHandleInformation);
#define H_SetHandleInformation 0x7f9e1144
using T_SetInformationJobObject = decltype(&SetInformationJobObject);
#define H_SetInformationJobObject 0x301f89aa
//using T_SetLastConsoleEventActive = decltype(&SetLastConsoleEventActive);
#define H_SetLastConsoleEventActive 0x450c1854
using T_SetLastError = decltype(&SetLastError);
#define H_SetLastError 0x75f21966
// using T_SetLocalPrimaryComputerNameA = decltype(&SetLocalPrimaryComputerNameA);
#define H_SetLocalPrimaryComputerNameA 0x643c0817
// using T_SetLocalPrimaryComputerNameW = decltype(&SetLocalPrimaryComputerNameW);
#define H_SetLocalPrimaryComputerNameW 0x643c082d
using T_SetLocalTime = decltype(&SetLocalTime);
#define H_SetLocalTime 0xb9a488cf
using T_SetLocaleInfoA = decltype(&SetLocaleInfoA);
#define H_SetLocaleInfoA 0xee983477
using T_SetLocaleInfoW = decltype(&SetLocaleInfoW);
#define H_SetLocaleInfoW 0xee98348d
using T_SetMailslotInfo = decltype(&SetMailslotInfo);
#define H_SetMailslotInfo 0xf60605df
using T_SetMessageWaitingIndicator = decltype(&SetMessageWaitingIndicator);
#define H_SetMessageWaitingIndicator 0x14bdee44
//using T_SetNamedPipeAttribute = decltype(&SetNamedPipeAttribute);
#define H_SetNamedPipeAttribute 0x2aaf49fe
using T_SetNamedPipeHandleState = decltype(&SetNamedPipeHandleState);
#define H_SetNamedPipeHandleState 0xe97bc532
using T_SetPriorityClass = decltype(&SetPriorityClass);
#define H_SetPriorityClass 0xaa556735
using T_SetProcessAffinityMask = decltype(&SetProcessAffinityMask);
#define H_SetProcessAffinityMask 0x86e3ed92
using T_SetProcessAffinityUpdateMode = decltype(&SetProcessAffinityUpdateMode);
#define H_SetProcessAffinityUpdateMode 0x6248c60f
using T_SetProcessDEPPolicy = decltype(&SetProcessDEPPolicy);
#define H_SetProcessDEPPolicy 0x2de27d01
using T_SetProcessPreferredUILanguages = decltype(&SetProcessPreferredUILanguages);
#define H_SetProcessPreferredUILanguages 0x9c984b28
using T_SetProcessPriorityBoost = decltype(&SetProcessPriorityBoost);
#define H_SetProcessPriorityBoost 0x4cebb784
using T_SetProcessShutdownParameters = decltype(&SetProcessShutdownParameters);
#define H_SetProcessShutdownParameters 0x3cc0ca49
//using T_SetProcessUserModeExceptionPolicy = decltype(&SetProcessUserModeExceptionPolicy);
#define H_SetProcessUserModeExceptionPolicy 0x942a3823
using T_SetProcessWorkingSetSize = decltype(&SetProcessWorkingSetSize);
#define H_SetProcessWorkingSetSize 0x0c4c6b83
using T_SetProcessWorkingSetSizeEx = decltype(&SetProcessWorkingSetSizeEx);
#define H_SetProcessWorkingSetSizeEx 0x1542e13b
using T_SetSearchPathMode = decltype(&SetSearchPathMode);
#define H_SetSearchPathMode 0x514494d9
using T_SetStdHandle = decltype(&SetStdHandle);
#define H_SetStdHandle 0x749fd823
using T_SetStdHandleEx = decltype(&SetStdHandleEx);
#define H_SetStdHandleEx 0x2a1e0955
using T_SetSystemFileCacheSize = decltype(&SetSystemFileCacheSize);
#define H_SetSystemFileCacheSize 0x0b16a352
using T_SetSystemPowerState = decltype(&SetSystemPowerState);
#define H_SetSystemPowerState 0x4bbbc64d
using T_SetSystemTime = decltype(&SetSystemTime);
#define H_SetSystemTime 0xa70b9685
using T_SetSystemTimeAdjustment = decltype(&SetSystemTimeAdjustment);
#define H_SetSystemTimeAdjustment 0x2d1054d0
using T_SetTapeParameters = decltype(&SetTapeParameters);
#define H_SetTapeParameters 0xd951ce60
using T_SetTapePosition = decltype(&SetTapePosition);
#define H_SetTapePosition 0x45678841
//using T_SetTermsrvAppInstallMode = decltype(&SetTermsrvAppInstallMode);
#define H_SetTermsrvAppInstallMode 0x1a9e08fe
using T_SetThreadAffinityMask = decltype(&SetThreadAffinityMask);
#define H_SetThreadAffinityMask 0x46b34db3
using T_SetThreadContext = decltype(&SetThreadContext);
#define H_SetThreadContext 0xe8a7c7d3
using T_SetThreadErrorMode = decltype(&SetThreadErrorMode);
#define H_SetThreadErrorMode 0x5922c47c
using T_SetThreadExecutionState = decltype(&SetThreadExecutionState);
#define H_SetThreadExecutionState 0xbf48c285
using T_SetThreadGroupAffinity = decltype(&SetThreadGroupAffinity);
#define H_SetThreadGroupAffinity 0x49c44eec
using T_SetThreadIdealProcessor = decltype(&SetThreadIdealProcessor);
#define H_SetThreadIdealProcessor 0x9b219eec
using T_SetThreadIdealProcessorEx = decltype(&SetThreadIdealProcessorEx);
#define H_SetThreadIdealProcessorEx 0xca8fbb9e
using T_SetThreadLocale = decltype(&SetThreadLocale);
#define H_SetThreadLocale 0x6323f846
using T_SetThreadPreferredUILanguages = decltype(&SetThreadPreferredUILanguages);
#define H_SetThreadPreferredUILanguages 0xbd581a88
using T_SetThreadPriority = decltype(&SetThreadPriority);
#define H_SetThreadPriority 0xd8aaf394
using T_SetThreadPriorityBoost = decltype(&SetThreadPriorityBoost);
#define H_SetThreadPriorityBoost 0x4df1b5ff
using T_SetThreadStackGuarantee = decltype(&SetThreadStackGuarantee);
#define H_SetThreadStackGuarantee 0x8c915887
using T_SetThreadToken = decltype(&SetThreadToken);
#define H_SetThreadToken 0x7f1cae66
using T_SetThreadUILanguage = decltype(&SetThreadUILanguage);
#define H_SetThreadUILanguage 0x06bce3f9
using T_SetThreadpoolStackInformation = decltype(&SetThreadpoolStackInformation);
#define H_SetThreadpoolStackInformation 0xb48c4cf1
using T_SetThreadpoolThreadMaximum = decltype(&SetThreadpoolThreadMaximum);
#define H_SetThreadpoolThreadMaximum 0x2e1dc543
using T_SetThreadpoolThreadMinimum = decltype(&SetThreadpoolThreadMinimum);
#define H_SetThreadpoolThreadMinimum 0x2e1d2547
using T_SetThreadpoolTimer = decltype(&SetThreadpoolTimer);
#define H_SetThreadpoolTimer 0x3c1ce3a8
using T_SetThreadpoolWait = decltype(&SetThreadpoolWait);
#define H_SetThreadpoolWait 0xa246c592
using T_SetTimeZoneInformation = decltype(&SetTimeZoneInformation);
#define H_SetTimeZoneInformation 0x512c8313
using T_SetTimerQueueTimer = decltype(&SetTimerQueueTimer);
#define H_SetTimerQueueTimer 0x01b44a19
using T_SetUmsThreadInformation = decltype(&SetUmsThreadInformation);
#define H_SetUmsThreadInformation 0xa25aa5e0
using T_SetUnhandledExceptionFilter = decltype(&SetUnhandledExceptionFilter);
#define H_SetUnhandledExceptionFilter 0x5f048af0
using T_SetUserGeoID = decltype(&SetUserGeoID);
#define H_SetUserGeoID 0x638a3ab7
//using T_SetVDMCurrentDirectories = decltype(&SetVDMCurrentDirectories);
#define H_SetVDMCurrentDirectories 0x4c77ba3f
using T_SetVolumeLabelA = decltype(&SetVolumeLabelA);
#define H_SetVolumeLabelA 0x312aeaa4
using T_SetVolumeLabelW = decltype(&SetVolumeLabelW);
#define H_SetVolumeLabelW 0x312aeaba
using T_SetVolumeMountPointA = decltype(&SetVolumeMountPointA);
#define H_SetVolumeMountPointA 0xc15cf23b
using T_SetVolumeMountPointW = decltype(&SetVolumeMountPointW);
#define H_SetVolumeMountPointW 0xc15cf251
using T_SetWaitableTimer = decltype(&SetWaitableTimer);
#define H_SetWaitableTimer 0x92a4a1ba
using T_SetWaitableTimerEx = decltype(&SetWaitableTimerEx);
#define H_SetWaitableTimerEx 0xab506f1c
using T_SetXStateFeaturesMask = decltype(&SetXStateFeaturesMask);
#define H_SetXStateFeaturesMask 0xdb4bb6bb
using T_SetupComm = decltype(&SetupComm);
#define H_SetupComm 0x5e3f2908
//using T_ShowConsoleCursor = decltype(&ShowConsoleCursor);
#define H_ShowConsoleCursor 0x94c9d32d
using T_SignalObjectAndWait = decltype(&SignalObjectAndWait);
#define H_SignalObjectAndWait 0xa1421bcc
using T_SizeofResource = decltype(&SizeofResource);
#define H_SizeofResource 0x3f2a9609
using T_Sleep = decltype(&Sleep);
#define H_Sleep 0xdb2d49b0
using T_SleepConditionVariableCS = decltype(&SleepConditionVariableCS);
#define H_SleepConditionVariableCS 0x636607eb
using T_SleepConditionVariableSRW = decltype(&SleepConditionVariableSRW);
#define H_SleepConditionVariableSRW 0x3f531f87
using T_SleepEx = decltype(&SleepEx);
#define H_SleepEx 0xcd7a6cae
//using T_SortCloseHandle = decltype(&SortCloseHandle);
#define H_SortCloseHandle 0x4866eb1b
//using T_SortGetHandle = decltype(&SortGetHandle);
#define H_SortGetHandle 0xa917db76
using T_StartThreadpoolIo = decltype(&StartThreadpoolIo);
#define H_StartThreadpoolIo 0x00df3331
using T_SubmitThreadpoolWork = decltype(&SubmitThreadpoolWork);
#define H_SubmitThreadpoolWork 0x3fe9721a
using T_SuspendThread = decltype(&SuspendThread);
#define H_SuspendThread 0x0e8c2cdc
using T_SwitchToFiber = decltype(&SwitchToFiber);
#define H_SwitchToFiber 0xfa6e2b74
using T_SwitchToThread = decltype(&SwitchToThread);
#define H_SwitchToThread 0x7b1fc3dc
using T_SystemTimeToFileTime = decltype(&SystemTimeToFileTime);
#define H_SystemTimeToFileTime 0x45a577ea
using T_SystemTimeToTzSpecificLocalTime = decltype(&SystemTimeToTzSpecificLocalTime);
#define H_SystemTimeToTzSpecificLocalTime 0x093bd065
//using T_SystemTimeToTzSpecificLocalTimeEx = decltype(&SystemTimeToTzSpecificLocalTimeEx);
#define H_SystemTimeToTzSpecificLocalTimeEx 0x511c19ba
using T_TerminateJobObject = decltype(&TerminateJobObject);
#define H_TerminateJobObject 0x18522d68
using T_TerminateProcess = decltype(&TerminateProcess);
#define H_TerminateProcess 0x78b5b983
using T_TerminateThread = decltype(&TerminateThread);
#define H_TerminateThread 0xbd016f89
//using T_TermsrvAppInstallMode = decltype(&TermsrvAppInstallMode);
#define H_TermsrvAppInstallMode 0x1004076a
using T_Thread32First = decltype(&Thread32First);
#define H_Thread32First 0xb83bb6ea
using T_Thread32Next = decltype(&Thread32Next);
#define H_Thread32Next 0x86fed608
using T_TlsAlloc = decltype(&TlsAlloc);
#define H_TlsAlloc 0x5d2c361d
using T_TlsFree = decltype(&TlsFree);
#define H_TlsFree 0x907f4d1b
using T_TlsGetValue = decltype(&TlsGetValue);
#define H_TlsGetValue 0x3a44e495
using T_TlsSetValue = decltype(&TlsSetValue);
#define H_TlsSetValue 0x3a44e615
using T_Toolhelp32ReadProcessMemory = decltype(&Toolhelp32ReadProcessMemory);
#define H_Toolhelp32ReadProcessMemory 0xaa25ee23
using T_TransactNamedPipe = decltype(&TransactNamedPipe);
#define H_TransactNamedPipe 0xab55924f
using T_TransmitCommChar = decltype(&TransmitCommChar);
#define H_TransmitCommChar 0x70360a0f
using T_TryAcquireSRWLockExclusive = decltype(&TryAcquireSRWLockExclusive);
#define H_TryAcquireSRWLockExclusive 0x569dff5d
using T_TryAcquireSRWLockShared = decltype(&TryAcquireSRWLockShared);
#define H_TryAcquireSRWLockShared 0x72715da1
using T_TryEnterCriticalSection = decltype(&TryEnterCriticalSection);
#define H_TryEnterCriticalSection 0x33d51212
using T_TrySubmitThreadpoolCallback = decltype(&TrySubmitThreadpoolCallback);
#define H_TrySubmitThreadpoolCallback 0xee17432a
using T_TzSpecificLocalTimeToSystemTime = decltype(&TzSpecificLocalTimeToSystemTime);
#define H_TzSpecificLocalTimeToSystemTime 0x70d38544
//using T_TzSpecificLocalTimeToSystemTimeEx = decltype(&TzSpecificLocalTimeToSystemTimeEx);
#define H_TzSpecificLocalTimeToSystemTimeEx 0x37095194
// using T_UTRegister = decltype(&UTRegister);
#define H_UTRegister 0xbec55fe6
//using T_UTUnRegister = decltype(&UTUnRegister);
#define H_UTUnRegister 0xd96f5ffb
using T_UmsThreadYield = decltype(&UmsThreadYield);
#define H_UmsThreadYield 0x7452fd5c
using T_UnhandledExceptionFilter = decltype(&UnhandledExceptionFilter);
#define H_UnhandledExceptionFilter 0x36ef56ed
using T_UnlockFile = decltype(&UnlockFile);
#define H_UnlockFile 0x7f258057
using T_UnlockFileEx = decltype(&UnlockFileEx);
#define H_UnlockFileEx 0xcb881657
using T_UnmapViewOfFile = decltype(&UnmapViewOfFile);
#define H_UnmapViewOfFile 0xb2089259
using T_UnregisterApplicationRecoveryCallback = decltype(&UnregisterApplicationRecoveryCallback);
#define H_UnregisterApplicationRecoveryCallback 0x5e0ff149
using T_UnregisterApplicationRestart = decltype(&UnregisterApplicationRestart);
#define H_UnregisterApplicationRestart 0x0b4c8864
//using T_UnregisterConsoleIME = decltype(&UnregisterConsoleIME);
#define H_UnregisterConsoleIME 0x736e5177
using T_UnregisterWait = decltype(&UnregisterWait);
#define H_UnregisterWait 0x07868641
using T_UnregisterWaitEx = decltype(&UnregisterWaitEx);
#define H_UnregisterWaitEx 0xe3c990b9
//using T_UpdateCalendarDayOfWeek = decltype(&UpdateCalendarDayOfWeek);
#define H_UpdateCalendarDayOfWeek 0x67db937a
using T_UpdateProcThreadAttribute = decltype(&UpdateProcThreadAttribute);
#define H_UpdateProcThreadAttribute 0x41e5d7cb
using T_UpdateResourceA = decltype(&UpdateResourceA);
#define H_UpdateResourceA 0xf3c1f836
using T_UpdateResourceW = decltype(&UpdateResourceW);
#define H_UpdateResourceW 0xf3c1f84c
//using T_VDMConsoleOperation = decltype(&VDMConsoleOperation);
#define H_VDMConsoleOperation 0xe9c2265b
//using T_VDMOperationStarted = decltype(&VDMOperationStarted);
#define H_VDMOperationStarted 0x808e4cc6
using T_VerLanguageNameA = decltype(&VerLanguageNameA);
#define H_VerLanguageNameA 0x358fd8bb
using T_VerLanguageNameW = decltype(&VerLanguageNameW);
#define H_VerLanguageNameW 0x358fd8d1
using T_VerSetConditionMask = decltype(&VerSetConditionMask);
#define H_VerSetConditionMask 0xb917c2e1
//using T_VerifyConsoleIoHandle = decltype(&VerifyConsoleIoHandle);
#define H_VerifyConsoleIoHandle 0xdb737302
using T_VerifyScripts = decltype(&VerifyScripts);
#define H_VerifyScripts 0x3dc09942
using T_VerifyVersionInfoA = decltype(&VerifyVersionInfoA);
#define H_VerifyVersionInfoA 0x084ef581
using T_VerifyVersionInfoW = decltype(&VerifyVersionInfoW);
#define H_VerifyVersionInfoW 0x084ef597
using T_VirtualAlloc = decltype(&VirtualAlloc);
#define H_VirtualAlloc 0x91afca54
using T_VirtualAllocEx = decltype(&VirtualAllocEx);
#define H_VirtualAllocEx 0x6e1a959c
using T_VirtualAllocExNuma = decltype(&VirtualAllocExNuma);
#define H_VirtualAllocExNuma 0x48c1e483
using T_VirtualFree = decltype(&VirtualFree);
#define H_VirtualFree 0x030633ac
using T_VirtualFreeEx = decltype(&VirtualFreeEx);
#define H_VirtualFreeEx 0xc3b4eb78
using T_VirtualLock = decltype(&VirtualLock);
#define H_VirtualLock 0x0ef632f2
using T_VirtualProtect = decltype(&VirtualProtect);
#define H_VirtualProtect 0x7946c61b
using T_VirtualProtectEx = decltype(&VirtualProtectEx);
#define H_VirtualProtectEx 0x53d98756
using T_VirtualQuery = decltype(&VirtualQuery);
#define H_VirtualQuery 0xa3c8c8aa
using T_VirtualQueryEx = decltype(&VirtualQueryEx);
#define H_VirtualQueryEx 0xf45a2b20
using T_VirtualUnlock = decltype(&VirtualUnlock);
#define H_VirtualUnlock 0x52a4adf3
using T_WTSGetActiveConsoleSessionId = decltype(&WTSGetActiveConsoleSessionId);
#define H_WTSGetActiveConsoleSessionId 0x3c795949
using T_WaitCommEvent = decltype(&WaitCommEvent);
#define H_WaitCommEvent 0xf4ee1d55
using T_WaitForDebugEvent = decltype(&WaitForDebugEvent);
#define H_WaitForDebugEvent 0xb1813eb1
using T_WaitForMultipleObjects = decltype(&WaitForMultipleObjects);
#define H_WaitForMultipleObjects 0x23ead524
using T_WaitForMultipleObjectsEx = decltype(&WaitForMultipleObjectsEx);
#define H_WaitForMultipleObjectsEx 0xfcdd4980
using T_WaitForSingleObject = decltype(&WaitForSingleObject);
#define H_WaitForSingleObject 0xce05d9ad
using T_WaitForSingleObjectEx = decltype(&WaitForSingleObjectEx);
#define H_WaitForSingleObjectEx 0x839e6beb
using T_WaitForThreadpoolIoCallbacks = decltype(&WaitForThreadpoolIoCallbacks);
#define H_WaitForThreadpoolIoCallbacks 0xb05f0e33
using T_WaitForThreadpoolTimerCallbacks = decltype(&WaitForThreadpoolTimerCallbacks);
#define H_WaitForThreadpoolTimerCallbacks 0xa3b876d4
using T_WaitForThreadpoolWaitCallbacks = decltype(&WaitForThreadpoolWaitCallbacks);
#define H_WaitForThreadpoolWaitCallbacks 0xde2810ed
using T_WaitForThreadpoolWorkCallbacks = decltype(&WaitForThreadpoolWorkCallbacks);
#define H_WaitForThreadpoolWorkCallbacks 0x1e43c8f0
using T_WaitNamedPipeA = decltype(&WaitNamedPipeA);
#define H_WaitNamedPipeA 0x6415a041
using T_WaitNamedPipeW = decltype(&WaitNamedPipeW);
#define H_WaitNamedPipeW 0x6415a057
using T_WakeAllConditionVariable = decltype(&WakeAllConditionVariable);
#define H_WakeAllConditionVariable 0xfe30f181
using T_WakeConditionVariable = decltype(&WakeConditionVariable);
#define H_WakeConditionVariable 0x12dbafc5
//using T_WerGetFlags = decltype(&WerGetFlags);
#define H_WerGetFlags 0x0ed3a9e4
//using T_WerRegisterFile = decltype(&WerRegisterFile);
#define H_WerRegisterFile 0xed5fe471
//using T_WerRegisterMemoryBlock = decltype(&WerRegisterMemoryBlock);
#define H_WerRegisterMemoryBlock 0xc9e0abe7
//using T_WerRegisterRuntimeExceptionModule = decltype(&WerRegisterRuntimeExceptionModule);
#define H_WerRegisterRuntimeExceptionModule 0x739c3547
//using T_WerSetFlags = decltype(&WerSetFlags);
#define H_WerSetFlags 0x0ed3ab64
//using T_WerUnregisterFile = decltype(&WerUnregisterFile);
#define H_WerUnregisterFile 0x85f7503e
//using T_WerUnregisterMemoryBlock = decltype(&WerUnregisterMemoryBlock);
#define H_WerUnregisterMemoryBlock 0xdcce257a
//using T_WerUnregisterRuntimeExceptionModule = decltype(&WerUnregisterRuntimeExceptionModule);
#define H_WerUnregisterRuntimeExceptionModule 0x66c25b22
//using T_WerpCleanupMessageMapping = decltype(&WerpCleanupMessageMapping);
#define H_WerpCleanupMessageMapping 0xa99d29c8
//using T_WerpInitiateRemoteRecovery = decltype(&WerpInitiateRemoteRecovery);
#define H_WerpInitiateRemoteRecovery 0x03d10ab8
//using T_WerpNotifyLoadStringResource = decltype(&WerpNotifyLoadStringResource);
#define H_WerpNotifyLoadStringResource 0xa8df9f9a
//using T_WerpNotifyLoadStringResourceEx = decltype(&WerpNotifyLoadStringResourceEx);
#define H_WerpNotifyLoadStringResourceEx 0x3a0fe722
//using T_WerpNotifyUseStringResource = decltype(&WerpNotifyUseStringResource);
#define H_WerpNotifyUseStringResource 0x303fabd3
//using T_WerpStringLookup = decltype(&WerpStringLookup);
#define H_WerpStringLookup 0x65f6443f
using T_WideCharToMultiByte = decltype(&WideCharToMultiByte);
#define H_WideCharToMultiByte 0xc1634af9
using T_WinExec = decltype(&WinExec);
#define H_WinExec 0x0e8afe98
using T_Wow64DisableWow64FsRedirection = decltype(&Wow64DisableWow64FsRedirection);
#define H_Wow64DisableWow64FsRedirection 0x3a2ea97f
using T_Wow64EnableWow64FsRedirection = decltype(&Wow64EnableWow64FsRedirection);
#define H_Wow64EnableWow64FsRedirection 0x443eaddb
using T_Wow64GetThreadContext = decltype(&Wow64GetThreadContext);
#define H_Wow64GetThreadContext 0xf69ca787
using T_Wow64GetThreadSelectorEntry = decltype(&Wow64GetThreadSelectorEntry);
#define H_Wow64GetThreadSelectorEntry 0xfb8bd0a4
using T_Wow64RevertWow64FsRedirection = decltype(&Wow64RevertWow64FsRedirection);
#define H_Wow64RevertWow64FsRedirection 0x79a939b7
using T_Wow64SetThreadContext = decltype(&Wow64SetThreadContext);
#define H_Wow64SetThreadContext 0x769ca789
using T_Wow64SuspendThread = decltype(&Wow64SuspendThread);
#define H_Wow64SuspendThread 0x08fc07a3
using T_WriteConsoleA = decltype(&WriteConsoleA);
#define H_WriteConsoleA 0x88d2f963
using T_WriteConsoleInputA = decltype(&WriteConsoleInputA);
#define H_WriteConsoleInputA 0xa8107a37
//using T_WriteConsoleInputVDMA = decltype(&WriteConsoleInputVDMA);
#define H_WriteConsoleInputVDMA 0x9bb83235
//using T_WriteConsoleInputVDMW = decltype(&WriteConsoleInputVDMW);
#define H_WriteConsoleInputVDMW 0x9bb8324b
using T_WriteConsoleInputW = decltype(&WriteConsoleInputW);
#define H_WriteConsoleInputW 0xa8107a4d
using T_WriteConsoleOutputA = decltype(&WriteConsoleOutputA);
#define H_WriteConsoleOutputA 0x496d8108
using T_WriteConsoleOutputAttribute = decltype(&WriteConsoleOutputAttribute);
#define H_WriteConsoleOutputAttribute 0xd1c029df
using T_WriteConsoleOutputCharacterA = decltype(&WriteConsoleOutputCharacterA);
#define H_WriteConsoleOutputCharacterA 0x4166a81e
using T_WriteConsoleOutputCharacterW = decltype(&WriteConsoleOutputCharacterW);
#define H_WriteConsoleOutputCharacterW 0x4166a834
using T_WriteConsoleOutputW = decltype(&WriteConsoleOutputW);
#define H_WriteConsoleOutputW 0x496d811e
using T_WriteConsoleW = decltype(&WriteConsoleW);
#define H_WriteConsoleW 0x88d2f979
using T_WriteFile = decltype(&WriteFile);
#define H_WriteFile 0xe80a791f
using T_WriteFileEx = decltype(&WriteFileEx);
#define H_WriteFileEx 0x04c64872
using T_WriteFileGather = decltype(&WriteFileGather);
#define H_WriteFileGather 0x4fadcac0
using T_WritePrivateProfileSectionA = decltype(&WritePrivateProfileSectionA);
#define H_WritePrivateProfileSectionA 0xb28f0d51
using T_WritePrivateProfileSectionW = decltype(&WritePrivateProfileSectionW);
#define H_WritePrivateProfileSectionW 0xb28f0d67
using T_WritePrivateProfileStringA = decltype(&WritePrivateProfileStringA);
#define H_WritePrivateProfileStringA 0x4b63076c
using T_WritePrivateProfileStringW = decltype(&WritePrivateProfileStringW);
#define H_WritePrivateProfileStringW 0x4b630782
using T_WritePrivateProfileStructA = decltype(&WritePrivateProfileStructA);
#define H_WritePrivateProfileStructA 0x63cb04ac
using T_WritePrivateProfileStructW = decltype(&WritePrivateProfileStructW);
#define H_WritePrivateProfileStructW 0x63cb04c2
using T_WriteProcessMemory = decltype(&WriteProcessMemory);
#define H_WriteProcessMemory 0xd83d6aa1
using T_WriteProfileSectionA = decltype(&WriteProfileSectionA);
#define H_WriteProfileSectionA 0xf2d0bef2
using T_WriteProfileSectionW = decltype(&WriteProfileSectionW);
#define H_WriteProfileSectionW 0xf2d0bf08
using T_WriteProfileStringA = decltype(&WriteProfileStringA);
#define H_WriteProfileStringA 0x81972f74
using T_WriteProfileStringW = decltype(&WriteProfileStringW);
#define H_WriteProfileStringW 0x81972f8a
using T_WriteTapemark = decltype(&WriteTapemark);
#define H_WriteTapemark 0x850218ee
using T_ZombifyActCtx = decltype(&ZombifyActCtx);
#define H_ZombifyActCtx 0x176b63d5
using T___C_specific_handler = decltype(&__C_specific_handler);
#define H___C_specific_handler 0xdb45d5f3
//using T___chkstk = decltype(&__chkstk);
#define H___chkstk 0x5b22a93d
//using T___misaligned_access = decltype(&__misaligned_access);
#define H___misaligned_access 0xd99e9c43
using T__hread = decltype(&_hread);
#define H__hread 0x670e99d4
using T__hwrite = decltype(&_hwrite);
#define H__hwrite 0xe9238ad9
using T__lclose = decltype(&_lclose);
#define H__lclose 0xdd1a4c5b
using T__lcreat = decltype(&_lcreat);
#define H__lcreat 0xe88a49ea
using T__llseek = decltype(&_llseek);
#define H__llseek 0xeaaad9e1
//using T__local_unwind = decltype(&_local_unwind);
#define H__local_unwind 0x94ce266b
using T__lopen = decltype(&_lopen);
#define H__lopen 0x612edc9e
using T__lread = decltype(&_lread);
#define H__lread 0x670ed9d4
using T__lwrite = decltype(&_lwrite);
#define H__lwrite 0xe9238adb
using T_lstrcat = decltype(&lstrcat);
#define H_lstrcat 0x68bf596e
using T_lstrcatA = decltype(&lstrcatA);
#define H_lstrcatA 0xcb73463b
using T_lstrcatW = decltype(&lstrcatW);
#define H_lstrcatW 0xcb734651
using T_lstrcmp = decltype(&lstrcmp);
#define H_lstrcmp 0x691f596a
using T_lstrcmpA = decltype(&lstrcmpA);
#define H_lstrcmpA 0xcb53493b
using T_lstrcmpW = decltype(&lstrcmpW);
#define H_lstrcmpW 0xcb534951
using T_lstrcmpi = decltype(&lstrcmpi);
#define H_lstrcmpi 0xcb534963
using T_lstrcmpiA = decltype(&lstrcmpiA);
#define H_lstrcmpiA 0x4b1e5adb
using T_lstrcmpiW = decltype(&lstrcmpiW);
#define H_lstrcmpiW 0x4b1e5af1
using T_lstrcpy = decltype(&lstrcpy);
#define H_lstrcpy 0x69375973
using T_lstrcpyA = decltype(&lstrcpyA);
#define H_lstrcpyA 0xcb9b49fb
using T_lstrcpyW = decltype(&lstrcpyW);
#define H_lstrcpyW 0xcb9b4a11
using T_lstrcpyn = decltype(&lstrcpyn);
#define H_lstrcpyn 0xcb9b4a28
using T_lstrcpynA = decltype(&lstrcpynA);
#define H_lstrcpynA 0x51465d1b
using T_lstrcpynW = decltype(&lstrcpynW);
#define H_lstrcpynW 0x51465d31
using T_lstrlen = decltype(&lstrlen);
#define H_lstrlen 0x68df5ba8
using T_lstrlenA = decltype(&lstrlenA);
#define H_lstrlenA 0xdd43473b
using T_lstrlenW = decltype(&lstrlenW);
#define H_lstrlenW 0xdd434751
using T_uaw_lstrcmpW = decltype(&uaw_lstrcmpW);
#define H_uaw_lstrcmpW 0x6b41016a
using T_uaw_lstrcmpiW = decltype(&uaw_lstrcmpiW);
#define H_uaw_lstrcmpiW 0x0be35a5f
using T_uaw_lstrlenW = decltype(&uaw_lstrlenW);
#define H_uaw_lstrlenW 0x7d30ff6a
using T_uaw_wcschr = decltype(&uaw_wcschr);
#define H_uaw_wcschr 0xcbc6004e
using T_uaw_wcscpy = decltype(&uaw_wcscpy);
#define H_uaw_wcscpy 0xcc060055
using T_uaw_wcsicmp = decltype(&uaw_wcsicmp);
#define H_uaw_wcsicmp 0x0e4e5d60
using T_uaw_wcslen = decltype(&uaw_wcslen);
#define H_uaw_wcslen 0xcbae028a
using T_uaw_wcsrchr = decltype(&uaw_wcsrchr);
#define H_uaw_wcsrchr 0x20265d62
