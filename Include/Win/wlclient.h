#ifndef _WLCLIENT_H
#define _WLCLIENT_H

#if __POCC__ >= 500
#pragma once
#endif

/* Windows wireless API definitions */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#ifndef _WINDOT11_H
#include <windot11.h>
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)

typedef struct _DOT11_ADAPTER {
    GUID gAdapterId;
#ifdef __midl
    [string] LPWSTR pszDescription;
#else /* !__midl */
    LPWSTR pszDescription;
#endif /* !__midl */
    DOT11_CURRENT_OPERATION_MODE Dot11CurrentOpMode;
} DOT11_ADAPTER, * PDOT11_ADAPTER;

typedef struct _DOT11_BSS_LIST {
    ULONG uNumOfBytes;
#ifdef __midl
    [size_is(uNumOfBytes)] PUCHAR pucBuffer;
#else /* !__midl */
    PUCHAR pucBuffer;
#endif /* !__midl */
} DOT11_BSS_LIST, * PDOT11_BSS_LIST;

typedef struct _DOT11_PORT_STATE {
    DOT11_MAC_ADDRESS PeerMacAddress;
    ULONG uSessionId;
    BOOL bPortControlled;
    BOOL bPortAuthorized;
} DOT11_PORT_STATE, * PDOT11_PORT_STATE;

/* #include <packon.h> */
typedef struct _DOT11_SECURITY_PACKET_HEADER {
    DOT11_MAC_ADDRESS PeerMac;
    USHORT usEtherType;
    UCHAR Data[1];
} DOT11_SECURITY_PACKET_HEADER, * PDOT11_SECURITY_PACKET_HEADER;
/* #include <packoff.h> */

#endif /* (NTDDI_VERSION > NTDDI_VISTA) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#endif /* _WLCLIENT_H */
