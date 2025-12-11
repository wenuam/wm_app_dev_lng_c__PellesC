#ifndef _WINFAX_H
#define _WINFAX_H

#if __POCC__ >= 500
#pragma once
#endif

/* Windows FAX API definitions */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#ifndef MIDL_PASS
#include <tapi.h>
#endif /* !MIDL_PASS */

#define WINFAXAPI  DECLSPEC_IMPORT

#define FAX_ERR_START                                   7001L

#define FAX_ERR_SRV_OUTOFMEMORY                         7001L
#define FAX_ERR_GROUP_NOT_FOUND                         7002L
#define FAX_ERR_BAD_GROUP_CONFIGURATION                 7003L
#define FAX_ERR_GROUP_IN_USE                            7004L
#define FAX_ERR_RULE_NOT_FOUND                          7005L
#define FAX_ERR_NOT_NTFS                                7006L
#define FAX_ERR_DIRECTORY_IN_USE                        7007L
#define FAX_ERR_FILE_ACCESS_DENIED                      7008L
#define FAX_ERR_MESSAGE_NOT_FOUND                       7009L
#define FAX_ERR_DEVICE_NUM_LIMIT_EXCEEDED               7010L
#define FAX_ERR_NOT_SUPPORTED_ON_THIS_SKU               7011L
#define FAX_ERR_VERSION_MISMATCH                        7012L
#define FAX_ERR_RECIPIENTS_LIMIT                        7013L

#define FAX_ERR_END                                     7013L

#define FAX_E_SRV_OUTOFMEMORY                MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, FAX_ERR_SRV_OUTOFMEMORY)
#define FAX_E_GROUP_NOT_FOUND                MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, FAX_ERR_GROUP_NOT_FOUND)
#define FAX_E_BAD_GROUP_CONFIGURATION        MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, FAX_ERR_BAD_GROUP_CONFIGURATION)
#define FAX_E_GROUP_IN_USE                   MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, FAX_ERR_GROUP_IN_USE)
#define FAX_E_RULE_NOT_FOUND                 MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, FAX_ERR_RULE_NOT_FOUND)
#define FAX_E_NOT_NTFS                       MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, FAX_ERR_NOT_NTFS)
#define FAX_E_DIRECTORY_IN_USE               MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, FAX_ERR_DIRECTORY_IN_USE)
#define FAX_E_FILE_ACCESS_DENIED             MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, FAX_ERR_FILE_ACCESS_DENIED)
#define FAX_E_MESSAGE_NOT_FOUND              MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, FAX_ERR_MESSAGE_NOT_FOUND)
#define FAX_E_DEVICE_NUM_LIMIT_EXCEEDED      MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, FAX_ERR_DEVICE_NUM_LIMIT_EXCEEDED)
#define FAX_E_NOT_SUPPORTED_ON_THIS_SKU      MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, FAX_ERR_NOT_SUPPORTED_ON_THIS_SKU)
#define FAX_E_VERSION_MISMATCH               MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, FAX_ERR_VERSION_MISMATCH)
#define FAX_E_RECIPIENTS_LIMIT               MAKE_HRESULT(SEVERITY_ERROR, FACILITY_ITF, FAX_ERR_RECIPIENTS_LIMIT)

typedef enum {
    FAXLOG_LEVEL_NONE = 0,
    FAXLOG_LEVEL_MIN,
    FAXLOG_LEVEL_MED,
    FAXLOG_LEVEL_MAX
} FAX_ENUM_LOG_LEVELS;

typedef enum {
    FAXLOG_CATEGORY_INIT = 1,
    FAXLOG_CATEGORY_OUTBOUND,
    FAXLOG_CATEGORY_INBOUND,
    FAXLOG_CATEGORY_UNKNOWN
} FAX_ENUM_LOG_CATEGORIES;

typedef struct _FAX_LOG_CATEGORYA {
    LPCSTR Name;
    DWORD Category;
    DWORD Level;
} FAX_LOG_CATEGORYA, *PFAX_LOG_CATEGORYA;
typedef struct _FAX_LOG_CATEGORYW {
    LPCWSTR Name;
    DWORD Category;
    DWORD Level;
} FAX_LOG_CATEGORYW, *PFAX_LOG_CATEGORYW;
#ifdef UNICODE
typedef FAX_LOG_CATEGORYW FAX_LOG_CATEGORY;
typedef PFAX_LOG_CATEGORYW PFAX_LOG_CATEGORY;
#else /* !UNICODE */
typedef FAX_LOG_CATEGORYA FAX_LOG_CATEGORY;
typedef PFAX_LOG_CATEGORYA PFAX_LOG_CATEGORY;
#endif /* !UNICODE */

typedef struct _FAX_TIME {
    WORD Hour;
    WORD Minute;
} FAX_TIME, *PFAX_TIME;

typedef struct _FAX_CONFIGURATIONA {
    DWORD SizeOfStruct;
    DWORD Retries;
    DWORD RetryDelay;
    DWORD DirtyDays;
    BOOL Branding;
    BOOL UseDeviceTsid;
    BOOL ServerCp;
    BOOL PauseServerQueue;
    FAX_TIME StartCheapTime;
    FAX_TIME StopCheapTime;
    BOOL ArchiveOutgoingFaxes;
    LPCSTR ArchiveDirectory;
    LPCSTR Reserved;
} FAX_CONFIGURATIONA, *PFAX_CONFIGURATIONA;
typedef struct _FAX_CONFIGURATIONW {
    DWORD SizeOfStruct;
    DWORD Retries;
    DWORD RetryDelay;
    DWORD DirtyDays;
    BOOL Branding;
    BOOL UseDeviceTsid;
    BOOL ServerCp;
    BOOL PauseServerQueue;
    FAX_TIME StartCheapTime;
    FAX_TIME StopCheapTime;
    BOOL ArchiveOutgoingFaxes;
    LPCWSTR ArchiveDirectory;
    LPCWSTR Reserved;
} FAX_CONFIGURATIONW, *PFAX_CONFIGURATIONW;
#ifdef UNICODE
typedef FAX_CONFIGURATIONW FAX_CONFIGURATION;
typedef PFAX_CONFIGURATIONW PFAX_CONFIGURATION;
#else /* !UNICODE */
typedef FAX_CONFIGURATIONA FAX_CONFIGURATION;
typedef PFAX_CONFIGURATIONA PFAX_CONFIGURATION;
#endif /* !UNICODE */

typedef enum {
    JC_UNKNOWN = 0,
    JC_DELETE,
    JC_PAUSE,
    JC_RESUME
} FAX_ENUM_JOB_COMMANDS;

#define JC_RESTART  JC_RESUME

#define JT_UNKNOWN                  0
#define JT_SEND                     1
#define JT_RECEIVE                  2
#define JT_ROUTING                  3
#define JT_FAIL_RECEIVE             4

#define JS_PENDING                  0x00000000
#define JS_INPROGRESS               0x00000001
#define JS_DELETING                 0x00000002
#define JS_FAILED                   0x00000004
#define JS_PAUSED                   0x00000008
#define JS_NOLINE                   0x00000010
#define JS_RETRYING                 0x00000020
#define JS_RETRIES_EXCEEDED         0x00000040

typedef struct _FAX_DEVICE_STATUSA {
    DWORD SizeOfStruct;
    LPCSTR CallerId;
    LPCSTR Csid;
    DWORD CurrentPage;
    DWORD DeviceId;
    LPCSTR DeviceName;
    LPCSTR DocumentName;
    DWORD JobType;
    LPCSTR PhoneNumber;
    LPCSTR RoutingString;
    LPCSTR SenderName;
    LPCSTR RecipientName;
    DWORD Size;
    FILETIME StartTime;
    DWORD Status;
    LPCSTR StatusString;
    FILETIME SubmittedTime;
    DWORD TotalPages;
    LPCSTR Tsid;
    LPCSTR UserName;
} FAX_DEVICE_STATUSA, *PFAX_DEVICE_STATUSA;
typedef struct _FAX_DEVICE_STATUSW {
    DWORD SizeOfStruct;
    LPCWSTR CallerId;
    LPCWSTR Csid;
    DWORD CurrentPage;
    DWORD DeviceId;
    LPCWSTR DeviceName;
    LPCWSTR DocumentName;
    DWORD JobType;
    LPCWSTR PhoneNumber;
    LPCWSTR RoutingString;
    LPCWSTR SenderName;
    LPCWSTR RecipientName;
    DWORD Size;
    FILETIME StartTime;
    DWORD Status;
    LPCWSTR StatusString;
    FILETIME SubmittedTime;
    DWORD TotalPages;
    LPCWSTR Tsid;
    LPCWSTR UserName;
} FAX_DEVICE_STATUSW, *PFAX_DEVICE_STATUSW;
#ifdef UNICODE
typedef FAX_DEVICE_STATUSW FAX_DEVICE_STATUS;
typedef PFAX_DEVICE_STATUSW PFAX_DEVICE_STATUS;
#else /* !UNICODE */
typedef FAX_DEVICE_STATUSA FAX_DEVICE_STATUS;
typedef PFAX_DEVICE_STATUSA PFAX_DEVICE_STATUS;
#endif /* !UNICODE */

