#ifndef _WS2TCPIP_H
#define _WS2TCPIP_H

#if __POCC__ >= 500
#pragma once
#endif

/* WinSock2 Extension for TCP/IP protocols */

#if __POCC__ >= 290
#pragma warn(push)
#pragma warn(disable:2215)  /* possible loss of data */
#endif

#include <winapifamily.h>

#include <winsock2.h>
#include <ws2ipdef.h>
#include <limits.h>

#define UDP_NOCHECKSUM  1
#define UDP_CHECKSUM_COVERAGE  20

#define WS2TCPIP_INLINE inline

#define EAI_AGAIN           WSATRY_AGAIN
#define EAI_BADFLAGS        WSAEINVAL
#define EAI_FAIL            WSANO_RECOVERY
#define EAI_FAMILY          WSAEAFNOSUPPORT
#define EAI_MEMORY          WSA_NOT_ENOUGH_MEMORY
#define EAI_NOSECURENAME    WSA_SECURE_HOST_NOT_FOUND
#define EAI_NONAME          WSAHOST_NOT_FOUND
#define EAI_SERVICE         WSATYPE_NOT_FOUND
#define EAI_SOCKTYPE        WSAESOCKTNOSUPPORT
#define EAI_IPSECPOLICY     WSA_IPSEC_NAME_POLICY_ERROR

#define EAI_NODATA  EAI_NONAME

#ifdef UNICODE
typedef ADDRINFOW ADDRINFOT, *PADDRINFOT;
#else /* !UNICODE */
typedef ADDRINFOA ADDRINFOT, *PADDRINFOT;
#endif /* !UNICODE */

typedef ADDRINFOA ADDRINFO, * LPADDRINFO;

#if (_WIN32_WINNT >= 0x0600)

#ifdef UNICODE
typedef ADDRINFOEXW ADDRINFOEX, *PADDRINFOEX;
#else /* !UNICODE */
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef ADDRINFOEXA ADDRINFOEX, *PADDRINFOEX;
#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#endif /* !UNICODE */

#endif /* (_WIN32_WINNT >= 0x0600) */

WINSOCK_API_LINKAGE INT WSAAPI getaddrinfo(
    PCSTR pNodeName,
    PCSTR pServiceName,
    const ADDRINFOA * pHints,
    PADDRINFOA * ppResult
);

#if (NTDDI_VERSION >= NTDDI_WINXPSP2) || (_WIN32_WINNT >= 0x0502)
WINSOCK_API_LINKAGE INT WSAAPI GetAddrInfoW(
    PCWSTR pNodeName,
    PCWSTR pServiceName,
    const ADDRINFOW * pHints,
    PADDRINFOW * ppResult
);

#define GetAddrInfoA  getaddrinfo

#ifdef UNICODE
#define GetAddrInfo  GetAddrInfoW
#else /* !UNICODE */
#define GetAddrInfo  GetAddrInfoA
#endif /* !UNICODE */
#endif /* (NTDDI_VERSION >= NTDDI_WINXPSP2) || (_WIN32_WINNT >= 0x0502) */

#if INCL_WINSOCK_API_TYPEDEFS
typedef INT (WSAAPI * LPFN_GETADDRINFO)(
    PCSTR pNodeName,
    PCSTR pServiceName,
    const ADDRINFOA * pHints,
    PADDRINFOA * ppResult
);

typedef INT (WSAAPI * LPFN_GETADDRINFOW)(
    PCWSTR pNodeName,
    PCWSTR pServiceName,
    const ADDRINFOW * pHints,
    PADDRINFOW * ppResult
);

#define LPFN_GETADDRINFOA  LPFN_GETADDRINFO

#ifdef UNICODE
#define LPFN_GETADDRINFOT  LPFN_GETADDRINFOW
#else /* !UNICODE */
#define LPFN_GETADDRINFOT  LPFN_GETADDRINFOA
#endif /* !UNICODE */

#endif /* INCL_WINSOCK_API_TYPEDEFS */

#if (_WIN32_WINNT >= 0x0600)

