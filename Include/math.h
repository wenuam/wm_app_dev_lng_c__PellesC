#ifndef _MATH_H
#define _MATH_H

/* math.h - standard header */

#ifndef RC_INVOKED

#if __POCC__ < 1200
#error <math.h> need POCC version 12.0 or higher
#endif /* __POCC__ < 1100 */

#pragma once

#include <crtdef.h>

/* macros */
#define HUGE_VAL   ((double)__INFINITY__)
#define HUGE_VALF  __INFINITY__
#define HUGE_VALL  ((long double)__INFINITY__)
#define INFINITY   __INFINITY__
#define NAN        __NAN__

/* fpclassify() */
#define FP_INFINITE   1
#define FP_NAN        2
#define FP_NORMAL     (-1)
#define FP_SUBNORMAL  (-2)
#define FP_ZERO       0

/* ilogb() */
#define FP_ILOGB0    __INT_MIN__
#define FP_ILOGBNAN  __INT_MAX__

/* llogb() */
#if __POCC_STDC_VERSION__ >= 202311L
#define FP_LLOGB0    __LONG_MIN__
#define FP_LLOGBNAN  __LONG_MAX__
#endif /* __POCC_STDC_VERSION__ >= 202311L */

/* fromfp(), ufromfp(), fromfpx(), ufromfpx() */
#if __POCC_STDC_VERSION__ >= 202311L
#define FP_INT_TONEAREST   0x00
#define FP_INT_DOWNWARD    0x01
#define FP_INT_UPWARD      0x02
#define FP_INT_TOWARDZERO  0x03
#define FP_INT_TONEARESTFROMZERO  0x04
#endif /* __POCC_STDC_VERSION__ >= 202311L */

#define MATH_ERRNO        1
#define MATH_ERREXCEPT    2
#define math_errhandling  (MATH_ERRNO|MATH_ERREXCEPT)

/* non-standard common math constants */
#ifdef _USE_MATH_DEFINES
#ifndef _MATH_DEFINES_DEFINED
#define _MATH_DEFINES_DEFINED
#define M_E         2.7182818284590452354   /* e */
#define M_LOG2E     1.4426950408889634074   /* log2(e) */
#define M_LOG10E    0.43429448190325182765  /* log10(e) */
#define M_LN2       0.69314718055994530942  /* log(2) */
#define M_LN10      2.30258509299404568402  /* log(10) */
#define M_PI        3.14159265358979323846  /* pi */
#define M_PI_2      1.57079632679489661923  /* pi/2 */
#define M_PI_4      0.78539816339744830962  /* pi/4 */
#define M_1_PI      0.31830988618379067154  /* 1/pi */
#define M_2_PI      0.63661977236758134308  /* 2/pi */
#define M_2_SQRTPI  1.12837916709551257390  /* 2/sqrt(pi) */
#define M_SQRT2     1.41421356237309504880  /* sqrt(2) */
#define M_SQRT1_2   0.70710678118654752440  /* 1/sqrt(2) */
#endif /* _MATH_DEFINES_DEFINED */
#endif /* _USE_MATH_DEFINES */

#define fpclassify(x)  __fpclassify(x)
#define signbit(x)     __signbit(x)

#define isfinite(x)  __isfinite(x)
#define isinf(x)     __isinf(x)
#define isnan(x)     __isnan(x)
#define isnormal(x)  __isnormal(x)

#if __POCC_STDC_VERSION__ >= 202311L
#define iscanonical(x)  __iscanonical(x)
#define issignaling(x)  __issignaling(x)
#define issubnormal(x)  __issubnormal(x)
#define iszero(x)       __iszero(x)
#endif /* __POCC_STDC_VERSION__ >= 202311L */

#define isgreater(x,y)       __isgreater((x),(y))
#define isgreaterequal(x,y)  __isgreaterequal((x),(y))
#define isless(x,y)          __isless((x),(y))
#define islessequal(x,y)     __islessequal((x),(y))
#define islessgreater(x,y)   __islessgreater((x),(y))
#define isunordered(x,y)     __isunordered((x),(y))

