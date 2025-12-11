#ifndef _STRINGAPISET_H
#define _STRINGAPISET_H

#if __POCC__ >= 500
#pragma once
#endif

/* ApiSet contract for api-ms-win-core-string-l1 */

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <winnls.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)

#if (WINVER >= 0x0600)

WINBASEAPI int WINAPI CompareStringEx(
    LPCWSTR lpLocaleName,
    DWORD dwCmpFlags,
    LPCWCH lpString1,
    int cchCount1,
    LPCWCH lpString2,
    int cchCount2,
    LPNLSVERSIONINFO lpVersionInformation,
    LPVOID lpReserved,
    LPARAM lParam
);

WINBASEAPI int WINAPI CompareStringOrdinal(
    LPCWCH lpString1,
    int cchCount1,
    LPCWCH lpString2,
    int cchCount2,
    BOOL bIgnoreCase
);

#endif /* (WINVER >= 0x0600) */

WINBASEAPI int WINAPI CompareStringW(
    LCID Locale,
    DWORD dwCmpFlags,
    PCNZWCH lpString1,
    int cchCount1,
    PCNZWCH lpString2,
    int cchCount2
);

#ifdef UNICODE
#define CompareString  CompareStringW
#endif /* UNICODE */

WINBASEAPI int WINAPI FoldStringW(
    DWORD dwMapFlags,
    LPCWCH lpSrcStr,
    int cchSrc,
    LPWSTR lpDestStr,
    int cchDest
);

#ifdef UNICODE
#define FoldString  FoldStringW
#endif /* UNICODE */

WINBASEAPI BOOL WINAPI GetStringTypeExW(
    LCID Locale,
    DWORD dwInfoType,
    LPCWCH lpSrcStr,
    int cchSrc,
    LPWORD lpCharType
);

#ifdef UNICODE
#define GetStringTypeEx  GetStringTypeExW
#endif /* UNICODE */

WINBASEAPI BOOL WINAPI GetStringTypeW(
    DWORD dwInfoType,
    LPCWCH lpSrcStr,
    int cchSrc,
    LPWORD lpCharType
);

WINBASEAPI int WINAPI MultiByteToWideChar(
    UINT CodePage,
    DWORD dwFlags,
    LPCCH lpMultiByteStr,
    int cbMultiByte,
    LPWSTR lpWideCharStr,
    int cchWideChar
);

WINBASEAPI int WINAPI WideCharToMultiByte(
    UINT CodePage,
    DWORD dwFlags,
    LPCWCH lpWideCharStr,
    int cchWideChar,
    LPSTR lpMultiByteStr,
    int cbMultiByte,
    LPCCH lpDefaultChar,
    LPBOOL lpUsedDefaultChar
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES) */

#endif /* STRINGAPISET_H */
