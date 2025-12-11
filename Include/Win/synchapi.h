#ifndef _SYNCHAPI_H
#define _SYNCHAPI_H

#if __POCC__ >= 500
#pragma once
#endif

/* ApiSet contract for api-ms-win-core-synch-l1 */

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

#define SRWLOCK_INIT  RTL_SRWLOCK_INIT

typedef RTL_SRWLOCK SRWLOCK, *PSRWLOCK;

#if (_WIN32_WINNT >= 0x0600)

WINBASEAPI void WINAPI InitializeSRWLock(PSRWLOCK SRWLock);
WINBASEAPI void WINAPI ReleaseSRWLockExclusive(PSRWLOCK SRWLock);
WINBASEAPI void WINAPI ReleaseSRWLockShared(PSRWLOCK SRWLock);
WINBASEAPI void WINAPI AcquireSRWLockExclusive(PSRWLOCK SRWLock);
WINBASEAPI void WINAPI AcquireSRWLockShared(PSRWLOCK SRWLock);

WINBASEAPI BOOLEAN WINAPI TryAcquireSRWLockExclusive(PSRWLOCK SRWLock);
WINBASEAPI BOOLEAN WINAPI TryAcquireSRWLockShared(PSRWLOCK SRWLock);

#endif /* (_WIN32_WINNT >= 0x0600) */

#if (_WIN32_WINNT < 0x0600)

WINBASEAPI void WINAPI InitializeCriticalSection(
    LPCRITICAL_SECTION lpCriticalSection
);

#else

WINBASEAPI void WINAPI InitializeCriticalSection(
    LPCRITICAL_SECTION lpCriticalSection
);

#endif  /* (_WIN32_WINNT < 0x0600) */

WINBASEAPI void WINAPI EnterCriticalSection(
    LPCRITICAL_SECTION lpCriticalSection
);

WINBASEAPI void WINAPI LeaveCriticalSection(
    LPCRITICAL_SECTION lpCriticalSection
);

WINBASEAPI BOOL WINAPI InitializeCriticalSectionAndSpinCount(
    LPCRITICAL_SECTION lpCriticalSection,
    DWORD dwSpinCount
);

#if (_WIN32_WINNT >= 0x0600)

WINBASEAPI BOOL WINAPI InitializeCriticalSectionEx(
    LPCRITICAL_SECTION lpCriticalSection,
    DWORD dwSpinCount,
    DWORD Flags
);

#endif /* (_WIN32_WINNT >= 0x0600) */

WINBASEAPI DWORD WINAPI SetCriticalSectionSpinCount(
    LPCRITICAL_SECTION lpCriticalSection,
    DWORD dwSpinCount
);

#if (_WIN32_WINNT >= 0x0400)

WINBASEAPI BOOL WINAPI TryEnterCriticalSection(
    LPCRITICAL_SECTION lpCriticalSection
);

#endif /* _WIN32_WINNT >= 0x0400 */

WINBASEAPI void WINAPI DeleteCriticalSection(
    LPCRITICAL_SECTION lpCriticalSection
);

typedef RTL_RUN_ONCE INIT_ONCE;
typedef PRTL_RUN_ONCE PINIT_ONCE;
typedef PRTL_RUN_ONCE LPINIT_ONCE;

#define INIT_ONCE_STATIC_INIT   RTL_RUN_ONCE_INIT

#define INIT_ONCE_CHECK_ONLY    RTL_RUN_ONCE_CHECK_ONLY
#define INIT_ONCE_ASYNC         RTL_RUN_ONCE_ASYNC
#define INIT_ONCE_INIT_FAILED   RTL_RUN_ONCE_INIT_FAILED

#define INIT_ONCE_CTX_RESERVED_BITS RTL_RUN_ONCE_CTX_RESERVED_BITS

typedef BOOL (WINAPI *PINIT_ONCE_FN)(
    PINIT_ONCE InitOnce,
    PVOID Parameter,
    PVOID *Context
);

#if (_WIN32_WINNT >= 0x0600)

WINBASEAPI void WINAPI InitOnceInitialize(
    PINIT_ONCE InitOnce
);

WINBASEAPI BOOL WINAPI InitOnceExecuteOnce(
    PINIT_ONCE InitOnce,
    PINIT_ONCE_FN InitFn,
    PVOID Parameter,
    LPVOID *Context
);