#if __POCC_STDC_VERSION__ >= 202311L
#define iseqsig(x,y)  __iseqsig((x),(y))
#endif /* __POCC_STDC_VERSION__ >= 202311L */

/* type definitions */
#if __POCC_FLTEVAL__ == 1
typedef double float_t;
typedef double double_t;
#elif __POCC_FLTEVAL__ == 2
typedef long double float_t;
typedef long double double_t;
#else /* __POCC_FLTEVAL__ <= 0 */
typedef float float_t;
typedef double double_t;
#endif

/* declarations */

/* trigonometric functions (double) */
extern _CRTIMP double __cdecl acos(double);
extern _CRTIMP double __cdecl asin(double);
extern _CRTIMP double __cdecl atan(double);
extern _CRTIMP double __cdecl atan2(double, double);
extern _CRTIMP double __cdecl cos(double);
extern _CRTIMP double __cdecl sin(double);
extern _CRTIMP double __cdecl tan(double);
#if __POCC_STDC_VERSION__ >= 202311L
extern _CRTIMP double __cdecl acospi(double);
extern _CRTIMP double __cdecl asinpi(double);
extern _CRTIMP double __cdecl atanpi(double);
extern _CRTIMP double __cdecl atan2pi(double, double);
extern _CRTIMP double __cdecl cospi(double);
extern _CRTIMP double __cdecl sinpi(double);
extern _CRTIMP double __cdecl tanpi(double);
#endif /* __POCC_STDC_VERSION__ >= 202311L */

/* hyperbolic functions (double) */
extern _CRTIMP double __cdecl acosh(double);
extern _CRTIMP double __cdecl asinh(double);
extern _CRTIMP double __cdecl atanh(double);
extern _CRTIMP double __cdecl cosh(double);
extern _CRTIMP double __cdecl sinh(double);
extern _CRTIMP double __cdecl tanh(double);

/* exponential and logarithmic functions (double) */
extern _CRTIMP double __cdecl exp(double);
extern _CRTIMP double __cdecl exp2(double);
extern _CRTIMP double __cdecl expm1(double);
extern _CRTIMP double __cdecl frexp(double, int *);
extern _CRTIMP int __cdecl ilogb(double);
extern _CRTIMP double __cdecl ldexp(double, int);
extern _CRTIMP double __cdecl log(double);
extern _CRTIMP double __cdecl log10(double);
extern _CRTIMP double __cdecl log1p(double);
extern _CRTIMP double __cdecl log2(double);
extern _CRTIMP double __cdecl logb(double);
extern _CRTIMP double __cdecl modf(double, double *);
extern _CRTIMP double __cdecl scalbn(double, int);
extern _CRTIMP double __cdecl scalbln(double, long);
#if __POCC_STDC_VERSION__ >= 202311L
extern _CRTIMP double __cdecl exp10(double);
/* TODO: exp10m1() */
/* TODO: exp2m1() */
extern _CRTIMP long int __cdecl llogb(double);
/* TODO: log10p1() */
/* TODO: logp1() (alias) */
/* TODO: log2p1() */
#endif /* __POCC_STDC_VERSION__ >= 202311L */

/* power and absolute-value functions (double) */
extern _CRTIMP double __cdecl cbrt(double);
extern _CRTIMP double __cdecl fabs(double);
extern _CRTIMP double __cdecl hypot(double, double);
extern _CRTIMP double __cdecl pow(double, double);
extern _CRTIMP double __cdecl sqrt(double);
#if __POCC_STDC_VERSION__ >= 202311L
/* TODO: compoundn() */
/* TODO: pown() */
/* TODO: powr() */
/* TODO: rootn() */
/* TODO: rsqrt() */
#endif /* __POCC_STDC_VERSION__ >= 202311L */

/* error and gamma functions (double) */
extern _CRTIMP double __cdecl erf(double);
extern _CRTIMP double __cdecl erfc(double);
extern _CRTIMP double __cdecl lgamma(double);
extern _CRTIMP double __cdecl tgamma(double);

