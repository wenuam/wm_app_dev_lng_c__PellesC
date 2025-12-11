#ifndef _ACLAPI_H
#define _ACLAPI_H

#if __POCC__ >= 500
#pragma once
#endif

/* Windows Access Control API definitions */

#include <winapifamily.h>

#include <windows.h>
#include <accctrl.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

typedef void (CALLBACK *FN_PROGRESS)(
    LPWSTR pObjectName,
    DWORD Status,
    PPROG_INVOKE_SETTING pInvokeSetting,
    PVOID Args,
    BOOL SecuritySet
);

WINADVAPI DWORD WINAPI SetEntriesInAclA(
    ULONG cCountOfExplicitEntries,
    PEXPLICIT_ACCESS_A pListOfExplicitEntries,
    PACL OldAcl,
    PACL *NewAcl
);
WINADVAPI DWORD WINAPI SetEntriesInAclW(
    ULONG cCountOfExplicitEntries,
    PEXPLICIT_ACCESS_W pListOfExplicitEntries,
    PACL OldAcl,
    PACL *NewAcl
);
#ifdef UNICODE
#define SetEntriesInAcl  SetEntriesInAclW
#else /* !UNICODE */
#define SetEntriesInAcl  SetEntriesInAclA
#endif /* !UNICODE */

WINADVAPI DWORD WINAPI GetExplicitEntriesFromAclA(
    PACL pacl,
    PULONG pcCountOfExplicitEntries,
    PEXPLICIT_ACCESS_A *pListOfExplicitEntries
);
WINADVAPI DWORD WINAPI GetExplicitEntriesFromAclW(
    PACL pacl,
    PULONG pcCountOfExplicitEntries,
    PEXPLICIT_ACCESS_W *pListOfExplicitEntries
);
#ifdef UNICODE
#define GetExplicitEntriesFromAcl  GetExplicitEntriesFromAclW
#else /* !UNICODE */
#define GetExplicitEntriesFromAcl  GetExplicitEntriesFromAclA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

WINADVAPI DWORD WINAPI GetEffectiveRightsFromAclA(
    PACL pacl,
    PTRUSTEE_A pTrustee,
    PACCESS_MASK pAccessRights
);
WINADVAPI DWORD WINAPI GetEffectiveRightsFromAclW(
    PACL pacl,
    PTRUSTEE_W pTrustee,
    PACCESS_MASK pAccessRights
);
#ifdef UNICODE
#define GetEffectiveRightsFromAcl  GetEffectiveRightsFromAclW
#else /* !UNICODE */
#define GetEffectiveRightsFromAcl  GetEffectiveRightsFromAclA
#endif /* !UNICODE */

WINADVAPI DWORD WINAPI GetAuditedPermissionsFromAclA(
    PACL pacl,
    PTRUSTEE_A pTrustee,
    PACCESS_MASK pSuccessfulAuditedRights,
    PACCESS_MASK pFailedAuditRights
);
WINADVAPI DWORD WINAPI GetAuditedPermissionsFromAclW(
    PACL pacl,
    PTRUSTEE_W pTrustee,
    PACCESS_MASK pSuccessfulAuditedRights,
    PACCESS_MASK pFailedAuditRights
);
#ifdef UNICODE
#define GetAuditedPermissionsFromAcl  GetAuditedPermissionsFromAclW
#else /* !UNICODE */
#define GetAuditedPermissionsFromAcl  GetAuditedPermissionsFromAclA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINADVAPI DWORD WINAPI GetNamedSecurityInfoA(
    LPCSTR pObjectName,
    SE_OBJECT_TYPE ObjectType,
    SECURITY_INFORMATION SecurityInfo,
    PSID *ppsidOwner,
    PSID *ppsidGroup,
    PACL *ppDacl,
    PACL *ppSacl,
    PSECURITY_DESCRIPTOR *ppSecurityDescriptor
);
WINADVAPI DWORD WINAPI GetNamedSecurityInfoW(
    LPCWSTR pObjectName,
    SE_OBJECT_TYPE ObjectType,
    SECURITY_INFORMATION SecurityInfo,
    PSID *ppsidOwner,
    PSID *ppsidGroup,
    PACL *ppDacl,
    PACL *ppSacl,
    PSECURITY_DESCRIPTOR *ppSecurityDescriptor
);
#ifdef UNICODE
#define GetNamedSecurityInfo  GetNamedSecurityInfoW
#else /* !UNICODE */
#define GetNamedSecurityInfo  GetNamedSecurityInfoA
#endif /* !UNICODE */

