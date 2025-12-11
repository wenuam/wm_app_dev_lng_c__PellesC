#ifndef _MMISCAPI2_H
#define _MMISCAPI2_H

#if __POCC__ >= 500
#pragma once
#endif

/* ApiSet contract for api-ms-win-mm-misc-l2-1-0 */

#include <apiset.h>
#include <apisetcconv.h>

#include <mmsyscom.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

typedef void (CALLBACK TIMECALLBACK)(UINT uTimerID, UINT uMsg, DWORD_PTR dwUser, DWORD_PTR dw1, DWORD_PTR dw2);
typedef TIMECALLBACK *LPTIMECALLBACK;

#define TIME_ONESHOT   0x0000
#define TIME_PERIODIC  0x0001

#define TIME_CALLBACK_FUNCTION     0x0000
#define TIME_CALLBACK_EVENT_SET    0x0010
#define TIME_CALLBACK_EVENT_PULSE  0x0020

#if WINVER >= 0x0501
#define TIME_KILL_SYNCHRONOUS  0x0100
#endif /* WINVER >= 0x0501 */

WINMMAPI MMRESULT WINAPI timeSetEvent(
    UINT uDelay,
    UINT uResolution,
    LPTIMECALLBACK fptc,
    DWORD_PTR dwUser,
    UINT fuEvent
);

WINMMAPI MMRESULT WINAPI timeKillEvent(
    UINT uTimerID
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#endif /* _MMISCAPI2_H */