/* nearest integer functions (double) */
extern _CRTIMP double __cdecl ceil(double);
extern _CRTIMP double __cdecl floor(double);
extern _CRTIMP double __cdecl nearbyint(double);
extern _CRTIMP double __cdecl rint(double);
extern _CRTIMP long __cdecl lrint(double);
extern _CRTIMP long long __cdecl llrint(double);
extern _CRTIMP double __cdecl round(double);
extern _CRTIMP long __cdecl lround(double);
extern _CRTIMP long long __cdecl llround(double);
extern _CRTIMP double __cdecl trunc(double);
#if __POCC_STDC_VERSION__ >= 202311L
extern _CRTIMP double __cdecl roundeven(double);
extern _CRTIMP double __cdecl fromfp(double, int, unsigned int);
extern _CRTIMP double __cdecl fromfpx(double, int, unsigned int);
extern _CRTIMP double __cdecl ufromfp(double, int, unsigned int);
extern _CRTIMP double __cdecl ufromfpx(double, int, unsigned int);
#endif /* __POCC_STDC_VERSION__ >= 202311L */

/* remainder functions (double) */
extern _CRTIMP double __cdecl fmod(double, double);
extern _CRTIMP double __cdecl remainder(double, double);
extern _CRTIMP double __cdecl remquo(double, double, int *);

/* manipulation functions (double) */
extern _CRTIMP double __cdecl copysign(double, double);
extern _CRTIMP double __cdecl nan(const char *);
extern _CRTIMP double __cdecl nextafter(double, double);
extern _CRTIMP double __cdecl nexttoward(double, long double);
#if __POCC_STDC_VERSION__ >= 202311L
extern _CRTIMP double __cdecl nextup(double);
extern _CRTIMP double __cdecl nextdown(double);
extern _CRTIMP int __cdecl canonicalize(double *, const double *);
#endif /* __POCC_STDC_VERSION__ >= 202311L */

/* maximum, minimum, and positive difference functions (double) */
extern _CRTIMP double __cdecl fdim(double, double);
extern _CRTIMP double __cdecl fmax(double, double);
extern _CRTIMP double __cdecl fmin(double, double);
#if __POCC_STDC_VERSION__ >= 202311L
extern _CRTIMP double __cdecl fmaximum(double, double);
extern _CRTIMP double __cdecl fminimum(double, double);
extern _CRTIMP double __cdecl fmaximum_mag(double, double);
extern _CRTIMP double __cdecl fminimum_mag(double, double);
extern _CRTIMP double __cdecl fmaximum_num(double, double);
extern _CRTIMP double __cdecl fminimum_num(double, double);
extern _CRTIMP double __cdecl fmaximum_mag_num(double, double);
extern _CRTIMP double __cdecl fminimum_mag_num(double, double);
#endif /* __POCC_STDC_VERSION__ >= 202311L */

/* fused multiply-add (double) */
extern _CRTIMP double __cdecl fma(double, double, double);

/* total order functions (double) */
extern _CRTIMP int __cdecl totalorder(const double *, const double *);     /* bonus */
extern _CRTIMP int __cdecl totalordermag(const double *, const double *);  /* bonus */

/* payload functions (double) */
extern _CRTIMP double __cdecl getpayload(const double *);    /* bonus */
extern _CRTIMP int __cdecl setpayload(double *, double);     /* bonus */
extern _CRTIMP int __cdecl setpayloadsig(double *, double);  /* bonus */


/* trigonometric functions (float) */
extern _CRTIMP float __cdecl acosf(float);
extern _CRTIMP float __cdecl asinf(float);
extern _CRTIMP float __cdecl atanf(float);
extern _CRTIMP float __cdecl atan2f(float, float);
extern _CRTIMP float __cdecl cosf(float);
extern _CRTIMP float __cdecl sinf(float);
extern _CRTIMP float __cdecl tanf(float);
#if __POCC_STDC_VERSION__ >= 202311L
extern _CRTIMP float __cdecl acospif(float);
extern _CRTIMP float __cdecl asinpif(float);
extern _CRTIMP float __cdecl atanpif(float);
extern _CRTIMP float __cdecl atan2pif(float, float);
extern _CRTIMP float __cdecl cospif(float);
extern _CRTIMP float __cdecl sinpif(float);
extern _CRTIMP float __cdecl tanpif(float);
#endif /* __POCC_STDC_VERSION__ >= 202311L */

