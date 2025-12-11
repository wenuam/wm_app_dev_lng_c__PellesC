#ifndef _FILEAPI_H
#define _FILEAPI_H

#if __POCC__ >= 500
#pragma once
#endif

/* ApiSet contract for api-ms-win-core-file-l1 */

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

#define CREATE_NEW          1
#define CREATE_ALWAYS       2
#define OPEN_EXISTING       3
#define OPEN_ALWAYS         4
#define TRUNCATE_EXISTING   5

#define INVALID_FILE_SIZE  ((DWORD)0xFFFFFFFF)
#define INVALID_SET_FILE_POINTER  ((DWORD)-1)
#define INVALID_FILE_ATTRIBUTES  ((DWORD)-1)

WINBASEAPI LONG WINAPI CompareFileTime(
    CONST FILETIME *lpFileTime1,
    CONST FILETIME *lpFileTime2
);

WINBASEAPI BOOL WINAPI CreateDirectoryA(
    LPCSTR lpPathName,
    LPSECURITY_ATTRIBUTES lpSecurityAttributes
);
WINBASEAPI BOOL WINAPI CreateDirectoryW(
    LPCWSTR lpPathName,
    LPSECURITY_ATTRIBUTES lpSecurityAttributes
);
#ifdef UNICODE
#define CreateDirectory  CreateDirectoryW
#else /* !UNICODE */
#define CreateDirectory  CreateDirectoryA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINBASEAPI HANDLE WINAPI CreateFileA(
    LPCSTR lpFileName,
    DWORD dwDesiredAccess,
    DWORD dwShareMode,
    LPSECURITY_ATTRIBUTES lpSecurityAttributes,
    DWORD dwCreationDisposition,
    DWORD dwFlagsAndAttributes,
    HANDLE hTemplateFile
);
WINBASEAPI HANDLE WINAPI CreateFileW(
    LPCWSTR lpFileName,
    DWORD dwDesiredAccess,
    DWORD dwShareMode,
    LPSECURITY_ATTRIBUTES lpSecurityAttributes,
    DWORD dwCreationDisposition,
    DWORD dwFlagsAndAttributes,
    HANDLE hTemplateFile
);
#ifdef UNICODE
#define CreateFile  CreateFileW
#else /* !UNICODE */
#define CreateFile  CreateFileA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */ 

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI BOOL WINAPI DefineDosDeviceW(
    DWORD dwFlags,
    LPCWSTR lpDeviceName,
    LPCWSTR lpTargetPath
);

#ifdef UNICODE
#define DefineDosDevice  DefineDosDeviceW
#endif /* UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINBASEAPI BOOL WINAPI DeleteFileA(
    LPCSTR lpFileName
);
WINBASEAPI BOOL WINAPI DeleteFileW(
    LPCWSTR lpFileName
);
#ifdef UNICODE
#define DeleteFile  DeleteFileW
#else /* !UNICODE */
#define DeleteFile  DeleteFileA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI BOOL WINAPI DeleteVolumeMountPointW(
    LPCWSTR lpszVolumeMountPoint
);

#ifdef UNICODE
#define DeleteVolumeMountPoint  DeleteVolumeMountPointW
#endif /* UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINBASEAPI BOOL WINAPI FileTimeToLocalFileTime(
    CONST FILETIME *lpFileTime,
    LPFILETIME lpLocalFileTime
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINBASEAPI BOOL WINAPI FindClose(
    HANDLE hFindFile
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI BOOL WINAPI FindCloseChangeNotification(
    HANDLE hChangeHandle
);

WINBASEAPI HANDLE WINAPI FindFirstChangeNotificationA(
    LPCSTR lpPathName,
    BOOL bWatchSubtree,
    DWORD dwNotifyFilter
);
WINBASEAPI HANDLE WINAPI FindFirstChangeNotificationW(
    LPCWSTR lpPathName,
    BOOL bWatchSubtree,
    DWORD dwNotifyFilter
);
#ifdef UNICODE
#define FindFirstChangeNotification  FindFirstChangeNotificationW
#else /* !UNICODE */
#define FindFirstChangeNotification  FindFirstChangeNotificationA
#endif /* !UNICODE */

#endif /* >WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINBASEAPI HANDLE WINAPI FindFirstFileA(
    LPCSTR lpFileName,
    LPWIN32_FIND_DATAA lpFindFileData
);
WINBASEAPI HANDLE WINAPI FindFirstFileW(
    LPCWSTR lpFileName,
    LPWIN32_FIND_DATAW lpFindFileData
);
#ifdef UNICODE
#define FindFirstFile  FindFirstFileW
#else /* !UNICODE */
#define FindFirstFile  FindFirstFileA
#endif /* !UNICODE */

