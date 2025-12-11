#ifndef _STDBIT_H
#define _STDBIT_H

/* stdbit.h - standard header (C23) */

#ifndef RC_INVOKED

#if __POCC__ < 1200
#error <stdbit.h> need POCC version 12.0 or higher
#endif /* __POCC__ < 1200 */

#pragma once

#if __POCC_STDC_VERSION__ < 202311L

#error <stdbit.h> is not supported in C99/C11/C17 mode

#else /* __POCC_STDC_VERSION__ >= 202311L */

/* macros */
#define __STDC_ENDIAN_LITTLE__  1
#define __STDC_ENDIAN_BIG__  2
#define __STDC_ENDIAN_NATIVE__  __POCC_BYTE_ORDER__

/* type definitions */
#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
typedef __SIZE_TYPE__ size_t;
#endif /* _SIZE_T_DEFINED */

/* exact-width integer types */
typedef signed __int8 int8_t;
typedef signed __int16 int16_t;
typedef signed __int32 int32_t;
typedef signed __int64 int64_t;
typedef unsigned __int8 uint8_t;
typedef unsigned __int16 uint16_t;
typedef unsigned __int32 uint32_t;
typedef unsigned __int64 uint64_t;

/* minimum-width integer types */
typedef signed __int8 int_least8_t;
typedef signed __int16 int_least16_t;
typedef signed __int32 int_least32_t;
typedef signed __int64 int_least64_t;
typedef unsigned __int8 uint_least8_t;
typedef unsigned __int16 uint_least16_t;
typedef unsigned __int32 uint_least32_t;
typedef unsigned __int64 uint_least64_t;

/* Count Leading Zeros */
static __forceinline unsigned int __cdecl stdc_leading_zeros_uc(unsigned char value) { return __stdc_leading_zeros(value); }
static __forceinline unsigned int __cdecl stdc_leading_zeros_us(unsigned short value) { return __stdc_leading_zeros(value); }
static __forceinline unsigned int __cdecl stdc_leading_zeros_ui(unsigned int value) { return __stdc_leading_zeros(value); }
static __forceinline unsigned int __cdecl stdc_leading_zeros_ul(unsigned long value) { return __stdc_leading_zeros(value); }
static __forceinline unsigned int __cdecl stdc_leading_zeros_ull(unsigned long long value) { return (unsigned int)__stdc_leading_zeros(value); }
#define stdc_leading_zeros(X)  __stdc_leading_zeros(X)

/* Count Leading Ones */
static __forceinline unsigned int __cdecl stdc_leading_ones_uc(unsigned char value) { return __stdc_leading_ones(value); }
static __forceinline unsigned int __cdecl stdc_leading_ones_us(unsigned short value) { return __stdc_leading_ones(value); }
static __forceinline unsigned int __cdecl stdc_leading_ones_ui(unsigned int value) { return __stdc_leading_ones(value); }
static __forceinline unsigned int __cdecl stdc_leading_ones_ul(unsigned long value) { return __stdc_leading_ones(value); }
static __forceinline unsigned int __cdecl stdc_leading_ones_ull(unsigned long long value) { return (unsigned int)__stdc_leading_ones(value); }
#define stdc_leading_ones(X)  __stdc_leading_ones(X)

/* Count Trailing Zeros */
static __forceinline unsigned int __cdecl stdc_trailing_zeros_uc(unsigned char value) { return __stdc_trailing_zeros(value); }
static __forceinline unsigned int __cdecl stdc_trailing_zeros_us(unsigned short value) { return __stdc_trailing_zeros(value); }
static __forceinline unsigned int __cdecl stdc_trailing_zeros_ui(unsigned int value) { return __stdc_trailing_zeros(value); }
static __forceinline unsigned int __cdecl stdc_trailing_zeros_ul(unsigned long value) { return __stdc_trailing_zeros(value); }
static __forceinline unsigned int __cdecl stdc_trailing_zeros_ull(unsigned long long value) { return (unsigned int)__stdc_trailing_zeros(value); }
#define stdc_trailing_zeros(X)  __stdc_trailing_zeros(X)

