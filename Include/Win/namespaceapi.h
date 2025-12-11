#ifndef _NAMESPACEAPI_H
#define _NAMESPACEAPI_H

#if __POCC__ >= 500
#pragma once
#endif

/* ApiSet contract for api-ms-win-core-namespace-l1 */

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

#define PRIVATE_NAMESPACE_FLAG_DESTROY      0x00000001

WINBASEAPI HANDLE WINAPI CreatePrivateNamespaceW(
    LPSECURITY_ATTRIBUTES lpPrivateNamespaceAttributes,
    LPVOID lpBoundaryDescriptor,
    LPCWSTR lpAliasPrefix
);

WINBASEAPI HANDLE WINAPI OpenPrivateNamespaceW(
    LPVOID lpBoundaryDescriptor,
    LPCWSTR lpAliasPrefix
);

WINBASEAPI BOOLEAN WINAPI ClosePrivateNamespace(
    HANDLE Handle,
    ULONG Flags
);

WINBASEAPI HANDLE WINAPI CreateBoundaryDescriptorW(
    LPCWSTR Name,
    ULONG Flags
);

WINBASEAPI BOOL WINAPI AddSIDToBoundaryDescriptor(
    HANDLE * BoundaryDescriptor,
    PSID RequiredSid
);

WINBASEAPI VOID WINAPI DeleteBoundaryDescriptor(
    HANDLE BoundaryDescriptor
);

#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

#endif /* _NAMESPACEAPI_H */
