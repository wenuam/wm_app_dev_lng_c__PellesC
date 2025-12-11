#ifndef _WSIPX_H
#define _WSIPX_H

#if __POCC__ >= 500
#pragma once
#endif

/* Windows Sockets definitions for IPX/SPX */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

typedef struct sockaddr_ipx {
    short sa_family;
    char sa_netnum[4];
    char sa_nodenum[6];
    unsigned short sa_socket;
} SOCKADDR_IPX, *PSOCKADDR_IPX, *LPSOCKADDR_IPX;

#define NSPROTO_IPX  1000
#define NSPROTO_SPX  1256
#define NSPROTO_SPXII  1257

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#endif /* _WSIPX_H */

