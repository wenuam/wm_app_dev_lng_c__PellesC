#ifndef _HANDLEAPI_H
#define _HANDLEAPI_H

#if __POCC__ >= 500
#pragma once
#endif

/* ApiSet contract for api-ms-win-core-handle-l1-1-0 */

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>

#include <winapifamily.h>

#define INVALID_HANDLE_VALUE ((HANDLE)(LONG_PTR)-1)

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINBASEAPI BOOL WINAPI CloseHandle(
    HANDLE hObject);

WINBASEAPI BOOL WINAPI DuplicateHandle(
    HANDLE hSourceProcessHandle,
    HANDLE hSourceHandle,
    HANDLE hTargetProcessHandle,
    LPHANDLE lpTargetHandle,
    DWORD dwDesiredAccess,
    BOOL bInheritHandle,
    DWORD dwOptions
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI BOOL WINAPI CompareObjectHandles(
    HANDLE hFirstObjectHandle,
    HANDLE hSecondObjectHandle
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINBASEAPI BOOL WINAPI GetHandleInformation(
    HANDLE hObject,
    LPDWORD lpdwFlags
);

WINBASEAPI BOOL WINAPI SetHandleInformation(
    HANDLE hObject,
    DWORD dwMask,
    DWORD dwFlags
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#endif /* _HANDLEAPI_H */
