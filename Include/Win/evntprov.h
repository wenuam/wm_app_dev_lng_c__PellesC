#ifndef _EVNTPROV_H
#define _EVNTPROV_H

#if __POCC__ >= 500
#pragma once
#endif

#include <winapifamily.h>

#ifndef EVNTAPI
#ifndef MIDL_PASS
#define EVNTAPI DECLSPEC_IMPORT __stdcall
#endif /* !MIDL_PASS */
#endif /* !EVNTAPI */

#ifndef EVNTPROV_PFORCEINLINE
#if defined(PFORCEINLINE)
#define EVNTPROV_PFORCEINLINE  PFORCEINLINE
#elif defined(FORCEINLINE)
#define EVNTPROV_PFORCEINLINE  FORCEINLINE
#else
#define EVNTPROV_PFORCEINLINE  __forceinline
#endif
#endif /* !EVNTPROV_PFORCEINLINE */

#define EVENT_MIN_LEVEL                      (0)
#define EVENT_MAX_LEVEL                      (0xff)

#define EVENT_ACTIVITY_CTRL_GET_ID           (1)
#define EVENT_ACTIVITY_CTRL_SET_ID           (2)
#define EVENT_ACTIVITY_CTRL_CREATE_ID        (3)
#define EVENT_ACTIVITY_CTRL_GET_SET_ID       (4)
#define EVENT_ACTIVITY_CTRL_CREATE_SET_ID    (5)

#define MAX_EVENT_DATA_DESCRIPTORS           (128)
#define MAX_EVENT_FILTER_DATA_SIZE           (1024)
#define MAX_EVENT_FILTER_PAYLOAD_SIZE        (4096)
#define MAX_EVENT_FILTER_EVENT_NAME_SIZE     (4096)

#define MAX_EVENT_FILTERS_COUNT              (13)

#define MAX_EVENT_FILTER_PID_COUNT           (8) 

#define MAX_EVENT_FILTER_EVENT_ID_COUNT      (64) 

#define EVENT_FILTER_TYPE_NONE               (0x00000000)
#define EVENT_FILTER_TYPE_SCHEMATIZED        (0x80000000)
#define EVENT_FILTER_TYPE_SYSTEM_FLAGS       (0x80000001)
#define EVENT_FILTER_TYPE_TRACEHANDLE        (0x80000002)
#define EVENT_FILTER_TYPE_PID                (0x80000004)
#define EVENT_FILTER_TYPE_EXECUTABLE_NAME    (0x80000008)
#define EVENT_FILTER_TYPE_PACKAGE_ID         (0x80000010)
#define EVENT_FILTER_TYPE_PACKAGE_APP_ID     (0x80000020)
#define EVENT_FILTER_TYPE_PAYLOAD            (0x80000100)
#define EVENT_FILTER_TYPE_EVENT_ID           (0x80000200)
#define EVENT_FILTER_TYPE_EVENT_NAME         (0x80000400)
#define EVENT_FILTER_TYPE_STACKWALK          (0x80001000)
#define EVENT_FILTER_TYPE_STACKWALK_NAME     (0x80002000)
#define EVENT_FILTER_TYPE_STACKWALK_LEVEL_KW (0x80004000)
#define EVENT_FILTER_TYPE_CONTAINER          (0x80008000)

#define EVENT_DATA_DESCRIPTOR_TYPE_NONE               (0)
#define EVENT_DATA_DESCRIPTOR_TYPE_EVENT_METADATA     (1)
#define EVENT_DATA_DESCRIPTOR_TYPE_PROVIDER_METADATA  (2)
#define EVENT_DATA_DESCRIPTOR_TYPE_TIMESTAMP_OVERRIDE (3)

#define EVENT_WRITE_FLAG_NO_FAULTING 0x00000001
#define EVENT_WRITE_FLAG_INPRIVATE   0x00000002

typedef ULONGLONG REGHANDLE, *PREGHANDLE;

