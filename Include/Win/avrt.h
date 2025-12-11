#ifndef _AVRT_H
#define _AVRT_H

#if __POCC__ >= 500
#pragma once
#endif

/* Multimedia class scheduler API definitions */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)

typedef enum _AVRT_PRIORITY {
    AVRT_PRIORITY_VERYLOW = -2,
    AVRT_PRIORITY_LOW,
    AVRT_PRIORITY_NORMAL,
    AVRT_PRIORITY_HIGH,
    AVRT_PRIORITY_CRITICAL
} AVRT_PRIORITY, *PAVRT_PRIORITY;

#define THREAD_ORDER_GROUP_INFINITE_TIMEOUT     (-1I64)

#define AVRTAPI DECLSPEC_IMPORT

AVRTAPI HANDLE WINAPI AvSetMmThreadCharacteristicsA(
    LPCSTR TaskName,
    LPDWORD TaskIndex
);
AVRTAPI HANDLE WINAPI AvSetMmThreadCharacteristicsW(
    LPCWSTR TaskName,
    LPDWORD TaskIndex
);
#ifdef UNICODE
#define AvSetMmThreadCharacteristics  AvSetMmThreadCharacteristicsW
#else /* !UNICODE */
#define AvSetMmThreadCharacteristics  AvSetMmThreadCharacteristicsA
#endif /* !UNICODE */

AVRTAPI HANDLE WINAPI AvSetMmMaxThreadCharacteristicsA(
    LPCSTR FirstTask,
    LPCSTR SecondTask,
    LPDWORD TaskIndex
);
AVRTAPI HANDLE WINAPI AvSetMmMaxThreadCharacteristicsW(
    LPCWSTR FirstTask,
    LPCWSTR SecondTask,
    LPDWORD TaskIndex
);
#ifdef UNICODE
#define AvSetMmMaxThreadCharacteristics  AvSetMmMaxThreadCharacteristicsW
#else /* !UNICODE */
#define AvSetMmMaxThreadCharacteristics  AvSetMmMaxThreadCharacteristicsA
#endif /* !UNICODE */

AVRTAPI BOOL WINAPI AvRevertMmThreadCharacteristics(
    HANDLE AvrtHandle
);

AVRTAPI BOOL WINAPI AvSetMmThreadPriority(
    HANDLE AvrtHandle,
    AVRT_PRIORITY Priority
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

AVRTAPI BOOL WINAPI AvRtCreateThreadOrderingGroup(
    PHANDLE Context,
    PLARGE_INTEGER Period,
    GUID *ThreadOrderingGuid,
    PLARGE_INTEGER Timeout
);

AVRTAPI BOOL WINAPI AvRtCreateThreadOrderingGroupExA(
    PHANDLE Context,
    PLARGE_INTEGER Period,
    GUID *ThreadOrderingGuid,
    PLARGE_INTEGER Timeout,
    LPCSTR TaskName
);
AVRTAPI BOOL WINAPI AvRtCreateThreadOrderingGroupExW(
    PHANDLE Context,
    PLARGE_INTEGER Period,
    GUID *ThreadOrderingGuid,
    PLARGE_INTEGER Timeout,
    LPCWSTR TaskName
);
#ifdef UNICODE
#define AvRtCreateThreadOrderingGroupEx  AvRtCreateThreadOrderingGroupExW
#else /* !UNICODE */
#define AvRtCreateThreadOrderingGroupEx  AvRtCreateThreadOrderingGroupExA
#endif /* !UNICODE */

AVRTAPI BOOL WINAPI AvRtJoinThreadOrderingGroup(
    PHANDLE Context,
    GUID *ThreadOrderingGuid,
    BOOL Before
);

AVRTAPI BOOL WINAPI AvRtWaitOnThreadOrderingGroup(
    HANDLE Context
);

AVRTAPI BOOL WINAPI AvRtLeaveThreadOrderingGroup(
    HANDLE Context
);

AVRTAPI BOOL WINAPI AvRtDeleteThreadOrderingGroup(
    HANDLE Context
);

AVRTAPI BOOL WINAPI AvQuerySystemResponsiveness(
    HANDLE AvrtHandle,
    PULONG SystemResponsivenessValue
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#endif /* _AVRT_H */