typedef struct _FAX_JOB_ENTRYA {
    DWORD SizeOfStruct;
    DWORD JobId;
    LPCSTR UserName;
    DWORD JobType;
    DWORD QueueStatus;
    DWORD Status;
    DWORD Size;
    DWORD PageCount;
    LPCSTR RecipientNumber;
    LPCSTR RecipientName;
    LPCSTR Tsid;
    LPCSTR SenderName;
    LPCSTR SenderCompany;
    LPCSTR SenderDept;
    LPCSTR BillingCode;
    DWORD ScheduleAction;
    SYSTEMTIME ScheduleTime;
    DWORD DeliveryReportType;
    LPCSTR DeliveryReportAddress;
    LPCSTR DocumentName;
} FAX_JOB_ENTRYA, *PFAX_JOB_ENTRYA;
typedef struct _FAX_JOB_ENTRYW {
    DWORD SizeOfStruct;
    DWORD JobId;
    LPCWSTR UserName;
    DWORD JobType;
    DWORD QueueStatus;
    DWORD Status;
    DWORD Size;
    DWORD PageCount;
    LPCWSTR RecipientNumber;
    LPCWSTR RecipientName;
    LPCWSTR Tsid;
    LPCWSTR SenderName;
    LPCWSTR SenderCompany;
    LPCWSTR SenderDept;
    LPCWSTR BillingCode;
    DWORD ScheduleAction;
    SYSTEMTIME ScheduleTime;
    DWORD DeliveryReportType;
    LPCWSTR DeliveryReportAddress;
    LPCWSTR DocumentName;
} FAX_JOB_ENTRYW, *PFAX_JOB_ENTRYW;
#ifdef UNICODE
typedef FAX_JOB_ENTRYW FAX_JOB_ENTRY;
typedef PFAX_JOB_ENTRYW PFAX_JOB_ENTRY;
#else /* !UNICODE */
typedef FAX_JOB_ENTRYA FAX_JOB_ENTRY;
typedef PFAX_JOB_ENTRYA PFAX_JOB_ENTRY;
#endif /* !UNICODE */

#define FPS_DIALING              0x20000001
#define FPS_SENDING              0x20000002
#define FPS_RECEIVING            0x20000004
#define FPS_COMPLETED            0x20000008
#define FPS_HANDLED              0x20000010
#define FPS_UNAVAILABLE          0x20000020
#define FPS_BUSY                 0x20000040
#define FPS_NO_ANSWER            0x20000080
#define FPS_BAD_ADDRESS          0x20000100
#define FPS_NO_DIAL_TONE         0x20000200
#define FPS_DISCONNECTED         0x20000400
#define FPS_FATAL_ERROR          0x20000800
#define FPS_NOT_FAX_CALL         0x20001000
#define FPS_CALL_DELAYED         0x20002000
#define FPS_CALL_BLACKLISTED     0x20004000
#define FPS_INITIALIZING         0x20008000
#define FPS_OFFLINE              0x20010000
#define FPS_RINGING              0x20020000

#define FPS_AVAILABLE            0x20100000
#define FPS_ABORTING             0x20200000
#define FPS_ROUTING              0x20400000
#define FPS_ANSWERED             0x20800000

#define FPF_RECEIVE       0x00000001
#define FPF_SEND          0x00000002
#define FPF_VIRTUAL       0x00000004

typedef struct _FAX_PORT_INFOA {
    DWORD SizeOfStruct;
    DWORD DeviceId;
    DWORD State;
    DWORD Flags;
    DWORD Rings;
    DWORD Priority;
    LPCSTR DeviceName;
    LPCSTR Tsid;
    LPCSTR Csid;
} FAX_PORT_INFOA, *PFAX_PORT_INFOA;
typedef struct _FAX_PORT_INFOW {
    DWORD SizeOfStruct;
    DWORD DeviceId;
    DWORD State;
    DWORD Flags;
    DWORD Rings;
    DWORD Priority;
    LPCWSTR DeviceName;
    LPCWSTR Tsid;
    LPCWSTR Csid;
} FAX_PORT_INFOW, *PFAX_PORT_INFOW;
#ifdef UNICODE
typedef FAX_PORT_INFOW FAX_PORT_INFO;
typedef PFAX_PORT_INFOW PFAX_PORT_INFO;
#else /* !UNICODE */
typedef FAX_PORT_INFOA FAX_PORT_INFO;
typedef PFAX_PORT_INFOA PFAX_PORT_INFO;
#endif /* !UNICODE */

typedef struct _FAX_ROUTING_METHODA {
    DWORD SizeOfStruct;
    DWORD DeviceId;
    BOOL Enabled;
    LPCSTR DeviceName;
    LPCSTR Guid;
    LPCSTR FriendlyName;
    LPCSTR FunctionName;
    LPCSTR ExtensionImageName;
    LPCSTR ExtensionFriendlyName;
} FAX_ROUTING_METHODA, *PFAX_ROUTING_METHODA;
typedef struct _FAX_ROUTING_METHODW {
    DWORD SizeOfStruct;
    DWORD DeviceId;
    BOOL Enabled;
    LPCWSTR DeviceName;
    LPCWSTR Guid;
    LPCWSTR FriendlyName;
    LPCWSTR FunctionName;
    LPCWSTR ExtensionImageName;
    LPCWSTR ExtensionFriendlyName;
} FAX_ROUTING_METHODW, *PFAX_ROUTING_METHODW;
#ifdef UNICODE
typedef FAX_ROUTING_METHODW FAX_ROUTING_METHOD;
typedef PFAX_ROUTING_METHODW PFAX_ROUTING_METHOD;
#else /* !UNICODE */
typedef FAX_ROUTING_METHODA FAX_ROUTING_METHOD;
typedef PFAX_ROUTING_METHODA PFAX_ROUTING_METHOD;
#endif /* !UNICODE */

typedef struct _FAX_GLOBAL_ROUTING_INFOA {
    DWORD SizeOfStruct;
    DWORD Priority;
    LPCSTR Guid;
    LPCSTR FriendlyName;
    LPCSTR FunctionName;
    LPCSTR ExtensionImageName;
    LPCSTR ExtensionFriendlyName;
} FAX_GLOBAL_ROUTING_INFOA, *PFAX_GLOBAL_ROUTING_INFOA;
typedef struct _FAX_GLOBAL_ROUTING_INFOW {
    DWORD SizeOfStruct;
    DWORD Priority;
    LPCWSTR Guid;
    LPCWSTR FriendlyName;
    LPCWSTR FunctionName;
    LPCWSTR ExtensionImageName;
    LPCWSTR ExtensionFriendlyName;
} FAX_GLOBAL_ROUTING_INFOW, *PFAX_GLOBAL_ROUTING_INFOW;
#ifdef UNICODE
typedef FAX_GLOBAL_ROUTING_INFOW FAX_GLOBAL_ROUTING_INFO;
typedef PFAX_GLOBAL_ROUTING_INFOW PFAX_GLOBAL_ROUTING_INFO;
#else /* !UNICODE */
typedef FAX_GLOBAL_ROUTING_INFOA FAX_GLOBAL_ROUTING_INFO;
typedef PFAX_GLOBAL_ROUTING_INFOA PFAX_GLOBAL_ROUTING_INFO;
#endif /* !UNICODE */

