#ifndef _FILEAPIFROMAPP_H
#define _FILEAPIFROMAPP_H

#if __POCC__ >= 500
#pragma once
#endif

/* ApiSet contract for api-ms-win-core-file-fromapp-l1 */

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>
#include <fileapi.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

#if ((_WIN32_WINNT >= _WIN32_WINNT_WIN10) && (NTDDI_VERSION >= NTDDI_WIN10_RS3))

WINSTORAGEAPI BOOL WINAPI CopyFileFromAppW(
    LPCWSTR lpExistingFileName,
    LPCWSTR lpNewFileName,
    BOOL bFailIfExists
);

WINSTORAGEAPI BOOL WINAPI CreateDirectoryFromAppW(
    LPCWSTR lpPathName,
    LPSECURITY_ATTRIBUTES lpSecurityAttributes
);

WINSTORAGEAPI HANDLE WINAPI CreateFileFromAppW(
    LPCWSTR lpFileName,
    DWORD dwDesiredAccess,
    DWORD dwShareMode,
    LPSECURITY_ATTRIBUTES lpSecurityAttributes,
    DWORD dwCreationDisposition,
    DWORD dwFlagsAndAttributes,
    HANDLE hTemplateFile
);

WINSTORAGEAPI HANDLE WINAPI CreateFile2FromAppW(
    LPCWSTR lpFileName,
    DWORD dwDesiredAccess,
    DWORD dwShareMode,
    DWORD dwCreationDisposition,
    LPCREATEFILE2_EXTENDED_PARAMETERS pCreateExParams
);

WINSTORAGEAPI BOOL WINAPI DeleteFileFromAppW(
    LPCWSTR lpFileName
);

WINSTORAGEAPI HANDLE WINAPI FindFirstFileExFromAppW(
    LPCWSTR lpFileName,
    FINDEX_INFO_LEVELS fInfoLevelId,
    LPVOID lpFindFileData,
    FINDEX_SEARCH_OPS fSearchOp,
    LPVOID lpSearchFilter,
    DWORD dwAdditionalFlags
);

WINSTORAGEAPI BOOL WINAPI GetFileAttributesExFromAppW(
    LPCWSTR lpFileName,
    GET_FILEEX_INFO_LEVELS fInfoLevelId,
    LPVOID lpFileInformation
);

WINSTORAGEAPI BOOL WINAPI MoveFileFromAppW(
    LPCWSTR lpExistingFileName,
    LPCWSTR lpNewFileName
);

WINSTORAGEAPI BOOL WINAPI RemoveDirectoryFromAppW(
    LPCWSTR lpPathName
);

WINSTORAGEAPI BOOL WINAPI ReplaceFileFromAppW(
    LPCWSTR lpReplacedFileName,
    LPCWSTR lpReplacementFileName,
    LPCWSTR lpBackupFileName,
    DWORD dwReplaceFlags,
    LPVOID lpExclude,
    LPVOID lpReserved
);

WINSTORAGEAPI BOOL WINAPI SetFileAttributesFromAppW(
    LPCWSTR lpFileName,
    DWORD dwFileAttributes
);

#endif /* ((_WIN32_WINNT >= _WIN32_WINNT_WIN10) && (NTDDI_VERSION >= NTDDI_WIN10_RS3)) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */

#endif /* _FILEAPIFROMAPP_H */
