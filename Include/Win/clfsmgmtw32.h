#ifndef _CLFSMGMTW32_H
#define _CLFSMGMTW32_H

#if __POCC__ >= 500
#pragma once
#endif

/* Common Log Win32 Management API definitions */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_BOOTABLESKU)

#ifdef CLFS_KERNEL_MODE
#undef CLFS_KERNEL_MODE
#endif /* CLFS_KERNEL_MODE */

#include <clfsmgmt.h>

#if (_WIN32_WINNT >= _WIN32_WINNT_WS03)

typedef void (*PLOG_TAIL_ADVANCE_CALLBACK)(
    HANDLE hLogFile,
    CLFS_LSN lsnTarget,
    PVOID pvClientContext
);

typedef void (*PLOG_FULL_HANDLER_CALLBACK)(
    HANDLE hLogFile,
    DWORD dwError,
    BOOL fLogIsPinned,
    PVOID pvClientContext
);

typedef void (*PLOG_UNPINNED_CALLBACK)(
    HANDLE hLogFile,
    PVOID pvClientContext
);

typedef struct _LOG_MANAGEMENT_CALLBACKS {
    PVOID CallbackContext;
    PLOG_TAIL_ADVANCE_CALLBACK AdvanceTailCallback;
    PLOG_FULL_HANDLER_CALLBACK LogFullHandlerCallback;
    PLOG_UNPINNED_CALLBACK LogUnpinnedCallback;
} LOG_MANAGEMENT_CALLBACKS, *PLOG_MANAGEMENT_CALLBACKS;

CLFSUSER_API BOOL WINAPI RegisterManageableLogClient(
    HANDLE hLog,
    PLOG_MANAGEMENT_CALLBACKS pCallbacks
);

CLFSUSER_API BOOL WINAPI DeregisterManageableLogClient(
    HANDLE hLog
);

CLFSUSER_API BOOL WINAPI ReadLogNotification(
    HANDLE hLog,
    PCLFS_MGMT_NOTIFICATION pNotification,
    LPOVERLAPPED lpOverlapped
);

CLFSUSER_API BOOL WINAPI InstallLogPolicy(
    HANDLE hLog,
    PCLFS_MGMT_POLICY pPolicy
);

CLFSUSER_API BOOL WINAPI RemoveLogPolicy(
    HANDLE hLog,
    CLFS_MGMT_POLICY_TYPE ePolicyType
);

CLFSUSER_API BOOL WINAPI QueryLogPolicy(
    HANDLE hLog,
    CLFS_MGMT_POLICY_TYPE ePolicyType,
    PCLFS_MGMT_POLICY pPolicyBuffer,
    PULONG pcbPolicyBuffer
);

CLFSUSER_API BOOL WINAPI SetLogFileSizeWithPolicy(
    HANDLE hLog,
    PULONGLONG pDesiredSize,
    PULONGLONG pResultingSize
);

CLFSUSER_API BOOL WINAPI HandleLogFull(
    HANDLE hLog
);

CLFSUSER_API BOOL WINAPI LogTailAdvanceFailure(
    HANDLE hLog,
    DWORD dwReason
);

CLFSUSER_API BOOL WINAPI RegisterForLogWriteNotification(
    HANDLE hLog,
    ULONG cbThreshold,
    BOOL fEnable
);
#endif /* _WIN32_WINNT */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_BOOTABLESKU) */

#endif /* _CLFSMGMTW32_H */
