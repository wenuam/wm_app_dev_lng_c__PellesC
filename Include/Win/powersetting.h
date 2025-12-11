#ifndef _POWERSETTING_H
#define _POWERSETTING_H

#if __POCC__ >= 500
#pragma once
#endif

/* ApiSet contract for api-ms-win-power-setting-l1-1-0 */

#include <apiset.h>
#include <apisetcconv.h>

#ifdef _CONTRACT_GEN
#include <nt.h>
#include <ntrtl.h>
#include <nturtl.h>
#include <minwindef.h>
#endif /* _CONTRACT_GEN */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#ifndef _HPOWERNOTIFY_DEF_
#define _HPOWERNOTIFY_DEF_
typedef PVOID HPOWERNOTIFY, *PHPOWERNOTIFY;
#endif /* _HPOWERNOTIFY_DEF_ */

#if (NTDDI_VERSION >= NTDDI_VISTA)
DWORD WINAPI PowerReadACValue(
    HKEY RootPowerKey,
    CONST GUID *SchemeGuid,
    CONST GUID *SubGroupOfPowerSettingsGuid,
    CONST GUID *PowerSettingGuid,
    PULONG Type,
    LPBYTE Buffer,
    LPDWORD BufferSize
);
#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */

#if (NTDDI_VERSION >= NTDDI_VISTA)
DWORD WINAPI PowerReadDCValue(
    HKEY RootPowerKey,
    CONST GUID *SchemeGuid,
    CONST GUID *SubGroupOfPowerSettingsGuid,
    CONST GUID *PowerSettingGuid,
    PULONG Type,
    PUCHAR Buffer,
    LPDWORD BufferSize
);
#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */

#if (NTDDI_VERSION >= NTDDI_VISTA)
DWORD WINAPI PowerWriteACValueIndex(
    HKEY RootPowerKey,
    CONST GUID *SchemeGuid,
    CONST GUID *SubGroupOfPowerSettingsGuid,
    CONST GUID *PowerSettingGuid,
    DWORD AcValueIndex
);
#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */

#if (NTDDI_VERSION >= NTDDI_VISTA)
DWORD WINAPI PowerWriteDCValueIndex(
    HKEY RootPowerKey,
    CONST GUID *SchemeGuid,
    CONST GUID *SubGroupOfPowerSettingsGuid,
    CONST GUID *PowerSettingGuid,
    DWORD DcValueIndex
);
#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */

#if (NTDDI_VERSION >= NTDDI_VISTA)
DWORD WINAPI PowerGetActiveScheme(
    HKEY UserRootPowerKey,
    GUID **ActivePolicyGuid
);
#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */

#if (NTDDI_VERSION >= NTDDI_VISTA)
DWORD WINAPI PowerSetActiveScheme(
    HKEY UserRootPowerKey,
    CONST GUID *SchemeGuid
);
#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */

#if (NTDDI_VERSION >= NTDDI_WIN7)
DWORD WINAPI PowerSettingRegisterNotification(
    LPCGUID SettingGuid,
    DWORD Flags,
    HANDLE Recipient,
    PHPOWERNOTIFY RegistrationHandle
);
#endif /* (NTDDI_VERSION >= NTDDI_WIN7) */

#if (NTDDI_VERSION >= NTDDI_WIN7)
DWORD WINAPI PowerSettingUnregisterNotification(
    HPOWERNOTIFY RegistrationHandle
);
#endif /* (NTDDI_VERSION >= NTDDI_WIN7) */

#if (NTDDI_VERSION >= NTDDI_WIN10_RS5)
typedef enum EFFECTIVE_POWER_MODE {
    EffectivePowerModeBatterySaver,
    EffectivePowerModeBetterBattery,
    EffectivePowerModeBalanced,
    EffectivePowerModeHighPerformance,
    EffectivePowerModeMaxPerformance,
    EffectivePowerModeGameMode,
    EffectivePowerModeMixedReality,
} EFFECTIVE_POWER_MODE;

#define EFFECTIVE_POWER_MODE_V1  (0x00000001)
#define EFFECTIVE_POWER_MODE_V2  (0x00000002)

typedef void WINAPI EFFECTIVE_POWER_MODE_CALLBACK(
    EFFECTIVE_POWER_MODE Mode,
    VOID *Context
);
#endif /* (NTDDI_VERSION >= NTDDI_WIN10_RS5) */

#if (NTDDI_VERSION >= NTDDI_WIN10_RS5)
HRESULT WINAPI PowerRegisterForEffectivePowerModeNotifications(
    ULONG Version,
    EFFECTIVE_POWER_MODE_CALLBACK *Callback,
    VOID *Context,
    VOID **RegistrationHandle
);
#endif /* (NTDDI_VERSION >= NTDDI_WIN10_RS5) */

#if (NTDDI_VERSION >= NTDDI_WIN10_RS5)
HRESULT WINAPI PowerUnregisterFromEffectivePowerModeNotifications(
    VOID *RegistrationHandle
);
#endif /* (NTDDI_VERSION >= NTDDI_WIN10_RS5) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#endif /* _POWERSETTING_H */
