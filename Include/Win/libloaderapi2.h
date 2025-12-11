#ifndef _LIBLOADERAPI2_H
#define _LIBLOADERAPI2_H

#if __POCC__ >= 500
#pragma once
#endif

/* ApiSet contract for api-ms-win-core-libraryloader-l2 */

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

#if (_WIN32_WINNT >= 0x0602)
WINBASEAPI HMODULE WINAPI LoadPackagedLibrary(
    LPCWSTR lpwLibFileName,
    DWORD Reserved);
#endif /* (_WIN32_WINNT >= 0x0602) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

#if (_WIN32_WINNT >= 0x0602)
WINBASEAPI BOOL WINAPI QueryOptionalDelayLoadedAPI(
    HMODULE hParentModule,
    LPCSTR lpDllName,
    LPCSTR lpProcName,
    DWORD Reserved);
#endif /* (_WIN32_WINNT >= 0x0602) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#endif /* _LIBLOADERAPI2_H */
