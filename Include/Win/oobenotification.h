#ifndef _OOBENOTIFICATION_H
#define _OOBENOTIFICATION_H

#if __POCC__ >= 500
#pragma once
#endif

/* API Set contract for api-ms-win-oobe-notification-l1 */

#if defined(_CONTRACT_GEN)
#include <nt.h>
#include <ntrtl.h>
#include <nturtl.h>
#include <windows.h>
#endif /* defined(_CONTRACT_GEN) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#if (NTDDI_VERSION >= NTDDI_WINBLUE)

typedef VOID (CALLBACK *OOBE_COMPLETED_CALLBACK)(
    PVOID CallbackContext
);

BOOL WINAPI OOBEComplete(
    PBOOL isOOBEComplete
);

BOOL WINAPI RegisterWaitUntilOOBECompleted(
    OOBE_COMPLETED_CALLBACK OOBECompletedCallback,
    PVOID CallbackContext,
    PVOID *WaitHandle
);

BOOL WINAPI UnregisterWaitUntilOOBECompleted(
    PVOID WaitHandle
);

#endif /* (NTDDI_VERSION >= NTDDI_WINBLUE) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#endif /* _OOBENOTIFICATION_H */
