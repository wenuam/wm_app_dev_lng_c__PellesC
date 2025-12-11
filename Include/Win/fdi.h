#include <fdi_fci_types.h>

#include <basetsd.h>

#ifndef _FDI_H
#define _FDI_H

/* File Decompression Interface definitions */

typedef char * LPSTR;

#ifndef _WIN64
#include <pshpack4.h>
#endif /* !_WIN64 */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

typedef enum {
    FDIERROR_NONE,
    FDIERROR_CABINET_NOT_FOUND,
    FDIERROR_NOT_A_CABINET,
    FDIERROR_UNKNOWN_CABINET_VERSION,
    FDIERROR_CORRUPT_CABINET,
    FDIERROR_ALLOC_FAIL,
    FDIERROR_BAD_COMPR_TYPE,
    FDIERROR_MDI_FAIL,
    FDIERROR_TARGET_FILE,
    FDIERROR_RESERVE_MISMATCH,
    FDIERROR_WRONG_CABINET,
    FDIERROR_USER_ABORT,
    FDIERROR_EOF,
} FDIERROR;

#ifndef _A_NAME_IS_UTF
#define _A_NAME_IS_UTF  0x80
#endif

#ifndef _A_EXEC
#define _A_EXEC  0x40
#endif

typedef void *HFDI;

typedef struct {
    long cbCabinet;
    USHORT cFolders;
    USHORT cFiles;
    USHORT setID;
    USHORT iCabinet;
    BOOL fReserve;
    BOOL hasprev;
    BOOL hasnext;
} FDICABINETINFO;
typedef FDICABINETINFO *PFDICABINETINFO;

typedef enum {
    fdidtNEW_CABINET,
    fdidtNEW_FOLDER,
    fdidtDECRYPT,
} FDIDECRYPTTYPE;

typedef struct {
    FDIDECRYPTTYPE fdidt;
    void *pvUser;
    union {
        struct {
            void *pHeaderReserve;
            USHORT cbHeaderReserve;
            USHORT setID;
            int iCabinet;
        } cabinet;
        struct {
            void *pFolderReserve;
            USHORT cbFolderReserve;
            USHORT iFolder;
        } folder;
        struct {
            void *pDataReserve;
            USHORT cbDataReserve;
            void *pbData;
            USHORT cbData;
            BOOL fSplit;
            USHORT cbPartial;
        } decrypt;
    };
} FDIDECRYPT;
typedef FDIDECRYPT *PFDIDECRYPT;

typedef void * ( DIAMONDAPI *PFNALLOC)(ULONG cb);
#define FNALLOC(fn)  void * DIAMONDAPI fn(ULONG cb)

typedef void (DIAMONDAPI *PFNFREE)(void *pv);
#define FNFREE(fn)  void DIAMONDAPI fn(void *pv)

typedef INT_PTR (DIAMONDAPI *PFNOPEN)(LPSTR pszFile, int oflag, int pmode);
typedef UINT (DIAMONDAPI *PFNREAD)(INT_PTR hf, void *pv, UINT cb);
typedef UINT (DIAMONDAPI *PFNWRITE)(INT_PTR hf, void *pv, UINT cb);
typedef int (DIAMONDAPI *PFNCLOSE)(INT_PTR hf);
typedef long (DIAMONDAPI *PFNSEEK)(INT_PTR hf, long dist, int seektype);

#define FNOPEN(fn)  INT_PTR DIAMONDAPI fn(LPSTR pszFile, int oflag, int pmode)
#define FNREAD(fn)  UINT DIAMONDAPI fn(INT_PTR hf, void *pv, UINT cb)
#define FNWRITE(fn)  UINT DIAMONDAPI fn(INT_PTR hf, void *pv, UINT cb)
#define FNCLOSE(fn)  int DIAMONDAPI fn(INT_PTR hf)
#define FNSEEK(fn)  long DIAMONDAPI fn(INT_PTR hf, long dist, int seektype)

typedef int (DIAMONDAPI *PFNFDIDECRYPT)(PFDIDECRYPT pfdid);
#define FNFDIDECRYPT(fn)  int DIAMONDAPI fn(PFDIDECRYPT pfdid)

typedef struct {
    long cb;
    char *psz1;
    char *psz2;
    char *psz3;
    void *pv;
    INT_PTR hf;
    USHORT date;
    USHORT time;
    USHORT attribs;
    USHORT setID;
    USHORT iCabinet;
    USHORT iFolder;
    FDIERROR fdie;
} FDINOTIFICATION, *PFDINOTIFICATION;

typedef enum {
    fdintCABINET_INFO,
    fdintPARTIAL_FILE,
    fdintCOPY_FILE,
    fdintCLOSE_FILE_INFO,
    fdintNEXT_CABINET,
    fdintENUMERATE,
} FDINOTIFICATIONTYPE;

typedef INT_PTR (DIAMONDAPI *PFNFDINOTIFY)(
    FDINOTIFICATIONTYPE fdint,
    PFDINOTIFICATION pfdin
);

#define FNFDINOTIFY(fn) \
    INT_PTR DIAMONDAPI fn(FDINOTIFICATIONTYPE fdint, PFDINOTIFICATION pfdin)

#ifndef _WIN64
#include <pshpack1.h>
#endif /* !_WIN64 */

typedef struct {
    char ach[2];
    long cbFile;
} FDISPILLFILE;
typedef FDISPILLFILE *PFDISPILLFILE;

#ifndef _WIN64
#include <poppack.h>
#endif /* !_WIN64 */

#define cpuUNKNOWN  (-1)    
#define cpu80286    (0)     
#define cpu80386    (1)     

HFDI DIAMONDAPI FDICreate(
    PFNALLOC pfnalloc,
    PFNFREE pfnfree,
    PFNOPEN pfnopen,
    PFNREAD pfnread,
    PFNWRITE pfnwrite,
    PFNCLOSE pfnclose,
    PFNSEEK pfnseek,
    int cpuType,
    PERF perf);

BOOL DIAMONDAPI FDIIsCabinet(
    HFDI hfdi,
    INT_PTR hf,
    PFDICABINETINFO pfdici
);

BOOL DIAMONDAPI FDICopy(
    HFDI hfdi,
    LPSTR pszCabinet,
    LPSTR pszCabPath,
    int flags,
    PFNFDINOTIFY pfnfdin,
    PFNFDIDECRYPT pfnfdid,
    void *pvUser
);

BOOL DIAMONDAPI FDIDestroy(HFDI hfdi);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

BOOL DIAMONDAPI FDITruncateCabinet(
    HFDI hfdi,
    LPSTR pszCabinetName,
    USHORT iFolderToDelete
);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#ifndef _WIN64
#include <poppack.h>
#endif /* !_WIN64 */

#endif /* _FDI_H */
