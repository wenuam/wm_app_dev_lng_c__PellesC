#ifndef _SECURITYBASEAPI_H
#define _SECURITYBASEAPI_H

#if __POCC__ >= 500
#pragma once
#endif

/* ApiSet contract for api-ms-win-security-base-l1 */

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINADVAPI BOOL WINAPI AccessCheck(
    PSECURITY_DESCRIPTOR pSecurityDescriptor,
    HANDLE ClientToken,
    DWORD DesiredAccess,
    PGENERIC_MAPPING GenericMapping,
    PPRIVILEGE_SET PrivilegeSet,
    LPDWORD PrivilegeSetLength,
    LPDWORD GrantedAccess,
    LPBOOL AccessStatus
);

WINADVAPI BOOL WINAPI AccessCheckAndAuditAlarmW(
    LPCWSTR SubsystemName,
    LPVOID HandleId,
    LPWSTR ObjectTypeName,
    LPWSTR ObjectName,
    PSECURITY_DESCRIPTOR SecurityDescriptor,
    DWORD DesiredAccess,
    PGENERIC_MAPPING GenericMapping,
    BOOL ObjectCreation,
    LPDWORD GrantedAccess,
    LPBOOL AccessStatus,
    LPBOOL pfGenerateOnClose
);

#ifdef UNICODE
#define AccessCheckAndAuditAlarm  AccessCheckAndAuditAlarmW
#endif

WINADVAPI BOOL WINAPI AccessCheckByType(
    PSECURITY_DESCRIPTOR pSecurityDescriptor,
    PSID PrincipalSelfSid,
    HANDLE ClientToken,
    DWORD DesiredAccess,
    POBJECT_TYPE_LIST ObjectTypeList,
    DWORD ObjectTypeListLength,
    PGENERIC_MAPPING GenericMapping,
    PPRIVILEGE_SET PrivilegeSet,
    LPDWORD PrivilegeSetLength,
    LPDWORD GrantedAccess,
    LPBOOL AccessStatus
);

WINADVAPI BOOL WINAPI AccessCheckByTypeResultList(
    PSECURITY_DESCRIPTOR pSecurityDescriptor,
    PSID PrincipalSelfSid,
    HANDLE ClientToken,
    DWORD DesiredAccess,
    POBJECT_TYPE_LIST ObjectTypeList,
    DWORD ObjectTypeListLength,
    PGENERIC_MAPPING GenericMapping,
    PPRIVILEGE_SET PrivilegeSet,
    LPDWORD PrivilegeSetLength,
    LPDWORD GrantedAccessList,
    LPDWORD AccessStatusList
);

WINADVAPI BOOL WINAPI AccessCheckByTypeAndAuditAlarmW(
    LPCWSTR SubsystemName,
    LPVOID HandleId,
    LPCWSTR ObjectTypeName,
    LPCWSTR ObjectName,
    PSECURITY_DESCRIPTOR SecurityDescriptor,
    PSID PrincipalSelfSid,
    DWORD DesiredAccess,
    AUDIT_EVENT_TYPE AuditType,
    DWORD Flags,
    POBJECT_TYPE_LIST ObjectTypeList,
    DWORD ObjectTypeListLength,
    PGENERIC_MAPPING GenericMapping,
    BOOL ObjectCreation,
    LPDWORD GrantedAccess,
    LPBOOL AccessStatus,
    LPBOOL pfGenerateOnClose
);

#ifdef UNICODE
#define AccessCheckByTypeAndAuditAlarm  AccessCheckByTypeAndAuditAlarmW
#endif

WINADVAPI BOOL WINAPI AccessCheckByTypeResultListAndAuditAlarmW(
    LPCWSTR SubsystemName,
    LPVOID HandleId,
    LPCWSTR ObjectTypeName,
    LPCWSTR ObjectName,
    PSECURITY_DESCRIPTOR SecurityDescriptor,
    PSID PrincipalSelfSid,
    DWORD DesiredAccess,
    AUDIT_EVENT_TYPE AuditType,
    DWORD Flags,
    POBJECT_TYPE_LIST ObjectTypeList,
    DWORD ObjectTypeListLength,
    PGENERIC_MAPPING GenericMapping,
    BOOL ObjectCreation,
    LPDWORD GrantedAccessList,
    LPDWORD AccessStatusList,
    LPBOOL pfGenerateOnClose
);

