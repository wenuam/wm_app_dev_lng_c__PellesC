#ifndef _NTLSA_U
#define _NTLSA_H

#if __POCC__ >= 500
#pragma once
#endif

/* Local Security Authority (LSA) service definitions */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#include <sdkddkver.h>
#include <lsalookup.h>

#ifndef _NTLSA_IFS_
typedef ULONG LSA_OPERATIONAL_MODE, *PLSA_OPERATIONAL_MODE;
#endif /* !_NTLSA_IFS_ */

#define LSA_MODE_PASSWORD_PROTECTED     (0x00000001L)
#define LSA_MODE_INDIVIDUAL_ACCOUNTS    (0x00000002L)
#define LSA_MODE_MANDATORY_ACCESS       (0x00000004L)
#define LSA_MODE_LOG_FULL               (0x00000008L)

#define LSA_MAXIMUM_SID_COUNT           (0x00000100L)
#define LSA_MAXIMUM_ENUMERATION_LENGTH  (32000)

#define LSA_CALL_LICENSE_SERVER 0x80000000

#ifndef _NTLSA_IFS_

typedef enum _SECURITY_LOGON_TYPE {
    UndefinedLogonType = 0,
    Interactive = 2,
    Network,
    Batch,
    Service,
    Proxy,
    Unlock,
    NetworkCleartext,
    NewCredentials,
#if (_WIN32_WINNT >= 0x0501)
    RemoteInteractive,
    CachedInteractive,
#endif /* (_WIN32_WINNT >= 0x0501) */
#if (_WIN32_WINNT >= 0x0502)
    CachedRemoteInteractive,
    CachedUnlock
#endif /* (_WIN32_WINNT >= 0x0502) */
} SECURITY_LOGON_TYPE, *PSECURITY_LOGON_TYPE;

#endif /* !_NTLSA_IFS_ */

#define SECURITY_ACCESS_INTERACTIVE_LOGON             ((ULONG) 0x00000001L)
#define SECURITY_ACCESS_NETWORK_LOGON                 ((ULONG) 0x00000002L)
#define SECURITY_ACCESS_BATCH_LOGON                   ((ULONG) 0x00000004L)
#define SECURITY_ACCESS_SERVICE_LOGON                 ((ULONG) 0x00000010L)
#define SECURITY_ACCESS_PROXY_LOGON                   ((ULONG) 0x00000020L)
#define SECURITY_ACCESS_DENY_INTERACTIVE_LOGON        ((ULONG) 0x00000040L)
#define SECURITY_ACCESS_DENY_NETWORK_LOGON            ((ULONG) 0x00000080L)
#define SECURITY_ACCESS_DENY_BATCH_LOGON              ((ULONG) 0x00000100L)
#define SECURITY_ACCESS_DENY_SERVICE_LOGON            ((ULONG) 0x00000200L)
#define SECURITY_ACCESS_REMOTE_INTERACTIVE_LOGON      ((ULONG) 0x00000400L)
#define SECURITY_ACCESS_DENY_REMOTE_INTERACTIVE_LOGON ((ULONG) 0x00000800L)

#ifndef _NTLSA_IFS_

#ifndef _NTLSA_AUDIT_
#define _NTLSA_AUDIT_

typedef enum _SE_ADT_PARAMETER_TYPE {
    SeAdtParmTypeNone = 0,
    SeAdtParmTypeString,
    SeAdtParmTypeFileSpec,
    SeAdtParmTypeUlong,
    SeAdtParmTypeSid,
    SeAdtParmTypeLogonId,
    SeAdtParmTypeNoLogonId,
    SeAdtParmTypeAccessMask,
    SeAdtParmTypePrivs,
    SeAdtParmTypeObjectTypes,
    SeAdtParmTypeHexUlong,
    SeAdtParmTypePtr,
    SeAdtParmTypeTime,
    SeAdtParmTypeGuid,
    SeAdtParmTypeLuid,
    SeAdtParmTypeHexInt64,
    SeAdtParmTypeStringList,
    SeAdtParmTypeSidList,
    SeAdtParmTypeDuration,
    SeAdtParmTypeUserAccountControl,
    SeAdtParmTypeNoUac,
    SeAdtParmTypeMessage,
    SeAdtParmTypeDateTime,
    SeAdtParmTypeSockAddr,
    SeAdtParmTypeSD,
    SeAdtParmTypeLogonHours,
    SeAdtParmTypeLogonIdNoSid,
    SeAdtParmTypeUlongNoConv,
    SeAdtParmTypeSockAddrNoPort,
    SeAdtParmTypeAccessReason,
    SeAdtParmTypeStagingReason,
    SeAdtParmTypeResourceAttribute,
    SeAdtParmTypeClaims,
    SeAdtParmTypeLogonIdAsSid,
    SeAdtParmTypeMultiSzString,
    SeAdtParmTypeLogonIdEx,
} SE_ADT_PARAMETER_TYPE, *PSE_ADT_PARAMETER_TYPE;

#ifndef GUID_DEFINED
#include <guiddef.h>
#endif /* !GUID_DEFINED */

typedef struct _SE_ADT_OBJECT_TYPE {
    GUID ObjectType;
    USHORT Flags;
#define SE_ADT_OBJECT_ONLY 0x1
    USHORT Level;
    ACCESS_MASK AccessMask;
} SE_ADT_OBJECT_TYPE, *PSE_ADT_OBJECT_TYPE;

typedef struct _SE_ADT_PARAMETER_ARRAY_ENTRY {
    SE_ADT_PARAMETER_TYPE Type;
    ULONG Length;
    ULONG_PTR Data[2];
    PVOID Address;
} SE_ADT_PARAMETER_ARRAY_ENTRY, *PSE_ADT_PARAMETER_ARRAY_ENTRY;

typedef struct _SE_ADT_ACCESS_REASON {
    ACCESS_MASK AccessMask;
    ULONG AccessReasons[32];
    ULONG ObjectTypeIndex;
    ULONG AccessGranted;
    PSECURITY_DESCRIPTOR SecurityDescriptor;
} SE_ADT_ACCESS_REASON, *PSE_ADT_ACCESS_REASON;

typedef struct _SE_ADT_CLAIMS {
    ULONG Length;
    PCLAIMS_BLOB Claims;
} SE_ADT_CLAIMS, *PSE_ADT_CLAIMS;

#define SE_MAX_AUDIT_PARAMETERS 32
#define SE_MAX_GENERIC_AUDIT_PARAMETERS 28

typedef struct _SE_ADT_PARAMETER_ARRAY {
    ULONG CategoryId;
    ULONG AuditId;
    ULONG ParameterCount;
    ULONG Length;
    USHORT FlatSubCategoryId;
    USHORT Type;
    ULONG Flags;
    SE_ADT_PARAMETER_ARRAY_ENTRY Parameters[ SE_MAX_AUDIT_PARAMETERS ];
} SE_ADT_PARAMETER_ARRAY, *PSE_ADT_PARAMETER_ARRAY;

typedef struct _SE_ADT_PARAMETER_ARRAY_EX {
    ULONG CategoryId;
    ULONG AuditId;
    ULONG Version;
    ULONG ParameterCount;
    ULONG Length;
    USHORT FlatSubCategoryId;
    USHORT Type;
    ULONG Flags;
    SE_ADT_PARAMETER_ARRAY_ENTRY Parameters[ SE_MAX_AUDIT_PARAMETERS ];
} SE_ADT_PARAMETER_ARRAY_EX, *PSE_ADT_PARAMETER_ARRAY_EX;

#define SE_ADT_PARAMETERS_SELF_RELATIVE     0x00000001
#define SE_ADT_PARAMETERS_SEND_TO_LSA       0x00000002
#define SE_ADT_PARAMETER_EXTENSIBLE_AUDIT   0x00000004
#define SE_ADT_PARAMETER_GENERIC_AUDIT      0x00000008
#define SE_ADT_PARAMETER_WRITE_SYNCHRONOUS  0x00000010

#define LSAP_SE_ADT_PARAMETER_ARRAY_TRUE_SIZE(AuditParameters)    \
     ( sizeof(SE_ADT_PARAMETER_ARRAY) -                           \
       sizeof(SE_ADT_PARAMETER_ARRAY_ENTRY) *                     \
       (SE_MAX_AUDIT_PARAMETERS - AuditParameters->ParameterCount) )

#endif

#endif /* !_NTLSA_IFS_ */

typedef struct _LSA_ADT_STRING_LIST_ENTRY {
    ULONG Flags;
    UNICODE_STRING String;
} LSA_ADT_STRING_LIST_ENTRY, *PLSA_ADT_STRING_LIST_ENTRY;

typedef struct _LSA_ADT_STRING_LIST {
    ULONG cStrings;
    PLSA_ADT_STRING_LIST_ENTRY Strings;
} LSA_ADT_STRING_LIST, *PLSA_ADT_STRING_LIST;

typedef struct _LSA_ADT_SID_LIST_ENTRY {
    ULONG Flags;
    PSID Sid;
} LSA_ADT_SID_LIST_ENTRY, *PLSA_ADT_SID_LIST_ENTRY;

typedef struct _LSA_ADT_SID_LIST {
    ULONG cSids;
    PLSA_ADT_SID_LIST_ENTRY Sids;
} LSA_ADT_SID_LIST, *PLSA_ADT_SID_LIST;

#define LSA_ADT_SECURITY_SOURCE_NAME L"Microsoft-Windows-Security-Auditing"

#define LSA_ADT_LEGACY_SECURITY_SOURCE_NAME L"Security"

#define SE_ADT_POLICY_AUDIT_EVENT_TYPE_EX_BEGIN  100

typedef enum _POLICY_AUDIT_EVENT_TYPE_EX {
    iSystem_SecurityStateChange = SE_ADT_POLICY_AUDIT_EVENT_TYPE_EX_BEGIN,
    iSystem_SecuritySubsystemExtension,
    iSystem_Integrity,
    iSystem_IPSecDriverEvents,
    iSystem_Others,

    iLogon_Logon,
    iLogon_Logoff,
    iLogon_AccountLockout,
    iLogon_IPSecMainMode,
    iLogon_SpecialLogon,
    iLogon_IPSecQuickMode,
    iLogon_IPSecUsermode,
    iLogon_Others,
    iLogon_NPS,
    iLogon_Claims,
    iLogon_Groups,

    iObjectAccess_FileSystem,
    iObjectAccess_Registry,
    iObjectAccess_Kernel,
    iObjectAccess_Sam,
    iObjectAccess_Other,
    iObjectAccess_CertificationAuthority,
    iObjectAccess_ApplicationGenerated,
    iObjectAccess_HandleBasedAudits,
    iObjectAccess_Share,
    iObjectAccess_FirewallPacketDrops,
    iObjectAccess_FirewallConnection,
    iObjectAccess_DetailedFileShare,
    iObjectAccess_RemovableStorage,
    iObjectAccess_CbacStaging,

    iPrivilegeUse_Sensitive,
    iPrivilegeUse_NonSensitive,
    iPrivilegeUse_Others,

    iDetailedTracking_ProcessCreation,
    iDetailedTracking_ProcessTermination,
    iDetailedTracking_DpapiActivity,
    iDetailedTracking_RpcCall,
    iDetailedTracking_PnpActivity,
    iDetailedTracking_TokenRightAdjusted,

    iPolicyChange_AuditPolicy,
    iPolicyChange_AuthenticationPolicy,
    iPolicyChange_AuthorizationPolicy,
    iPolicyChange_MpsscvRulePolicy,
    iPolicyChange_WfpIPSecPolicy,
    iPolicyChange_Others,

    iAccountManagement_UserAccount,
    iAccountManagement_ComputerAccount,
    iAccountManagement_SecurityGroup,
    iAccountManagement_DistributionGroup,
    iAccountManagement_ApplicationGroup,
    iAccountManagement_Others,

    iDSAccess_DSAccess,
    iDSAccess_AdAuditChanges,
    iDS_Replication,
    iDS_DetailedReplication,

    iAccountLogon_CredentialValidation,
    iAccountLogon_Kerberos,
    iAccountLogon_Others,
    iAccountLogon_KerbCredentialValidation,

    iUnknownSubCategory = 999

} POLICY_AUDIT_EVENT_TYPE_EX, *PPOLICY_AUDIT_EVENT_TYPE_EX;