typedef struct _EVENT_DATA_DESCRIPTOR {
    ULONGLONG Ptr;
    ULONG Size;
    union {
        ULONG Reserved;
        struct {
            UCHAR Type;
            UCHAR Reserved1;
            USHORT Reserved2;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME;
} EVENT_DATA_DESCRIPTOR, *PEVENT_DATA_DESCRIPTOR;

#ifndef EVENT_DESCRIPTOR_DEF
#define EVENT_DESCRIPTOR_DEF

typedef struct _EVENT_DESCRIPTOR {
    USHORT Id;
    UCHAR Version;
    UCHAR Channel;
    UCHAR Level;
    UCHAR Opcode;
    USHORT Task;
    ULONGLONG Keyword;
} EVENT_DESCRIPTOR, *PEVENT_DESCRIPTOR;

typedef const EVENT_DESCRIPTOR *PCEVENT_DESCRIPTOR;

#endif /* EVENT_DESCRIPTOR_DEF */

typedef struct _EVENT_FILTER_DESCRIPTOR {
    ULONGLONG Ptr;
    ULONG Size;
    ULONG Type;
} EVENT_FILTER_DESCRIPTOR, *PEVENT_FILTER_DESCRIPTOR;

typedef struct _EVENT_FILTER_HEADER {
    USHORT Id;
    UCHAR Version;
    UCHAR Reserved[5];
    ULONGLONG InstanceId;
    ULONG Size;
    ULONG NextOffset;
} EVENT_FILTER_HEADER, *PEVENT_FILTER_HEADER;

typedef struct _EVENT_FILTER_EVENT_ID {
    BOOLEAN FilterIn;
    UCHAR Reserved;
    USHORT Count;
    USHORT Events[ANYSIZE_ARRAY];
} EVENT_FILTER_EVENT_ID, *PEVENT_FILTER_EVENT_ID;

typedef struct _EVENT_FILTER_EVENT_NAME {
    ULONGLONG MatchAnyKeyword;
    ULONGLONG MatchAllKeyword;
    UCHAR Level;
    BOOLEAN FilterIn;
    USHORT NameCount;
    UCHAR Names[ANYSIZE_ARRAY];
} EVENT_FILTER_EVENT_NAME, *PEVENT_FILTER_EVENT_NAME;

typedef struct _EVENT_FILTER_LEVEL_KW {
    ULONGLONG MatchAnyKeyword;
    ULONGLONG MatchAllKeyword;
    UCHAR Level;
    BOOLEAN FilterIn;
} EVENT_FILTER_LEVEL_KW, *PEVENT_FILTER_LEVEL_KW;

#ifndef MIDL_PASS

typedef enum _EVENT_INFO_CLASS {
    EventProviderBinaryTrackInfo,
    EventProviderSetReserved1,
    EventProviderSetTraits,
    EventProviderUseDescriptorType,
    MaxEventInfo
} EVENT_INFO_CLASS;

#if !defined(_ETW_KM_) /*|| defined(_EVNT_SOURCE_)*/

typedef void (NTAPI *PENABLECALLBACK)(
    LPCGUID SourceId,
    ULONG IsEnabled,
    UCHAR Level,
    ULONGLONG MatchAnyKeyword,
    ULONGLONG MatchAllKeyword,
    PEVENT_FILTER_DESCRIPTOR FilterData,
    PVOID CallbackContext
);

#ifndef _APISET_EVENTING

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

#if (WINVER >= _WIN32_WINNT_VISTA)
ULONG EVNTAPI EventRegister(
    LPCGUID ProviderId,
    PENABLECALLBACK EnableCallback,
    PVOID CallbackContext,
    PREGHANDLE RegHandle
);

ULONG EVNTAPI EventUnregister(
    REGHANDLE RegHandle
);
#endif /* (WINVER >= _WIN32_WINNT_VISTA) */

#if (WINVER >= _WIN32_WINNT_WIN8)
ULONG EVNTAPI EventSetInformation(
    REGHANDLE RegHandle,
    EVENT_INFO_CLASS InformationClass,
    PVOID EventInformation,
    ULONG InformationLength
);
#endif /* (WINVER >= _WIN32_WINNT_WIN8) */

#if (WINVER >= _WIN32_WINNT_VISTA)
BOOLEAN EVNTAPI EventEnabled(
    REGHANDLE RegHandle,
    PCEVENT_DESCRIPTOR EventDescriptor
);
#endif /* (WINVER >= _WIN32_WINNT_VISTA) */

#if (WINVER >= _WIN32_WINNT_VISTA)
BOOLEAN EVNTAPI EventProviderEnabled(
    REGHANDLE RegHandle,
    UCHAR Level,
    ULONGLONG Keyword
);
#endif /* (WINVER >= _WIN32_WINNT_VISTA) */

#if (WINVER >= _WIN32_WINNT_VISTA)
ULONG EVNTAPI EventWrite(
    REGHANDLE RegHandle,
    PCEVENT_DESCRIPTOR EventDescriptor,
    ULONG UserDataCount,
    PEVENT_DATA_DESCRIPTOR UserData
);
#endif /* (WINVER >= _WIN32_WINNT_VISTA) */

#if (WINVER >= _WIN32_WINNT_VISTA)
ULONG EVNTAPI EventWriteTransfer(
    REGHANDLE RegHandle,
    PCEVENT_DESCRIPTOR EventDescriptor,
    LPCGUID ActivityId,
    LPCGUID RelatedActivityId,
    ULONG UserDataCount,
    PEVENT_DATA_DESCRIPTOR UserData
);
#endif /* (WINVER >= _WIN32_WINNT_VISTA) */

#if (WINVER >= _WIN32_WINNT_WIN7)
ULONG EVNTAPI EventWriteEx(
    REGHANDLE RegHandle,
    PCEVENT_DESCRIPTOR EventDescriptor,
    ULONG64 Filter,
    ULONG Flags,
    LPCGUID ActivityId,
    LPCGUID RelatedActivityId,
    ULONG UserDataCount,
    PEVENT_DATA_DESCRIPTOR UserData
);
#endif /* (WINVER >= _WIN32_WINNT_WIN7) */

#if (WINVER >= _WIN32_WINNT_VISTA)
ULONG EVNTAPI EventWriteString(
    REGHANDLE RegHandle,
    UCHAR Level,
    ULONGLONG Keyword,
    PCWSTR String
);
#endif /* (WINVER >= _WIN32_WINNT_VISTA) */

#if (WINVER >= _WIN32_WINNT_VISTA)
ULONG EVNTAPI EventActivityIdControl(
    ULONG ControlCode,
    LPGUID ActivityId
);
#endif /* (WINVER >= _WIN32_WINNT_VISTA) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#endif /* _APISET_EVENTING */

#endif /* !defined(_ETW_KM_) || defined(_EVNT_SOURCE_) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
EVNTPROV_PFORCEINLINE void EventDataDescCreate(
    PEVENT_DATA_DESCRIPTOR EventDataDescriptor,
    const VOID * DataPtr,
    ULONG DataSize)
{
    EventDataDescriptor->Ptr = (ULONGLONG)(ULONG_PTR)DataPtr;
    EventDataDescriptor->Size = DataSize;
    EventDataDescriptor->Reserved = 0;
    return;
}

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

EVNTPROV_PFORCEINLINE void EventDescCreate(
    PEVENT_DESCRIPTOR EventDescriptor,
    USHORT Id,
    UCHAR Version,
    UCHAR Channel,
    UCHAR Level,
    USHORT Task,
    UCHAR Opcode,
    ULONGLONG Keyword)
{
    EventDescriptor->Id = Id;
    EventDescriptor->Version = Version;
    EventDescriptor->Channel = Channel;
    EventDescriptor->Level = Level;
    EventDescriptor->Task = Task;
    EventDescriptor->Opcode = Opcode;
    EventDescriptor->Keyword = Keyword;
    return;
}

EVNTPROV_PFORCEINLINE void EventDescZero(
    PEVENT_DESCRIPTOR EventDescriptor)
{
    memset(EventDescriptor, 0, sizeof(EVENT_DESCRIPTOR));
    return;
}

EVNTPROV_PFORCEINLINE USHORT EventDescGetId(
    PCEVENT_DESCRIPTOR EventDescriptor)
{
    return (EventDescriptor->Id);
}

EVNTPROV_PFORCEINLINE UCHAR EventDescGetVersion(
    PCEVENT_DESCRIPTOR EventDescriptor)
{
    return (EventDescriptor->Version);
}

EVNTPROV_PFORCEINLINE USHORT EventDescGetTask(
    PCEVENT_DESCRIPTOR EventDescriptor)
{
    return (EventDescriptor->Task);
}

EVNTPROV_PFORCEINLINE UCHAR EventDescGetOpcode(
    PCEVENT_DESCRIPTOR EventDescriptor)
{
    return (EventDescriptor->Opcode);
}

EVNTPROV_PFORCEINLINE UCHAR EventDescGetChannel(
    PCEVENT_DESCRIPTOR EventDescriptor)
{
    return (EventDescriptor->Channel);
}

EVNTPROV_PFORCEINLINE UCHAR EventDescGetLevel(
    PCEVENT_DESCRIPTOR EventDescriptor)
{
    return (EventDescriptor->Level);
}

EVNTPROV_PFORCEINLINE ULONGLONG EventDescGetKeyword(
    PCEVENT_DESCRIPTOR EventDescriptor)
{
    return (EventDescriptor->Keyword);
}

EVNTPROV_PFORCEINLINE PEVENT_DESCRIPTOR EventDescSetId(
    PEVENT_DESCRIPTOR EventDescriptor,
    USHORT Id)
{
    EventDescriptor->Id = Id;
    return (EventDescriptor);
}

EVNTPROV_PFORCEINLINE PEVENT_DESCRIPTOR EventDescSetVersion(
    PEVENT_DESCRIPTOR EventDescriptor,
    UCHAR Version)
{
    EventDescriptor->Version = Version;
    return (EventDescriptor);
}

EVNTPROV_PFORCEINLINE PEVENT_DESCRIPTOR EventDescSetTask(
    PEVENT_DESCRIPTOR EventDescriptor,
    USHORT Task)
{
    EventDescriptor->Task = Task;
    return (EventDescriptor);
}

EVNTPROV_PFORCEINLINE PEVENT_DESCRIPTOR EventDescSetOpcode(
    PEVENT_DESCRIPTOR EventDescriptor,
    UCHAR Opcode)
{
    EventDescriptor->Opcode = Opcode;
    return (EventDescriptor);
}

EVNTPROV_PFORCEINLINE PEVENT_DESCRIPTOR EventDescSetLevel(
    PEVENT_DESCRIPTOR EventDescriptor,
    UCHAR Level)
{
    EventDescriptor->Level = Level;
    return (EventDescriptor);
}

EVNTPROV_PFORCEINLINE PEVENT_DESCRIPTOR EventDescSetChannel(
    PEVENT_DESCRIPTOR EventDescriptor,
    UCHAR Channel)
{
    EventDescriptor->Channel = Channel;
    return (EventDescriptor);
}

EVNTPROV_PFORCEINLINE PEVENT_DESCRIPTOR EventDescSetKeyword(
    PEVENT_DESCRIPTOR EventDescriptor,
    ULONGLONG Keyword)
{
    EventDescriptor->Keyword = Keyword;
    return (EventDescriptor);
}

EVNTPROV_PFORCEINLINE PEVENT_DESCRIPTOR EventDescOrKeyword(
    PEVENT_DESCRIPTOR EventDescriptor,
    ULONGLONG Keyword)
{
    EventDescriptor->Keyword |= Keyword;
    return (EventDescriptor);
}

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#endif // MIDL_PASS

#endif /* _EVNTPROV_H */
