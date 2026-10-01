#ifndef _ARM64_NEON_H
#define _ARM64_NEON_H

/* arm64_neon.h - private header for NEON intrinsics */

#if __POCC__ < 1400
#error <arm64_neon.h> need POCC version 14.0 or higher
#endif /* __POCC__ < 1400 */

#pragma once

#include <stdint.h>

#if (__POCC_TARGET__ != 4)
#error <arm64_neon.h> can only be used with ARM64 target
#endif /* __POCC_TARGET__ != 4 */

#define _U32_FROM_F32(X) \
    ((const union { float32_t f; uint32_t u; }){ .f = (float32_t)(X) }.u)
#define _U64_FROM_F64(X) \
    ((const union { float64_t d; uint64_t u; }){ .d = (float64_t)(X) }.u)
#define _F32_FROM_U32(X) \
    ((const union { float32_t f; uint32_t u; }){ .u = (uint32_t)(X) }.f)
#define _F64_FROM_U64(X) \
    ((const union { float64_t d; uint64_t u; }){ .u = (uint64_t)(X) }.d)

typedef float float32_t;
typedef double float64_t;

typedef union __declspec(align(16)) __n128 {
    unsigned __int64 n128_u64[2];
    unsigned __int32 n128_u32[4];
    unsigned __int16 n128_u16[8];
    unsigned __int8 n128_u8[16];
    __int64 n128_i64[2];
    __int32 n128_i32[4];
    __int16 n128_i16[8];
    __int8 n128_i8[16];
    double n128_f64[2];
    float n128_f32[4];
} __n128;

typedef union __declspec(align(8)) __n64 {
    unsigned __int64 n64_u64[1];
    unsigned __int32 n64_u32[2];
    unsigned __int16 n64_u16[4];
    unsigned __int8 n64_u8[8];
    __int64 n64_i64[1];
    __int32 n64_i32[2];
    __int16 n64_i16[4];
    __int8 n64_i8[8];
    double n64_f64[1];
    float n64_f32[2];
} __n64;

typedef __n64 int8x8_t;
typedef __n64 int16x4_t;
typedef __n64 int32x2_t;
typedef __n64 int64x1_t;
typedef __n64 uint8x8_t;
typedef __n64 uint16x4_t;
typedef __n64 uint32x2_t;
typedef __n64 uint64x1_t;
typedef __n64 float32x2_t;
typedef __n64 float64x1_t;

typedef __n128 int8x16_t;
typedef __n128 int16x8_t;
typedef __n128 int32x4_t;
typedef __n128 int64x2_t;
typedef __n128 uint8x16_t;
typedef __n128 uint16x8_t;
typedef __n128 uint32x4_t;
typedef __n128 uint64x2_t;
typedef __n128 float32x4_t;
typedef __n128 float64x2_t;

/* Addition */

extern __n64 __cdecl __neon_add8(__n64 a, __n64 b);
extern __n64 __cdecl __neon_add16(__n64 a, __n64 b);
extern __n64 __cdecl __neon_add32(__n64 a, __n64 b);
extern __n64 __cdecl __neon_add64(__n64 a, __n64 b);
extern __n64 __cdecl __neon_fadd32(__n64 a, __n64 b);
extern __n64 __cdecl __neon_fadd64(__n64 a, __n64 b);

extern __n128 __cdecl __neon_addq8(__n128 a, __n128 b);
extern __n128 __cdecl __neon_addq16(__n128 a, __n128 b);
extern __n128 __cdecl __neon_addq32(__n128 a, __n128 b);
extern __n128 __cdecl __neon_addq64(__n128 a, __n128 b);
extern __n128 __cdecl __neon_faddq32(__n128 a, __n128 b);
extern __n128 __cdecl __neon_faddq64(__n128 a, __n128 b);

#define vadd_s8(a,b)   __neon_add8((a),(b))
#define vadd_u8(a,b)   __neon_add8((a),(b))
#define vadd_s16(a,b)  __neon_add16((a),(b))
#define vadd_u16(a,b)  __neon_add16((a),(b))
#define vadd_s32(a,b)  __neon_add32((a),(b))
#define vadd_u32(a,b)  __neon_add32((a),(b))
#define vadd_s64(a,b)  __neon_add64((a),(b))
#define vadd_u64(a,b)  __neon_add64((a),(b))
#define vadd_f32(a,b)  __neon_fadd32((a),(b))
#define vadd_f64(a,b)  __neon_fadd64((a),(b))

#define vaddq_s8(a,b)   __neon_addq8((a),(b))
#define vaddq_u8(a,b)   __neon_addq8((a),(b))
#define vaddq_s16(a,b)  __neon_addq16((a),(b))
#define vaddq_u16(a,b)  __neon_addq16((a),(b))
#define vaddq_s32(a,b)  __neon_addq32((a),(b))
#define vaddq_u32(a,b)  __neon_addq32((a),(b))
#define vaddq_s64(a,b)  __neon_addq64((a),(b))
#define vaddq_u64(a,b)  __neon_addq64((a),(b))
#define vaddq_f32(a,b)  __neon_faddq32((a),(b))
#define vaddq_f64(a,b)  __neon_faddq64((a),(b))

extern   signed __int8  __cdecl __neon_saddv8(__n64 a);
extern   signed __int16 __cdecl __neon_saddv16(__n64 a);
extern unsigned __int8  __cdecl __neon_uaddv8(__n64 a);
extern unsigned __int16 __cdecl __neon_uaddv16(__n64 a);
extern unsigned __int32 __cdecl __neon_uaddv32(__n64 a);

extern   signed __int8  __cdecl __neon_saddvq8(__n128 a);
extern   signed __int16 __cdecl __neon_saddvq16(__n128 a);
extern unsigned __int8  __cdecl __neon_uaddvq8(__n128 a);
extern unsigned __int16 __cdecl __neon_uaddvq16(__n128 a);
extern unsigned __int32 __cdecl __neon_uaddvq32(__n128 a);
extern unsigned __int64 __cdecl __neon_uaddvq64(__n128 a);

extern float __cdecl __neon_faddps32(__n64 a);
extern float __cdecl __neon_faddpsq32(__n128 a);
extern double __cdecl __neon_faddpsq64(__n128 a);

#define vaddv_s8(a)   __neon_saddv8(a)
#define vaddv_u8(a)   __neon_uaddv8(a)
#define vaddv_s16(a)  __neon_saddv16(a)
#define vaddv_u16(a)  __neon_uaddv16(a)
#define vaddv_s32(a)  __neon_uaddv32(a)
#define vaddv_u32(a)  __neon_uaddv32(a)
#define vaddv_f32(a)  __neon_faddps32(a)

#define vaddvq_s8(a)   __neon_saddvq8(a)
#define vaddvq_u8(a)   __neon_uaddvq8(a)
#define vaddvq_s16(a)  __neon_saddvq16(a)
#define vaddvq_u16(a)  __neon_uaddvq16(a)
#define vaddvq_s32(a)  __neon_uaddvq32(a)
#define vaddvq_u32(a)  __neon_uaddvq32(a)
#define vaddvq_s64(a)  __neon_uaddvq64(a)
#define vaddvq_u64(a)  __neon_uaddvq64(a)
#define vaddvq_f32(a)  __neon_faddpsq32(a)
#define vaddvq_f64(a)  __neon_faddpsq64(a)

/* TODO(?): int64_t vaddd_s64(int64_t a, int64_t b) */
/* TODO(?): uint64_t vaddd_u64(uint64_t a, uint64_t b) */

/* TODO: Widening addition */
/* TODO: Narrowing addition */
/* TODO: Saturating addition */

/* Multiplication */

extern __n64 __cdecl __neon_mul8(__n64 a, __n64 b);
extern __n64 __cdecl __neon_mul16(__n64 a, __n64 b);
extern __n64 __cdecl __neon_mul32(__n64 a, __n64 b);
extern __n64 __cdecl __neon_fmul32(__n64 a, __n64 b);
extern __n64 __cdecl __neon_fmul64(__n64 a, __n64 b);

extern __n128 __cdecl __neon_mulq8(__n128 a, __n128 b);
extern __n128 __cdecl __neon_mulq16(__n128 a, __n128 b);
extern __n128 __cdecl __neon_mulq32(__n128 a, __n128 b);
extern __n128 __cdecl __neon_fmulq32(__n128 a, __n128 b);
extern __n128 __cdecl __neon_fmulq64(__n128 a, __n128 b);

#define vmul_s8(a,b)   __neon_mul8((a),(b))
#define vmul_u8(a,b)   __neon_mul8((a),(b))
#define vmul_s16(a,b)  __neon_mul16((a),(b))
#define vmul_u16(a,b)  __neon_mul16((a),(b))
#define vmul_s32(a,b)  __neon_mul32((a),(b))
#define vmul_u32(a,b)  __neon_mul32((a),(b))
#define vmul_f32(a,b)  __neon_fmul32((a),(b))
#define vmul_f64(a,b)  __neon_fmul64((a),(b))

#define vmulq_s8(a,b)   __neon_mulq8((a),(b))
#define vmulq_u8(a,b)   __neon_mulq8((a),(b))
#define vmulq_s16(a,b)  __neon_mulq16((a),(b))
#define vmulq_u16(a,b)  __neon_mulq16((a),(b))
#define vmulq_s32(a,b)  __neon_mulq32((a),(b))
#define vmulq_u32(a,b)  __neon_mulq32((a),(b))
#define vmulq_f32(a,b)  __neon_fmulq32((a),(b))
#define vmulq_f64(a,b)  __neon_fmulq64((a),(b))

/* TODO: uint64x2_t vmull_high_u32(uint32x4_t a, uint32x4_t b) */

/* TODO: Multiply extended */
/* TODO: Multiply-accumulate */
/* TODO: Multiply-accumulate and widen */

/* Fused multiply-add */

extern __n64 __cdecl __neon_fmla32(__n64 a, __n64 b,  __n64 c);
extern __n64 __cdecl __neon_fmla64(__n64 a, __n64 b,  __n64 c);

extern __n128 __cdecl __neon_fmlaq32(__n128 a, __n128 b, __n128 c);
extern __n128 __cdecl __neon_fmlaq64(__n128 a, __n128 b, __n128 c);

#define vfma_f32(a,b,c)  __neon_fmla32((a),(b),(c))
#define vfma_f64(a,b,c)  __neon_fmla64((a),(b),(c))

#define vfmaq_f32(a,b,c)  __neon_fmlaq32((a),(b),(c))
#define vfmaq_f64(a,b,c)  __neon_fmlaq64((a),(b),(c))

extern __n64 __cdecl __neon_fmlav32(__n64 a, __n64 b, __n64 v, const int lane);
extern __n64 __cdecl __neon_fmlav64(__n64 a, __n64 b, __n64 v, const int lane);

extern __n128 __cdecl __neon_fmlavq32(__n128 a, __n128 b, __n64 v, const int lane);
extern __n128 __cdecl __neon_fmlavq64(__n128 a, __n128 b, __n64 v, const int lane);

extern __n128 __cdecl __neon_fmlavq32q(__n128 a, __n128 b, __n128 v, const int lane);
extern __n128 __cdecl __neon_fmlavq64q(__n128 a, __n128 b, __n128 v, const int lane);

#define vfma_lane_f32(a,b,v,lane)  __neon_fmlav32((a),(b),(v),(lane))
#define vfma_lane_f64(a,b,v,lane)  __neon_fmlav64((a),(b),(v),(lane))

#define vfmaq_lane_f32(a,b,v,lane)  __neon_fmlavq32((a),(b),(v),(lane))
#define vfmaq_lane_f64(a,b,v,lane)  __neon_fmlavq64((a),(b),(v),(lane))

#define vfmaq_laneq_f32(a,b,v,lane)  __neon_fmlavq32q((a),(b),(v),(lane))
#define vfmaq_laneq_f64(a,b,v,lane)  __neon_fmlavq64q((a),(b),(v),(lane))

/* Fused multiply-subtract */

extern __n64 __cdecl __neon_fmls32(__n64 a, __n64 b,  __n64 c);
extern __n64 __cdecl __neon_fmls64(__n64 a, __n64 b,  __n64 c);

extern __n128 __cdecl __neon_fmlsq32(__n128 a, __n128 b, __n128 c);
extern __n128 __cdecl __neon_fmlsq64(__n128 a, __n128 b, __n128 c);

#define vfms_f32(a,b,c)  __neon_fmls32((a),(b),(c))
#define vfms_f64(a,b,c)  __neon_fmls64((a),(b),(c))

#define vfmsq_f32(a,b,c)  __neon_fmlsq32((a),(b),(c))
#define vfmsq_f64(a,b,c)  __neon_fmlsq64((a),(b),(c))

extern __n64 __cdecl __neon_fmlsv32(__n64 a, __n64 b, __n64 v, const int lane);
extern __n64 __cdecl __neon_fmlsv64(__n64 a, __n64 b, __n64 v, const int lane);

extern __n128 __cdecl __neon_fmlsvq32(__n128 a, __n128 b, __n64 v, const int lane);
extern __n128 __cdecl __neon_fmlsvq64(__n128 a, __n128 b, __n64 v, const int lane);

extern __n128 __cdecl __neon_fmlsvq32q(__n128 a, __n128 b, __n128 v, const int lane);
extern __n128 __cdecl __neon_fmlsvq64q(__n128 a, __n128 b, __n128 v, const int lane);

#define vfms_lane_f32(a,b,v,lane)  __neon_fmlsv32((a),(b),(v),(lane))
#define vfms_lane_f64(a,b,v,lane)  __neon_fmlsv64((a),(b),(v),(lane))

#define vfmsq_lane_f32(a,b,v,lane)  __neon_fmlsvq32((a),(b),(v),(lane))
#define vfmsq_lane_f64(a,b,v,lane)  __neon_fmlsvq64((a),(b),(v),(lane))

#define vfmsq_laneq_f32(a,b,v,lane)  __neon_fmlsvq32q((a),(b),(v),(lane))
#define vfmsq_laneq_f64(a,b,v,lane)  __neon_fmlsvq64q((a),(b),(v),(lane))

/* TODO: Saturating multiply */
/* TODO: Saturating multiply-accumulate */
/* TODO: Widening multiplication */
/* TODO: Saturating multiply by scalar and widen */
/* TODO: Saturating multiply-accumulate by scalar and widen */
/* TODO: Polynomial multiply */

/* Division */

extern __n64 __cdecl __neon_fdiv32(__n64 a, __n64 b);
extern __n64 __cdecl __neon_fdiv64(__n64 a, __n64 b);

extern __n128 __cdecl __neon_fdivq32(__n128 a, __n128 b);
extern __n128 __cdecl __neon_fdivq64(__n128 a, __n128 b);

#define vdiv_f32(a,b)  __neon_fdiv32((a),(b))
#define vdiv_f64(a,b)  __neon_fdiv64((a),(b))

#define vdivq_f32(a,b)  __neon_fdivq32((a),(b))
#define vdivq_f64(a,b)  __neon_fdivq64((a),(b))

/* Subtraction */

extern __n64 __cdecl __neon_sub8(__n64 a, __n64 b);
extern __n64 __cdecl __neon_sub16(__n64 a, __n64 b);
extern __n64 __cdecl __neon_sub32(__n64 a, __n64 b);
extern __n64 __cdecl __neon_sub64(__n64 a, __n64 b);
extern __n64 __cdecl __neon_fsub32(__n64 a, __n64 b);
extern __n64 __cdecl __neon_fsub64(__n64 a, __n64 b);