/* hyperbolic functions (float) */
extern _CRTIMP float __cdecl acoshf(float);
extern _CRTIMP float __cdecl asinhf(float);
extern _CRTIMP float __cdecl atanhf(float);
extern _CRTIMP float __cdecl coshf(float);
extern _CRTIMP float __cdecl sinhf(float);
extern _CRTIMP float __cdecl tanhf(float);

/* exponential and logarithmic functions (float) */
extern _CRTIMP float __cdecl expf(float);
extern _CRTIMP float __cdecl exp2f(float);
extern _CRTIMP float __cdecl expm1f(float);
extern _CRTIMP float __cdecl frexpf(float, int *);
extern _CRTIMP int __cdecl ilogbf(float);
extern _CRTIMP float __cdecl ldexpf(float, int);
extern _CRTIMP float __cdecl logf(float);
extern _CRTIMP float __cdecl log10f(float);
extern _CRTIMP float __cdecl log1pf(float);
extern _CRTIMP float __cdecl log2f(float);
extern _CRTIMP float __cdecl logbf(float);
extern _CRTIMP float __cdecl modff(float, float *);
extern _CRTIMP float __cdecl scalbnf(float, int);
extern _CRTIMP float __cdecl scalblnf(float, long);
#if __POCC_STDC_VERSION__ >= 202311L
extern _CRTIMP float __cdecl exp10f(float);
/* TODO: exp10m1f() */
/* TODO: exp2m1f() */
extern _CRTIMP long int __cdecl llogbf(float);
/* TODO: log10p1f() */
/* TODO: logp1f() (alias) */
/* TODO: log2p1f() */
#endif /* __POCC_STDC_VERSION__ >= 202311L */

/* power and absolute-value functions (float) */
extern _CRTIMP float __cdecl cbrtf(float);
extern _CRTIMP float __cdecl fabsf(float);
extern _CRTIMP float __cdecl hypotf(float, float);
extern _CRTIMP float __cdecl powf(float, float);
extern _CRTIMP float __cdecl sqrtf(float);
#if __POCC_STDC_VERSION__ >= 202311L
/* TODO: compoundnf() */
/* TODO: pownf() */
/* TODO: powrf() */
/* TODO: rootnf() */
/* TODO: rsqrtf() */
#endif /* __POCC_STDC_VERSION__ >= 202311L */

/* error and gamma functions (float) */
extern _CRTIMP float __cdecl erff(float);
extern _CRTIMP float __cdecl erfcf(float);
extern _CRTIMP float __cdecl lgammaf(float);
extern _CRTIMP float __cdecl tgammaf(float);

/* nearest integer functions (float) */
extern _CRTIMP float __cdecl ceilf(float);
extern _CRTIMP float __cdecl floorf(float);
extern _CRTIMP float __cdecl nearbyintf(float);
extern _CRTIMP float __cdecl rintf(float);
extern _CRTIMP long __cdecl lrintf(float);
extern _CRTIMP long long __cdecl llrintf(float);
extern _CRTIMP float __cdecl roundf(float);
extern _CRTIMP long __cdecl lroundf(float);
extern _CRTIMP long long __cdecl llroundf(float);
extern _CRTIMP float __cdecl truncf(float);
#if __POCC_STDC_VERSION__ >= 202311L
extern _CRTIMP float __cdecl roundevenf(float);
extern _CRTIMP float __cdecl fromfpf(float, int, unsigned int);
extern _CRTIMP float __cdecl fromfpxf(float, int, unsigned int);
extern _CRTIMP float __cdecl ufromfpf(float, int, unsigned int);
extern _CRTIMP float __cdecl ufromfpxf(float, int, unsigned int);
#endif /* __POCC_STDC_VERSION__ >= 202311L */

/* remainder functions (float) */
extern _CRTIMP float __cdecl fmodf(float, float);
extern _CRTIMP float __cdecl remainderf(float, float);
extern _CRTIMP float __cdecl remquof(float, float, int *);