#if (_WIN32_WINNT >= 0x0400)

WINBASEAPI HANDLE WINAPI FindFirstFileExA(
    LPCSTR lpFileName,
    FINDEX_INFO_LEVELS fInfoLevelId,
    LPVOID lpFindFileData,
    FINDEX_SEARCH_OPS fSearchOp,
    LPVOID lpSearchFilter,
    DWORD dwAdditionalFlags
);
WINBASEAPI HANDLE WINAPI FindFirstFileExW(
    LPCWSTR lpFileName,
    FINDEX_INFO_LEVELS fInfoLevelId,
    LPVOID lpFindFileData,
    FINDEX_SEARCH_OPS fSearchOp,
    LPVOID lpSearchFilter,
    DWORD dwAdditionalFlags
);
#ifdef UNICODE
#define FindFirstFileEx  FindFirstFileExW
#else /* !UNICODE */
#define FindFirstFileEx  FindFirstFileExA
#endif /* !UNICODE */

#endif /* _WIN32_WINNT >= 0x0400 */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI HANDLE WINAPI FindFirstVolumeW(
    LPWSTR lpszVolumeName,
    DWORD cchBufferLength
);

#ifdef UNICODE
#define FindFirstVolume FindFirstVolumeW
#endif /* UNICODE */

WINBASEAPI BOOL WINAPI FindNextChangeNotification(
    HANDLE hChangeHandle
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINBASEAPI BOOL WINAPI FindNextFileA(
    HANDLE hFindFile,
    LPWIN32_FIND_DATAA lpFindFileData
);
WINBASEAPI BOOL WINAPI FindNextFileW(
    HANDLE hFindFile,
    LPWIN32_FIND_DATAW lpFindFileData
);
#ifdef UNICODE
#define FindNextFile  FindNextFileW
#else /* !UNICODE */
#define FindNextFile  FindNextFileA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI BOOL WINAPI FindNextVolumeW(
    HANDLE hFindVolume,
    LPWSTR lpszVolumeName,
    DWORD cchBufferLength
);

#ifdef UNICODE
#define FindNextVolume FindNextVolumeW
#endif /* UNICODE */