extern __n128 __cdecl __neon_subq8(__n128 a, __n128 b);
extern __n128 __cdecl __neon_subq16(__n128 a, __n128 b);
extern __n128 __cdecl __neon_subq32(__n128 a, __n128 b);
extern __n128 __cdecl __neon_subq64(__n128 a, __n128 b);
extern __n128 __cdecl __neon_fsubq32(__n128 a, __n128 b);
extern __n128 __cdecl __neon_fsubq64(__n128 a, __n128 b);

#define vsub_s8(a,b)   __neon_sub8((a),(b))
#define vsub_u8(a,b)   __neon_sub8((a),(b))
#define vsub_s16(a,b)  __neon_sub16((a),(b))
#define vsub_u16(a,b)  __neon_sub16((a),(b))
#define vsub_s32(a,b)  __neon_sub32((a),(b))
#define vsub_u32(a,b)  __neon_sub32((a),(b))
#define vsub_s64(a,b)  __neon_sub64((a),(b))
#define vsub_u64(a,b)  __neon_sub64((a),(b))
#define vsub_f32(a,b)  __neon_fsub32((a),(b))
#define vsub_f64(a,b)  __neon_fsub64((a),(b))

#define vsubq_s8(a,b)   __neon_subq8((a),(b))
#define vsubq_u8(a,b)   __neon_subq8((a),(b))
#define vsubq_s16(a,b)  __neon_subq16((a),(b))
#define vsubq_u16(a,b)  __neon_subq16((a),(b))
#define vsubq_s32(a,b)  __neon_subq32((a),(b))
#define vsubq_u32(a,b)  __neon_subq32((a),(b))
#define vsubq_s64(a,b)  __neon_subq64((a),(b))
#define vsubq_u64(a,b)  __neon_subq64((a),(b))
#define vsubq_f32(a,b)  __neon_fsubq32((a),(b))
#define vsubq_f64(a,b)  __neon_fsubq64((a),(b))

/* TODO(?): int64_t vsubd_s64(int64_t a, int64_t b) */
/* TODO(?): uint64_t vsubd_u64(uint64_t a, uint64_t b) */

/* TODO: Widening subtraction */
/* TODO: Narrowing subtraction */
/* TODO: Saturating subtract */
/* TODO: Absolute difference */
/* TODO: Widening absolute difference */
/* TODO: Absolute difference and accumulate */
/* TODO: Widening absolute difference and accumulate */

/* Absolute value */

extern __n64 __cdecl __neon_abs8(__n64 a);
extern __n64 __cdecl __neon_abs16(__n64 a);
extern __n64 __cdecl __neon_abs32(__n64 a);
extern __n64 __cdecl __neon_abs64(__n64 a);
extern __n64 __cdecl __neon_fabs32(__n64 a);
extern __n64 __cdecl __neon_fabs64(__n64 a);

extern __n128 __cdecl __neon_absq8(__n128 a);
extern __n128 __cdecl __neon_absq16(__n128 a);
extern __n128 __cdecl __neon_absq32(__n128 a);
extern __n128 __cdecl __neon_absq64(__n128 a);
extern __n128 __cdecl __neon_fabsq32(__n128 a);
extern __n128 __cdecl __neon_fabsq64(__n128 a);

#define vabs_s8(a)   __neon_abs8(a)
#define vabs_s16(a)  __neon_abs16(a)
#define vabs_s32(a)  __neon_abs32(a)
#define vabs_s64(a)  __neon_abs64(a)
#define vabs_f32(a)  __neon_fabs32(a)
#define vabs_f64(a)  __neon_fabs64(a)

#define vabsq_s8(a)   __neon_absq8(a)
#define vabsq_s16(a)  __neon_absq16(a)
#define vabsq_s32(a)  __neon_absq32(a)
#define vabsq_s64(a)  __neon_absq64(a)
#define vabsq_f32(a)  __neon_fabsq32(a)
#define vabsq_f64(a)  __neon_fabsq64(a)

/* TODO(?): int64_t vabsd_s64(int64_t a) */

/* TODO: Saturating absolute value */
/* TODO: Absolute minimum and maximum  */

/* Maximum */

extern __n64 __cdecl __neon_smax8(__n64 a, __n64 b);
extern __n64 __cdecl __neon_smax16(__n64 a, __n64 b);
extern __n64 __cdecl __neon_smax32(__n64 a, __n64 b);
extern __n64 __cdecl __neon_umax8(__n64 a, __n64 b);
extern __n64 __cdecl __neon_umax16(__n64 a, __n64 b);
extern __n64 __cdecl __neon_umax32(__n64 a, __n64 b);
extern __n64 __cdecl __neon_fmax32(__n64 a, __n64 b);
extern __n64 __cdecl __neon_fmax64(__n64 a, __n64 b);

extern __n128 __cdecl __neon_smaxq8(__n128 a, __n128 b);
extern __n128 __cdecl __neon_smaxq16(__n128 a, __n128 b);
extern __n128 __cdecl __neon_smaxq32(__n128 a, __n128 b);
extern __n128 __cdecl __neon_umaxq8(__n128 a, __n128 b);
extern __n128 __cdecl __neon_umaxq16(__n128 a, __n128 b);
extern __n128 __cdecl __neon_umaxq32(__n128 a, __n128 b);
extern __n128 __cdecl __neon_fmaxq32(__n128 a, __n128 b);
extern __n128 __cdecl __neon_fmaxq64(__n128 a, __n128 b);

#define vmax_s8(a,b)   __neon_smax8((a),(b))
#define vmax_u8(a,b)   __neon_umax8((a),(b))
#define vmax_s16(a,b)  __neon_smax16((a),(b))
#define vmax_u16(a,b)  __neon_umax16((a),(b))
#define vmax_s32(a,b)  __neon_smax32((a),(b))
#define vmax_u32(a,b)  __neon_umax32((a),(b))
#define vmax_f32(a,b)  __neon_fmax32((a),(b))
#define vmax_f64(a,b)  __neon_fmax64((a),(b))

#define vmaxq_s8(a,b)   __neon_smaxq8((a),(b))
#define vmaxq_u8(a,b)   __neon_umaxq8((a),(b))
#define vmaxq_s16(a,b)  __neon_smaxq16((a),(b))
#define vmaxq_u16(a,b)  __neon_umaxq16((a),(b))
#define vmaxq_s32(a,b)  __neon_smaxq32((a),(b))
#define vmaxq_u32(a,b)  __neon_umaxq32((a),(b))
#define vmaxq_f32(a,b)  __neon_fmaxq32((a),(b))
#define vmaxq_f64(a,b)  __neon_fmaxq64((a),(b))

extern   signed __int8 __cdecl __neon_smaxv8(__n64 a);
extern   signed __int16 __cdecl __neon_smaxv16(__n64 a);
extern   signed __int32 __cdecl __neon_smaxv32(__n64 a);
extern unsigned __int8 __cdecl __neon_umaxv8(__n64 a);
extern unsigned __int16 __cdecl __neon_umaxv16(__n64 a);
extern unsigned __int32 __cdecl __neon_umaxv32(__n64 a);

extern   signed __int8 __cdecl __neon_smaxvq8(__n128 a);
extern   signed __int16 __cdecl __neon_smaxvq16(__n128 a);
extern   signed __int32 __cdecl __neon_smaxvq32(__n128 a);
extern unsigned __int8 __cdecl __neon_umaxvq8(__n128 a);
extern unsigned __int16 __cdecl __neon_umaxvq16(__n128 a);
extern unsigned __int32 __cdecl __neon_umaxvq32(__n128 a);

extern float __cdecl __neon_fmaxps32(__n64 a);
extern float __cdecl __neon_fmaxv(__n128 a);
extern double __cdecl __neon_fmaxps64(__n128 a);

#define vmaxv_s8(a)   __neon_smaxv8(a)
#define vmaxv_u8(a)   __neon_umaxv8(a)
#define vmaxv_s16(a)  __neon_smaxv16(a)
#define vmaxv_u16(a)  __neon_umaxv16(a)
#define vmaxv_s32(a)  __neon_smaxv32(a)
#define vmaxv_u32(a)  __neon_umaxv32(a)
#define vmaxv_f32(a)  __neon_fmaxps32(a)

#define vmaxvq_s8(a)   __neon_smaxvq8(a)
#define vmaxvq_u8(a)   __neon_umaxvq8(a)
#define vmaxvq_s16(a)  __neon_smaxvq16(a)
#define vmaxvq_u16(a)  __neon_umaxvq16(a)
#define vmaxvq_s32(a)  __neon_smaxvq32(a)
#define vmaxvq_u32(a)  __neon_umaxvq32(a)
#define vmaxvq_f32(a)  __neon_fmaxv(a)
#define vmaxvq_f64(a)  __neon_fmaxps64(a)

extern __n64 __cdecl __neon_fmaxnm32(__n64 a, __n64 b);
extern __n64 __cdecl __neon_fmaxnm64(__n64 a, __n64 b);

extern __n128 __cdecl __neon_fmaxnmq32(__n128 a, __n128 b);
extern __n128 __cdecl __neon_fmaxnmq64(__n128 a, __n128 b);

#define vmaxnm_f32(a, b)  __neon_fmaxnm32((a),(b))
#define vmaxnm_f64(a, b)  __neon_fmaxnm64((a),(b))

#define vmaxnmq_f32(a, b)  __neon_fmaxnmq32((a),(b))
#define vmaxnmq_f64(a, b)  __neon_fmaxnmq64((a),(b))

/* Minimum */

extern __n64 __cdecl __neon_smin8(__n64 a, __n64 b);
extern __n64 __cdecl __neon_smin16(__n64 a, __n64 b);
extern __n64 __cdecl __neon_smin32(__n64 a, __n64 b);
extern __n64 __cdecl __neon_umin8(__n64 a, __n64 b);
extern __n64 __cdecl __neon_umin16(__n64 a, __n64 b);
extern __n64 __cdecl __neon_umin32(__n64 a, __n64 b);
extern __n64 __cdecl __neon_fmin32(__n64 a, __n64 b);
extern __n64 __cdecl __neon_fmin64(__n64 a, __n64 b);

extern __n128 __cdecl __neon_sminq8(__n128 a, __n128 b);
extern __n128 __cdecl __neon_sminq16(__n128 a, __n128 b);
extern __n128 __cdecl __neon_sminq32(__n128 a, __n128 b);
extern __n128 __cdecl __neon_uminq8(__n128 a, __n128 b);
extern __n128 __cdecl __neon_uminq16(__n128 a, __n128 b);
extern __n128 __cdecl __neon_uminq32(__n128 a, __n128 b);
extern __n128 __cdecl __neon_fminq32(__n128 a, __n128 b);
extern __n128 __cdecl __neon_fminq64(__n128 a, __n128 b);

#define vmin_s8(a,b)   __neon_smin8((a),(b))
#define vmin_u8(a,b)   __neon_umin8((a),(b))
#define vmin_s16(a,b)  __neon_smin16((a),(b))
#define vmin_u16(a,b)  __neon_umin16((a),(b))
#define vmin_s32(a,b)  __neon_smin32((a),(b))
#define vmin_u32(a,b)  __neon_umin32((a),(b))
#define vmin_f32(a,b)  __neon_fmin32((a),(b))
#define vmin_f64(a,b)  __neon_fmin64((a),(b))

#define vminq_s8(a,b)   __neon_sminq8((a),(b))
#define vminq_u8(a,b)   __neon_uminq8((a),(b))
#define vminq_s16(a,b)  __neon_sminq16((a),(b))
#define vminq_u16(a,b)  __neon_uminq16((a),(b))
#define vminq_s32(a,b)  __neon_sminq32((a),(b))
#define vminq_u32(a,b)  __neon_uminq32((a),(b))
#define vminq_f32(a,b)  __neon_fminq32((a),(b))
#define vminq_f64(a,b)  __neon_fminq64((a),(b))

extern __n64 __cdecl __neon_fminnm32(__n64 a, __n64 b);
extern __n64 __cdecl __neon_fminnm64(__n64 a, __n64 b);

extern __n128 __cdecl __neon_fminnmq32(__n128 a, __n128 b);
extern __n128 __cdecl __neon_fminnmq64(__n128 a, __n128 b);

#define vminnm_f32(a, b)  __neon_fminnm32((a),(b))
#define vminnm_f64(a, b)  __neon_fminnm64((a),(b))

#define vminnmq_f32(a, b)  __neon_fminnmq32((a),(b))
#define vminnmq_f64(a, b)  __neon_fminnmq64((a),(b))

extern   signed __int8 __cdecl __neon_sminv8(__n64 a);
extern   signed __int16 __cdecl __neon_sminv16(__n64 a);
extern   signed __int32 __cdecl __neon_sminv32(__n64 a);
extern unsigned __int8 __cdecl __neon_uminv8(__n64 a);
extern unsigned __int16 __cdecl __neon_uminv16(__n64 a);
extern unsigned __int32 __cdecl __neon_uminv32(__n64 a);

extern   signed __int8 __cdecl __neon_sminvq8(__n128 a);
extern   signed __int16 __cdecl __neon_sminvq16(__n128 a);
extern   signed __int32 __cdecl __neon_sminvq32(__n128 a);
extern unsigned __int8 __cdecl __neon_uminvq8(__n128 a);
extern unsigned __int16 __cdecl __neon_uminvq16(__n128 a);
extern unsigned __int32 __cdecl __neon_uminvq32(__n128 a);

extern float __cdecl __neon_fminps32(__n64 a);
extern float __cdecl __neon_fminv(__n128 a);
extern double __cdecl __neon_fminps64(__n128 a);

#define vminv_s8(a)   __neon_sminv8(a)
#define vminv_u8(a)   __neon_uminv8(a)
#define vminv_s16(a)  __neon_sminv16(a)
#define vminv_u16(a)  __neon_uminv16(a)
#define vminv_s32(a)  __neon_sminv32(a)
#define vminv_u32(a)  __neon_uminv32(a)
#define vminv_f32(a)  __neon_fminps32(a)

#define vminvq_s8(a)   __neon_sminvq8(a)
#define vminvq_u8(a)   __neon_uminvq8(a)
#define vminvq_s16(a)  __neon_sminvq16(a)
#define vminvq_u16(a)  __neon_uminvq16(a)
#define vminvq_s32(a)  __neon_sminvq32(a)
#define vminvq_u32(a)  __neon_uminvq32(a)
#define vminvq_f32(a)  __neon_fminv(a)
#define vminvq_f64(a)  __neon_fminps64(a)

/* TODO: Rounding */

/* TODO: Reciprocal estimate  */
/* TODO: Reciprocal square-root estimate */
/* TODO: Reciprocal exponent */

/* Square root */

extern __n64 __cdecl __neon_fsqrt32(__n64 a);
extern __n64 __cdecl __neon_fsqrt64(__n64 a);

extern __n128 __cdecl __neon_fsqrtq32(__n128 a);
extern __n128 __cdecl __neon_fsqrtq64(__n128 a);

#define vsqrt_f32(a)  __neon_fsqrt32(a)
#define vsqrt_f64(a)  __neon_fsqrt64(a)

#define vsqrtq_f32(a)  __neon_fsqrtq32(a)
#define vsqrtq_f64(a)  __neon_fsqrtq64(a)

/* TODO: Addition across vector widening */

/* Bitwise equal */

