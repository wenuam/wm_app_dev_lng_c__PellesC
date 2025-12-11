#ifndef _LMJOIN_H
#define _LMJOIN_H

#if __POCC__ >= 500
#pragma once
#endif

/* NetSetup API definitions */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

typedef enum _NETSETUP_NAME_TYPE {
    NetSetupUnknown = 0,
    NetSetupMachine,
    NetSetupWorkgroup,
    NetSetupDomain,
    NetSetupNonExistentDomain,
#if (_WIN32_WINNT >= 0x0500)
    NetSetupDnsMachine
#endif /* (_WIN32_WINNT >= 0x0500) */
} NETSETUP_NAME_TYPE, *PNETSETUP_NAME_TYPE;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_APP)

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN10)

typedef enum _DSREG_JOIN_TYPE {
    DSREG_UNKNOWN_JOIN = 0,
    DSREG_DEVICE_JOIN = 1,
    DSREG_WORKPLACE_JOIN = 2
} DSREG_JOIN_TYPE, *PDSREG_JOIN_TYPE;

typedef struct _DSREG_USER_INFO {
    LPWSTR pszUserEmail;
    LPWSTR pszUserKeyId;
    LPWSTR pszUserKeyName;
} DSREG_USER_INFO, *PDSREG_USER_INFO;

#ifndef _WINCRYPT_H
typedef const struct _CERT_CONTEXT *PCCERT_CONTEXT;
#endif /* !_WINCRYPT_H */

typedef struct _DSREG_JOIN_INFO {
    DSREG_JOIN_TYPE joinType;
    PCCERT_CONTEXT pJoinCertificate;
    LPWSTR pszDeviceId;
    LPWSTR pszIdpDomain;
    LPWSTR pszTenantId;
    LPWSTR pszJoinUserEmail;
    LPWSTR pszTenantDisplayName;
    LPWSTR pszMdmEnrollmentUrl;
    LPWSTR pszMdmTermsOfUseUrl;
    LPWSTR pszMdmComplianceUrl;
    LPWSTR pszUserSettingSyncUrl;
    DSREG_USER_INFO *pUserInfo;
} DSREG_JOIN_INFO, *PDSREG_JOIN_INFO;

#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WIN10) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_APP) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#define NETSETUP_JOIN_DOMAIN        0x00000001
#define NETSETUP_ACCT_CREATE        0x00000002
#define NETSETUP_ACCT_DELETE        0x00000004
#define NETSETUP_WIN9X_UPGRADE      0x00000010
#define NETSETUP_DOMAIN_JOIN_IF_JOINED  0x00000020
#define NETSETUP_JOIN_UNSECURE      0x00000040
#define NETSETUP_MACHINE_PWD_PASSED 0x00000080
#define NETSETUP_DEFER_SPN_SET      0x00000100

#define NETSETUP_JOIN_DC_ACCOUNT    0x00000200
#define NETSETUP_JOIN_WITH_NEW_NAME 0x00000400
#define NETSETUP_JOIN_READONLY      0x00000800
#define NETSETUP_DNS_NAME_CHANGES_ONLY 0x00001000

#define NETSETUP_INSTALL_INVOCATION 0x00040000

#define NETSETUP_AMBIGUOUS_DC       0x00001000
#define NETSETUP_NO_NETLOGON_CACHE  0x00002000
#define NETSETUP_DONT_CONTROL_SERVICES 0x00004000
#define NETSETUP_SET_MACHINE_NAME   0x00008000
#define NETSETUP_FORCE_SPN_SET      0x00010000
#define NETSETUP_NO_ACCT_REUSE      0x00020000
#define NETSETUP_ALT_SAMACCOUNTNAME 0x00020000

#define NETSETUP_IGNORE_UNSUPPORTED_FLAGS  0x10000000

#define NETSETUP_VALID_UNJOIN_FLAGS  ( \
    NETSETUP_ACCT_DELETE | \
    NETSETUP_IGNORE_UNSUPPORTED_FLAGS | \
    NETSETUP_JOIN_DC_ACCOUNT \
)

#define NETSETUP_PROCESS_OFFLINE_FLAGS  ( \
    NETSETUP_JOIN_DOMAIN |  \
    NETSETUP_DOMAIN_JOIN_IF_JOINED | \
    NETSETUP_JOIN_WITH_NEW_NAME | \
    NETSETUP_DONT_CONTROL_SERVICES | \
    NETSETUP_MACHINE_PWD_PASSED \
)

NET_API_STATUS NET_API_FUNCTION NetJoinDomain(
    LPCWSTR lpServer,
    LPCWSTR lpDomain,
    LPCWSTR lpMachineAccountOU,
    LPCWSTR lpAccount,
    LPCWSTR lpPassword,
    DWORD fJoinOptions
);

NET_API_STATUS NET_API_FUNCTION NetUnjoinDomain(
    LPCWSTR lpServer,
    LPCWSTR lpAccount,
    LPCWSTR lpPassword,
    DWORD fUnjoinOptions
);

NET_API_STATUS NET_API_FUNCTION NetRenameMachineInDomain(
    LPCWSTR lpServer,
    LPCWSTR lpNewMachineName,
    LPCWSTR lpAccount,
    LPCWSTR lpPassword,
    DWORD fRenameOptions
);

NET_API_STATUS NET_API_FUNCTION NetValidateName(
    LPCWSTR lpServer,
    LPCWSTR lpName,
    LPCWSTR lpAccount,
    LPCWSTR lpPassword,
    NETSETUP_NAME_TYPE NameType
);

NET_API_STATUS NET_API_FUNCTION NetGetJoinableOUs(
    LPCWSTR lpServer,
    LPCWSTR lpDomain,
    LPCWSTR lpAccount,
    LPCWSTR lpPassword,
    DWORD *OUCount,
    LPWSTR **OUs
);

