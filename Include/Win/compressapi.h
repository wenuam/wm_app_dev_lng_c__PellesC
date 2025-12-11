#ifndef _COMPRESSAPI_H
#define _COMPRESSAPI_H

/* Windows Compression algorithms API definitions */

#include <windef.h>

#if (NTDDI_VERSION >= NTDDI_WIN8)

#if __POCC__ >= 500
#pragma once
#endif

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

DECLARE_HANDLE(COMPRESSOR_HANDLE);
typedef COMPRESSOR_HANDLE *PCOMPRESSOR_HANDLE;

typedef COMPRESSOR_HANDLE DECOMPRESSOR_HANDLE;
typedef COMPRESSOR_HANDLE *PDECOMPRESSOR_HANDLE;

#define COMPRESS_ALGORITHM_INVALID      0
#define COMPRESS_ALGORITHM_NULL         1
#define COMPRESS_ALGORITHM_MSZIP        2
#define COMPRESS_ALGORITHM_XPRESS       3
#define COMPRESS_ALGORITHM_XPRESS_HUFF  4
#define COMPRESS_ALGORITHM_LZMS         5
#define COMPRESS_ALGORITHM_MAX          6

#define COMPRESS_RAW  (1 << 29)

typedef PVOID (__cdecl *PFN_COMPRESS_ALLOCATE)(
    PVOID UserContext,
    SIZE_T Size
);

typedef VOID (__cdecl *PFN_COMPRESS_FREE)(
    PVOID UserContext,
    PVOID Memory
);

typedef struct _COMPRESS_ALLOCATION_ROUTINES {
    PFN_COMPRESS_ALLOCATE Allocate;
    PFN_COMPRESS_FREE Free;
    PVOID UserContext;
} COMPRESS_ALLOCATION_ROUTINES, *PCOMPRESS_ALLOCATION_ROUTINES;

typedef enum {
    COMPRESS_INFORMATION_CLASS_INVALID = 0,
    COMPRESS_INFORMATION_CLASS_BLOCK_SIZE,
    COMPRESS_INFORMATION_CLASS_LEVEL
} COMPRESS_INFORMATION_CLASS;

BOOL WINAPI CreateCompressor(
    DWORD Algorithm,
    PCOMPRESS_ALLOCATION_ROUTINES AllocationRoutines,
    PCOMPRESSOR_HANDLE CompressorHandle
);

BOOL WINAPI SetCompressorInformation(
    COMPRESSOR_HANDLE CompressorHandle,
    COMPRESS_INFORMATION_CLASS CompressInformationClass,
    LPCVOID CompressInformation,
    SIZE_T CompressInformationSize
);

BOOL WINAPI QueryCompressorInformation(
    COMPRESSOR_HANDLE CompressorHandle,
    COMPRESS_INFORMATION_CLASS CompressInformationClass,
    PVOID CompressInformation,
    SIZE_T CompressInformationSize
);

BOOL WINAPI Compress(
    COMPRESSOR_HANDLE CompressorHandle,
    LPCVOID UncompressedData,
    SIZE_T UncompressedDataSize,
    PVOID CompressedBuffer,
    SIZE_T CompressedBufferSize,
    PSIZE_T CompressedDataSize
);

BOOL WINAPI ResetCompressor(
    COMPRESSOR_HANDLE CompressorHandle
);

BOOL WINAPI CloseCompressor(
    COMPRESSOR_HANDLE CompressorHandle
);

BOOL WINAPI CreateDecompressor(
    DWORD Algorithm,
    PCOMPRESS_ALLOCATION_ROUTINES AllocationRoutines,
    PDECOMPRESSOR_HANDLE DecompressorHandle
);

BOOL WINAPI SetDecompressorInformation(
    DECOMPRESSOR_HANDLE DecompressorHandle,
    COMPRESS_INFORMATION_CLASS CompressInformationClass,
    LPCVOID CompressInformation,
    SIZE_T CompressInformationSize
);

BOOL WINAPI QueryDecompressorInformation(
    DECOMPRESSOR_HANDLE DecompressorHandle,
    COMPRESS_INFORMATION_CLASS CompressInformationClass,
    PVOID CompressInformation,
    SIZE_T CompressInformationSize
);

BOOL WINAPI Decompress(
    DECOMPRESSOR_HANDLE DecompressorHandle,
    LPCVOID CompressedData,
    SIZE_T CompressedDataSize,
    PVOID UncompressedBuffer,
    SIZE_T UncompressedBufferSize,
    PSIZE_T UncompressedDataSize
);

BOOL WINAPI ResetDecompressor(
    DECOMPRESSOR_HANDLE DecompressorHandle
);

BOOL WINAPI CloseDecompressor(
    DECOMPRESSOR_HANDLE DecompressorHandle
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#endif /* (NTDDI_VERSION >= NTDDI_WIN8) */

#endif /* _COMPRESSAPI_H */