WINBASEAPI BOOL WINAPI FindVolumeClose(
    HANDLE hFindVolume
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINBASEAPI BOOL WINAPI FlushFileBuffers(
    HANDLE hFile
);

WINBASEAPI BOOL WINAPI GetDiskFreeSpaceA(
    LPCSTR lpRootPathName,
    LPDWORD lpSectorsPerCluster,
    LPDWORD lpBytesPerSector,
    LPDWORD lpNumberOfFreeClusters,
    LPDWORD lpTotalNumberOfClusters
);
WINBASEAPI BOOL WINAPI GetDiskFreeSpaceW(
    LPCWSTR lpRootPathName,
    LPDWORD lpSectorsPerCluster,
    LPDWORD lpBytesPerSector,
    LPDWORD lpNumberOfFreeClusters,
    LPDWORD lpTotalNumberOfClusters
);
#ifdef UNICODE
#define GetDiskFreeSpace  GetDiskFreeSpaceW
#else /* !UNICODE */
#define GetDiskFreeSpace  GetDiskFreeSpaceA
#endif /* !UNICODE */

WINBASEAPI BOOL WINAPI GetDiskFreeSpaceExA(
    LPCSTR lpDirectoryName,
    PULARGE_INTEGER lpFreeBytesAvailableToCaller,
    PULARGE_INTEGER lpTotalNumberOfBytes,
    PULARGE_INTEGER lpTotalNumberOfFreeBytes
);
WINBASEAPI BOOL WINAPI GetDiskFreeSpaceExW(
    LPCWSTR lpDirectoryName,
    PULARGE_INTEGER lpFreeBytesAvailableToCaller,
    PULARGE_INTEGER lpTotalNumberOfBytes,
    PULARGE_INTEGER lpTotalNumberOfFreeBytes
);
#ifdef UNICODE
#define GetDiskFreeSpaceEx  GetDiskFreeSpaceExW
#else /* !UNICODE */
#define GetDiskFreeSpaceEx  GetDiskFreeSpaceExA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

typedef struct DISK_SPACE_INFORMATION {
    ULONGLONG ActualTotalAllocationUnits;
    ULONGLONG ActualAvailableAllocationUnits;
    ULONGLONG ActualPoolUnavailableAllocationUnits;
    ULONGLONG CallerTotalAllocationUnits;
    ULONGLONG CallerAvailableAllocationUnits;
    ULONGLONG CallerPoolUnavailableAllocationUnits;
    ULONGLONG UsedAllocationUnits;
    ULONGLONG TotalReservedAllocationUnits;
    ULONGLONG VolumeStorageReserveAllocationUnits;
    ULONGLONG AvailableCommittedAllocationUnits;
    ULONGLONG PoolAvailableAllocationUnits;
    DWORD SectorsPerAllocationUnit;
    DWORD BytesPerSector;
} DISK_SPACE_INFORMATION;

WINBASEAPI HRESULT WINAPI GetDiskSpaceInformationA(
    LPCSTR rootPath,
    DISK_SPACE_INFORMATION *diskSpaceInfo
);
WINBASEAPI HRESULT WINAPI GetDiskSpaceInformationW(
    LPCWSTR rootPath,
    DISK_SPACE_INFORMATION *diskSpaceInfo
);
#ifdef UNICODE
#define GetDiskSpaceInformation  GetDiskSpaceInformationW
#else /* !UNICODE */
#define GetDiskSpaceInformation  GetDiskSpaceInformationA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINBASEAPI UINT WINAPI GetDriveTypeA(
    LPCSTR lpRootPathName
);
WINBASEAPI UINT WINAPI GetDriveTypeW(
    LPCWSTR lpRootPathName
);
#ifdef UNICODE
#define GetDriveType  GetDriveTypeW
#else /* !UNICODE */
#define GetDriveType  GetDriveTypeA
#endif /* !UNICODE */

typedef struct _WIN32_FILE_ATTRIBUTE_DATA {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
} WIN32_FILE_ATTRIBUTE_DATA, *LPWIN32_FILE_ATTRIBUTE_DATA;

WINBASEAPI DWORD WINAPI GetFileAttributesA(
    LPCSTR lpFileName
);
WINBASEAPI DWORD WINAPI GetFileAttributesW(
    LPCWSTR lpFileName
);
#ifdef UNICODE
#define GetFileAttributes  GetFileAttributesW
#else /* !UNICODE */
#define GetFileAttributes  GetFileAttributesA
#endif /* !UNICODE */

WINBASEAPI BOOL WINAPI GetFileAttributesExA(
    LPCSTR lpFileName,
    GET_FILEEX_INFO_LEVELS fInfoLevelId,
    LPVOID lpFileInformation
);

WINBASEAPI BOOL WINAPI GetFileAttributesExW(
    LPCWSTR lpFileName,
    GET_FILEEX_INFO_LEVELS fInfoLevelId,
    LPVOID lpFileInformation
);
#ifdef UNICODE
#define GetFileAttributesEx  GetFileAttributesExW
#else /* !UNICODE */
#define GetFileAttributesEx  GetFileAttributesExA
#endif /* !UNICODE */

typedef struct _BY_HANDLE_FILE_INFORMATION {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD dwVolumeSerialNumber;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD nNumberOfLinks;
    DWORD nFileIndexHigh;
    DWORD nFileIndexLow;
} BY_HANDLE_FILE_INFORMATION, *PBY_HANDLE_FILE_INFORMATION, *LPBY_HANDLE_FILE_INFORMATION;

