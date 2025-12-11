#ifndef _DBGHELP_H
#define _DBGHELP_H

#if __POCC__ >= 500
#pragma once
#endif

/* Debugger */

#include <winapifamily.h>

#define NONGAMESPARTITIONS WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_WER

#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)

#endif

#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES)

#ifdef _WIN64
#ifndef _IMAGEHLP64
#define _IMAGEHLP64
#endif
#endif

#include <pshpack8.h>

#ifdef _IMAGEHLP_SOURCE_
#define IMAGEAPI __stdcall
#define DBHLP_DEPRECIATED
#else
#define IMAGEAPI DECLSPEC_IMPORT __stdcall
#define DBHLP_DEPRECIATED
#endif

#define DBHLPAPI IMAGEAPI

#endif

#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)

#define IMAGE_SEPARATION (64*1024)

typedef struct _LOADED_IMAGE {
    PSTR ModuleName;
    HANDLE hFile;
    PUCHAR MappedAddress;
#ifdef _IMAGEHLP64
    PIMAGE_NT_HEADERS64 FileHeader;
#else /* !_IMAGEHLP64 */
    PIMAGE_NT_HEADERS32 FileHeader;
#endif /* !_IMAGEHLP64 */
    PIMAGE_SECTION_HEADER LastRvaSection;
    ULONG NumberOfSections;
    PIMAGE_SECTION_HEADER Sections;
    ULONG Characteristics;
    BOOLEAN fSystemImage;
    BOOLEAN fDOSImage;
    BOOLEAN fReadOnly;
    UCHAR Version;
    LIST_ENTRY Links;
    ULONG SizeOfImage;
} LOADED_IMAGE, *PLOADED_IMAGE;

#endif /* WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS) */

#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES)
#define MAX_SYM_NAME            2000
#endif /* WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)

#define ERROR_IMAGE_NOT_STRIPPED    0x8800
#define ERROR_NO_DBG_POINTER        0x8801
#define ERROR_NO_PDB_POINTER        0x8802

typedef BOOL (CALLBACK *PFIND_DEBUG_FILE_CALLBACK)(
    HANDLE FileHandle,
    PCSTR FileName,
    PVOID CallerData
);

HANDLE IMAGEAPI SymFindDebugInfoFile(
    HANDLE hProcess,
    PCSTR FileName,
    PSTR DebugFilePath,
    PFIND_DEBUG_FILE_CALLBACK Callback,
    PVOID CallerData
);

typedef BOOL (CALLBACK *PFIND_DEBUG_FILE_CALLBACKW)(
    HANDLE FileHandle,
    PCWSTR FileName,
    PVOID CallerData
);

HANDLE IMAGEAPI SymFindDebugInfoFileW(
    HANDLE hProcess,
    PCWSTR FileName,
    PWSTR DebugFilePath,
    PFIND_DEBUG_FILE_CALLBACKW Callback,
    PVOID CallerData
);

HANDLE IMAGEAPI FindDebugInfoFile(
    PCSTR FileName,
    PCSTR SymbolPath,
    PSTR DebugFilePath
);

HANDLE IMAGEAPI FindDebugInfoFileEx(
    PCSTR FileName,
    PCSTR SymbolPath,
    PSTR DebugFilePath,
    PFIND_DEBUG_FILE_CALLBACK Callback,
    PVOID CallerData
);

HANDLE IMAGEAPI FindDebugInfoFileExW(
    PCWSTR FileName,
    PCWSTR SymbolPath,
    PWSTR DebugFilePath,
    PFIND_DEBUG_FILE_CALLBACKW Callback,
    PVOID CallerData
);

typedef BOOL (CALLBACK *PFINDFILEINPATHCALLBACK)(
    PCSTR filename,
    PVOID context
);

BOOL IMAGEAPI SymFindFileInPath(
    HANDLE hprocess,
    PCSTR SearchPath,
    PCSTR FileName,
    PVOID id,
    DWORD two,
    DWORD three,
    DWORD flags,
    PSTR FoundFile,
    PFINDFILEINPATHCALLBACK callback,
    PVOID context
);

typedef BOOL (CALLBACK *PFINDFILEINPATHCALLBACKW)(
    PCWSTR filename,
    PVOID context
);

BOOL IMAGEAPI SymFindFileInPathW(
    HANDLE hprocess,
    PCWSTR SearchPath,
    PCWSTR FileName,
    PVOID id,
    DWORD two,
    DWORD three,
    DWORD flags,
    PWSTR FoundFile,
    PFINDFILEINPATHCALLBACKW callback,
    PVOID context
);

typedef BOOL (CALLBACK *PFIND_EXE_FILE_CALLBACK)(
    HANDLE FileHandle,
    PCSTR FileName,
    PVOID CallerData
);

HANDLE IMAGEAPI SymFindExecutableImage(
    HANDLE hProcess,
    PCSTR FileName,
    PSTR ImageFilePath,
    PFIND_EXE_FILE_CALLBACK Callback,
    PVOID CallerData
);

typedef BOOL (CALLBACK *PFIND_EXE_FILE_CALLBACKW)(
    HANDLE FileHandle,
    PCWSTR FileName,
    PVOID CallerData
);

HANDLE IMAGEAPI SymFindExecutableImageW(
    HANDLE hProcess,
    PCWSTR FileName,
    PWSTR ImageFilePath,
    PFIND_EXE_FILE_CALLBACKW Callback,
    PVOID CallerData
);

HANDLE IMAGEAPI FindExecutableImage(
    PCSTR FileName,
    PCSTR SymbolPath,
    PSTR ImageFilePath
);

HANDLE IMAGEAPI FindExecutableImageEx(
    PCSTR FileName,
    PCSTR SymbolPath,
    PSTR ImageFilePath,
    PFIND_EXE_FILE_CALLBACK Callback,
    PVOID CallerData
);

HANDLE IMAGEAPI FindExecutableImageExW(
    PCWSTR FileName,
    PCWSTR SymbolPath,
    PWSTR ImageFilePath,
    PFIND_EXE_FILE_CALLBACKW Callback,
    PVOID CallerData
);

PIMAGE_NT_HEADERS IMAGEAPI ImageNtHeader(
    PVOID Base
);

PVOID IMAGEAPI ImageDirectoryEntryToDataEx(
    PVOID Base,
    BOOLEAN MappedAsImage,
    USHORT DirectoryEntry,
    PULONG Size,
    PIMAGE_SECTION_HEADER *FoundHeader
);

PVOID IMAGEAPI ImageDirectoryEntryToData(
    PVOID Base,
    BOOLEAN MappedAsImage,
    USHORT DirectoryEntry,
    PULONG Size
);

PIMAGE_SECTION_HEADER IMAGEAPI ImageRvaToSection(
    PIMAGE_NT_HEADERS NtHeaders,
    PVOID Base,
    ULONG Rva
);

PVOID IMAGEAPI ImageRvaToVa(
    PIMAGE_NT_HEADERS NtHeaders,
    PVOID Base,
    ULONG Rva,
    PIMAGE_SECTION_HEADER *LastRvaSection
);

#ifndef _WIN64

typedef struct _IMAGE_DEBUG_INFORMATION {
    LIST_ENTRY List;
    DWORD ReservedSize;
    PVOID ReservedMappedBase;
    USHORT ReservedMachine;
    USHORT ReservedCharacteristics;
    DWORD ReservedCheckSum;
    DWORD ImageBase;
    DWORD SizeOfImage;
    DWORD ReservedNumberOfSections;
    PIMAGE_SECTION_HEADER ReservedSections;
    DWORD ReservedExportedNamesSize;
    PSTR ReservedExportedNames;
    DWORD ReservedNumberOfFunctionTableEntries;
    PIMAGE_FUNCTION_ENTRY ReservedFunctionTableEntries;
    DWORD ReservedLowestFunctionStartingAddress;
    DWORD ReservedHighestFunctionEndingAddress;
    DWORD ReservedNumberOfFpoTableEntries;
    PFPO_DATA ReservedFpoTableEntries;
    DWORD SizeOfCoffSymbols;
    PIMAGE_COFF_SYMBOLS_HEADER CoffSymbols;
    DWORD ReservedSizeOfCodeViewSymbols;
    PVOID ReservedCodeViewSymbols;
    PSTR ImageFilePath;
    PSTR ImageFileName;
    PSTR ReservedDebugFilePath;
    DWORD ReservedTimeDateStamp;
    BOOL ReservedRomImage;
    PIMAGE_DEBUG_DIRECTORY ReservedDebugDirectory;
    DWORD ReservedNumberOfDebugDirectories;
    DWORD ReservedOriginalFunctionTableBaseAddress;
    DWORD Reserved[ 2 ];
} IMAGE_DEBUG_INFORMATION, *PIMAGE_DEBUG_INFORMATION;

PIMAGE_DEBUG_INFORMATION IMAGEAPI MapDebugInformation(
    HANDLE FileHandle,
    PCSTR FileName,
    PCSTR SymbolPath,
    ULONG ImageBase
);

BOOL IMAGEAPI UnmapDebugInformation(
    PIMAGE_DEBUG_INFORMATION DebugInfo
);

#endif /* !_WIN64 */

BOOL IMAGEAPI SearchTreeForFile(
    PCSTR RootPath,
    PCSTR InputPathName,
    PSTR OutputPathBuffer
);

BOOL IMAGEAPI SearchTreeForFileW(
    PCWSTR RootPath,
    PCWSTR InputPathName,
    PWSTR OutputPathBuffer
);

typedef BOOL (CALLBACK *PENUMDIRTREE_CALLBACK)(
    PCSTR FilePath,
    PVOID CallerData
);

BOOL IMAGEAPI EnumDirTree(
    HANDLE hProcess,
    PCSTR RootPath,
    PCSTR InputPathName,
    PSTR OutputPathBuffer,
    PENUMDIRTREE_CALLBACK cb,
    PVOID data
);

typedef BOOL (CALLBACK *PENUMDIRTREE_CALLBACKW)(
    PCWSTR FilePath,
    PVOID CallerData
);

BOOL IMAGEAPI EnumDirTreeW(
    HANDLE hProcess,
    PCWSTR RootPath,
    PCWSTR InputPathName,
    PWSTR OutputPathBuffer,
    PENUMDIRTREE_CALLBACKW cb,
    PVOID data
);

BOOL IMAGEAPI MakeSureDirectoryPathExists(
    PCSTR DirPath
);

#define UNDNAME_COMPLETE                 (0x0000)
#define UNDNAME_NO_LEADING_UNDERSCORES   (0x0001)
#define UNDNAME_NO_MS_KEYWORDS           (0x0002)
#define UNDNAME_NO_FUNCTION_RETURNS      (0x0004)
#define UNDNAME_NO_ALLOCATION_MODEL      (0x0008)
#define UNDNAME_NO_ALLOCATION_LANGUAGE   (0x0010)
#define UNDNAME_NO_MS_THISTYPE           (0x0020)
#define UNDNAME_NO_CV_THISTYPE           (0x0040)
#define UNDNAME_NO_THISTYPE              (0x0060)
#define UNDNAME_NO_ACCESS_SPECIFIERS     (0x0080)
#define UNDNAME_NO_THROW_SIGNATURES      (0x0100)
#define UNDNAME_NO_MEMBER_TYPE           (0x0200)
#define UNDNAME_NO_RETURN_UDT_MODEL      (0x0400)
#define UNDNAME_32_BIT_DECODE            (0x0800)
#define UNDNAME_NAME_ONLY                (0x1000)

#define UNDNAME_NO_ARGUMENTS             (0x2000)
#define UNDNAME_NO_SPECIAL_SYMS          (0x4000)

DWORD IMAGEAPI WINAPI UnDecorateSymbolName(
    PCSTR name,
    PSTR outputString,
    DWORD maxStringLength,
    DWORD flags
);

DWORD IMAGEAPI WINAPI UnDecorateSymbolNameW(
    PCWSTR name,
    PWSTR outputString,
    DWORD maxStringLength,
    DWORD flags
);

#define DBHHEADER_DEBUGDIRS     0x1
#define DBHHEADER_CVMISC        0x2
#define DBHHEADER_PDBGUID       0x3

#endif /* WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS) */

#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES)

typedef struct _MODLOAD_DATA {
    DWORD ssize;
    DWORD ssig;
    PVOID data;
    DWORD size;
    DWORD flags;
} MODLOAD_DATA, *PMODLOAD_DATA;

#endif /* WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)

typedef struct _MODLOAD_CVMISC {
    DWORD oCV;
    size_t cCV;
    DWORD oMisc;
    size_t cMisc;
    DWORD dtImage;
    DWORD cImage;
} MODLOAD_CVMISC, *PMODLOAD_CVMISC;

typedef struct _MODLOAD_PDBGUID_PDBAGE {
    GUID PdbGuid;
    DWORD PdbAge;
} MODLOAD_PDBGUID_PDBAGE, *PMODLOAD_PDBGUID_PDBAGE;

#endif /* WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS) */

#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES)

typedef enum {
    AddrMode1616,
    AddrMode1632,
    AddrModeReal,
    AddrModeFlat
} ADDRESS_MODE;

typedef struct _tagADDRESS64 {
    DWORD64 Offset;
    WORD Segment;
    ADDRESS_MODE Mode;
} ADDRESS64, *LPADDRESS64;

#endif /* WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define ADDRESS ADDRESS64
#define LPADDRESS LPADDRESS64
#else
typedef struct _tagADDRESS {
    DWORD Offset;
    WORD Segment;
    ADDRESS_MODE Mode;
} ADDRESS, *LPADDRESS;

static inline void Address32To64(
    LPADDRESS a32,
    LPADDRESS64 a64)
{
    a64->Offset = (ULONG64)(LONG64)(LONG)a32->Offset;
    a64->Segment = a32->Segment;
    a64->Mode = a32->Mode;
}

static inline void Address64To32(
    LPADDRESS64 a64,
    LPADDRESS a32)
{
    a32->Offset = (ULONG)a64->Offset;
    a32->Segment = a64->Segment;
    a32->Mode = a64->Mode;
}
#endif

#endif /* WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS) */

#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES)

typedef struct _KDHELP64 {
    DWORD64 Thread;
    DWORD ThCallbackStack;
    DWORD ThCallbackBStore;
    DWORD NextCallback;
    DWORD FramePointer;
    DWORD64 KiCallUserMode;
    DWORD64 KeUserCallbackDispatcher;
    DWORD64 SystemRangeStart;
    DWORD64 KiUserExceptionDispatcher;
    DWORD64 StackBase;
    DWORD64 StackLimit;
    DWORD BuildVersion;
    DWORD RetpolineStubFunctionTableSize;
    DWORD64 RetpolineStubFunctionTable;
    DWORD RetpolineStubOffset;
    DWORD RetpolineStubSize;
    DWORD64 Reserved0[2];
} KDHELP64, *PKDHELP64;

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define KDHELP KDHELP64
#define PKDHELP PKDHELP64
#else
typedef struct _KDHELP {
    DWORD Thread;
    DWORD ThCallbackStack;
    DWORD NextCallback;
    DWORD FramePointer;
    DWORD KiCallUserMode;
    DWORD KeUserCallbackDispatcher;
    DWORD SystemRangeStart;
    DWORD ThCallbackBStore;
    DWORD KiUserExceptionDispatcher;
    DWORD StackBase;
    DWORD StackLimit;
    DWORD Reserved[5];
} KDHELP, *PKDHELP;