extern __n64 __cdecl __neon_cmeq8(__n64 a, __n64 b);
extern __n64 __cdecl __neon_cmeq16(__n64 a, __n64 b);
extern __n64 __cdecl __neon_cmeq32(__n64 a, __n64 b);
extern __n64 __cdecl __neon_cmeq64(__n64 a, __n64 b);
extern __n64 __cdecl __neon_fcmeq32(__n64 a, __n64 b);
extern __n64 __cdecl __neon_fcmeq64(__n64 a, __n64 b);

extern __n128 __cdecl __neon_cmeqq8(__n128 a, __n128 b);
extern __n128 __cdecl __neon_cmeqq16(__n128 a, __n128 b);
extern __n128 __cdecl __neon_cmeqq32(__n128 a, __n128 b);
extern __n128 __cdecl __neon_cmeqq64(__n128 a, __n128 b);
extern __n128 __cdecl __neon_fcmeqq32(__n128 a, __n128 b);
extern __n128 __cdecl __neon_fcmeqq64(__n128 a, __n128 b);

#define vceq_s8(a,b)   __neon_cmeq8((a),(b))
#define vceq_u8(a,b)   __neon_cmeq8((a),(b))
#define vceq_s16(a,b)  __neon_cmeq16((a),(b))
#define vceq_u16(a,b)  __neon_cmeq16((a),(b))
#define vceq_s32(a,b)  __neon_cmeq32((a),(b))
#define vceq_u32(a,b)  __neon_cmeq32((a),(b))
#define vceq_s64(a,b)  __neon_cmeq64((a),(b))
#define vceq_u64(a,b)  __neon_cmeq64((a),(b))
#define vceq_f32(a,b)  __neon_fcmeq32((a),(b))
#define vceq_f64(a,b)  __neon_fcmeq64((a),(b))

#define vceqq_s8(a,b)   __neon_cmeqq8((a),(b))
#define vceqq_u8(a,b)   __neon_cmeqq8((a),(b))
#define vceqq_s16(a,b)  __neon_cmeqq16((a),(b))
#define vceqq_u16(a,b)  __neon_cmeqq16((a),(b))
#define vceqq_s32(a,b)  __neon_cmeqq32((a),(b))
#define vceqq_u32(a,b)  __neon_cmeqq32((a),(b))
#define vceqq_s64(a,b)  __neon_cmeqq64((a),(b))
#define vceqq_u64(a,b)  __neon_cmeqq64((a),(b))
#define vceqq_f32(a,b)  __neon_fcmeqq32((a),(b))
#define vceqq_f64(a,b)  __neon_fcmeqq64((a),(b))

/* Bitwise equal to zero */

extern __n64 __cdecl __neon_cmeqz8(__n64 a);
extern __n64 __cdecl __neon_cmeqz16(__n64 a);
extern __n64 __cdecl __neon_cmeqz32(__n64 a);
extern __n64 __cdecl __neon_cmeqz64(__n64 a);
extern __n64 __cdecl __neon_fcmeqz32(__n64 a);
extern __n64 __cdecl __neon_fcmeqz64(__n64 a);

extern __n128 __cdecl __neon_cmeqzq8(__n128 a);
extern __n128 __cdecl __neon_cmeqzq16(__n128 a);
extern __n128 __cdecl __neon_cmeqzq32(__n128 a);
extern __n128 __cdecl __neon_cmeqzq64(__n128 a);
extern __n128 __cdecl __neon_fcmeqzq32(__n128 a);
extern __n128 __cdecl __neon_fcmeqzq64(__n128 a);

#define vceqz_s8(a)   __neon_cmeqz8(a)
#define vceqz_u8(a)   __neon_cmeqz8(a)
#define vceqz_s16(a)  __neon_cmeqz16(a)
#define vceqz_u16(a)  __neon_cmeqz16(a)
#define vceqz_s32(a)  __neon_cmeqz32(a)
#define vceqz_u32(a)  __neon_cmeqz32(a)
#define vceqz_s64(a)  __neon_cmeqz64(a)
#define vceqz_u64(a)  __neon_cmeqz64(a)
#define vceqz_f32(a)  __neon_fcmeqz32(a)
#define vceqz_f64(a)  __neon_fcmeqz64(a)

#define vceqzq_s8(a)   __neon_cmeqzq8(a)
#define vceqzq_u8(a)   __neon_cmeqzq8(a)
#define vceqzq_s16(a)  __neon_cmeqzq16(a)
#define vceqzq_u16(a)  __neon_cmeqzq16(a)
#define vceqzq_s32(a)  __neon_cmeqzq32(a)
#define vceqzq_u32(a)  __neon_cmeqzq32(a)
#define vceqzq_s64(a)  __neon_cmeqzq64(a)
#define vceqzq_u64(a)  __neon_cmeqzq64(a)
#define vceqzq_f32(a)  __neon_fcmeqzq32(a)
#define vceqzq_f64(a)  __neon_fcmeqzq64(a)

/* Greater than or equal to */

extern __n64 __cdecl __neon_cmge8(__n64 a, __n64 b);
extern __n64 __cdecl __neon_cmge16(__n64 a, __n64 b);
extern __n64 __cdecl __neon_cmge32(__n64 a, __n64 b);
extern __n64 __cdecl __neon_cmge64(__n64 a, __n64 b);
extern __n64 __cdecl __neon_cmhs8(__n64 a, __n64 b);
extern __n64 __cdecl __neon_cmhs16(__n64 a, __n64 b);
extern __n64 __cdecl __neon_cmhs32(__n64 a, __n64 b);
extern __n64 __cdecl __neon_cmhs64(__n64 a, __n64 b);
extern __n64 __cdecl __neon_fcmge32(__n64 a, __n64 b);
extern __n64 __cdecl __neon_fcmge64(__n64 a, __n64 b);

extern __n128 __cdecl __neon_cmgeq8(__n128 a, __n128 b);
extern __n128 __cdecl __neon_cmgeq16(__n128 a, __n128 b);
extern __n128 __cdecl __neon_cmgeq32(__n128 a, __n128 b);
extern __n128 __cdecl __neon_cmgeq64(__n128 a, __n128 b);
extern __n128 __cdecl __neon_cmhsq8(__n128 a, __n128 b);
extern __n128 __cdecl __neon_cmhsq16(__n128 a, __n128 b);
extern __n128 __cdecl __neon_cmhsq32(__n128 a, __n128 b);
extern __n128 __cdecl __neon_cmhsq64(__n128 a, __n128 b);
extern __n128 __cdecl __neon_fcmgeq32(__n128 a, __n128 b);
extern __n128 __cdecl __neon_fcmgeq64(__n128 a, __n128 b);

#define vcge_s8(a,b)   __neon_cmge8((a),(b))
#define vcge_u8(a,b)   __neon_cmhs8((a),(b))
#define vcge_s16(a,b)  __neon_cmge16((a),(b))
#define vcge_u16(a,b)  __neon_cmhs16((a),(b))
#define vcge_s32(a,b)  __neon_cmge32((a),(b))
#define vcge_u32(a,b)  __neon_cmhs32((a),(b))
#define vcge_s64(a,b)  __neon_cmge64((a),(b))
#define vcge_u64(a,b)  __neon_cmhs64((a),(b))
#define vcge_f32(a,b)  __neon_fcmge32((a),(b))
#define vcge_f64(a,b)  __neon_fcmge64((a),(b))

#define vcgeq_s8(a,b)   __neon_cmgeq8((a),(b))
#define vcgeq_u8(a,b)   __neon_cmhsq8((a),(b))
#define vcgeq_s16(a,b)  __neon_cmgeq16((a),(b))
#define vcgeq_u16(a,b)  __neon_cmhsq16((a),(b))
#define vcgeq_s32(a,b)  __neon_cmgeq32((a),(b))
#define vcgeq_u32(a,b)  __neon_cmhsq32((a),(b))
#define vcgeq_s64(a,b)  __neon_cmgeq64((a),(b))
#define vcgeq_u64(a,b)  __neon_cmhsq64((a),(b))
#define vcgeq_f32(a,b)  __neon_fcmgeq32((a),(b))
#define vcgeq_f64(a,b)  __neon_fcmgeq64((a),(b))

/* Less than or equal to */

#define vcle_s8(a,b)   __neon_cmge8((b),(a))
#define vcle_u8(a,b)   __neon_cmhs8((b),(a))
#define vcle_s16(a,b)  __neon_cmge16((b),(a))
#define vcle_u16(a,b)  __neon_cmhs16((b),(a))
#define vcle_s32(a,b)  __neon_cmge32((b),(a))
#define vcle_u32(a,b)  __neon_cmhs32((b),(a))
#define vcle_s64(a,b)  __neon_cmge64((b),(a))
#define vcle_u64(a,b)  __neon_cmhs64((b),(a))
#define vcle_f32(a,b)  __neon_fcmge32((b),(a))
#define vcle_f64(a,b)  __neon_fcmge64((b),(a))

#define vcleq_s8(a,b)   __neon_cmgeq8((b),(a))
#define vcleq_u8(a,b)   __neon_cmhsq8((b),(a))
#define vcleq_s16(a,b)  __neon_cmgeq16((b),(a))
#define vcleq_u16(a,b)  __neon_cmhsq16((b),(a))
#define vcleq_s32(a,b)  __neon_cmgeq32((b),(a))
#define vcleq_u32(a,b)  __neon_cmhsq32((b),(a))
#define vcleq_s64(a,b)  __neon_cmgeq64((b),(a))
#define vcleq_u64(a,b)  __neon_cmhsq64((b),(a))
#define vcleq_f32(a,b)  __neon_fcmgeq32((b),(a))
#define vcleq_f64(a,b)  __neon_fcmgeq64((b),(a))

/* Greater than */

extern __n64 __cdecl __neon_cmgt8(__n64 a, __n64 b);
extern __n64 __cdecl __neon_cmgt16(__n64 a, __n64 b);
extern __n64 __cdecl __neon_cmgt32(__n64 a, __n64 b);
extern __n64 __cdecl __neon_cmgt64(__n64 a, __n64 b);
extern __n64 __cdecl __neon_cmhi8(__n64 a, __n64 b);
extern __n64 __cdecl __neon_cmhi16(__n64 a, __n64 b);
extern __n64 __cdecl __neon_cmhi32(__n64 a, __n64 b);
extern __n64 __cdecl __neon_cmhi64(__n64 a, __n64 b);
extern __n64 __cdecl __neon_fcmgt32(__n64 a, __n64 b);
extern __n64 __cdecl __neon_fcmgt64(__n64 a, __n64 b);

extern __n128 __cdecl __neon_cmgtq8(__n128 a, __n128 b);
extern __n128 __cdecl __neon_cmgtq16(__n128 a, __n128 b);
extern __n128 __cdecl __neon_cmgtq32(__n128 a, __n128 b);
extern __n128 __cdecl __neon_cmgtq64(__n128 a, __n128 b);
extern __n128 __cdecl __neon_cmhiq8(__n128 a, __n128 b);
extern __n128 __cdecl __neon_cmhiq16(__n128 a, __n128 b);
extern __n128 __cdecl __neon_cmhiq32(__n128 a, __n128 b);
extern __n128 __cdecl __neon_cmhiq64(__n128 a, __n128 b);
extern __n128 __cdecl __neon_fcmgtq32(__n128 a, __n128 b);
extern __n128 __cdecl __neon_fcmgtq64(__n128 a, __n128 b);

#define vcgt_s8(a,b)   __neon_cmgt8((a),(b))
#define vcgt_u8(a,b)   __neon_cmhi8((a),(b))
#define vcgt_s16(a,b)  __neon_cmgt16((a),(b))
#define vcgt_u16(a,b)  __neon_cmhi16((a),(b))
#define vcgt_s32(a,b)  __neon_cmgt32((a),(b))
#define vcgt_u32(a,b)  __neon_cmhi32((a),(b))
#define vcgt_s64(a,b)  __neon_cmgt64((a),(b))
#define vcgt_u64(a,b)  __neon_cmhi64((a),(b))
#define vcgt_f32(a,b)  __neon_fcmgt32((a),(b))
#define vcgt_f64(a,b)  __neon_fcmgt64((a),(b))

#define vcgtq_s8(a,b)   __neon_cmgtq8((a),(b))
#define vcgtq_u8(a,b)   __neon_cmhiq8((a),(b))
#define vcgtq_s16(a,b)  __neon_cmgtq16((a),(b))
#define vcgtq_u16(a,b)  __neon_cmhiq16((a),(b))
#define vcgtq_s32(a,b)  __neon_cmgtq32((a),(b))
#define vcgtq_u32(a,b)  __neon_cmhiq32((a),(b))
#define vcgtq_s64(a,b)  __neon_cmgtq64((a),(b))
#define vcgtq_u64(a,b)  __neon_cmhiq64((a),(b))
#define vcgtq_f32(a,b)  __neon_fcmgtq32((a),(b))
#define vcgtq_f64(a,b)  __neon_fcmgtq64((a),(b))

/* Less than */

#define vclt_s8(a,b)   __neon_cmgt8((b),(a))
#define vclt_u8(a,b)   __neon_cmhi8((b),(a))
#define vclt_s16(a,b)  __neon_cmgt16((b),(a))
#define vclt_u16(a,b)  __neon_cmhi16((b),(a))
#define vclt_s32(a,b)  __neon_cmgt32((b),(a))
#define vclt_u32(a,b)  __neon_cmhi32((b),(a))
#define vclt_s64(a,b)  __neon_cmgt64((b),(a))
#define vclt_u64(a,b)  __neon_cmhi64((b),(a))
#define vclt_f32(a,b)  __neon_fcmgt32((b),(a))
#define vclt_f64(a,b)  __neon_fcmgt64((b),(a))

#define vcltq_s8(a,b)   __neon_cmgtq8((b),(a))
#define vcltq_u8(a,b)   __neon_cmhiq8((b),(a))
#define vcltq_s16(a,b)  __neon_cmgtq16((b),(a))
#define vcltq_u16(a,b)  __neon_cmhiq16((b),(a))
#define vcltq_s32(a,b)  __neon_cmgtq32((b),(a))
#define vcltq_u32(a,b)  __neon_cmhiq32((b),(a))
#define vcltq_s64(a,b)  __neon_cmgtq64((b),(a))
#define vcltq_u64(a,b)  __neon_cmhiq64((b),(a))
#define vcltq_f32(a,b)  __neon_fcmgtq32((b),(a))
#define vcltq_f64(a,b)  __neon_fcmgtq64((b),(a))

/* TODO: Absolute greater than or equal to */
/* TODO: Absolute less than or equal to */
/* TODO: Absolute greater than */
/* TODO: Absolute less than */

/* Bitwise not equal to zero  */

extern __n64 __cdecl __neon_cmtst8(__n64 a, __n64 b);
extern __n64 __cdecl __neon_cmtst16(__n64 a, __n64 b);
extern __n64 __cdecl __neon_cmtst32(__n64 a, __n64 b);
extern __n64 __cdecl __neon_cmtst64(__n64 a, __n64 b);

extern __n128 __cdecl __neon_cmtstq8(__n128 a, __n128 b);
extern __n128 __cdecl __neon_cmtstq16(__n128 a, __n128 b);
extern __n128 __cdecl __neon_cmtstq32(__n128 a, __n128 b);
extern __n128 __cdecl __neon_cmtstq64(__n128 a, __n128 b);

