#ifndef _SCHEDULE_H
#define _SCHEDULE_H

#if __POCC__ >= 500
#pragma once
#endif

/* Windows NT common schedule structure definitions */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#define SCHEDULE_INTERVAL   0
#define SCHEDULE_BANDWIDTH  1
#define SCHEDULE_PRIORITY   2

typedef struct _SCHEDULE_HEADER {
    ULONG Type;
    ULONG Offset;
} SCHEDULE_HEADER, *PSCHEDULE_HEADER;

typedef struct _SCHEDULE {
    ULONG Size;
    ULONG Bandwidth;
    ULONG NumberOfSchedules;
    SCHEDULE_HEADER Schedules[1];
} SCHEDULE, *PSCHEDULE;

#define SCHEDULE_DATA_ENTRIES  (7 * 24)

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#endif /* _SCHEDULE_H */