#endif

#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)
static inline void KdHelp32To64(PKDHELP p32, PKDHELP64 p64)
{
    p64->Thread = p32->Thread;
    p64->ThCallbackStack = p32->ThCallbackStack;
    p64->NextCallback = p32->NextCallback;
    p64->FramePointer = p32->FramePointer;
    p64->KiCallUserMode = p32->KiCallUserMode;
    p64->KeUserCallbackDispatcher = p32->KeUserCallbackDispatcher;
    p64->SystemRangeStart = p32->SystemRangeStart;
    p64->KiUserExceptionDispatcher = p32->KiUserExceptionDispatcher;
    p64->StackBase = p32->StackBase;
    p64->StackLimit = p32->StackLimit;
}
#endif /* WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS) */

#endif /* WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES)
typedef struct _tagSTACKFRAME64 {
    ADDRESS64 AddrPC;
    ADDRESS64 AddrReturn;
    ADDRESS64 AddrFrame;
    ADDRESS64 AddrStack;
    ADDRESS64 AddrBStore;
    PVOID FuncTableEntry;
    DWORD64 Params[4];
    BOOL Far;
    BOOL Virtual;
    DWORD64 Reserved[3];
    KDHELP64 KdHelp;
} STACKFRAME64, *LPSTACKFRAME64;
#endif /* WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)

#define INLINE_FRAME_CONTEXT_INIT   0
#define INLINE_FRAME_CONTEXT_IGNORE 0xFFFFFFFF

typedef struct _tagSTACKFRAME_EX {
    ADDRESS64 AddrPC;
    ADDRESS64 AddrReturn;
    ADDRESS64 AddrFrame;
    ADDRESS64 AddrStack;
    ADDRESS64 AddrBStore;
    PVOID FuncTableEntry;
    DWORD64 Params[4];
    BOOL Far;
    BOOL Virtual;
    DWORD64 Reserved[3];
    KDHELP64 KdHelp;
    DWORD StackFrameSize;
    DWORD InlineFrameContext;
} STACKFRAME_EX, *LPSTACKFRAME_EX;

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define STACKFRAME STACKFRAME64
#define LPSTACKFRAME LPSTACKFRAME64
#else
typedef struct _tagSTACKFRAME {
    ADDRESS AddrPC;
    ADDRESS AddrReturn;
    ADDRESS AddrFrame;
    ADDRESS AddrStack;
    PVOID FuncTableEntry;
    DWORD Params[4];
    BOOL Far;
    BOOL Virtual;
    DWORD Reserved[3];
    KDHELP KdHelp;
    ADDRESS AddrBStore;
} STACKFRAME, *LPSTACKFRAME;
#endif

#endif /* WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS) */

#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES)

typedef BOOL (__stdcall *PREAD_PROCESS_MEMORY_ROUTINE64)(
    HANDLE hProcess,
    DWORD64 qwBaseAddress,
    PVOID lpBuffer,
    DWORD nSize,
    LPDWORD lpNumberOfBytesRead
);

typedef PVOID (__stdcall *PFUNCTION_TABLE_ACCESS_ROUTINE64)(
    HANDLE ahProcess,
    DWORD64 AddrBase
);

typedef DWORD64 (__stdcall *PGET_MODULE_BASE_ROUTINE64)(
    HANDLE hProcess,
    DWORD64 Address
);

typedef DWORD64 (__stdcall *PTRANSLATE_ADDRESS_ROUTINE64)(
    HANDLE hProcess,
    HANDLE hThread,
    LPADDRESS64 lpaddr
);

#define TARGET_ATTRIBUTE_PACMASK 0x00000001

#define TARGET_ATTRIBUTE_PACMASK_LIVETARGET 0xFFFFFFFFFFFFFFFFull

typedef BOOL (__stdcall *PGET_TARGET_ATTRIBUTE_VALUE64)(
    HANDLE hProcess,
    DWORD Attribute,
    DWORD64 AttributeData,
    DWORD64 *AttributeValue
);

BOOL IMAGEAPI StackWalk64(
    DWORD MachineType,
    HANDLE hProcess,
    HANDLE hThread,
    LPSTACKFRAME64 StackFrame,
    PVOID ContextRecord,
    PREAD_PROCESS_MEMORY_ROUTINE64 ReadMemoryRoutine,
    PFUNCTION_TABLE_ACCESS_ROUTINE64 FunctionTableAccessRoutine,
    PGET_MODULE_BASE_ROUTINE64 GetModuleBaseRoutine,
    PTRANSLATE_ADDRESS_ROUTINE64 TranslateAddress
);

#endif /* WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)

#define SYM_STKWALK_DEFAULT         0x00000000
#define SYM_STKWALK_FORCE_FRAMEPTR  0x00000001
#define SYM_STKWALK_ZEROEXTEND_PTRS 0x00000002
BOOL IMAGEAPI StackWalkEx(
    DWORD MachineType,
    HANDLE hProcess,
    HANDLE hThread,
    LPSTACKFRAME_EX StackFrame,
    PVOID ContextRecord,
    PREAD_PROCESS_MEMORY_ROUTINE64 ReadMemoryRoutine,
    PFUNCTION_TABLE_ACCESS_ROUTINE64 FunctionTableAccessRoutine,
    PGET_MODULE_BASE_ROUTINE64 GetModuleBaseRoutine,
    PTRANSLATE_ADDRESS_ROUTINE64 TranslateAddress,
    DWORD Flags
);

BOOL IMAGEAPI StackWalk2(
    DWORD MachineType,
    HANDLE hProcess,
    HANDLE hThread,
    LPSTACKFRAME_EX StackFrame,
    PVOID ContextRecord,
    PREAD_PROCESS_MEMORY_ROUTINE64 ReadMemoryRoutine,
    PFUNCTION_TABLE_ACCESS_ROUTINE64 FunctionTableAccessRoutine,
    PGET_MODULE_BASE_ROUTINE64 GetModuleBaseRoutine,
    PTRANSLATE_ADDRESS_ROUTINE64 TranslateAddress,
    PGET_TARGET_ATTRIBUTE_VALUE64 GetTargetAttributeValue,
    DWORD Flags
);

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)

#define PREAD_PROCESS_MEMORY_ROUTINE PREAD_PROCESS_MEMORY_ROUTINE64
#define PFUNCTION_TABLE_ACCESS_ROUTINE PFUNCTION_TABLE_ACCESS_ROUTINE64
#define PGET_MODULE_BASE_ROUTINE PGET_MODULE_BASE_ROUTINE64
#define PTRANSLATE_ADDRESS_ROUTINE PTRANSLATE_ADDRESS_ROUTINE64
#define PGET_TARGET_ATTRIBUTE_VALUE PGET_TARGET_ATTRIBUTE_VALUE64

#define StackWalk StackWalk64

#else

typedef BOOL (__stdcall *PREAD_PROCESS_MEMORY_ROUTINE)(
    HANDLE hProcess,
    DWORD lpBaseAddress,
    PVOID lpBuffer,
    DWORD nSize,
    PDWORD lpNumberOfBytesRead
);

typedef PVOID (__stdcall *PFUNCTION_TABLE_ACCESS_ROUTINE)(
    HANDLE hProcess,
    DWORD AddrBase
);

typedef DWORD (__stdcall *PGET_MODULE_BASE_ROUTINE)(
    HANDLE hProcess,
    DWORD Address
);

typedef DWORD (__stdcall *PTRANSLATE_ADDRESS_ROUTINE)(
    HANDLE hProcess,
    HANDLE hThread,
    LPADDRESS lpaddr
);

BOOL IMAGEAPI StackWalk(
    DWORD MachineType,
    HANDLE hProcess,
    HANDLE hThread,
    LPSTACKFRAME StackFrame,
    PVOID ContextRecord,
    PREAD_PROCESS_MEMORY_ROUTINE ReadMemoryRoutine,
    PFUNCTION_TABLE_ACCESS_ROUTINE FunctionTableAccessRoutine,
    PGET_MODULE_BASE_ROUTINE GetModuleBaseRoutine,
    PTRANSLATE_ADDRESS_ROUTINE TranslateAddress
);

#endif

#define API_VERSION_NUMBER 12

typedef struct API_VERSION {
    USHORT MajorVersion;
    USHORT MinorVersion;
    USHORT Revision;
    USHORT Reserved;
} API_VERSION, *LPAPI_VERSION;

LPAPI_VERSION IMAGEAPI ImagehlpApiVersion(
    void
);

LPAPI_VERSION IMAGEAPI ImagehlpApiVersionEx(
    LPAPI_VERSION AppVersion
);

DWORD IMAGEAPI GetTimestampForLoadedLibrary(
    HMODULE Module
);

typedef BOOL (CALLBACK *PSYM_ENUMMODULES_CALLBACK64)(
    PCSTR ModuleName,
    DWORD64 BaseOfDll,
    PVOID UserContext
);

typedef BOOL (CALLBACK *PSYM_ENUMMODULES_CALLBACKW64)(
    PCWSTR ModuleName,
    DWORD64 BaseOfDll,
    PVOID UserContext
);

typedef BOOL (CALLBACK *PENUMLOADED_MODULES_CALLBACK64)(
    PCSTR ModuleName,
    DWORD64 ModuleBase,
    ULONG ModuleSize,
    PVOID UserContext
);

typedef BOOL (CALLBACK *PENUMLOADED_MODULES_CALLBACKW64)(
    PCWSTR ModuleName,
    DWORD64 ModuleBase,
    ULONG ModuleSize,
    PVOID UserContext
);

typedef BOOL (CALLBACK *PSYM_ENUMSYMBOLS_CALLBACK64)(
    PCSTR SymbolName,
    DWORD64 SymbolAddress,
    ULONG SymbolSize,
    PVOID UserContext
);

typedef BOOL (CALLBACK *PSYM_ENUMSYMBOLS_CALLBACK64W)(
    PCWSTR SymbolName,
    DWORD64 SymbolAddress,
    ULONG SymbolSize,
    PVOID UserContext
);

typedef BOOL (CALLBACK *PSYMBOL_REGISTERED_CALLBACK64)(
    HANDLE hProcess,
    ULONG ActionCode,
    ULONG64 CallbackData,
    ULONG64 UserContext
);

typedef PVOID (CALLBACK *PSYMBOL_FUNCENTRY_CALLBACK)(
    HANDLE hProcess,
    DWORD AddrBase,
    PVOID UserContext
);

typedef PVOID (CALLBACK *PSYMBOL_FUNCENTRY_CALLBACK64)(
    HANDLE hProcess,
    ULONG64 AddrBase,
    ULONG64 UserContext
);

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)

#define PSYM_ENUMMODULES_CALLBACK PSYM_ENUMMODULES_CALLBACK64
#define PSYM_ENUMSYMBOLS_CALLBACK PSYM_ENUMSYMBOLS_CALLBACK64
#define PSYM_ENUMSYMBOLS_CALLBACKW PSYM_ENUMSYMBOLS_CALLBACK64W
#define PENUMLOADED_MODULES_CALLBACK PENUMLOADED_MODULES_CALLBACK64
#define PSYMBOL_REGISTERED_CALLBACK PSYMBOL_REGISTERED_CALLBACK64
#define PSYMBOL_FUNCENTRY_CALLBACK PSYMBOL_FUNCENTRY_CALLBACK64

#else

typedef BOOL (CALLBACK *PSYM_ENUMMODULES_CALLBACK)(
    PCSTR ModuleName,
    ULONG BaseOfDll,
    PVOID UserContext
);

typedef BOOL (CALLBACK *PSYM_ENUMSYMBOLS_CALLBACK)(
    PCSTR SymbolName,
    ULONG SymbolAddress,
    ULONG SymbolSize,
    PVOID UserContext
);

typedef BOOL (CALLBACK *PSYM_ENUMSYMBOLS_CALLBACKW)(
    PCWSTR SymbolName,
    ULONG SymbolAddress,
    ULONG SymbolSize,
    PVOID UserContext
);

typedef BOOL (CALLBACK *PENUMLOADED_MODULES_CALLBACK)(
    PCSTR ModuleName,
    ULONG ModuleBase,
    ULONG ModuleSize,
    PVOID UserContext
);

typedef BOOL (CALLBACK *PSYMBOL_REGISTERED_CALLBACK)(
    HANDLE hProcess,
    ULONG ActionCode,
    PVOID CallbackData,
    PVOID UserContext
);

#endif

#ifdef _NO_CVCONST_H

enum SymTagEnum {
    SymTagNull,
    SymTagExe,
    SymTagCompiland,
    SymTagCompilandDetails,
    SymTagCompilandEnv,
    SymTagFunction,
    SymTagBlock,
    SymTagData,
    SymTagAnnotation,
    SymTagLabel,
    SymTagPublicSymbol,
    SymTagUDT,
    SymTagEnum,
    SymTagFunctionType,
    SymTagPointerType,
    SymTagArrayType,
    SymTagBaseType,
    SymTagTypedef,
    SymTagBaseClass,
    SymTagFriend,
    SymTagFunctionArgType,
    SymTagFuncDebugStart,
    SymTagFuncDebugEnd,
    SymTagUsingNamespace,
    SymTagVTableShape,
    SymTagVTable,
    SymTagCustom,
    SymTagThunk,
    SymTagCustomType,
    SymTagManagedType,
    SymTagDimension,
    SymTagCallSite,
    SymTagInlineSite,
    SymTagBaseInterface,
    SymTagVectorType,
    SymTagMatrixType,
    SymTagHLSLType,
    SymTagCaller,
    SymTagCallee,
    SymTagExport,
    SymTagHeapAllocationSite,
    SymTagCoffGroup,
    SymTagMax
};

#endif