#define vtst_s8(a,b)   __neon_cmtst8((a),(b))
#define vtst_u8(a,b)   __neon_cmtst8((a),(b))
#define vtst_s16(a,b)  __neon_cmtst16((a),(b))
#define vtst_u16(a,b)  __neon_cmtst16((a),(b))
#define vtst_s32(a,b)  __neon_cmtst32((a),(b))
#define vtst_u32(a,b)  __neon_cmtst32((a),(b))
#define vtst_s64(a,b)  __neon_cmtst64((a),(b))
#define vtst_u64(a,b)  __neon_cmtst64((a),(b))

#define vtstq_s8(a,b)   __neon_cmtstq8((a),(b))
#define vtstq_u8(a,b)   __neon_cmtstq8((a),(b))
#define vtstq_s16(a,b)  __neon_cmtstq16((a),(b))
#define vtstq_u16(a,b)  __neon_cmtstq16((a),(b))
#define vtstq_s32(a,b)  __neon_cmtstq32((a),(b))
#define vtstq_u32(a,b)  __neon_cmtstq32((a),(b))
#define vtstq_s64(a,b)  __neon_cmtstq64((a),(b))
#define vtstq_u64(a,b)  __neon_cmtstq64((a),(b))

/* Vector shift left */

extern __n64 __cdecl __neon_sshl8(__n64 a, __n64 b);
extern __n64 __cdecl __neon_sshl16(__n64 a, __n64 b);
extern __n64 __cdecl __neon_sshl32(__n64 a, __n64 b);
extern __n64 __cdecl __neon_sshl64(__n64 a, __n64 b);
extern __n64 __cdecl __neon_ushl8(__n64 a, __n64 b);
extern __n64 __cdecl __neon_ushl16(__n64 a, __n64 b);
extern __n64 __cdecl __neon_ushl32(__n64 a, __n64 b);
extern __n64 __cdecl __neon_ushl64(__n64 a, __n64 b);

extern __n128 __cdecl __neon_sshlq8(__n128 a, __n128 b);
extern __n128 __cdecl __neon_sshlq16(__n128 a, __n128 b);
extern __n128 __cdecl __neon_sshlq32(__n128 a, __n128 b);
extern __n128 __cdecl __neon_sshlq64(__n128 a, __n128 b);
extern __n128 __cdecl __neon_ushlq8(__n128 a, __n128 b);
extern __n128 __cdecl __neon_ushlq16(__n128 a, __n128 b);
extern __n128 __cdecl __neon_ushlq32(__n128 a, __n128 b);
extern __n128 __cdecl __neon_ushlq64(__n128 a, __n128 b);

#define vshl_s8(a,b)   __neon_sshl8((a),(b))
#define vshl_u8(a,b)   __neon_ushl8((a),(b))
#define vshl_s16(a,b)  __neon_sshl16((a),(b))
#define vshl_u16(a,b)  __neon_ushl16((a),(b))
#define vshl_s32(a,b)  __neon_sshl32((a),(b))
#define vshl_u32(a,b)  __neon_ushl32((a),(b))
#define vshl_s64(a,b)  __neon_sshl64((a),(b))
#define vshl_u64(a,b)  __neon_ushl64((a),(b))

#define vshlq_s8(a,b)   __neon_sshlq8((a),(b))
#define vshlq_u8(a,b)   __neon_ushlq8((a),(b))
#define vshlq_s16(a,b)  __neon_sshlq16((a),(b))
#define vshlq_u16(a,b)  __neon_ushlq16((a),(b))
#define vshlq_s32(a,b)  __neon_sshlq32((a),(b))
#define vshlq_u32(a,b)  __neon_ushlq32((a),(b))
#define vshlq_s64(a,b)  __neon_sshlq64((a),(b))
#define vshlq_u64(a,b)  __neon_ushlq64((a),(b))

/* TODO(?): int64_t vshld_s64(int64_t a, int64_t b) */
/* TODO(?): uint64_t vshld_u64(uint64_t a, int64_t b) */

extern __n64 __cdecl __neon_shli8(__n64 a, const int n);
extern __n64 __cdecl __neon_shli16(__n64 a, const int n);
extern __n64 __cdecl __neon_shli32(__n64 a, const int n);
extern __n64 __cdecl __neon_shli64(__n64 a, const int n);

extern __n128 __cdecl __neon_shliq8(__n128 a, const int n);
extern __n128 __cdecl __neon_shliq16(__n128 a, const int n);
extern __n128 __cdecl __neon_shliq32(__n128 a, const int n);
extern __n128 __cdecl __neon_shliq64(__n128 a, const int n);

#define vshl_n_s8(a,b)   __neon_shli8((a),(b))
#define vshl_n_u8(a,b)   __neon_shli8((a),(b))
#define vshl_n_s16(a,b)  __neon_shli16((a),(b))
#define vshl_n_u16(a,b)  __neon_shli16((a),(b))
#define vshl_n_s32(a,b)  __neon_shli32((a),(b))
#define vshl_n_u32(a,b)  __neon_shli32((a),(b))
#define vshl_n_s64(a,b)  __neon_shli64((a),(b))
#define vshl_n_u64(a,b)  __neon_shli64((a),(b))

#define vshlq_n_s8(a,b)   __neon_shliq8((a),(b))
#define vshlq_n_u8(a,b)   __neon_shliq8((a),(b))
#define vshlq_n_s16(a,b)  __neon_shliq16((a),(b))
#define vshlq_n_u16(a,b)  __neon_shliq16((a),(b))
#define vshlq_n_s32(a,b)  __neon_shliq32((a),(b))
#define vshlq_n_u32(a,b)  __neon_shliq32((a),(b))
#define vshlq_n_s64(a,b)  __neon_shliq64((a),(b))
#define vshlq_n_u64(a,b)  __neon_shliq64((a),(b))

/* TODO(?): int64_t vshld_n_s64(int64_t a, const int n) */
/* TODO(?): uint64_t vshld_n_u64(uint64_t a, const int n) */

/* TODO: Vector saturating shift left */
/* TODO: Vector rounding shift left */
/* TODO: Vector saturating rounding shift left */
/* TODO: Vector shift left and widen */
/* TODO: Vector shift left and insert */

/* Vector shift right */

extern __n64 __cdecl __neon_sshri8(__n64 a, const int n);
extern __n64 __cdecl __neon_sshri16(__n64 a, const int n);
extern __n64 __cdecl __neon_sshri32(__n64 a, const int n);
extern __n64 __cdecl __neon_sshri64(__n64 a, const int n);
extern __n64 __cdecl __neon_ushri8(__n64 a, const int n);
extern __n64 __cdecl __neon_ushri16(__n64 a, const int n);
extern __n64 __cdecl __neon_ushri32(__n64 a, const int n);
extern __n64 __cdecl __neon_ushri64(__n64 a, const int n);

extern __n128 __cdecl __neon_sshriq8(__n128 a, const int n);
extern __n128 __cdecl __neon_sshriq16(__n128 a, const int n);
extern __n128 __cdecl __neon_sshriq32(__n128 a, const int n);
extern __n128 __cdecl __neon_sshriq64(__n128 a, const int n);
extern __n128 __cdecl __neon_ushriq8(__n128 a, const int n);
extern __n128 __cdecl __neon_ushriq16(__n128 a, const int n);
extern __n128 __cdecl __neon_ushriq32(__n128 a, const int n);
extern __n128 __cdecl __neon_ushriq64(__n128 a, const int n);

#define vshr_n_s8(a,b)   __neon_sshri8((a),(b))
#define vshr_n_u8(a,b)   __neon_ushri8((a),(b))
#define vshr_n_s16(a,b)  __neon_sshri16((a),(b))
#define vshr_n_u16(a,b)  __neon_ushri16((a),(b))
#define vshr_n_s32(a,b)  __neon_sshri32((a),(b))
#define vshr_n_u32(a,b)  __neon_ushri32((a),(b))
#define vshr_n_s64(a,b)  __neon_sshri64((a),(b))
#define vshr_n_u64(a,b)  __neon_ushri64((a),(b))

#define vshrq_n_s8(a,b)   __neon_sshriq8((a),(b))
#define vshrq_n_u8(a,b)   __neon_ushriq8((a),(b))
#define vshrq_n_s16(a,b)  __neon_sshriq16((a),(b))
#define vshrq_n_u16(a,b)  __neon_ushriq16((a),(b))
#define vshrq_n_s32(a,b)  __neon_sshriq32((a),(b))
#define vshrq_n_u32(a,b)  __neon_ushriq32((a),(b))
#define vshrq_n_s64(a,b)  __neon_sshriq64((a),(b))
#define vshrq_n_u64(a,b)  __neon_ushriq64((a),(b))

/* TODO(?): int64_t vshrd_n_s64(int64_t a, const int n) */
/* TODO(?): uint64_t vshrd_n_u64(uint64_t a, const int n) */

/* TODO: Vector rounding shift right */
/* TODO: Vector shift right and accumulate */
/* TODO: Vector rounding shift right and accumulate */
/* TODO: Vector shift right and narrow */
/* TODO: Vector saturating shift right and narrow */
/* TODO: Vector saturating rounding shift right and narrow */
/* TODO: Vector rounding shift right and narrow */
/* TODO: Vector shift right and insert */

/* Conversions (conversions, and some conversions) */

extern __n64 __cdecl __neon_fcvtzs32(__n64 a);
extern __n64 __cdecl __neon_fcvtzu32(__n64 a);
extern __n64 __cdecl __neon_fcvtas32(__n64 a);
extern __n64 __cdecl __neon_fcvtau32(__n64 a);
extern __n64 __cdecl __neon_fcvtms32(__n64 a);
extern __n64 __cdecl __neon_fcvtmu32(__n64 a);
extern __n64 __cdecl __neon_fcvtns32(__n64 a);
extern __n64 __cdecl __neon_fcvtnu32(__n64 a);
extern __n64 __cdecl __neon_fcvtps32(__n64 a);
extern __n64 __cdecl __neon_fcvtpu32(__n64 a);

extern __n128 __cdecl __neon_fcvtzsq32(__n128 a);
extern __n128 __cdecl __neon_fcvtzuq32(__n128 a);
extern __n128 __cdecl __neon_fcvtasq32(__n128 a);
extern __n128 __cdecl __neon_fcvtauq32(__n128 a);
extern __n128 __cdecl __neon_fcvtmsq32(__n128 a);
extern __n128 __cdecl __neon_fcvtmuq32(__n128 a);
extern __n128 __cdecl __neon_fcvtnsq32(__n128 a);
extern __n128 __cdecl __neon_fcvtnuq32(__n128 a);
extern __n128 __cdecl __neon_fcvtpsq32(__n128 a);
extern __n128 __cdecl __neon_fcvtpuq32(__n128 a);

extern __n64 __cdecl __neon_fcvtzs64(__n64 a);
extern __n64 __cdecl __neon_fcvtzu64(__n64 a);
extern __n64 __cdecl __neon_fcvtas64(__n64 a);
extern __n64 __cdecl __neon_fcvtau64(__n64 a);
extern __n64 __cdecl __neon_fcvtms64(__n64 a);
extern __n64 __cdecl __neon_fcvtmu64(__n64 a);
extern __n64 __cdecl __neon_fcvtns64(__n64 a);
extern __n64 __cdecl __neon_fcvtnu64(__n64 a);
extern __n64 __cdecl __neon_fcvtps64(__n64 a);
extern __n64 __cdecl __neon_fcvtpu64(__n64 a);

extern __n128 __cdecl __neon_fcvtzsq64(__n128 a);
extern __n128 __cdecl __neon_fcvtzuq64(__n128 a);
extern __n128 __cdecl __neon_fcvtasq64(__n128 a);
extern __n128 __cdecl __neon_fcvtauq64(__n128 a);
extern __n128 __cdecl __neon_fcvtmsq64(__n128 a);
extern __n128 __cdecl __neon_fcvtmuq64(__n128 a);
extern __n128 __cdecl __neon_fcvtnsq64(__n128 a);
extern __n128 __cdecl __neon_fcvtnuq64(__n128 a);
extern __n128 __cdecl __neon_fcvtpsq64(__n128 a);
extern __n128 __cdecl __neon_fcvtpuq64(__n128 a);

extern __n64 __cdecl __neon_scvtf32(__n64 a);
extern __n64 __cdecl __neon_ucvtf32(__n64 a);
extern __n64 __cdecl __neon_scvtf64(__n64 a);
extern __n64 __cdecl __neon_ucvtf64(__n64 a);

extern __n128 __cdecl __neon_scvtfq32(__n128 a);
extern __n128 __cdecl __neon_ucvtfq32(__n128 a);
extern __n128 __cdecl __neon_scvtfq64(__n128 a);
extern __n128 __cdecl __neon_ucvtfq64(__n128 a);

/* scalar ...
 int32_t vcvts_s32_f32(float32_t a)         // neon_fcvtzss32(x)
uint32_t vcvts_u32_f32(float32_t a)         // neon_fcvtzus32(x)
 int32_t vcvtas_s32_f32(float32_t a)        // neon_fcvtass32(x)
uint32_t vcvtas_u32_f32(float32_t a)        // neon_fcvtaus32(x)
 int32_t vcvtms_s32_f32(float32_t a)        // neon_fcvtmss32(x)
uint32_t vcvtms_u32_f32(float32_t a)        // neon_fcvtmus32(x)
 int32_t vcvtns_s32_f32(float32_t a)        // neon_fcvtnss32(x)
uint32_t vcvtns_u32_f32(float32_t a)        // neon_fcvtnus32(x)
 int32_t vcvtps_s32_f32(float32_t a)        // neon_fcvtpss32(x)
uint32_t vcvtps_u32_f32(float32_t a)        // neon_fcvtpus32(x)

 int64_t vcvtd_s64_f64(float64_t a)         // neon_fcvtzss64()
uint64_t vcvtd_u64_f64(float64_t a)         // neon_fcvtzus64()
 int64_t vcvtad_s64_f64(float64_t a)        // neon_fcvtass64()
uint64_t vcvtad_u64_f64(float64_t a)        // neon_fcvtaus64()
 int64_t vcvtmd_s64_f64(float64_t a)        // neon_fcvtmss64()
uint64_t vcvtmd_u64_f64(float64_t a)        // neon_fcvtmus64()
 int64_t vcvtnd_s64_f64(float64_t a)        // neon_fcvtnss64()
uint64_t vcvtnd_u64_f64(float64_t a)        // neon_fcvtnus64()
 int64_t vcvtpd_s64_f64(float64_t a)        // neon_fcvtpss64()
uint64_t vcvtpd_u64_f64(float64_t a)        // neon_fcvtpus64()

float32_t vcvts_f32_s32(int32_t a)          // neon_scvtfs32()
float32_t vcvts_f32_u32(uint32_t a)         // neon_ucvtfs32()
float64_t vcvtd_f64_s64(int64_t a)          // neon_scvtfs64()
float64_t vcvtd_f64_u64(uint64_t a)         // neon_ucvtfs64()
*/

#define vcvt_s32_f32(a)   __neon_fcvtzs32(a)
#define vcvt_u32_f32(a)   __neon_fcvtzu32(a)
#define vcvta_s32_f32(a)  __neon_fcvtas32(a)
#define vcvta_u32_f32(a)  __neon_fcvtau32(a)
#define vcvtm_s32_f32(a)  __neon_fcvtms32(a)
#define vcvtm_u32_f32(a)  __neon_fcvtmu32(a)
#define vcvtn_s32_f32(a)  __neon_fcvtns32(a)
#define vcvtn_u32_f32(a)  __neon_fcvtnu32(a)
#define vcvtp_s32_f32(a)  __neon_fcvtps32(a)
#define vcvtp_u32_f32(a)  __neon_fcvtpu32(a)

