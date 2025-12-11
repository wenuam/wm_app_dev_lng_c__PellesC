#ifndef _INTRIN_H
#define _INTRIN_H

/* intrin.h - private header for compiler intrinsic functions */

#ifndef RC_INVOKED

#if __POCC__ < 1000
#error <intrin.h> need POCC version 10.0 or higher
#endif /* __POCC__ < 1000 */

#pragma once

#include <crtdef.h>

#if (__POCC_TARGET__ == 1 || __POCC_TARGET__ == 3)
#include <x86intrin.h>
#include <zmmintrin.h>
#endif /* (__POCC_TARGET__ == 1 || __POCC_TARGET__ == 3) */

#if __POCC_TARGET__ == 4
#include <arm64_intr.h>
/* TODO: #include <arm64_neon.h> */
#endif /* __POCC_TARGET__ == 4 */

/* type definitions */
#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
typedef __SIZE_TYPE__ size_t;
#endif /* _SIZE_T_DEFINED */

#ifndef _WCHAR_T_DEFINED
#define _WCHAR_T_DEFINED
typedef __WCHAR_TYPE__ wchar_t;
#endif /* _WCHAR_T_DEFINED */

/* data declarations */
#if defined(_IMAGE_DOS_HEADER_DEFINED)
extern IMAGE_DOS_HEADER __ImageBase;
#endif /* defined(_IMAGE_DOS_HEADER_DEFINED) */

/* declarations */
extern _CRTIMP size_t __cdecl strlen(const char *);
extern _CRTIMP char * __cdecl strcpy(char * restrict, const char * restrict);
extern _CRTIMP int __cdecl strcmp(const char *, const char *);
extern _CRTIMP void * __cdecl memcpy(void * restrict, const void * restrict, size_t);
extern _CRTIMP void * __cdecl memset(void *, int, size_t);
extern _CRTIMP size_t __cdecl wcslen(const wchar_t *);
extern _CRTIMP wchar_t * __cdecl wcscpy(wchar_t * restrict, const wchar_t * restrict);
extern _CRTIMP wchar_t * __cdecl wmemcpy(wchar_t * restrict, const wchar_t * restrict, size_t);
extern _CRTIMP wchar_t * __cdecl wmemset(wchar_t *, wchar_t, size_t);

/* bounds-checking interfaces (TR24731-1, C11 annex K) */
#if __STDC_WANT_LIB_EXT1__
#if __POCC_TARGET__ == 3
extern _CRTIMP size_t __cdecl strnlen_s(const char *, size_t);
extern _CRTIMP size_t __cdecl wcsnlen_s(const wchar_t *, size_t);
#endif /* __POCC_TARGET__ == 3 */
#endif /* __STDC_WANT_LIB_EXT1__ */

extern _CRTIMP int __cdecl abs(int);
extern _CRTIMP long __cdecl labs(long);
extern _CRTIMP long long __cdecl llabs(long long);
extern _CRTIMP double __cdecl fabs(double);
extern _CRTIMP float __cdecl fabsf(float);
extern _CRTIMP long double __cdecl fabsl(long double);

#if __POCC_TARGET__ == 1
extern _CRTIMP double __cdecl atan(double);
extern _CRTIMP float __cdecl atanf(float);
extern _CRTIMP long double __cdecl atanl(long double);
extern _CRTIMP double __cdecl atan2(double, double);
extern _CRTIMP float __cdecl atan2f(float, float);
extern _CRTIMP long double __cdecl atan2l(long double, long double);
extern _CRTIMP double __cdecl cos(double);
extern _CRTIMP float __cdecl cosf(float);
extern _CRTIMP long double __cdecl cosl(long double);
extern _CRTIMP double __cdecl sin(double);
extern _CRTIMP float __cdecl sinf(float);
extern _CRTIMP long double __cdecl sinl(long double);
extern _CRTIMP double __cdecl tan(double);
extern _CRTIMP float __cdecl tanf(float);
extern _CRTIMP long double __cdecl tanl(long double);
extern _CRTIMP double __cdecl exp(double);
extern _CRTIMP float __cdecl expf(float);
extern _CRTIMP long double __cdecl expl(long double);
extern _CRTIMP double __cdecl log(double);
extern _CRTIMP float __cdecl logf(float);
extern _CRTIMP long double __cdecl logl(long double);
extern _CRTIMP double __cdecl log10(double);
extern _CRTIMP float __cdecl log10f(float);
extern _CRTIMP long double __cdecl log10l(long double);
extern _CRTIMP double __cdecl log2(double);
extern _CRTIMP float __cdecl log2f(float);
extern _CRTIMP long double __cdecl log2l(long double);
extern _CRTIMP double __cdecl logb(double);
extern _CRTIMP float __cdecl logbf(float);
extern _CRTIMP long double __cdecl logbl(long double);
extern _CRTIMP double __cdecl nearbyint(double);
extern _CRTIMP float __cdecl nearbyintf(float);
extern _CRTIMP long double __cdecl nearbyintl(long double);
extern _CRTIMP long __cdecl lrint(double);
extern _CRTIMP long __cdecl lrintf(float);
extern _CRTIMP long __cdecl lrintl(long double);
extern _CRTIMP long long __cdecl llrint(double);
extern _CRTIMP long long __cdecl llrintf(float);
extern _CRTIMP long long __cdecl llrintl(long double);
extern _CRTIMP double __cdecl fmod(double, double);
extern _CRTIMP float __cdecl fmodf(float, float);
extern _CRTIMP long double __cdecl fmodl(long double, long double);
extern _CRTIMP double __cdecl remainder(double, double);
extern _CRTIMP float __cdecl remainderf(float, float);
extern _CRTIMP long double __cdecl remainderl(long double, long double);
#endif /* __POCC_TARGET__ == 1 */