typedef struct _FAX_COVERPAGE_INFOA {
    DWORD SizeOfStruct;
    LPCSTR CoverPageName;
    BOOL UseServerCoverPage;
    LPCSTR RecName;
    LPCSTR RecFaxNumber;
    LPCSTR RecCompany;
    LPCSTR RecStreetAddress;
    LPCSTR RecCity;
    LPCSTR RecState;
    LPCSTR RecZip;
    LPCSTR RecCountry;
    LPCSTR RecTitle;
    LPCSTR RecDepartment;
    LPCSTR RecOfficeLocation;
    LPCSTR RecHomePhone;
    LPCSTR RecOfficePhone;
    LPCSTR SdrName;
    LPCSTR SdrFaxNumber;
    LPCSTR SdrCompany;
    LPCSTR SdrAddress;
    LPCSTR SdrTitle;
    LPCSTR SdrDepartment;
    LPCSTR SdrOfficeLocation;
    LPCSTR SdrHomePhone;
    LPCSTR SdrOfficePhone;
    LPCSTR Note;
    LPCSTR Subject;
    SYSTEMTIME TimeSent;
    DWORD PageCount;
} FAX_COVERPAGE_INFOA, *PFAX_COVERPAGE_INFOA;
typedef struct _FAX_COVERPAGE_INFOW {
    DWORD SizeOfStruct;
    LPCWSTR CoverPageName;
    BOOL UseServerCoverPage;
    LPCWSTR RecName;
    LPCWSTR RecFaxNumber;
    LPCWSTR RecCompany;
    LPCWSTR RecStreetAddress;
    LPCWSTR RecCity;
    LPCWSTR RecState;
    LPCWSTR RecZip;
    LPCWSTR RecCountry;
    LPCWSTR RecTitle;
    LPCWSTR RecDepartment;
    LPCWSTR RecOfficeLocation;
    LPCWSTR RecHomePhone;
    LPCWSTR RecOfficePhone;
    LPCWSTR SdrName;
    LPCWSTR SdrFaxNumber;
    LPCWSTR SdrCompany;
    LPCWSTR SdrAddress;
    LPCWSTR SdrTitle;
    LPCWSTR SdrDepartment;
    LPCWSTR SdrOfficeLocation;
    LPCWSTR SdrHomePhone;
    LPCWSTR SdrOfficePhone;
    LPCWSTR Note;
    LPCWSTR Subject;
    SYSTEMTIME TimeSent;
    DWORD PageCount;
} FAX_COVERPAGE_INFOW, *PFAX_COVERPAGE_INFOW;
#ifdef UNICODE
typedef FAX_COVERPAGE_INFOW FAX_COVERPAGE_INFO;
typedef PFAX_COVERPAGE_INFOW PFAX_COVERPAGE_INFO;
#else /* !UNICODE */
typedef FAX_COVERPAGE_INFOA FAX_COVERPAGE_INFO;
typedef PFAX_COVERPAGE_INFOA PFAX_COVERPAGE_INFO;
#endif /* !UNICODE */

typedef enum {
    JSA_NOW = 0,
    JSA_SPECIFIC_TIME,
    JSA_DISCOUNT_PERIOD
} FAX_ENUM_JOB_SEND_ATTRIBUTES;

#ifndef _FAXAPIP_

typedef enum {
    DRT_NONE = 0x0000,
    DRT_EMAIL = 0x0001,
    DRT_INBOX = 0x0002
} FAX_ENUM_DELIVERY_REPORT_TYPES;

#endif /* _FAXAPIP_ */

typedef struct _FAX_JOB_PARAMA {
    DWORD SizeOfStruct;
    LPCSTR RecipientNumber;
    LPCSTR RecipientName;
    LPCSTR Tsid;
    LPCSTR SenderName;
    LPCSTR SenderCompany;
    LPCSTR SenderDept;
    LPCSTR BillingCode;
    DWORD ScheduleAction;
    SYSTEMTIME ScheduleTime;
    DWORD DeliveryReportType;
    LPCSTR DeliveryReportAddress;
    LPCSTR DocumentName;
    HCALL CallHandle;
    DWORD_PTR Reserved[3];
} FAX_JOB_PARAMA, *PFAX_JOB_PARAMA;
typedef struct _FAX_JOB_PARAMW {
    DWORD SizeOfStruct;
    LPCWSTR RecipientNumber;
    LPCWSTR RecipientName;
    LPCWSTR Tsid;
    LPCWSTR SenderName;
    LPCWSTR SenderCompany;
    LPCWSTR SenderDept;
    LPCWSTR BillingCode;
    DWORD ScheduleAction;
    SYSTEMTIME ScheduleTime;
    DWORD DeliveryReportType;
    LPCWSTR DeliveryReportAddress;
    LPCWSTR DocumentName;
    HCALL CallHandle;
    DWORD_PTR Reserved[3];
} FAX_JOB_PARAMW, *PFAX_JOB_PARAMW;
#ifdef UNICODE
typedef FAX_JOB_PARAMW FAX_JOB_PARAM;
typedef PFAX_JOB_PARAMW PFAX_JOB_PARAM;
#else /* !UNICODE */
typedef FAX_JOB_PARAMA FAX_JOB_PARAM;
typedef PFAX_JOB_PARAMA PFAX_JOB_PARAM;
#endif /* !UNICODE */

#define FEI_DIALING                 0x00000001
#define FEI_SENDING                 0x00000002
#define FEI_RECEIVING               0x00000003
#define FEI_COMPLETED               0x00000004
#define FEI_BUSY                    0x00000005
#define FEI_NO_ANSWER               0x00000006
#define FEI_BAD_ADDRESS             0x00000007
#define FEI_NO_DIAL_TONE            0x00000008
#define FEI_DISCONNECTED            0x00000009
#define FEI_FATAL_ERROR             0x0000000a
#define FEI_NOT_FAX_CALL            0x0000000b
#define FEI_CALL_DELAYED            0x0000000c
#define FEI_CALL_BLACKLISTED        0x0000000d
#define FEI_RINGING                 0x0000000e
#define FEI_ABORTING                0x0000000f
#define FEI_ROUTING                 0x00000010
#define FEI_MODEM_POWERED_ON        0x00000011
#define FEI_MODEM_POWERED_OFF       0x00000012
#define FEI_IDLE                    0x00000013
#define FEI_FAXSVC_ENDED            0x00000014
#define FEI_ANSWERED                0x00000015
#define FEI_JOB_QUEUED              0x00000016
#define FEI_DELETED                 0x00000017
#define FEI_INITIALIZING            0x00000018
#define FEI_LINE_UNAVAILABLE        0x00000019
#define FEI_HANDLED                 0x0000001a
#define FEI_FAXSVC_STARTED          0x0000001b

#define FEI_NEVENTS                 FEI_FAXSVC_STARTED

typedef struct _FAX_EVENTA {
    DWORD SizeOfStruct;
    FILETIME TimeStamp;
    DWORD DeviceId;
    DWORD EventId;
    DWORD JobId;
} FAX_EVENTA, *PFAX_EVENTA;
typedef struct _FAX_EVENTW {
    DWORD SizeOfStruct;
    FILETIME TimeStamp;
    DWORD DeviceId;
    DWORD EventId;
    DWORD JobId;
} FAX_EVENTW, *PFAX_EVENTW;
#ifdef UNICODE
typedef FAX_EVENTW FAX_EVENT;
typedef PFAX_EVENTW PFAX_EVENT;
#else /* !UNICODE */
typedef FAX_EVENTA FAX_EVENT;
typedef PFAX_EVENTA PFAX_EVENT;
#endif /* !UNICODE */

