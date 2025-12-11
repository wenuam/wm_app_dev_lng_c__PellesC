/****************************************************************************
 *                                                                          *
 * File    : delayimp.c                                                     *
 *                                                                          *
 * Purpose : Delay load helper functions - replaces delayimp.lib            *
 *                                                                          *
 * Comment : This is a stripped down, and "C"-ified, version of the         *
 *           Microsoft source file DELAYHLP.CPP. Most noteably, we          *
 *           don't support hooks or unloading of modules.                   *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00-08-16  Created                                              *
 *                                                                          *
 ****************************************************************************/

#define WIN32_LEAN_AND_MEAN
#define STRICT
#include <windows.h>
#include <stdarg.h>

// Delay Import Directory entry.
typedef struct _IMAGE_DELAY_DESCR {
    DWORD Characteristics;                  // Attributes; must be zero.
    LPCSTR pszName;                         // Pointer to dll name.
    HMODULE *phmod;                         // Address of module handle.
    IMAGE_THUNK_DATA *pIAT;                 // Address of the IAT.
    const IMAGE_THUNK_DATA *pINT;           // Address of the INT.
    const IMAGE_THUNK_DATA *pBoundIAT;      // Address of the optional bound IAT.
    const IMAGE_THUNK_DATA *pUnloadIAT;     // Address of optional copy of original IAT.
    DWORD dwTimeStamp;                      // Time stamp of bound module.
} IMAGE_DELAY_DESCR;

typedef struct _DELAY_LOAD_PROC {
    BOOL fImportByName;
    union {
        LPCSTR pszProcName;
        DWORD dwOrdinal;
    };
} DELAY_LOAD_PROC;

/****************************************************************************
 *                                                                          *
 * Function: InfoMessage                                                    *
 *                                                                          *
 ****************************************************************************/

static void InfoMessage(LPCSTR pszFmt, ...)
{
    CHAR achBuf[512];
    va_list args;

    // Format message with optional arguments.
    va_start(args, pszFmt);
    wvsprintf(achBuf, pszFmt, args);
    va_end(args);

    // Guess we should display the message too...
    MessageBox(NULL, achBuf, "delayimp.c", MB_OK|MB_ICONINFORMATION);
}

/****************************************************************************
 *                                                                          *
 * Function: IndexFromPImgThunkData                                         *
 *                                                                          *
 ****************************************************************************/

static inline unsigned IndexFromPImgThunkData(const IMAGE_THUNK_DATA *pitdCur, const IMAGE_THUNK_DATA *pitdBase)
{
    //
    // Utility function for calculating the index of the current
    // import for all the tables (INT, BIAT, UIAT, and IAT).
    //
    return pitdCur - pitdBase;
}

/****************************************************************************
 *                                                                          *
 * Function: CountOfImports                                                 *
 *                                                                          *
 ****************************************************************************/

static inline unsigned CountOfImports(const IMAGE_THUNK_DATA *pitdBase)
{
    //
    // Utility function for calculating the count of imports given
    // the base of the IAT.  NB: this only works on a valid IAT!
    //
    const IMAGE_THUNK_DATA *pitd = pitdBase;
    unsigned cRet = 0;

    while (pitd->u1.Function)
    {
        pitd++;
        cRet++;
    }

    return cRet;
}

/****************************************************************************
 *                                                                          *
 * Function: PinhFromImageBase                                              *
 *                                                                          *
 ****************************************************************************/

static inline IMAGE_NT_HEADERS * WINAPI PinhFromImageBase(HMODULE hmod)
{
    return (IMAGE_NT_HEADERS *)((BYTE *)hmod + ((IMAGE_DOS_HEADER *)hmod)->e_lfanew);
}

/****************************************************************************
 *                                                                          *
 * Function: OverlayIAT                                                     *
 *                                                                          *
 ****************************************************************************/

static inline void WINAPI OverlayIAT(IMAGE_THUNK_DATA *pitdDst, const IMAGE_THUNK_DATA *pitdSrc)
{
    memcpy(pitdDst, pitdSrc, CountOfImports(pitdDst) * sizeof(IMAGE_THUNK_DATA));
}

/****************************************************************************
 *                                                                          *
 * Function: TimeStampOfImage                                               *
 *                                                                          *
 ****************************************************************************/

static inline DWORD WINAPI TimeStampOfImage(IMAGE_NT_HEADERS *pinh)
{
    return pinh->FileHeader.TimeDateStamp;
}

/****************************************************************************
 *                                                                          *
 * Function: IsLoadedAtPreferredAddress                                     *
 *                                                                          *
 ****************************************************************************/

static inline BOOL WINAPI IsLoadedAtPreferredAddress(IMAGE_NT_HEADERS *pinh, HMODULE hmod)
{
    return (DWORD)hmod == pinh->OptionalHeader.ImageBase;
}

/****************************************************************************
 *                                                                          *
 * Function: __delayLoadHelper                                              *
 *                                                                          *
 ****************************************************************************/

