#ifndef _X86INTRIN_H
#define _X86INTRIN_H

/* x86intrin.h - private header for X86/X64 compiler intrinsic functions */

#if __POCC__ < 1300
#error <x86intrin.h> need POCC version 13.0 or higher
#endif /* __POCC__ < 1300 */

#pragma once

#if (__POCC_TARGET__ != 1 && __POCC_TARGET__ != 3)
#error <x86intrin.h> can only be used with X86/X64 target
#endif /* __POCC_TARGET__ != 1 && __POCC_TARGET__ != 3 */

/* type definitions */
#ifndef _SIZE_T_DEFINED
#define _SIZE_T_DEFINED
typedef __SIZE_TYPE__ size_t;
#endif /* _SIZE_T_DEFINED */

extern unsigned __int8 __cdecl _rotl8(unsigned __int8, unsigned __int8);
extern unsigned __int8 __cdecl _rotr8(unsigned __int8, unsigned __int8);
extern unsigned __int16 __cdecl _rotl16(unsigned __int16, unsigned __int8);
extern unsigned __int16 __cdecl _rotr16(unsigned __int16, unsigned __int8);
extern unsigned __int32 __cdecl _rotl32(unsigned __int32, unsigned __int8);
extern unsigned __int32 __cdecl _rotr32(unsigned __int32, unsigned __int8);
#if __POCC_TARGET__ == 3
#ifdef _MSC_EXTENSIONS
extern unsigned __int64 __cdecl _rotl64(unsigned __int64, int);
extern unsigned __int64 __cdecl _rotr64(unsigned __int64, int);
#else /* !_MSC_EXTENSIONS */
extern unsigned __int64 __cdecl _rotl64(unsigned __int64, unsigned __int8);
extern unsigned __int64 __cdecl _rotr64(unsigned __int64, unsigned __int8);
#endif /* !_MSC_EXTENSIONS */
#endif /* __POCC_TARGET__ == 3 */

extern unsigned char __cdecl _BitScanForward(unsigned long *, unsigned long);
extern unsigned char __cdecl _BitScanReverse(unsigned long *, unsigned long);
extern unsigned long __cdecl _bit_scan_forward(unsigned long);
extern unsigned long __cdecl _bit_scan_reverse(unsigned long);
#if __POCC_TARGET__ == 3
extern unsigned char __cdecl _BitScanForward64(unsigned long *, unsigned long long);
extern unsigned char __cdecl _BitScanReverse64(unsigned long *, unsigned long long);
extern unsigned long long __cdecl _bit_scan_forward64(unsigned long long);
extern unsigned long long __cdecl _bit_scan_reverse64(unsigned long long);
#endif /* __POCC_TARGET__ == 3 */

#if __POCC_TARGET__ == 3
extern unsigned __int64 __cdecl __shiftleft128(unsigned __int64, unsigned __int64, unsigned char);
extern unsigned __int64 __cdecl __shiftright128(unsigned __int64, unsigned __int64, unsigned char);
extern __int64 __cdecl __mulh64(__int64, __int64);
extern unsigned __int64 __cdecl __umulh64(unsigned __int64, unsigned __int64);
#ifdef _MSC_EXTENSIONS
extern __int64 __cdecl __mulh(__int64, __int64);
extern unsigned __int64 __cdecl __umulh(unsigned __int64, unsigned __int64);
#endif /* _MSC_EXTENSIONS */
extern __int64 __cdecl __mul128(__int64, __int64, __int64 *);
extern unsigned __int64 __cdecl __umul128(unsigned __int64, unsigned __int64, unsigned __int64 *);
extern __int64 __cdecl __div128(__int64, __int64, __int64, __int64 *);
extern unsigned __int64 __cdecl __udiv128(unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64 *);
#ifdef _MSC_EXTENSIONS
extern __int64 __cdecl _mul128(__int64, __int64, __int64 *);
extern unsigned __int64 __cdecl _umul128(unsigned __int64, unsigned __int64, unsigned __int64 *);
extern __int64 __cdecl _div128(__int64, __int64, __int64, __int64 *);
extern unsigned __int64 __cdecl _udiv128(unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64 *);
#endif /* _MSC_EXTENSIONS */
#endif /* __POCC_TARGET__ == 3 */