typedef struct _FAX_PRINT_INFOA {
    DWORD SizeOfStruct;
    LPCSTR DocName;
    LPCSTR RecipientName;
    LPCSTR RecipientNumber;
    LPCSTR SenderName;
    LPCSTR SenderCompany;
    LPCSTR SenderDept;
    LPCSTR SenderBillingCode;
    LPCSTR Reserved;
    LPCSTR DrEmailAddress;
    LPCSTR OutputFileName;
} FAX_PRINT_INFOA, *PFAX_PRINT_INFOA;
typedef struct _FAX_PRINT_INFOW {
    DWORD SizeOfStruct;
    LPCWSTR DocName;
    LPCWSTR RecipientName;
    LPCWSTR RecipientNumber;
    LPCWSTR SenderName;
    LPCWSTR SenderCompany;
    LPCWSTR SenderDept;
    LPCWSTR SenderBillingCode;
    LPCWSTR Reserved;
    LPCWSTR DrEmailAddress;
    LPCWSTR OutputFileName;
} FAX_PRINT_INFOW, *PFAX_PRINT_INFOW;
#ifdef UNICODE
typedef FAX_PRINT_INFOW FAX_PRINT_INFO;
typedef PFAX_PRINT_INFOW PFAX_PRINT_INFO;
#else /* !UNICODE */
typedef FAX_PRINT_INFOA FAX_PRINT_INFO;
typedef PFAX_PRINT_INFOA PFAX_PRINT_INFO;
#endif /* !UNICODE */

typedef struct _FAX_CONTEXT_INFOA {
    DWORD SizeOfStruct;
    HDC hDC;
    CHAR ServerName[MAX_COMPUTERNAME_LENGTH + 1];
} FAX_CONTEXT_INFOA, *PFAX_CONTEXT_INFOA;
typedef struct _FAX_CONTEXT_INFOW {
    DWORD SizeOfStruct;
    HDC hDC;
    WCHAR ServerName[MAX_COMPUTERNAME_LENGTH + 1];
} FAX_CONTEXT_INFOW, *PFAX_CONTEXT_INFOW;
#ifdef UNICODE
typedef FAX_CONTEXT_INFOW FAX_CONTEXT_INFO;
typedef PFAX_CONTEXT_INFOW PFAX_CONTEXT_INFO;
#else /* !UNICODE */
typedef FAX_CONTEXT_INFOA FAX_CONTEXT_INFO;
typedef PFAX_CONTEXT_INFOA PFAX_CONTEXT_INFO;
#endif /* !UNICODE */

WINFAXAPI BOOL WINAPI FaxConnectFaxServerA(
    LPCSTR MachineName,
    LPHANDLE FaxHandle
);
WINFAXAPI BOOL WINAPI FaxConnectFaxServerW(
    LPCWSTR MachineName,
    LPHANDLE FaxHandle
);
#ifdef UNICODE
#define FaxConnectFaxServer  FaxConnectFaxServerW
#else /* !UNICODE */
#define FaxConnectFaxServer  FaxConnectFaxServerA
#endif /* !UNICODE */

typedef BOOL (WINAPI *PFAXCONNECTFAXSERVERA)(
    LPCSTR MachineName  ,
    LPHANDLE FaxHandle
);
typedef BOOL (WINAPI *PFAXCONNECTFAXSERVERW)(
    LPCWSTR MachineName  ,
    LPHANDLE FaxHandle
);
#ifdef UNICODE
#define PFAXCONNECTFAXSERVER  PFAXCONNECTFAXSERVERW
#else /* !UNICODE */
#define PFAXCONNECTFAXSERVER  PFAXCONNECTFAXSERVERA
#endif /* !UNICODE */

WINFAXAPI BOOL WINAPI FaxClose(
    HANDLE FaxHandle
);

typedef BOOL (WINAPI *PFAXCLOSE)(
    HANDLE FaxHandle
);

typedef enum { 
    PORT_OPEN_QUERY = 1,
    PORT_OPEN_MODIFY
} FAX_ENUM_PORT_OPEN_TYPE;

WINFAXAPI BOOL WINAPI FaxOpenPort(
    HANDLE FaxHandle,
    DWORD DeviceId,
    DWORD Flags,
    LPHANDLE FaxPortHandle
);

typedef BOOL (WINAPI *PFAXOPENPORT)(
    HANDLE FaxHandle,
    DWORD DeviceId,
    DWORD Flags,
    LPHANDLE FaxPortHandle
);

WINFAXAPI BOOL WINAPI FaxCompleteJobParamsA(
    PFAX_JOB_PARAMA *JobParams,
    PFAX_COVERPAGE_INFOA *CoverpageInfo
);
WINFAXAPI BOOL WINAPI FaxCompleteJobParamsW(
    PFAX_JOB_PARAMW *JobParams,
    PFAX_COVERPAGE_INFOW *CoverpageInfo
);
#ifdef UNICODE
#define FaxCompleteJobParams  FaxCompleteJobParamsW
#else /* !UNICODE */
#define FaxCompleteJobParams  FaxCompleteJobParamsA
#endif /* !UNICODE */

typedef BOOL (WINAPI *PFAXCOMPLETEJOBPARAMSA)(
    PFAX_JOB_PARAMA *JobParams,
    PFAX_COVERPAGE_INFOA *CoverpageInfo
);
typedef BOOL (WINAPI *PFAXCOMPLETEJOBPARAMSW)(
    PFAX_JOB_PARAMW *JobParams,
    PFAX_COVERPAGE_INFOW *CoverpageInfo
);
#ifdef UNICODE
#define PFAXCOMPLETEJOBPARAMS  PFAXCOMPLETEJOBPARAMSW
#else /* !UNICODE */
#define PFAXCOMPLETEJOBPARAMS  PFAXCOMPLETEJOBPARAMSA
#endif /* !UNICODE */

WINFAXAPI BOOL WINAPI FaxSendDocumentA(
    HANDLE FaxHandle,
    LPCSTR FileName,
    PFAX_JOB_PARAMA JobParams,
    const FAX_COVERPAGE_INFOA *CoverpageInfo,  
    LPDWORD FaxJobId  
);
WINFAXAPI BOOL WINAPI FaxSendDocumentW(
    HANDLE FaxHandle,
    LPCWSTR FileName,
    PFAX_JOB_PARAMW JobParams,
    const FAX_COVERPAGE_INFOW *CoverpageInfo,  
    LPDWORD FaxJobId  
);
#ifdef UNICODE
#define FaxSendDocument  FaxSendDocumentW
#else /* !UNICODE */
#define FaxSendDocument  FaxSendDocumentA
#endif /* !UNICODE */

typedef BOOL (WINAPI *PFAXSENDDOCUMENTA)(
    HANDLE FaxHandle,
    LPCSTR FileName,
    PFAX_JOB_PARAMA JobParams,
    const FAX_COVERPAGE_INFOA *CoverpageInfo,  
    LPDWORD FaxJobId  
);
typedef BOOL (WINAPI *PFAXSENDDOCUMENTW)(
    HANDLE FaxHandle,
    LPCWSTR FileName,
    PFAX_JOB_PARAMW JobParams,
    const FAX_COVERPAGE_INFOW *CoverpageInfo,  
    LPDWORD FaxJobId  
);
#ifdef UNICODE
#define PFAXSENDDOCUMENT  PFAXSENDDOCUMENTW
#else /* !UNICODE */
#define PFAXSENDDOCUMENT  PFAXSENDDOCUMENTA
#endif /* !UNICODE */

typedef BOOL (CALLBACK *PFAX_RECIPIENT_CALLBACKA)(
    HANDLE FaxHandle,
    DWORD RecipientNumber,
    LPVOID Context,
    PFAX_JOB_PARAMA JobParams,
    PFAX_COVERPAGE_INFOA CoverpageInfo  
);
typedef BOOL (CALLBACK *PFAX_RECIPIENT_CALLBACKW)(
    HANDLE FaxHandle,
    DWORD RecipientNumber,
    LPVOID Context,
    PFAX_JOB_PARAMW JobParams,
    PFAX_COVERPAGE_INFOW CoverpageInfo  
);
#ifdef UNICODE
#define PFAX_RECIPIENT_CALLBACK  PFAX_RECIPIENT_CALLBACKW
#else /* !UNICODE */
#define PFAX_RECIPIENT_CALLBACK  PFAX_RECIPIENT_CALLBACKA
#endif /* !UNICODE */