#define SYMFLAG_VALUEPRESENT        0x00000001
#define SYMFLAG_REGISTER            0x00000008
#define SYMFLAG_REGREL              0x00000010
#define SYMFLAG_FRAMEREL            0x00000020
#define SYMFLAG_PARAMETER           0x00000040
#define SYMFLAG_LOCAL               0x00000080
#define SYMFLAG_CONSTANT            0x00000100
#define SYMFLAG_EXPORT              0x00000200
#define SYMFLAG_FORWARDER           0x00000400
#define SYMFLAG_FUNCTION            0x00000800
#define SYMFLAG_VIRTUAL             0x00001000
#define SYMFLAG_THUNK               0x00002000
#define SYMFLAG_TLSREL              0x00004000
#define SYMFLAG_SLOT                0x00008000
#define SYMFLAG_ILREL               0x00010000
#define SYMFLAG_METADATA            0x00020000
#define SYMFLAG_CLR_TOKEN           0x00040000
#define SYMFLAG_NULL                0x00080000
#define SYMFLAG_FUNC_NO_RETURN      0x00100000
#define SYMFLAG_SYNTHETIC_ZEROBASE  0x00200000
#define SYMFLAG_PUBLIC_CODE         0x00400000
#define SYMFLAG_REGREL_ALIASINDIR   0x00800000
#define SYMFLAG_FIXUP_ARM64X        0x01000000
#define SYMFLAG_GLOBAL              0x02000000

#define SYMFLAG_RESET            0x80000000

#endif /* WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS) */

#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES)

typedef enum {
    SymNone = 0,
    SymCoff,
    SymCv,
    SymPdb,
    SymExport,
    SymDeferred,
    SymSym,
    SymDia,
    SymVirtual,
    NumSymTypes
} SYM_TYPE;

typedef struct _IMAGEHLP_SYMBOL64 {
    DWORD SizeOfStruct;
    DWORD64 Address;
    DWORD Size;
    DWORD Flags;
    DWORD MaxNameLength;
    CHAR Name[1];
} IMAGEHLP_SYMBOL64, *PIMAGEHLP_SYMBOL64;

typedef struct _IMAGEHLP_SYMBOL64_PACKAGE {
    IMAGEHLP_SYMBOL64 sym;
    CHAR name[MAX_SYM_NAME + 1];
} IMAGEHLP_SYMBOL64_PACKAGE, *PIMAGEHLP_SYMBOL64_PACKAGE;

typedef struct _IMAGEHLP_SYMBOLW64 {
    DWORD SizeOfStruct;
    DWORD64 Address;
    DWORD Size;
    DWORD Flags;
    DWORD MaxNameLength;
    WCHAR Name[1];
} IMAGEHLP_SYMBOLW64, *PIMAGEHLP_SYMBOLW64;

typedef struct _IMAGEHLP_SYMBOLW64_PACKAGE {
    IMAGEHLP_SYMBOLW64 sym;
    WCHAR name[MAX_SYM_NAME + 1];
} IMAGEHLP_SYMBOLW64_PACKAGE, *PIMAGEHLP_SYMBOLW64_PACKAGE;

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)

#define IMAGEHLP_SYMBOL IMAGEHLP_SYMBOL64
#define PIMAGEHLP_SYMBOL PIMAGEHLP_SYMBOL64
#define IMAGEHLP_SYMBOL_PACKAGE IMAGEHLP_SYMBOL64_PACKAGE
#define PIMAGEHLP_SYMBOL_PACKAGE PIMAGEHLP_SYMBOL64_PACKAGE
#define IMAGEHLP_SYMBOLW IMAGEHLP_SYMBOLW64
#define PIMAGEHLP_SYMBOLW PIMAGEHLP_SYMBOLW64
#define IMAGEHLP_SYMBOLW_PACKAGE IMAGEHLP_SYMBOLW64_PACKAGE
#define PIMAGEHLP_SYMBOLW_PACKAGE PIMAGEHLP_SYMBOLW64_PACKAGE

#else

typedef struct _IMAGEHLP_SYMBOL {
    DWORD SizeOfStruct;
    DWORD Address;
    DWORD Size;
    DWORD Flags;
    DWORD MaxNameLength;
    CHAR Name[1];
} IMAGEHLP_SYMBOL, *PIMAGEHLP_SYMBOL;

typedef struct _IMAGEHLP_SYMBOL_PACKAGE {
    IMAGEHLP_SYMBOL sym;
    CHAR name[MAX_SYM_NAME + 1];
} IMAGEHLP_SYMBOL_PACKAGE, *PIMAGEHLP_SYMBOL_PACKAGE;

typedef struct _IMAGEHLP_SYMBOLW {
    DWORD SizeOfStruct;
    DWORD Address;
    DWORD Size;
    DWORD Flags;
    DWORD MaxNameLength;
    WCHAR Name[1];
} IMAGEHLP_SYMBOLW, *PIMAGEHLP_SYMBOLW;

typedef struct _IMAGEHLP_SYMBOLW_PACKAGE {
    IMAGEHLP_SYMBOLW sym;
    WCHAR name[MAX_SYM_NAME + 1];
} IMAGEHLP_SYMBOLW_PACKAGE, *PIMAGEHLP_SYMBOLW_PACKAGE;

#endif

typedef struct _IMAGEHLP_MODULE64 {
    DWORD SizeOfStruct;
    DWORD64 BaseOfImage;
    DWORD ImageSize;
    DWORD TimeDateStamp;
    DWORD CheckSum;
    DWORD NumSyms;
    SYM_TYPE SymType;
    CHAR ModuleName[32];
    CHAR ImageName[256];
    CHAR LoadedImageName[256];
    CHAR LoadedPdbName[256];
    DWORD CVSig;
    CHAR CVData[MAX_PATH * 3];
    DWORD PdbSig;
    GUID PdbSig70;
    DWORD PdbAge;
    BOOL PdbUnmatched;
    BOOL DbgUnmatched;
    BOOL LineNumbers;
    BOOL GlobalSymbols;
    BOOL TypeInfo;
    BOOL SourceIndexed;
    BOOL Publics;
    DWORD MachineType;
    DWORD Reserved;
} IMAGEHLP_MODULE64, *PIMAGEHLP_MODULE64;

typedef struct _IMAGEHLP_MODULE64_EX {
    IMAGEHLP_MODULE64 Module;
    DWORD RegionFlags;
} IMAGEHLP_MODULE64_EX, *PIMAGEHLP_MODULE64_EX;

typedef struct _IMAGEHLP_MODULEW64 {
    DWORD SizeOfStruct;
    DWORD64 BaseOfImage;
    DWORD ImageSize;
    DWORD TimeDateStamp;
    DWORD CheckSum;
    DWORD NumSyms;
    SYM_TYPE SymType;
    WCHAR ModuleName[32];
    WCHAR ImageName[256];
    WCHAR LoadedImageName[256];
    WCHAR LoadedPdbName[256];
    DWORD CVSig;
    WCHAR CVData[MAX_PATH * 3];
    DWORD PdbSig;
    GUID PdbSig70;
    DWORD PdbAge;
    BOOL PdbUnmatched;
    BOOL DbgUnmatched;
    BOOL LineNumbers;
    BOOL GlobalSymbols;
    BOOL TypeInfo;
    BOOL SourceIndexed;
    BOOL Publics;
    DWORD MachineType;
    DWORD Reserved;
} IMAGEHLP_MODULEW64, *PIMAGEHLP_MODULEW64;

typedef struct _IMAGEHLP_MODULEW64_EX {
    IMAGEHLP_MODULEW64 Module;
    DWORD RegionFlags;
} IMAGEHLP_MODULEW64_EX, *PIMAGEHLP_MODULEW64_EX;

#define IMAGEHLP_MODULE_REGION_DLLBASE       0x01
#define IMAGEHLP_MODULE_REGION_DLLRANGE      0x02
#define IMAGEHLP_MODULE_REGION_ADDITIONAL    0x04
#define IMAGEHLP_MODULE_REGION_JIT           0x08
#define IMAGEHLP_MODULE_REGION_ALL           0xFF

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define IMAGEHLP_MODULE IMAGEHLP_MODULE64
#define PIMAGEHLP_MODULE PIMAGEHLP_MODULE64
#define IMAGEHLP_MODULEW IMAGEHLP_MODULEW64
#define PIMAGEHLP_MODULEW PIMAGEHLP_MODULEW64
#else
typedef struct _IMAGEHLP_MODULE {
    DWORD SizeOfStruct;
    DWORD BaseOfImage;
    DWORD ImageSize;
    DWORD TimeDateStamp;
    DWORD CheckSum;
    DWORD NumSyms;
    SYM_TYPE SymType;
    CHAR ModuleName[32];
    CHAR ImageName[256];
    CHAR LoadedImageName[256];
} IMAGEHLP_MODULE, *PIMAGEHLP_MODULE;

typedef struct _IMAGEHLP_MODULEW {
    DWORD SizeOfStruct;
    DWORD BaseOfImage;
    DWORD ImageSize;
    DWORD TimeDateStamp;
    DWORD CheckSum;
    DWORD NumSyms;
    SYM_TYPE SymType;
    WCHAR ModuleName[32];
    WCHAR ImageName[256];
    WCHAR LoadedImageName[256];
} IMAGEHLP_MODULEW, *PIMAGEHLP_MODULEW;
#endif

typedef struct _IMAGEHLP_LINE64 {
    DWORD SizeOfStruct;
    PVOID Key;
    DWORD LineNumber;
    PCHAR FileName;
    DWORD64 Address;
} IMAGEHLP_LINE64, *PIMAGEHLP_LINE64;

typedef struct _IMAGEHLP_LINEW64 {
    DWORD SizeOfStruct;
    PVOID Key;
    DWORD LineNumber;
    PWSTR FileName;
    DWORD64 Address;
} IMAGEHLP_LINEW64, *PIMAGEHLP_LINEW64;

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define IMAGEHLP_LINE IMAGEHLP_LINE64
#define PIMAGEHLP_LINE PIMAGEHLP_LINE64
#else
typedef struct _IMAGEHLP_LINE {
    DWORD SizeOfStruct;
    PVOID Key;
    DWORD LineNumber;
    PCHAR FileName;
    DWORD Address;
} IMAGEHLP_LINE, *PIMAGEHLP_LINE;

typedef struct _IMAGEHLP_LINEW {
    DWORD SizeOfStruct;
    PVOID Key;
    DWORD LineNumber;
    PCHAR FileName;
    DWORD64 Address;
} IMAGEHLP_LINEW, *PIMAGEHLP_LINEW;
#endif

#endif /* WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)

typedef struct _SOURCEFILE {
    DWORD64 ModBase;
    PCHAR FileName;
} SOURCEFILE, *PSOURCEFILE;

typedef struct _SOURCEFILEW {
    DWORD64 ModBase;
    PWSTR FileName;
} SOURCEFILEW, *PSOURCEFILEW;

#define CBA_DEFERRED_SYMBOL_LOAD_START          0x00000001
#define CBA_DEFERRED_SYMBOL_LOAD_COMPLETE       0x00000002
#define CBA_DEFERRED_SYMBOL_LOAD_FAILURE        0x00000003
#define CBA_SYMBOLS_UNLOADED                    0x00000004
#define CBA_DUPLICATE_SYMBOL                    0x00000005
#define CBA_READ_MEMORY                         0x00000006
#define CBA_DEFERRED_SYMBOL_LOAD_CANCEL         0x00000007
#define CBA_SET_OPTIONS                         0x00000008
#define CBA_EVENT                               0x00000010
#define CBA_DEFERRED_SYMBOL_LOAD_PARTIAL        0x00000020
#define CBA_DEBUG_INFO                          0x10000000
#define CBA_SRCSRV_INFO                         0x20000000
#define CBA_SRCSRV_EVENT                        0x40000000
#define CBA_UPDATE_STATUS_BAR                   0x50000000
#define CBA_ENGINE_PRESENT                      0x60000000
#define CBA_CHECK_ENGOPT_DISALLOW_NETWORK_PATHS 0x70000000
#define CBA_CHECK_ARM_MACHINE_THUMB_TYPE_OVERRIDE 0x80000000
#define CBA_XML_LOG                             0x90000000
#define CBA_MAP_JIT_SYMBOL                      0xA0000000

typedef struct _IMAGEHLP_CBA_READ_MEMORY {
    DWORD64 addr;
    PVOID buf;
    DWORD bytes;
    DWORD *bytesread;
} IMAGEHLP_CBA_READ_MEMORY, *PIMAGEHLP_CBA_READ_MEMORY;

enum {
    sevInfo = 0,
    sevProblem,
    sevAttn,
    sevFatal,
    sevMax
};

#define EVENT_SRCSPEW_START 100
#define EVENT_SRCSPEW       100
#define EVENT_SRCSPEW_END   199

typedef struct _IMAGEHLP_CBA_EVENT {
    DWORD severity;
    DWORD code;
    PCHAR desc;
    PVOID object;
} IMAGEHLP_CBA_EVENT, *PIMAGEHLP_CBA_EVENT;

typedef struct _IMAGEHLP_CBA_EVENTW {
    DWORD severity;
    DWORD code;
    PCWSTR desc;
    PVOID object;
} IMAGEHLP_CBA_EVENTW, *PIMAGEHLP_CBA_EVENTW;

typedef struct _IMAGEHLP_DEFERRED_SYMBOL_LOAD64 {
    DWORD SizeOfStruct;
    DWORD64 BaseOfImage;
    DWORD CheckSum;
    DWORD TimeDateStamp;
    CHAR FileName[MAX_PATH];
    BOOLEAN Reparse;
    HANDLE hFile;
    DWORD Flags;
} IMAGEHLP_DEFERRED_SYMBOL_LOAD64, *PIMAGEHLP_DEFERRED_SYMBOL_LOAD64;

typedef struct _IMAGEHLP_DEFERRED_SYMBOL_LOADW64 {
    DWORD SizeOfStruct;
    DWORD64 BaseOfImage;
    DWORD CheckSum;
    DWORD TimeDateStamp;
    WCHAR FileName[MAX_PATH + 1];
    BOOLEAN Reparse;
    HANDLE hFile;
    DWORD Flags;
} IMAGEHLP_DEFERRED_SYMBOL_LOADW64, *PIMAGEHLP_DEFERRED_SYMBOL_LOADW64;

#define DSLFLAG_MISMATCHED_PDB              0x1
#define DSLFLAG_MISMATCHED_DBG              0x2
#define FLAG_ENGINE_PRESENT                 0x4
#define FLAG_ENGOPT_DISALLOW_NETWORK_PATHS  0x8
#define FLAG_OVERRIDE_ARM_MACHINE_TYPE      0x10

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define IMAGEHLP_DEFERRED_SYMBOL_LOAD IMAGEHLP_DEFERRED_SYMBOL_LOAD64
#define PIMAGEHLP_DEFERRED_SYMBOL_LOAD PIMAGEHLP_DEFERRED_SYMBOL_LOAD64
#else
typedef struct _IMAGEHLP_DEFERRED_SYMBOL_LOAD {
    DWORD SizeOfStruct;
    DWORD BaseOfImage;
    DWORD CheckSum;
    DWORD TimeDateStamp;
    CHAR FileName[MAX_PATH];
    BOOLEAN Reparse;
    HANDLE hFile;
} IMAGEHLP_DEFERRED_SYMBOL_LOAD, *PIMAGEHLP_DEFERRED_SYMBOL_LOAD;
#endif