#ifdef UNICODE
#define AccessCheckByTypeResultListAndAuditAlarm  AccessCheckByTypeResultListAndAuditAlarmW
#endif

WINADVAPI BOOL WINAPI AccessCheckByTypeResultListAndAuditAlarmByHandleW(
    LPCWSTR SubsystemName,
    LPVOID HandleId,
    HANDLE ClientToken,
    LPCWSTR ObjectTypeName,
    LPCWSTR ObjectName,
    PSECURITY_DESCRIPTOR SecurityDescriptor,
    PSID PrincipalSelfSid,
    DWORD DesiredAccess,
    AUDIT_EVENT_TYPE AuditType,
    DWORD Flags,
    POBJECT_TYPE_LIST ObjectTypeList,
    DWORD ObjectTypeListLength,
    PGENERIC_MAPPING GenericMapping,
    BOOL ObjectCreation,
    LPDWORD GrantedAccessList,
    LPDWORD AccessStatusList,
    LPBOOL pfGenerateOnClose
);

#ifdef UNICODE
#define AccessCheckByTypeResultListAndAuditAlarmByHandle  AccessCheckByTypeResultListAndAuditAlarmByHandleW
#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINADVAPI BOOL WINAPI AddAccessAllowedAce(
    PACL pAcl,
    DWORD dwAceRevision,
    DWORD AccessMask,
    PSID pSid
);

