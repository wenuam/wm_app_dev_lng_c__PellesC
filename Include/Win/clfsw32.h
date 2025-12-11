#ifndef _CLFSW32_H
#define _CLFSW32_H

#if __POCC__ >= 500
#pragma once
#endif

/* Common log file API definitions ("oh dear") */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_BOOTABLESKU)

#ifdef CLFS_KERNEL_MODE
#undef CLFS_KERNEL_MODE
#endif /* CLFS_KERNEL_MODE */

#include <clfs.h>

#if (_WIN32_WINNT >= _WIN32_WINNT_WS03)

typedef void (__stdcall *PCLFS_COMPLETION_ROUTINE)(
    PVOID pvOverlapped,
    ULONG ulReserved
);

typedef ULONG (__stdcall *CLFS_PRINT_RECORD_ROUTINE)(
    PFILE pstrmOut,
    CLFS_RECORD_TYPE fRecordType,
    PVOID pvBuffer,
    ULONG cbBuffer
);

typedef PVOID CLFS_LOG_ARCHIVE_CONTEXT, *PCLFS_LOG_ARCHIVE_CONTEXT;

CLFSUSER_API CLFS_LSN WINAPI LsnCreate(
    CLFS_CONTAINER_ID cidContainer,
    ULONG offBlock,
    ULONG cRecord
);

CLFSUSER_API CLFS_CONTAINER_ID WINAPI LsnContainer(
    const CLFS_LSN *plsn
);

CLFSUSER_API ULONG WINAPI LsnBlockOffset(
    const CLFS_LSN *plsn
);

CLFSUSER_API ULONG WINAPI LsnRecordSequence(
    const CLFS_LSN *plsn
);

CLFSUSER_API HANDLE WINAPI CreateLogFile(
    LPCWSTR pszLogFileName,
    ACCESS_MASK fDesiredAccess,
    DWORD dwShareMode,
    LPSECURITY_ATTRIBUTES psaLogFile,
    ULONG fCreateDisposition,
    ULONG fFlagsAndAttributes
);

CLFSUSER_API BOOL WINAPI DeleteLogByHandle(HANDLE hLog);

CLFSUSER_API BOOL WINAPI DeleteLogFile(
    LPCWSTR pszLogFileName,
    PVOID pvReserved
);

CLFSUSER_API BOOL WINAPI AddLogContainer(
    HANDLE hLog,
    PULONGLONG pcbContainer,
    LPWSTR pwszContainerPath,
    LPVOID pReserved
);

CLFSUSER_API BOOL WINAPI AddLogContainerSet(
    HANDLE hLog,
    USHORT cContainer,
    PULONGLONG pcbContainer,
    LPWSTR *rgwszContainerPath,
    LPVOID pReserved
);

CLFSUSER_API BOOL WINAPI RemoveLogContainer(
    HANDLE hLog,
    LPWSTR pwszContainerPath,
    BOOL fForce,
    LPVOID pReserved
);

CLFSUSER_API BOOL WINAPI RemoveLogContainerSet(
    HANDLE hLog,
    USHORT cContainer,
    LPWSTR *rgwszContainerPath,
    BOOL fForce,
    LPVOID pReserved
);

CLFSUSER_API BOOL WINAPI SetLogArchiveTail(
    HANDLE hLog,
    PCLFS_LSN plsnArchiveTail,
    LPVOID pReserved
);

CLFSUSER_API BOOL WINAPI SetEndOfLog(
    HANDLE hLog,
    PCLFS_LSN plsnEnd,
    LPOVERLAPPED lpOverlapped
);
#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WS03) */

#if (_WIN32_WINNT >= _WIN32_WINNT_LONGHORN)

CLFSUSER_API BOOL WINAPI TruncateLog(
    PVOID pvMarshal,
    PCLFS_LSN plsnEnd,
    LPOVERLAPPED lpOverlapped
);
#endif /* (_WIN32_WINNT >= _WIN32_WINNT_LONGHORN) */

#if (_WIN32_WINNT >= _WIN32_WINNT_WS03)

CLFSUSER_API BOOL WINAPI CreateLogContainerScanContext(
    HANDLE hLog,
    ULONG cFromContainer,
    ULONG cContainers,
    CLFS_SCAN_MODE eScanMode,
    PCLFS_SCAN_CONTEXT pcxScan,
    LPOVERLAPPED pOverlapped
);

CLFSUSER_API BOOL WINAPI ScanLogContainers(
    PCLFS_SCAN_CONTEXT pcxScan,
    CLFS_SCAN_MODE eScanMode,
    LPVOID pReserved
);