WINBASEAPI BOOL WINAPI GetFileInformationByHandle(
    HANDLE hFile,
    LPBY_HANDLE_FILE_INFORMATION lpFileInformation
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINBASEAPI DWORD WINAPI GetFileSize(
    HANDLE hFile,
    LPDWORD lpFileSizeHigh
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINBASEAPI BOOL WINAPI GetFileSizeEx(
    HANDLE hFile,
    PLARGE_INTEGER lpFileSize
);

WINBASEAPI DWORD WINAPI GetFileType(
    HANDLE hFile
);

#if (_WIN32_WINNT >= 0x0600)

WINBASEAPI DWORD WINAPI GetFinalPathNameByHandleA(
    HANDLE hFile,
    LPSTR lpszFilePath,
    DWORD cchFilePath,
    DWORD dwFlags
);
WINBASEAPI DWORD WINAPI GetFinalPathNameByHandleW(
    HANDLE hFile,
    LPWSTR lpszFilePath,
    DWORD cchFilePath,
    DWORD dwFlags
);
#ifdef UNICODE
#define GetFinalPathNameByHandle  GetFinalPathNameByHandleW
#else /* !UNICODE */
#define GetFinalPathNameByHandle  GetFinalPathNameByHandleA
#endif /* !UNICODE */

#endif /* (_WIN32_WINNT >= 0x0600) */

WINBASEAPI BOOL WINAPI GetFileTime(
    HANDLE hFile,
    LPFILETIME lpCreationTime,
    LPFILETIME lpLastAccessTime,
    LPFILETIME lpLastWriteTime
);

WINBASEAPI DWORD WINAPI GetFullPathNameW(
    LPCWSTR lpFileName,
    DWORD nBufferLength,
    LPWSTR lpBuffer,
    LPWSTR *lpFilePart
);

#ifdef UNICODE
#define GetFullPathName  GetFullPathNameW
#endif /* UNICODE */

WINBASEAPI DWORD WINAPI GetFullPathNameA(
    LPCSTR lpFileName,
    DWORD nBufferLength,
    LPSTR lpBuffer,
    LPSTR *lpFilePart
);

#ifndef UNICODE
#define GetFullPathName GetFullPathNameA
#endif /* !UNICODE */

WINBASEAPI DWORD WINAPI GetLogicalDrives(
    VOID
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI DWORD WINAPI GetLogicalDriveStringsW(
    DWORD nBufferLength,
    LPWSTR lpBuffer
);

#ifdef UNICODE
#define GetLogicalDriveStrings  GetLogicalDriveStringsW
#endif /* UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI DWORD WINAPI GetLongPathNameA(
    LPCSTR lpszShortPath,
    LPSTR lpszLongPath,
    DWORD cchBuffer
);

#ifndef UNICODE
#define GetLongPathName GetLongPathNameA
#endif /* !UNICODE */

WINBASEAPI DWORD WINAPI GetLongPathNameW(
    LPCWSTR lpszShortPath,
    LPWSTR lpszLongPath,
    DWORD cchBuffer
);

#ifdef UNICODE
#define GetLongPathName GetLongPathNameW
#endif /* UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#if (NTDDI_VERSION >= NTDDI_WIN10_FE)

WINBASEAPI BOOL WINAPI AreShortNamesEnabled(
    HANDLE Handle,
    BOOL *Enabled
);

#endif /* (NTDDI_VERSION >= NTDDI_WIN10_FE) */

WINBASEAPI DWORD WINAPI GetShortPathNameW(
    LPCWSTR lpszLongPath,
    LPWSTR lpszShortPath,
    DWORD cchBuffer
);

#ifdef UNICODE
#define GetShortPathName  GetShortPathNameW
#endif /* UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI UINT WINAPI GetTempFileNameW(
    LPCWSTR lpPathName,
    LPCWSTR lpPrefixString,
    UINT uUnique,
    LPWSTR lpTempFileName
);

#ifdef UNICODE
#define GetTempFileName  GetTempFileNameW
#endif /* UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

#if (_WIN32_WINNT >= 0x0600)
WINBASEAPI BOOL WINAPI GetVolumeInformationByHandleW(
    HANDLE hFile,
    LPWSTR lpVolumeNameBuffer,
    DWORD nVolumeNameSize,
    LPDWORD lpVolumeSerialNumber,
    LPDWORD lpMaximumComponentLength,
    LPDWORD lpFileSystemFlags,
    LPWSTR lpFileSystemNameBuffer,
    DWORD nFileSystemNameSize
);
#endif /* _WIN32_WINNT >=  0x0600 */

WINBASEAPI BOOL WINAPI GetVolumeInformationW(
    LPCWSTR lpRootPathName,
    LPWSTR lpVolumeNameBuffer,
    DWORD nVolumeNameSize,
    LPDWORD lpVolumeSerialNumber,
    LPDWORD lpMaximumComponentLength,
    LPDWORD lpFileSystemFlags,
    LPWSTR lpFileSystemNameBuffer,
    DWORD nFileSystemNameSize
);

#ifdef UNICODE
#define GetVolumeInformation  GetVolumeInformationW
#endif /* UNICODE */

WINBASEAPI BOOL WINAPI GetVolumePathNameW(
    LPCWSTR lpszFileName,
    LPWSTR lpszVolumePathName,
    DWORD cchBufferLength
);

#ifdef UNICODE
#define GetVolumePathName  GetVolumePathNameW
#endif /* UNICODE */

WINBASEAPI BOOL WINAPI LocalFileTimeToFileTime(
    CONST FILETIME *lpLocalFileTime,
    LPFILETIME lpFileTime
);

WINBASEAPI BOOL WINAPI LockFile(
    HANDLE hFile,
    DWORD dwFileOffsetLow,
    DWORD dwFileOffsetHigh,
    DWORD nNumberOfBytesToLockLow,
    DWORD nNumberOfBytesToLockHigh
);

WINBASEAPI BOOL WINAPI LockFileEx(
    HANDLE hFile,
    DWORD dwFlags,
    DWORD dwReserved,
    DWORD nNumberOfBytesToLockLow,
    DWORD nNumberOfBytesToLockHigh,
    LPOVERLAPPED lpOverlapped
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI DWORD WINAPI QueryDosDeviceW(
    LPCWSTR lpDeviceName,
    LPWSTR lpTargetPath,
    DWORD ucchMax
);

#ifdef UNICODE
#define QueryDosDevice  QueryDosDeviceW
#endif /* UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINBASEAPI BOOL WINAPI ReadFile(
    HANDLE hFile,
    LPVOID lpBuffer,
    DWORD nNumberOfBytesToRead,
    LPDWORD lpNumberOfBytesRead,
    LPOVERLAPPED lpOverlapped
);

WINBASEAPI BOOL WINAPI ReadFileEx(
    HANDLE hFile,
    LPVOID lpBuffer,
    DWORD nNumberOfBytesToRead,
    LPOVERLAPPED lpOverlapped,
    LPOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine
);

WINBASEAPI BOOL WINAPI ReadFileScatter(
    HANDLE hFile,
    FILE_SEGMENT_ELEMENT aSegmentArray[],
    DWORD nNumberOfBytesToRead,
    LPDWORD lpReserved,
    LPOVERLAPPED lpOverlapped
);

WINBASEAPI BOOL WINAPI RemoveDirectoryA(
    LPCSTR lpPathName
);

WINBASEAPI BOOL WINAPI RemoveDirectoryW(
    LPCWSTR lpPathName
);
#ifdef UNICODE
#define RemoveDirectory  RemoveDirectoryW
#else /* !UNICODE */
#define RemoveDirectory  RemoveDirectoryA
#endif /* !UNICODE */

WINBASEAPI BOOL WINAPI SetEndOfFile(
    HANDLE hFile
);

WINBASEAPI BOOL WINAPI SetFileAttributesA(
    LPCSTR lpFileName,
    DWORD dwFileAttributes
);

WINBASEAPI BOOL WINAPI SetFileAttributesW(
    LPCWSTR lpFileName,
    DWORD dwFileAttributes
);
#ifdef UNICODE
#define SetFileAttributes  SetFileAttributesW
#else /* !UNICODE */
#define SetFileAttributes  SetFileAttributesA
#endif /* !UNICODE */

#if (_WIN32_WINNT >= 0x0600)
WINBASEAPI BOOL WINAPI SetFileInformationByHandle(
    HANDLE hFile,
    FILE_INFO_BY_HANDLE_CLASS FileInformationClass,
    LPVOID lpFileInformation,
    DWORD dwBufferSize
);
#endif /* (_WIN32_WINNT >= 0x0600) */

WINBASEAPI DWORD WINAPI SetFilePointer(
    HANDLE hFile,
    LONG lDistanceToMove,
    PLONG lpDistanceToMoveHigh,
    DWORD dwMoveMethod
);

WINBASEAPI BOOL WINAPI SetFilePointerEx(
    HANDLE hFile,
    LARGE_INTEGER liDistanceToMove,
    PLARGE_INTEGER lpNewFilePointer,
    DWORD dwMoveMethod
);

WINBASEAPI BOOL WINAPI SetFileTime(
    HANDLE hFile,
    CONST FILETIME *lpCreationTime,
    CONST FILETIME *lpLastAccessTime,
    CONST FILETIME *lpLastWriteTime
);

#if (_WIN32_WINNT >= 0x0501)
WINBASEAPI BOOL WINAPI SetFileValidData(
    HANDLE hFile,
    LONGLONG ValidDataLength
);
#endif /* (_WIN32_WINNT >= 0x0501) */

WINBASEAPI BOOL WINAPI UnlockFile(
    HANDLE hFile,
    DWORD dwFileOffsetLow,
    DWORD dwFileOffsetHigh,
    DWORD nNumberOfBytesToUnlockLow,
    DWORD nNumberOfBytesToUnlockHigh
);

WINBASEAPI BOOL WINAPI UnlockFileEx(
    HANDLE hFile,
    DWORD dwReserved,
    DWORD nNumberOfBytesToUnlockLow,
    DWORD nNumberOfBytesToUnlockHigh,
    LPOVERLAPPED lpOverlapped
);

WINBASEAPI BOOL WINAPI WriteFile(
    HANDLE hFile,
    LPCVOID lpBuffer,
    DWORD nNumberOfBytesToWrite,
    LPDWORD lpNumberOfBytesWritten,
    LPOVERLAPPED lpOverlapped
);

WINBASEAPI BOOL WINAPI WriteFileEx(
    HANDLE hFile,
    LPCVOID lpBuffer,
    DWORD nNumberOfBytesToWrite,
    LPOVERLAPPED lpOverlapped,
    LPOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine
);

WINBASEAPI BOOL WINAPI WriteFileGather(
    HANDLE hFile,
    FILE_SEGMENT_ELEMENT aSegmentArray[],
    DWORD nNumberOfBytesToWrite,
    LPDWORD lpReserved,
    LPOVERLAPPED lpOverlapped
);

WINBASEAPI DWORD WINAPI GetTempPathW(
    DWORD nBufferLength,
    LPWSTR lpBuffer
);

#ifdef UNICODE
#define GetTempPath  GetTempPathW
#endif /* UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI BOOL WINAPI GetVolumeNameForVolumeMountPointW(
    LPCWSTR lpszVolumeMountPoint,
    LPWSTR lpszVolumeName,
    DWORD cchBufferLength
);