typedef void (CALLBACK * LPLOOKUPSERVICE_COMPLETION_ROUTINE)(
    DWORD dwError,
    DWORD dwBytes,
    LPWSAOVERLAPPED lpOverlapped
);

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINSOCK_API_LINKAGE INT WSAAPI GetAddrInfoExA(
    PCSTR pName,
    PCSTR pServiceName,
    DWORD dwNameSpace,
    LPGUID lpNspId,
    const ADDRINFOEXA *hints,
    PADDRINFOEXA * ppResult,
    struct timeval *timeout,
    LPOVERLAPPED lpOverlapped,
    LPLOOKUPSERVICE_COMPLETION_ROUTINE lpCompletionRoutine,
    LPHANDLE lpNameHandle
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

WINSOCK_API_LINKAGE INT WSAAPI GetAddrInfoExW(
    PCWSTR pName,
    PCWSTR pServiceName,
    DWORD dwNameSpace,
    LPGUID lpNspId,
    const ADDRINFOEXW *hints,
    PADDRINFOEXW * ppResult,
    struct timeval *timeout,
    LPOVERLAPPED lpOverlapped,
    LPLOOKUPSERVICE_COMPLETION_ROUTINE lpCompletionRoutine,
    LPHANDLE lpHandle
);

WINSOCK_API_LINKAGE INT WSAAPI GetAddrInfoExCancel(
    LPHANDLE lpHandle
);

WINSOCK_API_LINKAGE INT WSAAPI GetAddrInfoExOverlappedResult(
    LPOVERLAPPED lpOverlapped
);

#ifdef UNICODE
#define GetAddrInfoEx       GetAddrInfoExW
#else /* !UNICODE */
#define GetAddrInfoEx       GetAddrInfoExA
#endif /* !UNICODE */

#if INCL_WINSOCK_API_TYPEDEFS

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
typedef INT (WSAAPI *LPFN_GETADDRINFOEXA)(
    PCSTR pName,
    PCSTR pServiceName,
    DWORD dwNameSpace,
    LPGUID lpNspId,
    const ADDRINFOEXA *hints,
    PADDRINFOEXA *ppResult,
    struct timeval *timeout,
    LPOVERLAPPED lpOverlapped,
    LPLOOKUPSERVICE_COMPLETION_ROUTINE lpCompletionRoutine,
    LPHANDLE lpNameHandle
);
#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

typedef INT (WSAAPI *LPFN_GETADDRINFOEXW)(
    PCWSTR pName,
    PCWSTR pServiceName,
    DWORD dwNameSpace,
    LPGUID lpNspId,
    const ADDRINFOEXW *hints,
    PADDRINFOEXW *ppResult,
    struct timeval *timeout,
    LPOVERLAPPED lpOverlapped,
    LPLOOKUPSERVICE_COMPLETION_ROUTINE lpCompletionRoutine,
    LPHANDLE lpHandle
);

typedef INT (WSAAPI *LPFN_GETADDRINFOEXCANCEL)(
    LPHANDLE lpHandle
);

typedef INT (WSAAPI *LPFN_GETADDRINFOEXOVERLAPPEDRESULT)(
    LPOVERLAPPED lpOverlapped
);

#ifdef UNICODE
#define LPFN_GETADDRINFOEX      LPFN_GETADDRINFOEXW
#else /* !UNICODE */
#define LPFN_GETADDRINFOEX      LPFN_GETADDRINFOEXA
#endif /* !UNICODE */

#endif /* INCL_WINSOCK_API_TYPEDEFS */

#endif /* (_WIN32_WINNT >= 0x0600) */

#if (_WIN32_WINNT >= 0x0600)

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINSOCK_API_LINKAGE INT WSAAPI SetAddrInfoExA(
    PCSTR pName,
    PCSTR pServiceName,
    SOCKET_ADDRESS *pAddresses,
    DWORD dwAddressCount,
    LPBLOB lpBlob,
    DWORD dwFlags,
    DWORD dwNameSpace,
    LPGUID lpNspId,
    struct timeval *timeout,
    LPOVERLAPPED lpOverlapped,
    LPLOOKUPSERVICE_COMPLETION_ROUTINE lpCompletionRoutine,
    LPHANDLE lpNameHandle
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

WINSOCK_API_LINKAGE INT WSAAPI SetAddrInfoExW(
    PCWSTR pName,
    PCWSTR pServiceName,
    SOCKET_ADDRESS *pAddresses,
    DWORD dwAddressCount,
    LPBLOB lpBlob,
    DWORD dwFlags,
    DWORD dwNameSpace,
    LPGUID lpNspId,
    struct timeval *timeout,
    LPOVERLAPPED lpOverlapped,
    LPLOOKUPSERVICE_COMPLETION_ROUTINE lpCompletionRoutine,
    LPHANDLE lpNameHandle
);

#ifdef UNICODE
#define SetAddrInfoEx       SetAddrInfoExW
#else /* !UNICODE */
#define SetAddrInfoEx       SetAddrInfoExA
#endif /* !UNICODE */

#if INCL_WINSOCK_API_TYPEDEFS

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef INT (WSAAPI *LPFN_SETADDRINFOEXA)(
    PCSTR pName,
    PCSTR pServiceName,
    SOCKET_ADDRESS *pAddresses,
    DWORD dwAddressCount,
    LPBLOB lpBlob,
    DWORD dwFlags,
    DWORD dwNameSpace,
    LPGUID lpNspId,
    struct timeval *timeout,
    LPOVERLAPPED lpOverlapped,
    LPLOOKUPSERVICE_COMPLETION_ROUTINE lpCompletionRoutine,
    LPHANDLE lpNameHandle
);
#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

typedef INT (WSAAPI *LPFN_SETADDRINFOEXW)(
    PCWSTR pName,
    PCWSTR pServiceName,
    SOCKET_ADDRESS *pAddresses,
    DWORD dwAddressCount,
    LPBLOB lpBlob,
    DWORD dwFlags,
    DWORD dwNameSpace,
    LPGUID lpNspId,
    struct timeval *timeout,
    LPOVERLAPPED lpOverlapped,
    LPLOOKUPSERVICE_COMPLETION_ROUTINE lpCompletionRoutine,
    LPHANDLE lpNameHandle
);

#ifdef UNICODE
#define LPFN_SETADDRINFOEX      LPFN_SETADDRINFOEXW
#else /* !UNICODE */
#define LPFN_SETADDRINFOEX      LPFN_SETADDRINFOEXA
#endif /* !UNICODE */

#endif /* INCL_WINSOCK_API_TYPEDEFS */

#endif /* (_WIN32_WINNT >= 0x0600) */

WINSOCK_API_LINKAGE void WSAAPI freeaddrinfo(
    PADDRINFOA pAddrInfo
);

#if (NTDDI_VERSION >= NTDDI_WINXPSP2) || (_WIN32_WINNT >= 0x0502)

WINSOCK_API_LINKAGE void WSAAPI FreeAddrInfoW(
    PADDRINFOW pAddrInfo
);

#define FreeAddrInfoA  freeaddrinfo

#ifdef UNICODE
#define FreeAddrInfo  FreeAddrInfoW
#else /* !UNICODE */
#define FreeAddrInfo  FreeAddrInfoA
#endif /* !UNICODE */

#endif /* (NTDDI_VERSION >= NTDDI_WINXPSP2) || (_WIN32_WINNT >= 0x0502) */

#if INCL_WINSOCK_API_TYPEDEFS

typedef void (WSAAPI * LPFN_FREEADDRINFO)(
    PADDRINFOA pAddrInfo
);
typedef void (WSAAPI * LPFN_FREEADDRINFOW)(
    PADDRINFOW pAddrInfo
);

#define LPFN_FREEADDRINFOA  LPFN_FREEADDRINFO

#ifdef UNICODE
#define LPFN_FREEADDRINFOT  LPFN_FREEADDRINFOW
#else /* !UNICODE */
#define LPFN_FREEADDRINFOT  LPFN_FREEADDRINFOA
#endif /* !UNICODE */

#endif /* INCL_WINSOCK_API_TYPEDEFS */

#if (_WIN32_WINNT >= 0x0600)

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINSOCK_API_LINKAGE void WSAAPI FreeAddrInfoEx(
    PADDRINFOEXA pAddrInfoEx
);
#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

WINSOCK_API_LINKAGE void WSAAPI FreeAddrInfoExW(
    PADDRINFOEXW pAddrInfoEx
);

#define FreeAddrInfoExA  FreeAddrInfoEx

#ifdef UNICODE
#define FreeAddrInfoEx  FreeAddrInfoExW
#endif /* UNICODE */

#if INCL_WINSOCK_API_TYPEDEFS

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
typedef void (WSAAPI *LPFN_FREEADDRINFOEXA)(
    PADDRINFOEXA pAddrInfoEx
);
#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

typedef void (WSAAPI *LPFN_FREEADDRINFOEXW)(
    PADDRINFOEXW pAddrInfoEx
);

#ifdef UNICODE
#define LPFN_FREEADDRINFOEX     LPFN_FREEADDRINFOEXW
#else /* !UNICODE */
#define LPFN_FREEADDRINFOEX     LPFN_FREEADDRINFOEXA
#endif /* !UNICODE */

#endif /* INCL_WINSOCK_API_TYPEDEFS */

#endif /* (_WIN32_WINNT >= 0x0600) */

typedef int socklen_t;

WINSOCK_API_LINKAGE INT WSAAPI getnameinfo(
    const SOCKADDR * pSockaddr,
    socklen_t SockaddrLength,
    PCHAR pNodeBuffer,
    DWORD NodeBufferSize,
    PCHAR pServiceBuffer,
    DWORD ServiceBufferSize,
    INT Flags
);

#if (NTDDI_VERSION >= NTDDI_WINXPSP2) || (_WIN32_WINNT >= 0x0502)

WINSOCK_API_LINKAGE INT WSAAPI GetNameInfoW(
    const SOCKADDR * pSockaddr,
    socklen_t SockaddrLength,
    PWCHAR pNodeBuffer,
    DWORD NodeBufferSize,
    PWCHAR pServiceBuffer,
    DWORD ServiceBufferSize,
    INT Flags
);

#define GetNameInfoA  getnameinfo

#ifdef UNICODE
#define GetNameInfo  GetNameInfoW
#else /* !UNICODE */
#define GetNameInfo  GetNameInfoA
#endif /* !UNICODE */

#endif /* (NTDDI_VERSION >= NTDDI_WINXPSP2) || (_WIN32_WINNT >= 0x0502) */

#if INCL_WINSOCK_API_TYPEDEFS

typedef int (WSAAPI * LPFN_GETNAMEINFO)(
    const SOCKADDR * pSockaddr,
    socklen_t SockaddrLength,
    PCHAR pNodeBuffer,
    DWORD NodeBufferSize,
    PCHAR pServiceBuffer,
    DWORD ServiceBufferSize,
    INT Flags
);

typedef INT (WSAAPI * LPFN_GETNAMEINFOW)(
    const SOCKADDR * pSockaddr,
    socklen_t SockaddrLength,
    PWCHAR pNodeBuffer,
    DWORD NodeBufferSize,
    PWCHAR pServiceBuffer,
    DWORD ServiceBufferSize,
    INT Flags
);

#define LPFN_GETNAMEINFOA  LPFN_GETNAMEINFO

#ifdef UNICODE
#define LPFN_GETNAMEINFOT  LPFN_GETNAMEINFOW
#else /* !UNICODE */
#define LPFN_GETNAMEINFOT  LPFN_GETNAMEINFOA
#endif /* !UNICODE */

#endif /* INCL_WINSOCK_API_TYPEDEFS */

#if (NTDDI_VERSION >= NTDDI_VISTA)

WINSOCK_API_LINKAGE INT WSAAPI inet_pton(
    INT Family,
    PCSTR pszAddrString,
    PVOID pAddrBuf
);

INT WSAAPI InetPtonW(
    INT Family,
    PCWSTR pszAddrString,
    PVOID pAddrBuf
);

PCSTR WSAAPI inet_ntop(
    INT Family,
    const VOID * pAddr,
    PSTR pStringBuf,
    size_t StringBufSize
);

PCWSTR WSAAPI InetNtopW(
    INT Family,
    const VOID * pAddr,
    PWSTR pStringBuf,
    size_t StringBufSize
);

#define InetPtonA  inet_pton
#define InetNtopA  inet_ntop

#ifdef UNICODE
#define InetPton  InetPtonW
#define InetNtop  InetNtopW
#else /* !UNICODE */
#define InetPton  InetPtonA
#define InetNtop  InetNtopA
#endif /* !UNICODE */

#if INCL_WINSOCK_API_TYPEDEFS

typedef INT (WSAAPI * LPFN_INET_PTONA)(
    INT Family,
    PCSTR pszAddrString,
    PVOID pAddrBuf
);

typedef INT (WSAAPI * LPFN_INET_PTONW)(
    INT Family,
    PCWSTR pszAddrString,
    PVOID pAddrBuf
);

typedef PCSTR (WSAAPI * LPFN_INET_NTOPA)(
    INT Family,
    PVOID pAddr,
    PSTR pStringBuf,
    size_t StringBufSize
);

typedef PCWSTR (WSAAPI * LPFN_INET_NTOPW)(
    INT Family,
    PVOID pAddr,
    PWSTR pStringBuf,
    size_t StringBufSize
);

#ifdef UNICODE
#define LPFN_INET_PTON  LPFN_INET_PTONW
#define LPFN_INET_NTOP  LPFN_INET_NTOPW
#else /* !UNICODE */
#define LPFN_INET_PTON  LPFN_INET_PTONA
#define LPFN_INET_NTOP  LPFN_INET_NTOPA
#endif /* !UNICODE */

#endif /* INCL_WINSOCK_API_TYPEDEFS */

#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */

#if INCL_WINSOCK_API_PROTOTYPES
#ifdef UNICODE
#define gai_strerror   gai_strerrorW
#else /* !UNICODE */
#define gai_strerror   gai_strerrorA
#endif /* !UNICODE */

#define GAI_STRERROR_BUFFER_SIZE 1024

WS2TCPIP_INLINE char * gai_strerrorA(int ecode) {
    static char buff[GAI_STRERROR_BUFFER_SIZE + 1];
    (void)FormatMessageA(FORMAT_MESSAGE_FROM_SYSTEM
        | FORMAT_MESSAGE_IGNORE_INSERTS
        | FORMAT_MESSAGE_MAX_WIDTH_MASK,
        NULL,
        ecode,
        MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
        (LPSTR)buff,
        GAI_STRERROR_BUFFER_SIZE,
        NULL);
    return buff;
}

WS2TCPIP_INLINE WCHAR * gai_strerrorW(int ecode) {
    static WCHAR buff[GAI_STRERROR_BUFFER_SIZE + 1];
    (void)FormatMessageW(FORMAT_MESSAGE_FROM_SYSTEM
        | FORMAT_MESSAGE_IGNORE_INSERTS
        | FORMAT_MESSAGE_MAX_WIDTH_MASK,
        NULL,
        ecode,
        MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
        (LPWSTR)buff,
        GAI_STRERROR_BUFFER_SIZE,
        NULL);
    return buff;
}

#endif /* INCL_WINSOCK_API_PROTOTYPES */

WS2TCPIP_INLINE int setipv4sourcefilter(
    SOCKET Socket,
    IN_ADDR Interface,
    IN_ADDR Group,
    MULTICAST_MODE_TYPE FilterMode,
    ULONG SourceCount,
    CONST IN_ADDR *SourceList
) {
    int Error;
    DWORD Size, Returned;
    PIP_MSFILTER Filter;

    if (SourceCount > (((ULONG) (ULONG_MAX - sizeof(*Filter))) / sizeof(*SourceList)))
    {
        WSASetLastError(WSAENOBUFS);
        return SOCKET_ERROR;
    }

    Size = IP_MSFILTER_SIZE(SourceCount);
    Filter = HeapAlloc(GetProcessHeap(), 0, Size);
    if (Filter == NULL)
    {
        WSASetLastError(WSAENOBUFS);
        return SOCKET_ERROR;
    }

    Filter->imsf_multiaddr = Group;
    Filter->imsf_interface = Interface;
    Filter->imsf_fmode = FilterMode;
    Filter->imsf_numsrc = SourceCount;
    if (SourceCount > 0)
    {
        CopyMemory(Filter->imsf_slist, SourceList,
        SourceCount * sizeof(*SourceList));
    }

    Error = WSAIoctl(Socket, SIOCSIPMSFILTER, Filter, Size, NULL, 0,
    &Returned, NULL, NULL);

    HeapFree(GetProcessHeap(), 0, Filter);

    return Error;
}

WS2TCPIP_INLINE int getipv4sourcefilter(
    SOCKET Socket,
    IN_ADDR Interface,
    IN_ADDR Group,
    MULTICAST_MODE_TYPE *FilterMode,
    ULONG *SourceCount,
    IN_ADDR *SourceList
) {
    int Error;
    DWORD Size, Returned;
    PIP_MSFILTER Filter;

    if (*SourceCount >
    (((ULONG) (ULONG_MAX - sizeof(*Filter))) / sizeof(*SourceList)))
    {
        WSASetLastError(WSAENOBUFS);
        return SOCKET_ERROR;
    }

    Size = IP_MSFILTER_SIZE(*SourceCount);
    Filter = HeapAlloc(GetProcessHeap(), 0, Size);
    if (Filter == NULL)
    {
        WSASetLastError(WSAENOBUFS);
        return SOCKET_ERROR;
    }

    Filter->imsf_multiaddr = Group;
    Filter->imsf_interface = Interface;
    Filter->imsf_numsrc = *SourceCount;

    Error = WSAIoctl(Socket, SIOCGIPMSFILTER, Filter, Size, Filter, Size,
    &Returned, NULL, NULL);

    if (Error == 0)
    {
        if (*SourceCount > 0)
        {
            CopyMemory(SourceList, Filter->imsf_slist,
            *SourceCount * sizeof(*SourceList));
            *SourceCount = Filter->imsf_numsrc;
        }
        *FilterMode = Filter->imsf_fmode;
    }

    HeapFree(GetProcessHeap(), 0, Filter);

    return Error;
}

#if (NTDDI_VERSION >= NTDDI_WINXP)

WS2TCPIP_INLINE int setsourcefilter(
    SOCKET Socket,
    ULONG Interface,
    CONST SOCKADDR *Group,
    int GroupLength,
    MULTICAST_MODE_TYPE FilterMode,
    ULONG SourceCount,
    CONST SOCKADDR_STORAGE *SourceList
) {
    int Error;
    DWORD Size, Returned;
    PGROUP_FILTER Filter;

    if (SourceCount >=
    (((ULONG) (ULONG_MAX - sizeof(*Filter))) / sizeof(*SourceList)))
    {
        WSASetLastError(WSAENOBUFS);
        return SOCKET_ERROR;
    }

    Size = GROUP_FILTER_SIZE(SourceCount);
    Filter = HeapAlloc(GetProcessHeap(), 0, Size);
    if (Filter == NULL)
    {
        WSASetLastError(WSAENOBUFS);
        return SOCKET_ERROR;
    }

    Filter->gf_interface = Interface;
    ZeroMemory(&Filter->gf_group, sizeof(Filter->gf_group));
    CopyMemory(&Filter->gf_group, Group, GroupLength);
    Filter->gf_fmode = FilterMode;
    Filter->gf_numsrc = SourceCount;
    if (SourceCount > 0)
    {
        CopyMemory(Filter->gf_slist, SourceList,
        SourceCount * sizeof(*SourceList));
    }

    Error = WSAIoctl(Socket, SIOCSMSFILTER, Filter, Size, NULL, 0,
    &Returned, NULL, NULL);

    HeapFree(GetProcessHeap(), 0, Filter);

    return Error;
}

WS2TCPIP_INLINE int getsourcefilter(
    SOCKET Socket,
    ULONG Interface,
    CONST SOCKADDR *Group,
    int GroupLength,
    MULTICAST_MODE_TYPE *FilterMode,
    ULONG *SourceCount,
    SOCKADDR_STORAGE *SourceList
) {
    int Error;
    DWORD Size, Returned;
    PGROUP_FILTER Filter;

    if (*SourceCount >
    (((ULONG) (ULONG_MAX - sizeof(*Filter))) / sizeof(*SourceList)))
    {
        WSASetLastError(WSAENOBUFS);
        return SOCKET_ERROR;
    }

    Size = GROUP_FILTER_SIZE(*SourceCount);
    Filter = HeapAlloc(GetProcessHeap(), 0, Size);
    if (Filter == NULL)
    {
        WSASetLastError(WSAENOBUFS);
        return SOCKET_ERROR;
    }

    Filter->gf_interface = Interface;
    ZeroMemory(&Filter->gf_group, sizeof(Filter->gf_group));
    CopyMemory(&Filter->gf_group, Group, GroupLength);
    Filter->gf_numsrc = *SourceCount;

    Error = WSAIoctl(Socket, SIOCGMSFILTER, Filter, Size, Filter, Size,
    &Returned, NULL, NULL);

    if (Error == 0)
    {
        if (*SourceCount > 0)
        {
            CopyMemory(SourceList, Filter->gf_slist,
            *SourceCount * sizeof(*SourceList));
            *SourceCount = Filter->gf_numsrc;
        }
        *FilterMode = Filter->gf_fmode;
    }

    HeapFree(GetProcessHeap(), 0, Filter);

    return Error;
}
#endif /* (NTDDI_VERSION >= NTDDI_WINXP) */

#ifdef IDEAL_SEND_BACKLOG_IOCTLS

WS2TCPIP_INLINE int idealsendbacklogquery(SOCKET s, ULONG *pISB) {
    DWORD bytes;
    return WSAIoctl(s, SIO_IDEAL_SEND_BACKLOG_QUERY,
        NULL, 0, pISB, sizeof(*pISB), &bytes, NULL, NULL);
}

WS2TCPIP_INLINE int idealsendbacklognotify(
    SOCKET s,
    LPWSAOVERLAPPED lpOverlapped,
    LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine
) {
    DWORD bytes;
    return WSAIoctl(s, SIO_IDEAL_SEND_BACKLOG_CHANGE,
        NULL, 0, NULL, 0, &bytes,
        lpOverlapped, lpCompletionRoutine);
}

#endif /* IDEAL_SEND_BACKLOG_IOCTLS */

#if (NTDDI_VERSION >= NTDDI_WIN10_VB)

WS2TCPIP_INLINE INT WSAGetIPUserMtu(SOCKET Socket, DWORD *Mtu) {
    WSAPROTOCOL_INFOW Info;
    INT InfoSize = sizeof(Info);
    INT OptSize = sizeof(*Mtu);
    INT Error;
    Error = getsockopt(Socket, SOL_SOCKET, SO_PROTOCOL_INFO, (PCHAR)&Info, &InfoSize);
    if (Error != SOCKET_ERROR) {
        if (Info.iAddressFamily == AF_INET) {
        Error = getsockopt(Socket, IPPROTO_IP, IP_USER_MTU, (PCHAR)Mtu, &OptSize);
#if (_WIN32_WINNT >= 0x0501)
        } else if (Info.iAddressFamily == AF_INET6) {
            Error = getsockopt(Socket, IPPROTO_IPV6, IPV6_USER_MTU, (PCHAR)Mtu, &OptSize);
#endif /* (_WIN32_WINNT >= 0x0501) */
        } else {
            Error = SOCKET_ERROR;
            WSASetLastError(WSAEAFNOSUPPORT);
        }
    }
    return Error;
}

WS2TCPIP_INLINE INT WSASetIPUserMtu(SOCKET Socket, DWORD Mtu) {
    WSAPROTOCOL_INFOW Info;
    INT InfoSize = sizeof(Info);
    INT Error;
    Error = getsockopt(Socket, SOL_SOCKET, SO_PROTOCOL_INFO, (PCHAR)&Info, &InfoSize);
    if (Error != SOCKET_ERROR) {
        if (Info.iAddressFamily == AF_INET) {
            Error = setsockopt(Socket, IPPROTO_IP, IP_USER_MTU, (PCHAR)&Mtu, sizeof(Mtu));
#if (_WIN32_WINNT >= 0x0501)
        } else if (Info.iAddressFamily == AF_INET6) {
            Error = setsockopt(Socket, IPPROTO_IPV6, IPV6_USER_MTU, (PCHAR)&Mtu, sizeof(Mtu));
#endif /* (_WIN32_WINNT >= 0x0501) */
        } else {
            Error = SOCKET_ERROR;
            WSASetLastError(WSAEAFNOSUPPORT);
        }
    }
    return Error;
}

WS2TCPIP_INLINE INT WSAGetFailConnectOnIcmpError(SOCKET Socket, DWORD *Enabled) {
    INT OptSize = sizeof(*Enabled);
    return getsockopt(Socket, IPPROTO_TCP, TCP_FAIL_CONNECT_ON_ICMP_ERROR,
        (CHAR *)Enabled, &OptSize);
}

WS2TCPIP_INLINE INT WSASetFailConnectOnIcmpError(SOCKET Socket, DWORD Enabled) {
    return setsockopt(Socket, IPPROTO_TCP, TCP_FAIL_CONNECT_ON_ICMP_ERROR,
        (CHAR *)&Enabled, sizeof(Enabled));
}

WS2TCPIP_INLINE INT WSAGetIcmpErrorInfo(SOCKET Socket, ICMP_ERROR_INFO *Info) {
    INT Error;
    INT OptSize = sizeof(*Info);
    Error = getsockopt(Socket, IPPROTO_TCP, TCP_ICMP_ERROR_INFO, (CHAR *)Info, &OptSize);
    if (Error != SOCKET_ERROR && OptSize == 0) {
        Error = SOCKET_ERROR;
        WSASetLastError(WSANO_DATA);
    }
    return Error;
}

WS2TCPIP_INLINE INT WSAGetUdpSendMessageSize(SOCKET Socket, DWORD *MsgSize) {
    INT OptSize = sizeof(*MsgSize);
    return getsockopt(Socket, IPPROTO_UDP, UDP_SEND_MSG_SIZE, (PCHAR)MsgSize, &OptSize);
}

WS2TCPIP_INLINE INT WSASetUdpSendMessageSize(SOCKET Socket, DWORD MsgSize) {
    return setsockopt(Socket, IPPROTO_UDP, UDP_SEND_MSG_SIZE, (PCHAR)&MsgSize, sizeof(MsgSize));
}

WS2TCPIP_INLINE INT WSAGetUdpRecvMaxCoalescedSize(SOCKET Socket, DWORD *MaxCoalescedMsgSize) {
    INT OptSize = sizeof(*MaxCoalescedMsgSize);
    return getsockopt(Socket, IPPROTO_UDP, UDP_RECV_MAX_COALESCED_SIZE,
        (PCHAR)MaxCoalescedMsgSize, &OptSize);
}

WS2TCPIP_INLINE INT WSASetUdpRecvMaxCoalescedSize(SOCKET Socket, DWORD MaxCoalescedMsgSize) {
    return setsockopt(Socket, IPPROTO_UDP, UDP_RECV_MAX_COALESCED_SIZE,
        (PCHAR)&MaxCoalescedMsgSize, sizeof(MaxCoalescedMsgSize));
}
#endif /* (NTDDI_VERSION >= NTDDI_WIN10_VB) */

#if (NTDDI_VERSION >= NTDDI_WIN10_FE)

WS2TCPIP_INLINE INT WSAGetRecvIPEcn(SOCKET Socket, DWORD *Enabled) {
    WSAPROTOCOL_INFOW Info;
    INT InfoSize = sizeof(Info);
    INT OptSize = sizeof(*Enabled);
    INT Error;
    Error = getsockopt(Socket, SOL_SOCKET, SO_PROTOCOL_INFO, (PCHAR)&Info, &InfoSize);
    if (Error != SOCKET_ERROR) {
        if (Info.iAddressFamily == AF_INET) {
            Error = getsockopt(Socket, IPPROTO_IP, IP_RECVECN, (PCHAR)Enabled, &OptSize);
#if (_WIN32_WINNT >= 0x0501)
        } else if (Info.iAddressFamily == AF_INET6) {
            Error = getsockopt(Socket, IPPROTO_IPV6, IPV6_RECVECN, (PCHAR)Enabled, &OptSize);
#endif /* (_WIN32_WINNT >= 0x0501) */
        } else {
            Error = SOCKET_ERROR;
            WSASetLastError(WSAEAFNOSUPPORT);
        }
    }
    return Error;
}

WS2TCPIP_INLINE INT WSASetRecvIPEcn(SOCKET Socket, DWORD Enabled) {
    WSAPROTOCOL_INFOW Info;
    INT InfoSize = sizeof(Info);
    INT Error;
    Error = getsockopt(Socket, SOL_SOCKET, SO_PROTOCOL_INFO, (PCHAR)&Info, &InfoSize);
    if (Error != SOCKET_ERROR) {
        if (Info.iAddressFamily == AF_INET) {
            Error = setsockopt(Socket, IPPROTO_IP, IP_RECVECN, (PCHAR)&Enabled, sizeof(Enabled));
#if (_WIN32_WINNT >= 0x0501)
        } else if (Info.iAddressFamily == AF_INET6) {
            Error = setsockopt(Socket, IPPROTO_IPV6, IPV6_RECVECN, (PCHAR)&Enabled, sizeof(Enabled));
#endif /* (_WIN32_WINNT >= 0x0501) */
        } else {
            Error = SOCKET_ERROR;
            WSASetLastError(WSAEAFNOSUPPORT);
        }
    }
    return Error;
}
#endif /* (NTDDI_VERSION >= NTDDI_WIN10_FE) */

#if (_WIN32_WINNT >= 0x0600)

#ifdef _SECURE_SOCKET_TYPES_DEFINED_

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_APPRUNTIME)

WINSOCK_API_LINKAGE INT WSAAPI WSASetSocketSecurity (
    SOCKET Socket,
    const SOCKET_SECURITY_SETTINGS * SecuritySettings,
    ULONG SecuritySettingsLen,
    LPWSAOVERLAPPED Overlapped,
    LPWSAOVERLAPPED_COMPLETION_ROUTINE CompletionRoutine
);

WINSOCK_API_LINKAGE INT WSAAPI WSAQuerySocketSecurity(
    SOCKET Socket,
    const SOCKET_SECURITY_QUERY_TEMPLATE * SecurityQueryTemplate,
    ULONG SecurityQueryTemplateLen,
    SOCKET_SECURITY_QUERY_INFO* SecurityQueryInfo,
    ULONG * SecurityQueryInfoLen,
    LPWSAOVERLAPPED Overlapped,
    LPWSAOVERLAPPED_COMPLETION_ROUTINE CompletionRoutine
);

WINSOCK_API_LINKAGE INT WSAAPI WSASetSocketPeerTargetName(
    SOCKET Socket,
    const SOCKET_PEER_TARGET_NAME * PeerTargetName,
    ULONG PeerTargetNameLen,
    LPWSAOVERLAPPED Overlapped,
    LPWSAOVERLAPPED_COMPLETION_ROUTINE CompletionRoutine
);

WINSOCK_API_LINKAGE INT WSAAPI WSADeleteSocketPeerTargetName(
    SOCKET Socket,
    const struct sockaddr * PeerAddr,
    ULONG PeerAddrLen,
    LPWSAOVERLAPPED Overlapped,
    LPWSAOVERLAPPED_COMPLETION_ROUTINE CompletionRoutine
);

WINSOCK_API_LINKAGE INT WSAAPI WSAImpersonateSocketPeer(
    SOCKET Socket,
    const struct sockaddr * PeerAddr,
    ULONG PeerAddrLen
);

WINSOCK_API_LINKAGE INT WSAAPI WSARevertImpersonation(void);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_APPRUNTIME) */

#endif /* _SECURE_SOCKET_TYPES_DEFINED_ */

#endif /* (_WIN32_WINNT >= 0x0600) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#if !defined(_WIN32_WINNT) || (_WIN32_WINNT <= 0x0500)
#include <wspiapi.h>
#endif /* !defined(_WIN32_WINNT) || (_WIN32_WINNT <= 0x0500) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#if __POCC__ >= 290
#pragma warn(pop)
#endif

#endif  /* _WS2TCPIP_H */
