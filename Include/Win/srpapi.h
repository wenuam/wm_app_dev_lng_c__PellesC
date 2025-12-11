#ifndef _SRPAPI_H
#define _SRPAPI_H

#if __POCC__ >= 500
#pragma once
#endif

/* ApiSet contract for ext-ms-win-security-srp-l1 */

#include <apiset.h>
#include <apisetcconv.h>

#ifdef _CONTRACT_GEN
#include <nt.h>
#include <ntrtl.h>
#include <nturtl.h>
#include <apiquery.h>
#include <Windows.h>
#include <nlsp.h>
#include <nls.h>
#include <setupapi.h>
#include <cfgmgr32.h>
#include <winsafer.h>
#endif

#include <minwindef.h>
#include <minwinbase.h>

#define HR_PROC_NOT_FOUND HRESULT_FROM_WIN32(ERROR_PROC_NOT_FOUND)

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)

typedef struct HTHREAD_NETWORK_CONTEXT {
    DWORD ThreadId;
    HANDLE ThreadContext;
} HTHREAD_NETWORK_CONTEXT;

STDAPI SrpCreateThreadNetworkContext(
    PCWSTR enterpriseId,
    HTHREAD_NETWORK_CONTEXT *threadNetworkContext
);

STDAPI SrpCloseThreadNetworkContext(
    HTHREAD_NETWORK_CONTEXT *threadNetworkContext
);

STDAPI SrpSetTokenEnterpriseId(
    HANDLE tokenHandle,
    PCWSTR enterpriseId
);

STDAPI SrpGetEnterpriseIds(
    HANDLE tokenHandle,
    PULONG numberOfBytes,
    PCWSTR *enterpriseIds,
    PULONG enterpriseIdCount
);

STDAPI SrpEnablePermissiveModeFileEncryption(
    PCWSTR enterpriseId
);

STDAPI SrpDisablePermissiveModeFileEncryption(void);

#endif /* _WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD */

typedef enum {
    ENTERPRISE_POLICY_NONE = 0x0,
    ENTERPRISE_POLICY_ALLOWED = 0x1,
    ENTERPRISE_POLICY_ENLIGHTENED = 0x2,
    ENTERPRISE_POLICY_EXEMPT = 0x4
} ENTERPRISE_DATA_POLICIES;

/*DEFINE_ENUM_FLAG_OPERATORS(ENTERPRISE_DATA_POLICIES);*/

STDAPI SrpGetEnterprisePolicy(
    HANDLE tokenHandle,
    ENTERPRISE_DATA_POLICIES *policyFlags
);

NTSTATUS SrpIsTokenService(
    HANDLE TokenHandle,
    BOOLEAN *IsTokenService
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

#if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)

#include <appmodel.h>

STDAPI SrpDoesPolicyAllowAppExecution(
    const PACKAGE_ID *packageId,
    BOOL *isAllowed
);

#endif /* _WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */

typedef enum {
    SRPHOSTING_TYPE_NONE = 0,
    SRPHOSTING_TYPE_WINHTTP = 1,
    SRPHOSTING_TYPE_WININET = 2
} SRPHOSTING_TYPE;

typedef enum {
    SRPHOSTING_VERSION1 = 1
} SRPHOSTING_VERSION;

STDAPI SrpHostingInitialize(
    SRPHOSTING_VERSION Version,
    SRPHOSTING_TYPE Type,
    VOID *pvData,
    ULONG cbData
);

void SrpHostingTerminate(
    SRPHOSTING_TYPE Type
);

#endif /* _SRPAPI_H */


#ifndef ext_ms_win_security_srp_l1_1_1_query_routines
#define ext_ms_win_security_srp_l1_1_1_query_routines

#if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)
BOOLEAN __stdcall IsSrpCreateThreadNetworkContextPresent(void);
BOOLEAN __stdcall IsSrpCloseThreadNetworkContextPresent(void);
BOOLEAN __stdcall IsSrpSetTokenEnterpriseIdPresent(void);
BOOLEAN __stdcall IsSrpGetEnterpriseIdsPresent(void);
BOOLEAN __stdcall IsSrpEnablePermissiveModeFileEncryptionPresent(void);
BOOLEAN __stdcall IsSrpDisablePermissiveModeFileEncryptionPresent(void);
#endif /* _WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD */

BOOLEAN __stdcall IsSrpGetEnterprisePolicyPresent(void);
BOOLEAN __stdcall IsSrpIsTokenServicePresent(void);

#if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)
BOOLEAN __stdcall IsSrpDoesPolicyAllowAppExecutionPresent(void);
#endif /* _WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD */

#endif /* ext_ms_win_security_srp_l1_1_1_query_routines */
