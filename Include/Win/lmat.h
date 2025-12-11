#ifndef _LMAT_H
#define _LMAT_H

#if __POCC__ >= 500
#pragma once
#endif

/* Schedule service API definitions */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#define JOB_RUN_PERIODICALLY    0x01
#define JOB_EXEC_ERROR          0x02
#define JOB_RUNS_TODAY          0x04
#define JOB_ADD_CURRENT_DATE    0x08
#define JOB_NONINTERACTIVE      0x10

#define JOB_INPUT_FLAGS  ( \
    JOB_RUN_PERIODICALLY | \
    JOB_ADD_CURRENT_DATE | \
    JOB_NONINTERACTIVE \
)

#define JOB_OUTPUT_FLAGS  ( \
    JOB_RUN_PERIODICALLY | \
    JOB_EXEC_ERROR | \
    JOB_RUNS_TODAY | \
    JOB_NONINTERACTIVE \
)

typedef struct _AT_INFO {
    DWORD_PTR JobTime;
    DWORD DaysOfMonth;
    UCHAR DaysOfWeek;
    UCHAR Flags;
    LPWSTR Command;
} AT_INFO, *PAT_INFO, *LPAT_INFO;

typedef struct _AT_ENUM {
    DWORD JobId;
    DWORD_PTR JobTime;
    DWORD DaysOfMonth;
    UCHAR DaysOfWeek;
    UCHAR Flags;
    LPWSTR Command;
} AT_ENUM, *PAT_ENUM, *LPAT_ENUM;

NET_API_STATUS NET_API_FUNCTION NetScheduleJobAdd(
    LPCWSTR Servername,
    LPBYTE Buffer,
    LPDWORD JobId
);

NET_API_STATUS NET_API_FUNCTION NetScheduleJobDel(
    LPCWSTR Servername,
    DWORD MinJobId,
    DWORD MaxJobId
);

NET_API_STATUS NET_API_FUNCTION NetScheduleJobEnum(
    LPCWSTR Servername,
    LPBYTE *PointerToBuffer,
    DWORD PrefferedMaximumLength,
    LPDWORD EntriesRead,
    LPDWORD TotalEntries,
    LPDWORD ResumeHandle
);

NET_API_STATUS NET_API_FUNCTION NetScheduleJobGetInfo(
    LPCWSTR Servername,
    DWORD JobId,
    LPBYTE *PointerToBuffer
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#endif /* _LMAT_H */
