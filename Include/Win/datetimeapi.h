#ifndef _DATETIMEAPI_H
#define _DATETIMEAPI_H

#if __POCC__ >= 500
#pragma once
#endif

/* ApiSet contract for api-ms-win-core-datetime-l1 */

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINBASEAPI int WINAPI GetDateFormatA(
    LCID Locale,
    DWORD dwFlags,
    CONST SYSTEMTIME *lpDate,
    LPCSTR lpFormat,
    LPSTR lpDateStr,
    int cchDate
);

WINBASEAPI int WINAPI GetDateFormatW(
    LCID Locale,
    DWORD dwFlags,
    CONST SYSTEMTIME *lpDate,
    LPCWSTR lpFormat,
    LPWSTR lpDateStr,
    int cchDate
);

#ifdef UNICODE
#define GetDateFormat  GetDateFormatW
#else /* !UNICODE */
#define GetDateFormat  GetDateFormatA
#endif /* !UNICODE */

WINBASEAPI int WINAPI GetTimeFormatA(
    LCID Locale,
    DWORD dwFlags,
    CONST SYSTEMTIME *lpTime,
    LPCSTR lpFormat,
    LPSTR lpTimeStr,
    int cchTime
);

WINBASEAPI int WINAPI GetTimeFormatW(
    LCID Locale,
    DWORD dwFlags,
    CONST SYSTEMTIME *lpTime,
    LPCWSTR lpFormat,
    LPWSTR lpTimeStr,
    int cchTime
);

#ifdef UNICODE
#define GetTimeFormat  GetTimeFormatW
#else /* !UNICODE */
#define GetTimeFormat  GetTimeFormatA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINBASEAPI int WINAPI GetTimeFormatEx(
    LPCWSTR lpLocaleName,
    DWORD dwFlags,
    CONST SYSTEMTIME *lpTime,
    LPCWSTR lpFormat,
    LPWSTR lpTimeStr,
    int cchTime
);

WINBASEAPI int WINAPI GetDateFormatEx(
    LPCWSTR lpLocaleName,
    DWORD dwFlags,
    CONST SYSTEMTIME *lpDate,
    LPCWSTR lpFormat,
    LPWSTR lpDateStr,
    int cchDate,
    LPCWSTR lpCalendar
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#define GetDurationFormatEx_DEFINED

WINBASEAPI int WINAPI GetDurationFormatEx(
    LPCWSTR lpLocaleName,
    DWORD dwFlags,
    CONST SYSTEMTIME *lpDuration,
    ULONGLONG ullDuration,
    LPCWSTR lpFormat,
    LPWSTR lpDurationStr,
    int cchDuration
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#endif /* _DATETIMEAPI_H */