/* Count Trailing Ones */
static __forceinline unsigned int __cdecl stdc_trailing_ones_uc(unsigned char value) { return __stdc_trailing_ones(value); }
static __forceinline unsigned int __cdecl stdc_trailing_ones_us(unsigned short value) { return __stdc_trailing_ones(value); }
static __forceinline unsigned int __cdecl stdc_trailing_ones_ui(unsigned int value) { return __stdc_trailing_ones(value); }
static __forceinline unsigned int __cdecl stdc_trailing_ones_ul(unsigned long value) { return __stdc_trailing_ones(value); }
static __forceinline unsigned int __cdecl stdc_trailing_ones_ull(unsigned long long value) { return (unsigned int)__stdc_trailing_ones(value); }
#define stdc_trailing_ones(X)  __stdc_trailing_ones(X)

/* First Leading Zero */
static __forceinline unsigned int __cdecl stdc_first_leading_zero_uc(unsigned char value) { return __stdc_first_leading_zero(value); }
static __forceinline unsigned int __cdecl stdc_first_leading_zero_us(unsigned short value) { return __stdc_first_leading_zero(value); }
static __forceinline unsigned int __cdecl stdc_first_leading_zero_ui(unsigned int value) { return __stdc_first_leading_zero(value); }
static __forceinline unsigned int __cdecl stdc_first_leading_zero_ul(unsigned long value) { return __stdc_first_leading_zero(value); }
static __forceinline unsigned int __cdecl stdc_first_leading_zero_ull(unsigned long long value) { return (unsigned int)__stdc_first_leading_zero(value); }
#define stdc_first_leading_zero(X)  __stdc_first_leading_zero(X)

/* First Leading One */
static __forceinline unsigned int __cdecl stdc_first_leading_one_uc(unsigned char value) { return __stdc_first_leading_one(value); }
static __forceinline unsigned int __cdecl stdc_first_leading_one_us(unsigned short value) { return __stdc_first_leading_one(value); }
static __forceinline unsigned int __cdecl stdc_first_leading_one_ui(unsigned int value) { return __stdc_first_leading_one(value); }
static __forceinline unsigned int __cdecl stdc_first_leading_one_ul(unsigned long value) { return __stdc_first_leading_one(value); }
static __forceinline unsigned int __cdecl stdc_first_leading_one_ull(unsigned long long value) { return (unsigned int)__stdc_first_leading_one(value); }
#define stdc_first_leading_one(X)  __stdc_first_leading_one(X)

/* First Trailing Zero */
static __forceinline unsigned int __cdecl stdc_first_trailing_zero_uc(unsigned char value) { return __stdc_first_trailing_zero(value); }
static __forceinline unsigned int __cdecl stdc_first_trailing_zero_us(unsigned short value) { return __stdc_first_trailing_zero(value); }
static __forceinline unsigned int __cdecl stdc_first_trailing_zero_ui(unsigned int value) { return __stdc_first_trailing_zero(value); }
static __forceinline unsigned int __cdecl stdc_first_trailing_zero_ul(unsigned long value) { return __stdc_first_trailing_zero(value); }
static __forceinline unsigned int __cdecl stdc_first_trailing_zero_ull(unsigned long long value) { return (unsigned int)__stdc_first_trailing_zero(value); }
#define stdc_first_trailing_zero(X)  __stdc_first_trailing_zero(X)

/* First Trailing One */
static __forceinline unsigned int __cdecl stdc_first_trailing_one_uc(unsigned char value) { return __stdc_first_trailing_one(value); }
static __forceinline unsigned int __cdecl stdc_first_trailing_one_us(unsigned short value) { return __stdc_first_trailing_one(value); }
static __forceinline unsigned int __cdecl stdc_first_trailing_one_ui(unsigned int value) { return __stdc_first_trailing_one(value); }
static __forceinline unsigned int __cdecl stdc_first_trailing_one_ul(unsigned long value) { return __stdc_first_trailing_one(value); }
static __forceinline unsigned int __cdecl stdc_first_trailing_one_ull(unsigned long long value) { return (unsigned int)__stdc_first_trailing_one(value); }
#define stdc_first_trailing_one(X)  __stdc_first_trailing_one(X)

/* Count Zeros */
static __forceinline unsigned int __cdecl stdc_count_zeros_uc(unsigned char value) { return __stdc_count_zeros(value); }
static __forceinline unsigned int __cdecl stdc_count_zeros_us(unsigned short value) { return __stdc_count_zeros(value); }
static __forceinline unsigned int __cdecl stdc_count_zeros_ui(unsigned int value) { return __stdc_count_zeros(value); }
static __forceinline unsigned int __cdecl stdc_count_zeros_ul(unsigned long value) { return __stdc_count_zeros(value); }
static __forceinline unsigned int __cdecl stdc_count_zeros_ull(unsigned long long value) { return (unsigned int)__stdc_count_zeros(value); }
#define stdc_count_zeros(X)  __stdc_count_zeros(X)