extern _CRTIMP double __cdecl sqrt(double);
extern _CRTIMP float __cdecl sqrtf(float);
extern _CRTIMP long double __cdecl sqrtl(long double);

#if (__POCC_TARGET__ == 3 || __POCC_TARGET__ == 4)
extern _CRTIMP double __cdecl fmax(double, double);
extern _CRTIMP double __cdecl fmin(double, double);
extern _CRTIMP float __cdecl fmaxf(float, float);
extern _CRTIMP float __cdecl fminf(float, float);
extern _CRTIMP long double __cdecl fmaxl(long double, long double);
extern _CRTIMP long double __cdecl fminl(long double, long double);
#endif /* (__POCC_TARGET__ == 3 || __POCC_TARGET__ == 4) */

extern _CRTIMP unsigned long long __cdecl _llrotl(unsigned long long, int);
extern _CRTIMP unsigned long long __cdecl _llrotr(unsigned long long, int);
extern _CRTIMP unsigned long __cdecl _lrotl(unsigned long, int);
extern _CRTIMP unsigned long __cdecl _lrotr(unsigned long, int);
extern _CRTIMP unsigned int __cdecl _rotl(unsigned int, int);
extern _CRTIMP unsigned int __cdecl _rotr(unsigned int, int);

extern _CRTIMP int __cdecl _ffs(int);

extern _CRTIMP unsigned int __cdecl _bswap(unsigned int);
extern _CRTIMP unsigned short __cdecl _bswap16(unsigned short);
extern _CRTIMP unsigned long long __cdecl _bswap64(unsigned long long);
#ifdef _MSC_EXTENSIONS
extern unsigned short __cdecl _byteswap_ushort(unsigned short);
extern unsigned long __cdecl _byteswap_ulong(unsigned long);
extern unsigned __int64 __cdecl _byteswap_uint64(unsigned __int64);
#endif /* _MSC_EXTENSIONS */

extern _CRTUSE _CRTMEM void * __cdecl _alloca(size_t);

extern void __cdecl __nop(void);
extern void __cdecl __debugbreak(void);

extern void __cdecl __memory_barrier(void);
#if __POCC_TARGET__ != 4
#pragma deprecated(__memory_barrier)
#endif /* __POCC_TARGET__ != 4 */

#ifdef _MSC_EXTENSIONS
#pragma deprecated(_ReadWriteBarrier)
#pragma deprecated(_ReadBarrier)
#pragma deprecated(_WriteBarrier)
#undef  _ReadWriteBarrier
#define _ReadWriteBarrier  __memory_barrier
#undef _ReadBarrier
#define _ReadBarrier  __memory_barrier
#undef _WriteBarrier
#define _WriteBarrier  __memory_barrier
#endif /* _MSC_EXTENSIONS */

extern unsigned char __cdecl _bittest(const long *, long);
extern unsigned char __cdecl _bittestandcomplement(long *, long);
extern unsigned char __cdecl _bittestandset(long *, long);
extern unsigned char __cdecl _bittestandreset(long *, long);
#if (__POCC_TARGET__ == 3 || __POCC_TARGET__ == 4)
extern unsigned char __cdecl _bittest64(const long long *, long long);
extern unsigned char __cdecl _bittestandcomplement64(long long *, long long);
extern unsigned char __cdecl _bittestandset64(long long *, long long);
extern unsigned char __cdecl _bittestandreset64(long long *, long long);
#endif /* (__POCC_TARGET__ == 3 || __POCC_TARGET__ == 4) */

#if (__POCC_TARGET__ == 3)
extern unsigned __int8 __cdecl __sat_add_u8(unsigned __int8, unsigned __int8);
extern unsigned __int16 __cdecl __sat_add_u16(unsigned __int16, unsigned __int16);
extern unsigned __int32 __cdecl __sat_add_u32(unsigned __int32, unsigned __int32);
extern unsigned __int64 __cdecl __sat_add_u64(unsigned __int64, unsigned __int64);
extern unsigned __int8 __cdecl __sat_sub_u8(unsigned __int8, unsigned __int8);
extern unsigned __int16 __cdecl __sat_sub_u16(unsigned __int16, unsigned __int16);
extern unsigned __int32 __cdecl __sat_sub_u32(unsigned __int32, unsigned __int32);
extern unsigned __int64 __cdecl __sat_sub_u64(unsigned __int64, unsigned __int64);
#ifdef _MSC_EXTENSIONS
extern unsigned __int8 __cdecl _sat_add_u8(unsigned __int8, unsigned __int8);
extern unsigned __int16 __cdecl _sat_add_u16(unsigned __int16, unsigned __int16);
extern unsigned __int32 __cdecl _sat_add_u32(unsigned __int32, unsigned __int32);
extern unsigned __int64 __cdecl _sat_add_u64(unsigned __int64, unsigned __int64);
extern unsigned __int8 __cdecl _sat_sub_u8(unsigned __int8, unsigned __int8);
extern unsigned __int16 __cdecl _sat_sub_u16(unsigned __int16, unsigned __int16);
extern unsigned __int32 __cdecl _sat_sub_u32(unsigned __int32, unsigned __int32);
extern unsigned __int64 __cdecl _sat_sub_u64(unsigned __int64, unsigned __int64);
#endif /* _MSC_EXTENSIONS */
#endif /* (__POCC_TARGET__ == 3) */

#endif /* !RC_INVOKED */

#endif /* _INTRIN_H */