CLFSUSER_API BOOL WINAPI AlignReservedLog(
    PVOID pvMarshal,
    ULONG cReservedRecords,
    LONGLONG rgcbReservation [],
    PLONGLONG pcbAlignReservation
);

CLFSUSER_API BOOL WINAPI AllocReservedLog(
    PVOID pvMarshal,
    ULONG cReservedRecords,
    PLONGLONG pcbAdjustment
);

CLFSUSER_API BOOL WINAPI FreeReservedLog(
    PVOID pvMarshal,
    ULONG cReservedRecords,
    PLONGLONG pcbAdjustment
);

CLFSUSER_API BOOL WINAPI GetLogFileInformation(
    HANDLE hLog,
    PCLFS_INFORMATION pinfoBuffer,
    PULONG cbBuffer
);

CLFSUSER_API BOOL WINAPI SetLogArchiveMode(
    HANDLE hLog,
    CLFS_LOG_ARCHIVE_MODE eMode
);

CLFSUSER_API BOOL WINAPI ReadLogRestartArea(
    PVOID pvMarshal,
    PVOID *ppvRestartBuffer,
    PULONG pcbRestartBuffer,
    PCLFS_LSN plsn,
    PVOID *ppvContext,
    LPOVERLAPPED pOverlapped
);

CLFSUSER_API BOOL WINAPI ReadPreviousLogRestartArea(
    PVOID pvReadContext,
    PVOID *ppvRestartBuffer,
    PULONG pcbRestartBuffer,
    PCLFS_LSN plsnRestart,
    LPOVERLAPPED pOverlapped
);

CLFSUSER_API BOOL WINAPI WriteLogRestartArea(
    PVOID pvMarshal,
    PVOID pvRestartBuffer,
    ULONG cbRestartBuffer,
    PCLFS_LSN plsnBase,
    ULONG fFlags,
    PULONG pcbWritten,
    PCLFS_LSN plsnNext,
    LPOVERLAPPED pOverlapped
);
#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WS03) */

#if (_WIN32_WINNT >= _WIN32_WINNT_LONGHORN)

CLFSUSER_API BOOL WINAPI GetLogReservationInfo(
    PVOID pvMarshal,
    PULONG pcbRecordNumber,
    PLONGLONG pcbUserReservation,
    PLONGLONG pcbCommitReservation
);
#endif /* (_WIN32_WINNT >= _WIN32_WINNT_LONGHORN) */

#if (_WIN32_WINNT >= _WIN32_WINNT_WS03)

CLFSUSER_API BOOL WINAPI AdvanceLogBase(
    PVOID pvMarshal,
    PCLFS_LSN plsnBase,
    ULONG fFlags,
    LPOVERLAPPED pOverlapped
);

CLFSUSER_API BOOL WINAPI CloseAndResetLogFile(HANDLE hLog);

CLFSUSER_API BOOL WINAPI CreateLogMarshallingArea(
    HANDLE hLog,
    CLFS_BLOCK_ALLOCATION pfnAllocBuffer,
    CLFS_BLOCK_DEALLOCATION pfnFreeBuffer,
    PVOID pvBlockAllocContext,
    ULONG cbMarshallingBuffer,
    ULONG cMaxWriteBuffers,
    ULONG cMaxReadBuffers,
    PVOID *ppvMarshal
);

CLFSUSER_API BOOL WINAPI DeleteLogMarshallingArea(PVOID pvMarshal);

CLFSUSER_API BOOL WINAPI ReserveAndAppendLog(
    PVOID pvMarshal,
    PCLFS_WRITE_ENTRY rgWriteEntries,
    ULONG cWriteEntries,
    PCLFS_LSN plsnUndoNext,
    PCLFS_LSN plsnPrevious,
    ULONG cReserveRecords,
    LONGLONG rgcbReservation [],
    ULONG fFlags,
    PCLFS_LSN plsn,
    LPOVERLAPPED pOverlapped
);

CLFSUSER_API BOOL WINAPI ReserveAndAppendLogAligned(
    PVOID pvMarshal,
    PCLFS_WRITE_ENTRY rgWriteEntries,
    ULONG cWriteEntries,
    ULONG cbEntryAlignment,
    PCLFS_LSN plsnUndoNext,
    PCLFS_LSN plsnPrevious,
    ULONG cReserveRecords,
    LONGLONG rgcbReservation [],
    ULONG fFlags,
    PCLFS_LSN plsn,
    LPOVERLAPPED pOverlapped
);

