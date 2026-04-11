#ifndef _ARM64_INTR_H
#define _ARM64_INTR_H

/* arm64_intr.h - private header for ARM64 compiler intrinsic functions */

#if __POCC__ < 1400
#error <arm64_intr.h> need POCC version 14.0 or higher
#endif /* __POCC__ < 1400 */

#pragma once

#if __POCC_TARGET__ != 4
#error <arm64_intr.h> can only be used with ARM64 target
#endif /* __POCC_TARGET__ != 4 */

#define ARM64_SYSREG(op0, op1, crn, crm, op2) \
    (((op0 &  1) << 14) | \
     ((op1 &  7) << 11) | \
     ((crn & 15) <<  7) | \
     ((crm & 15) <<  3) | \
     ((op2 &  7) <<  0))

#define ARM64_FPCR  ARM64_SYSREG(3, 3, 4, 4, 0)  /* floating-point control register (EL0) */
#define ARM64_FPSR  ARM64_SYSREG(3, 3, 4, 4, 1)  /* floating-point status register (EL0) */

/* limitations for __dmb(), __dsb(), __isb() */
#define _ARM64_BARRIER_SY     0xF
#define _ARM64_BARRIER_ST     0xE
#define _ARM64_BARRIER_LD     0xD
#define _ARM64_BARRIER_ISH    0xB
#define _ARM64_BARRIER_ISHST  0xA
#define _ARM64_BARRIER_ISHLD  0x9
#define _ARM64_BARRIER_NSH    0x7
#define _ARM64_BARRIER_NSHST  0x6
#define _ARM64_BARRIER_NSHLD  0x5
#define _ARM64_BARRIER_OSH    0x3
#define _ARM64_BARRIER_OSHST  0x2
#define _ARM64_BARRIER_OSHLD  0x1

#ifdef _MSC_EXTENSIONS
extern __int8 __cdecl __iso_volatile_load8(const volatile __int8 *);
extern __int16 __cdecl __iso_volatile_load16(const volatile __int16 *);
extern __int32 __cdecl __iso_volatile_load32(const volatile __int32 *);
extern __int64 __cdecl __iso_volatile_load64(const volatile __int64 *);
#endif /* _MSC_EXTENSIONS */

#ifdef _MSC_EXTENSIONS
extern void __cdecl __iso_volatile_store8(volatile __int8 *, __int8);
extern void __cdecl __iso_volatile_store16(volatile __int16 *, __int16);
extern void __cdecl __iso_volatile_store32(volatile __int32 *, __int32);
extern void __cdecl __iso_volatile_store64(volatile __int64 *, __int64);
#endif /* _MSC_EXTENSIONS */

extern void __cdecl __dmb(const unsigned int);  /* data memory barrier */
extern void __cdecl __dsb(const unsigned int);  /* data synchronization barrier */
extern void __cdecl __isb(const unsigned int);  /* instruction synchronization barrier */

extern void __cdecl __prefetch(const void *);
extern void __cdecl __prefetch2(const void *, const unsigned __int8);

extern void __cdecl __yield(void);

extern void __cdecl __wfe(void);
extern void __cdecl __wfi(void);

extern void __cdecl __break(const int);

/* TODO(?): extern unsigned int __hlt(const unsigned int, ...); */

extern void __cdecl __fastfail(unsigned int);

extern __int64 __cdecl __readsysreg(const int);
extern void __cdecl __writesysreg(const int, __int64);
#ifdef _MSC_EXTENSIONS
extern __int64 __cdecl _ReadStatusReg(const int);
extern void __cdecl _WriteStatusReg(const int, __int64);
#endif /* _MSC_EXTENSIONS */

/*extern unsigned int __cdecl __sys(const int, __int64);*/
extern void __cdecl __sys(const int, __int64);

extern unsigned char __cdecl __readx18byte(unsigned long);
extern unsigned short __cdecl __readx18word(unsigned long);
extern unsigned long __cdecl __readx18dword(unsigned long);
extern unsigned long long __cdecl __readx18qword(unsigned long);
extern void __cdecl __writex18byte(unsigned long, unsigned char);
extern void __cdecl __writex18word(unsigned long, unsigned short);
extern void __cdecl __writex18dword(unsigned long, unsigned long);
extern void __cdecl __writex18qword(unsigned long, unsigned long long);