#if (_WIN32_WINNT >= 0x0501)

#define NET_IGNORE_UNSUPPORTED_FLAGS  0x01

NET_API_STATUS NET_API_FUNCTION NetAddAlternateComputerName(
    LPCWSTR Server,
    LPCWSTR AlternateName,
    LPCWSTR DomainAccount,
    LPCWSTR DomainAccountPassword,
    ULONG Reserved
);

NET_API_STATUS NET_API_FUNCTION NetRemoveAlternateComputerName(
    LPCWSTR Server,
    LPCWSTR AlternateName,
    LPCWSTR DomainAccount,
    LPCWSTR DomainAccountPassword,
    ULONG Reserved
);

NET_API_STATUS NET_API_FUNCTION NetSetPrimaryComputerName(
    LPCWSTR Server,
    LPCWSTR PrimaryName,
    LPCWSTR DomainAccount,
    LPCWSTR DomainAccountPassword,
    ULONG Reserved
);

typedef enum _NET_COMPUTER_NAME_TYPE {
    NetPrimaryComputerName,
    NetAlternateComputerNames,
    NetAllComputerNames,
    NetComputerNameTypeMax
} NET_COMPUTER_NAME_TYPE, *PNET_COMPUTER_NAME_TYPE;

NET_API_STATUS NET_API_FUNCTION NetEnumerateComputerNames(
    LPCWSTR Server,
    NET_COMPUTER_NAME_TYPE NameType,
    ULONG Reserved,
    PDWORD EntryCount,
    LPWSTR * *ComputerNames
);

#endif /* (_WIN32_WINNT >= 0x0501) */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)

#define NETSETUP_PROVISION_DOWNLEVEL_PRIV_SUPPORT 0x00000001
#define NETSETUP_PROVISION_REUSE_ACCOUNT          0x00000002
#define NETSETUP_PROVISION_USE_DEFAULT_PASSWORD   0x00000004
#define NETSETUP_PROVISION_SKIP_ACCOUNT_SEARCH    0x00000008
#define NETSETUP_PROVISION_ROOT_CA_CERTS          0x00000010
#define NETSETUP_PROVISION_PERSISTENTSITE         0x00000020
#define NETSETUP_PROVISION_ONLINE_CALLER          0x40000000
#define NETSETUP_PROVISION_CHECK_PWD_ONLY         0x80000000

NET_API_STATUS NET_API_FUNCTION NetProvisionComputerAccount(
    LPCWSTR lpDomain,
    LPCWSTR lpMachineName,
    LPCWSTR lpMachineAccountOU,
    LPCWSTR lpDcName,
    DWORD dwOptions,
    PBYTE *pProvisionBinData,
    DWORD *pdwProvisionBinDataSize,
    LPWSTR *pProvisionTextData
);

NET_API_STATUS NET_API_FUNCTION NetRequestOfflineDomainJoin(
    BYTE *pProvisionBinData,
    DWORD cbProvisionBinDataSize,
    DWORD dwOptions,
    LPCWSTR lpWindowsPath
);

#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WIN7) */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)

#define NETSETUP_PROVISIONING_PARAMS_WIN8_VERSION     0x00000001
#define NETSETUP_PROVISIONING_PARAMS_CURRENT_VERSION  0x00000002

typedef struct _NETSETUP_PROVISIONING_PARAMS {
    DWORD dwVersion;
    LPCWSTR lpDomain;
    LPCWSTR lpHostName;
    LPCWSTR lpMachineAccountOU;
    LPCWSTR lpDcName;
    DWORD dwProvisionOptions;
    LPCWSTR *aCertTemplateNames;
    DWORD cCertTemplateNames;
    LPCWSTR *aMachinePolicyNames;
    DWORD cMachinePolicyNames;
    LPCWSTR *aMachinePolicyPaths;
    DWORD cMachinePolicyPaths;
    LPWSTR lpNetbiosName;
    LPWSTR lpSiteName;
    LPWSTR lpPrimaryDNSDomain;
} NETSETUP_PROVISIONING_PARAMS, *PNETSETUP_PROVISIONING_PARAMS;

NET_API_STATUS NET_API_FUNCTION NetCreateProvisioningPackage(
    PNETSETUP_PROVISIONING_PARAMS pProvisioningParams,
    PBYTE *ppPackageBinData,
    DWORD *pdwPackageBinDataSize,
    LPWSTR *ppPackageTextData
);

NET_API_STATUS NET_API_FUNCTION NetRequestProvisioningPackageInstall(
    BYTE *pPackageBinData,
    DWORD dwPackageBinDataSize,
    DWORD dwProvisionOptions,
    LPCWSTR lpWindowsPath,
    PVOID pvReserved
);

#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WIN8) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_APP)

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN10)

HRESULT NET_API_FUNCTION NetGetAadJoinInformation(
    LPCWSTR pcszTenantId,
    PDSREG_JOIN_INFO *ppJoinInfo
);

VOID NET_API_FUNCTION NetFreeAadJoinInformation(
    PDSREG_JOIN_INFO pJoinInfo
);

#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WIN10) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_APP) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_APP)

typedef enum _NETSETUP_JOIN_STATUS {
    NetSetupUnknownStatus = 0,
    NetSetupUnjoined,
    NetSetupWorkgroupName,
    NetSetupDomainName
} NETSETUP_JOIN_STATUS, *PNETSETUP_JOIN_STATUS;

NET_API_STATUS NET_API_FUNCTION NetGetJoinInformation(
    LPCWSTR lpServer,
    LPWSTR *lpNameBuffer,
    PNETSETUP_JOIN_STATUS BufferType
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_APP) */

#endif /* _LMJOIN_H */