typedef enum _POLICY_AUDIT_EVENT_TYPE {
    AuditCategorySystem = 0,
    AuditCategoryLogon,
    AuditCategoryObjectAccess,
    AuditCategoryPrivilegeUse,
    AuditCategoryDetailedTracking,
    AuditCategoryPolicyChange,
    AuditCategoryAccountManagement,
    AuditCategoryDirectoryServiceAccess,
    AuditCategoryAccountLogon
} POLICY_AUDIT_EVENT_TYPE, *PPOLICY_AUDIT_EVENT_TYPE;

#define POLICY_AUDIT_EVENT_UNCHANGED       (0x00000000L)
#define POLICY_AUDIT_EVENT_SUCCESS         (0x00000001L)
#define POLICY_AUDIT_EVENT_FAILURE         (0x00000002L)
#define POLICY_AUDIT_EVENT_NONE            (0x00000004L)

#define POLICY_AUDIT_EVENT_MASK \
    (POLICY_AUDIT_EVENT_SUCCESS | \
     POLICY_AUDIT_EVENT_FAILURE | \
     POLICY_AUDIT_EVENT_UNCHANGED | \
     POLICY_AUDIT_EVENT_NONE)

#define LSA_SUCCESS(Error) ((LONG)(Error) >= 0)

#ifndef _NTLSA_IFS_

NTSTATUS NTAPI LsaRegisterLogonProcess(
    PLSA_STRING LogonProcessName,
    PHANDLE LsaHandle,
    PLSA_OPERATIONAL_MODE SecurityMode
);

NTSTATUS NTAPI LsaLogonUser(
    HANDLE LsaHandle,
    PLSA_STRING OriginName,
    SECURITY_LOGON_TYPE LogonType,
    ULONG AuthenticationPackage,
    PVOID AuthenticationInformation,
    ULONG AuthenticationInformationLength,
    PTOKEN_GROUPS LocalGroups,
    PTOKEN_SOURCE SourceContext,
    PVOID *ProfileBuffer,
    PULONG ProfileBufferLength,
    PLUID LogonId,
    PHANDLE Token,
    PQUOTA_LIMITS Quotas,
    PNTSTATUS SubStatus
);

NTSTATUS NTAPI LsaLookupAuthenticationPackage(
    HANDLE LsaHandle,
    PLSA_STRING PackageName,
    PULONG AuthenticationPackage
);

NTSTATUS NTAPI LsaFreeReturnBuffer(
    PVOID Buffer
);

NTSTATUS NTAPI LsaCallAuthenticationPackage(
    HANDLE LsaHandle,
    ULONG AuthenticationPackage,
    PVOID ProtocolSubmitBuffer,
    ULONG SubmitBufferLength,
    PVOID *ProtocolReturnBuffer,
    PULONG ReturnBufferLength,
    PNTSTATUS ProtocolStatus
);

NTSTATUS NTAPI LsaDeregisterLogonProcess(
    HANDLE LsaHandle
);

NTSTATUS NTAPI LsaConnectUntrusted(
    PHANDLE LsaHandle
);

NTSTATUS LsaInsertProtectedProcessAddress (
    PVOID BufferAddress,
    ULONG BufferSize
);

NTSTATUS LsaRemoveProtectedProcessAddress (
    PVOID BufferAddress,
    ULONG BufferSize
);

#endif /* !_NTLSA_IFS_ */

typedef NTSTATUS (NTAPI *PFN_LSA_CALL_AUTH_PKG)(
    HANDLE LsaHandle,
    ULONG AuthenticationPackage,
    PVOID ProtocolSubmitBuffer,
    ULONG SubmitBufferLength,
    PVOID *ProtocolReturnBuffer,
    PULONG ReturnBufferLength,
    PNTSTATUS ProtocolStatus
);

typedef NTSTATUS (NTAPI *PFN_LSA_DEREGISTER_PROC)(
    HANDLE LsaHandle
);

typedef NTSTATUS (NTAPI *PFN_LSA_FREE_BUFFER)(
    PVOID Buffer
);

typedef NTSTATUS (NTAPI *PFN_LSA_LOGON_USER)(
    HANDLE LsaHandle,
    PLSA_STRING OriginName,
    SECURITY_LOGON_TYPE LogonType,
    ULONG AuthenticationPackage,
    PVOID AuthenticationInformation,
    ULONG AuthenticationInformationLength,
    PTOKEN_GROUPS LocalGroups,
    PTOKEN_SOURCE SourceContext,
    PVOID *ProfileBuffer,
    PULONG ProfileBufferLength,
    PLUID LogonId,
    PHANDLE Token,
    PQUOTA_LIMITS Quotas,
    PNTSTATUS SubStatus
);

typedef NTSTATUS (NTAPI *PFN_LOOKUP_AUTH_PKG)(
    HANDLE LsaHandle,
    PLSA_STRING PackageName,
    PULONG AuthenticationPackage
);

typedef NTSTATUS (NTAPI *PFN_LSA_REGISTER_PROC)(
    PLSA_STRING LogonProcessName,
    PHANDLE LsaHandle,
    PLSA_OPERATIONAL_MODE SecurityMode
);

typedef struct _LSA_AUTH_CALLBACKS {
    PFN_LSA_CALL_AUTH_PKG LsaCallAuthPkgFn;
    PFN_LSA_DEREGISTER_PROC LsaDeregisterProcFn;
    PFN_LSA_FREE_BUFFER LsaFreeReturnBufferFn;
    PFN_LSA_LOGON_USER LsaLogonUserFn;
    PFN_LOOKUP_AUTH_PKG LsaLookupAuthPkgFn;
    PFN_LSA_REGISTER_PROC LsaRegisterProcFn;
} LSA_AUTH_CALLBACKS, *PLSA_AUTH_CALLBACKS;

typedef CONST LSA_AUTH_CALLBACKS *PCLSA_AUTH_CALLBACKS;

typedef PVOID *PLSA_CLIENT_REQUEST;

typedef enum _LSA_TOKEN_INFORMATION_TYPE {
    LsaTokenInformationNull,
    LsaTokenInformationV1,
    LsaTokenInformationV2,
    LsaTokenInformationV3
} LSA_TOKEN_INFORMATION_TYPE, *PLSA_TOKEN_INFORMATION_TYPE;

typedef struct _LSA_TOKEN_INFORMATION_NULL {
    LARGE_INTEGER ExpirationTime;
    PTOKEN_GROUPS Groups;
} LSA_TOKEN_INFORMATION_NULL, *PLSA_TOKEN_INFORMATION_NULL;

typedef struct _LSA_TOKEN_INFORMATION_V1 {
    LARGE_INTEGER ExpirationTime;
    TOKEN_USER User;
    PTOKEN_GROUPS Groups;
    TOKEN_PRIMARY_GROUP PrimaryGroup;
    PTOKEN_PRIVILEGES Privileges;
    TOKEN_OWNER Owner;
    TOKEN_DEFAULT_DACL DefaultDacl;
} LSA_TOKEN_INFORMATION_V1, *PLSA_TOKEN_INFORMATION_V1;

typedef LSA_TOKEN_INFORMATION_V1 LSA_TOKEN_INFORMATION_V2, *PLSA_TOKEN_INFORMATION_V2;

typedef struct _LSA_TOKEN_INFORMATION_V3 {
    LARGE_INTEGER ExpirationTime;
    TOKEN_USER User;
    PTOKEN_GROUPS Groups;
    TOKEN_PRIMARY_GROUP PrimaryGroup;
    PTOKEN_PRIVILEGES Privileges;
    TOKEN_OWNER Owner;
    TOKEN_DEFAULT_DACL DefaultDacl;
    TOKEN_USER_CLAIMS UserClaims;
    TOKEN_DEVICE_CLAIMS DeviceClaims;
    PTOKEN_GROUPS DeviceGroups;
} LSA_TOKEN_INFORMATION_V3, *PLSA_TOKEN_INFORMATION_V3;

typedef NTSTATUS (NTAPI LSA_CREATE_LOGON_SESSION)(
    PLUID LogonId
);

typedef NTSTATUS (NTAPI LSA_DELETE_LOGON_SESSION)(
    PLUID LogonId
);

typedef NTSTATUS (NTAPI LSA_ADD_CREDENTIAL)(
    PLUID LogonId,
    ULONG AuthenticationPackage,
    PLSA_STRING PrimaryKeyValue,
    PLSA_STRING Credentials
);

typedef NTSTATUS (NTAPI LSA_GET_CREDENTIALS)(
    PLUID LogonId,
    ULONG AuthenticationPackage,
    PULONG QueryContext,
    BOOLEAN RetrieveAllCredentials,
    PLSA_STRING PrimaryKeyValue,
    PULONG PrimaryKeyLength,
    PLSA_STRING Credentials
);

typedef NTSTATUS (NTAPI LSA_DELETE_CREDENTIAL)(
    PLUID LogonId,
    ULONG AuthenticationPackage,
    PLSA_STRING PrimaryKeyValue
);

typedef PVOID (NTAPI LSA_ALLOCATE_LSA_HEAP)(
    ULONG Length
);

typedef VOID (NTAPI LSA_FREE_LSA_HEAP)(
    PVOID Base
);

typedef PVOID (NTAPI LSA_ALLOCATE_PRIVATE_HEAP)(
    SIZE_T Length
);

typedef VOID (NTAPI LSA_FREE_PRIVATE_HEAP)(
    PVOID Base
);

typedef NTSTATUS (NTAPI LSA_ALLOCATE_CLIENT_BUFFER)(
    PLSA_CLIENT_REQUEST ClientRequest,
    ULONG LengthRequired,
    PVOID *ClientBaseAddress
);

typedef NTSTATUS (NTAPI LSA_FREE_CLIENT_BUFFER)(
    PLSA_CLIENT_REQUEST ClientRequest,
    PVOID ClientBaseAddress
);

typedef NTSTATUS (NTAPI LSA_COPY_TO_CLIENT_BUFFER)(
    PLSA_CLIENT_REQUEST ClientRequest,
    ULONG Length,
    PVOID ClientBaseAddress,
    PVOID BufferToCopy
);

typedef NTSTATUS (NTAPI LSA_COPY_FROM_CLIENT_BUFFER)(
    PLSA_CLIENT_REQUEST ClientRequest,
    ULONG Length,
    PVOID BufferToCopy,
    PVOID ClientBaseAddress
);

typedef LSA_CREATE_LOGON_SESSION * PLSA_CREATE_LOGON_SESSION;
typedef LSA_DELETE_LOGON_SESSION * PLSA_DELETE_LOGON_SESSION;
typedef LSA_ADD_CREDENTIAL * PLSA_ADD_CREDENTIAL;
typedef LSA_GET_CREDENTIALS * PLSA_GET_CREDENTIALS;
typedef LSA_DELETE_CREDENTIAL * PLSA_DELETE_CREDENTIAL;
typedef LSA_ALLOCATE_LSA_HEAP * PLSA_ALLOCATE_LSA_HEAP;
typedef LSA_FREE_LSA_HEAP * PLSA_FREE_LSA_HEAP;
typedef LSA_ALLOCATE_PRIVATE_HEAP * PLSA_ALLOCATE_PRIVATE_HEAP;
typedef LSA_FREE_PRIVATE_HEAP * PLSA_FREE_PRIVATE_HEAP;
typedef LSA_ALLOCATE_CLIENT_BUFFER * PLSA_ALLOCATE_CLIENT_BUFFER;
typedef LSA_FREE_CLIENT_BUFFER * PLSA_FREE_CLIENT_BUFFER;
typedef LSA_COPY_TO_CLIENT_BUFFER * PLSA_COPY_TO_CLIENT_BUFFER;
typedef LSA_COPY_FROM_CLIENT_BUFFER * PLSA_COPY_FROM_CLIENT_BUFFER;