extern void __cdecl __addx18byte(unsigned long, unsigned char);
extern void __cdecl __addx18word(unsigned long, unsigned short);
extern void __cdecl __addx18dword(unsigned long, unsigned long);
extern void __cdecl __addx18qword(unsigned long, unsigned long long);

extern void __cdecl __incx18byte(unsigned long);
extern void __cdecl __incx18word(unsigned long);
extern void __cdecl __incx18dword(unsigned long);
extern void __cdecl __incx18qword(unsigned long);

extern unsigned char __cdecl _interlockedbittestandset(volatile long *, long);
extern unsigned char __cdecl _interlockedbittestandreset(volatile long *, long);
extern unsigned char __cdecl _interlockedbittestandset64(volatile long long *, long long);
extern unsigned char __cdecl _interlockedbittestandreset64(volatile long long *, long long);

extern long __cdecl _InterlockedCompareExchange(volatile long *, long, long);
extern long long __cdecl _InterlockedCompareExchange64(volatile long long *, long long, long long);
extern void * __cdecl _InterlockedCompareExchangePointer(void * volatile *, void *, void *);
extern long __cdecl _InterlockedExchange(long volatile *, long);
extern long long __cdecl _InterlockedExchange64(long long volatile *, long long);
extern void * __cdecl _InterlockedExchangePointer(void * volatile *, void *);
extern long __cdecl _InterlockedExchangeAdd(long volatile *, long);
extern long long __cdecl _InterlockedExchangeAdd64(long long volatile *, long long);
extern long __cdecl _InterlockedIncrement(long volatile *);
extern long long __cdecl _InterlockedIncrement64(long long volatile *);
extern long __cdecl _InterlockedDecrement(long volatile *);
extern long long __cdecl _InterlockedDecrement64(long long volatile *);
/* extern long __cdecl _InterlockedAnd(long volatile *, long); */
/* extern long long __cdecl _InterlockedAnd64(long long volatile *, long long); */
/* extern long __cdecl _InterlockedOr(long volatile *, long); */
/* extern long long __cdecl _InterlockedOr64(long long volatile *, long long); */
/* extern long __cdecl _InterlockedXor(long volatile *, long); */
/* extern long long __cdecl _InterlockedXor64(long long volatile *, long long); */

extern unsigned __int32 __cdecl __clz32(unsigned __int32);
extern unsigned __int64 __cdecl __clz64(unsigned __int64);
extern unsigned __int32 __cdecl __ctz32(unsigned __int32);
extern unsigned __int64 __cdecl __ctz64(unsigned __int64);
#ifdef _MSC_EXTENSIONS
#define _CountLeadingZeros(x)     (unsigned int)__clz32(x)
#define _CountLeadingZeros64(x)   (unsigned int)__clz64(x)
#define _CountTrailingZeros(x)    (unsigned int)__ctz32(x)
#define _CountTrailingZeros64(x)  (unsigned int)__ctz64(x)
#endif /* _MSC_EXTENSIONS */

extern unsigned __int32 __cdecl __cls32(__int32);
extern unsigned __int64 __cdecl __cls64(__int64);
#ifdef _MSC_EXTENSIONS
#define _CountLeadingSigns(x)    (unsigned int)__cls32(x)
#define _CountLeadingSigns64(x)  (unsigned int)__cls64(x)
#endif /* _MSC_EXTENSIONS */

extern unsigned __int32 __cdecl __crc32b(unsigned __int32, unsigned __int32);
extern unsigned __int32 __cdecl __crc32h(unsigned __int32, unsigned __int32);
extern unsigned __int32 __cdecl __crc32w(unsigned __int32, unsigned __int32);
extern unsigned __int32 __cdecl __crc32d(unsigned __int32, unsigned __int64);
extern unsigned __int32 __cdecl __crc32cb(unsigned __int32, unsigned __int32);
extern unsigned __int32 __cdecl __crc32ch(unsigned __int32, unsigned __int32);
extern unsigned __int32 __cdecl __crc32cw(unsigned __int32, unsigned __int32);
extern unsigned __int32 __cdecl __crc32cd(unsigned __int32, unsigned __int64);

extern unsigned __int32 __cdecl __rbit32(unsigned __int32);
extern unsigned __int64 __cdecl __rbit64(unsigned __int64);
#ifdef _MSC_EXTENSIONS
extern unsigned __int32 __cdecl __rbit(unsigned __int32);
extern unsigned __int64 __cdecl __rbitll(unsigned __int64);
#endif /* _MSC_EXTENSIONS */

