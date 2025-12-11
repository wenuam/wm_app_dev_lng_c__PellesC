#ifndef _IORINGAPI_H
#define _IORINGAPI_H

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>
#include <ntioring_x.h>
#include <windef.h>
#include <winbase.h>
#include <sdkddkver.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

#ifdef NTDDI_WIN10_CO
#if (NTDDI_VERSION >= NTDDI_WIN10_CO)

DECLARE_HANDLE(HIORING);

typedef enum IORING_SQE_FLAGS {
    IOSQE_FLAGS_NONE = 0,
#ifdef NTDDI_WIN10_NI
#if (NTDDI_VERSION >= NTDDI_WIN10_NI)
    IOSQE_FLAGS_DRAIN_PRECEDING_OPS = 0x00000001,
#endif /* (NTDDI_VERSION >= NTDDI_WIN10_NI) */
#endif /* NTDDI_WIN10_NI */
} IORING_SQE_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS(IORING_SQE_FLAGS)

typedef enum IORING_CREATE_REQUIRED_FLAGS {
    IORING_CREATE_REQUIRED_FLAGS_NONE = 0,
} IORING_CREATE_REQUIRED_FLAGS;
/* DEFINE_ENUM_FLAG_OPERATORS(IORING_CREATE_REQUIRED_FLAGS) */

typedef enum IORING_CREATE_ADVISORY_FLAGS {
    IORING_CREATE_ADVISORY_FLAGS_NONE = 0,
} IORING_CREATE_ADVISORY_FLAGS;
/* DEFINE_ENUM_FLAG_OPERATORS(IORING_CREATE_ADVISORY_FLAGS) */

typedef struct IORING_CREATE_FLAGS {
    IORING_CREATE_REQUIRED_FLAGS Required;
    IORING_CREATE_ADVISORY_FLAGS Advisory;
} IORING_CREATE_FLAGS;

typedef struct IORING_INFO {
    IORING_VERSION IoRingVersion;
    IORING_CREATE_FLAGS Flags;
    UINT32 SubmissionQueueSize;
    UINT32 CompletionQueueSize;
} IORING_INFO;

typedef struct IORING_CAPABILITIES {
    IORING_VERSION MaxVersion;
    UINT32 MaxSubmissionQueueSize;
    UINT32 MaxCompletionQueueSize;
    IORING_FEATURE_FLAGS FeatureFlags;
} IORING_CAPABILITIES;

typedef enum IORING_REF_KIND {
    IORING_REF_RAW,
    IORING_REF_REGISTERED,
} IORING_REF_KIND;

typedef struct IORING_HANDLE_REF {
    IORING_REF_KIND Kind;
    union HandleUnion {
        HANDLE Handle;
        UINT32 Index;
    } Handle;
} IORING_HANDLE_REF;

#define IoRingHandleRefFromHandle(h) {IORING_REF_RAW, {.Handle = h}}
#define IoRingHandleRefFromIndex(i) {IORING_REF_REGISTERED, {.Index = i}}

typedef struct IORING_BUFFER_REF {
    IORING_REF_KIND Kind;
    union BufferUnion {
        void * Address;
        IORING_REGISTERED_BUFFER IndexAndOffset;
    }Buffer;
} IORING_BUFFER_REF;

#define IoRingBufferRefFromPointer(p) {IORING_REF_RAW, {.Address = p}}
#define IoRingBufferRefFromIndexAndOffset(i,o) {IORING_REF_REGISTERED, {.IndexAndOffset = {(i),(o)}}}

typedef struct IORING_CQE {
    UINT_PTR UserData;
    HRESULT ResultCode;
    ULONG_PTR Information;
} IORING_CQE;

#endif /* (NTDDI_VERSION >= NTDDI_WIN10_CO) */
#endif /* NTDDI_WIN10_CO */

STDAPI QueryIoRingCapabilities(IORING_CAPABILITIES * capabilities);

STDAPI_(BOOL) IsIoRingOpSupported( HIORING ioRing, IORING_OP_CODE op);

STDAPI CreateIoRing( 
    IORING_VERSION ioringVersion,
    IORING_CREATE_FLAGS flags,
    UINT32 submissionQueueSize,
    UINT32 completionQueueSize,
    HIORING * h
);

STDAPI GetIoRingInfo(HIORING ioRing, IORING_INFO * info);

STDAPI SubmitIoRing(HIORING ioRing, UINT32 waitOperations, UINT32 milliseconds, UINT32 * submittedEntries);

STDAPI CloseIoRing(HIORING ioRing);

STDAPI PopIoRingCompletion(HIORING ioRing, IORING_CQE * cqe);

STDAPI SetIoRingCompletionEvent(HIORING ioRing, HANDLE hEvent);

STDAPI BuildIoRingCancelRequest(HIORING ioRing, IORING_HANDLE_REF file, UINT_PTR opToCancel, UINT_PTR userData);

STDAPI BuildIoRingReadFile(
    HIORING ioRing,
    IORING_HANDLE_REF fileRef,
    IORING_BUFFER_REF dataRef,
    UINT32 numberOfBytesToRead,
    UINT64 fileOffset,
    UINT_PTR userData,
    IORING_SQE_FLAGS sqeFlags
);

STDAPI BuildIoRingRegisterFileHandles(
    HIORING ioRing,
    UINT32 count,
    HANDLE const handles[],
    UINT_PTR userData
);

STDAPI BuildIoRingRegisterBuffers(
    HIORING ioRing,
    UINT32 count,
    IORING_BUFFER_INFO const buffers[],
UINT_PTR userData
);

STDAPI BuildIoRingWriteFile(
    HIORING ioRing,
    IORING_HANDLE_REF fileRef,
    IORING_BUFFER_REF bufferRef,
    UINT32 numberOfBytesToWrite,
    UINT64 fileOffset,
    FILE_WRITE_FLAGS writeFlags,
    UINT_PTR userData,
    IORING_SQE_FLAGS sqeFlags
);

STDAPI BuildIoRingFlushFile(
    HIORING ioRing,
    IORING_HANDLE_REF fileRef,
    FILE_FLUSH_MODE flushMode,
    UINT_PTR userData,
    IORING_SQE_FLAGS sqeFlags
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#endif /* _IORINGAPI_H */
