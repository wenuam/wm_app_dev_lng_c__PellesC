#ifndef _WOW64APISET_H
#define _WOW64APISET_H

#if __POCC__ >= 500
#pragma once
#endif

/* ApiSet contract for api-ms-win-core-wow64-l1 */

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#if _WIN32_WINNT >= 0x0501 || defined(WINBASE_DECLARE_GET_SYSTEM_WOW64_DIRECTORY)

WINBASEAPI BOOLEAN WINAPI Wow64EnableWow64FsRedirection(
    BOOLEAN Wow64FsEnableRedirection
);

WINBASEAPI BOOL WINAPI Wow64DisableWow64FsRedirection(
    PVOID *OldValue
);

WINBASEAPI BOOL WINAPI Wow64RevertWow64FsRedirection(
    PVOID OlValue
);

#endif /* (_WIN32_WINNT >= 0x0501) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

#if (_WIN32_WINNT >= 0x0501)

WINBASEAPI BOOL WINAPI IsWow64Process(
    HANDLE hProcess,
    PBOOL Wow64Process
);

#endif /* (_WIN32_WINNT >= 0x0501) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#if _WIN32_WINNT >= 0x0501 || defined(WINBASE_DECLARE_GET_SYSTEM_WOW64_DIRECTORY)

WINBASEAPI UINT WINAPI GetSystemWow64DirectoryA(
    LPSTR lpBuffer,
    UINT uSize
);

WINBASEAPI UINT WINAPI GetSystemWow64DirectoryW(
    LPWSTR lpBuffer,
    UINT uSize
);

#ifdef UNICODE
#define GetSystemWow64Directory  GetSystemWow64DirectoryW
#else /* !UNICODE */
#define GetSystemWow64Directory  GetSystemWow64DirectoryA
#endif /* !UNICODE */

#endif /* _WIN32_WINNT >= 0x0501 */

#if (_WIN32_WINNT >= 0x0A00)

WINBASEAPI USHORT WINAPI Wow64SetThreadDefaultGuestMachine(
    USHORT Machine
);

#endif /* (_WIN32_WINNT >= 0x0A00) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

#if (_WIN32_WINNT >= 0x0A00)

WINBASEAPI BOOL WINAPI IsWow64Process2(
    HANDLE hProcess,
    USHORT *pProcessMachine,
    USHORT *pNativeMachine
);

#endif /* (_WIN32_WINNT >= 0x0A00) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#if (_WIN32_WINNT >= 0x0A00)

WINBASEAPI UINT WINAPI GetSystemWow64Directory2A(
    LPSTR lpBuffer,
    UINT uSize,
    WORD ImageFileMachineType
);

WINBASEAPI UINT WINAPI GetSystemWow64Directory2W(
    LPWSTR lpBuffer,
    UINT uSize,
    WORD ImageFileMachineType
);

#ifdef UNICODE
#define GetSystemWow64Directory2  GetSystemWow64Directory2W
#else /* !UNICODE */
#define GetSystemWow64Directory2  GetSystemWow64Directory2A
#endif /* !UNICODE */

#endif /* (_WIN32_WINNT >= 0x0A00) */

#if (_WIN32_WINNT >= 0x0A00)

WINBASEAPI HRESULT WINAPI IsWow64GuestMachineSupported(
    USHORT WowGuestMachine,
    BOOL *MachineIsSupported
);

#endif /* (_WIN32_WINNT >= 0x0A00) */

#if (_WIN32_WINNT >= 0x0600)

WINBASEAPI BOOL WINAPI Wow64GetThreadContext(
    HANDLE hThread,
    PWOW64_CONTEXT lpContext
);

WINBASEAPI BOOL WINAPI Wow64SetThreadContext(
    HANDLE hThread,
    CONST WOW64_CONTEXT *lpContext
);

WINBASEAPI DWORD WINAPI Wow64SuspendThread(
    HANDLE hThread
);

#endif /* (_WIN32_WINNT >= 0x0600) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#endif /* _WOW64APISET_H */