WINBASEAPI BOOL WINAPI InitOnceBeginInitialize(
    LPINIT_ONCE lpInitOnce,
    DWORD dwFlags,
    PBOOL fPending,
    LPVOID *lpContext
);

WINBASEAPI BOOL WINAPI InitOnceComplete(
    LPINIT_ONCE lpInitOnce,
    DWORD dwFlags,
    LPVOID lpContext
);

#endif /* (_WIN32_WINNT >= 0x0600) */

typedef RTL_CONDITION_VARIABLE CONDITION_VARIABLE, *PCONDITION_VARIABLE;

#define CONDITION_VARIABLE_INIT  RTL_CONDITION_VARIABLE_INIT
#define CONDITION_VARIABLE_LOCKMODE_SHARED  RTL_CONDITION_VARIABLE_LOCKMODE_SHARED

#if (_WIN32_WINNT >= 0x0600)

WINBASEAPI void WINAPI InitializeConditionVariable(
    PCONDITION_VARIABLE ConditionVariable
);

WINBASEAPI void WINAPI WakeConditionVariable(
    PCONDITION_VARIABLE ConditionVariable
);

WINBASEAPI void WINAPI WakeAllConditionVariable(
    PCONDITION_VARIABLE ConditionVariable
);

WINBASEAPI BOOL WINAPI SleepConditionVariableCS(
    PCONDITION_VARIABLE ConditionVariable,
    PCRITICAL_SECTION CriticalSection,
    DWORD dwMilliseconds
);

WINBASEAPI BOOL WINAPI SleepConditionVariableSRW(
    PCONDITION_VARIABLE ConditionVariable,
    PSRWLOCK SRWLock,
    DWORD dwMilliseconds,
    ULONG Flags
);

#endif /* (_WIN32_WINNT >= 0x0600) */

WINBASEAPI BOOL WINAPI SetEvent(
    HANDLE hEvent
);

WINBASEAPI BOOL WINAPI ResetEvent(
    HANDLE hEvent
);

WINBASEAPI BOOL WINAPI ReleaseSemaphore(
    HANDLE hSemaphore,
    LONG lReleaseCount,
    LPLONG lpPreviousCount
);

WINBASEAPI BOOL WINAPI ReleaseMutex(
    HANDLE hMutex
);

WINBASEAPI DWORD WINAPI WaitForSingleObject(
    HANDLE hHandle,
    DWORD dwMilliseconds
);

WINBASEAPI DWORD WINAPI SleepEx(
    DWORD dwMilliseconds,
    BOOL bAlertable
);

WINBASEAPI DWORD WINAPI WaitForSingleObjectEx(
    HANDLE hHandle,
    DWORD dwMilliseconds,
    BOOL bAlertable
);

WINBASEAPI DWORD WINAPI WaitForMultipleObjectsEx(
    DWORD nCount,
    CONST HANDLE *lpHandles,
    BOOL bWaitAll,
    DWORD dwMilliseconds,
    BOOL bAlertable
);

#define MUTEX_MODIFY_STATE  MUTANT_QUERY_STATE
#define MUTEX_ALL_ACCESS    MUTANT_ALL_ACCESS

WINBASEAPI HANDLE WINAPI CreateMutexA(
    LPSECURITY_ATTRIBUTES lpMutexAttributes,
    BOOL bInitialOwner,
    LPCSTR lpName
);

WINBASEAPI HANDLE WINAPI CreateMutexW(
    LPSECURITY_ATTRIBUTES lpMutexAttributes,
    BOOL bInitialOwner,
    LPCWSTR lpName
);
#ifdef UNICODE
#define CreateMutex  CreateMutexW
#else /* !UNICODE */
#define CreateMutex  CreateMutexA
#endif /* !UNICODE */

WINBASEAPI HANDLE WINAPI OpenMutexW(
    DWORD dwDesiredAccess,
    BOOL bInheritHandle,
    LPCWSTR lpName
);

#ifdef UNICODE
#define OpenMutex  OpenMutexW
#endif /* UNICODE */

