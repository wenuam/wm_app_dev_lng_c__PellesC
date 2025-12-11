#ifndef _SDDL_H
#define _SDDL_H

#if __POCC__ >= 500
#pragma once
#endif

/* Security Descriptor Definition Language (SDDL) definitions */

#include <apiset.h>
#include <apisetcconv.h>

#ifdef _CONTRACT_GEN
#include <minwindef.h>
#endif

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

#define SDDL_REVISION_1     1
#define SDDL_REVISION       SDDL_REVISION_1

#define SDDL_OWNER                          TEXT("O")
#define SDDL_GROUP                          TEXT("G")
#define SDDL_DACL                           TEXT("D")
#define SDDL_SACL                           TEXT("S")

#define SDDL_PROTECTED                      TEXT("P")
#define SDDL_AUTO_INHERIT_REQ               TEXT("AR")
#define SDDL_AUTO_INHERITED                 TEXT("AI")
#define SDDL_NULL_ACL                       TEXT("NO_ACCESS_CONTROL")

#define SDDL_ACCESS_ALLOWED                 TEXT("A")
#define SDDL_ACCESS_DENIED                  TEXT("D")
#define SDDL_OBJECT_ACCESS_ALLOWED          TEXT("OA")
#define SDDL_OBJECT_ACCESS_DENIED           TEXT("OD")
#define SDDL_AUDIT                          TEXT("AU")
#define SDDL_ALARM                          TEXT("AL")
#define SDDL_OBJECT_AUDIT                   TEXT("OU")
#define SDDL_OBJECT_ALARM                   TEXT("OL")
#define SDDL_MANDATORY_LABEL                TEXT("ML")
#define SDDL_PROCESS_TRUST_LABEL            TEXT("TL")
#define SDDL_CALLBACK_ACCESS_ALLOWED        TEXT("XA")
#define SDDL_CALLBACK_ACCESS_DENIED         TEXT("XD")
#define SDDL_RESOURCE_ATTRIBUTE             TEXT("RA")
#define SDDL_SCOPED_POLICY_ID               TEXT("SP")
#define SDDL_CALLBACK_AUDIT                 TEXT("XU")
#define SDDL_CALLBACK_OBJECT_ACCESS_ALLOWED TEXT("ZA")
#define SDDL_ACCESS_FILTER                  TEXT("FL")

#define SDDL_INT                            TEXT("TI")
#define SDDL_UINT                           TEXT("TU")
#define SDDL_WSTRING                        TEXT("TS")
#define SDDL_SID                            TEXT("TD")
#define SDDL_BLOB                           TEXT("TX")
#define SDDL_BOOLEAN                        TEXT("TB")

#define SDDL_CONTAINER_INHERIT              TEXT("CI")
#define SDDL_OBJECT_INHERIT                 TEXT("OI")
#define SDDL_NO_PROPAGATE                   TEXT("NP")
#define SDDL_INHERIT_ONLY                   TEXT("IO")
#define SDDL_INHERITED                      TEXT("ID")
#define SDDL_CRITICAL                       TEXT("CR")
#define SDDL_TRUST_PROTECTED_FILTER         TEXT("TP")
#define SDDL_AUDIT_SUCCESS                  TEXT("SA")
#define SDDL_AUDIT_FAILURE                  TEXT("FA")