WINADVAPI DWORD WINAPI GetSecurityInfo(
    HANDLE handle,
    SE_OBJECT_TYPE ObjectType,
    SECURITY_INFORMATION SecurityInfo,
    PSID *ppsidOwner,
    PSID *ppsidGroup,
    PACL *ppDacl,
    PACL *ppSacl,
    PSECURITY_DESCRIPTOR *ppSecurityDescriptor
);

WINADVAPI DWORD WINAPI SetNamedSecurityInfoA(
    LPSTR pObjectName,
    SE_OBJECT_TYPE ObjectType,
    SECURITY_INFORMATION SecurityInfo,
    PSID psidOwner,
    PSID psidGroup,
    PACL pDacl,
    PACL pSacl
);
WINADVAPI DWORD WINAPI SetNamedSecurityInfoW(
    LPWSTR pObjectName,
    SE_OBJECT_TYPE ObjectType,
    SECURITY_INFORMATION SecurityInfo,
    PSID psidOwner,
    PSID psidGroup,
    PACL pDacl,
    PACL pSacl
);
#ifdef UNICODE
#define SetNamedSecurityInfo  SetNamedSecurityInfoW
#else /* !UNICODE */
#define SetNamedSecurityInfo  SetNamedSecurityInfoA
#endif /* !UNICODE */

