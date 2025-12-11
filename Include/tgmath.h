#ifndef _TGMATH_H
#define _TGMATH_H

/* tgmath.h - standard header */

#if __POCC__ < 1100
#error <tgmath.h> need POCC version 11.0 or higher
#endif /* __POCC__ < 1100 */

#pragma once

#include <math.h>
/* #include <complex.h> */

#if __POCC_STDC_VERSION__ < 201112L
#define __TGMATH_REAL(x,f,d,ld) \
    __generic__(x, float:f, default:d, long double:ld)
#else /* __POCC_STDC_VERSION__ >= 201112L */
#define __TGMATH_REAL(x,f,d,ld) \
    _Generic(x, float:f, default:d, long double:ld)
#endif /* __POCC_STDC_VERSION__ >= 201112L */

#define __TGMATH_REAL_BINARY(x,y,f,d,ld) \
    __TGMATH_REAL(x, \
        __TGMATH_REAL(y,  f,  d, ld), \
        __TGMATH_REAL(y,  d,  d, ld), \
        __TGMATH_REAL(y, ld, ld, ld))

#define __TGMATH_REAL_TERNARY(x,y,z,f,d,ld) \
    __TGMATH_REAL(x, \
        __TGMATH_REAL(y, \
            __TGMATH_REAL(z,  f,  d, ld), \
            __TGMATH_REAL(z,  d,  d, ld), \
            __TGMATH_REAL(z, ld, ld, ld)), \
        __TGMATH_REAL(y, \
            __TGMATH_REAL(z,  d,  d, ld), \
            __TGMATH_REAL(z,  d,  d, ld), \
            __TGMATH_REAL(z, ld, ld, ld)), \
        __TGMATH_REAL(y, \
            __TGMATH_REAL(z, ld, ld, ld), \
            __TGMATH_REAL(z, ld, ld, ld), \
            __TGMATH_REAL(z, ld, ld, ld)))

#define __TGMATH_UNARY_REAL(x,fn)  __TGMATH_REAL(x,fn##f,fn,fn##l)(x)
#define __TGMATH_BINARY_FIRST_REAL(x,y,fn)  __TGMATH_REAL(x,fn##f,fn,fn##l)(x,y)
#define __TGMATH_BINARY_REAL(x,y,fn)  __TGMATH_REAL_BINARY(x,y,fn##f,fn,fn##l)(x,y)
#define __TGMATH_TERNARY_FIRST_REAL(x,y,z,fn)  __TGMATH_REAL(x,fn##f,fn,fn##l)(x,y,z)
#define __TGMATH_TERNARY_FIRST_SECOND_REAL(x,y,z,fn)  __TGMATH_REAL_BINARY(x,y,fn##f,fn,fn##l)(x,y,z)
#define __TGMATH_TERNARY_REAL(x,y,z,fn)  __TGMATH_REAL_TERNARY(x,y,z,fn##f,fn,fn##l)(x,y,z)

/* trigonometric functions */
#undef acos
#undef asin
#undef atan
#undef atan2
#undef cos
#undef sin
#undef tan
#define acos(x)  __TGMATH_UNARY_REAL(x,acos)
#define asin(x)  __TGMATH_UNARY_REAL(x,asin)
#define atan(x)  __TGMATH_UNARY_REAL(x,atan)
#define atan2(x,y)  __TGMATH_BINARY_REAL(x,y,atan2)
#define cos(x)  __TGMATH_UNARY_REAL(x,cos)
#define sin(x)  __TGMATH_UNARY_REAL(x,sin)
#define tan(x)  __TGMATH_UNARY_REAL(x,tan)
#if __POCC_STDC_VERSION__ >= 202311L
#undef acospi
#undef asinpi
#undef atanpi
#undef atan2pi
#undef cospi
#undef sinpi
#undef tanpi
#define acospi(x)  __TGMATH_UNARY_REAL(x,acospi)
#define asinpi(x)  __TGMATH_UNARY_REAL(x,asinpi)
#define atanpi(x)  __TGMATH_UNARY_REAL(x,atanpi)
#define atan2pi(x)  __TGMATH_UNARY_REAL(x,atan2pi)
#define cospi(x)  __TGMATH_UNARY_REAL(x,cospi)
#define sinpi(x)  __TGMATH_UNARY_REAL(x,sinpi)
#define tanpi(x)  __TGMATH_UNARY_REAL(x,tanpi)
#endif /* __POCC_STDC_VERSION__ >= 202311L */

/* hyperbolic functions */
#undef acosh
#undef asinh
#undef atanh
#undef cosh
#undef sinh
#undef tanh
#define acosh(x)  __TGMATH_UNARY_REAL(x,acosh)
#define asinh(x)  __TGMATH_UNARY_REAL(x,asinh)
#define atanh(x)  __TGMATH_UNARY_REAL(x,atanh)
#define cosh(x)  __TGMATH_UNARY_REAL(x,cosh)
#define sinh(x)  __TGMATH_UNARY_REAL(x,sinh)
#define tanh(x)  __TGMATH_UNARY_REAL(x,tanh)