typedef struct _IMAGEHLP_DUPLICATE_SYMBOL64 {
    DWORD SizeOfStruct;
    DWORD NumberOfDups;
    PIMAGEHLP_SYMBOL64 Symbol;
    DWORD SelectedSymbol;
} IMAGEHLP_DUPLICATE_SYMBOL64, *PIMAGEHLP_DUPLICATE_SYMBOL64;

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define IMAGEHLP_DUPLICATE_SYMBOL IMAGEHLP_DUPLICATE_SYMBOL64
#define PIMAGEHLP_DUPLICATE_SYMBOL PIMAGEHLP_DUPLICATE_SYMBOL64
#else
typedef struct _IMAGEHLP_DUPLICATE_SYMBOL {
    DWORD SizeOfStruct;
    DWORD NumberOfDups;
    PIMAGEHLP_SYMBOL Symbol;
    DWORD SelectedSymbol;
} IMAGEHLP_DUPLICATE_SYMBOL, *PIMAGEHLP_DUPLICATE_SYMBOL;
#endif

typedef struct _IMAGEHLP_JIT_SYMBOL_MAP {
    DWORD SizeOfStruct;
    DWORD64 Address;
    DWORD64 BaseOfImage;
} IMAGEHLP_JIT_SYMBOLMAP, *PIMAGEHLP_JIT_SYMBOLMAP;

BOOL IMAGEAPI SymSetParentWindow(
    HWND hwnd
);

PCHAR IMAGEAPI SymSetHomeDirectory(
    HANDLE hProcess,
    PCSTR dir
);

PWSTR IMAGEAPI SymSetHomeDirectoryW(
    HANDLE hProcess,
    PCWSTR dir
);

PCHAR IMAGEAPI SymGetHomeDirectory(
    DWORD type,
    PSTR dir,
    size_t size
);

PWSTR IMAGEAPI SymGetHomeDirectoryW(
    DWORD type,
    PWSTR dir,
    size_t size
);

typedef enum {
    hdBase = 0,
    hdSym,
    hdSrc,
    hdMax
} IMAGEHLP_HD_TYPE;

typedef struct _OMAP {
    ULONG rva;
    ULONG rvaTo;
} OMAP, *POMAP;

BOOL IMAGEAPI SymGetOmaps(
    HANDLE hProcess,
    DWORD64 BaseOfDll,
    POMAP *OmapTo,
    PDWORD64 cOmapTo,
    POMAP *OmapFrom,
    PDWORD64 cOmapFrom
);

#endif /* WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

#define SYMOPT_CASE_INSENSITIVE          0x00000001
#define SYMOPT_UNDNAME                   0x00000002
#define SYMOPT_DEFERRED_LOADS            0x00000004
#define SYMOPT_NO_CPP                    0x00000008
#define SYMOPT_LOAD_LINES                0x00000010
#define SYMOPT_OMAP_FIND_NEAREST         0x00000020
#define SYMOPT_LOAD_ANYTHING             0x00000040
#define SYMOPT_IGNORE_CVREC              0x00000080
#define SYMOPT_NO_UNQUALIFIED_LOADS      0x00000100
#define SYMOPT_FAIL_CRITICAL_ERRORS      0x00000200
#define SYMOPT_EXACT_SYMBOLS             0x00000400
#define SYMOPT_ALLOW_ABSOLUTE_SYMBOLS    0x00000800
#define SYMOPT_IGNORE_NT_SYMPATH         0x00001000
#define SYMOPT_INCLUDE_32BIT_MODULES     0x00002000
#define SYMOPT_PUBLICS_ONLY              0x00004000
#define SYMOPT_NO_PUBLICS                0x00008000
#define SYMOPT_AUTO_PUBLICS              0x00010000
#define SYMOPT_NO_IMAGE_SEARCH           0x00020000
#define SYMOPT_SECURE                    0x00040000
#define SYMOPT_NO_PROMPTS                0x00080000
#define SYMOPT_OVERWRITE                 0x00100000
#define SYMOPT_IGNORE_IMAGEDIR           0x00200000
#define SYMOPT_FLAT_DIRECTORY            0x00400000
#define SYMOPT_FAVOR_COMPRESSED          0x00800000
#define SYMOPT_ALLOW_ZERO_ADDRESS        0x01000000
#define SYMOPT_DISABLE_SYMSRV_AUTODETECT 0x02000000
#define SYMOPT_READONLY_CACHE            0x04000000
#define SYMOPT_SYMPATH_LAST              0x08000000
#define SYMOPT_DISABLE_FAST_SYMBOLS      0x10000000
#define SYMOPT_DISABLE_SYMSRV_TIMEOUT    0x20000000
#define SYMOPT_DISABLE_SRVSTAR_ON_STARTUP 0x40000000
#define SYMOPT_DEBUG                     0x80000000

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)

typedef enum {
    SYMOPT_EX_DISABLEACCESSTIMEUPDATE,
    SYMOPT_EX_LASTVALIDDEBUGDIRECTORY,
    SYMOPT_EX_NOIMPLICITPATTERNSEARCH,
    SYMOPT_EX_NEVERLOADSYMBOLS,
    SYMOPT_EX_MAX
} IMAGEHLP_EXTENDED_OPTIONS;

#endif /* WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS) */

#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES)

DWORD IMAGEAPI SymSetOptions(
    DWORD SymOptions
);

DWORD IMAGEAPI SymGetOptions(
    void
);

#endif /* WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)

BOOL IMAGEAPI SymCleanup(
    HANDLE hProcess
);

BOOL IMAGEAPI SymGetExtendedOption(IMAGEHLP_EXTENDED_OPTIONS option);

BOOL IMAGEAPI SymSetExtendedOption(IMAGEHLP_EXTENDED_OPTIONS option, BOOL value);

BOOL IMAGEAPI SymMatchString(
    PCSTR string,
    PCSTR expression,
    BOOL fCase
);

BOOL IMAGEAPI SymMatchStringA(
    PCSTR string,
    PCSTR expression,
    BOOL fCase
);

BOOL IMAGEAPI SymMatchStringW(
    PCWSTR string,
    PCWSTR expression,
    BOOL fCase
);

typedef BOOL (CALLBACK *PSYM_ENUMSOURCEFILES_CALLBACK)(
    PSOURCEFILE pSourceFile,
    PVOID UserContext
);

#define PSYM_ENUMSOURCFILES_CALLBACK PSYM_ENUMSOURCEFILES_CALLBACK

BOOL IMAGEAPI SymEnumSourceFiles(
    HANDLE hProcess,
    ULONG64 ModBase,
    PCSTR Mask,
    PSYM_ENUMSOURCEFILES_CALLBACK cbSrcFiles,
    PVOID UserContext
);

typedef BOOL (CALLBACK *PSYM_ENUMSOURCEFILES_CALLBACKW)(
    PSOURCEFILEW pSourceFile,
    PVOID UserContext
);

BOOL IMAGEAPI SymEnumSourceFilesW(
    HANDLE hProcess,
    ULONG64 ModBase,
    PCWSTR Mask,
    PSYM_ENUMSOURCEFILES_CALLBACKW cbSrcFiles,
    PVOID UserContext
);

BOOL IMAGEAPI SymEnumerateModules64(
    HANDLE hProcess,
    PSYM_ENUMMODULES_CALLBACK64 EnumModulesCallback,
    PVOID UserContext
);

BOOL IMAGEAPI SymEnumerateModulesW64(
    HANDLE hProcess,
    PSYM_ENUMMODULES_CALLBACKW64 EnumModulesCallback,
    PVOID UserContext
);

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define SymEnumerateModules SymEnumerateModules64
#else
BOOL IMAGEAPI SymEnumerateModules(
    HANDLE hProcess,
    PSYM_ENUMMODULES_CALLBACK EnumModulesCallback,
    PVOID UserContext
);
#endif

BOOL IMAGEAPI EnumerateLoadedModulesEx(
    HANDLE hProcess,
    PENUMLOADED_MODULES_CALLBACK64 EnumLoadedModulesCallback,
    PVOID UserContext
);

BOOL IMAGEAPI EnumerateLoadedModulesExW(
    HANDLE hProcess,
    PENUMLOADED_MODULES_CALLBACKW64 EnumLoadedModulesCallback,
    PVOID UserContext
);

BOOL IMAGEAPI EnumerateLoadedModules64(
    HANDLE hProcess,
    PENUMLOADED_MODULES_CALLBACK64 EnumLoadedModulesCallback,
    PVOID UserContext
);

BOOL IMAGEAPI EnumerateLoadedModulesW64(
    HANDLE hProcess,
    PENUMLOADED_MODULES_CALLBACKW64 EnumLoadedModulesCallback,
    PVOID UserContext
);

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define EnumerateLoadedModules EnumerateLoadedModules64
#else
BOOL IMAGEAPI EnumerateLoadedModules(
    HANDLE hProcess,
    PENUMLOADED_MODULES_CALLBACK EnumLoadedModulesCallback,
    PVOID UserContext
);
#endif

#endif /* WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS) */

#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES)

PVOID IMAGEAPI SymFunctionTableAccess64(
    HANDLE hProcess,
    DWORD64 AddrBase
);

#endif /* WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)

PVOID IMAGEAPI SymFunctionTableAccess64AccessRoutines(
    HANDLE hProcess,
    DWORD64 AddrBase,
    PREAD_PROCESS_MEMORY_ROUTINE64 ReadMemoryRoutine,
    PGET_MODULE_BASE_ROUTINE64 GetModuleBaseRoutine
);

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define SymFunctionTableAccess SymFunctionTableAccess64
#else
PVOID IMAGEAPI SymFunctionTableAccess(
    HANDLE hProcess,
    DWORD AddrBase
);
#endif

BOOL IMAGEAPI SymGetUnwindInfo(
    HANDLE hProcess,
    DWORD64 Address,
    PVOID Buffer,
    PULONG Size
);

#endif /* WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS) */

#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES)

BOOL IMAGEAPI SymGetModuleInfo64(
    HANDLE hProcess,
    DWORD64 qwAddr,
    PIMAGEHLP_MODULE64 ModuleInfo
);

BOOL IMAGEAPI SymGetModuleInfoW64(
    HANDLE hProcess,
    DWORD64 qwAddr,
    PIMAGEHLP_MODULEW64 ModuleInfo
);

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define SymGetModuleInfo   SymGetModuleInfo64
#define SymGetModuleInfoW  SymGetModuleInfoW64
#else
BOOL IMAGEAPI SymGetModuleInfo(
    HANDLE hProcess,
    DWORD dwAddr,
    PIMAGEHLP_MODULE ModuleInfo
);

BOOL IMAGEAPI SymGetModuleInfoW(
    HANDLE hProcess,
    DWORD dwAddr,
    PIMAGEHLP_MODULEW ModuleInfo
);
#endif

DWORD64 IMAGEAPI SymGetModuleBase64(
    HANDLE hProcess,
    DWORD64 qwAddr
);

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define SymGetModuleBase SymGetModuleBase64
#else
DWORD IMAGEAPI SymGetModuleBase(
    HANDLE hProcess,
    DWORD dwAddr
);
#endif

#endif /* WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)

typedef struct _SRCCODEINFO {
    DWORD SizeOfStruct;
    PVOID Key;
    DWORD64 ModBase;
    CHAR Obj[MAX_PATH + 1];
    CHAR FileName[MAX_PATH + 1];
    DWORD LineNumber;
    DWORD64 Address;
} SRCCODEINFO, *PSRCCODEINFO;

typedef struct _SRCCODEINFOW {
    DWORD SizeOfStruct;
    PVOID Key;
    DWORD64 ModBase;
    WCHAR Obj[MAX_PATH + 1];
    WCHAR FileName[MAX_PATH + 1];
    DWORD LineNumber;
    DWORD64 Address;
} SRCCODEINFOW, *PSRCCODEINFOW;

typedef BOOL (CALLBACK *PSYM_ENUMLINES_CALLBACK)(
    PSRCCODEINFO LineInfo,
    PVOID UserContext
);

BOOL IMAGEAPI SymEnumLines(
    HANDLE hProcess,
    ULONG64 Base,
    PCSTR Obj,
    PCSTR File,
    PSYM_ENUMLINES_CALLBACK EnumLinesCallback,
    PVOID UserContext
);

typedef BOOL (CALLBACK *PSYM_ENUMLINES_CALLBACKW)(
    PSRCCODEINFOW LineInfo,
    PVOID UserContext
);

BOOL IMAGEAPI SymEnumLinesW(
    HANDLE hProcess,
    ULONG64 Base,
    PCWSTR Obj,
    PCWSTR File,
    PSYM_ENUMLINES_CALLBACKW EnumLinesCallback,
    PVOID UserContext
);

#endif /* WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS) */

#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES)

BOOL IMAGEAPI SymGetLineFromAddr64(
    HANDLE hProcess,
    DWORD64 qwAddr,
    PDWORD pdwDisplacement,
    PIMAGEHLP_LINE64 Line64
);

#endif /* WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES) */

#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)

BOOL IMAGEAPI SymGetLineFromAddrW64(
    HANDLE hProcess,
    DWORD64 dwAddr,
    PDWORD pdwDisplacement,
    PIMAGEHLP_LINEW64 Line
);

BOOL IMAGEAPI SymGetLineFromInlineContext(
    HANDLE hProcess,
    DWORD64 qwAddr,
    ULONG InlineContext,
    DWORD64 qwModuleBaseAddress,
    PDWORD pdwDisplacement,
    PIMAGEHLP_LINE64 Line64
);

BOOL IMAGEAPI SymGetLineFromInlineContextW(
    HANDLE hProcess,
    DWORD64 dwAddr,
    ULONG InlineContext,
    DWORD64 qwModuleBaseAddress,
    PDWORD pdwDisplacement,
    PIMAGEHLP_LINEW64 Line
);

BOOL IMAGEAPI SymEnumSourceLines(
    HANDLE hProcess,
    ULONG64 Base,
    PCSTR Obj,
    PCSTR File,
    DWORD Line,
    DWORD Flags,
    PSYM_ENUMLINES_CALLBACK EnumLinesCallback,
    PVOID UserContext
);

BOOL IMAGEAPI SymEnumSourceLinesW(
    HANDLE hProcess,
    ULONG64 Base,
    PCWSTR Obj,
    PCWSTR File,
    DWORD Line,
    DWORD Flags,
    PSYM_ENUMLINES_CALLBACKW EnumLinesCallback,
    PVOID UserContext
);

DWORD IMAGEAPI SymAddrIncludeInlineTrace(
    HANDLE hProcess,
    DWORD64 Address
);

