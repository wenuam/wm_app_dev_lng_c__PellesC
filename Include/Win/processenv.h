#ifndef _PROCESSENV_H
#define _PROCESSENV_H

#if __POCC__ >= 500
#pragma once
#endif

/* ApiSet contract for api-ms-win-core-processenvironment-l1 */

#include <apiset.h>
#include <apisetcconv.h>

#include <minwindef.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINBASEAPI BOOL WINAPI SetEnvironmentStringsW(LPWCH NewEnvironment);
#ifdef UNICODE
#define SetEnvironmentStrings  SetEnvironmentStringsW
#endif /* UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_PC_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINBASEAPI HANDLE WINAPI GetStdHandle(DWORD nStdHandle);
WINBASEAPI BOOL WINAPI SetStdHandle(DWORD nStdHandle, HANDLE hHandle);
#if (_WIN32_WINNT >= 0x0600)
WINBASEAPI BOOL WINAPI SetStdHandleEx(DWORD nStdHandle, HANDLE hHandle, PHANDLE phPrevValue);
#endif /* (_WIN32_WINNT >= 0x0600) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_PC_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINBASEAPI LPSTR WINAPI GetCommandLineA(void);
WINBASEAPI LPWSTR WINAPI GetCommandLineW(void);
#ifdef UNICODE
#define GetCommandLine  GetCommandLineW
#else /* !UNICODE */
#define GetCommandLine  GetCommandLineA
#endif /* !UNICODE */

WINBASEAPI LPCH WINAPI GetEnvironmentStrings(void);
WINBASEAPI LPWCH WINAPI GetEnvironmentStringsW(void);
#ifdef UNICODE
#define GetEnvironmentStrings  GetEnvironmentStringsW
#else /* !UNICODE */
#define GetEnvironmentStringsA  GetEnvironmentStrings
#endif /* !UNICODE */

WINBASEAPI BOOL WINAPI FreeEnvironmentStringsA(LPCH penv);
WINBASEAPI BOOL WINAPI FreeEnvironmentStringsW(LPWCH penv);
#ifdef UNICODE
#define FreeEnvironmentStrings  FreeEnvironmentStringsW
#else /* !UNICODE */
#define FreeEnvironmentStrings  FreeEnvironmentStringsA
#endif /* !UNICODE */

WINBASEAPI DWORD WINAPI GetEnvironmentVariableA(
    LPCSTR lpName,
    LPSTR lpBuffer,
    DWORD nSize
);
WINBASEAPI DWORD WINAPI GetEnvironmentVariableW(
    LPCWSTR lpName,
    LPWSTR lpBuffer,
    DWORD nSize
);
#ifdef UNICODE
#define GetEnvironmentVariable  GetEnvironmentVariableW
#else /* !UNICODE */
#define GetEnvironmentVariable  GetEnvironmentVariableA
#endif /* !UNICODE */

WINBASEAPI BOOL WINAPI SetEnvironmentVariableA(
    LPCSTR lpName,
    LPCSTR lpValue
);
WINBASEAPI BOOL WINAPI SetEnvironmentVariableW(
    LPCWSTR lpName,
    LPCWSTR lpValue
);
#ifdef UNICODE
#define SetEnvironmentVariable  SetEnvironmentVariableW
#else /* !UNICODE */
#define SetEnvironmentVariable  SetEnvironmentVariableA
#endif /* !UNICODE */

WINBASEAPI DWORD WINAPI ExpandEnvironmentStringsA(
    LPCSTR lpSrc,
    LPSTR lpDst,
    DWORD nSize
);
WINBASEAPI DWORD WINAPI ExpandEnvironmentStringsW(
    LPCWSTR lpSrc,
    LPWSTR lpDst,
    DWORD nSize
);
#ifdef UNICODE
#define ExpandEnvironmentStrings  ExpandEnvironmentStringsW
#else /* !UNICODE */
#define ExpandEnvironmentStrings  ExpandEnvironmentStringsA
#endif /* !UNICODE */

WINBASEAPI BOOL WINAPI SetCurrentDirectoryA(
    LPCSTR lpPathName
);
WINBASEAPI BOOL WINAPI SetCurrentDirectoryW(
    LPCWSTR lpPathName
);
#ifdef UNICODE
#define SetCurrentDirectory  SetCurrentDirectoryW
#else /* !UNICODE */
#define SetCurrentDirectory  SetCurrentDirectoryA
#endif /* !UNICODE */

WINBASEAPI DWORD WINAPI GetCurrentDirectoryA(
    DWORD nBufferLength,
    LPSTR lpBuffer
);
WINBASEAPI DWORD WINAPI GetCurrentDirectoryW(
    DWORD nBufferLength,
    LPWSTR lpBuffer
);
#ifdef UNICODE
#define GetCurrentDirectory  GetCurrentDirectoryW
#else /* !UNICODE */
#define GetCurrentDirectory  GetCurrentDirectoryA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINBASEAPI DWORD WINAPI SearchPathW(
    LPCWSTR lpPath,
    LPCWSTR lpFileName,
    LPCWSTR lpExtension,
    DWORD nBufferLength,
    LPWSTR lpBuffer,
    LPWSTR *lpFilePart
);
WINBASEAPI DWORD APIENTRY SearchPathA(
    LPCSTR lpPath,
    LPCSTR lpFileName,
    LPCSTR lpExtension,
    DWORD nBufferLength,
    LPSTR lpBuffer,
    LPSTR *lpFilePart
);
#ifdef UNICODE
#define SearchPath  SearchPathW
#else /* !UNICODE */
#define SearchPath  SearchPathA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#if _WIN32_WINNT >= 0x0502

WINBASEAPI BOOL WINAPI NeedCurrentDirectoryForExePathA(
    LPCSTR ExeName
);
WINBASEAPI BOOL WINAPI NeedCurrentDirectoryForExePathW(
    LPCWSTR ExeName
);
#ifdef UNICODE
#define NeedCurrentDirectoryForExePath  NeedCurrentDirectoryForExePathW
#else /* !UNICODE */
#define NeedCurrentDirectoryForExePath  NeedCurrentDirectoryForExePathA
#endif /* !UNICODE */

#endif /* _WIN32_WINNT >= 0x0502 */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#endif /* _PROCESSENV_H */