WINADVAPI DWORD WINAPI SetSecurityInfo(
    HANDLE handle,
    SE_OBJECT_TYPE ObjectType,
    SECURITY_INFORMATION SecurityInfo,
    PSID psidOwner,
    PSID psidGroup,
    PACL pDacl,
    PACL pSacl
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

WINADVAPI DWORD WINAPI GetInheritanceSourceA(
    LPSTR pObjectName,
    SE_OBJECT_TYPE ObjectType,
    SECURITY_INFORMATION SecurityInfo,
    BOOL Container,
    GUID **pObjectClassGuids,
    DWORD GuidCount,
    PACL pAcl,
    PFN_OBJECT_MGR_FUNCTS pfnArray,
    PGENERIC_MAPPING pGenericMapping,
    PINHERITED_FROMA pInheritArray
);
WINADVAPI DWORD WINAPI GetInheritanceSourceW(
    LPWSTR pObjectName,
    SE_OBJECT_TYPE ObjectType,
    SECURITY_INFORMATION SecurityInfo,
    BOOL Container,
    GUID **pObjectClassGuids,
    DWORD GuidCount,
    PACL pAcl,
    PFN_OBJECT_MGR_FUNCTS pfnArray,
    PGENERIC_MAPPING pGenericMapping,
    PINHERITED_FROMW pInheritArray
);
#ifdef UNICODE
#define GetInheritanceSource  GetInheritanceSourceW
#else /* !UNICODE */
#define GetInheritanceSource  GetInheritanceSourceA
#endif /* !UNICODE */

WINADVAPI DWORD WINAPI FreeInheritedFromArray(
    PINHERITED_FROMW pInheritArray,
    USHORT AceCnt,
    PFN_OBJECT_MGR_FUNCTS pfnArray
);

WINADVAPI DWORD WINAPI TreeResetNamedSecurityInfoA(
    LPSTR pObjectName,
    SE_OBJECT_TYPE ObjectType,
    SECURITY_INFORMATION SecurityInfo,
    PSID pOwner,
    PSID pGroup,
    PACL pDacl,
    PACL pSacl,
    BOOL KeepExplicit,
    FN_PROGRESS fnProgress,
    PROG_INVOKE_SETTING ProgressInvokeSetting,
    PVOID Args
);
WINADVAPI DWORD WINAPI TreeResetNamedSecurityInfoW(
    LPWSTR pObjectName,
    SE_OBJECT_TYPE ObjectType,
    SECURITY_INFORMATION SecurityInfo,
    PSID pOwner,
    PSID pGroup,
    PACL pDacl,
    PACL pSacl,
    BOOL KeepExplicit,
    FN_PROGRESS fnProgress,
    PROG_INVOKE_SETTING ProgressInvokeSetting,
    PVOID Args
);
#ifdef UNICODE
#define TreeResetNamedSecurityInfo  TreeResetNamedSecurityInfoW
#else /* !UNICODE */
#define TreeResetNamedSecurityInfo  TreeResetNamedSecurityInfoA
#endif /* !UNICODE */

#if (NTDDI_VERSION >= NTDDI_VISTA)
WINADVAPI DWORD WINAPI TreeSetNamedSecurityInfoA(
    LPSTR pObjectName,
    SE_OBJECT_TYPE ObjectType,
    SECURITY_INFORMATION SecurityInfo,
    PSID pOwner,
    PSID pGroup,
    PACL pDacl,
    PACL pSacl,
    DWORD dwAction,
    FN_PROGRESS fnProgress,
    PROG_INVOKE_SETTING ProgressInvokeSetting,
    PVOID Args
);
WINADVAPI DWORD WINAPI TreeSetNamedSecurityInfoW(
    LPWSTR pObjectName,
    SE_OBJECT_TYPE ObjectType,
    SECURITY_INFORMATION SecurityInfo,
    PSID pOwner,
    PSID pGroup,
    PACL pDacl,
    PACL pSacl,
    DWORD dwAction,
    FN_PROGRESS fnProgress,
    PROG_INVOKE_SETTING ProgressInvokeSetting,
    PVOID Args
);
#ifdef UNICODE
#define TreeSetNamedSecurityInfo  TreeSetNamedSecurityInfoW
#else /* !UNICODE */
#define TreeSetNamedSecurityInfo  TreeSetNamedSecurityInfoA
#endif /* !UNICODE */

#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */

WINADVAPI DWORD WINAPI BuildSecurityDescriptorA(
    PTRUSTEE_A pOwner,
    PTRUSTEE_A pGroup,
    ULONG cCountOfAccessEntries,
    PEXPLICIT_ACCESS_A pListOfAccessEntries,
    ULONG cCountOfAuditEntries,
    PEXPLICIT_ACCESS_A pListOfAuditEntries,
    PSECURITY_DESCRIPTOR pOldSD,
    PULONG pSizeNewSD,
    PSECURITY_DESCRIPTOR *pNewSD
);
WINADVAPI DWORD WINAPI BuildSecurityDescriptorW(
    PTRUSTEE_W pOwner,
    PTRUSTEE_W pGroup,
    ULONG cCountOfAccessEntries,
    PEXPLICIT_ACCESS_W pListOfAccessEntries,
    ULONG cCountOfAuditEntries,
    PEXPLICIT_ACCESS_W pListOfAuditEntries,
    PSECURITY_DESCRIPTOR pOldSD,
    PULONG pSizeNewSD,
    PSECURITY_DESCRIPTOR *pNewSD
);
#ifdef UNICODE
#define BuildSecurityDescriptor  BuildSecurityDescriptorW
#else /* !UNICODE */
#define BuildSecurityDescriptor  BuildSecurityDescriptorA
#endif /* !UNICODE */

WINADVAPI DWORD WINAPI LookupSecurityDescriptorPartsA(
    PTRUSTEE_A *ppOwner,
    PTRUSTEE_A *ppGroup,
    PULONG pcCountOfAccessEntries,
    PEXPLICIT_ACCESS_A *ppListOfAccessEntries,
    PULONG pcCountOfAuditEntries,
    PEXPLICIT_ACCESS_A *ppListOfAuditEntries,
    PSECURITY_DESCRIPTOR pSD
);
WINADVAPI DWORD WINAPI LookupSecurityDescriptorPartsW(
    PTRUSTEE_W *ppOwner,
    PTRUSTEE_W *ppGroup,
    PULONG pcCountOfAccessEntries,
    PEXPLICIT_ACCESS_W *ppListOfAccessEntries,
    PULONG pcCountOfAuditEntries,
    PEXPLICIT_ACCESS_W *ppListOfAuditEntries,
    PSECURITY_DESCRIPTOR pSD
);
#ifdef UNICODE
#define LookupSecurityDescriptorParts  LookupSecurityDescriptorPartsW
#else /* !UNICODE */
#define LookupSecurityDescriptorParts  LookupSecurityDescriptorPartsA
#endif /* !UNICODE */

WINADVAPI void WINAPI BuildExplicitAccessWithNameA(
    PEXPLICIT_ACCESS_A pExplicitAccess,
    LPSTR pTrusteeName,
    DWORD AccessPermissions,
    ACCESS_MODE AccessMode,
    DWORD Inheritance
);
WINADVAPI void WINAPI BuildExplicitAccessWithNameW(
    PEXPLICIT_ACCESS_W pExplicitAccess,
    LPWSTR pTrusteeName,
    DWORD AccessPermissions,
    ACCESS_MODE AccessMode,
    DWORD Inheritance
);
#ifdef UNICODE
#define BuildExplicitAccessWithName  BuildExplicitAccessWithNameW
#else /* !UNICODE */
#define BuildExplicitAccessWithName  BuildExplicitAccessWithNameA
#endif /* !UNICODE */

WINADVAPI void WINAPI BuildImpersonateExplicitAccessWithNameA(
    PEXPLICIT_ACCESS_A pExplicitAccess,
    LPSTR pTrusteeName,
    PTRUSTEE_A pTrustee,
    DWORD AccessPermissions,
    ACCESS_MODE AccessMode,
    DWORD Inheritance
);
WINADVAPI void WINAPI BuildImpersonateExplicitAccessWithNameW(
    PEXPLICIT_ACCESS_W pExplicitAccess,
    LPWSTR pTrusteeName,
    PTRUSTEE_W pTrustee,
    DWORD AccessPermissions,
    ACCESS_MODE AccessMode,
    DWORD Inheritance
);
#ifdef UNICODE
#define BuildImpersonateExplicitAccessWithName  BuildImpersonateExplicitAccessWithNameW
#else /* !UNICODE */
#define BuildImpersonateExplicitAccessWithName  BuildImpersonateExplicitAccessWithNameA
#endif /* !UNICODE */

WINADVAPI void WINAPI BuildTrusteeWithNameA(
    PTRUSTEE_A pTrustee,
    LPSTR pName
);
WINADVAPI void WINAPI BuildTrusteeWithNameW(
    PTRUSTEE_W pTrustee,
    LPWSTR pName
);
#ifdef UNICODE
#define BuildTrusteeWithName  BuildTrusteeWithNameW
#else /* !UNICODE */
#define BuildTrusteeWithName  BuildTrusteeWithNameA
#endif /* !UNICODE */

WINADVAPI void WINAPI BuildImpersonateTrusteeA(
    PTRUSTEE_A pTrustee,
    PTRUSTEE_A pImpersonateTrustee
);
WINADVAPI void WINAPI BuildImpersonateTrusteeW(
    PTRUSTEE_W pTrustee,
    PTRUSTEE_W pImpersonateTrustee
);
#ifdef UNICODE
#define BuildImpersonateTrustee  BuildImpersonateTrusteeW
#else /* !UNICODE */
#define BuildImpersonateTrustee  BuildImpersonateTrusteeA
#endif /* !UNICODE */

WINADVAPI void WINAPI BuildTrusteeWithSidA(
    PTRUSTEE_A pTrustee,
    PSID pSid
);
WINADVAPI void WINAPI BuildTrusteeWithSidW(
    PTRUSTEE_W pTrustee,
    PSID pSid
);
#ifdef UNICODE
#define BuildTrusteeWithSid  BuildTrusteeWithSidW
#else /* !UNICODE */
#define BuildTrusteeWithSid  BuildTrusteeWithSidA
#endif /* !UNICODE */

WINADVAPI void WINAPI BuildTrusteeWithObjectsAndSidA(
    PTRUSTEE_A pTrustee,
    POBJECTS_AND_SID pObjSid,
    GUID *pObjectGuid,
    GUID *pInheritedObjectGuid,
    PSID pSid
);
WINADVAPI void WINAPI BuildTrusteeWithObjectsAndSidW(
    PTRUSTEE_W pTrustee,
    POBJECTS_AND_SID pObjSid,
    GUID *pObjectGuid,
    GUID *pInheritedObjectGuid,
    PSID pSid
);
#ifdef UNICODE
#define BuildTrusteeWithObjectsAndSid  BuildTrusteeWithObjectsAndSidW
#else /* !UNICODE */
#define BuildTrusteeWithObjectsAndSid  BuildTrusteeWithObjectsAndSidA
#endif /* !UNICODE */

WINADVAPI void WINAPI BuildTrusteeWithObjectsAndNameA(
    PTRUSTEE_A pTrustee,
    POBJECTS_AND_NAME_A pObjName,
    SE_OBJECT_TYPE ObjectType,
    LPSTR ObjectTypeName,
    LPSTR InheritedObjectTypeName,
    LPSTR Name
);
WINADVAPI void WINAPI BuildTrusteeWithObjectsAndNameW(
    PTRUSTEE_W pTrustee,
    POBJECTS_AND_NAME_W pObjName,
    SE_OBJECT_TYPE ObjectType,
    LPWSTR ObjectTypeName,
    LPWSTR InheritedObjectTypeName,
    LPWSTR Name
);
#ifdef UNICODE
#define BuildTrusteeWithObjectsAndName  BuildTrusteeWithObjectsAndNameW
#else /* !UNICODE */
#define BuildTrusteeWithObjectsAndName  BuildTrusteeWithObjectsAndNameA
#endif /* !UNICODE */

WINADVAPI LPSTR WINAPI GetTrusteeNameA(
    PTRUSTEE_A pTrustee
);
WINADVAPI LPWSTR WINAPI GetTrusteeNameW(
    PTRUSTEE_W pTrustee
);
#ifdef UNICODE
#define GetTrusteeName  GetTrusteeNameW
#else /* !UNICODE */
#define GetTrusteeName  GetTrusteeNameA
#endif /* !UNICODE */

WINADVAPI TRUSTEE_TYPE WINAPI GetTrusteeTypeA(
    PTRUSTEE_A pTrustee
);
WINADVAPI TRUSTEE_TYPE WINAPI GetTrusteeTypeW(
    PTRUSTEE_W pTrustee
);
#ifdef UNICODE
#define GetTrusteeType  GetTrusteeTypeW
#else /* !UNICODE */
#define GetTrusteeType  GetTrusteeTypeA
#endif /* !UNICODE */

WINADVAPI TRUSTEE_FORM WINAPI GetTrusteeFormA(
    PTRUSTEE_A pTrustee
);
WINADVAPI TRUSTEE_FORM WINAPI GetTrusteeFormW(
    PTRUSTEE_W pTrustee
);
#ifdef UNICODE
#define GetTrusteeForm  GetTrusteeFormW
#else /* !UNICODE */
#define GetTrusteeForm  GetTrusteeFormA
#endif /* !UNICODE */

WINADVAPI MULTIPLE_TRUSTEE_OPERATION WINAPI GetMultipleTrusteeOperationA(
    PTRUSTEE_A pTrustee
);
WINADVAPI MULTIPLE_TRUSTEE_OPERATION WINAPI GetMultipleTrusteeOperationW(
    PTRUSTEE_W pTrustee
);
#ifdef UNICODE
#define GetMultipleTrusteeOperation  GetMultipleTrusteeOperationW
#else /* !UNICODE */
#define GetMultipleTrusteeOperation  GetMultipleTrusteeOperationA
#endif /* !UNICODE */

WINADVAPI PTRUSTEE_A WINAPI GetMultipleTrusteeA(
    PTRUSTEE_A pTrustee
);
WINADVAPI PTRUSTEE_W WINAPI GetMultipleTrusteeW(
    PTRUSTEE_W pTrustee
);
#ifdef UNICODE
#define GetMultipleTrustee  GetMultipleTrusteeW
#else /* !UNICODE */
#define GetMultipleTrustee  GetMultipleTrusteeA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#define AccProvInit(err)

#endif /* _ACLAPI_H */
