#ifndef _FENV_H
#define _FENV_H

/* fenv.h - standard header */

#if __POCC__ < 1100
#error <fenv.h> need POCC version 11.0 or higher
#endif /* __POCC__ < 1100 */

#pragma once

#include <crtdef.h>

typedef unsigned long fexcept_t;

typedef struct fenv_t {
    fexcept_t control, status, reserved[5];
} fenv_t;

#if __POCC_STDC_VERSION__ >= 202311L
typedef struct femode_t {
    unsigned long mode[2];
} femode_t;
#endif /* __POCC_STDC_VERSION__ >= 202311L */

/* macros */
#define FE_TONEAREST   0x00
#define FE_DOWNWARD    0x01
#define FE_UPWARD      0x02
#define FE_TOWARDZERO  0x03

#define FE_INVALID     0x01
#define FE_DIVBYZERO   0x04
#define FE_OVERFLOW    0x08
#define FE_UNDERFLOW   0x10
#define FE_INEXACT     0x20
#define FE_ALL_EXCEPT  (FE_INVALID|FE_DIVBYZERO|FE_OVERFLOW|FE_UNDERFLOW|FE_INEXACT)

#define FE_DFL_ENV  (&__dfl_fenv)
#if __POCC_STDC_VERSION__ >= 202311L
#define FE_DFL_MODE  (&__dfl_femode)
#endif /* __POCC_STDC_VERSION__ >= 202311L */

/* floating-point exceptions */
extern _CRTIMP int __cdecl feclearexcept(int);
extern _CRTIMP int __cdecl fegetexceptflag(fexcept_t *, int);
extern _CRTIMP int __cdecl feraiseexcept(int);
extern _CRTIMP int __cdecl fesetexceptflag(const fexcept_t *, int);
extern _CRTIMP int __cdecl fetestexcept(int);
#if __POCC_STDC_VERSION__ >= 202311L
extern _CRTIMP int __cdecl fesetexcept(int);
extern _CRTIMP int __cdecl fetestexceptflag(const fexcept_t *, int);
#endif /* __POCC_STDC_VERSION__ >= 202311L */

/* rounding and other control modes */
extern _CRTIMP int __cdecl fegetround(void);
extern _CRTIMP int __cdecl fesetround(int);
#if __POCC_STDC_VERSION__ >= 202311L
extern _CRTIMP int __cdecl fegetmode(femode_t *);
extern _CRTIMP int __cdecl fesetmode(const femode_t *);
#endif /* __POCC_STDC_VERSION__ >= 202311L */

/* floating-point environment */
extern _CRTIMP int __cdecl fegetenv(fenv_t *);
extern _CRTIMP int __cdecl fesetenv(const fenv_t *);
extern _CRTIMP int __cdecl feupdateenv(const fenv_t *);
extern _CRTIMP int __cdecl feholdexcept(fenv_t *);

/* data declarations */
extern _CRTIMP const fenv_t __dfl_fenv;
extern _CRTIMP fenv_t __fenv;
#if __POCC_STDC_VERSION__ >= 202311L
extern _CRTIMP const femode_t __dfl_femode;
#endif /* __POCC_STDC_VERSION__ >= 202311L */

#if __POCC_STDC_VERSION__ >= 202311L
#define __STDC_VERSION_FENV_H__  202311L
#endif /* __POCC_STDC_VERSION__ >= 202311L */

#endif /* _FENV_H */