typedef struct _LSA_DISPATCH_TABLE {
    PLSA_CREATE_LOGON_SESSION CreateLogonSession;
    PLSA_DELETE_LOGON_SESSION DeleteLogonSession;
    PLSA_ADD_CREDENTIAL AddCredential;
    PLSA_GET_CREDENTIALS GetCredentials;
    PLSA_DELETE_CREDENTIAL DeleteCredential;
    PLSA_ALLOCATE_LSA_HEAP AllocateLsaHeap;
    PLSA_FREE_LSA_HEAP FreeLsaHeap;
    PLSA_ALLOCATE_CLIENT_BUFFER AllocateClientBuffer;
    PLSA_FREE_CLIENT_BUFFER FreeClientBuffer;
    PLSA_COPY_TO_CLIENT_BUFFER CopyToClientBuffer;
    PLSA_COPY_FROM_CLIENT_BUFFER CopyFromClientBuffer;
} LSA_DISPATCH_TABLE, *PLSA_DISPATCH_TABLE;

#define LSA_AP_NAME_INITIALIZE_PACKAGE      "LsaApInitializePackage\0"
#define LSA_AP_NAME_LOGON_USER              "LsaApLogonUser\0"
#define LSA_AP_NAME_LOGON_USER_EX           "LsaApLogonUserEx\0"
#define LSA_AP_NAME_CALL_PACKAGE            "LsaApCallPackage\0"
#define LSA_AP_NAME_LOGON_TERMINATED        "LsaApLogonTerminated\0"
#define LSA_AP_NAME_CALL_PACKAGE_UNTRUSTED  "LsaApCallPackageUntrusted\0"
#define LSA_AP_NAME_CALL_PACKAGE_PASSTHROUGH "LsaApCallPackagePassthrough\0"

typedef NTSTATUS (NTAPI LSA_AP_INITIALIZE_PACKAGE)(
    ULONG AuthenticationPackageId,
    PLSA_DISPATCH_TABLE LsaDispatchTable,
    PLSA_STRING Database,
    PLSA_STRING Confidentiality,
    PLSA_STRING *AuthenticationPackageName
);

typedef NTSTATUS (NTAPI LSA_AP_LOGON_USER)(
    PLSA_CLIENT_REQUEST ClientRequest,
    SECURITY_LOGON_TYPE LogonType,
    PVOID AuthenticationInformation,
    PVOID ClientAuthenticationBase,
    ULONG AuthenticationInformationLength,
    PVOID *ProfileBuffer,
    PULONG ProfileBufferLength,
    PLUID LogonId,
    PNTSTATUS SubStatus,
    PLSA_TOKEN_INFORMATION_TYPE TokenInformationType,
    PVOID *TokenInformation,
    PLSA_UNICODE_STRING *AccountName,
    PLSA_UNICODE_STRING *AuthenticatingAuthority
);

typedef NTSTATUS (NTAPI LSA_AP_LOGON_USER_EX)(
    PLSA_CLIENT_REQUEST ClientRequest,
    SECURITY_LOGON_TYPE LogonType,
    PVOID AuthenticationInformation,
    PVOID ClientAuthenticationBase,
    ULONG AuthenticationInformationLength,
    PVOID *ProfileBuffer,
    PULONG ProfileBufferLength,
    PLUID LogonId,
    PNTSTATUS SubStatus,
    PLSA_TOKEN_INFORMATION_TYPE TokenInformationType,
    PVOID *TokenInformation,
    PUNICODE_STRING *AccountName,
    PUNICODE_STRING *AuthenticatingAuthority,
    PUNICODE_STRING *MachineName
);

typedef NTSTATUS (NTAPI LSA_AP_CALL_PACKAGE)(
    PLSA_CLIENT_REQUEST ClientRequest,
    PVOID ProtocolSubmitBuffer,
    PVOID ClientBufferBase,
    ULONG SubmitBufferLength,
    PVOID *ProtocolReturnBuffer,
    PULONG ReturnBufferLength,
    PNTSTATUS ProtocolStatus
);

typedef NTSTATUS (NTAPI LSA_AP_CALL_PACKAGE_PASSTHROUGH)(
    PLSA_CLIENT_REQUEST ClientRequest,
    PVOID ProtocolSubmitBuffer,
    PVOID ClientBufferBase,
    ULONG SubmitBufferLength,
    PVOID *ProtocolReturnBuffer,
    PULONG ReturnBufferLength,
    PNTSTATUS ProtocolStatus
);

typedef VOID (NTAPI LSA_AP_LOGON_TERMINATED)(
    PLUID LogonId
);

typedef LSA_AP_CALL_PACKAGE LSA_AP_CALL_PACKAGE_UNTRUSTED;
typedef LSA_AP_INITIALIZE_PACKAGE * PLSA_AP_INITIALIZE_PACKAGE;
typedef LSA_AP_LOGON_USER * PLSA_AP_LOGON_USER;
typedef LSA_AP_LOGON_USER_EX * PLSA_AP_LOGON_USER_EX;
typedef LSA_AP_CALL_PACKAGE * PLSA_AP_CALL_PACKAGE;
typedef LSA_AP_CALL_PACKAGE_PASSTHROUGH * PLSA_AP_CALL_PACKAGE_PASSTHROUGH;
typedef LSA_AP_LOGON_TERMINATED * PLSA_AP_LOGON_TERMINATED;
typedef LSA_AP_CALL_PACKAGE_UNTRUSTED * PLSA_AP_CALL_PACKAGE_UNTRUSTED;

#define POLICY_VIEW_LOCAL_INFORMATION              0x00000001L
#define POLICY_VIEW_AUDIT_INFORMATION              0x00000002L
#define POLICY_GET_PRIVATE_INFORMATION             0x00000004L
#define POLICY_TRUST_ADMIN                         0x00000008L
#define POLICY_CREATE_ACCOUNT                      0x00000010L
#define POLICY_CREATE_SECRET                       0x00000020L
#define POLICY_CREATE_PRIVILEGE                    0x00000040L
#define POLICY_SET_DEFAULT_QUOTA_LIMITS            0x00000080L
#define POLICY_SET_AUDIT_REQUIREMENTS              0x00000100L
#define POLICY_AUDIT_LOG_ADMIN                     0x00000200L
#define POLICY_SERVER_ADMIN                        0x00000400L
#define POLICY_LOOKUP_NAMES                        0x00000800L
#define POLICY_NOTIFICATION                        0x00001000L

#define POLICY_ALL_ACCESS     (STANDARD_RIGHTS_REQUIRED         |\
                               POLICY_VIEW_LOCAL_INFORMATION    |\
                               POLICY_VIEW_AUDIT_INFORMATION    |\
                               POLICY_GET_PRIVATE_INFORMATION   |\
                               POLICY_TRUST_ADMIN               |\
                               POLICY_CREATE_ACCOUNT            |\
                               POLICY_CREATE_SECRET             |\
                               POLICY_CREATE_PRIVILEGE          |\
                               POLICY_SET_DEFAULT_QUOTA_LIMITS  |\
                               POLICY_SET_AUDIT_REQUIREMENTS    |\
                               POLICY_AUDIT_LOG_ADMIN           |\
                               POLICY_SERVER_ADMIN              |\
                               POLICY_LOOKUP_NAMES)

#define POLICY_READ           (STANDARD_RIGHTS_READ             |\
                               POLICY_VIEW_AUDIT_INFORMATION    |\
                               POLICY_GET_PRIVATE_INFORMATION)

#define POLICY_WRITE          (STANDARD_RIGHTS_WRITE            |\
                               POLICY_TRUST_ADMIN               |\
                               POLICY_CREATE_ACCOUNT            |\
                               POLICY_CREATE_SECRET             |\
                               POLICY_CREATE_PRIVILEGE          |\
                               POLICY_SET_DEFAULT_QUOTA_LIMITS  |\
                               POLICY_SET_AUDIT_REQUIREMENTS    |\
                               POLICY_AUDIT_LOG_ADMIN           |\
                               POLICY_SERVER_ADMIN)

#define POLICY_EXECUTE        (STANDARD_RIGHTS_EXECUTE          |\
                               POLICY_VIEW_LOCAL_INFORMATION    |\
                               POLICY_LOOKUP_NAMES)

typedef struct _LSA_TRANSLATED_SID {
    SID_NAME_USE Use;
    ULONG RelativeId;
    LONG DomainIndex;
} LSA_TRANSLATED_SID, *PLSA_TRANSLATED_SID;

typedef ULONG POLICY_SYSTEM_ACCESS_MODE, *PPOLICY_SYSTEM_ACCESS_MODE;

#define POLICY_MODE_INTERACTIVE             SECURITY_ACCESS_INTERACTIVE_LOGON
#define POLICY_MODE_NETWORK                 SECURITY_ACCESS_NETWORK_LOGON
#define POLICY_MODE_BATCH                   SECURITY_ACCESS_BATCH_LOGON
#define POLICY_MODE_SERVICE                 SECURITY_ACCESS_SERVICE_LOGON
#define POLICY_MODE_PROXY                   SECURITY_ACCESS_PROXY_LOGON
#define POLICY_MODE_DENY_INTERACTIVE        SECURITY_ACCESS_DENY_INTERACTIVE_LOGON
#define POLICY_MODE_DENY_NETWORK            SECURITY_ACCESS_DENY_NETWORK_LOGON
#define POLICY_MODE_DENY_BATCH              SECURITY_ACCESS_DENY_BATCH_LOGON
#define POLICY_MODE_DENY_SERVICE            SECURITY_ACCESS_DENY_SERVICE_LOGON
#define POLICY_MODE_REMOTE_INTERACTIVE      SECURITY_ACCESS_REMOTE_INTERACTIVE_LOGON
#define POLICY_MODE_DENY_REMOTE_INTERACTIVE SECURITY_ACCESS_DENY_REMOTE_INTERACTIVE_LOGON

#define POLICY_MODE_ALL                     (POLICY_MODE_INTERACTIVE            | \
                                             POLICY_MODE_NETWORK                | \
                                             POLICY_MODE_BATCH                  | \
                                             POLICY_MODE_SERVICE                | \
                                             POLICY_MODE_PROXY                  | \
                                             POLICY_MODE_DENY_INTERACTIVE       | \
                                             POLICY_MODE_DENY_NETWORK           | \
                                             SECURITY_ACCESS_DENY_BATCH_LOGON   | \
                                             SECURITY_ACCESS_DENY_SERVICE_LOGON | \
                                             POLICY_MODE_REMOTE_INTERACTIVE     | \
                                             POLICY_MODE_DENY_REMOTE_INTERACTIVE )

#define POLICY_MODE_ALL_NT4                 (POLICY_MODE_INTERACTIVE | \
                                             POLICY_MODE_NETWORK     | \
                                             POLICY_MODE_BATCH       | \
                                             POLICY_MODE_SERVICE     | \
                                             POLICY_MODE_PROXY )

typedef enum _POLICY_LSA_SERVER_ROLE {
    PolicyServerRoleBackup = 2,
    PolicyServerRolePrimary
} POLICY_LSA_SERVER_ROLE, *PPOLICY_LSA_SERVER_ROLE;

#if (_WIN32_WINNT < 0x0502)

typedef enum _POLICY_SERVER_ENABLE_STATE {
    PolicyServerEnabled = 2,
    PolicyServerDisabled
} POLICY_SERVER_ENABLE_STATE, *PPOLICY_SERVER_ENABLE_STATE;
#endif