#define vcvtq_s32_f32(a)   __neon_fcvtzsq32(a)
#define vcvtq_u32_f32(a)   __neon_fcvtzuq32(a)
#define vcvtaq_s32_f32(a)  __neon_fcvtasq32(a)
#define vcvtaq_u32_f32(a)  __neon_fcvtauq32(a)
#define vcvtmq_s32_f32(a)  __neon_fcvtmsq32(a)
#define vcvtmq_u32_f32(a)  __neon_fcvtmuq32(a)
#define vcvtnq_s32_f32(a)  __neon_fcvtnsq32(a)
#define vcvtnq_u32_f32(a)  __neon_fcvtnuq32(a)
#define vcvtpq_s32_f32(a)  __neon_fcvtpsq32(a)
#define vcvtpq_u32_f32(a)  __neon_fcvtpuq32(a)

#define vcvt_s64_f64(a)   __neon_fcvtzs64(a)
#define vcvt_u64_f64(a)   __neon_fcvtzu64(a)
#define vcvta_s64_f64(a)  __neon_fcvtas64(a)
#define vcvta_u64_f64(a)  __neon_fcvtau64(a)
#define vcvtm_s64_f64(a)  __neon_fcvtms64(a)
#define vcvtm_u64_f64(a)  __neon_fcvtmu64(a)
#define vcvtn_s64_f64(a)  __neon_fcvtns64(a)
#define vcvtn_u64_f64(a)  __neon_fcvtnu64(a)
#define vcvtp_s64_f64(a)  __neon_fcvtps64(a)
#define vcvtp_u64_f64(a)  __neon_fcvtpu64(a)

#define vcvtq_s64_f64(a)   __neon_fcvtzsq64(a)
#define vcvtq_u64_f64(a)   __neon_fcvtzuq64(a)
#define vcvtaq_s64_f64(a)  __neon_fcvtasq64(a)
#define vcvtaq_u64_f64(a)  __neon_fcvtauq64(a)
#define vcvtmq_s64_f64(a)  __neon_fcvtmsq64(a)
#define vcvtmq_u64_f64(a)  __neon_fcvtmuq64(a)
#define vcvtnq_s64_f64(a)  __neon_fcvtnsq64(a)
#define vcvtnq_u64_f64(a)  __neon_fcvtnuq64(a)
#define vcvtpq_s64_f64(a)  __neon_fcvtpsq64(a)
#define vcvtpq_u64_f64(a)  __neon_fcvtpuq64(a)

#define vcvt_f32_s32(a)  __neon_scvtf32(a)
#define vcvt_f32_u32(a)  __neon_ucvtf32(a)

#define vcvt_f64_s64(a)  __neon_scvtf64(a)
#define vcvt_f64_u64(a)  __neon_ucvtf64(a)

#define vcvtq_f32_s32(a)  __neon_scvtfq32(a)
#define vcvtq_f32_u32(a)  __neon_ucvtfq32(a)

#define vcvtq_f64_s64(a)  __neon_scvtfq64(a)
#define vcvtq_f64_u64(a)  __neon_ucvtfq64(a)

#if 0  /* TODO(?) */

float32x2_t vcvt_f32_f64(float64x2_t a)
float64x2_t vcvt_f64_f32(float32x2_t a)

float32x4_t vcvt_high_f32_f64(float32x2_t r, float64x2_t a)
float64x2_t vcvt_high_f64_f32(float32x4_t a)

float32x2_t vcvtx_f32_f64(float64x2_t a)
float32x4_t vcvtx_high_f32_f64(float32x2_t r, float64x2_t a)

float32_t vcvtxd_f32_f64(float64_t a)

/* fixed-point
 int32x2_t vcvt_n_s32_f32(float32x2_t a, const int n)
uint32x2_t vcvt_n_u32_f32(float32x2_t a, const int n)
 int64x1_t vcvt_n_s64_f64(float64x1_t a, const int n)
uint64x1_t vcvt_n_u64_f64(float64x1_t a, const int n)

 int32_t vcvts_n_s32_f32(float32_t a, const int n)
uint32_t vcvts_n_u32_f32(float32_t a, const int n)

 int64_t vcvtd_n_s64_f64(float64_t a, const int n)
uint64_t vcvtd_n_u64_f64(float64_t a, const int n)

 int32x4_t vcvtq_n_s32_f32(float32x4_t a, const int n)
uint32x4_t vcvtq_n_u32_f32(float32x4_t a, const int n)
 int64x2_t vcvtq_n_s64_f64(float64x2_t a, const int n)
uint64x2_t vcvtq_n_u64_f64(float64x2_t a, const int n)

float32x2_t vcvt_n_f32_s32(int32x2_t a, const int n)
float32x2_t vcvt_n_f32_u32(uint32x2_t a, const int n)
float64x1_t vcvt_n_f64_s64(int64x1_t a, const int n)
float64x1_t vcvt_n_f64_u64(uint64x1_t a, const int n)

float32x4_t vcvtq_n_f32_s32(int32x4_t a, const int n)
float32x4_t vcvtq_n_f32_u32(uint32x4_t a, const int n)
float64x2_t vcvtq_n_f64_s64(int64x2_t a, const int n)
float64x2_t vcvtq_n_f64_u64(uint64x2_t a, const int n)

float32_t vcvts_n_f32_s32(int32_t a, const int n)
float32_t vcvts_n_f32_u32(uint32_t a, const int n)

float64_t vcvtd_n_f64_s64(int64_t a, const int n)
float64_t vcvtd_n_f64_u64(uint64_t a, const int n)
*/

#endif

/* TODO: Move, Narrow */
/* TODO: Move, Widen */
/* TODO: Move, Saturating narrow */

/* TODO: Vector multiply-accumulate by scalar */
/* TODO: Vector multiply-subtract by scalar */
/* TODO: Vector multiply by scalar */
/* TODO: Vector multiply by scalar and widen */
/* TODO: Vector multiply-accumulate by scalar and widen */
/* TODO: Fused multiply-accumulate by scalar */

/* Negate */

extern __n64 __cdecl __neon_neg8(__n64 a);
extern __n64 __cdecl __neon_neg16(__n64 a);
extern __n64 __cdecl __neon_neg32(__n64 a);
extern __n64 __cdecl __neon_neg64(__n64 a);
extern __n64 __cdecl __neon_fneg32(__n64 a);
extern __n64 __cdecl __neon_fneg64(__n64 a);

extern __n128 __cdecl __neon_negq8(__n128 a);
extern __n128 __cdecl __neon_negq16(__n128 a);
extern __n128 __cdecl __neon_negq32(__n128 a);
extern __n128 __cdecl __neon_negq64(__n128 a);
extern __n128 __cdecl __neon_fnegq32(__n128 a);
extern __n128 __cdecl __neon_fnegq64(__n128 a);

#define vneg_s8(a)   __neon_neg8(a)
#define vneg_s16(a)  __neon_neg16(a)
#define vneg_s32(a)  __neon_neg32(a)
#define vneg_s64(a)  __neon_neg64(a)
#define vneg_f32(a)  __neon_fneg32(a)
#define vneg_f64(a)  __neon_fneg64(a)

#define vnegq_s8(a)   __neon_negq8(a)
#define vnegq_s16(a)  __neon_negq16(a)
#define vnegq_s32(a)  __neon_negq32(a)
#define vnegq_s64(a)  __neon_negq64(a)
#define vnegq_f32(a)  __neon_fnegq32(a)
#define vnegq_f64(a)  __neon_fnegq64(a)

/* TODO(?): int64_t vnegd_s64(int64_t a) */

/* TODO: Saturating Negate */

/* Bitwise NOT */

extern __n64 __cdecl __neon_not(__n64 a);
extern __n128 __cdecl __neon_notq(__n128 a);

#define vmvn_s8(a)   __neon_not(a)
#define vmvn_s16(a)  __neon_not(a)
#define vmvn_s32(a)  __neon_not(a)
#define vmvn_u8(a)   __neon_not(a)
#define vmvn_u16(a)  __neon_not(a)
#define vmvn_u32(a)  __neon_not(a)

#define vmvnq_s8(a)   __neon_notq(a)
#define vmvnq_s16(a)  __neon_notq(a)
#define vmvnq_s32(a)  __neon_notq(a)
#define vmvnq_u8(a)   __neon_notq(a)
#define vmvnq_u16(a)  __neon_notq(a)
#define vmvnq_u32(a)  __neon_notq(a)

/* Bitwise AND */

extern __n64 __cdecl __neon_and(__n64 a, __n64 b);
extern __n128 __cdecl __neon_andq(__n128 a, __n128 b);

#define vand_s8(a,b)   __neon_and((a),(b))
#define vand_u8(a,b)   __neon_and((a),(b))
#define vand_s16(a,b)  __neon_and((a),(b))
#define vand_u16(a,b)  __neon_and((a),(b))
#define vand_s32(a,b)  __neon_and((a),(b))
#define vand_u32(a,b)  __neon_and((a),(b))
#define vand_s64(a,b)  __neon_and((a),(b))
#define vand_u64(a,b)  __neon_and((a),(b))

#define vandq_s8(a,b)   __neon_andq((a),(b))
#define vandq_u8(a,b)   __neon_andq((a),(b))
#define vandq_s16(a,b)  __neon_andq((a),(b))
#define vandq_u16(a,b)  __neon_andq((a),(b))
#define vandq_s32(a,b)  __neon_andq((a),(b))
#define vandq_u32(a,b)  __neon_andq((a),(b))
#define vandq_s64(a,b)  __neon_andq((a),(b))
#define vandq_u64(a,b)  __neon_andq((a),(b))

/* Bitwise OR */

extern __n64 __cdecl __neon_orr(__n64 a, __n64 b);
extern __n128 __cdecl __neon_orrq(__n128 a, __n128 b);

#define vorr_s8(a,b)   __neon_orr((a),(b))
#define vorr_u8(a,b)   __neon_orr((a),(b))
#define vorr_s16(a,b)  __neon_orr((a),(b))
#define vorr_u16(a,b)  __neon_orr((a),(b))
#define vorr_s32(a,b)  __neon_orr((a),(b))
#define vorr_u32(a,b)  __neon_orr((a),(b))
#define vorr_s64(a,b)  __neon_orr((a),(b))
#define vorr_u64(a,b)  __neon_orr((a),(b))

#define vorrq_s8(a,b)   __neon_orrq((a),(b))
#define vorrq_u8(a,b)   __neon_orrq((a),(b))
#define vorrq_s16(a,b)  __neon_orrq((a),(b))
#define vorrq_u16(a,b)  __neon_orrq((a),(b))
#define vorrq_s32(a,b)  __neon_orrq((a),(b))
#define vorrq_u32(a,b)  __neon_orrq((a),(b))
#define vorrq_s64(a,b)  __neon_orrq((a),(b))
#define vorrq_u64(a,b)  __neon_orrq((a),(b))

/* Bitwise Exclusive OR */

extern __n64 __cdecl __neon_eor(__n64 a, __n64 b);
extern __n128 __cdecl __neon_eorq(__n128 a, __n128 b);

#define veor_s8(a,b)   __neon_eor((a),(b))
#define veor_u8(a,b)   __neon_eor((a),(b))
#define veor_s16(a,b)  __neon_eor((a),(b))
#define veor_u16(a,b)  __neon_eor((a),(b))
#define veor_s32(a,b)  __neon_eor((a),(b))
#define veor_u32(a,b)  __neon_eor((a),(b))
#define veor_s64(a,b)  __neon_eor((a),(b))
#define veor_u64(a,b)  __neon_eor((a),(b))

#define veorq_s8(a,b)   __neon_eorq((a),(b))
#define veorq_u8(a,b)   __neon_eorq((a),(b))
#define veorq_s16(a,b)  __neon_eorq((a),(b))
#define veorq_u16(a,b)  __neon_eorq((a),(b))
#define veorq_s32(a,b)  __neon_eorq((a),(b))
#define veorq_u32(a,b)  __neon_eorq((a),(b))
#define veorq_s64(a,b)  __neon_eorq((a),(b))
#define veorq_u64(a,b)  __neon_eorq((a),(b))

/* OR-NOT */

extern __n64 __cdecl __neon_orn(__n64 a, __n64 b);
extern __n128 __cdecl __neon_ornq(__n128 a, __n128 b);

#define vorn_s8(a,b)   __neon_orn((a),(b))
#define vorn_u8(a,b)   __neon_orn((a),(b))
#define vorn_s16(a,b)  __neon_orn((a),(b))
#define vorn_u16(a,b)  __neon_orn((a),(b))
#define vorn_s32(a,b)  __neon_orn((a),(b))
#define vorn_u32(a,b)  __neon_orn((a),(b))
#define vorn_s64(a,b)  __neon_orn((a),(b))
#define vorn_u64(a,b)  __neon_orn((a),(b))

#define vornq_s8(a,b)   __neon_ornq((a),(b))
#define vornq_u8(a,b)   __neon_ornq((a),(b))
#define vornq_s16(a,b)  __neon_ornq((a),(b))
#define vornq_u16(a,b)  __neon_ornq((a),(b))
#define vornq_s32(a,b)  __neon_ornq((a),(b))
#define vornq_u32(a,b)  __neon_ornq((a),(b))
#define vornq_s64(a,b)  __neon_ornq((a),(b))
#define vornq_u64(a,b)  __neon_ornq((a),(b))

/* Count leading sign bits */

extern __n64 __cdecl __neon_cls8(__n64 a);
extern __n64 __cdecl __neon_cls16(__n64 a);
extern __n64 __cdecl __neon_cls32(__n64 a);

extern __n128 __cdecl __neon_clsq8(__n128 a);
extern __n128 __cdecl __neon_clsq16(__n128 a);
extern __n128 __cdecl __neon_clsq32(__n128 a);

#define vcls_s8(a)   __neon_cls8(a)
#define vcls_s16(a)  __neon_cls16(a)
#define vcls_s32(a)  __neon_cls32(a)

#define vclsq_s8(a)   __neon_clsq8(a)
#define vclsq_s16(a)  __neon_clsq16(a)
#define vclsq_s32(a)  __neon_clsq32(a)

/* Count leading zeros */

extern __n64 __cdecl __neon_clz8(__n64 a);
extern __n64 __cdecl __neon_clz16(__n64 a);
extern __n64 __cdecl __neon_clz32(__n64 a);

extern __n128 __cdecl __neon_clzq8(__n128 a);
extern __n128 __cdecl __neon_clzq16(__n128 a);
extern __n128 __cdecl __neon_clzq32(__n128 a);

#define vclz_s8(a)   __neon_clz8(a)
#define vclz_u8(a)   __neon_clz8(a)
#define vclz_s16(a)  __neon_clz16(a)
#define vclz_u16(a)  __neon_clz16(a)
#define vclz_s32(a)  __neon_clz32(a)
#define vclz_u32(a)  __neon_clz32(a)

#define vclzq_s8(a)   __neon_clzq8(a)
#define vclzq_u8(a)   __neon_clzq8(a)
#define vclzq_s16(a)  __neon_clzq16(a)
#define vclzq_u16(a)  __neon_clzq16(a)
#define vclzq_s32(a)  __neon_clzq32(a)
#define vclzq_u32(a)  __neon_clzq32(a)

/* Population count */

extern __n64 __cdecl __neon_cnt8(__n64 a);
extern __n128 __cdecl __neon_cntq8(__n128 a);

