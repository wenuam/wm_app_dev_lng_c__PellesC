#ifndef _STDCKDINT_H
#define _STDCKDINT_H

/* stdckdint.h - standard header */

#ifndef RC_INVOKED

#if __POCC__ < 1200
#error <stdckdint.h> need POCC version 12.0 or higher
#endif /* __POCC__ < 1200 */

#pragma once

#if __POCC_STDC_VERSION__ < 202311L

#error <stdckdint.h> is not supported in C99/C11/C17 mode

#else /* __POCC_STDC_VERSION__ >= 202311L */

#define ckd_add  __ckd_add
#define ckd_sub  __ckd_sub
#define ckd_mul  __ckd_mul

#define __STDC_VERSION_STDCKDINT_H__  202311L

#endif /* __POCC_STDC_VERSION__ >= 202311L */

#endif /* !RC_INVOKED */

#endif /* _STDCKDINT_H */
