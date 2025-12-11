#ifndef _JOBAPI_H
#define _JOBAPI_H

#if __POCC__ >= 500
#pragma once
#endif

/* ApiSet contract for api-ms-win-core-job-l1 */

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#if (_WIN32_WINNT >= 0x0501)

WINBASEAPI BOOL WINAPI IsProcessInJob(
    HANDLE ProcessHandle,
    HANDLE JobHandle,
    PBOOL Result);

#endif /* (_WIN32_WINNT >= 0x0501) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#endif /* _JOBAPI_H */