#define vcnt_s8(a)  __neon_cnt8(a)
#define vcnt_u8(a)  __neon_cnt8(a)

#define vcntq_s8(a)  __neon_cntq8(a)
#define vcntq_u8(a)  __neon_cntq8(a)

/* Bitwise clear */

extern __n64 __cdecl __neon_bic(__n64 a, __n64 b);
extern __n128 __cdecl __neon_bicq(__n128 a, __n128 b);

#define vbic_s8(a,b)   __neon_bic((a),(b))
#define vbic_u8(a,b)   __neon_bic((a),(b))
#define vbic_s16(a,b)  __neon_bic((a),(b))
#define vbic_u16(a,b)  __neon_bic((a),(b))
#define vbic_s32(a,b)  __neon_bic((a),(b))
#define vbic_u32(a,b)  __neon_bic((a),(b))
#define vbic_s64(a,b)  __neon_bic((a),(b))
#define vbic_u64(a,b)  __neon_bic((a),(b))

#define vbicq_s8(a,b)   __neon_bicq((a),(b))
#define vbicq_u8(a,b)   __neon_bicq((a),(b))
#define vbicq_s16(a,b)  __neon_bicq((a),(b))
#define vbicq_u16(a,b)  __neon_bicq((a),(b))
#define vbicq_s32(a,b)  __neon_bicq((a),(b))
#define vbicq_u32(a,b)  __neon_bicq((a),(b))
#define vbicq_s64(a,b)  __neon_bicq((a),(b))
#define vbicq_u64(a,b)  __neon_bicq((a),(b))

/* Bitwise select */

extern __n64 __cdecl __neon_bsl(__n64 a, __n64 b, __n64 c);
extern __n128 __cdecl __neon_bslq(__n128 a, __n128 b, __n128 c);

#define vbsl_s8(a,b,c)   __neon_bsl((a),(b),(c))
#define vbsl_u8(a,b,c)   __neon_bsl((a),(b),(c))
#define vbsl_s16(a,b,c)  __neon_bsl((a),(b),(c))
#define vbsl_u16(a,b,c)  __neon_bsl((a),(b),(c))
#define vbsl_s32(a,b,c)  __neon_bsl((a),(b),(c))
#define vbsl_u32(a,b,c)  __neon_bsl((a),(b),(c))
#define vbsl_s64(a,b,c)  __neon_bsl((a),(b),(c))
#define vbsl_u64(a,b,c)  __neon_bsl((a),(b),(c))
#define vbsl_f32(a,b,c)  __neon_bsl((a),(b),(c))
#define vbsl_f64(a,b,c)  __neon_bsl((a),(b),(c))

#define vbslq_s8(a,b,c)   __neon_bslq((a),(b),(c))
#define vbslq_u8(a,b,c)   __neon_bslq((a),(b),(c))
#define vbslq_s16(a,b,c)  __neon_bslq((a),(b),(c))
#define vbslq_u16(a,b,c)  __neon_bslq((a),(b),(c))
#define vbslq_s32(a,b,c)  __neon_bslq((a),(b),(c))
#define vbslq_u32(a,b,c)  __neon_bslq((a),(b),(c))
#define vbslq_s64(a,b,c)  __neon_bslq((a),(b),(c))
#define vbslq_u64(a,b,c)  __neon_bslq((a),(b),(c))
#define vbslq_f32(a,b,c)  __neon_bslq((a),(b),(c))
#define vbslq_f64(a,b,c)  __neon_bslq((a),(b),(c))

/* Copy vector lane */

extern __n64 __cdecl __neon_inse8(__n64 a, const int lane1, __n64 b, const int lane2);
extern __n64 __cdecl __neon_inse16(__n64 a, const int lane1, __n64 b, const int lane2);
extern __n64 __cdecl __neon_inse32(__n64 a, const int lane1, __n64 b, const int lane2);
extern __n64 __cdecl __neon_inse64(__n64 a, const int lane1, __n64 b, const int lane2);

extern __n64 __cdecl __neon_inse8q(__n64 a, const int lane1, __n128 b, const int lane2);
extern __n64 __cdecl __neon_inse16q(__n64 a, const int lane1, __n128 b, const int lane2);
extern __n64 __cdecl __neon_inse32q(__n64 a, const int lane1, __n128 b, const int lane2);
extern __n64 __cdecl __neon_inse64q(__n64 a, const int lane1, __n128 b, const int lane2);

extern __n128 __cdecl __neon_insqe8(__n128 a, const int lane1, __n64 b, const int lane2);
extern __n128 __cdecl __neon_insqe16(__n128 a, const int lane1, __n64 b, const int lane2);
extern __n128 __cdecl __neon_insqe32(__n128 a, const int lane1, __n64 b, const int lane2);
extern __n128 __cdecl __neon_insqe64(__n128 a, const int lane1, __n64 b, const int lane2);

extern __n128 __cdecl __neon_insqe8q(__n128 a, const int lane1, __n128 n, const int lane2);
extern __n128 __cdecl __neon_insqe16q(__n128 a, const int lane1, __n128 n, const int lane2);
extern __n128 __cdecl __neon_insqe32q(__n128 a, const int lane1, __n128 n, const int lane2);
extern __n128 __cdecl __neon_insqe64q(__n128 a, const int lane1, __n128 n, const int lane2);

#define vcopy_lane_s8(a,lane1,b,lane2)   __neon_inse8((a),(lane1),(b),(lane2))
#define vcopy_lane_u8(a,lane1,b,lane2)   __neon_inse8((a),(lane1),(b),(lane2))
#define vcopy_lane_s16(a,lane1,b,lane2)  __neon_inse16((a),(lane1),(b),(lane2))
#define vcopy_lane_u16(a,lane1,b,lane2)  __neon_inse16((a),(lane1),(b),(lane2))
#define vcopy_lane_s32(a,lane1,b,lane2)  __neon_inse32((a),(lane1),(b),(lane2))
#define vcopy_lane_u32(a,lane1,b,lane2)  __neon_inse32((a),(lane1),(b),(lane2))
#define vcopy_lane_s64(a,lane1,b,lane2)  __neon_inse64((a),(lane1),(b),(lane2))
#define vcopy_lane_u64(a,lane1,b,lane2)  __neon_inse64((a),(lane1),(b),(lane2))
#define vcopy_lane_f32(a,lane1,b,lane2)  __neon_inse32((a),(lane1),(b),(lane2))
#define vcopy_lane_f64(a,lane1,b,lane2)  __neon_inse64((a),(lane1),(b),(lane2))
/**/
#define vcopy_laneq_s8(a,lane1,b,lane2)   __neon_inse8q((a),(lane1),(b),(lane2))
#define vcopy_laneq_u8(a,lane1,b,lane2)   __neon_inse8q((a),(lane1),(b),(lane2))
#define vcopy_laneq_s16(a,lane1,b,lane2)  __neon_inse16q((a),(lane1),(b),(lane2))
#define vcopy_laneq_u16(a,lane1,b,lane2)  __neon_inse16q((a),(lane1),(b),(lane2))
#define vcopy_laneq_s32(a,lane1,b,lane2)  __neon_inse32q((a),(lane1),(b),(lane2))
#define vcopy_laneq_u32(a,lane1,b,lane2)  __neon_inse32q((a),(lane1),(b),(lane2))
#define vcopy_laneq_s64(a,lane1,b,lane2)  __neon_inse64q((a),(lane1),(b),(lane2))
#define vcopy_laneq_u64(a,lane1,b,lane2)  __neon_inse64q((a),(lane1),(b),(lane2))
#define vcopy_laneq_f32(a,lane1,b,lane2)  __neon_inse32q((a),(lane1),(b),(lane2))
#define vcopy_laneq_f64(a,lane1,b,lane2)  __neon_inse64q((a),(lane1),(b),(lane2))

#define vcopyq_lane_s8(a,lane1,b,lane2)   __neon_insqe8((a),(lane1),(b),(lane2))
#define vcopyq_lane_u8(a,lane1,b,lane2)   __neon_insqe8((a),(lane1),(b),(lane2))
#define vcopyq_lane_s16(a,lane1,b,lane2)  __neon_insqe16((a),(lane1),(b),(lane2))
#define vcopyq_lane_u16(a,lane1,b,lane2)  __neon_insqe16((a),(lane1),(b),(lane2))
#define vcopyq_lane_s32(a,lane1,b,lane2)  __neon_insqe32((a),(lane1),(b),(lane2))
#define vcopyq_lane_u32(a,lane1,b,lane2)  __neon_insqe32((a),(lane1),(b),(lane2))
#define vcopyq_lane_s64(a,lane1,b,lane2)  __neon_insqe64((a),(lane1),(b),(lane2))
#define vcopyq_lane_u64(a,lane1,b,lane2)  __neon_insqe64((a),(lane1),(b),(lane2))
#define vcopyq_lane_f32(a,lane1,b,lane2)  __neon_insqe32((a),(lane1),(b),(lane2))
#define vcopyq_lane_f64(a,lane1,b,lane2)  __neon_insqe64((a),(lane1),(b),(lane2))
/**/
#define vcopyq_laneq_s8(a,lane1,b,lane2)   __neon_insqe8q((a),(lane1),(b),(lane2))
#define vcopyq_laneq_u8(a,lane1,b,lane2)   __neon_insqe8q((a),(lane1),(b),(lane2))
#define vcopyq_laneq_s16(a,lane1,b,lane2)  __neon_insqe16q((a),(lane1),(b),(lane2))
#define vcopyq_laneq_u16(a,lane1,b,lane2)  __neon_insqe16q((a),(lane1),(b),(lane2))
#define vcopyq_laneq_s32(a,lane1,b,lane2)  __neon_insqe32q((a),(lane1),(b),(lane2))
#define vcopyq_laneq_u32(a,lane1,b,lane2)  __neon_insqe32q((a),(lane1),(b),(lane2))
#define vcopyq_laneq_s64(a,lane1,b,lane2)  __neon_insqe64q((a),(lane1),(b),(lane2))
#define vcopyq_laneq_u64(a,lane1,b,lane2)  __neon_insqe64q((a),(lane1),(b),(lane2))
#define vcopyq_laneq_f32(a,lane1,b,lane2)  __neon_insqe32q((a),(lane1),(b),(lane2))
#define vcopyq_laneq_f64(a,lane1,b,lane2)  __neon_insqe64q((a),(lane1),(b),(lane2))

/* Reverse bits within elements */

extern __n64 __cdecl __neon_rbit(__n64 a);
extern __n128 __cdecl __neon_rbitq(__n128 a);

#define vrbit_s8(src)  __neon_rbit(a)
#define vrbit_u8(src)  __neon_rbit(a)

#define vrbitq_s8(src)  __neon_rbitq(a)
#define vrbitq_u8(src)  __neon_rbitq(a)

/* Create vector */

extern __n64 __cdecl __neon_create(unsigned __int64 x);

#define vcreate_s8(x)   __neon_create(x)
#define vcreate_u8(x)   __neon_create(x)
#define vcreate_s16(x)  __neon_create(x)
#define vcreate_u16(x)  __neon_create(x)
#define vcreate_s32(x)  __neon_create(x)
#define vcreate_u32(x)  __neon_create(x)
#define vcreate_s64(x)  __neon_create(x)
#define vcreate_u64(x)  __neon_create(x)
#define vcreate_f32(x)  __neon_create(x)
#define vcreate_f64(x)  __neon_create(x)

/* Set all lanes to the same value (TM) */

extern __n64 __cdecl __neon_dup_u8(unsigned __int8 x);
extern __n64 __cdecl __neon_dup_u16(unsigned __int16 x);
extern __n64 __cdecl __neon_dup_u32(unsigned __int32 x);
extern __n64 __cdecl __neon_dup_u64(unsigned __int64 x);

extern __n128 __cdecl __neon_dupq_u8(unsigned __int8 x);
extern __n128 __cdecl __neon_dupq_u16(unsigned __int16 x);
extern __n128 __cdecl __neon_dupq_u32(unsigned __int32 x);
extern __n128 __cdecl __neon_dupq_u64(unsigned __int64 x);

#define vdup_n_s8(x)   __neon_dup_u8(x)
#define vdup_n_u8(x)   __neon_dup_u8(x)
#define vdup_n_s16(x)  __neon_dup_u16(x)
#define vdup_n_u16(x)  __neon_dup_u16(x)
#define vdup_n_s32(x)  __neon_dup_u32(x)
#define vdup_n_u32(x)  __neon_dup_u32(x)
#define vdup_n_s64(x)  __neon_dup_u64(x)
#define vdup_n_u64(x)  __neon_dup_u64(x)
#define vdup_n_f32(x)  __neon_dup_u32(_U32_FROM_F32(x))
#define vdup_n_f64(x)  __neon_dup_u64(_U64_FROM_F64(x))

#define vdupq_n_s8(x)   __neon_dupq_u8(x)
#define vdupq_n_u8(x)   __neon_dupq_u8(x)
#define vdupq_n_s16(x)  __neon_dupq_u16(x)
#define vdupq_n_u16(x)  __neon_dupq_u16(x)
#define vdupq_n_s32(x)  __neon_dupq_u32(x)
#define vdupq_n_u32(x)  __neon_dupq_u32(x)
#define vdupq_n_s64(x)  __neon_dupq_u64(x)
#define vdupq_n_u64(x)  __neon_dupq_u64(x)
#define vdupq_n_f32(x)  __neon_dupq_u32(_U32_FROM_F32(x))
#define vdupq_n_f64(x)  __neon_dupq_u64(_U64_FROM_F64(x))

#define vmov_n_s8(x)   vdup_n_s8(x)
#define vmov_n_s16(x)  vdup_n_s16(x)
#define vmov_n_s32(x)  vdup_n_s32(x)
#define vmov_n_s64(x)  vdup_n_s64(x)
#define vmov_n_u8(x)   vdup_n_u8(x)
#define vmov_n_u16(x)  vdup_n_u16(x)
#define vmov_n_u32(x)  vdup_n_u32(x)
#define vmov_n_u64(x)  vdup_n_u64(x)
#define vmov_n_f32(x)  vdup_n_f32(x)
#define vmov_n_f64(x)  vdup_n_f64(x)

#define vmovq_n_s8(x)   vdupq_n_s8(x)
#define vmovq_n_s16(x)  vdupq_n_s16(x)
#define vmovq_n_s32(x)  vdupq_n_s32(x)
#define vmovq_n_s64(x)  vdupq_n_s64(x)
#define vmovq_n_u8(x)   vdupq_n_u8(x)
#define vmovq_n_u16(x)  vdupq_n_u16(x)
#define vmovq_n_u32(x)  vdupq_n_u32(x)
#define vmovq_n_u64(x)  vdupq_n_u64(x)
#define vmovq_n_f32(x)  vdupq_n_f32(x)
#define vmovq_n_f64(x)  vdupq_n_f64(x)

/* TODO: vdup_lane_s8() and friends ... */

/* Combine vectors */

extern __n128 __cdecl __neon_combine(__n64, __n64);

#define vcombine_s8(low,high)   __neon_combine((low),(high))
#define vcombine_u8(low,high)   __neon_combine((low),(high))
#define vcombine_s16(low,high)  __neon_combine((low),(high))
#define vcombine_u16(low,high)  __neon_combine((low),(high))
#define vcombine_s32(low,high)  __neon_combine((low),(high))
#define vcombine_u32(low,high)  __neon_combine((low),(high))
#define vcombine_s64(low,high)  __neon_combine((low),(high))
#define vcombine_u64(low,high)  __neon_combine((low),(high))
#define vcombine_f32(low,high)  __neon_combine((low),(high))
#define vcombine_f64(low,high)  __neon_combine((low),(high))

