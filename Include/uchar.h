#ifndef _UCHAR_H
#define _UCHAR_H

/* uchar.h - standard header */

#ifndef RC_INVOKED

#if __POCC__ < 1200
#error <uchar.h> need POCC version 12.0 or higher
#endif /* __POCC__ < 1200 */

#pragma once

#include <crtdef.h>

#if __POCC_STDC_VERSION__ < 201112L

#error <uchar.h> is not supported in C99 mode

#else /* __POCC_STDC_VERSION__ >= 201112L */

/* type definitions */
#ifndef _CHAR16_T_DEFINED
#define _CHAR16_T_DEFINED
typedef __CHAR16_TYPE__ char16_t;
#endif /* _CHAR16_T_DEFINED */

#ifndef _CHAR32_T_DEFINED
#define _CHAR32_T_DEFINED
typedef __CHAR32_TYPE__ char32_t;
#endif /* _CHAR32_T_DEFINED */

#if __POCC_STDC_VERSION__ >= 202311L
#ifndef _CHAR8_T_DEFINED
#define _CHAR8_T_DEFINED
typedef __CHAR8_TYPE__ char8_t;
#endif /* _CHAR8_T_DEFINED */
#endif /* __POCC_STDC_VERSION__ >= 202311L */

#ifndef _MBSTATE_T_DEFINED
#define _MBSTATE_T_DEFINED
typedef __MBSTATE_TYPE__ mbstate_t;
#endif /* _MBSTATE_T_DEFINED */

#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
typedef __SIZE_TYPE__ size_t;
#endif /* _SIZE_T_DEFINED */

/* functions */
extern _CRTIMP size_t __cdecl c16rtomb(char * restrict, char16_t, mbstate_t * restrict);
extern _CRTIMP size_t __cdecl c32rtomb(char * restrict, char32_t, mbstate_t * restrict);
extern _CRTIMP size_t __cdecl mbrtoc16(char16_t * restrict, const char * restrict, size_t, mbstate_t * restrict);
extern _CRTIMP size_t __cdecl mbrtoc32(char32_t * restrict, const char * restrict, size_t, mbstate_t * restrict);
#if __POCC_STDC_VERSION__ >= 202311L
extern _CRTIMP size_t __cdecl c8rtomb(char * restrict, char8_t, mbstate_t * restrict);
extern _CRTIMP size_t __cdecl mbrtoc8(char8_t * restrict, const char * restrict, size_t, mbstate_t * restrict);
#endif /* __POCC_STDC_VERSION__ >= 202311L */

#if __POCC_STDC_VERSION__ >= 202311L
#define __STDC_VERSION_UCHAR_H__  202311L
#endif /* __POCC_STDC_VERSION__ >= 202311L */

#endif /* __POCC_STDC_VERSION__ >= 201112L */

#endif /* !RC_INVOKED */

#endif /* _UCHAR_H */
