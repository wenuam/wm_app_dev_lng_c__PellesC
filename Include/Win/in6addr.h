#ifndef _IN6ADDR_H
#define _IN6ADDR_H

#if __POCC__ >= 500
#pragma once
#endif

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

#ifndef s6_addr

typedef struct in6_addr {
    union {
        UCHAR Byte[16];
        USHORT Word[8];
    } u;
} IN6_ADDR, *PIN6_ADDR, *LPIN6_ADDR;
#define in_addr6 in6_addr

#define _S6_un  u
#define _S6_u8  Byte
#define s6_addr  _S6_un._S6_u8

#define s6_bytes  u.Byte
#define s6_words  u.Word

#endif /* s6_addr */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#endif /* _IN6ADDR_H */
