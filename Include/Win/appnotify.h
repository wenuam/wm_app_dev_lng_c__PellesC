#ifndef _APPNOTIFY_H
#define _APPNOTIFY_H

#if __POCC__ >= 500
#pragma once
#endif

/* ApiSet contract for api-ms-win-core-psm-app-l1 */

#include <apiset.h>
#include <apisetcconv.h>

#undef APICONTRACT
#define APICONTRACT  DECLSPEC_IMPORT

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)

typedef void (*PAPPSTATE_CHANGE_ROUTINE)(
    BOOLEAN Quiesced,
    PVOID Context
);

typedef struct _APPSTATE_REGISTRATION *PAPPSTATE_REGISTRATION;

APICONTRACT ULONG NTAPI RegisterAppStateChangeNotification(
    PAPPSTATE_CHANGE_ROUTINE Routine,
    PVOID Context,
    PAPPSTATE_REGISTRATION * Registration
);

APICONTRACT void NTAPI UnregisterAppStateChangeNotification(
    PAPPSTATE_REGISTRATION Registration
);

typedef void (*PAPPCONSTRAIN_CHANGE_ROUTINE)(
    BOOLEAN Constrained,
    PVOID Context
);

typedef struct _APPCONSTRAIN_REGISTRATION *PAPPCONSTRAIN_REGISTRATION;

APICONTRACT ULONG NTAPI RegisterAppConstrainedChangeNotification(
    PAPPCONSTRAIN_CHANGE_ROUTINE Routine,
    PVOID Context,
    PAPPCONSTRAIN_REGISTRATION * Registration
);

APICONTRACT void NTAPI UnregisterAppConstrainedChangeNotification(
    PAPPCONSTRAIN_REGISTRATION Registration
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES) */

#endif /* _APPNOTIFY_H */