#ifdef UNICODE
#define GetVolumeNameForVolumeMountPoint  GetVolumeNameForVolumeMountPointW
#endif /* UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#if (_WIN32_WINNT >= 0x0501)

WINBASEAPI BOOL WINAPI GetVolumePathNamesForVolumeNameW(
    LPCWSTR lpszVolumeName,
    LPWCH lpszVolumePathNames,
    DWORD cchBufferLength,
    PDWORD lpcchReturnLength
);

#ifdef UNICODE
#define GetVolumePathNamesForVolumeName  GetVolumePathNamesForVolumeNameW
#endif /* UNICODE */

#endif /* (_WIN32_WINNT >= 0x0501) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

#if (_WIN32_WINNT >= 0x0602)

typedef struct _CREATEFILE2_EXTENDED_PARAMETERS {
    DWORD dwSize;
    DWORD dwFileAttributes;
    DWORD dwFileFlags;
    DWORD dwSecurityQosFlags;
    LPSECURITY_ATTRIBUTES lpSecurityAttributes;
    HANDLE hTemplateFile;
} CREATEFILE2_EXTENDED_PARAMETERS, *PCREATEFILE2_EXTENDED_PARAMETERS, *LPCREATEFILE2_EXTENDED_PARAMETERS;

WINBASEAPI HANDLE WINAPI CreateFile2(
    LPCWSTR lpFileName,
    DWORD dwDesiredAccess,
    DWORD dwShareMode,
    DWORD dwCreationDisposition,
    LPCREATEFILE2_EXTENDED_PARAMETERS pCreateExParams
);