#define SYM_INLINE_COMP_ERROR     0
#define SYM_INLINE_COMP_IDENTICAL 1
#define SYM_INLINE_COMP_STEPIN    2
#define SYM_INLINE_COMP_STEPOUT   3
#define SYM_INLINE_COMP_STEPOVER  4
#define SYM_INLINE_COMP_DIFFERENT 5

DWORD IMAGEAPI SymCompareInlineTrace(
    HANDLE hProcess,
    DWORD64 Address1,
    DWORD InlineContext1,
    DWORD64 RetAddress1,
    DWORD64 Address2,
    DWORD64 RetAddress2
);

BOOL IMAGEAPI SymQueryInlineTrace(
    HANDLE hProcess,
    DWORD64 StartAddress,
    DWORD StartContext,
    DWORD64 StartRetAddress,
    DWORD64 CurAddress,
    LPDWORD CurContext,
    LPDWORD CurFrameIndex
);

#define ESLFLAG_FULLPATH        0x00000001
#define ESLFLAG_NEAREST         0x00000002
#define ESLFLAG_PREV            0x00000004
#define ESLFLAG_NEXT            0x00000008
#define ESLFLAG_INLINE_SITE     0x00000010

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define SymGetLineFromAddr SymGetLineFromAddr64
#define SymGetLineFromAddrW SymGetLineFromAddrW64
#else
BOOL IMAGEAPI SymGetLineFromAddr(
    HANDLE hProcess,
    DWORD dwAddr,
    PDWORD pdwDisplacement,
    PIMAGEHLP_LINE Line
);

BOOL IMAGEAPI SymGetLineFromAddrW(
    HANDLE hProcess,
    DWORD dwAddr,
    PDWORD pdwDisplacement,
    PIMAGEHLP_LINEW Line
);
#endif

BOOL IMAGEAPI SymGetLineFromName64(
    HANDLE hProcess,
    PCSTR ModuleName,
    PCSTR FileName,
    DWORD dwLineNumber,
    PLONG plDisplacement,
    PIMAGEHLP_LINE64 Line
);

BOOL IMAGEAPI SymGetLineFromNameW64(
    HANDLE hProcess,
    PCWSTR ModuleName,
    PCWSTR FileName,
    DWORD dwLineNumber,
    PLONG plDisplacement,
    PIMAGEHLP_LINEW64 Line
);

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define SymGetLineFromName SymGetLineFromName64
#else
BOOL IMAGEAPI SymGetLineFromName(
    HANDLE hProcess,
    PCSTR ModuleName,
    PCSTR FileName,
    DWORD dwLineNumber,
    PLONG plDisplacement,
    PIMAGEHLP_LINE Line
);
#endif

BOOL IMAGEAPI SymGetLineNext64(
    HANDLE hProcess,
    PIMAGEHLP_LINE64 Line
);

BOOL IMAGEAPI SymGetLineNextW64(
    HANDLE hProcess,
    PIMAGEHLP_LINEW64 Line
);

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define SymGetLineNext SymGetLineNext64
#else
BOOL IMAGEAPI SymGetLineNext(
    HANDLE hProcess,
    PIMAGEHLP_LINE Line
);

BOOL IMAGEAPI SymGetLineNextW(
    HANDLE hProcess,
    PIMAGEHLP_LINEW Line
);
#endif

BOOL IMAGEAPI SymGetLinePrev64(
    HANDLE hProcess,
    PIMAGEHLP_LINE64 Line
);

BOOL IMAGEAPI SymGetLinePrevW64(
    HANDLE hProcess,
    PIMAGEHLP_LINEW64 Line
);

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define SymGetLinePrev SymGetLinePrev64
#else
BOOL IMAGEAPI SymGetLinePrev(
    HANDLE hProcess,
    PIMAGEHLP_LINE Line
);

BOOL IMAGEAPI SymGetLinePrevW(
    HANDLE hProcess,
    PIMAGEHLP_LINEW Line
);
#endif

ULONG IMAGEAPI SymGetFileLineOffsets64(
    HANDLE hProcess,
    PCSTR ModuleName,
    PCSTR FileName,
    PDWORD64 Buffer,
    ULONG BufferLines
);

BOOL IMAGEAPI SymMatchFileName(
    PCSTR FileName,
    PCSTR Match,
    PSTR *FileNameStop,
    PSTR *MatchStop
);

BOOL IMAGEAPI SymMatchFileNameW(
    PCWSTR FileName,
    PCWSTR Match,
    PWSTR *FileNameStop,
    PWSTR *MatchStop
);

BOOL IMAGEAPI SymGetSourceFile(
    HANDLE hProcess,
    ULONG64 Base,
    PCSTR Params,
    PCSTR FileSpec,
    PSTR FilePath,
    DWORD Size
);

BOOL IMAGEAPI SymGetSourceFileW(
    HANDLE hProcess,
    ULONG64 Base,
    PCWSTR Params,
    PCWSTR FileSpec,
    PWSTR FilePath,
    DWORD Size
);

BOOL IMAGEAPI SymGetSourceFileToken(
    HANDLE hProcess,
    ULONG64 Base,
    PCSTR FileSpec,
    PVOID *Token,
    DWORD *Size
);

BOOL IMAGEAPI SymGetSourceFileTokenByTokenName(
    HANDLE hProcess,
    ULONG64 Base,
    PCSTR FileSpec,
    PCSTR TokenName,
    PCSTR TokenParameters,
    PVOID *Token,
    DWORD *Size
);

BOOL IMAGEAPI SymGetSourceFileChecksumW(
    HANDLE hProcess,
    ULONG64 Base,
    PCWSTR FileSpec,
    DWORD *pCheckSumType,
    BYTE *pChecksum,
    DWORD checksumSize,
    DWORD *pActualBytesWritten
);

BOOL IMAGEAPI SymGetSourceFileChecksum(
    HANDLE hProcess,
    ULONG64 Base,
    PCSTR FileSpec,
    DWORD *pCheckSumType,
    BYTE *pChecksum,
    DWORD checksumSize,
    DWORD *pActualBytesWritten
);

BOOL IMAGEAPI SymGetSourceFileTokenW(
    HANDLE hProcess,
    ULONG64 Base,
    PCWSTR FileSpec,
    PVOID *Token,
    DWORD *Size
);

BOOL IMAGEAPI SymGetSourceFileTokenByTokenNameW(
    HANDLE hProcess,
    ULONG64 Base,
    PCWSTR FileSpec,
    PCWSTR TokenName,
    PCWSTR TokenParameters,
    PVOID *Token,
    DWORD *Size
);

BOOL IMAGEAPI SymGetSourceFileFromToken(
    HANDLE hProcess,
    PVOID Token,
    PCSTR Params,
    PSTR FilePath,
    DWORD Size
);

BOOL IMAGEAPI SymGetSourceFileFromTokenByTokenName(
    HANDLE hProcess,
    PVOID Token,
    PCSTR TokenName,
    PCSTR Params,
    PSTR FilePath,
    DWORD Size
);

BOOL IMAGEAPI SymGetSourceFileFromTokenW(
    HANDLE hProcess,
    PVOID Token,
    PCWSTR Params,
    PWSTR FilePath,
    DWORD Size
);

BOOL IMAGEAPI SymGetSourceFileFromTokenByTokenNameW(
    HANDLE hProcess,
    PVOID Token,
    PCWSTR TokenName,
    PCWSTR Params,
    PWSTR FilePath,
    DWORD Size
);

BOOL IMAGEAPI SymGetSourceVarFromToken(
    HANDLE hProcess,
    PVOID Token,
    PCSTR Params,
    PCSTR VarName,
    PSTR Value,
    DWORD Size
);

BOOL IMAGEAPI SymGetSourceVarFromTokenW(
    HANDLE hProcess,
    PVOID Token,
    PCWSTR Params,
    PCWSTR VarName,
    PWSTR Value,
    DWORD Size
);

typedef BOOL (CALLBACK *PENUMSOURCEFILETOKENSCALLBACK)(PVOID token, size_t size);

BOOL IMAGEAPI SymEnumSourceFileTokens(
    HANDLE hProcess,
    ULONG64 Base,
    PENUMSOURCEFILETOKENSCALLBACK Callback
);

#endif /* WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS) */

#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES)

BOOL IMAGEAPI SymInitialize(
    HANDLE hProcess,
    PCSTR UserSearchPath,
    BOOL fInvadeProcess
);

BOOL IMAGEAPI SymInitializeW(
    HANDLE hProcess,
    PCWSTR UserSearchPath,
    BOOL fInvadeProcess
);

#endif

#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)

BOOL IMAGEAPI SymGetSearchPath(
    HANDLE hProcess,
    PSTR SearchPath,
    DWORD SearchPathLength
);

BOOL IMAGEAPI SymGetSearchPathW(
    HANDLE hProcess,
    PWSTR SearchPath,
    DWORD SearchPathLength
);

BOOL IMAGEAPI SymSetSearchPath(
    HANDLE hProcess,
    PCSTR SearchPath
);

#endif

#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES)

BOOL IMAGEAPI SymSetSearchPathW(
    HANDLE hProcess,
    PCWSTR SearchPath
);

#endif

#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)

#define SLMFLAG_VIRTUAL     0x1
#define SLMFLAG_ALT_INDEX   0x2
#define SLMFLAG_NO_SYMBOLS  0x4

DWORD64 IMAGEAPI SymLoadModuleEx(
    HANDLE hProcess,
    HANDLE hFile,
    PCSTR ImageName,
    PCSTR ModuleName,
    DWORD64 BaseOfDll,
    DWORD DllSize,
    PMODLOAD_DATA Data,
    DWORD Flags
);

#endif

#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES)

DWORD64 IMAGEAPI SymLoadModuleExW(
    HANDLE hProcess,
    HANDLE hFile,
    PCWSTR ImageName,
    PCWSTR ModuleName,
    DWORD64 BaseOfDll,
    DWORD DllSize,
    PMODLOAD_DATA Data,
    DWORD Flags
);

#endif

#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)

BOOL IMAGEAPI SymUnloadModule64(
    HANDLE hProcess,
    DWORD64 BaseOfDll
);

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define SymUnloadModule SymUnloadModule64
#else
BOOL IMAGEAPI SymUnloadModule(
    HANDLE hProcess,
    DWORD BaseOfDll
);
#endif

BOOL IMAGEAPI SymUnDName64(
    PIMAGEHLP_SYMBOL64 sym,
    PSTR UnDecName,
    DWORD UnDecNameLength
);

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define SymUnDName SymUnDName64
#else
BOOL IMAGEAPI SymUnDName(
    PIMAGEHLP_SYMBOL sym,
    PSTR UnDecName,
    DWORD UnDecNameLength
);
#endif

BOOL IMAGEAPI SymRegisterCallback64(
    HANDLE hProcess,
    PSYMBOL_REGISTERED_CALLBACK64 CallbackFunction,
    ULONG64 UserContext
);

BOOL IMAGEAPI SymRegisterCallbackW64(
    HANDLE hProcess,
    PSYMBOL_REGISTERED_CALLBACK64 CallbackFunction,
    ULONG64 UserContext
);

BOOL IMAGEAPI SymRegisterFunctionEntryCallback64(
    HANDLE hProcess,
    PSYMBOL_FUNCENTRY_CALLBACK64 CallbackFunction,
    ULONG64 UserContext
);

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define SymRegisterCallback SymRegisterCallback64
#define SymRegisterFunctionEntryCallback SymRegisterFunctionEntryCallback64
#else
BOOL IMAGEAPI SymRegisterCallback(
    HANDLE hProcess,
    PSYMBOL_REGISTERED_CALLBACK CallbackFunction,
    PVOID UserContext
);

BOOL IMAGEAPI SymRegisterFunctionEntryCallback(
    HANDLE hProcess,
    PSYMBOL_FUNCENTRY_CALLBACK CallbackFunction,
    PVOID UserContext
);
#endif

typedef struct _IMAGEHLP_SYMBOL_SRC {
    DWORD sizeofstruct;
    DWORD type;
    char file[MAX_PATH];
} IMAGEHLP_SYMBOL_SRC, *PIMAGEHLP_SYMBOL_SRC;

typedef struct _MODULE_TYPE_INFO {
    USHORT dataLength;
    USHORT leaf;
    BYTE data[1];
} MODULE_TYPE_INFO, *PMODULE_TYPE_INFO;

typedef struct _SYMBOL_INFO {
    ULONG SizeOfStruct;
    ULONG TypeIndex;
    ULONG64 Reserved[2];
    ULONG Index;
    ULONG Size;
    ULONG64 ModBase;
    ULONG Flags;
    ULONG64 Value;
    ULONG64 Address;
    ULONG Register;
    ULONG Scope;
    ULONG Tag;
    ULONG NameLen;
    ULONG MaxNameLen;
    CHAR Name[1];
} SYMBOL_INFO, *PSYMBOL_INFO;

typedef struct _SYMBOL_INFO_PACKAGE {
    SYMBOL_INFO si;
    CHAR name[MAX_SYM_NAME + 1];
} SYMBOL_INFO_PACKAGE, *PSYMBOL_INFO_PACKAGE;

typedef struct _SYMBOL_INFOW {
    ULONG SizeOfStruct;
    ULONG TypeIndex;
    ULONG64 Reserved[2];
    ULONG Index;
    ULONG Size;
    ULONG64 ModBase;
    ULONG Flags;
    ULONG64 Value;
    ULONG64 Address;
    ULONG Register;
    ULONG Scope;
    ULONG Tag;
    ULONG NameLen;
    ULONG MaxNameLen;
    WCHAR Name[1];
} SYMBOL_INFOW, *PSYMBOL_INFOW;

typedef struct _SYMBOL_INFO_PACKAGEW {
    SYMBOL_INFOW si;
    WCHAR name[MAX_SYM_NAME + 1];
} SYMBOL_INFO_PACKAGEW, *PSYMBOL_INFO_PACKAGEW;

typedef struct _IMAGEHLP_STACK_FRAME {
    ULONG64 InstructionOffset;
    ULONG64 ReturnOffset;
    ULONG64 FrameOffset;
    ULONG64 StackOffset;
    ULONG64 BackingStoreOffset;
    ULONG64 FuncTableEntry;
    ULONG64 Params[4];
    ULONG64 Reserved[5];
    BOOL Virtual;
    ULONG Reserved2;
} IMAGEHLP_STACK_FRAME, *PIMAGEHLP_STACK_FRAME;

typedef void IMAGEHLP_CONTEXT, *PIMAGEHLP_CONTEXT;

BOOL IMAGEAPI SymSetContext(
    HANDLE hProcess,
    PIMAGEHLP_STACK_FRAME StackFrame,
    PIMAGEHLP_CONTEXT Context
);

BOOL IMAGEAPI SymSetScopeFromAddr(
    HANDLE hProcess,
    ULONG64 Address
);

BOOL IMAGEAPI SymSetScopeFromInlineContext(
    HANDLE hProcess,
    ULONG64 Address,
    ULONG InlineContext
);

