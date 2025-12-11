#ifndef _STDDEF_H
#define _STDDEF_H

/* stddef.h - standard header */

#ifndef RC_INVOKED

#if __POCC__ < 1200
#error <stddef.h> need POCC version 12.0 or higher
#endif /* __POCC__ < 1000 */

#pragma once

/* macros */
#ifndef NULL
#define NULL  ((void *)0)
#endif

#ifndef offsetof
#define offsetof(TY,M)  __offsetof(TY, M)
#endif /* offsetof */

#if __POCC_STDC_VERSION__ >= 202311L
#define unreachable()  __unreachable()
#endif /* __POCC_STDC_VERSION__ >= 202311L */

/* type definitions */
#ifndef _PTRDIFF_T_DEFINED
#define _PTRDIFF_T_DEFINED
typedef __PTRDIFF_TYPE__ ptrdiff_t;
#endif /* _PTRDIFF_T_DEFINED */

#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
typedef __SIZE_TYPE__ size_t;
#endif /* _SIZE_T_DEFINED */

#if __POCC_STDC_VERSION__ >= 201112L
typedef __MAX_ALIGN_TYPE__ max_align_t;
#endif /* __POCC_STDC_VERSION__ >= 201112L */

#ifndef _WCHAR_T_DEFINED
#define _WCHAR_T_DEFINED
typedef __WCHAR_TYPE__ wchar_t;
#endif /* _WCHAR_T_DEFINED */

#if __POCC_STDC_VERSION__ >= 202311L
typedef typeof(nullptr) nullptr_t;
#endif /* __POCC_STDC_VERSION__ >= 202311L */

/* bounds-checking interfaces (TR24731-1, C11 annex K) */
#if __STDC_WANT_LIB_EXT1__

#ifndef _RSIZE_T_DEFINED
#define _RSIZE_T_DEFINED
typedef __SIZE_TYPE__ rsize_t;
#endif /* _RSIZE_T_DEFINED */

#endif /* __STDC_WANT_LIB_EXT1__ */

#if __POCC_STDC_VERSION__ >= 202311L
#define __STDC_VERSION_STDDEF_H__  202311L
#endif /* __POCC_STDC_VERSION__ >= 202311L */

#endif /* !RC_INVOKED */

#endif /* _STDDEF_H */
