#ifndef _ENDIAN_H
#define _ENDIAN_H

/* endian.h - private header */

#ifndef RC_INVOKED

#if __POCC__ < 1400
#error <endian.h> need POCC version 14.0 or higher
#endif /* __POCC__ < 1400 */

#pragma once

/* macros */
#define LITTLE_ENDIAN  1
#define BIG_ENDIAN  2
#define BYTE_ORDER  __POCC_BYTE_ORDER__

/* exact-width integer types */
typedef unsigned __int16 uint16_t;
typedef unsigned __int32 uint32_t;
typedef unsigned __int64 uint64_t;

/* top-secret sauce */
extern uint16_t __cdecl __byteswap_u16(uint16_t);
extern uint32_t __cdecl __byteswap_u32(uint32_t);
extern uint64_t __cdecl __byteswap_u64(uint64_t);

#if BYTE_ORDER == LITTLE_ENDIAN

/* big-endian to host order */
#define be16toh(x)  __byteswap_u16(x)
#define be32toh(x)  __byteswap_u32(x)
#define be64toh(x)  __byteswap_u64(x)

/* host to big-endian order */
#define htobe16(x)  __byteswap_u16(x)
#define htobe32(x)  __byteswap_u32(x)
#define htobe64(x)  __byteswap_u64(x)

/* host to little-endian order */
#define htole16(x)  (uint16_t)(x)
#define htole32(x)  (uint32_t)(x)
#define htole64(x)  (uint64_t)(x)

/* little-endian to host order */
#define le16toh(x)  (uint16_t)(x)
#define le32toh(x)  (uint32_t)(x)
#define le64toh(x)  (uint64_t)(x)

#elif BYTE_ORDER == BIG_ENDIAN

/* big-endian to host order */
#define be16toh(x)  (uint16_t)(x)
#define be32toh(x)  (uint32_t)(x)
#define be64toh(x)  (uint64_t)(x)

/* host to big-endian order */
#define htobe16(x)  (uint16_t)(x)
#define htobe32(x)  (uint32_t)(x)
#define htobe64(x)  (uint64_t)(x)

/* host to little-endian order */
#define htole16(x)  __byteswap_u16(x)
#define htole32(x)  __byteswap_u32(x)
#define htole64(x)  __byteswap_u64(x)

/* little-endian to host order */
#define le16toh(x)  __byteswap_u16(x)
#define le32toh(x)  __byteswap_u32(x)
#define le64toh(x)  __byteswap_u64(x)

#else /* BYTE_ORDER == ? */

#error unknown byte order.

#endif /* BYTE_ORDER */

#endif /* !RC_INVOKED */

#endif /* _ENDIAN_H */