WINBASEAPI HANDLE WINAPI CreateEventA(
    LPSECURITY_ATTRIBUTES lpEventAttributes,
    BOOL bManualReset,
    BOOL bInitialState,
    LPCSTR lpName
);

WINBASEAPI HANDLE WINAPI CreateEventW(
    LPSECURITY_ATTRIBUTES lpEventAttributes,
    BOOL bManualReset,
    BOOL bInitialState,
    LPCWSTR lpName
);
#ifdef UNICODE
#define CreateEvent  CreateEventW
#else /* !UNICODE */
#define CreateEvent  CreateEventA
#endif /* !UNICODE */

WINBASEAPI HANDLE WINAPI OpenEventA(
    DWORD dwDesiredAccess,
    BOOL bInheritHandle,
    LPCSTR lpName
);

WINBASEAPI HANDLE WINAPI OpenEventW(
    DWORD dwDesiredAccess,
    BOOL bInheritHandle,
    LPCWSTR lpName
);
#ifdef UNICODE
#define OpenEvent  OpenEventW
#else /* !UNICODE */
#define OpenEvent  OpenEventA
#endif /* !UNICODE */

WINBASEAPI HANDLE WINAPI OpenSemaphoreW(
    DWORD dwDesiredAccess,
    BOOL bInheritHandle,
    LPCWSTR lpName
);

#ifdef UNICODE
#define OpenSemaphore  OpenSemaphoreW
#endif /* UNICODE */

#if (_WIN32_WINNT >= 0x0400) || (_WIN32_WINDOWS > 0x0400)

typedef void (APIENTRY *PTIMERAPCROUTINE)(
    LPVOID lpArgToCompletionRoutine,
    DWORD dwTimerLowValue,
    DWORD dwTimerHighValue
);

WINBASEAPI HANDLE WINAPI OpenWaitableTimerW(
    DWORD dwDesiredAccess,
    BOOL bInheritHandle,
    LPCWSTR lpTimerName
);

#ifdef UNICODE
#define OpenWaitableTimer  OpenWaitableTimerW
#endif /* UNICODE */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)

BOOL WINAPI SetWaitableTimerEx(
    HANDLE hTimer,
    const LARGE_INTEGER * lpDueTime,
    LONG lPeriod,
    PTIMERAPCROUTINE pfnCompletionRoutine,
    LPVOID lpArgToCompletionRoutine,
    PREASON_CONTEXT WakeContext,
    ULONG TolerableDelay
);

#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WIN7) */

WINBASEAPI BOOL WINAPI SetWaitableTimer(
    HANDLE hTimer,
    const LARGE_INTEGER * lpDueTime,
    LONG lPeriod,
    PTIMERAPCROUTINE pfnCompletionRoutine,
    LPVOID lpArgToCompletionRoutine,
    BOOL fResume
);

WINBASEAPI BOOL WINAPI CancelWaitableTimer(
    HANDLE hTimer
);

#if (_WIN32_WINNT >= 0x0600)

#define CREATE_MUTEX_INITIAL_OWNER  0x00000001

WINBASEAPI HANDLE WINAPI CreateMutexExA(
    LPSECURITY_ATTRIBUTES lpMutexAttributes,
    LPCSTR lpName,
    DWORD dwFlags,
    DWORD dwDesiredAccess
);

WINBASEAPI HANDLE WINAPI CreateMutexExW(
    LPSECURITY_ATTRIBUTES lpMutexAttributes,
    LPCWSTR lpName,
    DWORD dwFlags,
    DWORD dwDesiredAccess
);
#ifdef UNICODE
#define CreateMutexEx  CreateMutexExW
#else /* !UNICODE */
#define CreateMutexEx  CreateMutexExA
#endif /* !UNICODE */

#define CREATE_EVENT_MANUAL_RESET   0x00000001
#define CREATE_EVENT_INITIAL_SET    0x00000002

WINBASEAPI HANDLE WINAPI CreateEventExA(
    LPSECURITY_ATTRIBUTES lpEventAttributes,
    LPCSTR lpName,
    DWORD dwFlags,
    DWORD dwDesiredAccess
);

WINBASEAPI HANDLE WINAPI CreateEventExW(
    LPSECURITY_ATTRIBUTES lpEventAttributes,
    LPCWSTR lpName,
    DWORD dwFlags,
    DWORD dwDesiredAccess
);
#ifdef UNICODE
#define CreateEventEx  CreateEventExW
#else /* !UNICODE */
#define CreateEventEx  CreateEventExA
#endif /* !UNICODE */