WINFAXAPI BOOL WINAPI FaxSendDocumentForBroadcastA(
    HANDLE FaxHandle,
    LPCSTR FileName,
    LPDWORD FaxJobId,
    PFAX_RECIPIENT_CALLBACKA FaxRecipientCallback,
    LPVOID Context
);
WINFAXAPI BOOL WINAPI FaxSendDocumentForBroadcastW(
    HANDLE FaxHandle,
    LPCWSTR FileName,
    LPDWORD FaxJobId,
    PFAX_RECIPIENT_CALLBACKW FaxRecipientCallback,
    LPVOID Context
);
#ifdef UNICODE
#define FaxSendDocumentForBroadcast  FaxSendDocumentForBroadcastW
#else /* !UNICODE */
#define FaxSendDocumentForBroadcast  FaxSendDocumentForBroadcastA
#endif /* !UNICODE */

typedef BOOL (WINAPI *PFAXSENDDOCUMENTFORBROADCASTA)(
    HANDLE FaxHandle,
    LPCSTR FileName,
    LPDWORD FaxJobId,
    PFAX_RECIPIENT_CALLBACKA FaxRecipientCallback,
    LPVOID Context
);
typedef BOOL (WINAPI *PFAXSENDDOCUMENTFORBROADCASTW)(
    HANDLE FaxHandle,
    LPCWSTR FileName,
    LPDWORD FaxJobId,
    PFAX_RECIPIENT_CALLBACKW FaxRecipientCallback,
    LPVOID Context
);
#ifdef UNICODE
#define PFAXSENDDOCUMENTFORBROADCAST  PFAXSENDDOCUMENTFORBROADCASTW
#else /* !UNICODE */
#define PFAXSENDDOCUMENTFORBROADCAST  PFAXSENDDOCUMENTFORBROADCASTA
#endif /* !UNICODE */

WINFAXAPI BOOL WINAPI FaxEnumJobsA(
    HANDLE FaxHandle,
    PFAX_JOB_ENTRYA *JobEntry,
    LPDWORD JobsReturned
);
WINFAXAPI BOOL WINAPI FaxEnumJobsW(
    HANDLE FaxHandle,
    PFAX_JOB_ENTRYW *JobEntry,
    LPDWORD JobsReturned
);
#ifdef UNICODE
#define FaxEnumJobs  FaxEnumJobsW
#else /* !UNICODE */
#define FaxEnumJobs  FaxEnumJobsA
#endif /* !UNICODE */

typedef BOOL (WINAPI *PFAXENUMJOBSA)(
    HANDLE FaxHandle,
    PFAX_JOB_ENTRYA *JobEntry,
    LPDWORD JobsReturned
);
typedef BOOL (WINAPI *PFAXENUMJOBSW)(
    HANDLE FaxHandle,
    PFAX_JOB_ENTRYW *JobEntry,
    LPDWORD JobsReturned
);
#ifdef UNICODE
#define PFAXENUMJOBS  PFAXENUMJOBSW
#else /* !UNICODE */
#define PFAXENUMJOBS  PFAXENUMJOBSA
#endif /* !UNICODE */

WINFAXAPI BOOL WINAPI FaxGetJobA(
    HANDLE FaxHandle,
    DWORD JobId,
    PFAX_JOB_ENTRYA *JobEntry
);
WINFAXAPI BOOL WINAPI FaxGetJobW(
    HANDLE FaxHandle,
    DWORD JobId,
    PFAX_JOB_ENTRYW *JobEntry
);
#ifdef UNICODE
#define FaxGetJob  FaxGetJobW
#else /* !UNICODE */
#define FaxGetJob  FaxGetJobA
#endif /* !UNICODE */

typedef BOOL (WINAPI *PFAXGETJOBA)(
    HANDLE FaxHandle,
    DWORD JobId,
    PFAX_JOB_ENTRYA *JobEntry
);
typedef BOOL (WINAPI *PFAXGETJOBW)(
    HANDLE FaxHandle,
    DWORD JobId,
    PFAX_JOB_ENTRYW *JobEntry
);
#ifdef UNICODE
#define PFAXGETJOB  PFAXGETJOBW
#else /* !UNICODE */
#define PFAXGETJOB  PFAXGETJOBA
#endif /* !UNICODE */

WINFAXAPI BOOL WINAPI FaxSetJobA(
    HANDLE FaxHandle,
    DWORD JobId,
    DWORD Command,
    const FAX_JOB_ENTRYA *JobEntry
);
WINFAXAPI BOOL WINAPI FaxSetJobW(
    HANDLE FaxHandle,
    DWORD JobId,
    DWORD Command,
    const FAX_JOB_ENTRYW *JobEntry
);
#ifdef UNICODE
#define FaxSetJob  FaxSetJobW
#else /* !UNICODE */
#define FaxSetJob  FaxSetJobA
#endif /* !UNICODE */

typedef BOOL (WINAPI *PFAXSETJOBA)(
    HANDLE FaxHandle,
    DWORD JobId,
    DWORD Command,
    const FAX_JOB_ENTRYA *JobEntry
);
typedef BOOL (WINAPI *PFAXSETJOBW)(
    HANDLE FaxHandle,
    DWORD JobId,
    DWORD Command,
    const FAX_JOB_ENTRYW *JobEntry
);
#ifdef UNICODE
#define PFAXSETJOB  PFAXSETJOBW
#else /* !UNICODE */
#define PFAXSETJOB  PFAXSETJOBA
#endif /* !UNICODE */

WINFAXAPI BOOL WINAPI FaxGetPageData(
    HANDLE FaxHandle,
    DWORD JobId,
    LPBYTE *Buffer,
    LPDWORD BufferSize,
    LPDWORD ImageWidth,
    LPDWORD ImageHeight
);

typedef BOOL (WINAPI *PFAXGETPAGEDATA)(
    HANDLE FaxHandle,
    DWORD JobId,
    LPBYTE *Buffer,
    LPDWORD BufferSize,
    LPDWORD ImageWidth,
    LPDWORD ImageHeight
);

WINFAXAPI BOOL WINAPI FaxGetDeviceStatusA(
    HANDLE FaxPortHandle,
    PFAX_DEVICE_STATUSA *DeviceStatus
);
WINFAXAPI BOOL WINAPI FaxGetDeviceStatusW(
    HANDLE FaxPortHandle,
    PFAX_DEVICE_STATUSW *DeviceStatus
);
#ifdef UNICODE
#define FaxGetDeviceStatus  FaxGetDeviceStatusW
#else /* !UNICODE */
#define FaxGetDeviceStatus  FaxGetDeviceStatusA
#endif /* !UNICODE */

typedef BOOL (WINAPI *PFAXGETDEVICESTATUSA)(
    HANDLE FaxPortHandle,
    PFAX_DEVICE_STATUSA *DeviceStatus
);
typedef BOOL (WINAPI *PFAXGETDEVICESTATUSW)(
    HANDLE FaxPortHandle,
    PFAX_DEVICE_STATUSW *DeviceStatus
);
#ifdef UNICODE
#define PFAXGETDEVICESTATUS  PFAXGETDEVICESTATUSW
#else /* !UNICODE */
#define PFAXGETDEVICESTATUS  PFAXGETDEVICESTATUSA
#endif /* !UNICODE */

WINFAXAPI BOOL WINAPI FaxAbort(
    HANDLE FaxHandle,
    DWORD JobId
);

typedef BOOL (WINAPI *PFAXABORT)(
    HANDLE FaxHandle,
    DWORD JobId
);

WINFAXAPI BOOL WINAPI FaxGetConfigurationA(
    HANDLE FaxHandle,
    PFAX_CONFIGURATIONA *FaxConfig
);
WINFAXAPI BOOL WINAPI FaxGetConfigurationW(
    HANDLE FaxHandle,
    PFAX_CONFIGURATIONW *FaxConfig
);
#ifdef UNICODE
#define FaxGetConfiguration  FaxGetConfigurationW
#else /* !UNICODE */
#define FaxGetConfiguration  FaxGetConfigurationA
#endif /* !UNICODE */

typedef BOOL (WINAPI *PFAXGETCONFIGURATIONA)(
    HANDLE FaxHandle,
    PFAX_CONFIGURATIONA *FaxConfig
);
typedef BOOL (WINAPI *PFAXGETCONFIGURATIONW)(
    HANDLE FaxHandle,
    PFAX_CONFIGURATIONW *FaxConfig
);
#ifdef UNICODE
#define PFAXGETCONFIGURATION  PFAXGETCONFIGURATIONW
#else /* !UNICODE */
#define PFAXGETCONFIGURATION  PFAXGETCONFIGURATIONA
#endif /* !UNICODE */

