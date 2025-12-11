#ifndef _SENSAPI_H
#define _SENSAPI_H

#if __POCC__ >= 500
#pragma once
#endif

/* SENS Connectivity API definitions */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#define NETWORK_ALIVE_LAN  0x00000001
#define NETWORK_ALIVE_WAN  0x00000002
#define NETWORK_ALIVE_AOL  0x00000004
#define NETWORK_ALIVE_INTERNET  0x00000008

typedef struct tagQOCINFO {
    DWORD dwSize;
    DWORD dwFlags;
    DWORD dwInSpeed;
    DWORD dwOutSpeed;
} QOCINFO, *LPQOCINFO;

#ifdef UNICODE
#define  IsDestinationReachable  IsDestinationReachableW
#else /* !UNICODE */
#define  IsDestinationReachable  IsDestinationReachableA
#endif /* !UNICODE */

#ifndef __midl

BOOL APIENTRY IsDestinationReachableA(
    LPCSTR lpszDestination,
    LPQOCINFO lpQOCInfo);

BOOL APIENTRY IsDestinationReachableW(
    LPCWSTR lpszDestination,
    LPQOCINFO lpQOCInfo);

BOOL APIENTRY IsNetworkAlive(
    LPDWORD lpdwFlags);

#endif /* !__midl */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#endif /* _SENSAPI_H */
