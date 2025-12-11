#ifndef _THREADPOOLAPISET_H
#define _THREADPOOLAPISET_H

#if __POCC__ >= 500
#pragma once
#endif

/* ApiSet contract for api-ms-win-core-threadpool-l1 */

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

typedef void (WINAPI *PTP_WIN32_IO_CALLBACK)(
    PTP_CALLBACK_INSTANCE Instance,
    PVOID Context,
    PVOID Overlapped,
    ULONG IoResult,
    ULONG_PTR NumberOfBytesTransferred,
    PTP_IO Io
);

#if (_WIN32_WINNT >= 0x0600)

WINBASEAPI PTP_POOL WINAPI CreateThreadpool(
    PVOID reserved
);
 
WINBASEAPI void WINAPI SetThreadpoolThreadMaximum(
    PTP_POOL ptpp,
    DWORD cthrdMost
);

WINBASEAPI BOOL WINAPI SetThreadpoolThreadMinimum(
    PTP_POOL ptpp,
    DWORD cthrdMic
);

WINBASEAPI BOOL WINAPI SetThreadpoolStackInformation(
    PTP_POOL ptpp,
    PTP_POOL_STACK_INFORMATION ptpsi
);

WINBASEAPI BOOL WINAPI QueryThreadpoolStackInformation(
    PTP_POOL ptpp,
    PTP_POOL_STACK_INFORMATION ptpsi
);

WINBASEAPI void WINAPI CloseThreadpool(
    PTP_POOL ptpp
);

WINBASEAPI PTP_CLEANUP_GROUP WINAPI CreateThreadpoolCleanupGroup(
    void
);

WINBASEAPI void WINAPI CloseThreadpoolCleanupGroupMembers(
    PTP_CLEANUP_GROUP ptpcg,
    BOOL fCancelPendingCallbacks,
    PVOID pvCleanupContext
);

WINBASEAPI void WINAPI CloseThreadpoolCleanupGroup(
    PTP_CLEANUP_GROUP ptpcg
);

WINBASEAPI void WINAPI SetEventWhenCallbackReturns(
    PTP_CALLBACK_INSTANCE pci,
    HANDLE evt
);

WINBASEAPI void WINAPI ReleaseSemaphoreWhenCallbackReturns(
    PTP_CALLBACK_INSTANCE pci,
    HANDLE sem,
    DWORD crel
);

WINBASEAPI void WINAPI ReleaseMutexWhenCallbackReturns(
    PTP_CALLBACK_INSTANCE pci,
    HANDLE mut
);

WINBASEAPI void WINAPI LeaveCriticalSectionWhenCallbackReturns(
    PTP_CALLBACK_INSTANCE pci,
    PCRITICAL_SECTION pcs
);

WINBASEAPI void WINAPI FreeLibraryWhenCallbackReturns(
    PTP_CALLBACK_INSTANCE pci,
    HMODULE mod
);

WINBASEAPI BOOL WINAPI CallbackMayRunLong(
    PTP_CALLBACK_INSTANCE pci
);

WINBASEAPI void WINAPI DisassociateCurrentThreadFromCallback(
    PTP_CALLBACK_INSTANCE pci
);

WINBASEAPI BOOL WINAPI TrySubmitThreadpoolCallback(
    PTP_SIMPLE_CALLBACK pfns,
    PVOID pv,
    PTP_CALLBACK_ENVIRON pcbe
);

WINBASEAPI PTP_WORK WINAPI CreateThreadpoolWork(
    PTP_WORK_CALLBACK pfnwk,
    PVOID pv,
    PTP_CALLBACK_ENVIRON pcbe
);

WINBASEAPI void WINAPI SubmitThreadpoolWork(
    PTP_WORK pwk
);

WINBASEAPI void WINAPI WaitForThreadpoolWorkCallbacks(
    PTP_WORK pwk,
    BOOL fCancelPendingCallbacks
);

WINBASEAPI void WINAPI CloseThreadpoolWork(
    PTP_WORK pwk
);

WINBASEAPI PTP_TIMER WINAPI CreateThreadpoolTimer(
    PTP_TIMER_CALLBACK pfnti,
    PVOID pv,
    PTP_CALLBACK_ENVIRON pcbe
);

WINBASEAPI void WINAPI SetThreadpoolTimer(
    PTP_TIMER pti,
    PFILETIME pftDueTime,
    DWORD msPeriod,
    DWORD msWindowLength
);

WINBASEAPI BOOL WINAPI IsThreadpoolTimerSet(
    PTP_TIMER pti
);

WINBASEAPI void WINAPI WaitForThreadpoolTimerCallbacks(
    PTP_TIMER pti,
    BOOL fCancelPendingCallbacks
);

WINBASEAPI void WINAPI CloseThreadpoolTimer(
    PTP_TIMER pti
);

WINBASEAPI PTP_WAIT WINAPI CreateThreadpoolWait(
    PTP_WAIT_CALLBACK pfnwa,
    PVOID pv,
    PTP_CALLBACK_ENVIRON pcbe
);

WINBASEAPI void WINAPI SetThreadpoolWait(
    PTP_WAIT pwa,
    HANDLE h,
    PFILETIME pftTimeout
);

WINBASEAPI void WINAPI WaitForThreadpoolWaitCallbacks(
    PTP_WAIT pwa,
    BOOL fCancelPendingCallbacks
);

WINBASEAPI void WINAPI CloseThreadpoolWait(
    PTP_WAIT pwa
);

WINBASEAPI PTP_IO WINAPI CreateThreadpoolIo(
    HANDLE fl,
    PTP_WIN32_IO_CALLBACK pfnio,
    PVOID pv,
    PTP_CALLBACK_ENVIRON pcbe
);

WINBASEAPI void WINAPI StartThreadpoolIo(
    PTP_IO pio
);

WINBASEAPI void WINAPI CancelThreadpoolIo(
    PTP_IO pio
);

WINBASEAPI void WINAPI WaitForThreadpoolIoCallbacks(
    PTP_IO pio,
    BOOL fCancelPendingCallbacks
);

WINBASEAPI void WINAPI CloseThreadpoolIo(
    PTP_IO pio
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI BOOL WINAPI SetThreadpoolTimerEx(
    PTP_TIMER pti,
    PFILETIME pftDueTime,
    DWORD msPeriod,
    DWORD msWindowLength
);

WINBASEAPI BOOL WINAPI SetThreadpoolWaitEx(
    PTP_WAIT pwa,
    HANDLE h,
    PFILETIME pftTimeout,
    PVOID Reserved
);

#endif /* _WIN32_WINNT >= 0x0600 */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#endif /* _THREADPOOLAPISET_H */