WINFAXAPI BOOL WINAPI FaxSetConfigurationA(
    HANDLE FaxHandle,
    const FAX_CONFIGURATIONA *FaxConfig
);
WINFAXAPI BOOL WINAPI FaxSetConfigurationW(
    HANDLE FaxHandle,
    const FAX_CONFIGURATIONW *FaxConfig
);
#ifdef UNICODE
#define FaxSetConfiguration  FaxSetConfigurationW
#else /* !UNICODE */
#define FaxSetConfiguration  FaxSetConfigurationA
#endif /* !UNICODE */

typedef BOOL (WINAPI *PFAXSETCONFIGURATIONA)(
    HANDLE FaxHandle,
    const FAX_CONFIGURATIONA *FaxConfig
);
typedef BOOL (WINAPI *PFAXSETCONFIGURATIONW)(
    HANDLE FaxHandle,
    const FAX_CONFIGURATIONW *FaxConfig
);
#ifdef UNICODE
#define PFAXSETCONFIGURATION  PFAXSETCONFIGURATIONW
#else /* !UNICODE */
#define PFAXSETCONFIGURATION  PFAXSETCONFIGURATIONA
#endif /* !UNICODE */

WINFAXAPI BOOL WINAPI FaxGetLoggingCategoriesA(
    HANDLE FaxHandle,
    PFAX_LOG_CATEGORYA *Categories,
    LPDWORD NumberCategories
);
WINFAXAPI BOOL WINAPI FaxGetLoggingCategoriesW(
    HANDLE FaxHandle,
    PFAX_LOG_CATEGORYW *Categories,
    LPDWORD NumberCategories
);
#ifdef UNICODE
#define FaxGetLoggingCategories  FaxGetLoggingCategoriesW
#else /* !UNICODE */
#define FaxGetLoggingCategories  FaxGetLoggingCategoriesA
#endif /* !UNICODE */

typedef BOOL (WINAPI *PFAXGETLOGGINGCATEGORIESA)(
    HANDLE FaxHandle,
    PFAX_LOG_CATEGORYA *Categories,
    LPDWORD NumberCategories
);
typedef BOOL (WINAPI *PFAXGETLOGGINGCATEGORIESW)(
    HANDLE FaxHandle,
    PFAX_LOG_CATEGORYW *Categories,
    LPDWORD NumberCategories
);
#ifdef UNICODE
#define PFAXGETLOGGINGCATEGORIES  PFAXGETLOGGINGCATEGORIESW
#else /* !UNICODE */
#define PFAXGETLOGGINGCATEGORIES  PFAXGETLOGGINGCATEGORIESA
#endif /* !UNICODE */

WINFAXAPI BOOL WINAPI FaxSetLoggingCategoriesA(
    HANDLE FaxHandle,
    const FAX_LOG_CATEGORYA *Categories,
    DWORD NumberCategories
);
WINFAXAPI BOOL WINAPI FaxSetLoggingCategoriesW(
    HANDLE FaxHandle,
    const FAX_LOG_CATEGORYW *Categories,
    DWORD NumberCategories
);
#ifdef UNICODE
#define FaxSetLoggingCategories  FaxSetLoggingCategoriesW
#else /* !UNICODE */
#define FaxSetLoggingCategories  FaxSetLoggingCategoriesA
#endif /* !UNICODE */

typedef BOOL (WINAPI *PFAXSETLOGGINGCATEGORIESA)(
    HANDLE FaxHandle,
    const FAX_LOG_CATEGORYA *Categories,
    DWORD NumberCategories
);
typedef BOOL (WINAPI *PFAXSETLOGGINGCATEGORIESW)(
    HANDLE FaxHandle,
    const FAX_LOG_CATEGORYW *Categories,
    DWORD NumberCategories
);
#ifdef UNICODE
#define PFAXSETLOGGINGCATEGORIES  PFAXSETLOGGINGCATEGORIESW
#else /* !UNICODE */
#define PFAXSETLOGGINGCATEGORIES  PFAXSETLOGGINGCATEGORIESA
#endif /* !UNICODE */

WINFAXAPI BOOL WINAPI FaxEnumPortsA(
    HANDLE FaxHandle,
    PFAX_PORT_INFOA *PortInfo,
    LPDWORD PortsReturned
);
WINFAXAPI BOOL WINAPI FaxEnumPortsW(
    HANDLE FaxHandle,
    PFAX_PORT_INFOW *PortInfo,
    LPDWORD PortsReturned
);
#ifdef UNICODE
#define FaxEnumPorts  FaxEnumPortsW
#else /* !UNICODE */
#define FaxEnumPorts  FaxEnumPortsA
#endif /* !UNICODE */

typedef BOOL (WINAPI *PFAXENUMPORTSA)(
    HANDLE FaxHandle,
    PFAX_PORT_INFOA *PortInfo,
    LPDWORD PortsReturned
);
typedef BOOL (WINAPI *PFAXENUMPORTSW)(
    HANDLE FaxHandle,
    PFAX_PORT_INFOW *PortInfo,
    LPDWORD PortsReturned
);
#ifdef UNICODE
#define PFAXENUMPORTS  PFAXENUMPORTSW
#else /* !UNICODE */
#define PFAXENUMPORTS  PFAXENUMPORTSA
#endif /* !UNICODE */

WINFAXAPI BOOL WINAPI FaxGetPortA(
    HANDLE FaxPortHandle,
    PFAX_PORT_INFOA *PortInfo
);
WINFAXAPI BOOL WINAPI FaxGetPortW(
    HANDLE FaxPortHandle,
    PFAX_PORT_INFOW *PortInfo
);
#ifdef UNICODE
#define FaxGetPort  FaxGetPortW
#else /* !UNICODE */
#define FaxGetPort  FaxGetPortA
#endif /* !UNICODE */

typedef BOOL (WINAPI *PFAXGETPORTA)(
    HANDLE FaxPortHandle,
    PFAX_PORT_INFOA *PortInfo
);
typedef BOOL (WINAPI *PFAXGETPORTW)(
    HANDLE FaxPortHandle,
    PFAX_PORT_INFOW *PortInfo
);
#ifdef UNICODE
#define PFAXGETPORT  PFAXGETPORTW
#else /* !UNICODE */
#define PFAXGETPORT  PFAXGETPORTA
#endif /* !UNICODE */

WINFAXAPI BOOL WINAPI FaxSetPortA(
    HANDLE FaxPortHandle,
    const FAX_PORT_INFOA *PortInfo
);
WINFAXAPI BOOL WINAPI FaxSetPortW(
    HANDLE FaxPortHandle,
    const FAX_PORT_INFOW *PortInfo
);
#ifdef UNICODE
#define FaxSetPort  FaxSetPortW
#else /* !UNICODE */
#define FaxSetPort  FaxSetPortA
#endif /* !UNICODE */

typedef BOOL (WINAPI *PFAXSETPORTA)(
    HANDLE FaxPortHandle,
    const FAX_PORT_INFOA *PortInfo
);
typedef BOOL (WINAPI *PFAXSETPORTW)(
    HANDLE FaxPortHandle,
    const FAX_PORT_INFOW *PortInfo
);
#ifdef UNICODE
#define PFAXSETPORT  PFAXSETPORTW
#else /* !UNICODE */
#define PFAXSETPORT  PFAXSETPORTA
#endif /* !UNICODE */

WINFAXAPI BOOL WINAPI FaxEnumRoutingMethodsA(
    HANDLE FaxPortHandle,
    PFAX_ROUTING_METHODA *RoutingMethod,
    LPDWORD MethodsReturned
);
WINFAXAPI BOOL WINAPI FaxEnumRoutingMethodsW(
    HANDLE FaxPortHandle,
    PFAX_ROUTING_METHODW *RoutingMethod,
    LPDWORD MethodsReturned
);
#ifdef UNICODE
#define FaxEnumRoutingMethods  FaxEnumRoutingMethodsW
#else /* !UNICODE */
#define FaxEnumRoutingMethods  FaxEnumRoutingMethodsA
#endif /* !UNICODE */