typedef ULONG POLICY_AUDIT_EVENT_OPTIONS, *PPOLICY_AUDIT_EVENT_OPTIONS;

typedef struct _POLICY_PRIVILEGE_DEFINITION {
    LSA_UNICODE_STRING Name;
    LUID LocalValue;
} POLICY_PRIVILEGE_DEFINITION, *PPOLICY_PRIVILEGE_DEFINITION;

#define LSA_LOOKUP_ISOLATED_AS_LOCAL  0x80000000

#define LSA_LOOKUP_DISALLOW_CONNECTED_ACCOUNT_INTERNET_SID  0x80000000

#define LSA_LOOKUP_PREFER_INTERNET_NAMES  0x40000000

typedef enum _POLICY_INFORMATION_CLASS {
    PolicyAuditLogInformation = 1,
    PolicyAuditEventsInformation,
    PolicyPrimaryDomainInformation,
    PolicyPdAccountInformation,
    PolicyAccountDomainInformation,
    PolicyLsaServerRoleInformation,
    PolicyReplicaSourceInformation,
    PolicyDefaultQuotaInformation,
    PolicyModificationInformation,
    PolicyAuditFullSetInformation,
    PolicyAuditFullQueryInformation,
    PolicyDnsDomainInformation,
    PolicyDnsDomainInformationInt,
    PolicyLocalAccountDomainInformation,
    PolicyMachineAccountInformation,
    PolicyMachineAccountInformation2,
    PolicyLastEntry
} POLICY_INFORMATION_CLASS, *PPOLICY_INFORMATION_CLASS;

typedef struct _POLICY_AUDIT_LOG_INFO {
    ULONG AuditLogPercentFull;
    ULONG MaximumLogSize;
    LARGE_INTEGER AuditRetentionPeriod;
    BOOLEAN AuditLogFullShutdownInProgress;
    LARGE_INTEGER TimeToShutdown;
    ULONG NextAuditRecordId;
} POLICY_AUDIT_LOG_INFO, *PPOLICY_AUDIT_LOG_INFO;

typedef struct _POLICY_AUDIT_EVENTS_INFO {
    BOOLEAN AuditingMode;
    PPOLICY_AUDIT_EVENT_OPTIONS EventAuditingOptions;
    ULONG MaximumAuditEventCount;
} POLICY_AUDIT_EVENTS_INFO, *PPOLICY_AUDIT_EVENTS_INFO;

typedef struct _POLICY_AUDIT_SUBCATEGORIES_INFO {
    ULONG MaximumSubCategoryCount;
    PPOLICY_AUDIT_EVENT_OPTIONS EventAuditingOptions;
} POLICY_AUDIT_SUBCATEGORIES_INFO, *PPOLICY_AUDIT_SUBCATEGORIES_INFO;

typedef struct _POLICY_AUDIT_CATEGORIES_INFO {
    ULONG MaximumCategoryCount;
    PPOLICY_AUDIT_SUBCATEGORIES_INFO SubCategoriesInfo;
} POLICY_AUDIT_CATEGORIES_INFO, *PPOLICY_AUDIT_CATEGORIES_INFO;

#define PER_USER_POLICY_UNCHANGED               (0x00)
#define PER_USER_AUDIT_SUCCESS_INCLUDE          (0x01)
#define PER_USER_AUDIT_SUCCESS_EXCLUDE          (0x02)
#define PER_USER_AUDIT_FAILURE_INCLUDE          (0x04)
#define PER_USER_AUDIT_FAILURE_EXCLUDE          (0x08)
#define PER_USER_AUDIT_NONE                     (0x10)

#define VALID_PER_USER_AUDIT_POLICY_FLAG (PER_USER_AUDIT_SUCCESS_INCLUDE | \
                                          PER_USER_AUDIT_SUCCESS_EXCLUDE | \
                                          PER_USER_AUDIT_FAILURE_INCLUDE | \
                                          PER_USER_AUDIT_FAILURE_EXCLUDE | \
                                          PER_USER_AUDIT_NONE)

typedef struct _POLICY_PRIMARY_DOMAIN_INFO {
    LSA_UNICODE_STRING Name;
    PSID Sid;
} POLICY_PRIMARY_DOMAIN_INFO, *PPOLICY_PRIMARY_DOMAIN_INFO;

typedef struct _POLICY_PD_ACCOUNT_INFO {
    LSA_UNICODE_STRING Name;
} POLICY_PD_ACCOUNT_INFO, *PPOLICY_PD_ACCOUNT_INFO;

typedef struct _POLICY_LSA_SERVER_ROLE_INFO {
    POLICY_LSA_SERVER_ROLE LsaServerRole;
} POLICY_LSA_SERVER_ROLE_INFO, *PPOLICY_LSA_SERVER_ROLE_INFO;

typedef struct _POLICY_REPLICA_SOURCE_INFO {
    LSA_UNICODE_STRING ReplicaSource;
    LSA_UNICODE_STRING ReplicaAccountName;
} POLICY_REPLICA_SOURCE_INFO, *PPOLICY_REPLICA_SOURCE_INFO;

typedef struct _POLICY_DEFAULT_QUOTA_INFO {
    QUOTA_LIMITS QuotaLimits;
} POLICY_DEFAULT_QUOTA_INFO, *PPOLICY_DEFAULT_QUOTA_INFO;

typedef struct _POLICY_MODIFICATION_INFO {
    LARGE_INTEGER ModifiedId;
    LARGE_INTEGER DatabaseCreationTime;
} POLICY_MODIFICATION_INFO, *PPOLICY_MODIFICATION_INFO;

typedef struct _POLICY_AUDIT_FULL_SET_INFO {
    BOOLEAN ShutDownOnFull;
} POLICY_AUDIT_FULL_SET_INFO, *PPOLICY_AUDIT_FULL_SET_INFO;

typedef struct _POLICY_AUDIT_FULL_QUERY_INFO {
    BOOLEAN ShutDownOnFull;
    BOOLEAN LogIsFull;
} POLICY_AUDIT_FULL_QUERY_INFO, *PPOLICY_AUDIT_FULL_QUERY_INFO;

typedef enum _POLICY_DOMAIN_INFORMATION_CLASS {
#if (_WIN32_WINNT <= 0x0500)
    PolicyDomainQualityOfServiceInformation = 1,
#endif /* (_WIN32_WINNT <= 0x0500) */
    PolicyDomainEfsInformation = 2,
    PolicyDomainKerberosTicketInformation
} POLICY_DOMAIN_INFORMATION_CLASS, *PPOLICY_DOMAIN_INFORMATION_CLASS;

#if (_WIN32_WINNT < 0x0502)

#define POLICY_QOS_SCHANNEL_REQUIRED            0x00000001
#define POLICY_QOS_OUTBOUND_INTEGRITY           0x00000002
#define POLICY_QOS_OUTBOUND_CONFIDENTIALITY     0x00000004
#define POLICY_QOS_INBOUND_INTEGRITY            0x00000008
#define POLICY_QOS_INBOUND_CONFIDENTIALITY      0x00000010
#define POLICY_QOS_ALLOW_LOCAL_ROOT_CERT_STORE  0x00000020
#define POLICY_QOS_RAS_SERVER_ALLOWED           0x00000040
#define POLICY_QOS_DHCP_SERVER_ALLOWED          0x00000080

#endif /* (_WIN32_WINNT < 0x0502) */

#if (_WIN32_WINNT == 0x0500)
typedef struct _POLICY_DOMAIN_QUALITY_OF_SERVICE_INFO {
    ULONG QualityOfService;
} POLICY_DOMAIN_QUALITY_OF_SERVICE_INFO, *PPOLICY_DOMAIN_QUALITY_OF_SERVICE_INFO;
#endif /* (_WIN32_WINNT == 0x0500) */

typedef struct _POLICY_DOMAIN_EFS_INFO {
    ULONG InfoLength;
    PUCHAR EfsBlob;
} POLICY_DOMAIN_EFS_INFO, *PPOLICY_DOMAIN_EFS_INFO;

#define POLICY_KERBEROS_VALIDATE_CLIENT 0x00000080

typedef struct _POLICY_DOMAIN_KERBEROS_TICKET_INFO {
    ULONG AuthenticationOptions;
    LARGE_INTEGER MaxServiceTicketAge;
    LARGE_INTEGER MaxTicketAge;
    LARGE_INTEGER MaxRenewAge;
    LARGE_INTEGER MaxClockSkew;
    LARGE_INTEGER Reserved;
} POLICY_DOMAIN_KERBEROS_TICKET_INFO, *PPOLICY_DOMAIN_KERBEROS_TICKET_INFO;

typedef struct _POLICY_MACHINE_ACCT_INFO {
    ULONG Rid;
    PSID Sid;
} POLICY_MACHINE_ACCT_INFO, *PPOLICY_MACHINE_ACCT_INFO;

typedef struct _POLICY_MACHINE_ACCT_INFO2 {
    ULONG Rid;
    PSID Sid;
    GUID ObjectGuid;
} POLICY_MACHINE_ACCT_INFO2, *PPOLICY_MACHINE_ACCT_INFO2;

typedef enum _POLICY_NOTIFICATION_INFORMATION_CLASS {
    PolicyNotifyAuditEventsInformation = 1,
    PolicyNotifyAccountDomainInformation,
    PolicyNotifyServerRoleInformation,
    PolicyNotifyDnsDomainInformation,
    PolicyNotifyDomainEfsInformation,
    PolicyNotifyDomainKerberosTicketInformation,
    PolicyNotifyMachineAccountPasswordInformation,
    PolicyNotifyGlobalSaclInformation,
    PolicyNotifyMax
} POLICY_NOTIFICATION_INFORMATION_CLASS, *PPOLICY_NOTIFICATION_INFORMATION_CLASS;

#define ACCOUNT_VIEW                          0x00000001L
#define ACCOUNT_ADJUST_PRIVILEGES             0x00000002L
#define ACCOUNT_ADJUST_QUOTAS                 0x00000004L
#define ACCOUNT_ADJUST_SYSTEM_ACCESS          0x00000008L

#define ACCOUNT_ALL_ACCESS    (STANDARD_RIGHTS_REQUIRED         |\
                               ACCOUNT_VIEW                     |\
                               ACCOUNT_ADJUST_PRIVILEGES        |\
                               ACCOUNT_ADJUST_QUOTAS            |\
                               ACCOUNT_ADJUST_SYSTEM_ACCESS)

#define ACCOUNT_READ          (STANDARD_RIGHTS_READ             |\
                               ACCOUNT_VIEW)

#define ACCOUNT_WRITE         (STANDARD_RIGHTS_WRITE            |\
                               ACCOUNT_ADJUST_PRIVILEGES        |\
                               ACCOUNT_ADJUST_QUOTAS            |\
                               ACCOUNT_ADJUST_SYSTEM_ACCESS)

#define ACCOUNT_EXECUTE       (STANDARD_RIGHTS_EXECUTE)

typedef PVOID LSA_HANDLE, *PLSA_HANDLE;

#define TRUSTED_QUERY_DOMAIN_NAME                 0x00000001L
#define TRUSTED_QUERY_CONTROLLERS                 0x00000002L
#define TRUSTED_SET_CONTROLLERS                   0x00000004L
#define TRUSTED_QUERY_POSIX                       0x00000008L
#define TRUSTED_SET_POSIX                         0x00000010L
#define TRUSTED_SET_AUTH                          0x00000020L
#define TRUSTED_QUERY_AUTH                        0x00000040L

#define TRUSTED_ALL_ACCESS     (STANDARD_RIGHTS_REQUIRED     |\
                                TRUSTED_QUERY_DOMAIN_NAME    |\
                                TRUSTED_QUERY_CONTROLLERS    |\
                                TRUSTED_SET_CONTROLLERS      |\
                                TRUSTED_QUERY_POSIX          |\
                                TRUSTED_SET_POSIX            |\
                                TRUSTED_SET_AUTH             |\
                                TRUSTED_QUERY_AUTH)