/* manipulation functions (float) */
extern _CRTIMP float __cdecl copysignf(float, float);
extern _CRTIMP float __cdecl nanf(const char *);
extern _CRTIMP float __cdecl nextafterf(float, float);
extern _CRTIMP float __cdecl nexttowardf(float, long double);
#if __POCC_STDC_VERSION__ >= 202311L
extern _CRTIMP float __cdecl nextupf(float);
extern _CRTIMP float __cdecl nextdownf(float);
extern _CRTIMP int __cdecl canonicalizef(float *, const float *);
#endif /* __POCC_STDC_VERSION__ >= 202311L */

/* maximum, minimum, and positive difference functions (float) */
extern _CRTIMP float __cdecl fdimf(float, float);
extern _CRTIMP float __cdecl fmaxf(float, float);
extern _CRTIMP float __cdecl fminf(float, float);
#if __POCC_STDC_VERSION__ >= 202311L
extern _CRTIMP float __cdecl fmaximumf(float, float);
extern _CRTIMP float __cdecl fminimumf(float, float);
extern _CRTIMP float __cdecl fmaximum_magf(float, float);
extern _CRTIMP float __cdecl fminimum_magf(float, float);
extern _CRTIMP float __cdecl fmaximum_numf(float, float);
extern _CRTIMP float __cdecl fminimum_numf(float, float);
extern _CRTIMP float __cdecl fmaximum_mag_numf(float, float);
extern _CRTIMP float __cdecl fminimum_mag_numf(float, float);
#endif /* __POCC_STDC_VERSION__ >= 202311L */

/* fused multiply-add (float) */
extern _CRTIMP float __cdecl fmaf(float, float, float);

/* total order functions (float) */
extern _CRTIMP int __cdecl totalorderf(const float *, const float *);     /* bonus */
extern _CRTIMP int __cdecl totalordermagf(const float *, const float *);  /* bonus */

/* payload functions (float) */
extern _CRTIMP float __cdecl getpayloadf(const float *);    /* bonus */
extern _CRTIMP int __cdecl setpayloadf(float *, float);     /* bonus */
extern _CRTIMP int __cdecl setpayloadsigf(float *, float);  /* bonus */


/* trigonometric functions (long double) */
extern _CRTIMP long double __cdecl acosl(long double);
extern _CRTIMP long double __cdecl asinl(long double);
extern _CRTIMP long double __cdecl atanl(long double);
extern _CRTIMP long double __cdecl atan2l(long double, long double);
extern _CRTIMP long double __cdecl cosl(long double);
extern _CRTIMP long double __cdecl sinl(long double);
extern _CRTIMP long double __cdecl tanl(long double);
#if __POCC_STDC_VERSION__ >= 202311L
extern _CRTIMP long double __cdecl acospil(long double);
extern _CRTIMP long double __cdecl asinpil(long double);
extern _CRTIMP long double __cdecl atanpil(long double);
extern _CRTIMP long double __cdecl atan2pil(long double, long double);
extern _CRTIMP long double __cdecl cospil(long double);
extern _CRTIMP long double __cdecl sinpil(long double);
extern _CRTIMP long double __cdecl tanpil(long double);
#endif /* __POCC_STDC_VERSION__ >= 202311L */

/* hyperbolic functions (long double) */
extern _CRTIMP long double __cdecl acoshl(long double);
extern _CRTIMP long double __cdecl asinhl(long double);
extern _CRTIMP long double __cdecl atanhl(long double);
extern _CRTIMP long double __cdecl coshl(long double);
extern _CRTIMP long double __cdecl sinhl(long double);
extern _CRTIMP long double __cdecl tanhl(long double);

