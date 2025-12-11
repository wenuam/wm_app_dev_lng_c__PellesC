#ifndef _JOBAPI2_H
#define _JOBAPI2_H

#if __POCC__ >= 500
#pragma once
#endif

/* ApiSet contract for api-ms-win-core-job-l2 */

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

typedef struct JOBOBJECT_IO_RATE_CONTROL_INFORMATION {
    LONG64 MaxIops;
    LONG64 MaxBandwidth;
    LONG64 ReservationIops;
    PCWSTR VolumeName;
    ULONG BaseIoSize;
    ULONG ControlFlags;
} JOBOBJECT_IO_RATE_CONTROL_INFORMATION;

WINBASEAPI HANDLE WINAPI CreateJobObjectW(
    LPSECURITY_ATTRIBUTES lpJobAttributes,
    LPCWSTR lpName
);

WINBASEAPI VOID WINAPI FreeMemoryJobObject(
    VOID *Buffer
);

WINBASEAPI HANDLE WINAPI OpenJobObjectW(
    DWORD dwDesiredAccess,
    BOOL bInheritHandle,
    LPCWSTR lpName
);

WINBASEAPI BOOL WINAPI AssignProcessToJobObject(
    HANDLE hJob,
    HANDLE hProcess
);

WINBASEAPI BOOL WINAPI TerminateJobObject(
    HANDLE hJob,
    UINT uExitCode
);

WINBASEAPI BOOL WINAPI SetInformationJobObject(
    HANDLE hJob,
    JOBOBJECTINFOCLASS JobObjectInformationClass,
    LPVOID lpJobObjectInformation,
    DWORD cbJobObjectInformationLength
);

WINBASEAPI DWORD WINAPI SetIoRateControlInformationJobObject(
    HANDLE hJob,
    JOBOBJECT_IO_RATE_CONTROL_INFORMATION *IoRateControlInfo
);

WINBASEAPI BOOL WINAPI QueryInformationJobObject(
    HANDLE hJob,
    JOBOBJECTINFOCLASS JobObjectInformationClass,
    LPVOID lpJobObjectInformation,
    DWORD cbJobObjectInformationLength,
    LPDWORD lpReturnLength
);

WINBASEAPI DWORD WINAPI QueryIoRateControlInformationJobObject(
    HANDLE hJob,
    PCWSTR VolumeName,
    JOBOBJECT_IO_RATE_CONTROL_INFORMATION **InfoBlocks,
    ULONG *InfoBlockCount
);
#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#endif /* _JOBAPI2_H */