#define TRUSTED_READ           (STANDARD_RIGHTS_READ         |\
                                TRUSTED_QUERY_DOMAIN_NAME)

#define TRUSTED_WRITE          (STANDARD_RIGHTS_WRITE        |\
                                TRUSTED_SET_CONTROLLERS      |\
                                TRUSTED_SET_POSIX            |\
                                TRUSTED_SET_AUTH )

#define TRUSTED_EXECUTE        (STANDARD_RIGHTS_EXECUTE      |\
                                TRUSTED_QUERY_CONTROLLERS    |\
                                TRUSTED_QUERY_POSIX)

#define LSAD_AES_CRYPT_SHA512_HASH_SIZE     64
#define LSAD_AES_KEY_SIZE                   16
#define LSAD_AES_SALT_SIZE                  16
#define LSAD_AES_BLOCK_SIZE                 16

typedef enum _TRUSTED_INFORMATION_CLASS {
    TrustedDomainNameInformation = 1,
    TrustedControllersInformation,
    TrustedPosixOffsetInformation,
    TrustedPasswordInformation,
    TrustedDomainInformationBasic,
    TrustedDomainInformationEx,
    TrustedDomainAuthInformation,
    TrustedDomainFullInformation,
    TrustedDomainAuthInformationInternal,
    TrustedDomainFullInformationInternal,
    TrustedDomainInformationEx2Internal,
    TrustedDomainFullInformation2Internal,
    TrustedDomainSupportedEncryptionTypes,
    TrustedDomainAuthInformationInternalAes,
    TrustedDomainFullInformationInternalAes,
} TRUSTED_INFORMATION_CLASS, *PTRUSTED_INFORMATION_CLASS;

typedef struct _TRUSTED_DOMAIN_NAME_INFO {
    LSA_UNICODE_STRING Name;
} TRUSTED_DOMAIN_NAME_INFO, *PTRUSTED_DOMAIN_NAME_INFO;

typedef struct _TRUSTED_CONTROLLERS_INFO {
    ULONG Entries;
    PLSA_UNICODE_STRING Names;
} TRUSTED_CONTROLLERS_INFO, *PTRUSTED_CONTROLLERS_INFO;

typedef struct _TRUSTED_POSIX_OFFSET_INFO {
    ULONG Offset;
} TRUSTED_POSIX_OFFSET_INFO, *PTRUSTED_POSIX_OFFSET_INFO;

typedef struct _TRUSTED_PASSWORD_INFO {
    LSA_UNICODE_STRING Password;
    LSA_UNICODE_STRING OldPassword;
} TRUSTED_PASSWORD_INFO, *PTRUSTED_PASSWORD_INFO;

typedef LSA_TRUST_INFORMATION TRUSTED_DOMAIN_INFORMATION_BASIC;

typedef PLSA_TRUST_INFORMATION PTRUSTED_DOMAIN_INFORMATION_BASIC;

#define TRUST_DIRECTION_DISABLED        0x00000000
#define TRUST_DIRECTION_INBOUND         0x00000001
#define TRUST_DIRECTION_OUTBOUND        0x00000002
#define TRUST_DIRECTION_BIDIRECTIONAL   (TRUST_DIRECTION_INBOUND | TRUST_DIRECTION_OUTBOUND)

#define TRUST_TYPE_DOWNLEVEL            0x00000001
#define TRUST_TYPE_UPLEVEL              0x00000002
#define TRUST_TYPE_MIT                  0x00000003

#if (_WIN32_WINNT < 0x0502)
#define TRUST_TYPE_DCE                  0x00000004
#endif

#define TRUST_TYPE_AAD                  0x00000005

#define TRUST_ATTRIBUTE_NON_TRANSITIVE                0x00000001
#define TRUST_ATTRIBUTE_UPLEVEL_ONLY                  0x00000002
#if (_WIN32_WINNT == 0x0500)
#define TRUST_ATTRIBUTE_TREE_PARENT     0x00400000

#define TRUST_ATTRIBUTE_TREE_ROOT       0x00800000

#define TRUST_ATTRIBUTES_VALID  0xFF02FFFF
#endif

#if (_WIN32_WINNT < 0x0502)
#define TRUST_ATTRIBUTE_FILTER_SIDS        0x00000004
#else
#define TRUST_ATTRIBUTE_QUARANTINED_DOMAIN            0x00000004
#endif

#if (_WIN32_WINNT >= 0x0501)
#define TRUST_ATTRIBUTE_FOREST_TRANSITIVE             0x00000008
#if (_WIN32_WINNT >= 0x0502)
#define TRUST_ATTRIBUTE_CROSS_ORGANIZATION            0x00000010
#define TRUST_ATTRIBUTE_WITHIN_FOREST                 0x00000020
#define TRUST_ATTRIBUTE_TREAT_AS_EXTERNAL             0x00000040
#if (_WIN32_WINNT >= 0x0600)
#define TRUST_ATTRIBUTE_TRUST_USES_RC4_ENCRYPTION     0x00000080
#define TRUST_ATTRIBUTE_TRUST_USES_AES_KEYS           0x00000100
#endif
#if (_WIN32_WINNT >= 0x0602)
#define TRUST_ATTRIBUTE_CROSS_ORGANIZATION_NO_TGT_DELEGATION 0x00000200
#define TRUST_ATTRIBUTE_PIM_TRUST                     0x00000400
#endif
#if (_WIN32_WINNT >= 0x0603)

#define TRUST_ATTRIBUTE_CROSS_ORGANIZATION_ENABLE_TGT_DELEGATION 0x00000800
#endif

#define TRUST_ATTRIBUTE_DISABLE_AUTH_TARGET_VALIDATION 0x00001000

#else

#endif

#define TRUST_ATTRIBUTES_VALID          0xFF03FFFF
#endif
#define TRUST_ATTRIBUTES_USER           0xFF000000

typedef struct _TRUSTED_DOMAIN_INFORMATION_EX {
    LSA_UNICODE_STRING Name;
    LSA_UNICODE_STRING FlatName;
    PSID Sid;
    ULONG TrustDirection;
    ULONG TrustType;
    ULONG TrustAttributes;
} TRUSTED_DOMAIN_INFORMATION_EX, *PTRUSTED_DOMAIN_INFORMATION_EX;

typedef struct _TRUSTED_DOMAIN_INFORMATION_EX2 {
    LSA_UNICODE_STRING Name;
    LSA_UNICODE_STRING FlatName;
    PSID Sid;
    ULONG TrustDirection;
    ULONG TrustType;
    ULONG TrustAttributes;
    ULONG ForestTrustLength;
#ifdef MIDL_PASS
    [size_is(ForestTrustLength)]
#endif /* MIDL_PASS */
    PUCHAR ForestTrustInfo;

} TRUSTED_DOMAIN_INFORMATION_EX2, *PTRUSTED_DOMAIN_INFORMATION_EX2;

#define TRUST_AUTH_TYPE_NONE    0
#define TRUST_AUTH_TYPE_NT4OWF  1
#define TRUST_AUTH_TYPE_CLEAR   2
#define TRUST_AUTH_TYPE_VERSION 3

typedef struct _LSA_AUTH_INFORMATION {
    LARGE_INTEGER LastUpdateTime;
    ULONG AuthType;
    ULONG AuthInfoLength;
    PUCHAR AuthInfo;
} LSA_AUTH_INFORMATION, *PLSA_AUTH_INFORMATION;

typedef struct _TRUSTED_DOMAIN_AUTH_INFORMATION {
    ULONG IncomingAuthInfos;
    PLSA_AUTH_INFORMATION IncomingAuthenticationInformation;
    PLSA_AUTH_INFORMATION IncomingPreviousAuthenticationInformation;
    ULONG OutgoingAuthInfos;
    PLSA_AUTH_INFORMATION OutgoingAuthenticationInformation;
    PLSA_AUTH_INFORMATION OutgoingPreviousAuthenticationInformation;
} TRUSTED_DOMAIN_AUTH_INFORMATION, *PTRUSTED_DOMAIN_AUTH_INFORMATION;

typedef struct _TRUSTED_DOMAIN_FULL_INFORMATION {
    TRUSTED_DOMAIN_INFORMATION_EX Information;
    TRUSTED_POSIX_OFFSET_INFO PosixOffset;
    TRUSTED_DOMAIN_AUTH_INFORMATION AuthInformation;
} TRUSTED_DOMAIN_FULL_INFORMATION, *PTRUSTED_DOMAIN_FULL_INFORMATION;

typedef struct _TRUSTED_DOMAIN_FULL_INFORMATION2 {
    TRUSTED_DOMAIN_INFORMATION_EX2 Information;
    TRUSTED_POSIX_OFFSET_INFO PosixOffset;
    TRUSTED_DOMAIN_AUTH_INFORMATION AuthInformation;
} TRUSTED_DOMAIN_FULL_INFORMATION2, *PTRUSTED_DOMAIN_FULL_INFORMATION2;

typedef struct _TRUSTED_DOMAIN_SUPPORTED_ENCRYPTION_TYPES {
    ULONG SupportedEncryptionTypes;
} TRUSTED_DOMAIN_SUPPORTED_ENCRYPTION_TYPES, *PTRUSTED_DOMAIN_SUPPORTED_ENCRYPTION_TYPES;

typedef enum {
    ForestTrustTopLevelName,
    ForestTrustTopLevelNameEx,
    ForestTrustDomainInfo,
    ForestTrustBinaryInfo,
    ForestTrustScannerInfo,
    ForestTrustRecordTypeLast = ForestTrustScannerInfo
} LSA_FOREST_TRUST_RECORD_TYPE;

#if (_WIN32_WINNT < 0x0502)
#define LSA_FOREST_TRUST_RECORD_TYPE_UNRECOGNIZED 0x80000000
#endif

#define LSA_FTRECORD_DISABLED_REASONS            ( 0x0000FFFFL )

#define LSA_TLN_DISABLED_NEW                     ( 0x00000001L )
#define LSA_TLN_DISABLED_ADMIN                   ( 0x00000002L )
#define LSA_TLN_DISABLED_CONFLICT                ( 0x00000004L )

#define LSA_SID_DISABLED_ADMIN                   ( 0x00000001L )
#define LSA_SID_DISABLED_CONFLICT                ( 0x00000002L )
#define LSA_NB_DISABLED_ADMIN                    ( 0x00000004L )
#define LSA_NB_DISABLED_CONFLICT                 ( 0x00000008L )

#define LSA_SCANNER_INFO_DISABLE_AUTH_TARGET_VALIDATION  ( 0x00000001L )
#define LSA_SCANNER_INFO_ADMIN_ALL_FLAGS         (LSA_SCANNER_INFO_DISABLE_AUTH_TARGET_VALIDATION)

typedef struct _LSA_FOREST_TRUST_DOMAIN_INFO {
#ifdef MIDL_PASS
    PISID Sid;
#else /* !MIDL_PASS */
    PSID Sid;
#endif /* !MIDL_PASS */
    LSA_UNICODE_STRING DnsName;
    LSA_UNICODE_STRING NetbiosName;
} LSA_FOREST_TRUST_DOMAIN_INFO, *PLSA_FOREST_TRUST_DOMAIN_INFO;

typedef struct _LSA_FOREST_TRUST_SCANNER_INFO {
#ifdef MIDL_PASS
    [unique] PISID DomainSid;
#else /* !MIDL_PASS */
    PSID DomainSid;
#endif /* !MIDL_PASS */
    LSA_UNICODE_STRING DnsName;
    LSA_UNICODE_STRING NetbiosName;
} LSA_FOREST_TRUST_SCANNER_INFO, *PLSA_FOREST_TRUST_SCANNER_INFO;

