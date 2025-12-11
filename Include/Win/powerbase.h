#ifndef _POWERBASE_H
#define _POWERBASE_H

#if __POCC__ >= 500
#pragma once
#endif

/* ApiSet contract for api-ms-win-power-base-l1-1-0 */

#include <apiset.h>
#include <apisetcconv.h>

#ifdef _CONTRACT_GEN
#include <nt.h>
#include <ntrtl.h>
#include <nturtl.h>
#include <minwindef.h>
#endif

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#ifndef _HPOWERNOTIFY_DEF_
#define _HPOWERNOTIFY_DEF_
typedef PVOID HPOWERNOTIFY, *PHPOWERNOTIFY;
#endif /* _HPOWERNOTIFY_DEF_ */

#ifndef NT_SUCCESS
#define NTSTATUS  LONG
#define _OVERRIDE_NTSTATUS_
#endif
NTSTATUS WINAPI CallNtPowerInformation(
    POWER_INFORMATION_LEVEL InformationLevel,
    PVOID InputBuffer,
    ULONG InputBufferLength,
    PVOID OutputBuffer,
    ULONG OutputBufferLength);
#ifdef _OVERRIDE_NTSTATUS_
#undef NTSTATUS
#endif

BOOLEAN WINAPI GetPwrCapabilities(
    PSYSTEM_POWER_CAPABILITIES lpspc);

#if (NTDDI_VERSION >= NTDDI_WIN8)

POWER_PLATFORM_ROLE WINAPI PowerDeterminePlatformRoleEx(
    ULONG Version
);

DWORD WINAPI PowerRegisterSuspendResumeNotification(
    DWORD Flags,
    HANDLE Recipient,
    PHPOWERNOTIFY RegistrationHandle);

DWORD WINAPI PowerUnregisterSuspendResumeNotification(
    HPOWERNOTIFY RegistrationHandle
);

#endif /* (NTDDI_VERSION >= NTDDI_WIN8) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#endif /* _POWERBASE_H */