CLFSUSER_API BOOL WINAPI FlushLogBuffers(
    PVOID pvMarshal,
    LPOVERLAPPED pOverlapped
);

CLFSUSER_API BOOL WINAPI FlushLogToLsn(
    PVOID pvMarshalContext,
    PCLFS_LSN plsnFlush,
    PCLFS_LSN plsnLastFlushed,
    LPOVERLAPPED pOverlapped
);

CLFSUSER_API BOOL WINAPI ReadLogRecord(
    PVOID pvMarshal,
    PCLFS_LSN plsnFirst,
    CLFS_CONTEXT_MODE eContextMode,
    PVOID *ppvReadBuffer,
    PULONG pcbReadBuffer,
    PCLFS_RECORD_TYPE peRecordType,
    PCLFS_LSN plsnUndoNext,
    PCLFS_LSN plsnPrevious,
    PVOID *ppvReadContext,
    LPOVERLAPPED pOverlapped
);

CLFSUSER_API BOOL WINAPI ReadNextLogRecord(
    PVOID pvReadContext,
    PVOID *ppvBuffer,
    PULONG pcbBuffer,
    PCLFS_RECORD_TYPE peRecordType,
    PCLFS_LSN plsnUser,
    PCLFS_LSN plsnUndoNext,
    PCLFS_LSN plsnPrevious,
    PCLFS_LSN plsnRecord,
    LPOVERLAPPED pOverlapped
);

CLFSUSER_API BOOL WINAPI TerminateReadLog(PVOID pvCursorContext);

CLFSUSER_API BOOL WINAPI DumpLogRecords(
    PWSTR pwszLogFileName,
    CLFS_RECORD_TYPE fRecordType,
    PCLFS_LSN plsnStart,
    PCLFS_LSN plsnEnd,
    PFILE pstrmOut,
    CLFS_PRINT_RECORD_ROUTINE pfnPrintRecord,
    CLFS_BLOCK_ALLOCATION pfnAllocBlock,
    CLFS_BLOCK_DEALLOCATION pfnFreeBlock,
    PVOID pvBlockAllocContext,
    ULONG cbBlock,
    ULONG cMaxBlocks
);

CLFSUSER_API BOOL WINAPI PrepareLogArchive(
    HANDLE hLog,
    PWSTR pszBaseLogFileName,
    ULONG cLen,
    const PCLFS_LSN plsnLow,
    const PCLFS_LSN plsnHigh,
    PULONG pcActualLength,
    PULONGLONG poffBaseLogFileData,
    PULONGLONG pcbBaseLogFileLength,
    PCLFS_LSN plsnBase,
    PCLFS_LSN plsnLast,
    PCLFS_LSN plsnCurrentArchiveTail,
    PCLFS_LOG_ARCHIVE_CONTEXT ppvArchiveContext
);

CLFSUSER_API BOOL WINAPI ReadLogArchiveMetadata(
    CLFS_LOG_ARCHIVE_CONTEXT pvArchiveContext,
    ULONG cbOffset,
    ULONG cbBytesToRead,
    PBYTE pbReadBuffer,
    PULONG pcbBytesRead
);

CLFSUSER_API BOOL WINAPI GetNextLogArchiveExtent(
    CLFS_LOG_ARCHIVE_CONTEXT pvArchiveContext,
    CLFS_ARCHIVE_DESCRIPTOR rgadExtent [],
    ULONG cDescriptors,
    PULONG pcDescriptorsReturned
);

CLFSUSER_API BOOL WINAPI TerminateLogArchive(
    CLFS_LOG_ARCHIVE_CONTEXT pvArchiveContext
);

CLFSUSER_API BOOL WINAPI ValidateLog(
    LPCWSTR pszLogFileName,
    LPSECURITY_ATTRIBUTES psaLogFile,
    PCLFS_INFORMATION pinfoBuffer,
    PULONG pcbBuffer
);

CLFSUSER_API BOOL WINAPI GetLogContainerName(
    HANDLE hLog,
    CLFS_CONTAINER_ID cidLogicalContainer,
    LPCWSTR pwstrContainerName,
    ULONG cLenContainerName,
    PULONG pcActualLenContainerName
);

CLFSUSER_API BOOL WINAPI GetLogIoStatistics(
    HANDLE hLog,
    PVOID pvStatsBuffer,
    ULONG cbStatsBuffer,
    CLFS_IOSTATS_CLASS eStatsClass,
    PULONG pcbStatsWritten
);
#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WS03) */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_BOOTABLESKU) */

#endif /* _CLFSW32_H */
