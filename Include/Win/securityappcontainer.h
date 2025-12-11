#ifndef _SECURITYAPPCONTAINER_H
#define _SECURITYAPPCONTAINER_H

#if __POCC__ >= 500
#pragma once
#endif

/* ApiSet contract for api-ms-win-security-appcontainer-l1 */

#include <apiset.h>
#include <apisetcconv.h>

#include <minwindef.h>
#include <minwinbase.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#if NTDDI_VERSION >= NTDDI_WIN8
BOOL WINAPI GetAppContainerNamedObjectPath(
    HANDLE Token,
    PSID AppContainerSid,
    ULONG ObjectPathLength,
    LPWSTR ObjectPath,
    PULONG ReturnLength);
#endif /* NTDDI_VERSION >= NTDDI_WIN8 */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#endif /* _SECURITYAPPCONTAINER_H */
