#ifndef _WINBER_H
#define _WINBER_H

#if __POCC__ >= 500
#pragma once
#endif

/* Windows Basic Encoding Rules (BER) API definitions */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#define WINBERAPI DECLSPEC_IMPORT

#ifndef BERAPI
#define BERAPI __cdecl
#endif

#define LBER_ERROR   0xffffffffL
#define LBER_DEFAULT 0xffffffffL

typedef unsigned int ber_tag_t;
typedef int ber_int_t;
typedef unsigned int ber_uint_t;
typedef unsigned int ber_len_t;
typedef int ber_slen_t;

WINBERAPI BerElement * BERAPI ber_init(BERVAL *pBerVal);
WINBERAPI void BERAPI ber_free(BerElement *pBerElement, INT fbuf);
WINBERAPI void BERAPI ber_bvfree(BERVAL *pBerVal);
WINBERAPI void BERAPI ber_bvecfree(PBERVAL *pBerVal);
WINBERAPI BERVAL * BERAPI ber_bvdup(BERVAL *pBerVal);
WINBERAPI BerElement * BERAPI ber_alloc_t(INT options);
WINBERAPI ULONG BERAPI ber_skip_tag(BerElement *pBerElement, ULONG *pLen );
WINBERAPI ULONG BERAPI ber_peek_tag(BerElement *pBerElement, ULONG *pLen);
WINBERAPI ULONG BERAPI ber_first_element(BerElement *pBerElement, ULONG *pLen, CHAR * *ppOpaque);
WINBERAPI ULONG BERAPI ber_next_element(BerElement *pBerElement, ULONG *pLen, CHAR *opaque);
WINBERAPI INT BERAPI ber_flatten(BerElement *pBerElement, PBERVAL *pBerVal);
WINBERAPI INT BERAPI ber_printf(BerElement *pBerElement, PSTR fmt, ...);
WINBERAPI ULONG BERAPI ber_scanf(BerElement *pBerElement, PSTR fmt, ...);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#endif /* _WINBER_H */
