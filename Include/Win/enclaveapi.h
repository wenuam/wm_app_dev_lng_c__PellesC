#ifndef _ENCLAVEAPI_H
#define _ENCLAVEAPI_H

#if __POCC__ >= 500
#pragma once
#endif

/* ApiSet contract for api-ms-win-core-enclave-l1-1-0 */

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_APP)

WINBASEAPI BOOL WINAPI IsEnclaveTypeSupported(
      DWORD flEnclaveType
);

WINBASEAPI LPVOID WINAPI CreateEnclave(
    HANDLE hProcess,
    LPVOID lpAddress,
    SIZE_T dwSize,
    SIZE_T dwInitialCommitment,
    DWORD flEnclaveType,
    LPCVOID lpEnclaveInformation,
    DWORD dwInfoLength,
    LPDWORD lpEnclaveError
);

WINBASEAPI BOOL WINAPI LoadEnclaveData(
    HANDLE hProcess,
    LPVOID lpAddress,
    LPCVOID lpBuffer,
    SIZE_T nSize,
    DWORD flProtect,
    LPCVOID lpPageInformation,
    DWORD dwInfoLength,
    PSIZE_T lpNumberOfBytesWritten,
    LPDWORD lpEnclaveError
);

WINBASEAPI BOOL WINAPI InitializeEnclave(
    HANDLE hProcess,
    LPVOID lpAddress,
    LPCVOID lpEnclaveInformation,
    DWORD dwInfoLength,
    LPDWORD lpEnclaveError
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_APP) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI BOOL WINAPI LoadEnclaveImageA(
    LPVOID lpEnclaveAddress,
    LPCSTR lpImageName
);
WINBASEAPI BOOL WINAPI LoadEnclaveImageW(
    LPVOID lpEnclaveAddress,
    LPCWSTR lpImageName
);
#ifdef UNICODE
#define LoadEnclaveImage  LoadEnclaveImageW
#else /* !UNICODE */
#define LoadEnclaveImage  LoadEnclaveImageA
#endif /* !UNICODE */

WINBASEAPI BOOL WINAPI CallEnclave(
    LPENCLAVE_ROUTINE lpRoutine,
    LPVOID lpParameter,
    BOOL fWaitForThread,
    LPVOID *lpReturnValue
);

WINBASEAPI BOOL WINAPI TerminateEnclave(
    LPVOID lpAddress,
    BOOL fWait
);

WINBASEAPI BOOL WINAPI DeleteEnclave(
    LPVOID lpAddress
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#endif /* _ENCLAVEAPI_H */
