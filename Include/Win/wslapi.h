#ifndef _WSLAPI_H
#define _WSLAPI_H

#if __POCC__ >= 500
#pragma once
#endif

/* ApiSet contract for api-ms-win-wsl-api-l1-1-0 */
/* Windows Subsystem for Linux definitions */

#include <apiset.h>
#include <apisetcconv.h>

#ifdef _CONTRACT_GEN
#include <nt.h>
#include <ntrtl.h>
#include <nturtl.h>
#include <wtypes.h>
#endif // _CONTRACT_GEN

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SERVER)

BOOL WslIsDistributionRegistered(
    PCWSTR distributionName
);

HRESULT WslRegisterDistribution(
    PCWSTR distributionName,
    PCWSTR tarGzFilename
);

HRESULT WslUnregisterDistribution(
    PCWSTR distributionName
);

typedef enum {
    WSL_DISTRIBUTION_FLAGS_NONE = 0x0,
    WSL_DISTRIBUTION_FLAGS_ENABLE_INTEROP = 0x1,
    WSL_DISTRIBUTION_FLAGS_APPEND_NT_PATH = 0x2,
    WSL_DISTRIBUTION_FLAGS_ENABLE_DRIVE_MOUNTING = 0x4
} WSL_DISTRIBUTION_FLAGS;
/*DEFINE_ENUM_FLAG_OPERATORS(WSL_DISTRIBUTION_FLAGS);*/

#define WSL_DISTRIBUTION_FLAGS_VALID  (WSL_DISTRIBUTION_FLAGS_ENABLE_INTEROP | WSL_DISTRIBUTION_FLAGS_APPEND_NT_PATH | WSL_DISTRIBUTION_FLAGS_ENABLE_DRIVE_MOUNTING)
#define WSL_DISTRIBUTION_FLAGS_DEFAULT  (WSL_DISTRIBUTION_FLAGS_ENABLE_INTEROP | WSL_DISTRIBUTION_FLAGS_APPEND_NT_PATH | WSL_DISTRIBUTION_FLAGS_ENABLE_DRIVE_MOUNTING)

HRESULT WslConfigureDistribution(
    PCWSTR distributionName,
    ULONG defaultUID,
    WSL_DISTRIBUTION_FLAGS wslDistributionFlags
);

HRESULT WslGetDistributionConfiguration(
    PCWSTR distributionName,
    ULONG *distributionVersion,
    ULONG *defaultUID,
    WSL_DISTRIBUTION_FLAGS *wslDistributionFlags,
    PSTR **defaultEnvironmentVariables,
    ULONG *defaultEnvironmentVariableCount
);

HRESULT WslLaunchInteractive(
    PCWSTR distributionName,
    PCWSTR command,
    BOOL useCurrentWorkingDirectory,
    DWORD *exitCode
);

HRESULT WslLaunch(
    PCWSTR distributionName,
    PCWSTR command,
    BOOL useCurrentWorkingDirectory,
    HANDLE stdIn,
    HANDLE stdOut,
    HANDLE stdErr,
    HANDLE *process
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SERVER) */

#endif /* _WSLAPI_H */