#if (_WIN32_WINNT >= 0x0502)
#define MAX_FOREST_TRUST_BINARY_DATA_SIZE ( 128 * 1024 )
#endif

typedef struct _LSA_FOREST_TRUST_BINARY_DATA {
#ifdef MIDL_PASS
    [range(0, MAX_FOREST_TRUST_BINARY_DATA_SIZE)] ULONG Length;
    [size_is(Length)] PUCHAR Buffer;
#else /* !MIDL_PASS */
    ULONG Length;
    PUCHAR Buffer;
#endif /* !MIDL_PASS */
} LSA_FOREST_TRUST_BINARY_DATA, *PLSA_FOREST_TRUST_BINARY_DATA;

typedef struct _LSA_FOREST_TRUST_RECORD {
    ULONG Flags;
    LSA_FOREST_TRUST_RECORD_TYPE ForestTrustType;
    LARGE_INTEGER Time;
#ifdef MIDL_PASS
    [switch_type(LSA_FOREST_TRUST_RECORD_TYPE), switch_is( ForestTrustType )]
#endif /* !MIDL_PASS */
    union {
#ifdef MIDL_PASS
        [case( ForestTrustTopLevelName,
        ForestTrustTopLevelNameEx )] LSA_UNICODE_STRING TopLevelName;
        [case(ForestTrustDomainInfo)] LSA_FOREST_TRUST_DOMAIN_INFO DomainInfo;
        [default] LSA_FOREST_TRUST_BINARY_DATA Data;
#else /* !MIDL_PASS */
        LSA_UNICODE_STRING TopLevelName;
        LSA_FOREST_TRUST_DOMAIN_INFO DomainInfo;
        LSA_FOREST_TRUST_BINARY_DATA Data;
#endif /* !MIDL_PASS */
    } ForestTrustData;
} LSA_FOREST_TRUST_RECORD, *PLSA_FOREST_TRUST_RECORD;

typedef struct _LSA_FOREST_TRUST_RECORD2 {
    ULONG Flags;
    LSA_FOREST_TRUST_RECORD_TYPE ForestTrustType;
    LARGE_INTEGER Time;
#ifdef MIDL_PASS
    [switch_type(LSA_FOREST_TRUST_RECORD_TYPE), switch_is( ForestTrustType )]
#endif /* MIDL_PASS */
    union {
#ifdef MIDL_PASS
        [case( ForestTrustTopLevelName,
        ForestTrustTopLevelNameEx )] LSA_UNICODE_STRING TopLevelName;
        [case(ForestTrustDomainInfo)] LSA_FOREST_TRUST_DOMAIN_INFO DomainInfo;
        [case(ForestTrustBinaryInfo)] LSA_FOREST_TRUST_BINARY_DATA BinaryData;
        [case(ForestTrustScannerInfo)] LSA_FOREST_TRUST_SCANNER_INFO ScannerInfo;
#else /* !MIDL_PASS */
        LSA_UNICODE_STRING TopLevelName;
        LSA_FOREST_TRUST_DOMAIN_INFO DomainInfo;
        LSA_FOREST_TRUST_BINARY_DATA BinaryData;
        LSA_FOREST_TRUST_SCANNER_INFO ScannerInfo;
#endif /* !MIDL_PASS */
    } ForestTrustData;
} LSA_FOREST_TRUST_RECORD2, *PLSA_FOREST_TRUST_RECORD2;

#if (_WIN32_WINNT >= 0x0502)
#define MAX_RECORDS_IN_FOREST_TRUST_INFO 4000
#endif

typedef struct _LSA_FOREST_TRUST_INFORMATION {
#ifdef MIDL_PASS
    [range(0, MAX_RECORDS_IN_FOREST_TRUST_INFO)] ULONG RecordCount;
    [size_is(RecordCount)] PLSA_FOREST_TRUST_RECORD * Entries;
#else /* !MIDL_PASS */
    ULONG RecordCount;
    PLSA_FOREST_TRUST_RECORD * Entries;
#endif /* !MIDL_PASS */
} LSA_FOREST_TRUST_INFORMATION, *PLSA_FOREST_TRUST_INFORMATION;

typedef struct _LSA_FOREST_TRUST_INFORMATION2 {
#ifdef MIDL_PASS
    [range(0, MAX_RECORDS_IN_FOREST_TRUST_INFO)] ULONG RecordCount;
    [size_is(RecordCount)] PLSA_FOREST_TRUST_RECORD2 * Entries;
#else /* !MIDL_PASS */
    ULONG RecordCount;
    PLSA_FOREST_TRUST_RECORD2 * Entries;
#endif /* !MIDL_PASS */

} LSA_FOREST_TRUST_INFORMATION2, *PLSA_FOREST_TRUST_INFORMATION2;

typedef enum {
    CollisionTdo,
    CollisionXref,
    CollisionOther
} LSA_FOREST_TRUST_COLLISION_RECORD_TYPE;

typedef struct _LSA_FOREST_TRUST_COLLISION_RECORD {
    ULONG Index;
    LSA_FOREST_TRUST_COLLISION_RECORD_TYPE Type;
    ULONG Flags;
    LSA_UNICODE_STRING Name;
} LSA_FOREST_TRUST_COLLISION_RECORD, *PLSA_FOREST_TRUST_COLLISION_RECORD;

typedef struct _LSA_FOREST_TRUST_COLLISION_INFORMATION {
    ULONG RecordCount;
#ifdef MIDL_PASS
    [size_is(RecordCount)]
#endif /* !MIDL_PASS */
    PLSA_FOREST_TRUST_COLLISION_RECORD * Entries;
} LSA_FOREST_TRUST_COLLISION_INFORMATION, *PLSA_FOREST_TRUST_COLLISION_INFORMATION;

#define SECRET_SET_VALUE        0x00000001L
#define SECRET_QUERY_VALUE      0x00000002L

#define SECRET_ALL_ACCESS     (STANDARD_RIGHTS_REQUIRED         |\
                               SECRET_SET_VALUE                 |\
                               SECRET_QUERY_VALUE)

#define SECRET_READ           (STANDARD_RIGHTS_READ             |\
                               SECRET_QUERY_VALUE)

#define SECRET_WRITE          (STANDARD_RIGHTS_WRITE            |\
                               SECRET_SET_VALUE)

#define SECRET_EXECUTE        (STANDARD_RIGHTS_EXECUTE)

#define LSA_GLOBAL_SECRET_PREFIX            L"G$"
#define LSA_GLOBAL_SECRET_PREFIX_LENGTH     2

#define LSA_LOCAL_SECRET_PREFIX             L"L$"
#define LSA_LOCAL_SECRET_PREFIX_LENGTH      2

#define LSA_MACHINE_SECRET_PREFIX           L"M$"
#define LSA_MACHINE_SECRET_PREFIX_LENGTH                        \
                ( ( sizeof( LSA_MACHINE_SECRET_PREFIX ) - sizeof( WCHAR ) ) / sizeof( WCHAR ) )

#define LSA_SECRET_MAXIMUM_COUNT                  0x00001000L
#define LSA_SECRET_MAXIMUM_LENGTH                 0x00000200L

typedef ULONG LSA_ENUMERATION_HANDLE, *PLSA_ENUMERATION_HANDLE;

typedef struct _LSA_ENUMERATION_INFORMATION {
    PSID Sid;
} LSA_ENUMERATION_INFORMATION, *PLSA_ENUMERATION_INFORMATION;

NTSTATUS NTAPI LsaFreeMemory(
    PVOID Buffer
);

NTSTATUS NTAPI LsaClose( 
    LSA_HANDLE ObjectHandle
);

NTSTATUS NTAPI LsaDelete(
    LSA_HANDLE ObjectHandle
);

NTSTATUS NTAPI LsaQuerySecurityObject(
    LSA_HANDLE ObjectHandle,
    SECURITY_INFORMATION SecurityInformation,
    PSECURITY_DESCRIPTOR *SecurityDescriptor
);

NTSTATUS NTAPI LsaSetSecurityObject(
    LSA_HANDLE ObjectHandle,
    SECURITY_INFORMATION SecurityInformation,
    PSECURITY_DESCRIPTOR SecurityDescriptor
);

NTSTATUS NTAPI LsaChangePassword(
    PLSA_UNICODE_STRING ServerName,
    PLSA_UNICODE_STRING DomainName,
    PLSA_UNICODE_STRING AccountName,
    PLSA_UNICODE_STRING OldPassword,
    PLSA_UNICODE_STRING NewPassword
);

#if (_WIN32_WINNT >= 0x0600)
typedef struct _LSA_LAST_INTER_LOGON_INFO {
    LARGE_INTEGER LastSuccessfulLogon;
    LARGE_INTEGER LastFailedLogon;
    ULONG FailedAttemptCountSinceLastSuccessfulLogon;
} LSA_LAST_INTER_LOGON_INFO, *PLSA_LAST_INTER_LOGON_INFO;
#endif /* (_WIN32_WINNT >= 0x0600) */

#if (_WIN32_WINNT >= 0x0501)

typedef struct _SECURITY_LOGON_SESSION_DATA {
    ULONG Size;
    LUID LogonId;
    LSA_UNICODE_STRING UserName;
    LSA_UNICODE_STRING LogonDomain;
    LSA_UNICODE_STRING AuthenticationPackage;
    ULONG LogonType;
    ULONG Session;
    PSID Sid;
    LARGE_INTEGER LogonTime;
    LSA_UNICODE_STRING LogonServer;
    LSA_UNICODE_STRING DnsDomainName;
    LSA_UNICODE_STRING Upn;
#if (_WIN32_WINNT >= 0x0600)
    ULONG UserFlags;
    LSA_LAST_INTER_LOGON_INFO LastLogonInfo;
    LSA_UNICODE_STRING LogonScript;
    LSA_UNICODE_STRING ProfilePath;
    LSA_UNICODE_STRING HomeDirectory;
    LSA_UNICODE_STRING HomeDirectoryDrive;
    LARGE_INTEGER LogoffTime;
    LARGE_INTEGER KickOffTime;
    LARGE_INTEGER PasswordLastSet;
    LARGE_INTEGER PasswordCanChange;
    LARGE_INTEGER PasswordMustChange;
#endif /* (_WIN32_WINNT >= 0x0600) */
} SECURITY_LOGON_SESSION_DATA, * PSECURITY_LOGON_SESSION_DATA;

NTSTATUS NTAPI LsaEnumerateLogonSessions(
    PULONG LogonSessionCount,
    PLUID * LogonSessionList
);

NTSTATUS NTAPI LsaGetLogonSessionData(
    PLUID LogonId,
    PSECURITY_LOGON_SESSION_DATA * ppLogonSessionData
);

#endif /* (_WIN32_WINNT >= 0x0501) */

NTSTATUS NTAPI LsaOpenPolicy(
    PLSA_UNICODE_STRING SystemName,
    PLSA_OBJECT_ATTRIBUTES ObjectAttributes,
    ACCESS_MASK DesiredAccess,
    PLSA_HANDLE PolicyHandle
);

NTSTATUS NTAPI LsaOpenPolicySce(
    PLSA_UNICODE_STRING SystemName,
    PLSA_OBJECT_ATTRIBUTES ObjectAttributes,
    ACCESS_MASK DesiredAccess,
    PLSA_HANDLE PolicyHandle
);

#define MAXIMUM_CAPES_PER_CAP 0x7F

#define CENTRAL_ACCESS_POLICY_OWNER_RIGHTS_PRESENT_FLAG         0x00000001

#define CENTRAL_ACCESS_POLICY_STAGED_OWNER_RIGHTS_PRESENT_FLAG  0x00000100
#define STAGING_FLAG(Effective) ((Effective & 0xF) << 8)

#define CENTRAL_ACCESS_POLICY_STAGED_FLAG                       0x00010000