WINADVAPI BOOL WINAPI AddAccessAllowedAceEx(
    PACL pAcl,
    DWORD dwAceRevision,
    DWORD AceFlags,
    DWORD AccessMask,
    PSID pSid
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINADVAPI BOOL WINAPI AddAccessAllowedObjectAce(
    PACL pAcl,
    DWORD dwAceRevision,
    DWORD AceFlags,
    DWORD AccessMask,
    GUID *ObjectTypeGuid,
    GUID *InheritedObjectTypeGuid,
    PSID pSid
);

WINADVAPI BOOL WINAPI AddAccessDeniedAce(
    PACL pAcl,
    DWORD dwAceRevision,
    DWORD AccessMask,
    PSID pSid
);

WINADVAPI BOOL WINAPI AddAccessDeniedAceEx(
    PACL pAcl,
    DWORD dwAceRevision,
    DWORD AceFlags,
    DWORD AccessMask,
    PSID pSid
);

WINADVAPI BOOL WINAPI AddAccessDeniedObjectAce(
    PACL pAcl,
    DWORD dwAceRevision,
    DWORD AceFlags,
    DWORD AccessMask,
    GUID *ObjectTypeGuid,
    GUID *InheritedObjectTypeGuid,
    PSID pSid
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINADVAPI BOOL WINAPI AddAce(
    PACL pAcl,
    DWORD dwAceRevision,
    DWORD dwStartingAceIndex,
    LPVOID pAceList,
    DWORD nAceListLength
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINADVAPI BOOL WINAPI AddAuditAccessAce(
    PACL pAcl,
    DWORD dwAceRevision,
    DWORD dwAccessMask,
    PSID pSid,
    BOOL bAuditSuccess,
    BOOL bAuditFailure
);

WINADVAPI BOOL WINAPI AddAuditAccessAceEx(
    PACL pAcl,
    DWORD dwAceRevision,
    DWORD AceFlags,
    DWORD dwAccessMask,
    PSID pSid,
    BOOL bAuditSuccess,
    BOOL bAuditFailure
);

WINADVAPI BOOL WINAPI AddAuditAccessObjectAce(
    PACL pAcl,
    DWORD dwAceRevision,
    DWORD AceFlags,
    DWORD AccessMask,
    GUID *ObjectTypeGuid,
    GUID *InheritedObjectTypeGuid,
    PSID pSid,
    BOOL bAuditSuccess,
    BOOL bAuditFailure
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

#if (_WIN32_WINNT >= 0x0600)
WINADVAPI BOOL WINAPI AddMandatoryAce(
    PACL pAcl,
    DWORD dwAceRevision,
    DWORD AceFlags,
    DWORD MandatoryPolicy,
    PSID pLabelSid
);
#endif /* _WIN32_WINNT >=  0x0600 */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)

WINADVAPI BOOL WINAPI AddResourceAttributeAce(
    PACL pAcl,
    DWORD dwAceRevision,
    DWORD AceFlags,
    DWORD AccessMask,
    PSID pSid,
    PCLAIM_SECURITY_ATTRIBUTES_INFORMATION pAttributeInfo,
    PDWORD pReturnLength
);

WINADVAPI BOOL WINAPI AddScopedPolicyIDAce(
    PACL pAcl,
    DWORD dwAceRevision,
    DWORD AceFlags,
    DWORD AccessMask,
    PSID pSid
);

#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WIN8) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINADVAPI BOOL WINAPI AdjustTokenGroups(
    HANDLE TokenHandle,
    BOOL ResetToDefault,
    PTOKEN_GROUPS NewState,
    DWORD BufferLength,
    PTOKEN_GROUPS PreviousState,
    PDWORD ReturnLength
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

WINADVAPI BOOL WINAPI AdjustTokenPrivileges(
    HANDLE TokenHandle,
    BOOL DisableAllPrivileges,
    PTOKEN_PRIVILEGES NewState,
    DWORD BufferLength,
    PTOKEN_PRIVILEGES PreviousState,
    PDWORD ReturnLength
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINADVAPI BOOL WINAPI AllocateAndInitializeSid(
    PSID_IDENTIFIER_AUTHORITY pIdentifierAuthority,
    BYTE nSubAuthorityCount,
    DWORD nSubAuthority0,
    DWORD nSubAuthority1,
    DWORD nSubAuthority2,
    DWORD nSubAuthority3,
    DWORD nSubAuthority4,
    DWORD nSubAuthority5,
    DWORD nSubAuthority6,
    DWORD nSubAuthority7,
    PSID *pSid
);

WINADVAPI BOOL WINAPI AllocateLocallyUniqueId(
    PLUID Luid
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINADVAPI BOOL WINAPI AreAllAccessesGranted(
    DWORD GrantedAccess,
    DWORD DesiredAccess
);

WINADVAPI BOOL WINAPI AreAnyAccessesGranted(
    DWORD GrantedAccess,
    DWORD DesiredAccess
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINADVAPI BOOL APIENTRY CheckTokenMembership(
    HANDLE TokenHandle,
    PSID SidToCheck,
    PBOOL IsMember
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINADVAPI BOOL APIENTRY CheckTokenCapability(
    HANDLE TokenHandle,
    PSID CapabilitySidToCheck,
    PBOOL HasCapability
);

WINADVAPI BOOL APIENTRY GetAppContainerAce(
    PACL Acl,
    DWORD StartingAceIndex,
    PVOID *AppContainerAce,
    DWORD *AppContainerAceIndex
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINADVAPI BOOL APIENTRY CheckTokenMembershipEx(
    HANDLE TokenHandle,
    PSID SidToCheck,
    DWORD Flags,
    PBOOL IsMember
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WIN8) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINADVAPI BOOL WINAPI ConvertToAutoInheritPrivateObjectSecurity(
    PSECURITY_DESCRIPTOR ParentDescriptor,
    PSECURITY_DESCRIPTOR CurrentSecurityDescriptor,
    PSECURITY_DESCRIPTOR *NewSecurityDescriptor,
    GUID *ObjectType,
    BOOLEAN IsDirectoryObject,
    PGENERIC_MAPPING GenericMapping
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINADVAPI BOOL WINAPI CopySid(
    DWORD nDestinationSidLength,
    PSID pDestinationSid,
    PSID pSourceSid
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINADVAPI BOOL WINAPI CreatePrivateObjectSecurity(
    PSECURITY_DESCRIPTOR ParentDescriptor,
    PSECURITY_DESCRIPTOR CreatorDescriptor,
    PSECURITY_DESCRIPTOR *NewDescriptor,
    BOOL IsDirectoryObject,
    HANDLE Token,
    PGENERIC_MAPPING GenericMapping
);

WINADVAPI BOOL WINAPI CreatePrivateObjectSecurityEx(
    PSECURITY_DESCRIPTOR ParentDescriptor,
    PSECURITY_DESCRIPTOR CreatorDescriptor,
    PSECURITY_DESCRIPTOR *NewDescriptor,
    GUID *ObjectType,
    BOOL IsContainerObject,
    ULONG AutoInheritFlags,
    HANDLE Token,
    PGENERIC_MAPPING GenericMapping
);

WINADVAPI BOOL WINAPI CreatePrivateObjectSecurityWithMultipleInheritance(
    PSECURITY_DESCRIPTOR ParentDescriptor,
    PSECURITY_DESCRIPTOR CreatorDescriptor,
    PSECURITY_DESCRIPTOR *NewDescriptor,
    GUID **ObjectTypes,
    ULONG GuidCount,
    BOOL IsContainerObject,
    ULONG AutoInheritFlags,
    HANDLE Token,
    PGENERIC_MAPPING GenericMapping
);

WINADVAPI BOOL APIENTRY CreateRestrictedToken(
    HANDLE ExistingTokenHandle,
    DWORD Flags,
    DWORD DisableSidCount,
    PSID_AND_ATTRIBUTES SidsToDisable,
    DWORD DeletePrivilegeCount,
    PLUID_AND_ATTRIBUTES PrivilegesToDelete,
    DWORD RestrictedSidCount,
    PSID_AND_ATTRIBUTES SidsToRestrict,
    PHANDLE NewTokenHandle
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

#if (_WIN32_WINNT >= 0x0501)

WINADVAPI BOOL WINAPI CreateWellKnownSid(
    WELL_KNOWN_SID_TYPE WellKnownSidType,
    PSID DomainSid,
    PSID pSid,
    DWORD *cbSid
);

WINADVAPI BOOL WINAPI EqualDomainSid(
    PSID pSid1,
    PSID pSid2,
    BOOL *pfEqual
);

#endif /* (_WIN32_WINNT >= 0x0501) */

WINADVAPI BOOL WINAPI DeleteAce(
    PACL pAcl,
    DWORD dwAceIndex
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINADVAPI BOOL WINAPI DestroyPrivateObjectSecurity(
    PSECURITY_DESCRIPTOR* ObjectDescriptor
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINADVAPI BOOL WINAPI DuplicateToken(
    HANDLE ExistingTokenHandle,
    SECURITY_IMPERSONATION_LEVEL ImpersonationLevel,
    PHANDLE DuplicateTokenHandle
);

WINADVAPI BOOL WINAPI DuplicateTokenEx(
    HANDLE hExistingToken,
    DWORD dwDesiredAccess,
    LPSECURITY_ATTRIBUTES lpTokenAttributes,
    SECURITY_IMPERSONATION_LEVEL ImpersonationLevel,
    TOKEN_TYPE TokenType,
    PHANDLE phNewToken
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINADVAPI BOOL WINAPI EqualPrefixSid(
    PSID pSid1,
    PSID pSid2
);

WINADVAPI BOOL WINAPI EqualSid(
    PSID pSid1,
    PSID pSid2
);

WINADVAPI BOOL WINAPI FindFirstFreeAce(
    PACL pAcl,
    LPVOID *pAce
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINADVAPI PVOID WINAPI FreeSid(
    PSID pSid
);

WINADVAPI BOOL WINAPI GetAce(
    PACL pAcl,
    DWORD dwAceIndex,
    LPVOID *pAce
);

WINADVAPI BOOL WINAPI GetAclInformation(
    PACL pAcl,
    LPVOID pAclInformation,
    DWORD nAclInformationLength,
    ACL_INFORMATION_CLASS dwAclInformationClass
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINADVAPI BOOL WINAPI GetFileSecurityW(
    LPCWSTR lpFileName,
    SECURITY_INFORMATION RequestedInformation,
    PSECURITY_DESCRIPTOR pSecurityDescriptor,
    DWORD nLength,
    LPDWORD lpnLengthNeeded
);

#ifdef UNICODE
#define GetFileSecurity  GetFileSecurityW
#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINADVAPI BOOL WINAPI GetKernelObjectSecurity(
    HANDLE Handle,
    SECURITY_INFORMATION RequestedInformation,
    PSECURITY_DESCRIPTOR pSecurityDescriptor,
    DWORD nLength,
    LPDWORD lpnLengthNeeded
);

WINADVAPI DWORD WINAPI GetLengthSid(
    PSID pSid
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINADVAPI BOOL WINAPI GetPrivateObjectSecurity(
    PSECURITY_DESCRIPTOR ObjectDescriptor,
    SECURITY_INFORMATION SecurityInformation,
    PSECURITY_DESCRIPTOR ResultantDescriptor,
    DWORD DescriptorLength,
    PDWORD ReturnLength
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINADVAPI BOOL WINAPI GetSecurityDescriptorControl(
    PSECURITY_DESCRIPTOR pSecurityDescriptor,
    PSECURITY_DESCRIPTOR_CONTROL pControl,
    LPDWORD lpdwRevision
);

WINADVAPI BOOL WINAPI GetSecurityDescriptorDacl(
    PSECURITY_DESCRIPTOR pSecurityDescriptor,
    LPBOOL lpbDaclPresent,
    PACL *pDacl,
    LPBOOL lpbDaclDefaulted
);

WINADVAPI BOOL WINAPI GetSecurityDescriptorGroup(
    PSECURITY_DESCRIPTOR pSecurityDescriptor,
    PSID *pGroup,
    LPBOOL lpbGroupDefaulted
);

WINADVAPI DWORD WINAPI GetSecurityDescriptorLength(
    PSECURITY_DESCRIPTOR pSecurityDescriptor
);

WINADVAPI BOOL WINAPI GetSecurityDescriptorOwner(
    PSECURITY_DESCRIPTOR pSecurityDescriptor,
    PSID *pOwner,
    LPBOOL lpbOwnerDefaulted
);

WINADVAPI DWORD WINAPI GetSecurityDescriptorRMControl(
    PSECURITY_DESCRIPTOR SecurityDescriptor,
    PUCHAR RMControl
);

WINADVAPI BOOL WINAPI GetSecurityDescriptorSacl(
    PSECURITY_DESCRIPTOR pSecurityDescriptor,
    LPBOOL lpbSaclPresent,
    PACL *pSacl,
    LPBOOL lpbSaclDefaulted
);

WINADVAPI PSID_IDENTIFIER_AUTHORITY WINAPI GetSidIdentifierAuthority(
    PSID pSid
);

WINADVAPI DWORD WINAPI GetSidLengthRequired(
    UCHAR nSubAuthorityCount
);

WINADVAPI PDWORD WINAPI GetSidSubAuthority(
    PSID pSid,
    DWORD nSubAuthority
);

WINADVAPI PUCHAR WINAPI GetSidSubAuthorityCount(
    PSID pSid
);

WINADVAPI BOOL WINAPI GetTokenInformation(
    HANDLE TokenHandle,
    TOKEN_INFORMATION_CLASS TokenInformationClass,
    LPVOID TokenInformation,
    DWORD TokenInformationLength,
    PDWORD ReturnLength
);

#if (_WIN32_WINNT >= 0x0501)
WINADVAPI BOOL WINAPI GetWindowsAccountDomainSid(
    PSID pSid,
    PSID pDomainSid,
    DWORD *cbDomainSid
);
#endif /* (_WIN32_WINNT >= 0x0501) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINADVAPI BOOL APIENTRY ImpersonateAnonymousToken(
    HANDLE ThreadHandle
);

WINADVAPI BOOL WINAPI ImpersonateLoggedOnUser(
    HANDLE hToken
);

WINADVAPI BOOL WINAPI ImpersonateSelf(
    SECURITY_IMPERSONATION_LEVEL ImpersonationLevel
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINADVAPI BOOL WINAPI InitializeAcl(
    PACL pAcl,
    DWORD nAclLength,
    DWORD dwAclRevision
);

WINADVAPI BOOL WINAPI InitializeSecurityDescriptor(
    PSECURITY_DESCRIPTOR pSecurityDescriptor,
    DWORD dwRevision
);

WINADVAPI BOOL WINAPI InitializeSid(
    PSID Sid,
    PSID_IDENTIFIER_AUTHORITY pIdentifierAuthority,
    BYTE nSubAuthorityCount
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINADVAPI BOOL WINAPI IsTokenRestricted(
    HANDLE TokenHandle
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINADVAPI BOOL WINAPI IsValidAcl(
    PACL pAcl
);

WINADVAPI BOOL WINAPI IsValidSecurityDescriptor(
    PSECURITY_DESCRIPTOR pSecurityDescriptor
);

WINADVAPI BOOL WINAPI IsValidSid(
    PSID pSid
);

#if (_WIN32_WINNT >= 0x0501)
WINADVAPI BOOL WINAPI IsWellKnownSid(
    PSID pSid,
    WELL_KNOWN_SID_TYPE WellKnownSidType
);
#endif /* (_WIN32_WINNT >= 0x0501) */

WINADVAPI BOOL WINAPI MakeAbsoluteSD(
    PSECURITY_DESCRIPTOR pSelfRelativeSecurityDescriptor,
    PSECURITY_DESCRIPTOR pAbsoluteSecurityDescriptor,
    LPDWORD lpdwAbsoluteSecurityDescriptorSize,
    PACL pDacl,
    LPDWORD lpdwDaclSize,
    PACL pSacl,
    LPDWORD lpdwSaclSize,
    PSID pOwner,
    LPDWORD lpdwOwnerSize,
    PSID pPrimaryGroup,
    LPDWORD lpdwPrimaryGroupSize
);

WINADVAPI BOOL WINAPI MakeSelfRelativeSD(
    PSECURITY_DESCRIPTOR pAbsoluteSecurityDescriptor,
    PSECURITY_DESCRIPTOR pSelfRelativeSecurityDescriptor,
    LPDWORD lpdwBufferLength
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINADVAPI VOID WINAPI MapGenericMask(
    PDWORD AccessMask,
    PGENERIC_MAPPING GenericMapping
);

WINADVAPI BOOL WINAPI ObjectCloseAuditAlarmW(
    LPCWSTR SubsystemName,
    LPVOID HandleId,
    BOOL GenerateOnClose
);

#ifdef UNICODE
#define ObjectCloseAuditAlarm  ObjectCloseAuditAlarmW
#endif

WINADVAPI BOOL WINAPI ObjectDeleteAuditAlarmW(
    LPCWSTR SubsystemName,
    LPVOID HandleId,
    BOOL GenerateOnClose
);

#ifdef UNICODE
#define ObjectDeleteAuditAlarm  ObjectDeleteAuditAlarmW
#endif

WINADVAPI BOOL WINAPI ObjectOpenAuditAlarmW(
    LPCWSTR SubsystemName,
    LPVOID HandleId,
    LPWSTR ObjectTypeName,
    LPWSTR ObjectName,
    PSECURITY_DESCRIPTOR pSecurityDescriptor,
    HANDLE ClientToken,
    DWORD DesiredAccess,
    DWORD GrantedAccess,
    PPRIVILEGE_SET Privileges,
    BOOL ObjectCreation,
    BOOL AccessGranted,
    LPBOOL GenerateOnClose
);

#ifdef UNICODE
#define ObjectOpenAuditAlarm  ObjectOpenAuditAlarmW
#endif

WINADVAPI BOOL WINAPI ObjectPrivilegeAuditAlarmW(
    LPCWSTR SubsystemName,
    LPVOID HandleId,
    HANDLE ClientToken,
    DWORD DesiredAccess,
    PPRIVILEGE_SET Privileges,
    BOOL AccessGranted
);

#ifdef UNICODE
#define ObjectPrivilegeAuditAlarm  ObjectPrivilegeAuditAlarmW
#endif

WINADVAPI BOOL WINAPI PrivilegeCheck(
    HANDLE ClientToken,
    PPRIVILEGE_SET RequiredPrivileges,
    LPBOOL pfResult
);

WINADVAPI BOOL WINAPI PrivilegedServiceAuditAlarmW(
    LPCWSTR SubsystemName,
    LPCWSTR ServiceName,
    HANDLE ClientToken,
    PPRIVILEGE_SET Privileges,
    BOOL AccessGranted
);

#ifdef UNICODE
#define PrivilegedServiceAuditAlarm  PrivilegedServiceAuditAlarmW
#endif

#if (_WIN32_WINNT >= 0x0600)
WINADVAPI void WINAPI QuerySecurityAccessMask(
    SECURITY_INFORMATION SecurityInformation,
    LPDWORD DesiredAccess
);
#endif /* (_WIN32_WINNT >= 0x0600) */

WINADVAPI BOOL WINAPI RevertToSelf(
    void
);

WINADVAPI BOOL WINAPI SetAclInformation(
    PACL pAcl,
    LPVOID pAclInformation,
    DWORD nAclInformationLength,
    ACL_INFORMATION_CLASS dwAclInformationClass
);

WINADVAPI BOOL WINAPI SetFileSecurityW(
    LPCWSTR lpFileName,
    SECURITY_INFORMATION SecurityInformation,
    PSECURITY_DESCRIPTOR pSecurityDescriptor
);
#ifdef UNICODE
#define SetFileSecurity  SetFileSecurityW
#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINADVAPI BOOL WINAPI SetKernelObjectSecurity(
    HANDLE Handle,
    SECURITY_INFORMATION SecurityInformation,
    PSECURITY_DESCRIPTOR SecurityDescriptor
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINADVAPI BOOL WINAPI SetPrivateObjectSecurity(
    SECURITY_INFORMATION SecurityInformation,
    PSECURITY_DESCRIPTOR ModificationDescriptor,
    PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor,
    PGENERIC_MAPPING GenericMapping,
    HANDLE Token
);

WINADVAPI BOOL WINAPI SetPrivateObjectSecurityEx(
    SECURITY_INFORMATION SecurityInformation,
    PSECURITY_DESCRIPTOR ModificationDescriptor,
    PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor,
    ULONG AutoInheritFlags,
    PGENERIC_MAPPING GenericMapping,
    HANDLE Token
);

#if (_WIN32_WINNT >= 0x0600)
WINADVAPI void WINAPI SetSecurityAccessMask(
    SECURITY_INFORMATION SecurityInformation,
    LPDWORD DesiredAccess
);
#endif /* (_WIN32_WINNT >= 0x0600) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINADVAPI BOOL WINAPI SetSecurityDescriptorControl(
    PSECURITY_DESCRIPTOR pSecurityDescriptor,
    SECURITY_DESCRIPTOR_CONTROL ControlBitsOfInterest,
    SECURITY_DESCRIPTOR_CONTROL ControlBitsToSet
);

WINADVAPI BOOL WINAPI SetSecurityDescriptorDacl(
    PSECURITY_DESCRIPTOR pSecurityDescriptor,
    BOOL bDaclPresent,
    PACL pDacl,
    BOOL bDaclDefaulted
);

WINADVAPI BOOL WINAPI SetSecurityDescriptorGroup(
    PSECURITY_DESCRIPTOR pSecurityDescriptor,
    PSID pGroup,
    BOOL bGroupDefaulted
);

WINADVAPI BOOL WINAPI SetSecurityDescriptorOwner(
    PSECURITY_DESCRIPTOR pSecurityDescriptor,
    PSID pOwner,
    BOOL bOwnerDefaulted
);

WINADVAPI DWORD WINAPI SetSecurityDescriptorRMControl(
    PSECURITY_DESCRIPTOR SecurityDescriptor,
    PUCHAR RMControl
);

WINADVAPI BOOL WINAPI SetSecurityDescriptorSacl(
    PSECURITY_DESCRIPTOR pSecurityDescriptor,
    BOOL bSaclPresent,
    PACL pSacl,
    BOOL bSaclDefaulted
);

WINADVAPI BOOL WINAPI SetTokenInformation(
    HANDLE TokenHandle,
    TOKEN_INFORMATION_CLASS TokenInformationClass,
    LPVOID TokenInformation,
    DWORD TokenInformationLength
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#define SIGNING_LEVEL_FILE_CACHE_FLAG_NOT_VALIDATED  0x01
#define SIGNING_LEVEL_FILE_CACHE_FLAG_VALIDATE_ONLY  0x04

#define SIGNING_LEVEL_MICROSOFT  8

WINADVAPI BOOL WINAPI SetCachedSigningLevel(
    PHANDLE SourceFiles,
    ULONG SourceFileCount,
    ULONG Flags,
    HANDLE TargetFile
);

WINADVAPI BOOL WINAPI GetCachedSigningLevel(
    HANDLE File,
    PULONG Flags,
    PULONG SigningLevel,
    PUCHAR Thumbprint,
    PULONG ThumbprintSize,
    PULONG ThumbprintAlgorithm
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WIN8) */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN10)

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINADVAPI LONG WINAPI CveEventWrite(
    PCWSTR CveId,
    PCWSTR AdditionalDetails
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WIN10) */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN10)

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINADVAPI BOOL WINAPI DeriveCapabilitySidsFromName(
    LPCWSTR CapName,
    PSID **CapabilityGroupSids,
    DWORD *CapabilityGroupSidCount,
    PSID **CapabilitySids,
    DWORD *CapabilitySidCount
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WIN10) */

#endif /* _SECURITYBASEAPI_H */