/* exponential and logarithmic functions */
#undef exp
#undef exp2
#undef expm1
#undef frexp
#undef ilogb
#undef ldexp
#undef log
#undef log10
#undef log1p
#undef log2
#undef logb
#undef scalbn
#undef scalbln
#define exp(x)  __TGMATH_UNARY_REAL(x,exp)
#define exp2(x)  __TGMATH_UNARY_REAL(x,exp2)
#define expm1(x)  __TGMATH_UNARY_REAL(x,expm1)
#define frexp(x,y)  __TGMATH_BINARY_FIRST_REAL(x,y,frexp)
#define ilogb(x)  __TGMATH_UNARY_REAL(x,ilogb)
#define ldexp(x,y)  __TGMATH_BINARY_FIRST_REAL(x,y,ldexp)
#define log(x)  __TGMATH_UNARY_REAL(x,log)
#define log10(x)  __TGMATH_UNARY_REAL(x,log10)
#define log1p(x)  __TGMATH_UNARY_REAL(x,log1p)
#define log2(x)  __TGMATH_UNARY_REAL(x,log2)
#define logb(x)  __TGMATH_UNARY_REAL(x,logb)
#define scalbn(x,y)  __TGMATH_BINARY_FIRST_REAL(x,y,scalbn)
#define scalbln(x,y)  __TGMATH_BINARY_FIRST_REAL(x,y,scalbln)

#if __POCC_STDC_VERSION__ >= 202311L
#undef exp10
/* TODO: #undef exp10m1 */
/* TODO: #undef exp2m1 */
#undef llogb
/* TODO: #undef log10p1 */
/* TODO: #undef logp1 */
/* TODO: #undef log2p1 */
#define exp10(x)  __TGMATH_UNARY_REAL(x,exp10)
/* TODO: #define exp10m1(x)  __TGMATH_UNARY_REAL(x,exp10m1) */
/* TODO: #define exp2m1(x)  __TGMATH_UNARY_REAL(x,exp2m1) */
#define llogb(x)  __TGMATH_UNARY_REAL(x,llogb)
/* TODO: #define log10p1(x)  __TGMATH_UNARY_REAL(x,log10p1) */
/* TODO: #define logp1(x)  __TGMATH_UNARY_REAL(x,logp1) */
/* TODO: #define log2p1(x)  __TGMATH_UNARY_REAL(x,log2p1) */
#endif /* __POCC_STDC_VERSION__ >= 202311L */

/* power and absolute-value functions */
#undef cbrt
#undef fabs
#undef hypot
#undef pow
#undef sqrt
#define cbrt(x)  __TGMATH_UNARY_REAL(x,cbrt)
#define fabs(x)  __TGMATH_UNARY_REAL(x,fabs)
#define hypot(x,y)  __TGMATH_BINARY_REAL(x,y,hypot)
#define pow(x,y)  __TGMATH_BINARY_REAL(x,y,pow)
#define sqrt(x)  __TGMATH_UNARY_REAL(x,sqrt)
#if __POCC_STDC_VERSION__ >= 202311L
/* TODO: #undef compoundn */
/* TODO: #undef pown */
/* TODO: #undef powr */
/* TODO: #undef rootn */
/* TODO: #undef rsqrt */
/* TODO: #define compoundn(x,y)  __TGMATH_BINARY_FIRST_REAL(x,y,compoundn) */
/* TODO: #define pown(x,y)  __TGMATH_BINARY_FIRST_REAL(x,y,pown) */
/* TODO: #define powr(x,y)  __TGMATH_BINARY_REAL(x,y,powr) */
/* TODO: #define rootn(x,y)  __TGMATH_BINARY_FIRST_REAL(x,y,rootn) */
/* TODO: #define rsqrt(x)  __TGMATH_UNARY_REAL(x,rsqrt) */
#endif /* __POCC_STDC_VERSION__ >= 202311L */

/* error and gamma functions */
#undef erf
#undef erfc
#undef lgamma
#undef tgamma
#define erf(x)  __TGMATH_UNARY_REAL(x,erf)
#define erfc(x)  __TGMATH_UNARY_REAL(x,erfc)
#define lgamma(x)  __TGMATH_UNARY_REAL(x,lgamma)
#define tgamma(x)  __TGMATH_UNARY_REAL(x,tgamma)