/* exponential and logarithmic functions (long double) */
extern _CRTIMP long double __cdecl expl(long double);
extern _CRTIMP long double __cdecl exp2l(long double);
extern _CRTIMP long double __cdecl expm1l(long double);
extern _CRTIMP long double __cdecl frexpl(long double, int *);
extern _CRTIMP int __cdecl ilogbl(long double);
extern _CRTIMP long double __cdecl ldexpl(long double, int);
extern _CRTIMP long double __cdecl logl(long double);
extern _CRTIMP long double __cdecl log10l(long double);
extern _CRTIMP long double __cdecl log1pl(long double);
extern _CRTIMP long double __cdecl log2l(long double);
extern _CRTIMP long double __cdecl logbl(long double);
extern _CRTIMP long double __cdecl modfl(long double, long double *);
extern _CRTIMP long double __cdecl scalbnl(long double, int);
extern _CRTIMP long double __cdecl scalblnl(long double, long);
#if __POCC_STDC_VERSION__ >= 202311L
extern _CRTIMP long double __cdecl exp10l(long double);
/* TODO: exp2m1l() */
/* TODO: exp10m1l() */
extern _CRTIMP long int __cdecl llogbl(long double);
/* TODO: log10p1l() */
/* TODO: logp1l() (alias) */
/* TODO: log2p1l() */
#endif /* __POCC_STDC_VERSION__ >= 202311L */

/* power and absolute-value functions (long double) */
extern _CRTIMP long double __cdecl cbrtl(long double);
extern _CRTIMP long double __cdecl fabsl(long double);
extern _CRTIMP long double __cdecl hypotl(long double, long double);
extern _CRTIMP long double __cdecl powl(long double, long double);
extern _CRTIMP long double __cdecl sqrtl(long double);
#if __POCC_STDC_VERSION__ >= 202311L
/* TODO: compoundnl() */
/* TODO: pownl() */
/* TODO: powrl() */
/* TODO: rootnl() */
/* TODO: rsqrtl() */
#endif /* __POCC_STDC_VERSION__ >= 202311L */

/* error and gamma functions (long double) */
extern _CRTIMP long double __cdecl erfl(long double);
extern _CRTIMP long double __cdecl erfcl(long double);
extern _CRTIMP long double __cdecl lgammal(long double);
extern _CRTIMP long double __cdecl tgammal(long double);

/* nearest integer functions (long double) */
extern _CRTIMP long double __cdecl ceill(long double);
extern _CRTIMP long double __cdecl floorl(long double);
extern _CRTIMP long double __cdecl nearbyintl(long double);
extern _CRTIMP long double __cdecl rintl(long double);
extern _CRTIMP long __cdecl lrintl(long double);
extern _CRTIMP long long __cdecl llrintl(long double);
extern _CRTIMP long double __cdecl roundl(long double);
extern _CRTIMP long __cdecl lroundl(long double);
extern _CRTIMP long long __cdecl llroundl(long double);
extern _CRTIMP long double __cdecl truncl(long double);
#if __POCC_STDC_VERSION__ >= 202311L
extern _CRTIMP long double __cdecl roundevenl(long double);
extern _CRTIMP long double __cdecl fromfpl(long double, int, unsigned int);
extern _CRTIMP long double __cdecl fromfpxl(long double, int, unsigned int);
extern _CRTIMP long double __cdecl ufromfpl(long double, int, unsigned int);
extern _CRTIMP long double __cdecl ufromfpxl(long double, int, unsigned int);
#endif /* __POCC_STDC_VERSION__ >= 202311L */

/* remainder functions (long double) */
extern _CRTIMP long double __cdecl fmodl(long double, long double);
extern _CRTIMP long double __cdecl remainderl(long double, long double);
extern _CRTIMP long double __cdecl remquol(long double, long double, int *);

/* manipulation functions (long double) */
extern _CRTIMP long double __cdecl copysignl(long double, long double);
extern _CRTIMP long double __cdecl nanl(const char *);
extern _CRTIMP long double __cdecl nextafterl(long double, long double);
extern _CRTIMP long double __cdecl nexttowardl(long double, long double);
#if __POCC_STDC_VERSION__ >= 202311L
extern _CRTIMP long double __cdecl nextupl(long double);
extern _CRTIMP long double __cdecl nextdownl(long double);
extern _CRTIMP int __cdecl canonicalizel(long double *, const long double *);
#endif /* __POCC_STDC_VERSION__ >= 202311L */