FARPROC WINAPI __delayLoadHelper(const IMAGE_DELAY_DESCR *pidd, FARPROC *ppfnIATEntry)
{
    DELAY_LOAD_PROC dlp = {0};
    HMODULE hmod = *pidd->phmod;
    unsigned iINT;
    const IMAGE_THUNK_DATA *pitd;
    FARPROC pfnRet = NULL;

    //
    // Calculate the index for the name in the import name table.
    // N.B. it is ordered the same as the IAT entries so the calculation
    // comes from the IAT side.
    //
    iINT = IndexFromPImgThunkData((const IMAGE_THUNK_DATA *)ppfnIATEntry, pidd->pIAT);
    pitd = &pidd->pINT[iINT];

    if ((dlp.fImportByName = ((pitd->u1.Ordinal & IMAGE_ORDINAL_FLAG) == 0)) != 0)
        dlp.pszProcName = (LPCSTR)((IMAGE_IMPORT_BY_NAME *)pitd->u1.AddressOfData)->Name;
    else
        dlp.dwOrdinal = IMAGE_ORDINAL(pitd->u1.Ordinal);

    if (hmod == 0)
    {
        //
        // This is the first reference to this DLL. Extract it from the resources
        // to a temporary location, and then load the library.
        //
        BOOL fOK = FALSE;
        HRSRC hrsrc;
        HGLOBAL hgRes;
        PVOID pvRes;
        HMODULE hmodT;
        char szName[256], *pch;

        InfoMessage("This is the first call to %.255s.\r\nTrying to extract it from the resources of this EXE...", pidd->pszName);

        // Build the resource name by stripping off the file extension.
        lstrcpy(szName, pidd->pszName);
        if ((pch = strchr(szName, '.')) != 0)
            *pch = '\0';

        // Try to find the given RCDATA resource.
        if ((hrsrc = FindResource(NULL, szName, RT_RCDATA)) != NULL &&
            (hgRes = LoadResource(NULL, hrsrc)) != NULL &&
            (pvRes = LockResource(hgRes)) != NULL)
        {
            DWORD cbRes = SizeofResource(NULL, hrsrc), cbWritten;
            HANDLE hf;

            // Build the file name for the extracted DLL file.
            if (GetTempPath(sizeof(szName), szName) == 0)
                lstrcpy(szName, "C:\\");
            lstrcat(szName, pidd->pszName);

            // Try to create the given file.
            hf = CreateFile(szName, GENERIC_WRITE, FILE_SHARE_READ,
                NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
            if (hf != INVALID_HANDLE_VALUE)
            {
                // Try to write the resource to the file.
                if (WriteFile(hf, pvRes, cbRes, &cbWritten, NULL) && cbRes == cbWritten)
                    fOK = TRUE;

                CloseHandle(hf);
            }

            // Try loading the extracted DLL file.
            if (fOK) hmod = LoadLibrary(szName);

            FreeResource(hgRes);
        }

        if (hmod == 0)
        {
            InfoMessage("Bummer. Unable to load: %.255s", szName);
            RaiseException(ERROR_SEVERITY_ERROR|ERROR_MOD_NOT_FOUND, 0, 0, NULL);  // Oops!!
            return NULL;
        }
        else
        {
            InfoMessage("Successfully loaded: %.255s", szName);
        }

        //
        // Store the library handle.  If it is already there, we infer
        // that another thread got there first, and we need to do a
        // FreeLibrary() to reduce the refcount.
        //
        hmodT = (HMODULE)InterlockedExchange((LPLONG)pidd->phmod, (LONG)hmod);
        if (hmodT == hmod)
        {
            FreeLibrary(hmod);
        }
    }

    // Go for the procedure now.
    if (pfnRet == 0)
    {
        if (pidd->pBoundIAT && pidd->dwTimeStamp)
        {
            // bound imports exist... check timestamp from the target image.
            PIMAGE_NT_HEADERS pinh = PinhFromImageBase(hmod);

            if (pinh->Signature == IMAGE_NT_SIGNATURE &&
                TimeStampOfImage(pinh) == pidd->dwTimeStamp &&
                IsLoadedAtPreferredAddress(pinh, hmod))
            {
                OverlayIAT(pidd->pIAT, pidd->pBoundIAT);
                pfnRet = (FARPROC)pidd->pIAT[iINT].u1.Function;
                return pfnRet;
            }
        }

        pfnRet = GetProcAddress(hmod, dlp.pszProcName);
    }

    if (pfnRet == 0)
    {
        InfoMessage("Bummer. Unable to find procedure: %s", dlp.pszProcName);
        RaiseException(ERROR_SEVERITY_ERROR|ERROR_PROC_NOT_FOUND, 0, 0, NULL);  // Oops!!
        return NULL;
    }
    else
    {
        InfoMessage("Successfully found procedure: %s", dlp.pszProcName);
    }

    *ppfnIATEntry = pfnRet;

    return pfnRet;
}