/* nearest integer functions */
#undef ceil
#undef floor
#undef nearbyint
#undef rint
#undef lrint
#undef llrint
#undef round
#undef lround
#undef llround
#undef trunc
#define ceil(x)  __TGMATH_UNARY_REAL(x,ceil)
#define floor(x)  __TGMATH_UNARY_REAL(x,floor)
#define nearbyint(x)  __TGMATH_UNARY_REAL(x,nearbyint)
#define rint(x)  __TGMATH_UNARY_REAL(x,rint)
#define lrint(x)  __TGMATH_UNARY_REAL(x,lrint)
#define llrint(x)  __TGMATH_UNARY_REAL(x,llrint)
#define round(x)  __TGMATH_UNARY_REAL(x,round)
#define lround(x)  __TGMATH_UNARY_REAL(x,lround)
#define llround(x)  __TGMATH_UNARY_REAL(x,llround)
#define trunc(x)  __TGMATH_UNARY_REAL(x,trunc)
#if __POCC_STDC_VERSION__ >= 202311L
#undef roundeven
#undef fromfp
#undef fromfpx
#undef ufromfp
#undef ufromfpx
#define roundeven(x)  __TGMATH_UNARY_REAL(x,roundeven)
#define fromfp(x,y,z)  __TGMATH_TERNARY_FIRST_REAL(x,y,z,fromfp)
#define fromfpx(x,y,z)  __TGMATH_TERNARY_FIRST_REAL(x,y,z,fromfpx)
#define ufromfp(x,y,z)  __TGMATH_TERNARY_FIRST_REAL(x,y,z,ufromfp)
#define ufromfpx(x,y,z)  __TGMATH_TERNARY_FIRST_REAL(x,y,z,ufromfpx)
#endif /* __POCC_STDC_VERSION__ >= 202311L */

/* remainder functions */
#undef fmod
#undef remainder
#undef remquo
#define fmod(x,y)  __TGMATH_BINARY_REAL(x,y,fmod)
#define remainder(x,y)  __TGMATH_BINARY_REAL(x,y,remainder)
#define remquo(x,y,z)  __TGMATH_TERNARY_FIRST_SECOND_REAL(x,y,z,remquo)

/* manipulation functions */
#undef copysign
#undef nextafter
#undef nexttoward
#define copysign(x,y)  __TGMATH_BINARY_REAL(x,y,copysign)
#define nextafter(x,y)  __TGMATH_BINARY_REAL(x,y,nextafter)
#define nexttoward(x,y)  __TGMATH_BINARY_FIRST_REAL(x,y,nexttoward)
#if __POCC_STDC_VERSION__ >= 202311L
#undef nextup
#undef nextdown
#define nextup(x)  __TGMATH_UNARY_REAL(x,nextup)
#define nextdown(x)  __TGMATH_UNARY_REAL(x,nextdown)
#endif /* __POCC_STDC_VERSION__ >= 202311L */

/* maximum, minimum, and positive difference functions */
#undef fdim
#undef fmax
#undef fmin
#define fdim(x,y)  __TGMATH_BINARY_REAL(x,y,fdim)
#define fmax(x,y)  __TGMATH_BINARY_REAL(x,y,fmax)
#define fmin(x,y)  __TGMATH_BINARY_REAL(x,y,fmin)
#if __POCC_STDC_VERSION__ >= 202311L
#undef fmaximum
#undef fminimum
#undef fmaximum_mag
#undef fminimum_mag
#undef fmaximum_num
#undef fminimum_num
#undef fmaximum_mag_num
#undef fminimum_mag_num
#define fmaximum(x,y)  __TGMATH_BINARY_REAL(x,y,fmaximum)
#define fminimum(x,y)  __TGMATH_BINARY_REAL(x,y,fminimum)
#define fmaximum_mag(x,y)  __TGMATH_BINARY_REAL(x,y,fmaximum_mag)
#define fminimum_mag(x,y)  __TGMATH_BINARY_REAL(x,y,fminimum_mag)
#define fmaximum_num(x,y)  __TGMATH_BINARY_REAL(x,y,fmaximum_num)
#define fminimum_num(x,y)  __TGMATH_BINARY_REAL(x,y,fminimum_num)
#define fmaximum_mag_num(x,y)  __TGMATH_BINARY_REAL(x,y,fmaximum_mag_num)
#define fminimum_mag_num(x,y)  __TGMATH_BINARY_REAL(x,y,fminimum_mag_num)
#endif /* __POCC_STDC_VERSION__ >= 202311L */

/* fused multiply-add */
#undef fma
#define fma(x,y,z)  __TGMATH_TERNARY_REAL(x,y,z,fma)

/* functions that round result to narrower type */
#if __POCC_STDC_VERSION__ >= 202311L
#undef fadd
#undef fsub
#undef fmul
#undef fdiv
#undef fsqrt
#undef dadd
#undef dsub
#undef dmul
#undef ddiv
#undef dsqrt
#define fadd(x,y)  __TGMATH_REAL_BINARY(x,y,fadd,fadd,faddl)(x,y)
#define fsub(x,y)  __TGMATH_REAL_BINARY(x,y,fsub,fsub,fsubl)(x,y)
#define fmul(x,y)  __TGMATH_REAL_BINARY(x,y,fmul,fmul,fmull)(x,y)
#define fdiv(x,y)  __TGMATH_REAL_BINARY(x,y,fdiv,fdiv,fdivl)(x,y)
#define fsqrt(x)  __TGMATH_REAL(x,fsqrt,fsqrt,fsqrtl)(x)
#define dadd  daddl
#define dsub  dsubl
#define dmul  dmull
#define ddiv  ddivl
#define dsqrt  dsqrtl
#endif /* __POCC_STDC_VERSION__ >= 202311L */

#if __POCC_STDC_VERSION__ >= 202311L
#define __STDC_VERSION_TGMATH_H__  202311L
#endif /* __POCC_STDC_VERSION__ >= 202311L */

#endif /* _TGMATH_H */