extern __int64 __cdecl __mulh64(__int64, __int64);
extern unsigned __int64 __cdecl __umulh64(unsigned __int64, unsigned __int64);
#ifdef _MSC_EXTENSIONS
extern __int64 __cdecl __mulh(__int64, __int64);
extern unsigned __int64 __cdecl __umulh(unsigned __int64, unsigned __int64);
#endif /* _MSC_EXTENSIONS */

extern unsigned __int64 __cdecl __getreg(const int);  /* internal use only */
#ifdef _MSC_EXTENSIONS
extern unsigned __int64 __cdecl __getReg(const int);
extern double __cdecl __getRegFp(const int);
extern void __cdecl __setReg(const int, unsigned __int64);
extern void __cdecl __setRegFp(const int, double);
/* TODO(?): unsigned __int64 __getCallerReg(const int); */
/* TODO(?): double __getCallerRegFp(const int); */
/* TODO(?): void __setCallerReg(int, unsigned __int64); */
/* TODO(?): void __setCallerRegFp(int, double); */
#endif /* _MSC_EXTENSIONS */

extern unsigned __int32 __cdecl __sat_add_u32(unsigned __int32, unsigned __int32);
extern unsigned __int64 __cdecl __sat_add_u64(unsigned __int64, unsigned __int64);
extern unsigned __int32 __cdecl __sat_sub_u32(unsigned __int32, unsigned __int32);
extern unsigned __int64 __cdecl __sat_sub_u64(unsigned __int64, unsigned __int64);
#ifdef _MSC_EXTENSIONS
extern unsigned __int32 __cdecl _sat_add_u32(unsigned __int32, unsigned __int32);
extern unsigned __int64 __cdecl _sat_add_u64(unsigned __int64, unsigned __int64);
extern unsigned __int32 __cdecl _sat_sub_u32(unsigned __int32, unsigned __int32);
extern unsigned __int64 __cdecl _sat_sub_u64(unsigned __int64, unsigned __int64);
#endif /* _MSC_EXTENSIONS */

extern void * __cdecl _ReturnAddress(void);
extern void * __cdecl _AddressOfReturnAddress(void);

extern unsigned char __cdecl _BitScanForward(unsigned long *, unsigned long);
extern unsigned char __cdecl _BitScanReverse(unsigned long *, unsigned long);
extern unsigned char __cdecl _BitScanForward64(unsigned long *, unsigned long long);
extern unsigned char __cdecl _BitScanReverse64(unsigned long *, unsigned long long);

#ifdef _MSC_EXTENSIONS
extern unsigned __int8 __cdecl __ldar8(const volatile unsigned __int8 *);
extern unsigned __int16 __cdecl __ldar16(const volatile unsigned __int16 *);
extern unsigned __int32 __cdecl __ldar32(const volatile unsigned __int32 *);
extern unsigned __int64 __cdecl __ldar64(const volatile unsigned __int64 *);
#endif /* _MSC_EXTENSIONS */

#ifdef _MSC_EXTENSIONS
extern void __cdecl __stlr8(volatile unsigned __int8 *, unsigned __int8);
extern void __cdecl __stlr16(volatile unsigned __int16 *, unsigned __int16);
extern void __cdecl __stlr32(volatile unsigned __int32 *, unsigned __int32);
extern void __cdecl __stlr64(volatile unsigned __int64 *, unsigned __int64);
#endif /* _MSC_EXTENSIONS */

/* TODO(?): unsigned __int8 __cdecl __ldapr8(const volatile unsigned __int8 *); */
/* TODO(?): unsigned __int16 __cdecl __ldapr16(const volatile unsigned __int16 *); */
/* TODO(?): unsigned __int32 __cdecl __ldapr32(const volatile unsigned __int32 *); */
/* TODO(?): unsigned __int64 __cdecl __ldapr64(const volatile unsigned __int64 *); */

/* TODO(?): extern unsigned __int8 __cdecl __load_acquire8(const volatile unsigned __int8 *); */
/* TODO(?): extern unsigned __int16 __cdecl __load_acquire16(const volatile unsigned __int16 *); */
/* TODO(?): extern unsigned __int32 __cdecl __load_acquire32(const volatile unsigned __int32 *); */
/* TODO(?): extern unsigned __int64 __cdecl __load_acquire64(const volatile unsigned __int64 *); */