extern void __cdecl __int2c(void);
extern void * __cdecl _ReturnAddress(void);
extern void * __cdecl _AddressOfReturnAddress(void);
extern void __cdecl __fastfail(unsigned int);

extern void __cdecl _cpuid(int *, int);
extern void __cdecl _cpuidex(int *, int, int);
#ifdef _MSC_EXTENSIONS
extern void __cdecl __cpuid(int *, int);
extern void __cdecl __cpuidex(int *, int, int);
#endif /* _MSC_EXTENSIONS */
extern int __cdecl _inp(unsigned short);
extern unsigned short __cdecl _inpw(unsigned short);
extern unsigned long __cdecl _inpd(unsigned short);
extern int __cdecl _outp(unsigned short, int);
extern unsigned short __cdecl _outpw(unsigned short, unsigned short);
extern unsigned long __cdecl _outpd(unsigned short, unsigned long);
extern unsigned long long __cdecl _rdtsc(void);
#ifdef _MSC_EXTENSIONS
extern unsigned __int64 __cdecl __rdtsc(void);
#endif /* _MSC_EXTENSIONS */
extern unsigned long long __cdecl __rdtscp(unsigned int *);
extern void __cdecl _enable(void);
extern void __cdecl _disable(void);
extern unsigned long long __cdecl __readpmc(unsigned long);
extern unsigned long __cdecl __segmentlimit(unsigned long);

extern unsigned char __cdecl _interlockedbittestandset(volatile long *, long);
extern unsigned char __cdecl _interlockedbittestandreset(volatile long *, long);
extern short __cdecl _InterlockedExchange16(short volatile *, short);
extern short __cdecl _InterlockedIncrement16(short volatile *);
extern short __cdecl _InterlockedDecrement16(short volatile *);
extern short __cdecl _InterlockedCompareExchange16(volatile short *, short, short);
extern short __cdecl _InterlockedAnd16(short volatile *, short);
extern short __cdecl _InterlockedOr16(short volatile *, short);
extern short __cdecl _InterlockedXor16(short volatile *, short);
extern long __cdecl _InterlockedExchange(long volatile *, long);
extern long __cdecl _InterlockedExchangeAdd(long volatile *, long);
extern void * __cdecl _InterlockedExchangePointer(void * volatile *, void *);
extern long __cdecl _InterlockedIncrement(long volatile *);
extern long __cdecl _InterlockedDecrement(long volatile *);
extern long __cdecl _InterlockedCompareExchange(volatile long *, long, long);
extern void * __cdecl _InterlockedCompareExchangePointer(void * volatile *, void *, void *);
extern long __cdecl _InterlockedAnd(long volatile *, long);
extern long __cdecl _InterlockedOr(long volatile *, long);
extern long __cdecl _InterlockedXor(long volatile *, long);
#if __POCC_TARGET__ == 3
extern unsigned char __cdecl _interlockedbittestandset64(volatile long long *, long long);
extern unsigned char __cdecl _interlockedbittestandreset64(volatile long long *, long long);
extern long long __cdecl _InterlockedExchange64(long long volatile *, long long);
extern long long __cdecl _InterlockedExchangeAdd64(long long volatile *, long long);
extern long long __cdecl _InterlockedIncrement64(long long volatile *);
extern long long __cdecl _InterlockedDecrement64(long long volatile *);
extern long long __cdecl _InterlockedCompareExchange64(volatile long long *, long long, long long);
extern unsigned char __cdecl _InterlockedCompareExchange128(volatile long long *, long long, long long, long long *);
extern long long __cdecl _InterlockedAnd64(long long volatile *, long long);
extern long long __cdecl _InterlockedOr64(long long volatile *, long long);
extern long long __cdecl _InterlockedXor64(long long volatile *, long long);
#endif /* __POCC_TARGET__ == 3 */