#define SDDL_READ_PROPERTY                  TEXT("RP")
#define SDDL_WRITE_PROPERTY                 TEXT("WP")
#define SDDL_CREATE_CHILD                   TEXT("CC")
#define SDDL_DELETE_CHILD                   TEXT("DC")
#define SDDL_LIST_CHILDREN                  TEXT("LC")
#define SDDL_SELF_WRITE                     TEXT("SW")
#define SDDL_LIST_OBJECT                    TEXT("LO")
#define SDDL_DELETE_TREE                    TEXT("DT")
#define SDDL_CONTROL_ACCESS                 TEXT("CR")
#define SDDL_READ_CONTROL                   TEXT("RC")
#define SDDL_WRITE_DAC                      TEXT("WD")
#define SDDL_WRITE_OWNER                    TEXT("WO")
#define SDDL_STANDARD_DELETE                TEXT("SD")
#define SDDL_GENERIC_ALL                    TEXT("GA")
#define SDDL_GENERIC_READ                   TEXT("GR")
#define SDDL_GENERIC_WRITE                  TEXT("GW")
#define SDDL_GENERIC_EXECUTE                TEXT("GX")
#define SDDL_FILE_ALL                       TEXT("FA")
#define SDDL_FILE_READ                      TEXT("FR")
#define SDDL_FILE_WRITE                     TEXT("FW")
#define SDDL_FILE_EXECUTE                   TEXT("FX")
#define SDDL_KEY_ALL                        TEXT("KA")
#define SDDL_KEY_READ                       TEXT("KR")
#define SDDL_KEY_WRITE                      TEXT("KW")
#define SDDL_KEY_EXECUTE                    TEXT("KX")
#define SDDL_NO_WRITE_UP                    TEXT("NW")
#define SDDL_NO_READ_UP                     TEXT("NR")
#define SDDL_NO_EXECUTE_UP                  TEXT("NX")

#define SDDL_ALIAS_SIZE                     2

#define SDDL_DOMAIN_ADMINISTRATORS          TEXT("DA")
#define SDDL_DOMAIN_GUESTS                  TEXT("DG")
#define SDDL_DOMAIN_USERS                   TEXT("DU")
#define SDDL_ENTERPRISE_DOMAIN_CONTROLLERS  TEXT("ED")
#define SDDL_DOMAIN_DOMAIN_CONTROLLERS      TEXT("DD")
#define SDDL_DOMAIN_COMPUTERS               TEXT("DC")
#define SDDL_BUILTIN_ADMINISTRATORS         TEXT("BA")
#define SDDL_BUILTIN_GUESTS                 TEXT("BG")
#define SDDL_BUILTIN_USERS                  TEXT("BU")
#define SDDL_LOCAL_ADMIN                    TEXT("LA")
#define SDDL_LOCAL_GUEST                    TEXT("LG")
#define SDDL_ACCOUNT_OPERATORS              TEXT("AO")
#define SDDL_BACKUP_OPERATORS               TEXT("BO")
#define SDDL_PRINTER_OPERATORS              TEXT("PO")
#define SDDL_SERVER_OPERATORS               TEXT("SO")
#define SDDL_AUTHENTICATED_USERS            TEXT("AU")
#define SDDL_PERSONAL_SELF                  TEXT("PS")
#define SDDL_CREATOR_OWNER                  TEXT("CO")
#define SDDL_CREATOR_GROUP                  TEXT("CG")
#define SDDL_LOCAL_SYSTEM                   TEXT("SY")
#define SDDL_POWER_USERS                    TEXT("PU")
#define SDDL_EVERYONE                       TEXT("WD")
#define SDDL_REPLICATOR                     TEXT("RE")
#define SDDL_INTERACTIVE                    TEXT("IU")
#define SDDL_NETWORK                        TEXT("NU")
#define SDDL_SERVICE                        TEXT("SU")
#define SDDL_RESTRICTED_CODE                TEXT("RC")
#define SDDL_WRITE_RESTRICTED_CODE          TEXT("WR")
#define SDDL_ANONYMOUS                      TEXT("AN")
#define SDDL_SCHEMA_ADMINISTRATORS          TEXT("SA")
#define SDDL_CERT_SERV_ADMINISTRATORS       TEXT("CA")
#define SDDL_RAS_SERVERS                    TEXT("RS")
#define SDDL_ENTERPRISE_ADMINS              TEXT("EA")
#define SDDL_GROUP_POLICY_ADMINS            TEXT("PA")
#define SDDL_ALIAS_PREW2KCOMPACC            TEXT("RU")
#define SDDL_LOCAL_SERVICE                  TEXT("LS")
#define SDDL_NETWORK_SERVICE                TEXT("NS")
#define SDDL_REMOTE_DESKTOP                 TEXT("RD")
#define SDDL_NETWORK_CONFIGURATION_OPS      TEXT("NO")
#define SDDL_PERFMON_USERS                  TEXT("MU")
#define SDDL_PERFLOG_USERS                  TEXT("LU")
#define SDDL_IIS_USERS                      TEXT("IS")
#define SDDL_CRYPTO_OPERATORS               TEXT("CY")
#define SDDL_OWNER_RIGHTS                   TEXT("OW")
#define SDDL_EVENT_LOG_READERS              TEXT("ER")
#define SDDL_ENTERPRISE_RO_DCs              TEXT("RO")
#define SDDL_CERTSVC_DCOM_ACCESS            TEXT("CD")
#define SDDL_ALL_APP_PACKAGES               TEXT("AC")
#define SDDL_RDS_REMOTE_ACCESS_SERVERS      TEXT("RA")
#define SDDL_RDS_ENDPOINT_SERVERS           TEXT("ES")
#define SDDL_RDS_MANAGEMENT_SERVERS         TEXT("MS")
#define SDDL_USER_MODE_DRIVERS              TEXT("UD")
#define SDDL_HYPER_V_ADMINS                 TEXT("HA")
#define SDDL_CLONEABLE_CONTROLLERS          TEXT("CN")
#define SDDL_ACCESS_CONTROL_ASSISTANCE_OPS  TEXT("AA")
#define SDDL_REMOTE_MANAGEMENT_USERS        TEXT("RM")
#define SDDL_AUTHORITY_ASSERTED             TEXT("AS")
#define SDDL_SERVICE_ASSERTED               TEXT("SS")
#define SDDL_PROTECTED_USERS                TEXT("AP")
#define SDDL_KEY_ADMINS                     TEXT("KA")
#define SDDL_ENTERPRISE_KEY_ADMINS          TEXT("EK")