BOOL IMAGEAPI SymSetScopeFromIndex(
    HANDLE hProcess,
    ULONG64 BaseOfDll,
    DWORD Index
);

typedef BOOL (CALLBACK *PSYM_ENUMPROCESSES_CALLBACK)(
    HANDLE hProcess,
    PVOID UserContext
);

BOOL IMAGEAPI SymEnumProcesses(
    PSYM_ENUMPROCESSES_CALLBACK EnumProcessesCallback,
    PVOID UserContext
);

BOOL IMAGEAPI SymFromAddr(
    HANDLE hProcess,
    DWORD64 Address,
    PDWORD64 Displacement,
    PSYMBOL_INFO Symbol
);

BOOL IMAGEAPI SymFromAddrW(
    HANDLE hProcess,
    DWORD64 Address,
    PDWORD64 Displacement,
    PSYMBOL_INFOW Symbol
);

BOOL IMAGEAPI SymFromInlineContext(
    HANDLE hProcess,
    DWORD64 Address,
    ULONG InlineContext,
    PDWORD64 Displacement,
    PSYMBOL_INFO Symbol
);

BOOL IMAGEAPI SymFromInlineContextW(
    HANDLE hProcess,
    DWORD64 Address,
    ULONG InlineContext,
    PDWORD64 Displacement,
    PSYMBOL_INFOW Symbol
);

BOOL IMAGEAPI SymFromToken(
    HANDLE hProcess,
    DWORD64 Base,
    DWORD Token,
    PSYMBOL_INFO Symbol
);

BOOL IMAGEAPI SymFromTokenW(
    HANDLE hProcess,
    DWORD64 Base,
    DWORD Token,
    PSYMBOL_INFOW Symbol
);

BOOL IMAGEAPI SymNext(
    HANDLE hProcess,
    PSYMBOL_INFO si
);

BOOL IMAGEAPI SymNextW(
    HANDLE hProcess,
    PSYMBOL_INFOW siw
);

BOOL IMAGEAPI SymPrev(
    HANDLE hProcess,
    PSYMBOL_INFO si
);

BOOL IMAGEAPI SymPrevW(
    HANDLE hProcess,
    PSYMBOL_INFOW siw
);

BOOL IMAGEAPI SymFromName(
    HANDLE hProcess,
    PCSTR Name,
    PSYMBOL_INFO Symbol
);

BOOL IMAGEAPI SymFromNameW(
    HANDLE hProcess,
    PCWSTR Name,
    PSYMBOL_INFOW Symbol
);

#define SYMENUM_OPTIONS_DEFAULT 0x00000001
#define SYMENUM_OPTIONS_INLINE  0x00000002

typedef BOOL (CALLBACK *PSYM_ENUMERATESYMBOLS_CALLBACK)(
    PSYMBOL_INFO pSymInfo,
    ULONG SymbolSize,
    PVOID UserContext
);

BOOL IMAGEAPI SymEnumSymbols(
    HANDLE hProcess,
    ULONG64 BaseOfDll,
    PCSTR Mask,
    PSYM_ENUMERATESYMBOLS_CALLBACK EnumSymbolsCallback,
    PVOID UserContext
);

BOOL IMAGEAPI SymEnumSymbolsEx(
    HANDLE hProcess,
    ULONG64 BaseOfDll,
    PCSTR Mask,
    PSYM_ENUMERATESYMBOLS_CALLBACK EnumSymbolsCallback,
    PVOID UserContext,
    DWORD Options
);

typedef BOOL (CALLBACK *PSYM_ENUMERATESYMBOLS_CALLBACKW)(
    PSYMBOL_INFOW pSymInfo,
    ULONG SymbolSize,
    PVOID UserContext
);

BOOL IMAGEAPI SymEnumSymbolsW(
    HANDLE hProcess,
    ULONG64 BaseOfDll,
    PCWSTR Mask,
    PSYM_ENUMERATESYMBOLS_CALLBACKW EnumSymbolsCallback,
    PVOID UserContext
);

BOOL IMAGEAPI SymEnumSymbolsExW(
    HANDLE hProcess,
    ULONG64 BaseOfDll,
    PCWSTR Mask,
    PSYM_ENUMERATESYMBOLS_CALLBACKW EnumSymbolsCallback,
    PVOID UserContext,
    DWORD Options
);

BOOL IMAGEAPI SymEnumSymbolsForAddr(
    HANDLE hProcess,
    DWORD64 Address,
    PSYM_ENUMERATESYMBOLS_CALLBACK EnumSymbolsCallback,
    PVOID UserContext
);

BOOL IMAGEAPI SymEnumSymbolsForAddrW(
    HANDLE hProcess,
    DWORD64 Address,
    PSYM_ENUMERATESYMBOLS_CALLBACKW EnumSymbolsCallback,
    PVOID UserContext
);

#define SYMSEARCH_MASKOBJS      0x01
#define SYMSEARCH_RECURSE       0X02
#define SYMSEARCH_GLOBALSONLY   0X04
#define SYMSEARCH_ALLITEMS      0X08

BOOL IMAGEAPI SymSearch(
    HANDLE hProcess,
    ULONG64 BaseOfDll,
    DWORD Index,
    DWORD SymTag,
    PCSTR Mask,
    DWORD64 Address,
    PSYM_ENUMERATESYMBOLS_CALLBACK EnumSymbolsCallback,
    PVOID UserContext,
    DWORD Options
);

BOOL IMAGEAPI SymSearchW(
    HANDLE hProcess,
    ULONG64 BaseOfDll,
    DWORD Index,
    DWORD SymTag,
    PCWSTR Mask,
    DWORD64 Address,
    PSYM_ENUMERATESYMBOLS_CALLBACKW EnumSymbolsCallback,
    PVOID UserContext,
    DWORD Options
);

BOOL IMAGEAPI SymGetScope(
    HANDLE hProcess,
    ULONG64 BaseOfDll,
    DWORD Index,
    PSYMBOL_INFO Symbol
);

BOOL IMAGEAPI SymGetScopeW(
    HANDLE hProcess,
    ULONG64 BaseOfDll,
    DWORD Index,
    PSYMBOL_INFOW Symbol
);

BOOL IMAGEAPI SymFromIndex(
    HANDLE hProcess,
    ULONG64 BaseOfDll,
    DWORD Index,
    PSYMBOL_INFO Symbol
);

BOOL IMAGEAPI SymFromIndexW(
    HANDLE hProcess,
    ULONG64 BaseOfDll,
    DWORD Index,
    PSYMBOL_INFOW Symbol
);

typedef enum _IMAGEHLP_SYMBOL_TYPE_INFO {
    TI_GET_SYMTAG,
    TI_GET_SYMNAME,
    TI_GET_LENGTH,
    TI_GET_TYPE,
    TI_GET_TYPEID,
    TI_GET_BASETYPE,
    TI_GET_ARRAYINDEXTYPEID,
    TI_FINDCHILDREN,
    TI_GET_DATAKIND,
    TI_GET_ADDRESSOFFSET,
    TI_GET_OFFSET,
    TI_GET_VALUE,
    TI_GET_COUNT,
    TI_GET_CHILDRENCOUNT,
    TI_GET_BITPOSITION,
    TI_GET_VIRTUALBASECLASS,
    TI_GET_VIRTUALTABLESHAPEID,
    TI_GET_VIRTUALBASEPOINTEROFFSET,
    TI_GET_CLASSPARENTID,
    TI_GET_NESTED,
    TI_GET_SYMINDEX,
    TI_GET_LEXICALPARENT,
    TI_GET_ADDRESS,
    TI_GET_THISADJUST,
    TI_GET_UDTKIND,
    TI_IS_EQUIV_TO,
    TI_GET_CALLING_CONVENTION,
    TI_IS_CLOSE_EQUIV_TO,
    TI_GTIEX_REQS_VALID,
    TI_GET_VIRTUALBASEOFFSET,
    TI_GET_VIRTUALBASEDISPINDEX,
    TI_GET_IS_REFERENCE,
    TI_GET_INDIRECTVIRTUALBASECLASS,
    TI_GET_VIRTUALBASETABLETYPE,
    TI_GET_OBJECTPOINTERTYPE,
    IMAGEHLP_SYMBOL_TYPE_INFO_MAX,
} IMAGEHLP_SYMBOL_TYPE_INFO;

typedef struct _TI_FINDCHILDREN_PARAMS {
    ULONG Count;
    ULONG Start;
    ULONG ChildId[1];
} TI_FINDCHILDREN_PARAMS;

BOOL IMAGEAPI SymGetTypeInfo(
    HANDLE hProcess,
    DWORD64 ModBase,
    ULONG TypeId,
    IMAGEHLP_SYMBOL_TYPE_INFO GetType,
    PVOID pInfo
);

#define IMAGEHLP_GET_TYPE_INFO_UNCACHED 0x00000001
#define IMAGEHLP_GET_TYPE_INFO_CHILDREN 0x00000002

typedef struct _IMAGEHLP_GET_TYPE_INFO_PARAMS {
    ULONG SizeOfStruct;
    ULONG Flags;
    ULONG NumIds;
    PULONG TypeIds;
    ULONG64 TagFilter;
    ULONG NumReqs;
    IMAGEHLP_SYMBOL_TYPE_INFO * ReqKinds;
    PULONG_PTR ReqOffsets;
    PULONG ReqSizes;
    ULONG_PTR ReqStride;
    ULONG_PTR BufferSize;
    PVOID Buffer;
    ULONG EntriesMatched;
    ULONG EntriesFilled;
    ULONG64 TagsFound;
    ULONG64 AllReqsValid;
    ULONG NumReqsValid;
    PULONG64 ReqsValid ;
} IMAGEHLP_GET_TYPE_INFO_PARAMS, *PIMAGEHLP_GET_TYPE_INFO_PARAMS;

BOOL IMAGEAPI SymGetTypeInfoEx(
    HANDLE hProcess,
    DWORD64 ModBase,
    PIMAGEHLP_GET_TYPE_INFO_PARAMS Params
);

BOOL IMAGEAPI SymEnumTypes(
    HANDLE hProcess,
    ULONG64 BaseOfDll,
    PSYM_ENUMERATESYMBOLS_CALLBACK EnumSymbolsCallback,
    PVOID UserContext
);

BOOL IMAGEAPI SymEnumTypesW(
    HANDLE hProcess,
    ULONG64 BaseOfDll,
    PSYM_ENUMERATESYMBOLS_CALLBACKW EnumSymbolsCallback,
    PVOID UserContext
);

BOOL IMAGEAPI SymEnumTypesByName(
    HANDLE hProcess,
    ULONG64 BaseOfDll,
    PCSTR mask,
    PSYM_ENUMERATESYMBOLS_CALLBACK EnumSymbolsCallback,
    PVOID UserContext
);

BOOL IMAGEAPI SymEnumTypesByNameW(
    HANDLE hProcess,
    ULONG64 BaseOfDll,
    PCWSTR mask,
    PSYM_ENUMERATESYMBOLS_CALLBACKW EnumSymbolsCallback,
    PVOID UserContext
);

BOOL IMAGEAPI SymGetTypeFromName(
    HANDLE hProcess,
    ULONG64 BaseOfDll,
    PCSTR Name,
    PSYMBOL_INFO Symbol
);

BOOL IMAGEAPI SymGetTypeFromNameW(
    HANDLE hProcess,
    ULONG64 BaseOfDll,
    PCWSTR Name,
    PSYMBOL_INFOW Symbol
);

BOOL IMAGEAPI SymAddSymbol(
    HANDLE hProcess,
    ULONG64 BaseOfDll,
    PCSTR Name,
    DWORD64 Address,
    DWORD Size,
    DWORD Flags
);

BOOL IMAGEAPI SymAddSymbolW(
    HANDLE hProcess,
    ULONG64 BaseOfDll,
    PCWSTR Name,
    DWORD64 Address,
    DWORD Size,
    DWORD Flags
);

BOOL IMAGEAPI SymDeleteSymbol(
    HANDLE hProcess,
    ULONG64 BaseOfDll,
    PCSTR Name,
    DWORD64 Address,
    DWORD Flags
);

BOOL IMAGEAPI SymDeleteSymbolW(
    HANDLE hProcess,
    ULONG64 BaseOfDll,
    PCWSTR Name,
    DWORD64 Address,
    DWORD Flags
);

#endif

#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES)

BOOL IMAGEAPI SymRefreshModuleList(
    HANDLE hProcess
);

#endif

#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)

BOOL IMAGEAPI SymAddSourceStream(
    HANDLE hProcess,
    ULONG64 Base,
    PCSTR StreamFile,
    PBYTE Buffer,
    size_t Size
);

typedef BOOL (WINAPI *SYMADDSOURCESTREAM)(HANDLE, ULONG64, PCSTR, PBYTE, size_t);

BOOL IMAGEAPI SymAddSourceStreamA(
    HANDLE hProcess,
    ULONG64 Base,
    PCSTR StreamFile,
    PBYTE Buffer,
    size_t Size
);

typedef BOOL (WINAPI *SYMADDSOURCESTREAMA)(HANDLE, ULONG64, PCSTR, PBYTE, size_t);

BOOL IMAGEAPI SymAddSourceStreamW(
    HANDLE hProcess,
    ULONG64 Base,
    PCWSTR FileSpec,
    PBYTE Buffer,
    size_t Size
);

BOOL IMAGEAPI SymSrvIsStoreW(
    HANDLE hProcess,
    PCWSTR path
);

BOOL IMAGEAPI SymSrvIsStore(
    HANDLE hProcess,
    PCSTR path
);

PCSTR IMAGEAPI SymSrvDeltaName(
    HANDLE hProcess,
    PCSTR SymPath,
    PCSTR Type,
    PCSTR File1,
    PCSTR File2
);

PCWSTR IMAGEAPI SymSrvDeltaNameW(
    HANDLE hProcess,
    PCWSTR SymPath,
    PCWSTR Type,
    PCWSTR File1,
    PCWSTR File2
);

PCSTR IMAGEAPI SymSrvGetSupplement(
    HANDLE hProcess,
    PCSTR SymPath,
    PCSTR Node,
    PCSTR File
);

PCWSTR IMAGEAPI SymSrvGetSupplementW(
    HANDLE hProcess,
    PCWSTR SymPath,
    PCWSTR Node,
    PCWSTR File
);

BOOL IMAGEAPI SymSrvGetFileIndexes(
    PCSTR File,
    GUID *Id,
    PDWORD Val1,
    PDWORD Val2,
    DWORD Flags
);

BOOL IMAGEAPI SymSrvGetFileIndexesW(
    PCWSTR File,
    GUID *Id,
    PDWORD Val1,
    PDWORD Val2,
    DWORD Flags
);