/* Count Ones */
static __forceinline unsigned int __cdecl stdc_count_ones_uc(unsigned char value) { return __stdc_count_ones(value); }
static __forceinline unsigned int __cdecl stdc_count_ones_us(unsigned short value) { return __stdc_count_ones(value); }
static __forceinline unsigned int __cdecl stdc_count_ones_ui(unsigned int value) { return __stdc_count_ones(value); }
static __forceinline unsigned int __cdecl stdc_count_ones_ul(unsigned long value) { return __stdc_count_ones(value); }
static __forceinline unsigned int __cdecl stdc_count_ones_ull(unsigned long long value) { return (unsigned int)__stdc_count_ones(value); }
#define stdc_count_ones(X)  __stdc_count_ones(X)

/* Single-bit Check */
static __forceinline bool __cdecl stdc_has_single_bit_uc(unsigned char value) {return __stdc_has_single_bit(value); }
static __forceinline bool __cdecl stdc_has_single_bit_us(unsigned short value) {return __stdc_has_single_bit(value); }
static __forceinline bool __cdecl stdc_has_single_bit_ui(unsigned int value) {return __stdc_has_single_bit(value); }
static __forceinline bool __cdecl stdc_has_single_bit_ul(unsigned long value) {return __stdc_has_single_bit(value); }
static __forceinline bool __cdecl stdc_has_single_bit_ull(unsigned long long value) {return __stdc_has_single_bit(value); }
#define stdc_has_single_bit(X)  __stdc_has_single_bit(X)

/* Bit Width */
static __forceinline unsigned int __cdecl stdc_bit_width_uc(unsigned char value) { return __stdc_bit_width(value); }
static __forceinline unsigned int __cdecl stdc_bit_width_us(unsigned short value) { return __stdc_bit_width(value); }
static __forceinline unsigned int __cdecl stdc_bit_width_ui(unsigned int value) { return __stdc_bit_width(value); }
static __forceinline unsigned int __cdecl stdc_bit_width_ul(unsigned long value) { return __stdc_bit_width(value); }
static __forceinline unsigned int __cdecl stdc_bit_width_ull(unsigned long long value) { return (unsigned int)__stdc_bit_width(value); }
#define stdc_bit_width(X)  __stdc_bit_width(X)

/* Bit Floor */
static __forceinline unsigned char __cdecl stdc_bit_floor_uc(unsigned char value) { return __stdc_bit_floor(value); }
static __forceinline unsigned short __cdecl stdc_bit_floor_us(unsigned short value) { return __stdc_bit_floor(value); }
static __forceinline unsigned int __cdecl stdc_bit_floor_ui(unsigned int value) { return __stdc_bit_floor(value); }
static __forceinline unsigned long __cdecl stdc_bit_floor_ul(unsigned long value) { return __stdc_bit_floor(value); }
static __forceinline unsigned long long __cdecl stdc_bit_floor_ull(unsigned long long value) { return __stdc_bit_floor(value); }
#define stdc_bit_floor(X)  __stdc_bit_floor(X)

/* Bit Ceiling */
static __forceinline unsigned char __cdecl stdc_bit_ceil_uc(unsigned char value) { return __stdc_bit_ceil(value); }
static __forceinline unsigned short __cdecl stdc_bit_ceil_us(unsigned short value) { return __stdc_bit_ceil(value); }
static __forceinline unsigned int __cdecl stdc_bit_ceil_ui(unsigned int value) { return __stdc_bit_ceil(value); }
static __forceinline unsigned long __cdecl stdc_bit_ceil_ul(unsigned long value) { return __stdc_bit_ceil(value); }
static __forceinline unsigned long long __cdecl stdc_bit_ceil_ull(unsigned long long value) { return __stdc_bit_ceil(value); }
#define stdc_bit_ceil(X)  __stdc_bit_ceil(X)

#define __STDC_VERSION_STDBIT_H__  202311L

#endif /* __POCC_STDC_VERSION__ >= 202311L */

#endif /* !RC_INVOKED */

#endif /* _STDBIT_H */