#define CENTRAL_ACCESS_POLICY_VALID_FLAG_MASK                           \
    (                                                               \
        CENTRAL_ACCESS_POLICY_OWNER_RIGHTS_PRESENT_FLAG         |   \
        CENTRAL_ACCESS_POLICY_STAGED_OWNER_RIGHTS_PRESENT_FLAG  |   \
        CENTRAL_ACCESS_POLICY_STAGED_FLAG                           \
    )

#define LSASETCAPS_RELOAD_FLAG                      0x00000001

#define LSASETCAPS_VALID_FLAG_MASK                          \
                (                                                   \
                    LSASETCAPS_RELOAD_FLAG                         \
                )

typedef struct _CENTRAL_ACCESS_POLICY_ENTRY {
    LSA_UNICODE_STRING Name;
    LSA_UNICODE_STRING Description;
    LSA_UNICODE_STRING ChangeId;
    ULONG LengthAppliesTo;
    PUCHAR AppliesTo;
    ULONG LengthSD;
    PSECURITY_DESCRIPTOR SD;
    ULONG LengthStagedSD;
    PSECURITY_DESCRIPTOR StagedSD;
    ULONG Flags;
} CENTRAL_ACCESS_POLICY_ENTRY, *PCENTRAL_ACCESS_POLICY_ENTRY;

typedef const CENTRAL_ACCESS_POLICY_ENTRY *PCCENTRAL_ACCESS_POLICY_ENTRY;

typedef struct _CENTRAL_ACCESS_POLICY {
    PSID CAPID;
    LSA_UNICODE_STRING Name;
    LSA_UNICODE_STRING Description;
    LSA_UNICODE_STRING ChangeId;
    ULONG Flags;
    ULONG CAPECount;
    PCENTRAL_ACCESS_POLICY_ENTRY *CAPEs;
} CENTRAL_ACCESS_POLICY, *PCENTRAL_ACCESS_POLICY;

typedef const CENTRAL_ACCESS_POLICY *PCCENTRAL_ACCESS_POLICY;

NTSTATUS NTAPI LsaSetCAPs(
    PLSA_UNICODE_STRING CAPDNs,
    ULONG CAPDNCount,
    ULONG Flags
);

NTSTATUS NTAPI LsaGetAppliedCAPIDs(
    PLSA_UNICODE_STRING SystemName,
    PSID * *CAPIDs,
    PULONG CAPIDCount
);

NTSTATUS NTAPI LsaQueryCAPs(
    PSID *CAPIDs,
    ULONG CAPIDCount,
    PCENTRAL_ACCESS_POLICY *CAPs,
    PULONG CAPCount
);

NTSTATUS NTAPI LsaQueryInformationPolicy(
    LSA_HANDLE PolicyHandle,
    POLICY_INFORMATION_CLASS InformationClass,
    PVOID *Buffer
);

NTSTATUS NTAPI LsaSetInformationPolicy(
    LSA_HANDLE PolicyHandle,
    POLICY_INFORMATION_CLASS InformationClass,
    PVOID Buffer
);

NTSTATUS NTAPI LsaQueryDomainInformationPolicy(
    LSA_HANDLE PolicyHandle,
    POLICY_DOMAIN_INFORMATION_CLASS InformationClass,
    PVOID *Buffer
);

NTSTATUS NTAPI LsaSetDomainInformationPolicy(
    LSA_HANDLE PolicyHandle,
    POLICY_DOMAIN_INFORMATION_CLASS InformationClass,
    PVOID Buffer
);

NTSTATUS NTAPI LsaRegisterPolicyChangeNotification(
    POLICY_NOTIFICATION_INFORMATION_CLASS InformationClass,
    HANDLE NotificationEventHandle
);

NTSTATUS NTAPI LsaUnregisterPolicyChangeNotification(
    POLICY_NOTIFICATION_INFORMATION_CLASS InformationClass,
    HANDLE NotificationEventHandle
);

NTSTATUS NTAPI LsaClearAuditLog(
    LSA_HANDLE PolicyHandle
);

NTSTATUS NTAPI LsaCreateAccount(
    LSA_HANDLE PolicyHandle,
    PSID AccountSid,
    ACCESS_MASK DesiredAccess,
    PLSA_HANDLE AccountHandle
);

NTSTATUS NTAPI LsaEnumerateAccounts(
    LSA_HANDLE PolicyHandle,
    PLSA_ENUMERATION_HANDLE EnumerationContext,
    PVOID *Buffer,
    ULONG PreferedMaximumLength,
    PULONG CountReturned
);

NTSTATUS NTAPI LsaCreateTrustedDomain(
    LSA_HANDLE PolicyHandle,
    PLSA_TRUST_INFORMATION TrustedDomainInformation,
    ACCESS_MASK DesiredAccess,
    PLSA_HANDLE TrustedDomainHandle
);

NTSTATUS NTAPI LsaEnumerateTrustedDomains(
    LSA_HANDLE PolicyHandle,
    PLSA_ENUMERATION_HANDLE EnumerationContext,
    PVOID *Buffer,
    ULONG PreferedMaximumLength,
    PULONG CountReturned
);

NTSTATUS NTAPI LsaEnumeratePrivileges(
    LSA_HANDLE PolicyHandle,
    PLSA_ENUMERATION_HANDLE EnumerationContext,
    PVOID *Buffer,
    ULONG PreferedMaximumLength,
    PULONG CountReturned
);

NTSTATUS NTAPI LsaLookupNames(
    LSA_HANDLE PolicyHandle,
    ULONG Count,
    PLSA_UNICODE_STRING Names,
    PLSA_REFERENCED_DOMAIN_LIST *ReferencedDomains,
    PLSA_TRANSLATED_SID *Sids
);

#if (_WIN32_WINNT >= 0x0501)
NTSTATUS NTAPI LsaLookupNames2(
    LSA_HANDLE PolicyHandle,
    ULONG Flags,
    ULONG Count,
    PLSA_UNICODE_STRING Names,
    PLSA_REFERENCED_DOMAIN_LIST *ReferencedDomains,
    PLSA_TRANSLATED_SID2 *Sids
);
#endif /* (_WIN32_WINNT >= 0x0501) */

NTSTATUS NTAPI LsaLookupSids(
    LSA_HANDLE PolicyHandle,
    ULONG Count,
    PSID *Sids,
    PLSA_REFERENCED_DOMAIN_LIST *ReferencedDomains,
    PLSA_TRANSLATED_NAME *Names
);

NTSTATUS NTAPI LsaLookupSids2(
    LSA_HANDLE PolicyHandle,
    ULONG LookupOptions,
    ULONG Count,
    PSID *Sids,
    PLSA_REFERENCED_DOMAIN_LIST *ReferencedDomains,
    PLSA_TRANSLATED_NAME *Names
);

NTSTATUS NTAPI LsaCreateSecret(
    LSA_HANDLE PolicyHandle,
    PLSA_UNICODE_STRING SecretName,
    ACCESS_MASK DesiredAccess,
    PLSA_HANDLE SecretHandle
);

NTSTATUS NTAPI LsaIsCredentialGuardRunning(
    PBOOLEAN IsCredentialGuardRunning
);

NTSTATUS NTAPI LsaOpenAccount(
    LSA_HANDLE PolicyHandle,
    PSID AccountSid,
    ACCESS_MASK DesiredAccess,
    PLSA_HANDLE AccountHandle
);

NTSTATUS NTAPI LsaEnumeratePrivilegesOfAccount(
    LSA_HANDLE AccountHandle,
    PPRIVILEGE_SET *Privileges
);

NTSTATUS NTAPI LsaAddPrivilegesToAccount(
    LSA_HANDLE AccountHandle,
    PPRIVILEGE_SET Privileges
);

NTSTATUS NTAPI LsaRemovePrivilegesFromAccount(
    LSA_HANDLE AccountHandle,
    BOOLEAN AllPrivileges,
    PPRIVILEGE_SET Privileges
);

NTSTATUS NTAPI LsaGetQuotasForAccount(
    LSA_HANDLE AccountHandle,
    PQUOTA_LIMITS QuotaLimits
);

NTSTATUS NTAPI LsaSetQuotasForAccount(
    LSA_HANDLE AccountHandle,
    PQUOTA_LIMITS QuotaLimits
);

NTSTATUS NTAPI LsaGetSystemAccessAccount(
    LSA_HANDLE AccountHandle,
    PULONG SystemAccess
);

NTSTATUS NTAPI LsaSetSystemAccessAccount(
    LSA_HANDLE AccountHandle,
    ULONG SystemAccess
);

NTSTATUS NTAPI LsaOpenTrustedDomain(
    LSA_HANDLE PolicyHandle,
    PSID TrustedDomainSid,
    ACCESS_MASK DesiredAccess,
    PLSA_HANDLE TrustedDomainHandle
);

NTSTATUS NTAPI LsaQueryInfoTrustedDomain(
    LSA_HANDLE TrustedDomainHandle,
    TRUSTED_INFORMATION_CLASS InformationClass,
    PVOID *Buffer
);

NTSTATUS NTAPI LsaSetInformationTrustedDomain(
    LSA_HANDLE TrustedDomainHandle,
    TRUSTED_INFORMATION_CLASS InformationClass,
    PVOID Buffer
);

NTSTATUS NTAPI LsaOpenSecret(
    LSA_HANDLE PolicyHandle,
    PLSA_UNICODE_STRING SecretName,
    ACCESS_MASK DesiredAccess,
    PLSA_HANDLE SecretHandle
);

NTSTATUS NTAPI LsaSetSecret(
    LSA_HANDLE SecretHandle,
    PLSA_UNICODE_STRING CurrentValue,
    PLSA_UNICODE_STRING OldValue
);

NTSTATUS NTAPI LsaQuerySecret(
    LSA_HANDLE SecretHandle,
    PLSA_UNICODE_STRING *CurrentValue,
    PLARGE_INTEGER CurrentValueSetTime,
    PLSA_UNICODE_STRING *OldValue,
    PLARGE_INTEGER OldValueSetTime
);

NTSTATUS NTAPI LsaLookupPrivilegeValue(
    LSA_HANDLE PolicyHandle,
    PLSA_UNICODE_STRING Name,
    PLUID Value
);

NTSTATUS NTAPI LsaLookupPrivilegeName(
    LSA_HANDLE PolicyHandle,
    PLUID Value,
    PLSA_UNICODE_STRING *Name
);

NTSTATUS NTAPI LsaLookupPrivilegeDisplayName(
    LSA_HANDLE PolicyHandle,
    PLSA_UNICODE_STRING Name,
    PLSA_UNICODE_STRING *DisplayName,
    PSHORT LanguageReturned
);

NTSTATUS LsaGetUserName(
    PLSA_UNICODE_STRING * UserName,
    PLSA_UNICODE_STRING * DomainName
);

NTSTATUS LsaGetRemoteUserName(
    PLSA_UNICODE_STRING SystemName,
    PLSA_UNICODE_STRING * UserName,
    PLSA_UNICODE_STRING * DomainName
);

#define SE_INTERACTIVE_LOGON_NAME           TEXT("SeInteractiveLogonRight")
#define SE_NETWORK_LOGON_NAME               TEXT("SeNetworkLogonRight")
#define SE_BATCH_LOGON_NAME                 TEXT("SeBatchLogonRight")
#define SE_SERVICE_LOGON_NAME               TEXT("SeServiceLogonRight")
#define SE_DENY_INTERACTIVE_LOGON_NAME      TEXT("SeDenyInteractiveLogonRight")
#define SE_DENY_NETWORK_LOGON_NAME          TEXT("SeDenyNetworkLogonRight")
#define SE_DENY_BATCH_LOGON_NAME            TEXT("SeDenyBatchLogonRight")
#define SE_DENY_SERVICE_LOGON_NAME          TEXT("SeDenyServiceLogonRight")
#if (_WIN32_WINNT >= 0x0501)
#define SE_REMOTE_INTERACTIVE_LOGON_NAME    TEXT("SeRemoteInteractiveLogonRight")
#define SE_DENY_REMOTE_INTERACTIVE_LOGON_NAME TEXT("SeDenyRemoteInteractiveLogonRight")
#endif