typedef BOOL (WINAPI *PFAXENUMROUTINGMETHODSA)(
    HANDLE FaxPortHandle,
    PFAX_ROUTING_METHODA *RoutingMethod,
    LPDWORD MethodsReturned
);
typedef BOOL (WINAPI *PFAXENUMROUTINGMETHODSW)(
    HANDLE FaxPortHandle,
    PFAX_ROUTING_METHODW *RoutingMethod,
    LPDWORD MethodsReturned
);
#ifdef UNICODE
#define PFAXENUMROUTINGMETHODS  PFAXENUMROUTINGMETHODSW
#else /* !UNICODE */
#define PFAXENUMROUTINGMETHODS  PFAXENUMROUTINGMETHODSA
#endif /* !UNICODE */

WINFAXAPI BOOL WINAPI FaxEnableRoutingMethodA(
    HANDLE FaxPortHandle,
    LPCSTR RoutingGuid,
    BOOL Enabled
);
WINFAXAPI BOOL WINAPI FaxEnableRoutingMethodW(
    HANDLE FaxPortHandle,
    LPCWSTR RoutingGuid,
    BOOL Enabled
);
#ifdef UNICODE
#define FaxEnableRoutingMethod  FaxEnableRoutingMethodW
#else /* !UNICODE */
#define FaxEnableRoutingMethod  FaxEnableRoutingMethodA
#endif /* !UNICODE */

typedef BOOL (WINAPI *PFAXENABLEROUTINGMETHODA)(
    HANDLE FaxPortHandle,
    LPCSTR RoutingGuid,
    BOOL Enabled
);
typedef BOOL (WINAPI *PFAXENABLEROUTINGMETHODW)(
    HANDLE FaxPortHandle,
    LPCWSTR RoutingGuid,
    BOOL Enabled
);
#ifdef UNICODE
#define PFAXENABLEROUTINGMETHOD  PFAXENABLEROUTINGMETHODW
#else /* !UNICODE */
#define PFAXENABLEROUTINGMETHOD  PFAXENABLEROUTINGMETHODA
#endif /* !UNICODE */

WINFAXAPI BOOL WINAPI FaxEnumGlobalRoutingInfoA(
    HANDLE FaxHandle,
    PFAX_GLOBAL_ROUTING_INFOA *RoutingInfo,
    LPDWORD MethodsReturned
);
WINFAXAPI BOOL WINAPI FaxEnumGlobalRoutingInfoW(
    HANDLE FaxHandle,
    PFAX_GLOBAL_ROUTING_INFOW *RoutingInfo,
    LPDWORD MethodsReturned
);
#ifdef UNICODE
#define FaxEnumGlobalRoutingInfo  FaxEnumGlobalRoutingInfoW
#else /* !UNICODE */
#define FaxEnumGlobalRoutingInfo  FaxEnumGlobalRoutingInfoA
#endif /* !UNICODE */

typedef BOOL (WINAPI *PFAXENUMGLOBALROUTINGINFOA)(
    HANDLE FaxHandle,
    PFAX_GLOBAL_ROUTING_INFOA *RoutingInfo,
    LPDWORD MethodsReturned
);
typedef BOOL (WINAPI *PFAXENUMGLOBALROUTINGINFOW)(
    HANDLE FaxHandle,
    PFAX_GLOBAL_ROUTING_INFOW *RoutingInfo,
    LPDWORD MethodsReturned
);
#ifdef UNICODE
#define PFAXENUMGLOBALROUTINGINFO  PFAXENUMGLOBALROUTINGINFOW
#else /* !UNICODE */
#define PFAXENUMGLOBALROUTINGINFO  PFAXENUMGLOBALROUTINGINFOA
#endif /* !UNICODE */

WINFAXAPI BOOL WINAPI FaxSetGlobalRoutingInfoA(
    HANDLE FaxHandle,
    const FAX_GLOBAL_ROUTING_INFOA *RoutingInfo
);
WINFAXAPI BOOL WINAPI FaxSetGlobalRoutingInfoW(
    HANDLE FaxHandle,
    const FAX_GLOBAL_ROUTING_INFOW *RoutingInfo
);
#ifdef UNICODE
#define FaxSetGlobalRoutingInfo  FaxSetGlobalRoutingInfoW
#else /* !UNICODE */
#define FaxSetGlobalRoutingInfo  FaxSetGlobalRoutingInfoA
#endif /* !UNICODE */

typedef BOOL (WINAPI *PFAXSETGLOBALROUTINGINFOA)(
    HANDLE FaxPortHandle,
    const FAX_GLOBAL_ROUTING_INFOA *RoutingInfo
);
typedef BOOL (WINAPI *PFAXSETGLOBALROUTINGINFOW)(
    HANDLE FaxPortHandle,
    const FAX_GLOBAL_ROUTING_INFOW *RoutingInfo
);
#ifdef UNICODE
#define PFAXSETGLOBALROUTINGINFO  PFAXSETGLOBALROUTINGINFOW
#else /* !UNICODE */
#define PFAXSETGLOBALROUTINGINFO  PFAXSETGLOBALROUTINGINFOA
#endif /* !UNICODE */

WINFAXAPI BOOL WINAPI FaxGetRoutingInfoA(
    HANDLE FaxPortHandle,
    LPCSTR RoutingGuid,
    LPBYTE *RoutingInfoBuffer,
    LPDWORD RoutingInfoBufferSize
);
WINFAXAPI BOOL WINAPI FaxGetRoutingInfoW(
    HANDLE FaxPortHandle,
    LPCWSTR RoutingGuid,
    LPBYTE *RoutingInfoBuffer,
    LPDWORD RoutingInfoBufferSize
);
#ifdef UNICODE
#define FaxGetRoutingInfo  FaxGetRoutingInfoW
#else /* !UNICODE */
#define FaxGetRoutingInfo  FaxGetRoutingInfoA
#endif /* !UNICODE */

typedef BOOL (WINAPI *PFAXGETROUTINGINFOA)(
    HANDLE FaxPortHandle,
    LPCSTR RoutingGuid,
    LPBYTE *RoutingInfoBuffer,
    LPDWORD RoutingInfoBufferSize
);
typedef BOOL (WINAPI *PFAXGETROUTINGINFOW)(
    HANDLE FaxPortHandle,
    LPCWSTR RoutingGuid,
    LPBYTE *RoutingInfoBuffer,
    LPDWORD RoutingInfoBufferSize
);
#ifdef UNICODE
#define PFAXGETROUTINGINFO  PFAXGETROUTINGINFOW
#else /* !UNICODE */
#define PFAXGETROUTINGINFO  PFAXGETROUTINGINFOA
#endif /* !UNICODE */

WINFAXAPI BOOL WINAPI FaxSetRoutingInfoA(
    HANDLE FaxPortHandle,
    LPCSTR RoutingGuid,
    const BYTE *RoutingInfoBuffer,
    DWORD RoutingInfoBufferSize
);
WINFAXAPI BOOL WINAPI FaxSetRoutingInfoW(
    HANDLE FaxPortHandle,
    LPCWSTR RoutingGuid,
    const BYTE *RoutingInfoBuffer,
    DWORD RoutingInfoBufferSize
);
#ifdef UNICODE
#define FaxSetRoutingInfo  FaxSetRoutingInfoW
#else /* !UNICODE */
#define FaxSetRoutingInfo  FaxSetRoutingInfoA
#endif /* !UNICODE */

typedef BOOL (WINAPI *PFAXSETROUTINGINFOA)(
    HANDLE FaxPortHandle,
    LPCSTR RoutingGuid,
    const BYTE *RoutingInfoBuffer,
    DWORD RoutingInfoBufferSize
);
typedef BOOL (WINAPI *PFAXSETROUTINGINFOW)(
    HANDLE FaxPortHandle,
    LPCWSTR RoutingGuid,
    const BYTE *RoutingInfoBuffer,
    DWORD RoutingInfoBufferSize
);
#ifdef UNICODE
#define PFAXSETROUTINGINFO  PFAXSETROUTINGINFOW
#else /* !UNICODE */
#define PFAXSETROUTINGINFO  PFAXSETROUTINGINFOA
#endif /* !UNICODE */

