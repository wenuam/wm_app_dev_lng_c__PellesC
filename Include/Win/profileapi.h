#ifndef _PROFILEAPI_H
#define _PROFILEAPI_H

#if __POCC__ >= 500
#pragma once
#endif

/* ApiSet Contract for api-ms-win-core-profile-l1 */

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
WINBASEAPI BOOL WINAPI QueryPerformanceCounter(LARGE_INTEGER *lpPerformanceCount);
WINBASEAPI BOOL WINAPI QueryPerformanceFrequency(LARGE_INTEGER *lpFrequency);
#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#endif /* _PROFILEAPI_H */