/* Split vectors */

extern __n64 __cdecl __neon_split(__n128, const __int32);

#define vget_high_s8(a)   __neon_split((a),1)
#define vget_high_u8(a)   __neon_split((a),1)
#define vget_high_s16(a)  __neon_split((a),1)
#define vget_high_u16(a)  __neon_split((a),1)
#define vget_high_s32(a)  __neon_split((a),1)
#define vget_high_u32(a)  __neon_split((a),1)
#define vget_high_s64(a)  __neon_split((a),1)
#define vget_high_u64(a)  __neon_split((a),1)
#define vget_high_f32(a)  __neon_split((a),1)
#define vget_high_f64(a)  __neon_split((a),1)

#define vget_low_s8(a)   __neon_split((a),0)
#define vget_low_u8(a)   __neon_split((a),0)
#define vget_low_s16(a)  __neon_split((a),0)
#define vget_low_u16(a)  __neon_split((a),0)
#define vget_low_s32(a)  __neon_split((a),0)
#define vget_low_u32(a)  __neon_split((a),0)
#define vget_low_s64(a)  __neon_split((a),0)
#define vget_low_u64(a)  __neon_split((a),0)
#define vget_low_f32(a)  __neon_split((a),0)
#define vget_low_f64(a)  __neon_split((a),0)

/* Extract one element from vector */

extern uint8_t __cdecl __neon_dups8(__n64, const int);
extern uint16_t __cdecl __neon_dups16(__n64, const int);
extern uint32_t __cdecl __neon_dups32(__n64, const int);
extern uint64_t __cdecl __neon_dups64(__n64, const int);

extern uint8_t __cdecl __neon_dups8q(__n128, const int);
extern uint16_t __cdecl __neon_dups16q(__n128, const int);
extern uint32_t __cdecl __neon_dups32q(__n128, const int);
extern uint64_t __cdecl __neon_dups64q(__n128, const int);

#define vdupb_lane_s8(a,lane)   __neon_dups8((a),(lane))
#define vdupb_lane_u8(a,lane)   __neon_dups8((a),(lane))
#define vduph_lane_s16(a,lane)  __neon_dups16((a),(lane))
#define vduph_lane_u16(a,lane)  __neon_dups16((a),(lane))
#define vdups_lane_s32(a,lane)  __neon_dups32((a),(lane))
#define vdups_lane_u32(a,lane)  __neon_dups32((a),(lane))
#define vdupd_lane_s64(a,lane)  __neon_dups64((a),(lane))
#define vdupd_lane_u64(a,lane)  __neon_dups64((a),(lane))
#define vdups_lane_f32(a,lane)  _F32_FROM_U32(__neon_dups32((a),(lane)))
#define vdupd_lane_f64(a,lane)  _F64_FROM_U64(__neon_dups64((a),(lane)))

#define vdupb_laneq_s8(a,lane)   __neon_dups8q((a),(lane))
#define vdupb_laneq_u8(a,lane)   __neon_dups8q((a),(lane))
#define vduph_laneq_s16(a,lane)  __neon_dups16q((a),(lane))
#define vduph_laneq_u16(a,lane)  __neon_dups16q((a),(lane))
#define vdups_laneq_s32(a,lane)  __neon_dups32q((a),(lane))
#define vdups_laneq_u32(a,lane)  __neon_dups32q((a),(lane))
#define vdupd_laneq_s64(a,lane)  __neon_dups64q((a),(lane))
#define vdupd_laneq_u64(a,lane)  __neon_dups64q((a),(lane))
#define vdups_laneq_f32(a,lane)  _F32_FROM_U32(__neon_dups32q((a),(lane)))
#define vdupd_laneq_f64(a,lane)  _F64_FROM_U64(__neon_dups64q((a),(lane)))

/* Extract vector from a pair of vectors */

extern __n64 __cdecl __neon_ext8(__n64, __n64, const int);
extern __n64 __cdecl __neon_ext16(__n64, __n64, const int);
extern __n64 __cdecl __neon_ext32(__n64, __n64, const int);
extern __n64 __cdecl __neon_ext64(__n64, __n64, const int);

extern __n128 __cdecl __neon_extq8(__n128, __n128, const int);
extern __n128 __cdecl __neon_extq16(__n128, __n128, const int);
extern __n128 __cdecl __neon_extq32(__n128, __n128, const int);
extern __n128 __cdecl __neon_extq64(__n128, __n128, const int);

#define vext_s8(a,b,pos)   __neon_ext8((a),(b),(pos))
#define vext_u8(a,b,pos)   __neon_ext8((a),(b),(pos))
#define vext_s16(a,b,pos)  __neon_ext16((a),(b),(pos))
#define vext_u16(a,b,pos)  __neon_ext16((a),(b),(pos))
#define vext_s32(a,b,pos)  __neon_ext32((a),(b),(pos))
#define vext_u32(a,b,pos)  __neon_ext32((a),(b),(pos))
#define vext_s64(a,b,pos)  __neon_ext64((a),(b),(pos))
#define vext_u64(a,b,pos)  __neon_ext64((a),(b),(pos))
#define vext_f32(a,b,pos)  __neon_ext32((a),(b),(pos))
#define vext_f64(a,b,pos)  __neon_ext64((a),(b),(pos))

#define vextq_s8(a,b,pos)   __neon_extq8((a),(b),(pos))
#define vextq_u8(a,b,pos)   __neon_extq8((a),(b),(pos))
#define vextq_s16(a,b,pos)  __neon_extq16((a),(b),(pos))
#define vextq_u16(a,b,pos)  __neon_extq16((a),(b),(pos))
#define vextq_s32(a,b,pos)  __neon_extq32((a),(b),(pos))
#define vextq_u32(a,b,pos)  __neon_extq32((a),(b),(pos))
#define vextq_s64(a,b,pos)  __neon_extq64((a),(b),(pos))
#define vextq_u64(a,b,pos)  __neon_extq64((a),(b),(pos))
#define vextq_f32(a,b,pos)  __neon_extq32((a),(b),(pos))
#define vextq_f64(a,b,pos)  __neon_extq64((a),(b),(pos))

/* Reverse elements */

extern __n64 __cdecl __neon_rev16(__n64);
extern __n64 __cdecl __neon_rev32_8(__n64);
extern __n64 __cdecl __neon_rev32_16(__n64);
extern __n64 __cdecl __neon_rev64_8(__n64);
extern __n64 __cdecl __neon_rev64_16(__n64);
extern __n64 __cdecl __neon_rev64_32(__n64);
extern __n128 __cdecl __neon_rev16q(__n128);
extern __n128 __cdecl __neon_rev32q_8(__n128);
extern __n128 __cdecl __neon_rev32q_16(__n128);
extern __n128 __cdecl __neon_rev64q_8(__n128);
extern __n128 __cdecl __neon_rev64q_16(__n128);
extern __n128 __cdecl __neon_rev64q_32(__n128);

#define vrev16_s8(a)   __neon_rev16(a)
#define vrev16_u8(a)   __neon_rev16(a)
#define vrev32_s8(a)   __neon_rev32_8(a)
#define vrev32_u8(a)   __neon_rev32_8(a)
#define vrev32_s16(a)  __neon_rev32_16(a)
#define vrev32_u16(a)  __neon_rev32_16(a)
#define vrev64_s8(a)   __neon_rev64_8(a)
#define vrev64_u8(a)   __neon_rev64_8(a)
#define vrev64_s16(a)  __neon_rev64_16(a)
#define vrev64_u16(a)  __neon_rev64_16(a)
#define vrev64_s32(a)  __neon_rev64_32(a)
#define vrev64_u32(a)  __neon_rev64_32(a)
#define vrev64_f32(a)  __neon_rev64_32(a)

#define vrev16q_s8(a)   __neon_rev16q(a)
#define vrev16q_u8(a)   __neon_rev16q(a)
#define vrev32q_s8(a)   __neon_rev32q_8(a)
#define vrev32q_u8(a)   __neon_rev32q_8(a)
#define vrev32q_s16(a)  __neon_rev32q_16(a)
#define vrev32q_u16(a)  __neon_rev32q_16(a)
#define vrev64q_s8(a)   __neon_rev64q_8(a)
#define vrev64q_u8(a)   __neon_rev64q_8(a)
#define vrev64q_s16(a)  __neon_rev64q_16(a)
#define vrev64q_u16(a)  __neon_rev64q_16(a)
#define vrev64q_s32(a)  __neon_rev64q_32(a)
#define vrev64q_u32(a)  __neon_rev64q_32(a)
#define vrev64q_f32(a)  __neon_rev64q_32(a)

/* Zip elements */

extern __n64 __cdecl __neon_zip1_8(__n64, __n64);
extern __n64 __cdecl __neon_zip1_16(__n64, __n64);
extern __n64 __cdecl __neon_zip1_32(__n64, __n64);

extern __n128 __cdecl __neon_zip1_q8(__n128, __n128);
extern __n128 __cdecl __neon_zip1_q16(__n128, __n128);
extern __n128 __cdecl __neon_zip1_q32(__n128, __n128);
extern __n128 __cdecl __neon_zip1_q64(__n128, __n128);

#define vzip1_s8(a,b)   __neon_zip1_8((a),(b))
#define vzip1_u8(a,b)   __neon_zip1_8((a),(b))
#define vzip1_s16(a,b)  __neon_zip1_16((a),(b))
#define vzip1_u16(a,b)  __neon_zip1_16((a),(b))
#define vzip1_s32(a,b)  __neon_zip1_32((a),(b))
#define vzip1_u32(a,b)  __neon_zip1_32((a),(b))
#define vzip1_f32(a,b)  __neon_zip1_32((a),(b))

#define vzip1q_s8(a,b)   __neon_zip1_q8((a),(b))
#define vzip1q_u8(a,b)   __neon_zip1_q8((a),(b))
#define vzip1q_s16(a,b)  __neon_zip1_q16((a),(b))
#define vzip1q_u16(a,b)  __neon_zip1_q16((a),(b))
#define vzip1q_s32(a,b)  __neon_zip1_q32((a),(b))
#define vzip1q_u32(a,b)  __neon_zip1_q32((a),(b))
#define vzip1q_s64(a,b)  __neon_zip1_q64((a),(b))
#define vzip1q_u64(a,b)  __neon_zip1_q64((a),(b))
#define vzip1q_f32(a,b)  __neon_zip1_q32((a),(b))
#define vzip1q_f64(a,b)  __neon_zip1_q64((a),(b))

extern __n64 __cdecl __neon_zip2_8(__n64, __n64);
extern __n64 __cdecl __neon_zip2_16(__n64, __n64);
extern __n64 __cdecl __neon_zip2_32(__n64, __n64);

extern __n128 __cdecl __neon_zip2_q8(__n128, __n128);
extern __n128 __cdecl __neon_zip2_q16(__n128, __n128);
extern __n128 __cdecl __neon_zip2_q32(__n128, __n128);
extern __n128 __cdecl __neon_zip2_q64(__n128, __n128);

#define vzip2_s8(a,b)   __neon_zip2_8((a),(b))
#define vzip2_u8(a,b)   __neon_zip2_8((a),(b))
#define vzip2_s16(a,b)  __neon_zip2_16((a),(b))
#define vzip2_u16(a,b)  __neon_zip2_16((a),(b))
#define vzip2_s32(a,b)  __neon_zip2_32((a),(b))
#define vzip2_u32(a,b)  __neon_zip2_32((a),(b))
#define vzip2_f32(a,b)  __neon_zip2_32((a),(b))

#define vzip2q_s8(a,b)   __neon_zip2_q8((a),(b))
#define vzip2q_u8(a,b)   __neon_zip2_q8((a),(b))
#define vzip2q_s16(a,b)  __neon_zip2_q16((a),(b))
#define vzip2q_u16(a,b)  __neon_zip2_q16((a),(b))
#define vzip2q_s32(a,b)  __neon_zip2_q32((a),(b))
#define vzip2q_u32(a,b)  __neon_zip2_q32((a),(b))
#define vzip2q_s64(a,b)  __neon_zip2_q64((a),(b))
#define vzip2q_u64(a,b)  __neon_zip2_q64((a),(b))
#define vzip2q_f32(a,b)  __neon_zip2_q32((a),(b))
#define vzip2q_f64(a,b)  __neon_zip2_q64((a),(b))

/* Unzip elements */

extern __n64 __cdecl __neon_uzp1_8(__n64, __n64);
extern __n64 __cdecl __neon_uzp1_16(__n64, __n64);
extern __n64 __cdecl __neon_uzp1_32(__n64, __n64);

extern __n128 __cdecl __neon_uzp1_q8(__n128, __n128);
extern __n128 __cdecl __neon_uzp1_q16(__n128, __n128);
extern __n128 __cdecl __neon_uzp1_q32(__n128, __n128);
extern __n128 __cdecl __neon_uzp1_q64(__n128, __n128);

#define vuzp1_s8(a,b)   __neon_uzp1_8((a),(b))
#define vuzp1_u8(a,b)   __neon_uzp1_8((a),(b))
#define vuzp1_s16(a,b)  __neon_uzp1_16((a),(b))
#define vuzp1_u16(a,b)  __neon_uzp1_16((a),(b))
#define vuzp1_s32(a,b)  __neon_uzp1_32((a),(b))
#define vuzp1_u32(a,b)  __neon_uzp1_32((a),(b))
#define vuzp1_f32(a,b)  __neon_uzp1_32((a),(b))

#define vuzp1q_s8(a,b)   __neon_uzp1_q8((a),(b))
#define vuzp1q_u8(a,b)   __neon_uzp1_q8((a),(b))
#define vuzp1q_s16(a,b)  __neon_uzp1_q16((a),(b))
#define vuzp1q_u16(a,b)  __neon_uzp1_q16((a),(b))
#define vuzp1q_s32(a,b)  __neon_uzp1_q32((a),(b))
#define vuzp1q_u32(a,b)  __neon_uzp1_q32((a),(b))
#define vuzp1q_s64(a,b)  __neon_uzp1_q64((a),(b))
#define vuzp1q_u64(a,b)  __neon_uzp1_q64((a),(b))
#define vuzp1q_f32(a,b)  __neon_uzp1_q32((a),(b))
#define vuzp1q_f64(a,b)  __neon_uzp1_q64((a),(b))

extern __n64 __cdecl __neon_uzp2_8(__n64, __n64);
extern __n64 __cdecl __neon_uzp2_16(__n64, __n64);
extern __n64 __cdecl __neon_uzp2_32(__n64, __n64);

extern __n128 __cdecl __neon_uzp2_q8(__n128, __n128);
extern __n128 __cdecl __neon_uzp2_q16(__n128, __n128);
extern __n128 __cdecl __neon_uzp2_q32(__n128, __n128);
extern __n128 __cdecl __neon_uzp2_q64(__n128, __n128);

#define vuzp2_s8(a,b)   __neon_uzp2_8((a),(b))
#define vuzp2_u8(a,b)   __neon_uzp2_8((a),(b))
#define vuzp2_s16(a,b)  __neon_uzp2_16((a),(b))
#define vuzp2_u16(a,b)  __neon_uzp2_16((a),(b))
#define vuzp2_s32(a,b)  __neon_uzp2_32((a),(b))
#define vuzp2_u32(a,b)  __neon_uzp2_32((a),(b))
#define vuzp2_f32(a,b)  __neon_uzp2_32((a),(b))

