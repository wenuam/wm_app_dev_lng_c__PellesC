#ifndef _SFC_H
#define _SFC_H

#if __POCC__ >= 500
#pragma once
#endif

/* Windows File Protection definitions */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#define SFC_DISABLE_NORMAL      0
#define SFC_DISABLE_ASK         1
#define SFC_DISABLE_ONCE        2
#define SFC_DISABLE_SETUP       3
#define SFC_DISABLE_NOPOPUPS    4

#define SFC_SCAN_NORMAL         0
#define SFC_SCAN_ALWAYS         1
#define SFC_SCAN_ONCE           2
#define SFC_SCAN_IMMEDIATE      3

#define SFC_QUOTA_DEFAULT       50
#define SFC_QUOTA_ALL_FILES     ((ULONG)-1)

#define SFC_IDLE_TRIGGER        L"WFP_IDLE_TRIGGER"

typedef struct _PROTECTED_FILE_DATA {
    WCHAR FileName[MAX_PATH];
    DWORD FileNumber;
} PROTECTED_FILE_DATA, *PPROTECTED_FILE_DATA;

BOOL WINAPI SfcGetNextProtectedFile(
    HANDLE RpcHandle,
    PPROTECTED_FILE_DATA ProtFileData);

BOOL WINAPI SfcIsFileProtected(
    HANDLE RpcHandle,
    LPCWSTR ProtFileName);

BOOL WINAPI SfcIsKeyProtected(
    HKEY KeyHandle,
    LPCWSTR SubKeyName,
    REGSAM KeySam);

BOOL WINAPI SfpVerifyFile(
    LPCSTR pszFileName,
    LPSTR pszError,
    DWORD dwErrSize);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#endif /* _SFC_H */