WINFAXAPI BOOL WINAPI FaxInitializeEventQueue(
    HANDLE FaxHandle,
    HANDLE CompletionPort,
    ULONG_PTR CompletionKey,
    HWND hWnd,
    UINT MessageStart
);

typedef BOOL (WINAPI *PFAXINITIALIZEEVENTQUEUE)(
    HANDLE FaxHandle,
    HANDLE CompletionPort,
    ULONG_PTR CompletionKey,
    HWND hWnd,
    UINT MessageStart
);

WINFAXAPI VOID WINAPI FaxFreeBuffer(
    LPVOID Buffer
);

typedef VOID (WINAPI *PFAXFREEBUFFER)(
    LPVOID Buffer
);

WINFAXAPI BOOL WINAPI FaxStartPrintJobA(
    LPCSTR PrinterName,
    const FAX_PRINT_INFOA *PrintInfo,
    LPDWORD FaxJobId,
    PFAX_CONTEXT_INFOA FaxContextInfo
);
WINFAXAPI BOOL WINAPI FaxStartPrintJobW(
    LPCWSTR PrinterName,
    const FAX_PRINT_INFOW *PrintInfo,
    LPDWORD FaxJobId,
    PFAX_CONTEXT_INFOW FaxContextInfo
);
#ifdef UNICODE
#define FaxStartPrintJob  FaxStartPrintJobW
#else /* !UNICODE */
#define FaxStartPrintJob  FaxStartPrintJobA
#endif /* !UNICODE */

typedef BOOL (WINAPI *PFAXSTARTPRINTJOBA)(
    LPCSTR PrinterName,
    const FAX_PRINT_INFOA *PrintInfo,
    LPDWORD FaxJobId,
    PFAX_CONTEXT_INFOA FaxContextInfo
);
typedef BOOL (WINAPI *PFAXSTARTPRINTJOBW)(
    LPCWSTR PrinterName,
    const FAX_PRINT_INFOW *PrintInfo,
    LPDWORD FaxJobId,
    PFAX_CONTEXT_INFOW FaxContextInfo
);
#ifdef UNICODE
#define PFAXSTARTPRINTJOB  PFAXSTARTPRINTJOBW
#else /* !UNICODE */
#define PFAXSTARTPRINTJOB  PFAXSTARTPRINTJOBA
#endif /* !UNICODE */

WINFAXAPI BOOL WINAPI FaxPrintCoverPageA(
    const FAX_CONTEXT_INFOA *FaxContextInfo,
    const FAX_COVERPAGE_INFOA *CoverPageInfo
);
WINFAXAPI BOOL WINAPI FaxPrintCoverPageW(
    const FAX_CONTEXT_INFOW *FaxContextInfo,
    const FAX_COVERPAGE_INFOW *CoverPageInfo
);
#ifdef UNICODE
#define FaxPrintCoverPage  FaxPrintCoverPageW
#else /* !UNICODE */
#define FaxPrintCoverPage  FaxPrintCoverPageA
#endif /* !UNICODE */

typedef BOOL (WINAPI *PFAXPRINTCOVERPAGEA)(
    const FAX_CONTEXT_INFOA *FaxContextInfo,
    const FAX_COVERPAGE_INFOA *CoverPageInfo
);
typedef BOOL (WINAPI *PFAXPRINTCOVERPAGEW)(
    const FAX_CONTEXT_INFOW *FaxContextInfo,
    const FAX_COVERPAGE_INFOW *CoverPageInfo
);
#ifdef UNICODE
#define PFAXPRINTCOVERPAGE  PFAXPRINTCOVERPAGEW
#else /* !UNICODE */
#define PFAXPRINTCOVERPAGE  PFAXPRINTCOVERPAGEA
#endif /* !UNICODE */

WINFAXAPI BOOL WINAPI FaxRegisterServiceProviderW(
    LPCWSTR DeviceProvider,
    LPCWSTR FriendlyName,
    LPCWSTR ImageName,
    LPCWSTR TspName
);

#define FaxRegisterServiceProvider  FaxRegisterServiceProviderW

typedef BOOL (WINAPI *PFAXREGISTERSERVICEPROVIDERW)(
    LPCWSTR DeviceProvider,
    LPCWSTR FriendlyName,
    LPCWSTR ImageName,
    LPCWSTR TspName
);

#define PFAXREGISTERSERVICEPROVIDER  PFAXREGISTERSERVICEPROVIDERW

WINFAXAPI BOOL WINAPI FaxUnregisterServiceProviderW(
    LPCWSTR DeviceProvider
);

#define FaxUnregisterServiceProvider  FaxUnregisterServiceProviderW

typedef BOOL (WINAPI *PFAXUNREGISTERSERVICEPROVIDERW)(
    LPCWSTR DeviceProvider
);

#define PFAXUNREGISTERSERVICEPROVIDER  PFAXUNREGISTERSERVICEPROVIDERW

typedef BOOL (CALLBACK *PFAX_ROUTING_INSTALLATION_CALLBACKW)(
    HANDLE FaxHandle,
    LPVOID Context,
    LPWSTR MethodName,
    LPWSTR FriendlyName,
    LPWSTR FunctionName,
    LPWSTR Guid
);

#define PFAX_ROUTING_INSTALLATION_CALLBACK  PFAX_ROUTING_INSTALLATION_CALLBACKW

WINFAXAPI BOOL WINAPI FaxRegisterRoutingExtensionW(
    HANDLE FaxHandle,
    LPCWSTR ExtensionName,
    LPCWSTR FriendlyName,
    LPCWSTR ImageName,
    PFAX_ROUTING_INSTALLATION_CALLBACKW CallBack,
    LPVOID Context
);

#define FaxRegisterRoutingExtension FaxRegisterRoutingExtensionW

typedef BOOL (WINAPI *PFAXREGISTERROUTINGEXTENSIONW)(
    HANDLE FaxHandle,
    LPCWSTR ExtensionName,
    LPCWSTR FriendlyName,
    LPCWSTR ImageName,
    PFAX_ROUTING_INSTALLATION_CALLBACKW CallBack,
    LPVOID Context
);

#define PFAXREGISTERROUTINGEXTENSION PFAXREGISTERROUTINGEXTENSIONW

WINFAXAPI BOOL WINAPI FaxUnregisterRoutingExtensionA(
    HANDLE hFaxHandle,
    LPCSTR lpctstrExtensionName
);
WINFAXAPI BOOL WINAPI FaxUnregisterRoutingExtensionW(
    HANDLE hFaxHandle,
    LPCWSTR lpctstrExtensionName
);
#ifdef UNICODE
#define FaxUnregisterRoutingExtension  FaxUnregisterRoutingExtensionW
#else /* !UNICODE */
#define FaxUnregisterRoutingExtension  FaxUnregisterRoutingExtensionA
#endif /* !UNICODE */

WINFAXAPI BOOL WINAPI FaxAccessCheck(
    HANDLE FaxHandle,
    DWORD AccessMask
);

typedef BOOL (WINAPI *PFAXACCESSCHECK)(
    HANDLE FaxHandle,
    DWORD AccessMask
);

#define FAX_JOB_SUBMIT          (0x0001)
#define FAX_JOB_QUERY           (0x0002)
#define FAX_CONFIG_QUERY        (0x0004)
#define FAX_CONFIG_SET          (0x0008)
#define FAX_PORT_QUERY          (0x0010)
#define FAX_PORT_SET            (0x0020)
#define FAX_JOB_MANAGE          (0x0040)

#define FAX_READ                (STANDARD_RIGHTS_READ        |\
                                 FAX_JOB_QUERY               |\
                                 FAX_CONFIG_QUERY            |\
                                 FAX_PORT_QUERY)

#define FAX_WRITE               (STANDARD_RIGHTS_WRITE       |\
                                 FAX_JOB_SUBMIT )

#define FAX_ALL_ACCESS          (STANDARD_RIGHTS_ALL         |\
                                 FAX_JOB_SUBMIT              |\
                                 FAX_JOB_QUERY               |\
                                 FAX_CONFIG_QUERY            |\
                                 FAX_CONFIG_SET              |\
                                 FAX_PORT_QUERY              |\
                                 FAX_PORT_SET                |\
                                 FAX_JOB_MANAGE)

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#endif /* _WINFAX_H */