NTSTATUS NTAPI LsaEnumerateAccountsWithUserRight(
    LSA_HANDLE PolicyHandle,
    PLSA_UNICODE_STRING UserRight,
    PVOID *Buffer,
    PULONG CountReturned
);

NTSTATUS NTAPI LsaEnumerateAccountRights(
    LSA_HANDLE PolicyHandle,
    PSID AccountSid,
    PLSA_UNICODE_STRING *UserRights,
    PULONG CountOfRights
);

NTSTATUS NTAPI LsaAddAccountRights(
    LSA_HANDLE PolicyHandle,
    PSID AccountSid,
    PLSA_UNICODE_STRING UserRights,
    ULONG CountOfRights
);

NTSTATUS NTAPI LsaRemoveAccountRights(
    LSA_HANDLE PolicyHandle,
    PSID AccountSid,
    BOOLEAN AllRights,
    PLSA_UNICODE_STRING UserRights,
    ULONG CountOfRights
);

NTSTATUS NTAPI LsaOpenTrustedDomainByName(
    LSA_HANDLE PolicyHandle,
    PLSA_UNICODE_STRING TrustedDomainName,
    ACCESS_MASK DesiredAccess,
    PLSA_HANDLE TrustedDomainHandle
);

NTSTATUS NTAPI LsaQueryTrustedDomainInfo(
    LSA_HANDLE PolicyHandle,
    PSID TrustedDomainSid,
    TRUSTED_INFORMATION_CLASS InformationClass,
    PVOID *Buffer
);

NTSTATUS NTAPI LsaSetTrustedDomainInformation(
    LSA_HANDLE PolicyHandle,
    PSID TrustedDomainSid,
    TRUSTED_INFORMATION_CLASS InformationClass,
    PVOID Buffer
);

NTSTATUS NTAPI LsaDeleteTrustedDomain(
    LSA_HANDLE PolicyHandle,
    PSID TrustedDomainSid
);

NTSTATUS NTAPI LsaQueryTrustedDomainInfoByName(
    LSA_HANDLE PolicyHandle,
    PLSA_UNICODE_STRING TrustedDomainName,
    TRUSTED_INFORMATION_CLASS InformationClass,
    PVOID *Buffer
);

NTSTATUS NTAPI LsaSetTrustedDomainInfoByName(
    LSA_HANDLE PolicyHandle,
    PLSA_UNICODE_STRING TrustedDomainName,
    TRUSTED_INFORMATION_CLASS InformationClass,
    PVOID Buffer
);

NTSTATUS NTAPI LsaEnumerateTrustedDomainsEx(
    LSA_HANDLE PolicyHandle,
    PLSA_ENUMERATION_HANDLE EnumerationContext,
    PVOID *Buffer,
    ULONG PreferedMaximumLength,
    PULONG CountReturned
);

NTSTATUS NTAPI LsaCreateTrustedDomainEx(
    LSA_HANDLE PolicyHandle,
    PTRUSTED_DOMAIN_INFORMATION_EX TrustedDomainInformation,
    PTRUSTED_DOMAIN_AUTH_INFORMATION AuthenticationInformation,
    ACCESS_MASK DesiredAccess,
    PLSA_HANDLE TrustedDomainHandle
);

#if (_WIN32_WINNT >= 0x0501)
NTSTATUS NTAPI LsaQueryForestTrustInformation(
    LSA_HANDLE PolicyHandle,
    PLSA_UNICODE_STRING TrustedDomainName,
    PLSA_FOREST_TRUST_INFORMATION * ForestTrustInfo
);

NTSTATUS NTAPI LsaSetForestTrustInformation(
    LSA_HANDLE PolicyHandle,
    PLSA_UNICODE_STRING TrustedDomainName,
    PLSA_FOREST_TRUST_INFORMATION ForestTrustInfo,
    BOOLEAN CheckOnly,
    PLSA_FOREST_TRUST_COLLISION_INFORMATION * CollisionInfo
);

#ifdef TESTING_MATCHING_ROUTINE
NTSTATUS NTAPI LsaForestTrustFindMatch(
    LSA_HANDLE PolicyHandle,
    ULONG Type,
    PLSA_UNICODE_STRING Name,
    PLSA_UNICODE_STRING * Match
);
#endif

#endif /* (_WIN32_WINNT >= 0x0501) */

NTSTATUS NTAPI LsaStorePrivateData(
    LSA_HANDLE PolicyHandle,
    PLSA_UNICODE_STRING KeyName,
    PLSA_UNICODE_STRING PrivateData
);

NTSTATUS NTAPI LsaRetrievePrivateData(
    LSA_HANDLE PolicyHandle,
    PLSA_UNICODE_STRING KeyName,
    PLSA_UNICODE_STRING * PrivateData
);

ULONG NTAPI LsaNtStatusToWinError(
    NTSTATUS Status
);

NTSTATUS NTAPI LsaQueryForestTrustInformation2(
    LSA_HANDLE PolicyHandle,
    PLSA_UNICODE_STRING TrustedDomainName,
    LSA_FOREST_TRUST_RECORD_TYPE HighestRecordType,
    PLSA_FOREST_TRUST_INFORMATION2 * ForestTrustInfo
);

NTSTATUS NTAPI LsaSetForestTrustInformation2(
    LSA_HANDLE PolicyHandle,
    PLSA_UNICODE_STRING TrustedDomainName,
    LSA_FOREST_TRUST_RECORD_TYPE HighestRecordType,
    PLSA_FOREST_TRUST_INFORMATION2 ForestTrustInfo,
    BOOLEAN CheckOnly,
    PLSA_FOREST_TRUST_COLLISION_INFORMATION * CollisionInfo
);

NTSTATUS LsaInvokeTrustScanner(
    LSA_HANDLE PolicyHandle,
    LPWSTR DomainName,
    ULONG Flags,
    LPWSTR CompletionEvent
);

#ifndef _NTLSA_IFS_
#define _NTLSA_IFS_
#endif /* !_NTLSA_IFS_ */

enum NEGOTIATE_MESSAGES {
    NegEnumPackagePrefixes = 0,
    NegGetCallerName = 1,
    NegTransferCredentials = 2,
#ifdef _NTDEF_
    NegEnumPackageNames = 3,
#else /* !_NTDEF_ */
    NegMsgReserved1 = 3,
#endif /* !_NTDEF_ */
    NegCallPackageMax
};

#define NEGOTIATE_MAX_PREFIX    32

typedef struct _NEGOTIATE_PACKAGE_PREFIX {
    ULONG_PTR PackageId;
    PVOID PackageDataA;
    PVOID PackageDataW;
    ULONG_PTR PrefixLen;
    UCHAR Prefix[ NEGOTIATE_MAX_PREFIX ];
} NEGOTIATE_PACKAGE_PREFIX, * PNEGOTIATE_PACKAGE_PREFIX;

typedef struct _NEGOTIATE_PACKAGE_PREFIXES {
    ULONG MessageType;
    ULONG PrefixCount;
    ULONG Offset;
#if (_WIN32_WINNT >= 0x0502)
    ULONG Pad;
#endif /* (_WIN32_WINNT >= 0x0502) */
} NEGOTIATE_PACKAGE_PREFIXES, *PNEGOTIATE_PACKAGE_PREFIXES;

typedef struct _NEGOTIATE_CALLER_NAME_REQUEST {
    ULONG MessageType;
    LUID LogonId;
} NEGOTIATE_CALLER_NAME_REQUEST, *PNEGOTIATE_CALLER_NAME_REQUEST;

typedef struct _NEGOTIATE_CALLER_NAME_RESPONSE {
    ULONG MessageType;
    PWSTR CallerName;
} NEGOTIATE_CALLER_NAME_RESPONSE, * PNEGOTIATE_CALLER_NAME_RESPONSE;

typedef struct _NEGOTIATE_PACKAGE_NAMES {
    ULONG NamesCount;
    UNICODE_STRING Names[1];
} NEGOTIATE_PACKAGE_NAMES, *PNEGOTIATE_PACKAGE_NAMES;

#define NEGOTIATE_ALLOW_NTLM    0x10000000
#define NEGOTIATE_NEG_NTLM      0x20000000

typedef struct _NEGOTIATE_PACKAGE_PREFIX_WOW {
    ULONG PackageId;
    ULONG PackageDataA;
    ULONG PackageDataW;
    ULONG PrefixLen;
    UCHAR Prefix[ NEGOTIATE_MAX_PREFIX ];
} NEGOTIATE_PACKAGE_PREFIX_WOW, * PNEGOTIATE_PACKAGE_PREFIX_WOW;

typedef struct _NEGOTIATE_CALLER_NAME_RESPONSE_WOW {
    ULONG MessageType;
    ULONG CallerName;
} NEGOTIATE_CALLER_NAME_RESPONSE_WOW, * PNEGOTIATE_CALLER_NAME_RESPONSE_WOW;

NTSTATUS NTAPI LsaSetPolicyReplicationHandle(
    PLSA_HANDLE PolicyHandle
);

#define MAX_USER_RECORDS  1000

typedef struct _LSA_USER_REGISTRATION_INFO {
    LSA_UNICODE_STRING Sid;
    LSA_UNICODE_STRING DeviceId;
    LSA_UNICODE_STRING Username;
    LSA_UNICODE_STRING Thumbprint;
    LARGE_INTEGER RegistrationTime;
} LSA_USER_REGISTRATION_INFO, *PLSA_USER_REGISTRATION_INFO;

typedef struct _LSA_REGISTRATION_INFO {
#ifdef MIDL_PASS
    [range(0, MAX_USER_RECORDS)] ULONG RegisteredCount;
    [size_is(RegisteredCount)] PLSA_USER_REGISTRATION_INFO* UserRegistrationInfo;
#else /* !MIDL_PASS */
    ULONG RegisteredCount;
    PLSA_USER_REGISTRATION_INFO * UserRegistrationInfo;
#endif /* !MIDL_PASS */
} LSA_REGISTRATION_INFO, *PLSA_REGISTRATION_INFO;

NTSTATUS NTAPI LsaGetDeviceRegistrationInfo(
    PLSA_REGISTRATION_INFO * RegistrationInfo
);

typedef enum _LSA_CREDENTIAL_KEY_SOURCE_TYPE {
    eFromPrecomputed = 1,
    eFromClearPassword,
    eFromNtOwf,
} LSA_CREDENTIAL_KEY_SOURCE_TYPE, *PLSA_CREDENTIAL_KEY_SOURCE_TYPE;

NTSTATUS SeciIsProtectedUser(
    PBOOLEAN ProtectedUser
);

#define versionbyte (0x01)
#define versionbyte_length (1)
#define LSAD_AES_256_ALG "AEAD-AES-256-CBC-HMAC-SHA512"
#define LSAD_AES256_ENC_KEY_STRING "Microsoft LSAD encryption key AEAD-AES-256-CBC-HMAC-SHA512 16"
#define LSAD_AES256_MAC_KEY_STRING "Microsoft LSAD MAC key AEAD-AES-256-CBC-HMAC-SHA512 16"
#define LSAD_AES256_ENC_KEY_STRING_LENGTH sizeof(LSAD_AES256_ENC_KEY_STRING)
#define LSAD_AES256_MAC_KEY_STRING_LENGTH sizeof(LSAD_AES256_MAC_KEY_STRING)

#undef SIZE_IS
#undef SWITCH_IS
#undef SWITCH_TYPE
#undef CASE
#undef RANGE
#undef VAR_SIZE_ARRAY
#undef SID_POINTER
#undef REF

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#endif /* _NTLSA_H */
