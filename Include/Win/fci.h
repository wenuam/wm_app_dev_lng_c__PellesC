#include <fdi_fci_types.h>

#ifndef _FCI_H
#define _FCI_H

/* File Compression Interface definitions */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

typedef char *LPSTR;
#include <basetsd.h>

#ifndef _WIN64
#include <pshpack4.h>
#endif /* !_WIN64 */

typedef enum {
    FCIERR_NONE,
    FCIERR_OPEN_SRC,
    FCIERR_READ_SRC,
    FCIERR_ALLOC_FAIL,
    FCIERR_TEMP_FILE,
    FCIERR_BAD_COMPR_TYPE,
    FCIERR_CAB_FILE,
    FCIERR_USER_ABORT,
    FCIERR_MCI_FAIL,
    FCIERR_CAB_FORMAT_LIMIT
} FCIERROR;

#ifndef _A_NAME_IS_UTF
#define _A_NAME_IS_UTF  0x80
#endif

#ifndef _A_EXEC
#define _A_EXEC  0x40
#endif

typedef void * HFCI;

typedef struct {
    ULONG cb;
    ULONG cbFolderThresh;
    UINT cbReserveCFHeader;
    UINT cbReserveCFFolder;
    UINT cbReserveCFData;
    int iCab;
    int iDisk;
#ifndef REMOVE_CHICAGO_M6_HACK
    int fFailOnIncompressible;
#endif /* REMOVE_CHICAGO_M6_HACK */
    USHORT setID;
    char szDisk[CB_MAX_DISK_NAME];
    char szCab[CB_MAX_CABINET_NAME];
    char szCabPath[CB_MAX_CAB_PATH];
} CCAB;
typedef CCAB *PCCAB;

typedef void * ( DIAMONDAPI *PFNFCIALLOC)(ULONG cb);
#define FNFCIALLOC(fn)  void * DIAMONDAPI fn(ULONG cb)

typedef void (DIAMONDAPI *PFNFCIFREE)(void *memory);
#define FNFCIFREE(fn)  void DIAMONDAPI fn(void *memory)

typedef INT_PTR (DIAMONDAPI *PFNFCIOPEN)(LPSTR pszFile, int oflag, int pmode, int *err, void *pv);
typedef UINT (DIAMONDAPI *PFNFCIREAD)(INT_PTR hf, void *memory, UINT cb, int *err, void *pv);
typedef UINT (DIAMONDAPI *PFNFCIWRITE)(INT_PTR hf, void *memory, UINT cb, int *err, void *pv);
typedef int (DIAMONDAPI *PFNFCICLOSE)(INT_PTR hf, int *err, void *pv);
typedef long (DIAMONDAPI *PFNFCISEEK)(INT_PTR hf, long dist, int seektype, int *err, void *pv);
typedef int (DIAMONDAPI *PFNFCIDELETE)(LPSTR pszFile, int *err, void *pv);

#define FNFCIOPEN(fn)  INT_PTR DIAMONDAPI fn(  LPSTR pszFile, int oflag, int pmode, int *err, void *pv)
#define FNFCIREAD(fn)  UINT DIAMONDAPI fn(INT_PTR hf, void *memory, UINT cb, int *err, void *pv)
#define FNFCIWRITE(fn)  UINT DIAMONDAPI fn(INT_PTR hf, void *memory, UINT cb, int *err, void *pv)
#define FNFCICLOSE(fn)  int DIAMONDAPI fn(INT_PTR hf, int *err, void *pv)
#define FNFCISEEK(fn)  long DIAMONDAPI fn(INT_PTR hf, long dist, int seektype, int *err, void *pv)
#define FNFCIDELETE(fn)  int DIAMONDAPI fn(LPSTR pszFile, int *err, void *pv)

typedef BOOL (DIAMONDAPI *PFNFCIGETNEXTCABINET)(
    PCCAB pccab,
    ULONG cbPrevCab,
    void *pv);

#define FNFCIGETNEXTCABINET(fn) \
    BOOL DIAMONDAPI fn(PCCAB  pccab, ULONG  cbPrevCab, void *pv)

typedef int (DIAMONDAPI *PFNFCIFILEPLACED)(
    PCCAB pccab,
    LPSTR pszFile,
    long cbFile,
    BOOL fContinuation,
    void *pv);

#define FNFCIFILEPLACED(fn) \
    int DIAMONDAPI fn(PCCAB pccab, LPSTR pszFile, long  cbFile, BOOL  fContinuation, void *pv)

typedef INT_PTR (DIAMONDAPI *PFNFCIGETOPENINFO)(
    LPSTR pszName,
    USHORT *pdate,
    USHORT *ptime,
    USHORT *pattribs,
    int *err,
    void *pv);

#define FNFCIGETOPENINFO(fn) \
    INT_PTR DIAMONDAPI fn(LPSTR pszName, USHORT *pdate, USHORT *ptime, \
        USHORT *pattribs, int *err, void *pv)

#define statusFile      0
#define statusFolder    1
#define statusCabinet   2

typedef long (DIAMONDAPI *PFNFCISTATUS)(
    UINT typeStatus,
    ULONG cb1,
    ULONG cb2,
    void *pv);

#define FNFCISTATUS(fn) \
    long DIAMONDAPI fn(UINT typeStatus, ULONG cb1, ULONG cb2, void *pv)

typedef BOOL (DIAMONDAPI *PFNFCIGETTEMPFILE)(
    char *pszTempName,
    int cbTempName,
    void *pv);

#define FNFCIGETTEMPFILE(fn) \
    BOOL DIAMONDAPI fn( char *pszTempName, int cbTempName, void *pv)

HFCI DIAMONDAPI FCICreate(
    PERF perf,
    PFNFCIFILEPLACED pfnfcifp,
    PFNFCIALLOC pfna,
    PFNFCIFREE pfnf,
    PFNFCIOPEN pfnopen,
    PFNFCIREAD pfnread,
    PFNFCIWRITE pfnwrite,
    PFNFCICLOSE pfnclose,
    PFNFCISEEK pfnseek,
    PFNFCIDELETE pfndelete,
    PFNFCIGETTEMPFILE pfnfcigtf,
    PCCAB pccab,
    void *pv
);

BOOL DIAMONDAPI FCIAddFile(
    HFCI hfci,
    LPSTR pszSourceFile,
    LPSTR pszFileName,
    BOOL fExecute,
    PFNFCIGETNEXTCABINET pfnfcignc,
    PFNFCISTATUS pfnfcis,
    PFNFCIGETOPENINFO pfnfcigoi,
    TCOMP typeCompress
);

BOOL DIAMONDAPI FCIFlushCabinet(
    HFCI hfci,
    BOOL fGetNextCab,
    PFNFCIGETNEXTCABINET pfnfcignc,
    PFNFCISTATUS pfnfcis
);

BOOL DIAMONDAPI FCIFlushFolder(
    HFCI hfci,
    PFNFCIGETNEXTCABINET pfnfcignc,
    PFNFCISTATUS pfnfcis
);

BOOL DIAMONDAPI FCIDestroy(HFCI hfci);

#ifndef _WIN64
#include <poppack.h>
#endif /* !_WIN64 */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */

#endif /* _FCI_H */
