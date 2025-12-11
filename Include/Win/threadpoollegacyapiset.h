#ifndef _THREADPOOLLEGACYAPISET_H
#define _THREADPOOLLEGACYAPISET_H

#if __POCC__ >= 500
#pragma once
#endif

/* ApiSet contract for api-ms-win-core-threadpool-l1 */

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINBASEAPI BOOL WINAPI QueueUserWorkItem(
    LPTHREAD_START_ROUTINE Function,
    PVOID Context,
    ULONG Flags
);

WINBASEAPI BOOL WINAPI UnregisterWaitEx(
    HANDLE WaitHandle,
    HANDLE CompletionEvent
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINBASEAPI HANDLE WINAPI CreateTimerQueue(
    VOID
);

WINBASEAPI BOOL WINAPI CreateTimerQueueTimer(
    PHANDLE phNewTimer,
    HANDLE TimerQueue,
    WAITORTIMERCALLBACK Callback,
    PVOID Parameter,
    DWORD DueTime,
    DWORD Period,
    ULONG Flags
);

WINBASEAPI BOOL WINAPI ChangeTimerQueueTimer(
    HANDLE TimerQueue,
    HANDLE Timer,
    ULONG DueTime,
    ULONG Period
);

WINBASEAPI BOOL WINAPI DeleteTimerQueueTimer(
    HANDLE TimerQueue,
    HANDLE Timer,
    HANDLE CompletionEvent
);

WINBASEAPI BOOL WINAPI
DeleteTimerQueue(
    HANDLE TimerQueue
);

WINBASEAPI BOOL WINAPI DeleteTimerQueueEx(
    HANDLE TimerQueue,
    HANDLE CompletionEvent
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#endif /* _THREADPOOLLEGACYAPISET_H */