/* TODO(?): extern unsigned __int8 __cdecl __swp8(unsigned __int8 volatile *, unsigned __int8); */
/* TODO(?): extern unsigned __int16 __cdecl __swp16(unsigned __int16 volatile *, unsigned __int16); */
/* TODO(?): extern unsigned __int32 __cdecl __swp32(unsigned __int32 volatile *, unsigned __int32); */
/* TODO(?): extern unsigned __int64 __cdecl __swp64(unsigned __int64 volatile *, unsigned __int64); */
/* TODO(?): extern unsigned __int8 __cdecl __swpa8(unsigned __int8 volatile *, unsigned __int8); */
/* TODO(?): extern unsigned __int16 __cdecl __swpa16(unsigned __int16 volatile *, unsigned __int16); */
/* TODO(?): extern unsigned __int32 __cdecl __swpa32(unsigned __int32 volatile *, unsigned __int32); */
/* TODO(?): extern unsigned __int64 __cdecl __swpa64(unsigned __int64 volatile *, unsigned __int64); */
/* TODO(?): extern unsigned __int8 __cdecl __swpl8(unsigned __int8 volatile *, unsigned __int8); */
/* TODO(?): extern unsigned __int16 __cdecl __swpl16(unsigned __int16 volatile *, unsigned __int16); */
/* TODO(?): extern unsigned __int32 __cdecl __swpl32(unsigned __int32 volatile *, unsigned __int32); */
/* TODO(?): extern unsigned __int64 __cdecl __swpl64(unsigned __int64 volatile *, unsigned __int64); */
/* TODO(?): extern unsigned __int8 __cdecl __swpal8(unsigned __int8 volatile *, unsigned __int8); */
/* TODO(?): extern unsigned __int16 __cdecl __swpal16(unsigned __int16 volatile *, unsigned __int16); */
/* TODO(?): extern unsigned __int32 __cdecl __swpal32(unsigned __int32 volatile *, unsigned __int32); */
/* TODO(?): extern unsigned __int64 __cdecl __swpal64(unsigned __int64 volatile *, unsigned __int64); */

/* TODO(?): unsigned __int8 __cdecl __cas8(unsigned __int8 volatile *, unsigned __int8, unsigned __int8); */
/* TODO(?): unsigned __int16 __cdecl __cas16(unsigned __int16 volatile *, unsigned __int16, unsigned __int16); */
/* TODO(?): unsigned __int32 __cdecl __cas32(unsigned __int32 volatile *, unsigned __int32, unsigned __int32); */
/* TODO(?): unsigned __int64 __cdecl __cas64(unsigned __int64 volatile *, unsigned __int64, unsigned __int64); */
/* TODO(?): unsigned __int8 __cdecl __casa8(unsigned __int8 volatile *, unsigned __int8, unsigned __int8); */
/* TODO(?): unsigned __int16 __cdecl __casa16(unsigned __int16 volatile *, unsigned __int16, unsigned __int16); */
/* TODO(?): unsigned __int32 __cdecl __casa32(unsigned __int32 volatile *, unsigned __int32, unsigned __int32); */
/* TODO(?): unsigned __int64 __cdecl __casa64(unsigned __int64 volatile *, unsigned __int64, unsigned __int64); */
/* TODO(?): unsigned __int8 __cdecl __casl8(unsigned __int8 volatile *, unsigned __int8, unsigned __int8); */
/* TODO(?): unsigned __int16 __cdecl __casl16(unsigned __int16 volatile *, unsigned __int16, unsigned __int16); */
/* TODO(?): unsigned __int32 __cdecl __casl32(unsigned __int32 volatile *, unsigned __int32, unsigned __int32); */
/* TODO(?): unsigned __int64 __cdecl __casl64(unsigned __int64 volatile *, unsigned __int64, unsigned __int64); */
/* TODO(?): unsigned __int8 __cdecl __casal8(unsigned __int8 volatile *, unsigned __int8, unsigned __int8); */
/* TODO(?): unsigned __int16 __cdecl __casal16(unsigned __int16 volatile *, unsigned __int16, unsigned __int16); */
/* TODO(?): unsigned __int32 __cdecl __casal32(unsigned __int32 volatile *, unsigned __int32, unsigned __int32); */
/* TODO(?): unsigned __int64 __cdecl __casal64(unsigned __int64 volatile *, unsigned __int64, unsigned __int64); */

#endif /* _ARM64_INTR_H */
