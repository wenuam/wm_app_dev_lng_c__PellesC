#ifndef _PROCESSTOPOLOGYAPI_H
#define _PROCESSTOPOLOGYAPI_H

#if __POCC__ >= 500
#pragma once
#endif

/* ApiSet contract for api-ms-win-core-processtopology-l1 */

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#if (_WIN32_WINNT >= 0x0601)

WINBASEAPI BOOL WINAPI GetProcessGroupAffinity(
    HANDLE hProcess,
    PUSHORT GroupCount,
    PUSHORT GroupArray
);

#endif /* (_WIN32_WINNT >= 0x0601) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

#if (_WIN32_WINNT >= 0x0601)

WINBASEAPI BOOL WINAPI GetThreadGroupAffinity(
    HANDLE hThread,
    PGROUP_AFFINITY GroupAffinity
);

WINBASEAPI BOOL WINAPI SetThreadGroupAffinity(
    HANDLE hThread,
    CONST GROUP_AFFINITY * GroupAffinity,
    PGROUP_AFFINITY PreviousGroupAffinity
);

#endif /* (_WIN32_WINNT >= 0x0601) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#endif /* _PROCESSTOPOLOGYAPI_H */