WINBASEAPI HANDLE WINAPI CreateSemaphoreExW(
    LPSECURITY_ATTRIBUTES lpSemaphoreAttributes,
    LONG lInitialCount,
    LONG lMaximumCount,
    LPCWSTR lpName,
    DWORD dwFlags,
    DWORD dwDesiredAccess
);

#ifdef UNICODE
#define CreateSemaphoreEx  CreateSemaphoreExW
#endif /* UNICODE */

#define CREATE_WAITABLE_TIMER_MANUAL_RESET  0x00000001
#if (_WIN32_WINNT >= _NT_TARGET_VERSION_WIN10_RS4)
#define CREATE_WAITABLE_TIMER_HIGH_RESOLUTION 0x00000002
#endif

WINBASEAPI HANDLE WINAPI CreateWaitableTimerExW(
    LPSECURITY_ATTRIBUTES lpTimerAttributes,
    LPCWSTR lpTimerName,
    DWORD dwFlags,
    DWORD dwDesiredAccess
);

#ifdef UNICODE
#define CreateWaitableTimerEx  CreateWaitableTimerExW
#endif /* UNICODE */

#endif /* (_WIN32_WINNT >= 0x0600) */

#endif /* (_WIN32_WINNT >= 0x0400) || (_WIN32_WINDOWS > 0x0400) */

typedef RTL_BARRIER SYNCHRONIZATION_BARRIER;
typedef PRTL_BARRIER PSYNCHRONIZATION_BARRIER;
typedef PRTL_BARRIER LPSYNCHRONIZATION_BARRIER;

#define SYNCHRONIZATION_BARRIER_FLAGS_SPIN_ONLY  0x01
#define SYNCHRONIZATION_BARRIER_FLAGS_BLOCK_ONLY 0x02
#define SYNCHRONIZATION_BARRIER_FLAGS_NO_DELETE  0x04

BOOL WINAPI EnterSynchronizationBarrier(
    LPSYNCHRONIZATION_BARRIER lpBarrier,
    DWORD dwFlags
);

BOOL WINAPI InitializeSynchronizationBarrier(
    LPSYNCHRONIZATION_BARRIER lpBarrier,
    LONG lTotalThreads,
    LONG lSpinCount
);

BOOL WINAPI DeleteSynchronizationBarrier(
    LPSYNCHRONIZATION_BARRIER lpBarrier
);

WINBASEAPI VOID WINAPI Sleep(
    DWORD dwMilliseconds
);

BOOL WINAPI WaitOnAddress(
    volatile VOID *Address,
    PVOID CompareAddress,
    SIZE_T AddressSize,
    DWORD dwMilliseconds
);

void WINAPI WakeByAddressSingle(
    PVOID Address
);

void WINAPI WakeByAddressAll(
    PVOID Address
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#ifndef MIDL_PASS

WINBASEAPI DWORD WINAPI SignalObjectAndWait(
    HANDLE hObjectToSignal,
    HANDLE hObjectToWaitOn,
    DWORD dwMilliseconds,
    BOOL bAlertable
);

#endif /* !MIDL_PASS */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINBASEAPI DWORD WINAPI WaitForMultipleObjects(
    DWORD nCount,
    CONST HANDLE *lpHandles,
    BOOL bWaitAll,
    DWORD dwMilliseconds
);

WINBASEAPI HANDLE WINAPI CreateSemaphoreW(
    LPSECURITY_ATTRIBUTES lpSemaphoreAttributes,
    LONG lInitialCount,
    LONG lMaximumCount,
    LPCWSTR lpName
);

#ifdef UNICODE
#define CreateSemaphore  CreateSemaphoreW
#endif /* UNICODE */

WINBASEAPI HANDLE WINAPI CreateWaitableTimerW(
    LPSECURITY_ATTRIBUTES lpTimerAttributes,
    BOOL bManualReset,
    LPCWSTR lpTimerName
);

#ifdef UNICODE
#define CreateWaitableTimer  CreateWaitableTimerW
#endif /* UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#endif /* _SYNCHAPI_H */
