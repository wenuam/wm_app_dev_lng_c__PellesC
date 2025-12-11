#ifndef _MEMORYAPI_H
#define _MEMORYAPI_H

#if __POCC__ >= 500
#pragma once
#endif

#if __POCC__ >= 290
#pragma warn(push)
#pragma warn(disable:2198)  /* Nameless field is not standard */
#pragma warn(disable:2225)  /* Type padded due to alignment */
#endif

/* ApiSet contract for api-ms-win-core-memory-l1-1-0 */

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

#define FILE_MAP_WRITE            SECTION_MAP_WRITE
#define FILE_MAP_READ             SECTION_MAP_READ
#define FILE_MAP_ALL_ACCESS       SECTION_ALL_ACCESS

#define FILE_MAP_EXECUTE          SECTION_MAP_EXECUTE_EXPLICIT

#define FILE_MAP_COPY             0x00000001

#define FILE_MAP_RESERVE          0x80000000
#define FILE_MAP_TARGETS_INVALID  0x40000000
#define FILE_MAP_LARGE_PAGES      0x20000000

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINBASEAPI LPVOID WINAPI VirtualAlloc(
    LPVOID lpAddress,
    SIZE_T dwSize,
    DWORD flAllocationType,
    DWORD flProtect
);

WINBASEAPI BOOL WINAPI VirtualProtect(
    LPVOID lpAddress,
    SIZE_T dwSize,
    DWORD flNewProtect,
    PDWORD lpflOldProtect
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINBASEAPI BOOL WINAPI VirtualFree(
    LPVOID lpAddress,
    SIZE_T dwSize,
    DWORD dwFreeType
);

WINBASEAPI SIZE_T WINAPI VirtualQuery(
    LPCVOID lpAddress,
    PMEMORY_BASIC_INFORMATION lpBuffer,
    SIZE_T dwLength
);

WINBASEAPI LPVOID WINAPI VirtualAllocEx(
    HANDLE hProcess,
    LPVOID lpAddress,
    SIZE_T dwSize,
    DWORD flAllocationType,
    DWORD flProtect
);

WINBASEAPI BOOL WINAPI VirtualProtectEx(
    HANDLE hProcess,
    LPVOID lpAddress,
    SIZE_T dwSize,
    DWORD flNewProtect,
    PDWORD lpflOldProtect
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINBASEAPI SIZE_T WINAPI VirtualQueryEx(
    HANDLE hProcess,
    LPCVOID lpAddress,
    PMEMORY_BASIC_INFORMATION lpBuffer,
    SIZE_T dwLength
);

WINBASEAPI BOOL WINAPI ReadProcessMemory(
    HANDLE hProcess,
    LPCVOID lpBaseAddress,
    LPVOID lpBuffer,
    SIZE_T nSize,
    SIZE_T *lpNumberOfBytesRead
);

WINBASEAPI BOOL WINAPI WriteProcessMemory(
    HANDLE hProcess,
    LPVOID lpBaseAddress,
    LPCVOID lpBuffer,
    SIZE_T nSize,
    SIZE_T *lpNumberOfBytesWritten
);

WINBASEAPI HANDLE WINAPI CreateFileMappingW(
    HANDLE hFile,
    LPSECURITY_ATTRIBUTES lpFileMappingAttributes,
    DWORD flProtect,
    DWORD dwMaximumSizeHigh,
    DWORD dwMaximumSizeLow,
    LPCWSTR lpName
);

#ifdef UNICODE
#define CreateFileMapping  CreateFileMappingW
#endif /* UNICODE */

WINBASEAPI HANDLE WINAPI OpenFileMappingW(
    DWORD dwDesiredAccess,
    BOOL bInheritHandle,
    LPCWSTR lpName
);

#ifdef UNICODE
#define OpenFileMapping  OpenFileMappingW
#endif /* UNICODE */

WINBASEAPI LPVOID WINAPI MapViewOfFile(
    HANDLE hFileMappingObject,
    DWORD dwDesiredAccess,
    DWORD dwFileOffsetHigh,
    DWORD dwFileOffsetLow,
    SIZE_T dwNumberOfBytesToMap
);

WINBASEAPI LPVOID WINAPI MapViewOfFileEx(
    HANDLE hFileMappingObject,
    DWORD dwDesiredAccess,
    DWORD dwFileOffsetHigh,
    DWORD dwFileOffsetLow,
    SIZE_T dwNumberOfBytesToMap,
    LPVOID lpBaseAddress
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINBASEAPI BOOL WINAPI VirtualFreeEx(
    HANDLE hProcess,
    LPVOID lpAddress,
    SIZE_T dwSize,
    DWORD dwFreeType
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI BOOL WINAPI FlushViewOfFile(
    LPCVOID lpBaseAddress,
    SIZE_T dwNumberOfBytesToFlush
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINBASEAPI BOOL WINAPI UnmapViewOfFile(
    LPCVOID lpBaseAddress
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI SIZE_T WINAPI GetLargePageMinimum(void);

WINBASEAPI BOOL WINAPI GetProcessWorkingSetSize(
    HANDLE hProcess,
    PSIZE_T lpMinimumWorkingSetSize,
    PSIZE_T lpMaximumWorkingSetSize
);

WINBASEAPI BOOL WINAPI GetProcessWorkingSetSizeEx(
    HANDLE hProcess,
    PSIZE_T lpMinimumWorkingSetSize,
    PSIZE_T lpMaximumWorkingSetSize,
    PDWORD Flags
);

WINBASEAPI BOOL WINAPI SetProcessWorkingSetSize(
    HANDLE hProcess,
    SIZE_T dwMinimumWorkingSetSize,
    SIZE_T dwMaximumWorkingSetSize
);

WINBASEAPI BOOL WINAPI SetProcessWorkingSetSizeEx(
    HANDLE hProcess,
    SIZE_T dwMinimumWorkingSetSize,
    SIZE_T dwMaximumWorkingSetSize,
    DWORD Flags
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI BOOL WINAPI VirtualLock(
    LPVOID lpAddress,
    SIZE_T dwSize
);

WINBASEAPI BOOL WINAPI VirtualUnlock(
    LPVOID lpAddress,
    SIZE_T dwSize
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI UINT WINAPI GetWriteWatch(
    DWORD dwFlags,
    PVOID lpBaseAddress,
    SIZE_T dwRegionSize,
    PVOID *lpAddresses,
    ULONG_PTR *lpdwCount,
    LPDWORD lpdwGranularity
);

WINBASEAPI UINT WINAPI ResetWriteWatch(
    LPVOID lpBaseAddress,
    SIZE_T dwRegionSize
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#if (_WIN32_WINNT >= _WIN32_WINNT_WINXP)

typedef enum _MEMORY_RESOURCE_NOTIFICATION_TYPE {
    LowMemoryResourceNotification,
    HighMemoryResourceNotification
} MEMORY_RESOURCE_NOTIFICATION_TYPE;

WINBASEAPI HANDLE WINAPI CreateMemoryResourceNotification(
    MEMORY_RESOURCE_NOTIFICATION_TYPE NotificationType
);

WINBASEAPI BOOL WINAPI QueryMemoryResourceNotification(
    HANDLE ResourceNotificationHandle,
    PBOOL ResourceState
);

#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WINXP) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

#if (_WIN32_WINNT >= _WIN32_WINNT_WS03)

#define FILE_CACHE_FLAGS_DEFINED
#define FILE_CACHE_MAX_HARD_ENABLE      0x00000001
#define FILE_CACHE_MAX_HARD_DISABLE     0x00000002
#define FILE_CACHE_MIN_HARD_ENABLE      0x00000004
#define FILE_CACHE_MIN_HARD_DISABLE     0x00000008

WINBASEAPI BOOL WINAPI GetSystemFileCacheSize(
    PSIZE_T lpMinimumFileCacheSize,
    PSIZE_T lpMaximumFileCacheSize,
    PDWORD lpFlags
);

WINBASEAPI BOOL WINAPI SetSystemFileCacheSize(
    SIZE_T MinimumFileCacheSize,
    SIZE_T MaximumFileCacheSize,
    DWORD Flags
);

#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WS03) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#if (_WIN32_WINNT >= _WIN32_WINNT_VISTA)

WINBASEAPI HANDLE WINAPI CreateFileMappingNumaW(
    HANDLE hFile,
    LPSECURITY_ATTRIBUTES lpFileMappingAttributes,
    DWORD flProtect,
    DWORD dwMaximumSizeHigh,
    DWORD dwMaximumSizeLow,
    LPCWSTR lpName,
    DWORD nndPreferred
);

#ifdef UNICODE
#define CreateFileMappingNuma CreateFileMappingNumaW
#endif /* UNICODE */

#endif /* (_WIN32_WINNT >= _WIN32_WINNT_VISTA) */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)

typedef struct _WIN32_MEMORY_RANGE_ENTRY {
    PVOID VirtualAddress;
    SIZE_T NumberOfBytes;
} WIN32_MEMORY_RANGE_ENTRY, *PWIN32_MEMORY_RANGE_ENTRY;

WINBASEAPI BOOL WINAPI PrefetchVirtualMemory(
    HANDLE hProcess,
    ULONG_PTR NumberOfEntries,
    PWIN32_MEMORY_RANGE_ENTRY VirtualAddresses,
    ULONG Flags
);

#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WIN8) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)

WINBASEAPI HANDLE WINAPI CreateFileMappingFromApp(
    HANDLE hFile,
    PSECURITY_ATTRIBUTES SecurityAttributes,
    ULONG PageProtection,
    ULONG64 MaximumSize,
    PCWSTR Name
);

WINBASEAPI PVOID WINAPI MapViewOfFileFromApp(
    HANDLE hFileMappingObject,
    ULONG DesiredAccess,
    ULONG64 FileOffset,
    SIZE_T NumberOfBytesToMap
);

WINBASEAPI BOOL WINAPI UnmapViewOfFileEx(
    PVOID BaseAddress,
    ULONG UnmapFlags
);

#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WIN8) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#if (_WIN32_WINNT >= _WIN32_WINNT_WINXP)

WINBASEAPI BOOL WINAPI AllocateUserPhysicalPages(
    HANDLE hProcess,
    PULONG_PTR NumberOfPages,
    PULONG_PTR PageArray
);

WINBASEAPI BOOL WINAPI FreeUserPhysicalPages(
    HANDLE hProcess,
    PULONG_PTR NumberOfPages,
    PULONG_PTR PageArray
);

WINBASEAPI BOOL WINAPI MapUserPhysicalPages(
    PVOID VirtualAddress,
    ULONG_PTR NumberOfPages,
    PULONG_PTR PageArray
);

#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WINXP) */

#if (_WIN32_WINNT >= _WIN32_WINNT_VISTA)

WINBASEAPI BOOL WINAPI AllocateUserPhysicalPagesNuma(
    HANDLE hProcess,
    PULONG_PTR NumberOfPages,
    PULONG_PTR PageArray,
    DWORD nndPreferred
);

WINBASEAPI LPVOID WINAPI VirtualAllocExNuma(
    HANDLE hProcess,
    LPVOID lpAddress,
    SIZE_T dwSize,
    DWORD flAllocationType,
    DWORD flProtect,
    DWORD nndPreferred
);

#endif /* (_WIN32_WINNT >= _WIN32_WINNT_VISTA) */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)

#define MEHC_PATROL_SCRUBBER_PRESENT  0x1

WINBASEAPI BOOL WINAPI GetMemoryErrorHandlingCapabilities(
    PULONG Capabilities
);

typedef void WINAPI BAD_MEMORY_CALLBACK_ROUTINE(void);

typedef BAD_MEMORY_CALLBACK_ROUTINE *PBAD_MEMORY_CALLBACK_ROUTINE;

WINBASEAPI PVOID WINAPI RegisterBadMemoryNotification(
    PBAD_MEMORY_CALLBACK_ROUTINE Callback
);

WINBASEAPI BOOL WINAPI UnregisterBadMemoryNotification(
    PVOID RegistrationHandle
);

#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WIN8) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

#if (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE)

#if ((NTDDI_VERSION > NTDDI_WINBLUE) || (NTDDI_VERSION == NTDDI_WINBLUE && defined(WINBLUE_KBSPRING14)))

typedef enum OFFER_PRIORITY {
    VmOfferPriorityVeryLow = 1,
    VmOfferPriorityLow,
    VmOfferPriorityBelowNormal,
    VmOfferPriorityNormal
} OFFER_PRIORITY;

DWORD WINAPI OfferVirtualMemory(
    PVOID VirtualAddress,
    SIZE_T Size,
    OFFER_PRIORITY Priority
);

DWORD WINAPI ReclaimVirtualMemory(
    void const * VirtualAddress,
    SIZE_T Size
);

DWORD WINAPI DiscardVirtualMemory(
    PVOID VirtualAddress,
    SIZE_T Size
);

#endif /* NTDDI_VERSION > NTDDI_WINBLUE || (NTDDI_VERSION == NTDDI_WINBLUE && defined(WINBLUE_KBSPRING14))) */

#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE) */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN10)

WINBASEAPI BOOL WINAPI SetProcessValidCallTargets(
    HANDLE hProcess,
    PVOID VirtualAddress,
    SIZE_T RegionSize,
    ULONG NumberOfOffsets,
    PCFG_CALL_TARGET_INFO OffsetInformation
);

WINBASEAPI BOOL WINAPI SetProcessValidCallTargetsForMappedView(
    HANDLE Process,
    PVOID VirtualAddress,
    SIZE_T RegionSize,
    ULONG NumberOfOffsets,
    PCFG_CALL_TARGET_INFO OffsetInformation,
    HANDLE Section,
    ULONG64 ExpectedFileOffset
);

WINBASEAPI PVOID WINAPI VirtualAllocFromApp(
    PVOID BaseAddress,
    SIZE_T Size,
    ULONG AllocationType,
    ULONG Protection
);

WINBASEAPI BOOL WINAPI VirtualProtectFromApp(
    PVOID Address,
    SIZE_T Size,
    ULONG NewProtection,
    PULONG OldProtection
);

WINBASEAPI HANDLE WINAPI OpenFileMappingFromApp(
    ULONG DesiredAccess,
    BOOL InheritHandle,
    PCWSTR Name
);

#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WIN10) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_PARTITION_APP && !(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)

#define CreateFileMapping  CreateFileMappingW

FORCEINLINE HANDLE WINAPI CreateFileMappingW(
    HANDLE hFile,
    LPSECURITY_ATTRIBUTES lpFileMappingAttributes,
    DWORD flProtect,
    DWORD dwMaximumSizeHigh,
    DWORD dwMaximumSizeLow,
    LPCWSTR lpName)
{
    return CreateFileMappingFromApp(hFile,
        lpFileMappingAttributes,
        flProtect,
        (((ULONG64) dwMaximumSizeHigh) << 32) | dwMaximumSizeLow,
        lpName);
}

FORCEINLINE LPVOID WINAPI MapViewOfFile(
    HANDLE hFileMappingObject,
    DWORD dwDesiredAccess,
    DWORD dwFileOffsetHigh,
    DWORD dwFileOffsetLow,
    SIZE_T dwNumberOfBytesToMap)
{
    return MapViewOfFileFromApp(hFileMappingObject,
        dwDesiredAccess,
        (((ULONG64) dwFileOffsetHigh) << 32) | dwFileOffsetLow,
        dwNumberOfBytesToMap);
}

#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WIN8) */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN10)

FORCEINLINE LPVOID WINAPI VirtualAlloc(
    LPVOID lpAddress,
    SIZE_T dwSize,
    DWORD flAllocationType,
    DWORD flProtect)
{
    return VirtualAllocFromApp(lpAddress, dwSize, flAllocationType, flProtect);
}

FORCEINLINE BOOL WINAPI VirtualProtect(
    LPVOID lpAddress,
    SIZE_T dwSize,
    DWORD flNewProtect,
    PDWORD lpflOldProtect)
{
    return VirtualProtectFromApp(lpAddress, dwSize, flNewProtect, lpflOldProtect);
}

#define OpenFileMapping  OpenFileMappingW

FORCEINLINE HANDLE WINAPI OpenFileMappingW(
    DWORD dwDesiredAccess,
    BOOL bInheritHandle,
    LPCWSTR lpName)
{
    return OpenFileMappingFromApp(dwDesiredAccess, bInheritHandle, lpName);
}

#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WIN10) */

#endif /* WINAPI_PARTITION_APP && !(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#if (NTDDI_VERSION >= NTDDI_WIN10_RS1)

typedef enum WIN32_MEMORY_INFORMATION_CLASS {
    MemoryRegionInfo
} WIN32_MEMORY_INFORMATION_CLASS;

typedef struct WIN32_MEMORY_REGION_INFORMATION {
    PVOID AllocationBase;
    ULONG AllocationProtect;
    union {
        ULONG Flags;
        struct {
            ULONG Private : 1;
            ULONG MappedDataFile : 1;
            ULONG MappedImage : 1;
            ULONG MappedPageFile : 1;
            ULONG MappedPhysical : 1;
            ULONG DirectMapped : 1;
            ULONG Reserved : 26;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME;
    SIZE_T RegionSize;
    SIZE_T CommitSize;
} WIN32_MEMORY_REGION_INFORMATION;

WINBASEAPI BOOL WINAPI QueryVirtualMemoryInformation(
    HANDLE Process,
    const VOID *VirtualAddress,
    WIN32_MEMORY_INFORMATION_CLASS MemoryInformationClass,
    PVOID MemoryInformation,
    SIZE_T MemoryInformationSize,
    PSIZE_T ReturnSize
);

#endif /* (NTDDI_VERSION >= NTDDI_WIN10_RS1) */

#if (NTDDI_VERSION >= NTDDI_WIN10_RS2)

WINBASEAPI PVOID WINAPI MapViewOfFileNuma2(
    HANDLE FileMappingHandle,
    HANDLE ProcessHandle,
    ULONG64 Offset,
    PVOID BaseAddress,
    SIZE_T ViewSize,
    ULONG AllocationType,
    ULONG PageProtection,
    ULONG PreferredNode
);

#if !defined(MIDL_PASS)

FORCEINLINE PVOID MapViewOfFile2(
    HANDLE FileMappingHandle,
    HANDLE ProcessHandle,
    ULONG64 Offset,
    PVOID BaseAddress,
    SIZE_T ViewSize,
    ULONG AllocationType,
    ULONG PageProtection)
{
    return MapViewOfFileNuma2(FileMappingHandle,
        ProcessHandle,
        Offset,
        BaseAddress,
        ViewSize,
        AllocationType,
        PageProtection,
        NUMA_NO_PREFERRED_NODE);
}

#endif /* !defined(MIDL_PASS) */

#endif /* (NTDDI_VERSION >= NTDDI_WIN10_RS2) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI BOOL WINAPI UnmapViewOfFile2(
    HANDLE Process,
    PVOID BaseAddress,
    ULONG UnmapFlags
);

WINBASEAPI BOOL WINAPI VirtualUnlockEx(
    HANDLE Process,
    LPVOID Address,
    SIZE_T Size
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if (NTDDI_VERSION >= NTDDI_WIN10_RS4)

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI PVOID WINAPI VirtualAlloc2(
    HANDLE Process,
    PVOID BaseAddress,
    SIZE_T Size,
    ULONG AllocationType,
    ULONG PageProtection,
    MEM_EXTENDED_PARAMETER * ExtendedParameters,
    ULONG ParameterCount
);

WINBASEAPI PVOID WINAPI MapViewOfFile3(
    HANDLE FileMapping,
    HANDLE Process,
    PVOID BaseAddress,
    ULONG64 Offset,
    SIZE_T ViewSize,
    ULONG AllocationType,
    ULONG PageProtection,
    MEM_EXTENDED_PARAMETER * ExtendedParameters,
    ULONG ParameterCount
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI PVOID WINAPI VirtualAlloc2FromApp(
    HANDLE Process,
    PVOID BaseAddress,
    SIZE_T Size,
    ULONG AllocationType,
    ULONG PageProtection,
    MEM_EXTENDED_PARAMETER *ExtendedParameters,
    ULONG ParameterCount
);

WINBASEAPI PVOID WINAPI MapViewOfFile3FromApp(
    HANDLE FileMapping,
    HANDLE Process,
    PVOID BaseAddress,
    ULONG64 Offset,
    SIZE_T ViewSize,
    ULONG AllocationType,
    ULONG PageProtection,
    MEM_EXTENDED_PARAMETER *ExtendedParameters,
    ULONG ParameterCount
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#endif /* (NTDDI_VERSION >= NTDDI_WIN10_RS4) */

#if (NTDDI_VERSION >= NTDDI_WIN10_RS5)

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI HANDLE WINAPI CreateFileMapping2(
    HANDLE File,
    SECURITY_ATTRIBUTES * SecurityAttributes,
    ULONG DesiredAccess,
    ULONG PageProtection,
    ULONG AllocationAttributes,
    ULONG64 MaximumSize,
    PCWSTR Name,
    MEM_EXTENDED_PARAMETER * ExtendedParameters,
    ULONG ParameterCount
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#endif /* (NTDDI_VERSION >= NTDDI_WIN10_RS5) */

#if (NTDDI_VERSION >= NTDDI_WIN10_FE)

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI BOOL WINAPI AllocateUserPhysicalPages2(
    HANDLE ObjectHandle,
    PULONG_PTR NumberOfPages,
    PULONG_PTR PageArray,
    PMEM_EXTENDED_PARAMETER ExtendedParameters,
    ULONG ExtendedParameterCount
);

typedef enum WIN32_MEMORY_PARTITION_INFORMATION_CLASS {
    MemoryPartitionInfo,
    MemoryPartitionDedicatedMemoryInfo
} WIN32_MEMORY_PARTITION_INFORMATION_CLASS;

typedef struct DECLSPEC_ALIGN(8) WIN32_MEMORY_PARTITION_INFORMATION {
    ULONG Flags;
    ULONG NumaNode;
    ULONG Channel;
    ULONG NumberOfNumaNodes;
    ULONG64 ResidentAvailablePages;
    ULONG64 CommittedPages;
    ULONG64 CommitLimit;
    ULONG64 PeakCommitment;
    ULONG64 TotalNumberOfPages;
    ULONG64 AvailablePages;
    ULONG64 ZeroPages;
    ULONG64 FreePages;
    ULONG64 StandbyPages;
    ULONG64 Reserved[16];
    ULONG64 MaximumCommitLimit;
    ULONG64 Reserved2;
    ULONG PartitionId;
} WIN32_MEMORY_PARTITION_INFORMATION;

WINBASEAPI HANDLE WINAPI OpenDedicatedMemoryPartition(
    HANDLE Partition,
    ULONG64 DedicatedMemoryTypeId,
    ACCESS_MASK DesiredAccess,
    BOOL InheritHandle
);

WINBASEAPI BOOL WINAPI QueryPartitionInformation(
    HANDLE Partition,
    WIN32_MEMORY_PARTITION_INFORMATION_CLASS PartitionInformationClass,
    PVOID PartitionInformation,
    ULONG PartitionInformationLength
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#endif /* (NTDDI_VERSION >= NTDDI_WIN10_FE) */

#if __POCC__ >= 290
#pragma warn(pop)
#endif

#endif /* _MEMORYAPI_H */