BOOL IMAGEAPI SymSrvGetFileIndexStringW(
    HANDLE hProcess,
    PCWSTR SrvPath,
    PCWSTR File,
    PWSTR Index,
    size_t Size,
    DWORD Flags
);

BOOL IMAGEAPI SymSrvGetFileIndexString(
    HANDLE hProcess,
    PCSTR SrvPath,
    PCSTR File,
    PSTR Index,
    size_t Size,
    DWORD Flags
);

typedef struct {
    DWORD sizeofstruct;
    char file[MAX_PATH + 1];
    BOOL stripped;
    DWORD timestamp;
    DWORD size;
    char dbgfile[MAX_PATH + 1];
    char pdbfile[MAX_PATH + 1];
    GUID guid;
    DWORD sig;
    DWORD age;
} SYMSRV_INDEX_INFO, *PSYMSRV_INDEX_INFO;

typedef struct {
    DWORD sizeofstruct;
    WCHAR file[MAX_PATH + 1];
    BOOL stripped;
    DWORD timestamp;
    DWORD size;
    WCHAR dbgfile[MAX_PATH + 1];
    WCHAR pdbfile[MAX_PATH + 1];
    GUID guid;
    DWORD sig;
    DWORD age;
} SYMSRV_INDEX_INFOW, *PSYMSRV_INDEX_INFOW;

BOOL IMAGEAPI SymSrvGetFileIndexInfo(
    PCSTR File,
    PSYMSRV_INDEX_INFO Info,
    DWORD Flags
);

BOOL IMAGEAPI SymSrvGetFileIndexInfoW(
    PCWSTR File,
    PSYMSRV_INDEX_INFOW Info,
    DWORD Flags
);

PCSTR IMAGEAPI SymSrvStoreSupplement(
    HANDLE hProcess,
    PCSTR SrvPath,
    PCSTR Node,
    PCSTR File,
    DWORD Flags
);

PCWSTR IMAGEAPI SymSrvStoreSupplementW(
    HANDLE hProcess,
    PCWSTR SymPath,
    PCWSTR Node,
    PCWSTR File,
    DWORD Flags
);

PCSTR IMAGEAPI SymSrvStoreFile(
    HANDLE hProcess,
    PCSTR SrvPath,
    PCSTR File,
    DWORD Flags
);

#endif

#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES)

PCWSTR IMAGEAPI SymSrvStoreFileW(
    HANDLE hProcess,
    PCWSTR SrvPath,
    PCWSTR File,
    DWORD Flags
);

#endif

#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)

typedef enum {
    sfImage = 0,
    sfDbg,
    sfPdb,
    sfMpd,
    sfMax
} IMAGEHLP_SF_TYPE;

BOOL IMAGEAPI SymGetSymbolFile(
    HANDLE hProcess,
    PCSTR SymPath,
    PCSTR ImageFile,
    DWORD Type,
    PSTR SymbolFile,
    size_t cSymbolFile,
    PSTR DbgFile,
    size_t cDbgFile
);

BOOL IMAGEAPI SymGetSymbolFileW(
    HANDLE hProcess,
    PCWSTR SymPath,
    PCWSTR ImageFile,
    DWORD Type,
    PWSTR SymbolFile,
    size_t cSymbolFile,
    PWSTR DbgFile,
    size_t cDbgFile
);

typedef BOOL (WINAPI *PDBGHELP_CREATE_USER_DUMP_CALLBACK)(
    DWORD DataType,
    PVOID * Data,
    LPDWORD DataLength,
    PVOID UserData
);

BOOL WINAPI DbgHelpCreateUserDump(
    LPCSTR FileName,
    PDBGHELP_CREATE_USER_DUMP_CALLBACK Callback,
    PVOID UserData
);

BOOL WINAPI DbgHelpCreateUserDumpW(
    LPCWSTR FileName,
    PDBGHELP_CREATE_USER_DUMP_CALLBACK Callback,
    PVOID UserData
);

#endif

#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES)

BOOL IMAGEAPI SymGetSymFromAddr64(
    HANDLE hProcess,
    DWORD64 qwAddr,
    PDWORD64 pdwDisplacement,
    PIMAGEHLP_SYMBOL64 Symbol
);

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define SymGetSymFromAddr SymGetSymFromAddr64
#else
BOOL IMAGEAPI SymGetSymFromAddr(
    HANDLE hProcess,
    DWORD dwAddr,
    PDWORD pdwDisplacement,
    PIMAGEHLP_SYMBOL Symbol
);
#endif

#endif

#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)

BOOL IMAGEAPI SymGetSymFromName64(
    HANDLE hProcess,
    PCSTR Name,
    PIMAGEHLP_SYMBOL64 Symbol
);

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define SymGetSymFromName SymGetSymFromName64
#else
BOOL IMAGEAPI SymGetSymFromName(
    HANDLE hProcess,
    PCSTR Name,
    PIMAGEHLP_SYMBOL Symbol
);
#endif

#define EXT_OUTPUT_VER          1

typedef struct {
    DWORD sizeOfStruct;
    DWORD version;
    WCHAR filePtrMsg[MAX_PATH + 1];
} SYMSRV_EXTENDED_OUTPUT_DATA, *PSYMSRV_EXTENDED_OUTPUT_DATA;

typedef BOOL (WINAPI *PSYMBOLSERVERPROC)(PCSTR, PCSTR, PVOID, DWORD, DWORD, PSTR);
typedef BOOL (WINAPI *PSYMBOLSERVERPROCA)(PCSTR, PCSTR, PVOID, DWORD, DWORD, PSTR);
typedef BOOL (WINAPI *PSYMBOLSERVERPROCW)(PCWSTR, PCWSTR, PVOID, DWORD, DWORD, PWSTR);
typedef BOOL (WINAPI *PSYMBOLSERVERBYINDEXPROC)(PCSTR, PCSTR, PCSTR, PSTR);
typedef BOOL (WINAPI *PSYMBOLSERVERBYINDEXPROCA)(PCSTR, PCSTR, PCSTR, PSTR);
typedef BOOL (WINAPI *PSYMBOLSERVERBYINDEXPROCW)(PCWSTR, PCWSTR, PCWSTR, PWSTR);
typedef BOOL (WINAPI *PSYMBOLSERVEROPENPROC)(void);
typedef BOOL (WINAPI *PSYMBOLSERVERCLOSEPROC)(void);
typedef BOOL (WINAPI *PSYMBOLSERVERSETOPTIONSPROC)(UINT_PTR, ULONG64);
typedef BOOL (WINAPI *PSYMBOLSERVERSETOPTIONSWPROC)(UINT_PTR, ULONG64);
typedef BOOL (CALLBACK WINAPI *PSYMBOLSERVERCALLBACKPROC)(UINT_PTR action, ULONG64 data, ULONG64 context);
typedef UINT_PTR (WINAPI *PSYMBOLSERVERGETOPTIONSPROC)(void);
typedef BOOL (WINAPI *PSYMBOLSERVERPINGPROC)(PCSTR);
typedef BOOL (WINAPI *PSYMBOLSERVERPINGPROCA)(PCSTR);
typedef BOOL (WINAPI *PSYMBOLSERVERPINGPROCW)(PCWSTR);
typedef BOOL (WINAPI *PSYMBOLSERVERGETVERSION)(LPAPI_VERSION);
typedef BOOL (WINAPI *PSYMBOLSERVERDELTANAME)(PCSTR, PVOID, DWORD, DWORD, PVOID, DWORD, DWORD, PSTR, size_t);
typedef BOOL (WINAPI *PSYMBOLSERVERDELTANAMEW)(PCWSTR, PVOID, DWORD, DWORD, PVOID, DWORD, DWORD, PWSTR, size_t);
typedef BOOL (WINAPI *PSYMBOLSERVERGETSUPPLEMENT)(PCSTR, PCSTR, PCSTR, PSTR, size_t);
typedef BOOL (WINAPI *PSYMBOLSERVERGETSUPPLEMENTW)(PCWSTR, PCWSTR, PCWSTR, PWSTR, size_t);
typedef BOOL (WINAPI *PSYMBOLSERVERSTORESUPPLEMENT)(PCSTR, PCSTR, PCSTR, PSTR, size_t, DWORD);
typedef BOOL (WINAPI *PSYMBOLSERVERSTORESUPPLEMENTW)(PCWSTR, PCWSTR, PCWSTR, PWSTR, size_t, DWORD);
typedef BOOL (WINAPI *PSYMBOLSERVERGETINDEXSTRING)(PVOID, DWORD, DWORD, PSTR, size_t);
typedef BOOL (WINAPI *PSYMBOLSERVERGETINDEXSTRINGW)(PVOID, DWORD, DWORD, PWSTR, size_t);
typedef BOOL (WINAPI *PSYMBOLSERVERSTOREFILE)(PCSTR, PCSTR, PVOID, DWORD, DWORD, PSTR, size_t, DWORD);
typedef BOOL (WINAPI *PSYMBOLSERVERSTOREFILEW)(PCWSTR, PCWSTR, PVOID, DWORD, DWORD, PWSTR, size_t, DWORD);
typedef BOOL (WINAPI *PSYMBOLSERVERISSTORE)(PCSTR);
typedef BOOL (WINAPI *PSYMBOLSERVERISSTOREW)(PCWSTR);
typedef DWORD (WINAPI *PSYMBOLSERVERVERSION)(void);
typedef BOOL (CALLBACK WINAPI *PSYMBOLSERVERMESSAGEPROC)(UINT_PTR action, ULONG64 data, ULONG64 context);
typedef BOOL (WINAPI *PSYMBOLSERVERWEXPROC)(PCWSTR, PCWSTR, PVOID, DWORD, DWORD, PWSTR, PSYMSRV_EXTENDED_OUTPUT_DATA);
typedef BOOL (WINAPI *PSYMBOLSERVERPINGPROCWEX)(PCWSTR);
typedef BOOL (WINAPI *PSYMBOLSERVERGETOPTIONDATAPROC)(UINT_PTR, PULONG64);
typedef BOOL (WINAPI *PSYMBOLSERVERSETHTTPAUTHHEADER)(PCWSTR pszAuthHeader);

#define SYMSRV_VERSION              2

#define SSRVOPT_CALLBACK            0x00000001
#define SSRVOPT_DWORD               0x00000002
#define SSRVOPT_DWORDPTR            0x00000004
#define SSRVOPT_GUIDPTR             0x00000008
#define SSRVOPT_OLDGUIDPTR          0x00000010
#define SSRVOPT_UNATTENDED          0x00000020
#define SSRVOPT_NOCOPY              0x00000040
#define SSRVOPT_GETPATH             0x00000040
#define SSRVOPT_PARENTWIN           0x00000080
#define SSRVOPT_PARAMTYPE           0x00000100
#define SSRVOPT_SECURE              0x00000200
#define SSRVOPT_TRACE               0x00000400
#define SSRVOPT_SETCONTEXT          0x00000800
#define SSRVOPT_PROXY               0x00001000
#define SSRVOPT_DOWNSTREAM_STORE    0x00002000
#define SSRVOPT_OVERWRITE           0x00004000
#define SSRVOPT_RESETTOU            0x00008000
#define SSRVOPT_CALLBACKW           0x00010000
#define SSRVOPT_FLAT_DEFAULT_STORE  0x00020000
#define SSRVOPT_PROXYW              0x00040000
#define SSRVOPT_MESSAGE             0x00080000
#define SSRVOPT_SERVICE             0x00100000
#define SSRVOPT_FAVOR_COMPRESSED    0x00200000
#define SSRVOPT_STRING              0x00400000
#define SSRVOPT_WINHTTP             0x00800000
#define SSRVOPT_WININET             0x01000000
#define SSRVOPT_DONT_UNCOMPRESS     0x02000000
#define SSRVOPT_DISABLE_PING_HOST   0x04000000
#define SSRVOPT_DISABLE_TIMEOUT     0x08000000
#define SSRVOPT_ENABLE_COMM_MSG     0x10000000
#define SSRVOPT_URI_FILTER          0x20000000
#define SSRVOPT_URI_TIERS           0x40000000
#define SSRVOPT_RETRY_APP_HANG      0x80000000

#define SSRVOPT_MAX                 0x80000000

#define SSRVOPT_RESET               ((ULONG_PTR)-1)

#define NUM_SSRVOPTS                32

#define SSRVURI_HTTP_NORMAL         0x01
#define SSRVURI_HTTP_COMPRESSED     0x02
#define SSRVURI_HTTP_FILEPTR        0x04

#define SSRVURI_UNC_NORMAL          0x10
#define SSRVURI_UNC_COMPRESSED      0x20
#define SSRVURI_UNC_FILEPTR         0x40

#define SSRVURI_HTTP_MASK           0x0F
#define SSRVURI_UNC_MASK            0xF0
#define SSRVURI_ALL                 0xFF

#define SSRVURI_NORMAL              SSRVURI_HTTP_NORMAL
#define SSRVURI_COMPRESSED          SSRVURI_HTTP_COMPRESSED
#define SSRVURI_FILEPTR             SSRVURI_HTTP_FILEPTR

#define SSRVACTION_TRACE            1
#define SSRVACTION_QUERYCANCEL      2
#define SSRVACTION_EVENT            3
#define SSRVACTION_EVENTW           4
#define SSRVACTION_SIZE             5
#define SSRVACTION_HTTPSTATUS       6
#define SSRVACTION_XMLOUTPUT        7
#define SSRVACTION_CHECKSUMSTATUS   8

#endif

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)

#define SYMSTOREOPT_COMPRESS        0x01
#define SYMSTOREOPT_OVERWRITE       0x02
#define SYMSTOREOPT_RETURNINDEX     0x04
#define SYMSTOREOPT_POINTER         0x08
#define SYMSTOREOPT_ALT_INDEX       0x10
#define SYMSTOREOPT_UNICODE         0x20
#define SYMSTOREOPT_PASS_IF_EXISTS  0x40

#endif

#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)