#define SDDL_ML_LOW                         TEXT("LW")
#define SDDL_ML_MEDIUM                      TEXT("ME")
#define SDDL_ML_MEDIUM_PLUS                 TEXT("MP")
#define SDDL_ML_HIGH                        TEXT("HI")
#define SDDL_ML_SYSTEM                      TEXT("SI")

#define SDDL_SEPERATORC                           TEXT(';')
#define SDDL_DELIMINATORC                         TEXT(':')
#define SDDL_ACE_BEGINC                           TEXT('(')
#define SDDL_ACE_ENDC                             TEXT(')')
#define SDDL_SPACEC                               TEXT(' ')
#define SDDL_ACE_COND_BEGINC                      TEXT('(')
#define SDDL_ACE_COND_ENDC                        TEXT(')')
#define SDDL_ACE_COND_STRING_BEGINC               TEXT('"')
#define SDDL_ACE_COND_STRING_ENDC                 TEXT('"')
#define SDDL_ACE_COND_COMPOSITEVALUE_BEGINC       TEXT('{')
#define SDDL_ACE_COND_COMPOSITEVALUE_ENDC         TEXT('}')
#define SDDL_ACE_COND_COMPOSITEVALUE_SEPERATORC   TEXT(',')
#define SDDL_ACE_COND_BLOB_PREFIXC                TEXT('#')
#define SDDL_ACE_COND_SID_BEGINC                  TEXT('(')
#define SDDL_ACE_COND_SID_ENDC                    TEXT(')')