#endif /* (_WIN32_WINNT >= 0x0602) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#if (_WIN32_WINNT >= 0x0600)
WINBASEAPI BOOL WINAPI SetFileIoOverlappedRange(
    HANDLE FileHandle,
    PUCHAR OverlappedRangeStart,
    ULONG Length
);
#endif /* (_WIN32_WINNT >= 0x0600) */

#if (_WIN32_WINNT >= 0x0501)

WINBASEAPI DWORD WINAPI GetCompressedFileSizeA(
    LPCSTR lpFileName,
    LPDWORD lpFileSizeHigh
);
WINBASEAPI DWORD WINAPI GetCompressedFileSizeW(
    LPCWSTR lpFileName,
    LPDWORD lpFileSizeHigh
);
#ifdef UNICODE
#define GetCompressedFileSize  GetCompressedFileSizeW
#else /* !UNICODE */
#define GetCompressedFileSize  GetCompressedFileSizeA
#endif /* !UNICODE */

#endif /* (_WIN32_WINNT >= 0x0501) */

#if (_WIN32_WINNT >= 0x0501)

typedef enum _STREAM_INFO_LEVELS {
    FindStreamInfoStandard,
    FindStreamInfoMaxInfoLevel
} STREAM_INFO_LEVELS;

typedef struct _WIN32_FIND_STREAM_DATA {
    LARGE_INTEGER StreamSize;
    WCHAR cStreamName[ MAX_PATH + 36 ];
} WIN32_FIND_STREAM_DATA, *PWIN32_FIND_STREAM_DATA;

