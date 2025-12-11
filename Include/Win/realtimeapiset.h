#ifndef _REALTIMEAPISET_H
#define _REALTIMEAPISET_H

#if __POCC__ >= 500
#pragma once
#endif

/* ApiSet contract for api-ms-win-core-realtime-l1 */

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#if (_WIN32_WINNT >= 0x0600)

WINBASEAPI BOOL WINAPI QueryThreadCycleTime(
    HANDLE ThreadHandle,
    PULONG64 CycleTime);

WINBASEAPI BOOL WINAPI QueryProcessCycleTime(
    HANDLE ProcessHandle,
    PULONG64 CycleTime);

WINBASEAPI BOOL WINAPI QueryIdleProcessorCycleTime(
    PULONG BufferLength,
    PULONG64 ProcessorIdleCycleTime);

#endif /* (_WIN32_WINNT >= 0x0600) */

#if (_WIN32_WINNT >= 0x0601)

WINBASEAPI BOOL WINAPI QueryIdleProcessorCycleTimeEx(
    USHORT Group,
    PULONG BufferLength,
    PULONG64 ProcessorIdleCycleTime);

#endif /* (_WIN32_WINNT >= 0x0601) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI VOID WINAPI QueryInterruptTimePrecise(
    PULONGLONG lpInterruptTimePrecise);

WINBASEAPI VOID WINAPI QueryUnbiasedInterruptTimePrecise(
    PULONGLONG lpUnbiasedInterruptTimePrecise);

WINBASEAPI VOID WINAPI QueryInterruptTime(
    PULONGLONG lpInterruptTime);

#if (_WIN32_WINNT >= 0x0601)

WINBASEAPI BOOL WINAPI QueryUnbiasedInterruptTime(
    PULONGLONG UnbiasedTime);

#endif /* (_WIN32_WINNT >= 0x0601) */

WINBASEAPI HRESULT WINAPI QueryAuxiliaryCounterFrequency(
    PULONGLONG lpAuxiliaryCounterFrequency);

WINBASEAPI HRESULT WINAPI ConvertAuxiliaryCounterToPerformanceCounter(
    ULONGLONG ullAuxiliaryCounterValue,
    PULONGLONG lpPerformanceCounterValue,
    PULONGLONG lpConversionError);

WINBASEAPI HRESULT WINAPI ConvertPerformanceCounterToAuxiliaryCounter(
    ULONGLONG ullPerformanceCounterValue,
    PULONGLONG lpAuxiliaryCounterValue,
    PULONGLONG lpConversionError);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#endif /* _REALTIMEAPISET_H */