#define SDDL_SEPERATOR                            TEXT(";")
#define SDDL_DELIMINATOR                          TEXT(":")
#define SDDL_ACE_BEGIN                            TEXT("(")
#define SDDL_ACE_END                              TEXT(")")
#define SDDL_ACE_COND_BEGIN                       TEXT("(")
#define SDDL_ACE_COND_END                         TEXT(")")
#define SDDL_SPACE                                TEXT(" ")
#define SDDL_ACE_COND_BLOB_PREFIX                 TEXT("#")
#define SDDL_ACE_COND_SID_PREFIX                  TEXT("SID")
#define SDDL_ACE_COND_ATTRIBUTE_PREFIX            TEXT("@")
#define SDDL_ACE_COND_USER_ATTRIBUTE_PREFIX       TEXT("@USER.")
#define SDDL_ACE_COND_RESOURCE_ATTRIBUTE_PREFIX   TEXT("@RESOURCE.")
#define SDDL_ACE_COND_DEVICE_ATTRIBUTE_PREFIX     TEXT("@DEVICE.")
#define SDDL_ACE_COND_TOKEN_ATTRIBUTE_PREFIX      TEXT("@TOKEN.")

#if !defined(_NTDDK_)

#if (_WIN32_WINNT >= 0x0500)

BOOL WINAPI ConvertSidToStringSidA(
    PSID Sid,
    LPSTR *StringSid
);
BOOL WINAPI ConvertSidToStringSidW(
    PSID Sid,
    LPWSTR *StringSid
);
#ifdef UNICODE
#define ConvertSidToStringSid  ConvertSidToStringSidW
#else /* !UNICODE */
#define ConvertSidToStringSid  ConvertSidToStringSidA
#endif /* !UNICODE */

BOOL WINAPI ConvertStringSidToSidA(
    LPCSTR StringSid,
    PSID *Sid
);
BOOL WINAPI ConvertStringSidToSidW(
    LPCWSTR StringSid,
    PSID *Sid
);
#ifdef UNICODE
#define ConvertStringSidToSid  ConvertStringSidToSidW
#else /* !UNICODE */
#define ConvertStringSidToSid  ConvertStringSidToSidA
#endif /* !UNICODE */

BOOL WINAPI ConvertStringSecurityDescriptorToSecurityDescriptorA(
    LPCSTR StringSecurityDescriptor,
    DWORD StringSDRevision,
    PSECURITY_DESCRIPTOR *SecurityDescriptor,
    PULONG SecurityDescriptorSize
);
BOOL WINAPI ConvertStringSecurityDescriptorToSecurityDescriptorW(
    LPCWSTR StringSecurityDescriptor,
    DWORD StringSDRevision,
    PSECURITY_DESCRIPTOR * SecurityDescriptor,
    PULONG SecurityDescriptorSize
);
#ifdef UNICODE
#define ConvertStringSecurityDescriptorToSecurityDescriptor \
    ConvertStringSecurityDescriptorToSecurityDescriptorW
#else /* !UNICODE */
#define ConvertStringSecurityDescriptorToSecurityDescriptor \
    ConvertStringSecurityDescriptorToSecurityDescriptorA
#endif /* !UNICODE */

BOOL WINAPI ConvertSecurityDescriptorToStringSecurityDescriptorA(
    PSECURITY_DESCRIPTOR SecurityDescriptor,
    DWORD RequestedStringSDRevision,
    SECURITY_INFORMATION SecurityInformation,
    LPSTR *StringSecurityDescriptor,
    PULONG StringSecurityDescriptorLen
);

BOOL WINAPI ConvertSecurityDescriptorToStringSecurityDescriptorW(
    PSECURITY_DESCRIPTOR SecurityDescriptor,
    DWORD RequestedStringSDRevision,
    SECURITY_INFORMATION SecurityInformation,
    LPWSTR * StringSecurityDescriptor,
    PULONG StringSecurityDescriptorLen
);
#ifdef UNICODE
#define ConvertSecurityDescriptorToStringSecurityDescriptor \
    ConvertSecurityDescriptorToStringSecurityDescriptorW
#else /* !UNICODE */
#define ConvertSecurityDescriptorToStringSecurityDescriptor \
    ConvertSecurityDescriptorToStringSecurityDescriptorA
#endif /* !UNICODE */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#endif /* _WIN32_WINNT >=  0x0500 */

#endif /* !defined(_NTDDK_) */

#endif /* _SDDL_H */
