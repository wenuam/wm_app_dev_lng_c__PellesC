#ifndef _LMREMUTL_H
#define _LMREMUTL_H

#if __POCC__ >= 500
#pragma once
#endif

/* NetRemote API definition */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#ifndef DESC_CHAR_UNICODE
typedef CHAR DESC_CHAR;
typedef LPSTR LPDESC;
#else /* DESC_CHAR_UNICODE is defined */
typedef WCHAR DESC_CHAR;
typedef LPWSTR LPDESC;
#endif /* DESC_CHAR_UNICODE is defined */

NET_API_STATUS NET_API_FUNCTION NetRemoteTOD(
    LPCWSTR UncServerName,
    LPBYTE *BufferPtr
);

NET_API_STATUS NET_API_FUNCTION NetRemoteComputerSupports(
    LPCWSTR UncServerName,
    DWORD OptionsWanted,
    LPDWORD OptionsSupported
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

NET_API_STATUS __cdecl RxRemoteApi(
    DWORD ApiNumber,
    LPCWSTR UncServerName,
    LPDESC ParmDescString,
    LPDESC DataDesc16,
    LPDESC DataDesc32,
    LPDESC DataDescSmb,
    LPDESC AuxDesc16,
    LPDESC AuxDesc32,
    LPDESC AuxDescSmb,
    DWORD Flags,
    ...
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

typedef struct _TIME_OF_DAY_INFO {
    DWORD tod_elapsedt;
    DWORD tod_msecs;
    DWORD tod_hours;
    DWORD tod_mins;
    DWORD tod_secs;
    DWORD tod_hunds;
    LONG tod_timezone;
    DWORD tod_tinterval;
    DWORD tod_day;
    DWORD tod_month;
    DWORD tod_year;
    DWORD tod_weekday;
} TIME_OF_DAY_INFO, *PTIME_OF_DAY_INFO, *LPTIME_OF_DAY_INFO;

#define SUPPORTS_REMOTE_ADMIN_PROTOCOL  0x00000002L
#define SUPPORTS_RPC                    0x00000004L
#define SUPPORTS_SAM_PROTOCOL           0x00000008L
#define SUPPORTS_UNICODE                0x00000010L
#define SUPPORTS_LOCAL                  0x00000020L
#define SUPPORTS_ANY                    0xFFFFFFFFL

#define NO_PERMISSION_REQUIRED  0x00000001
#define ALLOCATE_RESPONSE       0x00000002
#define USE_SPECIFIC_TRANSPORT  0x80000000

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#endif /* _LMREMUTL_H */
