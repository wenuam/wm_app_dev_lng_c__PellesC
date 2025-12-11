#ifndef _LMCONFIG_H
#define _LMCONFIG_H

#if __POCC__ >= 500
#pragma once
#endif

/* NetConfig API definitions */
#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#define REVISED_CONFIG_APIS

NET_API_STATUS NET_API_FUNCTION NetConfigGet (
    LPCWSTR server,
    LPCWSTR component,
    LPCWSTR parameter,
#ifdef REVISED_CONFIG_APIS
    LPBYTE *bufptr
#else /* !REVISED_CONFIG_APIS */
    LPBYTE *bufptr,
    LPDWORD totalavailable
#endif /* !REVISED_CONFIG_APIS */
);

NET_API_STATUS NET_API_FUNCTION NetConfigGetAll (
    LPCWSTR server,
    LPCWSTR component,
#ifdef REVISED_CONFIG_APIS
    LPBYTE *bufptr
#else /* !REVISED_CONFIG_APIS */
    LPBYTE *bufptr,
    LPDWORD totalavailable
#endif /* !REVISED_CONFIG_APIS */
);

NET_API_STATUS NET_API_FUNCTION NetConfigSet (
    LPCWSTR server,
    LPCWSTR reserved1,
    LPCWSTR component,
    DWORD level,
    DWORD reserved2,
    LPBYTE buf,
    DWORD reserved3
);

typedef struct _CONFIG_INFO_0 {
    LPWSTR cfgi0_key;
    LPWSTR cfgi0_data;
} CONFIG_INFO_0, *PCONFIG_INFO_0, *LPCONFIG_INFO_0;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#endif /* _LMCONFIG_H */
