#ifndef _LIMITS_H
#define _LIMITS_H

/* limits.h - standard header */

#ifndef RC_INVOKED

#if __POCC__ < 1200
#error <limits.h> need POCC version 12.0 or higher
#endif /* __POCC__ < 1100 */

#pragma once

#define MB_LEN_MAX  __MB_LEN_MAX__          /* maximum number of bytes in a multibyte character */

#define CHAR_BIT    __CHAR_BIT__            /* number of bits in a char */

#if __POCC_STDC_VERSION__ >= 202311L
#define BOOL_MAX      1                     /* maximum bool value */
#endif /* __POCC_STDC_VERSION__ >= 202311L */
#define CHAR_MIN    __CHAR_MIN__            /* minimum char value */
#define CHAR_MAX    __CHAR_MAX__            /* maximum char value */
#define SCHAR_MIN   __SCHAR_MIN__           /* minimum signed char value */
#define SCHAR_MAX   __SCHAR_MAX__           /* maximum signed char value */
#define UCHAR_MAX   __UCHAR_MAX__           /* maximum unsigned char value */
#define SHRT_MIN    __SHRT_MIN__            /* minimum signed short value */
#define SHRT_MAX    __SHRT_MAX__            /* maximum signed short value */
#define USHRT_MAX   __USHRT_MAX__           /* maximum unsigned short value */
#define INT_MIN     __INT_MIN__             /* minimum signed int value */
#define INT_MAX     __INT_MAX__             /* maximum signed int value */
#define UINT_MAX    __UINT_MAX__            /* maximum unsigned int value */
#define LONG_MIN    __LONG_MIN__            /* minimum signed long value */
#define LONG_MAX    __LONG_MAX__            /* maximum signed long value */
#define ULONG_MAX   __ULONG_MAX__           /* maximum unsigned long value */
#define LLONG_MIN   __LLONG_MIN__           /* minimum signed long long value */
#define LLONG_MAX   __LLONG_MAX__           /* maximum signed long long value */
#define ULLONG_MAX  __ULLONG_MAX__          /* maximum unsigned long long value */

#ifdef _MSC_EXTENSIONS
#define _I64_MIN    __LLONG_MIN__           /* minimum signed 64 bit value */
#define _I64_MAX    __LLONG_MAX__           /* maximum signed 64 bit value */
#define _UI64_MAX   __ULLONG_MAX__          /* maximum unsigned 64 bit value */
#endif /* _MSC_EXTENSIONS */

#define _SSIZE_MAX  __SSIZE_MAX__
#ifdef __POCC__OLDNAMES
#define SSIZE_MAX  __SSIZE_MAX__
#endif /* __POCC__OLDNAMES */

#if __POCC_STDC_VERSION__ >= 202311L
#define BOOL_WIDTH    __BOOL_WIDTH__        /* width for an object of type bool */
#define CHAR_WIDTH    __CHAR_BIT__          /* width for an object of type char */
#define SCHAR_WIDTH   __CHAR_BIT__          /* width for an object of type signed char */
#define UCHAR_WIDTH   __CHAR_BIT__          /* width for an object of type unsigned char */
#define SHRT_WIDTH    __USHRT_WIDTH__       /* width for an object of type short int */
#define USHRT_WIDTH   __USHRT_WIDTH__       /* width for an object of type unsigned short int */
#define INT_WIDTH     __UINT_WIDTH__        /* width for an object of type int */
#define UINT_WIDTH    __UINT_WIDTH__        /* width for an object of type unsigned int */
#define LONG_WIDTH    __ULONG_WIDTH__       /* width for an object of type long int */
#define ULONG_WIDTH   __ULONG_WIDTH__       /* width for an object of type unsigned long int */
#define LLONG_WIDTH   __ULLONG_WIDTH__      /* width for an object of type long long int */
#define ULLONG_WIDTH  __ULLONG_WIDTH__      /* width for an object of type unsigned long long int */
#define BITINT_MAXWIDTH  __BITINT_MAXWIDTH__  /* maximum width N for _BitInt(N) */
#endif /* __POCC_STDC_VERSION__ >= 202311L */

#if __POCC_STDC_VERSION__ >= 202311L
#define __STDC_VERSION_LIMITS_H__  202311L
#endif /* __POCC_STDC_VERSION__ >= 202311L */

#endif /* !RC_INVOKED */

#endif /* _LIMITS_H */