#ifdef DBGHELP_TRANSLATE_TCHAR
#define SymInitialize                     SymInitializeW
#define SymAddSymbol                      SymAddSymbolW
#define SymDeleteSymbol                   SymDeleteSymbolW
#define SearchTreeForFile                 SearchTreeForFileW
#define UnDecorateSymbolName              UnDecorateSymbolNameW
#define SymGetLineFromName64              SymGetLineFromNameW64
#define SymGetLineFromAddr64              SymGetLineFromAddrW64
#define SymGetLineFromInlineContext       SymGetLineFromInlineContextW
#define SymGetLineNext64                  SymGetLineNextW64
#define SymGetLinePrev64                  SymGetLinePrevW64
#define SymFromName                       SymFromNameW
#define SymFindExecutableImage            SymFindExecutableImageW
#define FindExecutableImageEx             FindExecutableImageExW
#define SymSearch                         SymSearchW
#define SymEnumLines                      SymEnumLinesW
#define SymEnumSourceLines                SymEnumSourceLinesW
#define SymGetTypeFromName                SymGetTypeFromNameW
#define SymEnumSymbolsForAddr             SymEnumSymbolsForAddrW
#define SymFromAddr                       SymFromAddrW
#define SymFromInlineContext              SymFromInlineContextW
#define SymMatchString                    SymMatchStringW
#define SymEnumSourceFiles                SymEnumSourceFilesW
#define SymEnumSymbols                    SymEnumSymbolsW
#define SymEnumSymbolsEx                  SymEnumSymbolsExW
#define SymLoadModuleEx                   SymLoadModuleExW
#define SymSetSearchPath                  SymSetSearchPathW
#define SymGetSearchPath                  SymGetSearchPathW
#define EnumDirTree                       EnumDirTreeW
#define SymFromToken                      SymFromTokenW
#define SymFromIndex                      SymFromIndexW
#define SymGetScope                       SymGetScopeW
#define SymNext                           SymNextW
#define SymPrev                           SymPrevW
#define SymEnumTypes                      SymEnumTypesW
#define SymEnumTypesByName                SymEnumTypesByNameW
#define SymRegisterCallback64             SymRegisterCallbackW64
#define SymFindDebugInfoFile              SymFindDebugInfoFileW
#define FindDebugInfoFileEx               FindDebugInfoFileExW
#define SymFindFileInPath                 SymFindFileInPathW
#define SymEnumerateModules64             SymEnumerateModulesW64
#define SymSetHomeDirectory               SymSetHomeDirectoryW
#define SymGetHomeDirectory               SymGetHomeDirectoryW
#define SymGetSourceFile                  SymGetSourceFileW
#define SymGetSourceFileToken             SymGetSourceFileTokenW
#define SymGetSourceFileFromToken         SymGetSourceFileFromTokenW
#define SymGetSourceVarFromToken          SymGetSourceVarFromTokenW
#define SymGetSourceFileTokenByTokenName  SymGetSourceFileTokenByTokenNameW
#define SymGetFileLineOffsets64           SymGetFileLineOffsetsW64
#define SymFindFileInPath                 SymFindFileInPathW
#define SymMatchFileName                  SymMatchFileNameW
#define SymGetSourceFileFromTokenByTokenName SymGetSourceFileFromTokenByTokenNameW
#define SymGetModuleInfo64                SymGetModuleInfoW64
#define SymAddSourceStream                SymAddSourceStreamW
#define SymSrvIsStore                     SymSrvIsStoreW
#define SymSrvDeltaName                   SymSrvDeltaNameW
#define SymSrvGetSupplement               SymSrvGetSupplementW
#define SymSrvStoreSupplement             SymSrvStoreSupplementW
#define SymSrvGetFileIndexes              SymSrvGetFileIndexes
#define SymSrvGetFileIndexString          SymSrvGetFileIndexStringW
#define SymSrvStoreFile                   SymSrvStoreFileW
#define SymGetSymbolFile                  SymGetSymbolFileW
#define EnumerateLoadedModules64          EnumerateLoadedModulesW64
#define EnumerateLoadedModulesEx          EnumerateLoadedModulesExW
#define SymSrvGetFileIndexInfo            SymSrvGetFileIndexInfoW

#define IMAGEHLP_LINE64                   IMAGEHLP_LINEW64
#define PIMAGEHLP_LINE64                  PIMAGEHLP_LINEW64
#define SYMBOL_INFO                       SYMBOL_INFOW
#define PSYMBOL_INFO                      PSYMBOL_INFOW
#define SYMBOL_INFO_PACKAGE               SYMBOL_INFO_PACKAGEW
#define PSYMBOL_INFO_PACKAGE              PSYMBOL_INFO_PACKAGEW
#define FIND_EXE_FILE_CALLBACK            FIND_EXE_FILE_CALLBACKW
#define PFIND_EXE_FILE_CALLBACK           PFIND_EXE_FILE_CALLBACKW
#define SYM_ENUMERATESYMBOLS_CALLBACK     SYM_ENUMERATESYMBOLS_CALLBACKW
#define PSYM_ENUMERATESYMBOLS_CALLBACK    PSYM_ENUMERATESYMBOLS_CALLBACKW
#define SRCCODEINFO                       SRCCODEINFOW
#define PSRCCODEINFO                      PSRCCODEINFOW
#define SOURCEFILE                        SOURCEFILEW
#define PSOURCEFILE                       PSOURCEFILEW
#define SYM_ENUMSOURECFILES_CALLBACK      SYM_ENUMSOURCEFILES_CALLBACKW
#define PSYM_ENUMSOURCEFILES_CALLBACK     PSYM_ENUMSOURECFILES_CALLBACKW
#define IMAGEHLP_CBA_EVENT                IMAGEHLP_CBA_EVENTW
#define PIMAGEHLP_CBA_EVENT               PIMAGEHLP_CBA_EVENTW
#define PENUMDIRTREE_CALLBACK             PENUMDIRTREE_CALLBACKW
#define IMAGEHLP_DEFERRED_SYMBOL_LOAD64   IMAGEHLP_DEFERRED_SYMBOL_LOADW64
#define PIMAGEHLP_DEFERRED_SYMBOL_LOAD64  PIMAGEHLP_DEFERRED_SYMBOL_LOADW64
#define PFIND_DEBUG_FILE_CALLBACK         PFIND_DEBUG_FILE_CALLBACKW
#define PFINDFILEINPATHCALLBACK           PFINDFILEINPATHCALLBACKW
#define IMAGEHLP_MODULE64                 IMAGEHLP_MODULEW64
#define PIMAGEHLP_MODULE64                PIMAGEHLP_MODULEW64
#define SYMSRV_INDEX_INFO                 SYMSRV_INDEX_INFOW
#define PSYMSRV_INDEX_INFO                PSYMSRV_INDEX_INFOW

#define PSYMBOLSERVERPROC                 PSYMBOLSERVERPROCW
#define PSYMBOLSERVERPINGPROC             PSYMBOLSERVERPINGPROCW

#endif

DBHLP_DEPRECIATED BOOL IMAGEAPI FindFileInPath(
    HANDLE hprocess,
    PCSTR SearchPath,
    PCSTR FileName,
    PVOID id,
    DWORD two,
    DWORD three,
    DWORD flags,
    PSTR FilePath
);

DBHLP_DEPRECIATED BOOL IMAGEAPI FindFileInSearchPath(
    HANDLE hprocess,
    PCSTR SearchPath,
    PCSTR FileName,
    DWORD one,
    DWORD two,
    DWORD three,
    PSTR FilePath
);

DBHLP_DEPRECIATED BOOL IMAGEAPI SymEnumSym(
    HANDLE hProcess,
    ULONG64 BaseOfDll,
    PSYM_ENUMERATESYMBOLS_CALLBACK EnumSymbolsCallback,
    PVOID UserContext
);

DBHLP_DEPRECIATED BOOL IMAGEAPI SymEnumerateSymbols64(
    HANDLE hProcess,
    ULONG64 BaseOfDll,
    PSYM_ENUMSYMBOLS_CALLBACK64 EnumSymbolsCallback,
    PVOID UserContext
);

DBHLP_DEPRECIATED BOOL IMAGEAPI SymEnumerateSymbolsW64(
    HANDLE hProcess,
    ULONG64 BaseOfDll,
    PSYM_ENUMSYMBOLS_CALLBACK64W EnumSymbolsCallback,
    PVOID UserContext
);

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define SymEnumerateSymbols SymEnumerateSymbols64
#define SymEnumerateSymbolsW SymEnumerateSymbolsW64
#else
DBHLP_DEPRECIATED BOOL IMAGEAPI SymEnumerateSymbols(
    HANDLE hProcess,
    ULONG BaseOfDll,
    PSYM_ENUMSYMBOLS_CALLBACK EnumSymbolsCallback,
    PVOID UserContext
);

DBHLP_DEPRECIATED BOOL IMAGEAPI SymEnumerateSymbolsW(
    HANDLE hProcess,
    ULONG BaseOfDll,
    PSYM_ENUMSYMBOLS_CALLBACKW EnumSymbolsCallback,
    PVOID UserContext
);
#endif

DWORD64 IMAGEAPI SymLoadModule64(
    HANDLE hProcess,
    HANDLE hFile,
    PCSTR ImageName,
    PCSTR ModuleName,
    DWORD64 BaseOfDll,
    DWORD SizeOfDll
);

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define SymLoadModule SymLoadModule64
#else
DWORD IMAGEAPI SymLoadModule(
    HANDLE hProcess,
    HANDLE hFile,
    PCSTR ImageName,
    PCSTR ModuleName,
    DWORD BaseOfDll,
    DWORD SizeOfDll
);
#endif

BOOL IMAGEAPI SymGetSymNext64(
    HANDLE hProcess,
    PIMAGEHLP_SYMBOL64 Symbol
);

BOOL IMAGEAPI SymGetSymNextW64(
    HANDLE hProcess,
    PIMAGEHLP_SYMBOLW64 Symbol
);

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define SymGetSymNext SymGetSymNext64
#define SymGetSymNextW SymGetSymNextW64
#else
BOOL IMAGEAPI SymGetSymNext(
    HANDLE hProcess,
    PIMAGEHLP_SYMBOL Symbol
);

BOOL IMAGEAPI SymGetSymNextW(
    HANDLE hProcess,
    PIMAGEHLP_SYMBOLW Symbol
);
#endif

BOOL IMAGEAPI SymGetSymPrev64(
    HANDLE hProcess,
    PIMAGEHLP_SYMBOL64 Symbol
);

BOOL IMAGEAPI SymGetSymPrevW64(
    HANDLE hProcess,
    PIMAGEHLP_SYMBOLW64 Symbol
);

#if !defined(_IMAGEHLP_SOURCE_) && defined(_IMAGEHLP64)
#define SymGetSymPrev SymGetSymPrev64
#define SymGetSymPrevW SymGetSymPrevW64
#else
BOOL IMAGEAPI SymGetSymPrev(
    HANDLE hProcess,
    PIMAGEHLP_SYMBOL Symbol
);

BOOL IMAGEAPI SymGetSymPrevW(
    HANDLE hProcess,
    PIMAGEHLP_SYMBOLW Symbol
);
#endif

typedef ULONG (__stdcall *LPCALL_BACK_USER_INTERRUPT_ROUTINE)(void);

typedef struct {
    PCWSTR pBinPathNonExist;
    PCWSTR pSymbolPathNonExist;
}DBGHELP_DATA_REPORT_STRUCT, *PDBGHELP_DATA_REPORT_STRUCT;

void IMAGEAPI SetCheckUserInterruptShared(
    LPCALL_BACK_USER_INTERRUPT_ROUTINE lpStartAddress
);

LPCALL_BACK_USER_INTERRUPT_ROUTINE IMAGEAPI GetCheckUserInterruptShared(
    void
);

DWORD IMAGEAPI GetSymLoadError(
    void
);

void IMAGEAPI SetSymLoadError(
    DWORD error
);

BOOL IMAGEAPI ReportSymbolLoadSummary(
    HANDLE hProcess,
    PCWSTR pLoadModule,
    PDBGHELP_DATA_REPORT_STRUCT pSymbolData
);

void IMAGEAPI RemoveInvalidModuleList(
    HANDLE hProcess
);

#define SYMF_OMAP_GENERATED   0x00000001
#define SYMF_OMAP_MODIFIED    0x00000002
#define SYMF_REGISTER         0x00000008
#define SYMF_REGREL           0x00000010
#define SYMF_FRAMEREL         0x00000020
#define SYMF_PARAMETER        0x00000040
#define SYMF_LOCAL            0x00000080
#define SYMF_CONSTANT         0x00000100
#define SYMF_EXPORT           0x00000200
#define SYMF_FORWARDER        0x00000400
#define SYMF_FUNCTION         0x00000800
#define SYMF_VIRTUAL          0x00001000
#define SYMF_THUNK            0x00002000
#define SYMF_TLSREL           0x00004000

#define IMAGEHLP_SYMBOL_INFO_VALUEPRESENT          1
#define IMAGEHLP_SYMBOL_INFO_REGISTER              SYMF_REGISTER
#define IMAGEHLP_SYMBOL_INFO_REGRELATIVE           SYMF_REGREL
#define IMAGEHLP_SYMBOL_INFO_FRAMERELATIVE         SYMF_FRAMEREL
#define IMAGEHLP_SYMBOL_INFO_PARAMETER             SYMF_PARAMETER
#define IMAGEHLP_SYMBOL_INFO_LOCAL                 SYMF_LOCAL
#define IMAGEHLP_SYMBOL_INFO_CONSTANT              SYMF_CONSTANT
#define IMAGEHLP_SYMBOL_FUNCTION                   SYMF_FUNCTION
#define IMAGEHLP_SYMBOL_VIRTUAL                    SYMF_VIRTUAL
#define IMAGEHLP_SYMBOL_THUNK                      SYMF_THUNK
#define IMAGEHLP_SYMBOL_INFO_TLSRELATIVE           SYMF_TLSREL

PVOID IMAGEAPI RangeMapCreate(
    void
);

void IMAGEAPI RangeMapFree(
    PVOID RmapHandle
);

#define IMAGEHLP_RMAP_MAPPED_FLAT                   0x00000001
#define IMAGEHLP_RMAP_BIG_ENDIAN                    0x00000002
#define IMAGEHLP_RMAP_IGNORE_MISCOMPARE             0x00000004

#define IMAGEHLP_RMAP_FIXUP_ARM64X                  0x10000000
#define IMAGEHLP_RMAP_LOAD_RW_DATA_SECTIONS         0x20000000
#define IMAGEHLP_RMAP_OMIT_SHARED_RW_DATA_SECTIONS  0x40000000
#define IMAGEHLP_RMAP_FIXUP_IMAGEBASE               0x80000000

BOOL IMAGEAPI RangeMapAddPeImageSections(
    PVOID RmapHandle,
    PCWSTR ImageName,
    PVOID MappedImage,
    DWORD MappingBytes,
    DWORD64 ImageBase,
    DWORD64 UserTag,
    DWORD MappingFlags
);

BOOL IMAGEAPI RangeMapRemove(
    PVOID RmapHandle,
    DWORD64 UserTag
);

BOOL IMAGEAPI RangeMapRead(
    PVOID RmapHandle,
    DWORD64 Offset,
    PVOID Buffer,
    DWORD RequestBytes,
    DWORD Flags,
    PDWORD DoneBytes
);

BOOL IMAGEAPI RangeMapWrite(
    PVOID RmapHandle,
    DWORD64 Offset,
    PVOID Buffer,
    DWORD RequestBytes,
    DWORD Flags,
    PDWORD DoneBytes
);

#endif

#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES)

#include <poppack.h>

#include <minidumpapiset.h>

#endif

#endif /* _DBGHELP_H */
