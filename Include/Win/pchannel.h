#ifndef _PCHANNEL_H
#define _PCHANNEL_H

#if __POCC__ >= 500
#pragma once
#endif

/* Windows Terminal Server Virtual Channel protocol header */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#if (NTDDI_VERSION >= NTDDI_XP)

#ifndef PAL_PACKED_STRUCT

#ifdef ENABLE_UCORE
#error PAL_PACKED_STRUCT is not defined
#endif /* ENABLE_UCORE */

#define __PCHANNEL_H_PAL_PACKED_STRUCT_DEFINED
#define PAL_PACKED_STRUCT(type)  type

#endif /* PAL_PACKED_STRUCT */

#define CHANNEL_CHUNK_LENGTH  1600
#define CHANNEL_BUFFER_SIZE   65535

#define CHANNEL_PDU_LENGTH (CHANNEL_CHUNK_LENGTH + sizeof(CHANNEL_PDU_HEADER))

#define CHANNEL_FLAG_FIRST      0x01
#define CHANNEL_FLAG_LAST       0x02
#define CHANNEL_FLAG_ONLY       (CHANNEL_FLAG_FIRST | CHANNEL_FLAG_LAST)
#define CHANNEL_FLAG_MIDDLE     0

#define CHANNEL_FLAG_FAIL       0x100

#define CHANNEL_OPTION_INITIALIZED                                  0x80000000
#define CHANNEL_OPTION_ENCRYPT_RDP                                  0x40000000
#define CHANNEL_OPTION_ENCRYPT_SC                                   0x20000000
#define CHANNEL_OPTION_ENCRYPT_CS                                   0x10000000
#define CHANNEL_OPTION_PRI_HIGH                                     0x08000000
#define CHANNEL_OPTION_PRI_MED                                      0x04000000
#define CHANNEL_OPTION_PRI_LOW                                      0x02000000
#define CHANNEL_OPTION_COMPRESS_RDP                                 0x00800000
#define CHANNEL_OPTION_COMPRESS                                     0x00400000
#define CHANNEL_OPTION_SHOW_PROTOCOL                                0x00200000
#define CHANNEL_OPTION_REMOTE_CONTROL_PERSISTENT                    0x00100000

#define CHANNEL_MAX_COUNT       30
#define CHANNEL_NAME_LEN        7

#ifdef PAL_PRAGMA_PACK_PUSH
#pragma PAL_PRAGMA_PACK_PUSH(pchannel_channel_def, 1)
#else /* !PAL_PRAGMA_PACK_PUSH */
#pragma pack(push, pchannel_channel_def, 1)
#endif /* !PAL_PRAGMA_PACK_PUSH */

typedef struct tagCHANNEL_DEF {
    char name[CHANNEL_NAME_LEN + 1];
    ULONG options;
} PAL_PACKED_STRUCT(CHANNEL_DEF);
typedef CHANNEL_DEF UNALIGNED *PCHANNEL_DEF;
typedef PCHANNEL_DEF UNALIGNED *PPCHANNEL_DEF;

#ifdef PAL_PRAGMA_PACK_POP
#pragma PAL_PRAGMA_PACK_POP(pchannel_channel_def)
#else /* !PAL_PRAGMA_PACK_POP */
#pragma pack(pop, pchannel_channel_def)
#endif /* !PAL_PRAGMA_PACK_POP */

typedef struct tagCHANNEL_PDU_HEADER {
    UINT32 length;
    UINT32 flags;
} CHANNEL_PDU_HEADER, *PCHANNEL_PDU_HEADER;

#ifdef __PCHANNEL_H_PAL_PACKED_STRUCT_DEFINED
#undef __PCHANNEL_H_PAL_PACKED_STRUCT_DEFINED
#undef PAL_PACKED_STRUCT
#endif /* __PCHANNEL_H_PAL_PACKED_STRUCT_DEFINED */

#endif /* (NTDDI_VERSION >= NTDDI_XP) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#endif /* _PCHANNEL_H */
