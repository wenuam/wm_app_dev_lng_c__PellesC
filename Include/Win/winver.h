#ifndef _WINVER_H
#define _WINVER_H

#if __POCC__ >= 500
#pragma once
#endif

/* Windows version management definitions */

#include <winapifamily.h>

/* #include <SpecStrings.h> */
#include <verrsrc.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

DWORD APIENTRY VerFindFileA(
    DWORD uFlags,
    LPCSTR szFileName,
    LPCSTR szWinDir,
    LPCSTR szAppDir,
    LPSTR szCurDir,
    PUINT puCurDirLen,
    LPSTR szDestDir,
    PUINT puDestDirLen
);

DWORD APIENTRY VerFindFileW(
    DWORD uFlags,
    LPCWSTR szFileName,
    LPCWSTR szWinDir,
    LPCWSTR szAppDir,
    LPWSTR szCurDir,
    PUINT puCurDirLen,
    LPWSTR szDestDir,
    PUINT puDestDirLen
);

#ifdef UNICODE
#define VerFindFile  VerFindFileW
#else /* !UNICODE */
#define VerFindFile  VerFindFileA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

DWORD APIENTRY VerInstallFileA(
    DWORD uFlags,
    LPCSTR szSrcFileName,
    LPCSTR szDestFileName,
    LPCSTR szSrcDir,
    LPCSTR szDestDir,
    LPCSTR szCurDir,
    LPSTR szTmpFile,
    PUINT puTmpFileLen
);

DWORD APIENTRY VerInstallFileW(
    DWORD uFlags,
    LPCWSTR szSrcFileName,
    LPCWSTR szDestFileName,
    LPCWSTR szSrcDir,
    LPCWSTR szDestDir,
    LPCWSTR szCurDir,
    LPWSTR szTmpFile,
    PUINT puTmpFileLen
);

#ifdef UNICODE
#define VerInstallFile  VerInstallFileW
#else /* !UNICODE */
#define VerInstallFile  VerInstallFileA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

DWORD APIENTRY GetFileVersionInfoSizeA(
    LPCSTR lptstrFilename,
    LPDWORD lpdwHandle
);

DWORD APIENTRY GetFileVersionInfoSizeW(
    LPCWSTR lptstrFilename,
    LPDWORD lpdwHandle
);

#ifdef UNICODE
#define GetFileVersionInfoSize  GetFileVersionInfoSizeW
#else /* !UNICODE */
#define GetFileVersionInfoSize  GetFileVersionInfoSizeA
#endif /* !UNICODE */

BOOL APIENTRY GetFileVersionInfoA(
    LPCSTR lptstrFilename,
    DWORD dwHandle,
    DWORD dwLen,
    LPVOID lpData
);

BOOL APIENTRY GetFileVersionInfoW(
    LPCWSTR lptstrFilename,
    DWORD dwHandle,
    DWORD dwLen,
    LPVOID lpData
);

#ifdef UNICODE
#define GetFileVersionInfo  GetFileVersionInfoW
#else /* !UNICODE */
#define GetFileVersionInfo  GetFileVersionInfoA
#endif /* !UNICODE */

DWORD APIENTRY GetFileVersionInfoSizeExA(
    DWORD dwFlags,
    LPCSTR lpwstrFilename,
    LPDWORD lpdwHandle
);

DWORD APIENTRY GetFileVersionInfoSizeExW(
    DWORD dwFlags,
    LPCWSTR lpwstrFilename,
    LPDWORD lpdwHandle
);

#ifdef UNICODE
#define GetFileVersionInfoSizeEx  GetFileVersionInfoSizeExW
#else /* !UNICODE */
#define GetFileVersionInfoSizeEx  GetFileVersionInfoSizeExA
#endif /* !UNICODE */

BOOL APIENTRY GetFileVersionInfoExA(DWORD dwFlags,
    LPCSTR lpwstrFilename,
    DWORD dwHandle,
    DWORD dwLen,
    LPVOID lpData
);

BOOL APIENTRY GetFileVersionInfoExW(DWORD dwFlags,
    LPCWSTR lpwstrFilename,
    DWORD dwHandle,
    DWORD dwLen,
    LPVOID lpData
);

#ifdef UNICODE
#define GetFileVersionInfoEx  GetFileVersionInfoExW
#else /* !UNICODE */
#define GetFileVersionInfoEx  GetFileVersionInfoExA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

DWORD APIENTRY VerLanguageNameA(
    DWORD wLang,
    LPSTR szLang,
    DWORD cchLang
);

DWORD APIENTRY VerLanguageNameW(
    DWORD wLang,
    LPWSTR szLang,
    DWORD cchLang
);

#ifdef UNICODE
#define VerLanguageName  VerLanguageNameW
#else /* !UNICODE */
#define VerLanguageName  VerLanguageNameA
#endif /* !UNICODE */

BOOL APIENTRY VerQueryValueA(
    LPCVOID pBlock,
    LPCSTR lpSubBlock,
    LPVOID *lplpBuffer,
    PUINT puLen
);

BOOL APIENTRY VerQueryValueW(
    LPCVOID pBlock,
    LPCWSTR lpSubBlock,
    LPVOID *lplpBuffer,
    PUINT puLen
);

#ifdef UNICODE
#define VerQueryValue  VerQueryValueW
#else /* !UNICODE */
#define VerQueryValue  VerQueryValueA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#endif /* _WINVER_H */
