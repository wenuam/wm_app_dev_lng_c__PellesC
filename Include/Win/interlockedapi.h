#ifndef _INTERLOCKAPI_H
#define _INTERLOCKAPI_H

#if __POCC__ >= 500
#pragma once
#endif

/* ApiSet contract for api-ms-win-core-interlocked-l1 */

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

#ifndef NOWINBASEINTERLOCK

#ifndef _NTOS_

#if defined(_SLIST_HEADER_) && !defined(_NTOSP_)

WINBASEAPI VOID WINAPI InitializeSListHead(
    PSLIST_HEADER ListHead);

WINBASEAPI PSLIST_ENTRY WINAPI InterlockedPopEntrySList(
    PSLIST_HEADER ListHead);

WINBASEAPI PSLIST_ENTRY WINAPI InterlockedPushEntrySList(
    PSLIST_HEADER ListHead,
    PSLIST_ENTRY ListEntry);

#if (NTDDI_VERSION >= NTDDI_WIN8)

#define InterlockedPushListSList  InterlockedPushListSListEx

WINBASEAPI PSLIST_ENTRY WINAPI InterlockedPushListSListEx(
    PSLIST_HEADER ListHead,
    PSLIST_ENTRY List,
    PSLIST_ENTRY ListEnd,
    ULONG Count);

#endif /* (NTDDI_VERSION >= NTDDI_WIN8) */

WINBASEAPI PSLIST_ENTRY WINAPI InterlockedFlushSList(
    PSLIST_HEADER ListHead);

WINBASEAPI USHORT WINAPI QueryDepthSList(
    PSLIST_HEADER ListHead);

#endif /* SLIST_HEADER_ */

#endif /* _NTOS_ */

#endif /* NOWINBASEINTERLOCK */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#endif /* _INTERLOCKAPI_H */
