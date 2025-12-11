#ifndef _MSWSOCKDEF_H
#define _MSWSOCKDEF_H

#if __POCC__ >= 500
#pragma once
#endif

/* Microsoft-specific extensions to Windows Sockets API */

#include <winapifamily.h>

#if (_WIN32_WINNT >= 0x0600)
#define MSWSOCKDEF_INLINE extern inline /* GNU style */
#endif /* _WIN32_WINNT>=0x0600 */

#ifndef ASSERT
#define MSWSOCKDEF_ASSERT_UNDEFINED
#define ASSERT(exp)  ((void)0)
#endif

#if (_WIN32_WINNT >= 0x0600)

#ifdef _WS2DEF_H

extern CONST UCHAR sockaddr_size[AF_MAX];

MSWSOCKDEF_INLINE UCHAR SOCKADDR_SIZE(ADDRESS_FAMILY af) {
    return (UCHAR)((af < AF_MAX) ? sockaddr_size[af] : sockaddr_size[AF_UNSPEC]);
}

MSWSOCKDEF_INLINE SCOPE_LEVEL ScopeLevel(SCOPE_ID ScopeId) {
    return (SCOPE_LEVEL)ScopeId.Level;
}

#endif /* _WS2DEF_H */

#define SIO_SET_COMPATIBILITY_MODE  _WSAIOW(IOC_VENDOR,300)

typedef enum _WSA_COMPATIBILITY_BEHAVIOR_ID {
    WsaBehaviorAll = 0,
    WsaBehaviorReceiveBuffering,
    WsaBehaviorAutoTuning
} WSA_COMPATIBILITY_BEHAVIOR_ID, *PWSA_COMPATIBILITY_BEHAVIOR_ID;

typedef struct _WSA_COMPATIBILITY_MODE {
    WSA_COMPATIBILITY_BEHAVIOR_ID BehaviorId;
    ULONG TargetOsVersion;
} WSA_COMPATIBILITY_MODE, *PWSA_COMPATIBILITY_MODE;

#endif /* (_WIN32_WINNT>=0x0600) */

typedef struct RIO_BUFFERID_t *RIO_BUFFERID, **PRIO_BUFFERID;
typedef struct RIO_CQ_t *RIO_CQ, **PRIO_CQ;
typedef struct RIO_RQ_t *RIO_RQ, **PRIO_RQ;

typedef struct _RIORESULT {
    LONG Status;
    ULONG BytesTransferred;
    ULONGLONG SocketContext;
    ULONGLONG RequestContext;
} RIORESULT, *PRIORESULT;

typedef struct _RIO_BUF {
    RIO_BUFFERID BufferId;
    ULONG Offset;
    ULONG Length;
} RIO_BUF, *PRIO_BUF;

#define RIO_MSG_DONT_NOTIFY     0x00000001
#define RIO_MSG_DEFER           0x00000002
#define RIO_MSG_WAITALL         0x00000004
#define RIO_MSG_COMMIT_ONLY     0x00000008

#define RIO_INVALID_BUFFERID    ((RIO_BUFFERID)(ULONG_PTR)0xFFFFFFFF)
#define RIO_INVALID_CQ          ((RIO_CQ)0)
#define RIO_INVALID_RQ          ((RIO_RQ)0)

#define RIO_MAX_CQ_SIZE         0x8000000
#define RIO_CORRUPT_CQ          0xFFFFFFFF

typedef struct _RIO_CMSG_BUFFER {
    ULONG TotalLength;
} RIO_CMSG_BUFFER, *PRIO_CMSG_BUFFER;

#define RIO_CMSG_BASE_SIZE WSA_CMSGHDR_ALIGN(sizeof(RIO_CMSG_BUFFER))

#define RIO_CMSG_FIRSTHDR(buffer) \
    (((buffer)->TotalLength >= RIO_CMSG_BASE_SIZE) \
        ? ((((buffer)->TotalLength - RIO_CMSG_BASE_SIZE) >= \
                sizeof(WSACMSGHDR)) \
            ? (PWSACMSGHDR)((PUCHAR)(buffer) + \
                RIO_CMSG_BASE_SIZE) \
            : (PWSACMSGHDR)NULL) \
        : (PWSACMSGHDR)NULL)

#define RIO_CMSG_NEXTHDR(buffer, cmsg) \
    ((cmsg) == NULL \
        ? RIO_CMSG_FIRSTHDR(buffer) \
        : (((PUCHAR)(cmsg) + \
                    WSA_CMSGHDR_ALIGN((cmsg)->cmsg_len) + \
                    sizeof(WSACMSGHDR)  > \
                (PUCHAR)(buffer) + \
                    (buffer)->TotalLength) \
            ? (PWSACMSGHDR)NULL \
            : (PWSACMSGHDR)((PUCHAR)(cmsg) + \
                WSA_CMSGHDR_ALIGN((cmsg)->cmsg_len))))

#ifdef MSWSOCKDEF_ASSERT_UNDEFINED
#undef ASSERT
#endif

#endif /* _MSWSOCKDEF_H */
