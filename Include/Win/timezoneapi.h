#ifndef _TIMEZONEAPI_H
#define _TIMEZONEAPI_H

#if __POCC__ >= 500
#pragma once
#endif

/* ApiSet contract for api-ms-win-core-timezone-l1 */

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

#define TIME_ZONE_ID_INVALID  ((DWORD)0xFFFFFFFF)

typedef struct _TIME_ZONE_INFORMATION {
    LONG Bias;
    WCHAR StandardName[ 32 ];
    SYSTEMTIME StandardDate;
    LONG StandardBias;
    WCHAR DaylightName[ 32 ];
    SYSTEMTIME DaylightDate;
    LONG DaylightBias;
} TIME_ZONE_INFORMATION, *PTIME_ZONE_INFORMATION, *LPTIME_ZONE_INFORMATION;

typedef struct _TIME_DYNAMIC_ZONE_INFORMATION {
    LONG Bias;
    WCHAR StandardName[ 32 ];
    SYSTEMTIME StandardDate;
    LONG StandardBias;
    WCHAR DaylightName[ 32 ];
    SYSTEMTIME DaylightDate;
    LONG DaylightBias;
    WCHAR TimeZoneKeyName[ 128 ];
    BOOLEAN DynamicDaylightTimeDisabled;
} DYNAMIC_TIME_ZONE_INFORMATION, *PDYNAMIC_TIME_ZONE_INFORMATION;

WINBASEAPI BOOL WINAPI SystemTimeToTzSpecificLocalTime(
    CONST TIME_ZONE_INFORMATION *lpTimeZoneInformation,
    CONST SYSTEMTIME *lpUniversalTime,
    LPSYSTEMTIME lpLocalTime
);

WINBASEAPI BOOL WINAPI TzSpecificLocalTimeToSystemTime(
    CONST TIME_ZONE_INFORMATION *lpTimeZoneInformation,
    CONST SYSTEMTIME *lpLocalTime,
    LPSYSTEMTIME lpUniversalTime
);

WINBASEAPI BOOL WINAPI FileTimeToSystemTime(
    CONST FILETIME *lpFileTime,
    LPSYSTEMTIME lpSystemTime
);

WINBASEAPI BOOL WINAPI SystemTimeToFileTime(
    CONST SYSTEMTIME *lpSystemTime,
    LPFILETIME lpFileTime
);

WINBASEAPI DWORD WINAPI GetTimeZoneInformation(
    LPTIME_ZONE_INFORMATION lpTimeZoneInformation
);

WINBASEAPI BOOL WINAPI SetTimeZoneInformation(
    CONST TIME_ZONE_INFORMATION *lpTimeZoneInformation
);

#if (_WIN32_WINNT >= 0x0600)

WINBASEAPI BOOL WINAPI SetDynamicTimeZoneInformation(
    CONST DYNAMIC_TIME_ZONE_INFORMATION * lpTimeZoneInformation
);

#endif /* (_WIN32_WINNT >= 0x0600) */

#if (_WIN32_WINNT >= 0x0600)

WINBASEAPI DWORD WINAPI GetDynamicTimeZoneInformation(
    PDYNAMIC_TIME_ZONE_INFORMATION pTimeZoneInformation
);

#endif /* (_WIN32_WINNT >= 0x0600) */

#if (_WIN32_WINNT >= 0x0601)

BOOL WINAPI GetTimeZoneInformationForYear(
    USHORT wYear,
    PDYNAMIC_TIME_ZONE_INFORMATION pdtzi,
    LPTIME_ZONE_INFORMATION ptzi
);

#endif /* (_WIN32_WINNT >= 0x0601) */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)

WINBASEAPI DWORD WINAPI EnumDynamicTimeZoneInformation(
    CONST DWORD dwIndex,
    PDYNAMIC_TIME_ZONE_INFORMATION lpTimeZoneInformation
);

WINBASEAPI DWORD WINAPI GetDynamicTimeZoneInformationEffectiveYears(
    CONST PDYNAMIC_TIME_ZONE_INFORMATION lpTimeZoneInformation,
    LPDWORD FirstYear,
    LPDWORD LastYear
);

WINBASEAPI BOOL WINAPI SystemTimeToTzSpecificLocalTimeEx(
    CONST DYNAMIC_TIME_ZONE_INFORMATION *lpTimeZoneInformation,
    CONST SYSTEMTIME *lpUniversalTime,
    LPSYSTEMTIME lpLocalTime
);

WINBASEAPI BOOL WINAPI TzSpecificLocalTimeToSystemTimeEx(
    CONST DYNAMIC_TIME_ZONE_INFORMATION *lpTimeZoneInformation,
    CONST SYSTEMTIME *lpLocalTime,
    LPSYSTEMTIME lpUniversalTime
);

#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WIN8) */

#if (NTDDI_VERSION >= NTDDI_WIN10_RS5)

WINBASEAPI BOOL WINAPI LocalFileTimeToLocalSystemTime(
    CONST TIME_ZONE_INFORMATION *timeZoneInformation,
    CONST FILETIME *localFileTime,
    SYSTEMTIME *localSystemTime
);

WINBASEAPI BOOL WINAPI LocalSystemTimeToLocalFileTime(
    CONST TIME_ZONE_INFORMATION *timeZoneInformation,
    CONST SYSTEMTIME *localSystemTime,
    FILETIME *localFileTime
);

#endif /* (NTDDI_VERSION >= NTDDI_WIN10_RS5) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#endif /* _TIMEZONEAPI_H */