extern void __cdecl __movsb(unsigned char *, const unsigned char *, size_t);
extern void __cdecl __movsw(unsigned short *, const unsigned short *, size_t);
extern void __cdecl __movsd(unsigned long *, const unsigned long *, size_t);
extern void __cdecl __stosb(unsigned char *, unsigned char, size_t);
extern void __cdecl __stosw(unsigned short *, unsigned short, size_t);
extern void __cdecl __stosd(unsigned long *, unsigned long, size_t);
#if __POCC_TARGET__ == 3
extern void __cdecl __movsq(unsigned long long *, const unsigned long long *, size_t);
extern void __cdecl __stosq(unsigned long long *, unsigned long long, size_t);
#endif /* __POCC_TARGET__ == 3 */

#if __POCC_TARGET__ == 1
extern unsigned char __cdecl __readfsbyte(unsigned long);
extern unsigned short __cdecl __readfsword(unsigned long);
extern unsigned long __cdecl __readfsdword(unsigned long);
extern void __cdecl __writefsbyte(unsigned long, unsigned char);
extern void __cdecl __writefsword(unsigned long, unsigned short);
extern void __cdecl __writefsdword(unsigned long, unsigned long);
#elif __POCC_TARGET__ == 3
extern unsigned char __cdecl __readgsbyte(unsigned long);
extern unsigned short __cdecl __readgsword(unsigned long);
extern unsigned long __cdecl __readgsdword(unsigned long);
extern unsigned long long __cdecl __readgsqword(unsigned long);
extern void __cdecl __writegsbyte(unsigned long, unsigned char);
extern void __cdecl __writegsword(unsigned long, unsigned short);
extern void __cdecl __writegsdword(unsigned long, unsigned long);
extern void __cdecl __writegsqword(unsigned long, unsigned long long);
#endif /* __POCC_TARGET__ */

/* "somewhere else" */
extern void __cdecl _m_prefetchw(const void *);

#if __POCC_TARGET__ == 3
extern void __cdecl __faststorefence(void);
#endif /* __POCC_TARGET__ == 3 */

enum {  /* internal use only */
    _X86_REG_EAX = 0,
    _X86_REG_ECX = 1,
    _X86_REG_EDX = 2,
    _X86_REG_EBX = 3,
    _X86_REG_ESP = 4,
    _X86_REG_EBP = 5,
    _X86_REG_ESI = 6,
    _X86_REG_EDI = 7,
};

enum {  /* internal use only */
    _X64_REG_RAX = 0,
    _X64_REG_RCX = 1,
    _X64_REG_RDX = 2,
    _X64_REG_RBX = 3,
    _X64_REG_RSP = 4,
    _X64_REG_RBP = 5,
    _X64_REG_RSI = 6,
    _X64_REG_RDI = 7,
    _X64_REG_R8 = 8,
    _X64_REG_R9 = 9,
    _X64_REG_R10 = 10,
    _X64_REG_R11 = 11,
    _X64_REG_R12 = 12,
    _X64_REG_R13 = 13,
    _X64_REG_R14 = 14,
    _X64_REG_R15 = 15,
};

#if __POCC_TARGET__ == 1
extern unsigned __int32 __cdecl __getflags(void);
extern unsigned __int32 __cdecl __getreg(const int);  /* internal use only */
#ifdef _MSC_EXTENSIONS
extern unsigned __int32 __cdecl __readeflags(void);
#endif /* _MSC_EXTENSIONS */
#elif __POCC_TARGET__ == 3
extern unsigned __int64 __cdecl __getflags(void);
extern unsigned __int64 __cdecl __getreg(const int);  /* internal use only */
#ifdef _MSC_EXTENSIONS
extern unsigned __int64 __cdecl __readeflags(void);
#endif /* _MSC_EXTENSIONS */
#endif /* __POCC_TARGET__ */

#endif /* _X86INTRIN_H */