WINBASEAPI HANDLE WINAPI FindFirstStreamW(
    LPCWSTR lpFileName,
    STREAM_INFO_LEVELS InfoLevel,
    LPVOID lpFindStreamData,
    DWORD dwFlags
);

WINBASEAPI BOOL APIENTRY FindNextStreamW(
    HANDLE hFindStream,
    LPVOID lpFindStreamData
);

#endif /* (_WIN32_WINNT >= 0x0501) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINBASEAPI BOOL WINAPI AreFileApisANSI(
    void
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINBASEAPI DWORD WINAPI GetTempPathA(
    DWORD nBufferLength,
    LPSTR lpBuffer
);

#ifndef UNICODE
#define GetTempPath  GetTempPathA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#if (_WIN32_WINNT >= 0x0600)

WINBASEAPI HANDLE WINAPI FindFirstFileNameW(
    LPCWSTR lpFileName,
    DWORD dwFlags,
    LPDWORD StringLength,
    PWSTR LinkName
);

WINBASEAPI BOOL APIENTRY FindNextFileNameW(
    HANDLE hFindStream,
    LPDWORD StringLength,
    PWSTR LinkName
);

#endif /* (_WIN32_WINNT >= 0x0600) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINBASEAPI BOOL WINAPI GetVolumeInformationA(
    LPCSTR lpRootPathName,
    LPSTR lpVolumeNameBuffer,
    DWORD nVolumeNameSize,
    LPDWORD lpVolumeSerialNumber,
    LPDWORD lpMaximumComponentLength,
    LPDWORD lpFileSystemFlags,
    LPSTR lpFileSystemNameBuffer,
    DWORD nFileSystemNameSize
);

#ifndef UNICODE
#define GetVolumeInformation  GetVolumeInformationA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI UINT WINAPI GetTempFileNameA(
    LPCSTR lpPathName,
    LPCSTR lpPrefixString,
    UINT uUnique,
    LPSTR lpTempFileName
);

#ifndef UNICODE
#define GetTempFileName  GetTempFileNameA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI void WINAPI SetFileApisToOEM(void);
WINBASEAPI void WINAPI SetFileApisToANSI(void);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

#if (NTDDI_VERSION >= NTDDI_WIN10_FE)

WINBASEAPI DWORD WINAPI GetTempPath2W(
    DWORD BufferLength,
    LPWSTR Buffer
);

#ifdef UNICODE
#define GetTempPath2  GetTempPath2W
#endif /* UNICODE */

WINBASEAPI DWORD WINAPI GetTempPath2A(
    DWORD BufferLength,
    LPSTR Buffer
);

#ifndef UNICODE
#define GetTempPath2  GetTempPath2A
#endif /* !UNICODE */

#endif /* (NTDDI_VERSION >= NTDDI_WIN10_FE) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#endif /* _FILEAPI_H */