/* maximum, minimum, and positive difference functions (long double) */
extern _CRTIMP long double __cdecl fdiml(long double, long double);
extern _CRTIMP long double __cdecl fmaxl(long double, long double);
extern _CRTIMP long double __cdecl fminl(long double, long double);
#if __POCC_STDC_VERSION__ >= 202311L
extern _CRTIMP long double __cdecl fmaximuml(long double, long double);
extern _CRTIMP long double __cdecl fminimuml(long double, long double);
extern _CRTIMP long double __cdecl fmaximum_magl(long double, long double);
extern _CRTIMP long double __cdecl fminimum_magl(long double, long double);
extern _CRTIMP long double __cdecl fmaximum_numl(long double, long double);
extern _CRTIMP long double __cdecl fminimum_numl(long double, long double);
extern _CRTIMP long double __cdecl fmaximum_mag_numl(long double, long double);
extern _CRTIMP long double __cdecl fminimum_mag_numl(long double, long double);
#endif /* __POCC_STDC_VERSION__ >= 202311L */

/* fused multiply-add (long double) */
extern _CRTIMP long double __cdecl fmal(long double, long double, long double);

/* total order functions (long double) */
extern _CRTIMP int __cdecl totalorderl(const long double *, const long double *);     /* bonus */
extern _CRTIMP int __cdecl totalordermagl(const long double *, const long double *);  /* bonus */

/* payload functions (long double) */
extern _CRTIMP long double __cdecl getpayloadl(const long double *);    /* bonus */
extern _CRTIMP int __cdecl setpayloadl(long double *, long double);     /* bonus */
extern _CRTIMP int __cdecl setpayloadsigl(long double *, long double);  /* bonus */


/* functions that round result to narrower type */
#if __POCC_STDC_VERSION__ >= 202311L
extern _CRTIMP float __cdecl fadd(double, double);
extern _CRTIMP float __cdecl fsub(double, double);
extern _CRTIMP float __cdecl fmul(double, double);
extern _CRTIMP float __cdecl fdiv(double, double);
extern _CRTIMP float __cdecl ffma(double, double, double);
extern _CRTIMP float __cdecl fsqrt(double);
/**/
extern _CRTIMP float __cdecl faddl(long double, long double);
extern _CRTIMP float __cdecl fsubl(long double, long double);
extern _CRTIMP float __cdecl fmull(long double, long double);
extern _CRTIMP float __cdecl fdivl(long double, long double);
extern _CRTIMP float __cdecl ffmal(long double, long double, long double);
extern _CRTIMP float __cdecl fsqrtl(long double);
/**/
extern _CRTIMP double __cdecl daddl(long double, long double);
extern _CRTIMP double __cdecl dsubl(long double, long double);
extern _CRTIMP double __cdecl dmull(long double, long double);
extern _CRTIMP double __cdecl ddivl(long double, long double);
extern _CRTIMP double __cdecl dfmal(long double, long double, long double);
extern _CRTIMP double __cdecl dsqrtl(long double);
#endif /* __POCC_STDC_VERSION__ >= 202311L */


#ifdef _MSC_EXTENSIONS
/* values for _exception type */
#define _DOMAIN  1
#define _SING  2
#define _OVERFLOW  3
#define _UNDERFLOW  4
#define _TLOSS  5
#define _PLOSS  6

/* compatibility names */
#ifdef __POCC__OLDNAMES
#define DOMAIN  _DOMAIN
#define SING  _SING
#define OVERFLOW  _OVERFLOW
#define UNDERFLOW  _UNDERFLOW
#define TLOSS  _TLOSS
#define PLOSS  _PLOSS
#endif /* __POCC__OLDNAMES */

/* passed to _matherr() when a fp exception is detected */
struct _exception {
    int type;
    const char *name;
    double arg1;
    double arg2;
    double retval;
};

extern int __cdecl _matherr(struct _exception *);
#endif /* _MSC_EXTENSIONS */

#if __POCC_STDC_VERSION__ >= 202311L
#define __STDC_VERSION_MATH_H__  202311L
#endif /* __POCC_STDC_VERSION__ >= 202311L */

#endif /* !RC_INVOKED */

#endif /* _MATH_H */