#define vuzp2q_s8(a,b)   __neon_uzp2_q8((a),(b))
#define vuzp2q_u8(a,b)   __neon_uzp2_q8((a),(b))
#define vuzp2q_s16(a,b)  __neon_uzp2_q16((a),(b))
#define vuzp2q_u16(a,b)  __neon_uzp2_q16((a),(b))
#define vuzp2q_s32(a,b)  __neon_uzp2_q32((a),(b))
#define vuzp2q_u32(a,b)  __neon_uzp2_q32((a),(b))
#define vuzp2q_s64(a,b)  __neon_uzp2_q64((a),(b))
#define vuzp2q_u64(a,b)  __neon_uzp2_q64((a),(b))
#define vuzp2q_f32(a,b)  __neon_uzp2_q32((a),(b))
#define vuzp2q_f64(a,b)  __neon_uzp2_q64((a),(b))

/* Transpose elements */

extern __n64 __cdecl __neon_trn1_8(__n64, __n64);
extern __n64 __cdecl __neon_trn1_16(__n64, __n64);
extern __n64 __cdecl __neon_trn1_32(__n64, __n64);

extern __n128 __cdecl __neon_trn1_q8(__n128, __n128);
extern __n128 __cdecl __neon_trn1_q16(__n128, __n128);
extern __n128 __cdecl __neon_trn1_q32(__n128, __n128);
extern __n128 __cdecl __neon_trn1_q64(__n128, __n128);

#define vtrn1_s8(a,b)   __neon_trn1_8((a),(b))
#define vtrn1_u8(a,b)   __neon_trn1_8((a),(b))
#define vtrn1_s16(a,b)  __neon_trn1_16((a),(b))
#define vtrn1_u16(a,b)  __neon_trn1_16((a),(b))
#define vtrn1_s32(a,b)  __neon_trn1_32((a),(b))
#define vtrn1_u32(a,b)  __neon_trn1_32((a),(b))
#define vtrn1_f32(a,b)  __neon_trn1_32((a),(b))

#define vtrn1q_s8(a,b)   __neon_trn1_q8((a),(b))
#define vtrn1q_u8(a,b)   __neon_trn1_q8((a),(b))
#define vtrn1q_s16(a,b)  __neon_trn1_q16((a),(b))
#define vtrn1q_u16(a,b)  __neon_trn1_q16((a),(b))
#define vtrn1q_s32(a,b)  __neon_trn1_q32((a),(b))
#define vtrn1q_u32(a,b)  __neon_trn1_q32((a),(b))
#define vtrn1q_s64(a,b)  __neon_trn1_q64((a),(b))
#define vtrn1q_u64(a,b)  __neon_trn1_q64((a),(b))
#define vtrn1q_f32(a,b)  __neon_trn1_q32((a),(b))
#define vtrn1q_f64(a,b)  __neon_trn1_q64((a),(b))

extern __n64 __cdecl __neon_trn2_8(__n64, __n64);
extern __n64 __cdecl __neon_trn2_16(__n64, __n64);
extern __n64 __cdecl __neon_trn2_32(__n64, __n64);

extern __n128 __cdecl __neon_trn2_q8(__n128, __n128);
extern __n128 __cdecl __neon_trn2_q16(__n128, __n128);
extern __n128 __cdecl __neon_trn2_q32(__n128, __n128);
extern __n128 __cdecl __neon_trn2_q64(__n128, __n128);

#define vtrn2_s8(a,b)   __neon_trn2_8((a),(b))
#define vtrn2_u8(a,b)   __neon_trn2_8((a),(b))
#define vtrn2_s16(a,b)  __neon_trn2_16((a),(b))
#define vtrn2_u16(a,b)  __neon_trn2_16((a),(b))
#define vtrn2_s32(a,b)  __neon_trn2_32((a),(b))
#define vtrn2_u32(a,b)  __neon_trn2_32((a),(b))
#define vtrn2_f32(a,b)  __neon_trn2_32((a),(b))

#define vtrn2q_s8(a,b)   __neon_trn2_q8((a),(b))
#define vtrn2q_u8(a,b)   __neon_trn2_q8((a),(b))
#define vtrn2q_s16(a,b)  __neon_trn2_q16((a),(b))
#define vtrn2q_u16(a,b)  __neon_trn2_q16((a),(b))
#define vtrn2q_s32(a,b)  __neon_trn2_q32((a),(b))
#define vtrn2q_u32(a,b)  __neon_trn2_q32((a),(b))
#define vtrn2q_s64(a,b)  __neon_trn2_q64((a),(b))
#define vtrn2q_u64(a,b)  __neon_trn2_q64((a),(b))
#define vtrn2q_f32(a,b)  __neon_trn2_q32((a),(b))
#define vtrn2q_f64(a,b)  __neon_trn2_q64((a),(b))

/* Set vector lane */

extern __n64 __cdecl __neon_insr8(__n64 a, const int lane, unsigned __int8 r);
extern __n64 __cdecl __neon_insr16(__n64 a, const int lane, unsigned __int16 r);
extern __n64 __cdecl __neon_insr32(__n64 a, const int lane, unsigned __int32 r);
extern __n64 __cdecl __neon_insr64(__n64 a, const int lane, unsigned __int64 r);
extern __n128 __cdecl __neon_insqr8(__n128 a, const int lane, unsigned __int8 r);
extern __n128 __cdecl __neon_insqr16(__n128 a, const int lane, unsigned __int16 r);
extern __n128 __cdecl __neon_insqr32(__n128 a, const int lane, unsigned __int32 r);
extern __n128 __cdecl __neon_insqr64(__n128 a, const int lane, unsigned __int64 r);

#define vset_lane_s8(r,a,lane)   __neon_insr8((a),(lane),(r))
#define vset_lane_u8(r,a,lane)   __neon_insr8((a),(lane),(r))
#define vset_lane_s16(r,a,lane)  __neon_insr16((a),(lane),(r))
#define vset_lane_u16(r,a,lane)  __neon_insr16((a),(lane),(r))
#define vset_lane_s32(r,a,lane)  __neon_insr32((a),(lane),(r))
#define vset_lane_u32(r,a,lane)  __neon_insr32((a),(lane),(r))
#define vset_lane_s64(r,a,lane)  __neon_insr64((a),(lane),(r))
#define vset_lane_u64(r,a,lane)  __neon_insr64((a),(lane),(r))
#define vset_lane_f32(r,a,lane)  __neon_insr32((a),(lane),_U32_FROM_F32(r))
#define vset_lane_f64(r,a,lane)  __neon_insr64((a),(lane),_U64_FROM_F64(r))

#define vsetq_lane_s8(r,a,lane)   __neon_insqr8((a),(lane),(r))
#define vsetq_lane_u8(r,a,lane)   __neon_insqr8((a),(lane),(r))
#define vsetq_lane_s16(r,a,lane)  __neon_insqr16((a),(lane),(r))
#define vsetq_lane_u16(r,a,lane)  __neon_insqr16((a),(lane),(r))
#define vsetq_lane_s32(r,a,lane)  __neon_insqr32((a),(lane),(r))
#define vsetq_lane_u32(r,a,lane)  __neon_insqr32((a),(lane),(r))
#define vsetq_lane_s64(r,a,lane)  __neon_insqr64((a),(lane),(r))
#define vsetq_lane_u64(r,a,lane)  __neon_insqr64((a),(lane),(r))
#define vsetq_lane_f32(r,a,lane)  __neon_insqr32((a),(lane),_U32_FROM_F32(r))
#define vsetq_lane_f64(r,a,lane)  __neon_insqr64((a),(lane),_U64_FROM_F64(r))

/* Load stride */

extern __n64 __cdecl __neon_ld1m_8(const void *ptr);
extern __n64 __cdecl __neon_ld1m_16(const void *ptr);
extern __n64 __cdecl __neon_ld1m_32(const void *ptr);
extern __n64 __cdecl __neon_ld1m_64(const void *ptr);

extern __n128 __cdecl __neon_ld1m_q8(const void *ptr);
extern __n128 __cdecl __neon_ld1m_q16(const void *ptr);
extern __n128 __cdecl __neon_ld1m_q32(const void *ptr);
extern __n128 __cdecl __neon_ld1m_q64(const void *ptr);

static __forceinline  int8x8_t  __cdecl vld1_s8(const    int8_t *ptr) { return __neon_ld1m_8(ptr); }
static __forceinline uint8x8_t  __cdecl vld1_u8(const   uint8_t *ptr) { return __neon_ld1m_8(ptr); }
static __forceinline  int16x4_t __cdecl vld1_s16(const  int16_t *ptr) { return __neon_ld1m_16(ptr); }
static __forceinline uint16x4_t __cdecl vld1_u16(const uint16_t *ptr) { return __neon_ld1m_16(ptr); }
static __forceinline  int32x2_t __cdecl vld1_s32(const  int32_t *ptr) { return __neon_ld1m_32(ptr); }
static __forceinline uint32x2_t __cdecl vld1_u32(const uint32_t *ptr) { return __neon_ld1m_32(ptr); }
static __forceinline  int64x1_t __cdecl vld1_s64(const  int64_t *ptr) { return __neon_ld1m_64(ptr); }
static __forceinline uint64x1_t __cdecl vld1_u64(const uint64_t *ptr) { return __neon_ld1m_64(ptr); }
static __forceinline float32x2_t __cdecl vld1_f32(const float *ptr)  { return __neon_ld1m_32(ptr); }
static __forceinline float64x1_t __cdecl vld1_f64(const double *ptr) { return __neon_ld1m_64(ptr); }

static __forceinline  int8x16_t __cdecl vld1q_s8(const    int8_t *ptr) { return __neon_ld1m_q8(ptr); }
static __forceinline uint8x16_t __cdecl vld1q_u8(const   uint8_t *ptr) { return __neon_ld1m_q8(ptr); }
static __forceinline  int16x8_t __cdecl vld1q_s16(const  int16_t *ptr) { return __neon_ld1m_q16(ptr); }
static __forceinline uint16x8_t __cdecl vld1q_u16(const uint16_t *ptr) { return __neon_ld1m_q16(ptr); }
static __forceinline  int32x4_t __cdecl vld1q_s32(const  int32_t *ptr) { return __neon_ld1m_q32(ptr); }
static __forceinline uint32x4_t __cdecl vld1q_u32(const uint32_t *ptr) { return __neon_ld1m_q32(ptr); }
static __forceinline  int64x2_t __cdecl vld1q_s64(const  int64_t *ptr) { return __neon_ld1m_q64(ptr); }
static __forceinline uint64x2_t __cdecl vld1q_u64(const uint64_t *ptr) { return __neon_ld1m_q64(ptr); }
static __forceinline float32x4_t __cdecl vld1q_f32(const float *ptr)  { return __neon_ld1m_q32(ptr); }
static __forceinline float64x2_t __cdecl vld1q_f64(const double *ptr) { return __neon_ld1m_q64(ptr); }

/* TODO(?): more load stride */

/* Store stride */

extern void __cdecl __neon_st1m_8(void *ptr, __n64 val);
extern void __cdecl __neon_st1m_16(void *ptr, __n64 val);
extern void __cdecl __neon_st1m_32(void *ptr, __n64 val);
extern void __cdecl __neon_st1m_64(void *ptr, __n64 val);

extern void __cdecl __neon_st1m_q8(void *ptr, __n128 val);
extern void __cdecl __neon_st1m_q16(void *ptr, __n128 val);
extern void __cdecl __neon_st1m_q32(void *ptr, __n128 val);
extern void __cdecl __neon_st1m_q64(void *ptr, __n128 val);

static __forceinline void __cdecl vst1_s8(   int8_t *ptr,   int8x8_t val) { __neon_st1m_8(ptr, val); }
static __forceinline void __cdecl vst1_u8(  uint8_t *ptr,  uint8x8_t val) { __neon_st1m_8(ptr, val); }
static __forceinline void __cdecl vst1_s16( int16_t *ptr,  int16x4_t val) { __neon_st1m_16(ptr, val); }
static __forceinline void __cdecl vst1_u16(uint16_t *ptr, uint16x4_t val) { __neon_st1m_16(ptr, val); }
static __forceinline void __cdecl vst1_s32( int32_t *ptr,  int32x2_t val) { __neon_st1m_32(ptr, val); }
static __forceinline void __cdecl vst1_u32(uint32_t *ptr, uint32x2_t val) { __neon_st1m_32(ptr, val); }
static __forceinline void __cdecl vst1_s64( int64_t *ptr,  int64x1_t val) { __neon_st1m_64(ptr, val); }
static __forceinline void __cdecl vst1_u64(uint64_t *ptr, uint64x1_t val) { __neon_st1m_64(ptr, val); }
static __forceinline void __cdecl vst1_f32(float *ptr,  float32x2_t val) { __neon_st1m_32(ptr, val); }
static __forceinline void __cdecl vst1_f64(double *ptr, float64x1_t val) { __neon_st1m_64(ptr, val); }

static __forceinline void __cdecl vst1q_s8(   int8_t *ptr,  int8x16_t val) { __neon_st1m_q8(ptr, val); }
static __forceinline void __cdecl vst1q_u8(  uint8_t *ptr, uint8x16_t val) { __neon_st1m_q8(ptr, val); }
static __forceinline void __cdecl vst1q_s16( int16_t *ptr,  int16x8_t val) { __neon_st1m_q16(ptr, val); }
static __forceinline void __cdecl vst1q_u16(uint16_t *ptr, uint16x8_t val) { __neon_st1m_q16(ptr, val); }
static __forceinline void __cdecl vst1q_s32( int32_t *ptr,  int32x4_t val) { __neon_st1m_q32(ptr, val); }
static __forceinline void __cdecl vst1q_u32(uint32_t *ptr, uint32x4_t val) { __neon_st1m_q32(ptr, val); }
static __forceinline void __cdecl vst1q_s64( int64_t *ptr,  int64x2_t val) { __neon_st1m_q64(ptr, val); }
static __forceinline void __cdecl vst1q_u64(uint64_t *ptr, uint64x2_t val) { __neon_st1m_q64(ptr, val); }
static __forceinline void __cdecl vst1q_f32(float *ptr,  float32x4_t val) { __neon_st1m_q32(ptr, val); }
static __forceinline void __cdecl vst1q_f64(double *ptr, float64x2_t val) { __neon_st1m_q64(ptr, val); }

/* TODO(?): more store stride */

/* Table lookup */

extern __n128 __cdecl __neon_tbl1_qq8(__n128 t, __n128 idx);

#define vqtbl1q_s8(t,idx)  __neon_tbl1_qq8((t),(idx))
#define vqtbl1q_u8(t,idx)  __neon_tbl1_qq8((t),(idx))

/* TODO(?): Extended table lookup */

/* Internal helpers */

extern __n64 __cdecl __neon_movi8(const unsigned __int8 i8);
extern __n64 __cdecl __neon_movi16(const unsigned __int8 i8, const int n /*0/8*/);
extern __n64 __cdecl __neon_movi32(const unsigned __int8 i8, const int n /*0/8/16/24*/);

extern __n128 __cdecl __neon_moviq8(const unsigned __int8 i8);
extern __n128 __cdecl __neon_moviq16(const unsigned __int8 i8, const int n /*0/8*/);
extern __n128 __cdecl __neon_moviq32(const unsigned __int8 i8, const int n /*0/8/16/24*/);

#endif /* _ARM64_NEON_H */
