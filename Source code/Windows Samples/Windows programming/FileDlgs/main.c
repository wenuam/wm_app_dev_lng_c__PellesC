/****************************************************************************
 *                                                                          *
 * File    : main.c                                                         *
 *                                                                          *
 * Purpose : Example using new file dialogs for Windows Vista (or better).  *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00-00-00  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <windows.h>
#define COBJMACROS
#include <shobjidl.h>       /* for IFileDialog, IFileOpenDialog, IFileSaveDialog */
#include <knownfolders.h>   /* for known folder APIs and definitions */
#include <wchar.h>

#include "main.h"

#ifndef NELEMS
#define NELEMS(a)  (sizeof(a) / sizeof((a)[0]))
#endif /* NELEMS */

// A few identifiers for the save dialog.
#define DID_SAVETEXTBOX  100
#define DID_SAVEEDITBOX  101

static HINSTANCE g_hInst;
static PWSTR g_pszCustomText;  /* for passing text from the stupid event handler */

/* {B8337988-FD79-4A56-B5AC-17DBF7E10A71} -- generated GUID just for this program */
static const GUID IID_IMyFileDialogEvents = {0xb8337988,0xfd79,0x4a56,0xb5,0xac,0x17,0xdb,0xf7,0xe1,0xa,0x71};
static HRESULT STDMETHODCALLTYPE IMyFileDialogEvents_CreateInstance(LPUNKNOWN, REFIID, LPVOID *);

/****************************************************************************
 *                                                                          *
 * Function: ids                                                            *
 *                                                                          *
 * Purpose : Load and return a resource string.                             *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00-00-00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static PCWSTR const ids(int id)
{
    PCWSTR pcsz;

    // Use zero for nBufferMax to get a read-only pointer to the resource itself;
    // remember to use the -N option with the resource compiler ("append null character").
    return LoadString(g_hInst, id, (PWSTR)&pcsz, 0) != 0 ? pcsz : L"";
}

/****************************************************************************
 *                                                                          *
 * Function: Simple_FileOpenDialog                                          *
 *                                                                          *
 * Purpose : Yep, you guessed it, a simple sample file open dialog.         *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00-00-00  Created                                              *
 *                                                                          *
 ****************************************************************************/

HRESULT Simple_FileOpenDialog(HWND hwndParent)
{
    IFileOpenDialog *pfod = NULL;  /* (IFileSaveDialog is similar) */

    // Create the File Open Dialog COM object.
    HRESULT hr = CoCreateInstance(&CLSID_FileOpenDialog, NULL, CLSCTX_INPROC_SERVER, &IID_IFileDialog, (void **)&pfod);
    if (SUCCEEDED(hr))
    {
        DWORD dwFlags = 0;

        // Before setting dialog options, always remember to get the current options first (some are set by default).
        hr = IFileOpenDialog_GetOptions(pfod, &dwFlags);
        if (SUCCEEDED(hr))
        {
            // In our case, get shell items only for file system items. 
            hr = IFileOpenDialog_SetOptions(pfod, dwFlags | FOS_FORCEFILESYSTEM);
            if (SUCCEEDED(hr))
            {
                COMDLG_FILTERSPEC rgSaveTypes[2];

                rgSaveTypes[0].pszName = ids(IDS_FILTERNAME1);
                rgSaveTypes[0].pszSpec = ids(IDS_FILTERSPEC1);
                rgSaveTypes[1].pszName = ids(IDS_FILTERNAME2);
                rgSaveTypes[1].pszSpec = ids(IDS_FILTERSPEC2);

                // Set the file types to display (notice that this is a 1-based array).
                hr = IFileOpenDialog_SetFileTypes(pfod, NELEMS(rgSaveTypes), rgSaveTypes);
                if (SUCCEEDED(hr))
                {
                    // Set the default file type index (the first one).
                    hr = IFileOpenDialog_SetFileTypeIndex(pfod, 1);
                    if (SUCCEEDED(hr))
                    {
                        // Set the default file extension.
                        hr = IFileOpenDialog_SetDefaultExtension(pfod, ids(IDS_DEFAULTEXT));
                        if (SUCCEEDED(hr))
                        {
                            // Show the dialog.
                            hr = IFileOpenDialog_Show(pfod, hwndParent);
                            if (SUCCEEDED(hr))
                            {
                                IShellItem *psiResult = NULL;

                                // Obtain the result, once the user clicks the 'Open' button. The result is an IShellItem object.
                                hr = IFileOpenDialog_GetResult(pfod, &psiResult);
                                if (SUCCEEDED(hr))
                                {
                                    LPWSTR pszFilePath = NULL;

                                    // Turn the IShelllItem object into something useful, like a string.
                                    hr = IShellItem_GetDisplayName(psiResult, SIGDN_FILESYSPATH, &pszFilePath);
                                    if (SUCCEEDED(hr))
                                    {
                                        // Just for fun, use the Vista TaskDialog too...
                                        hr = TaskDialog(hwndParent, g_hInst,
                                            MAKEINTRESOURCE(IDS_APPNAME),
                                            MAKEINTRESOURCE(IDS_OPENMESSAGE),
                                            pszFilePath,
                                            TDCBF_OK_BUTTON,
                                            MAKEINTRESOURCE(IDR_APPICON),
                                            NULL
                                        );
                                        if (FAILED(hr))
                                        {
                                            // Maybe a TaskDialog() explaining that the first one failed?! ;-)
                                            __debugbreak();
                                        }

                                        CoTaskMemFree(pszFilePath);
                                    }

                                    // Release the IShellItem object.
                                    (void)IShellItem_Release(psiResult);
                                }
                            }
                        }
                    }
                }
            }
        }

        // Release the dialog object.
        (void)IFileOpenDialog_Release(pfod);
    }

    return hr;
}

/****************************************************************************
 *                                                                          *
 * Function: Customized_FileSaveDialog                                      *
 *                                                                          *
 * Purpose : A customized file save dialog.                                 *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00-00-00  Created                                              *
 *                                                                          *
 ****************************************************************************/

HRESULT Customized_FileSaveDialog(HWND hwndParent)
{
    IFileSaveDialog *pfsd = NULL;

    // Create the File Save Dialog COM object.
    HRESULT hr = CoCreateInstance(&CLSID_FileSaveDialog, NULL, CLSCTX_INPROC_SERVER, &IID_IFileDialog, (void **)&pfsd);
    if (SUCCEEDED(hr))
    {
        DWORD dwFlags = 0;

        // Before setting dialog options, always remember to get the current options first (some are set by default).
        hr = IFileSaveDialog_GetOptions(pfsd, &dwFlags);
        if (SUCCEEDED(hr))
        {
            // In our case, get shell items only for file system items. 
            hr = IFileSaveDialog_SetOptions(pfsd, dwFlags | FOS_FORCEFILESYSTEM);
            if (SUCCEEDED(hr))
            {
                COMDLG_FILTERSPEC rgSaveTypes[2];

                rgSaveTypes[0].pszName = ids(IDS_FILTERNAME1);
                rgSaveTypes[0].pszSpec = ids(IDS_FILTERSPEC1);
                rgSaveTypes[1].pszName = ids(IDS_FILTERNAME2);
                rgSaveTypes[1].pszSpec = ids(IDS_FILTERSPEC2);

                // Set the file types to display (notice that this is a 1-based array).
                hr = IFileSaveDialog_SetFileTypes(pfsd, NELEMS(rgSaveTypes), rgSaveTypes);
                if (SUCCEEDED(hr))
                {
                    // Set the default file type index (the first one).
                    hr = IFileSaveDialog_SetFileTypeIndex(pfsd, 1);
                    if (SUCCEEDED(hr))
                    {
                        // Set the default file extension.
                        hr = IFileSaveDialog_SetDefaultExtension(pfsd, ids(IDS_DEFAULTEXT));
                        if (SUCCEEDED(hr))
                        {
                            IFileDialogCustomize *pfdc = NULL;
                            DWORD dwCookie = 0;

                            // Customize the dialog a little by adding an extra editbox.
                            hr = IFileSaveDialog_QueryInterface(pfsd, &IID_IFileDialogCustomize, (void **)&pfdc);
                            if (SUCCEEDED(hr))
                            {
                                hr = IFileDialogCustomize_StartVisualGroup(pfdc, 1, L"");
                                if (SUCCEEDED(hr))
                                {
                                    hr = IFileDialogCustomize_AddText(pfdc, DID_SAVETEXTBOX, L"Boring string:");
                                    if (SUCCEEDED(hr))
                                    {
                                        hr = IFileDialogCustomize_AddEditBox(pfdc, DID_SAVEEDITBOX, L"Long and boring default string, probably longer than you care to read...");
                                        if (SUCCEEDED(hr))
                                        {
                                            hr = IFileDialogCustomize_EndVisualGroup(pfdc);
                                        }
                                    }
                                }
                            }

                            // We must retrieve any text from the extra editbox before the dialog closes,
                            // so an event handler must be associated with the save dialog. This means
                            // writing some ugly COM code. Sigh. Sigh again.
                            if (SUCCEEDED(hr))
                            {
                                IFileDialogEvents *pfde = NULL;

                                hr = IMyFileDialogEvents_CreateInstance(NULL, &IID_IMyFileDialogEvents, (void **)&pfde);
                                if (SUCCEEDED(hr))
                                {
                                    hr = IFileSaveDialog_Advise(pfsd, pfde, &dwCookie);
                                    (void)IFileDialogEvents_Release(pfde);
                                }
                            }

                            g_pszCustomText = NULL;

                            // Show the dialog.
                            hr = IFileSaveDialog_Show(pfsd, hwndParent);
                            if (SUCCEEDED(hr))
                            {
                                IShellItem *psiResult = NULL;

                                // Obtain the result, once the user clicks the 'Save' button. The result is an IShellItem object.
                                hr = IFileSaveDialog_GetResult(pfsd, &psiResult);
                                if (SUCCEEDED(hr))
                                {
                                    LPWSTR pszFilePath = NULL;

                                    // Turn the IShelllItem object into something useful, like a string.
                                    hr = IShellItem_GetDisplayName(psiResult, SIGDN_FILESYSPATH, &pszFilePath);
                                    if (SUCCEEDED(hr))
                                    {
                                        // Just for fun, try out the new TaskDialog function too...
                                        hr = TaskDialog(hwndParent, g_hInst,
                                            MAKEINTRESOURCE(IDS_APPNAME),
                                            MAKEINTRESOURCE(IDS_SAVEMESSAGE),
                                            pszFilePath,
                                            TDCBF_OK_BUTTON,
                                            MAKEINTRESOURCE(IDR_APPICON),
                                            NULL
                                        );
                                        if (FAILED(hr))
                                        {
                                            // Maybe display a TaskDialog(), explaining that the first one failed?! ;-)
                                            __debugbreak();
                                        }

                                        CoTaskMemFree(pszFilePath);
                                    }

                                    // Release the IShellItem object.
                                    (void)IShellItem_Release(psiResult);

                                    // Show result from the custom editbox.
                                    if (SUCCEEDED(hr) && g_pszCustomText != NULL)
                                    {
                                        hr = TaskDialog(hwndParent, g_hInst,
                                            MAKEINTRESOURCE(IDS_APPNAME),
                                            MAKEINTRESOURCE(IDS_SAVETEXTMESSAGE),
                                            g_pszCustomText,
                                            TDCBF_OK_BUTTON,
                                            MAKEINTRESOURCE(IDR_APPICON),
                                            NULL);
                                        if (FAILED(hr))
                                        {
                                            __debugbreak();
                                        }
                                    }
                                }

                                // Release the customizing object.
                                (void)IFileDialogCustomize_Release(pfdc);
                            }

                            // Clean up after the event handler.
                            free(g_pszCustomText);
                            g_pszCustomText = NULL;
                            //
                            if (dwCookie != 0)
                                (void)IFileSaveDialog_Unadvise(pfsd, dwCookie);
                        }
                    }
                }
            }
        }

        // Release the dialog object.
        (void)IFileSaveDialog_Release(pfsd);
    }

    return hr;
}

/****************************************************************************
 *                                                                          *
 * Intrface: IMyFileDialogEvents                                            *
 *                                                                          *
 * Purpose : Event handler for the file save dialog.                        *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00-00-00  Created                                              *
 *                                                                          *
 ****************************************************************************/

typedef struct IMyFileDialogEvents IMyFileDialogEvents;

typedef struct IMyFileDialogEventsVtbl {
    /* IUnknown */
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(IMyFileDialogEvents *, REFIID, void **);
    ULONG (STDMETHODCALLTYPE *AddRef)(IMyFileDialogEvents *);
    ULONG (STDMETHODCALLTYPE *Release)(IMyFileDialogEvents *);
    /* IFileDialogEvents */
    HRESULT (STDMETHODCALLTYPE *OnFileOk)(IMyFileDialogEvents *, IFileDialog *);
    HRESULT (STDMETHODCALLTYPE *OnFolderChanging)(IMyFileDialogEvents *, IFileDialog *, IShellItem *);
    HRESULT (STDMETHODCALLTYPE *OnFolderChange)(IMyFileDialogEvents *, IFileDialog *);
    HRESULT (STDMETHODCALLTYPE *OnSelectionChange)(IMyFileDialogEvents *, IFileDialog *);
    HRESULT (STDMETHODCALLTYPE *OnShareViolation)(IMyFileDialogEvents *, IFileDialog *, IShellItem *, FDE_SHAREVIOLATION_RESPONSE *);
    HRESULT (STDMETHODCALLTYPE *OnTypeChange)(IMyFileDialogEvents *, IFileDialog *);
    HRESULT (STDMETHODCALLTYPE *OnOverwrite)(IMyFileDialogEvents *, IFileDialog *, IShellItem *, FDE_OVERWRITE_RESPONSE *);
} IMyFileDialogEventsVtbl;

typedef struct IMyFileDialogEvents {
    /* public interface */
    const struct IMyFileDialogEventsVtbl *lpVtbl;
    /* private data */
    int cRef;
} IMyFileDialogEvents;

/****************************************************************************
 *                                                                          *
 * Member: IUnknown:QueryInterface                                          *
 *                                                                          *
 ****************************************************************************/

static HRESULT STDMETHODCALLTYPE IMyFileDialogEvents_QueryInterface(IMyFileDialogEvents *this, REFIID riid, void **ppvObject)
{
    if (IsEqualIID(riid, &IID_IMyFileDialogEvents))
    {
        *ppvObject = this;
        (void)this->lpVtbl->AddRef(this);
        return NOERROR;
    }

    *ppvObject = NULL;
    return E_NOINTERFACE;
}

/****************************************************************************
 *                                                                          *
 * Member: IUnknown:AddRef                                                  *
 *                                                                          *
 ****************************************************************************/

static ULONG STDMETHODCALLTYPE IMyFileDialogEvents_AddRef(IMyFileDialogEvents *this)
{
    return ++this->cRef;
}

/****************************************************************************
 *                                                                          *
 * Member: IUnknown:Release                                                 *
 *                                                                          *
 ****************************************************************************/

static ULONG STDMETHODCALLTYPE IMyFileDialogEvents_Release(IMyFileDialogEvents *this)
{
    if (--this->cRef)
        return this->cRef;

    free(this);
    return 0;
}

/****************************************************************************
 *                                                                          *
 * Member: IFileDialogEvents:OnFileOk                                       *
 *                                                                          *
 ****************************************************************************/

static HRESULT STDMETHODCALLTYPE IMyFileDialogEvents_OnFileOk(IMyFileDialogEvents *this, IFileDialog *pfsd)
{
    IFileDialogCustomize *pfdc = NULL;
    HRESULT hr;

    UNREFERENCED_PARAMETER(this);

    // Get the customizing object.
    hr = IFileSaveDialog_QueryInterface(pfsd, &IID_IFileDialogCustomize, (void **)&pfdc);
    if (SUCCEEDED(hr))
    {
        PWSTR pszText = NULL;

        hr = IFileDialogCustomize_GetEditBoxText(pfdc, DID_SAVEEDITBOX, &pszText);
        if (SUCCEEDED(hr))
        {
            // Obtain the result from the custom editbox.
            g_pszCustomText = _wcsdup(pszText);
            CoTaskMemFree(pszText);
        }
    }

    // Release the customizing object.
    (void)IFileDialogCustomize_Release(pfdc);

    return hr;
}

/****************************************************************************
 *                                                                          *
 * Member: IFileDialogEvents:OnFolderChanging                               *
 *                                                                          *
 ****************************************************************************/

static HRESULT STDMETHODCALLTYPE IMyFileDialogEvents_OnFolderChanging(IMyFileDialogEvents *this, IFileDialog *pfd, IShellItem *psiFolder)
{
    UNREFERENCED_PARAMETER(this);
    UNREFERENCED_PARAMETER(pfd);
    UNREFERENCED_PARAMETER(psiFolder);
    return E_NOTIMPL;
}

/****************************************************************************
 *                                                                          *
 * Member: IFileDialogEvents:OnFolderChange                                 *
 *                                                                          *
 ****************************************************************************/

static HRESULT STDMETHODCALLTYPE IMyFileDialogEvents_OnFolderChange(IMyFileDialogEvents *this, IFileDialog *pfd)
{
    UNREFERENCED_PARAMETER(this);
    UNREFERENCED_PARAMETER(pfd);
    return E_NOTIMPL;
}

/****************************************************************************
 *                                                                          *
 * Member: IFileDialogEvents:OnSelectionChange                              *
 *                                                                          *
 ****************************************************************************/

static HRESULT STDMETHODCALLTYPE IMyFileDialogEvents_OnSelectionChange(IMyFileDialogEvents *this, IFileDialog *pfd)
{
    UNREFERENCED_PARAMETER(this);
    UNREFERENCED_PARAMETER(pfd);
    return E_NOTIMPL;
}

/****************************************************************************
 *                                                                          *
 * Member: IFileDialogEvents:OnShareViolation                               *
 *                                                                          *
 ****************************************************************************/

static HRESULT STDMETHODCALLTYPE IMyFileDialogEvents_OnShareViolation(IMyFileDialogEvents *this, IFileDialog *pfd, IShellItem *psi, FDE_SHAREVIOLATION_RESPONSE *pResponse)
{
    UNREFERENCED_PARAMETER(this);
    UNREFERENCED_PARAMETER(pfd);
    UNREFERENCED_PARAMETER(psi);
    UNREFERENCED_PARAMETER(pResponse);
    return E_NOTIMPL;
}

/****************************************************************************
 *                                                                          *
 * Member: IFileDialogEvents:OnTypeChange                                   *
 *                                                                          *
 ****************************************************************************/

static HRESULT STDMETHODCALLTYPE IMyFileDialogEvents_OnTypeChange(IMyFileDialogEvents *this, IFileDialog *pfd)
{
    UNREFERENCED_PARAMETER(this);
    UNREFERENCED_PARAMETER(pfd);
    return E_NOTIMPL;
}

/****************************************************************************
 *                                                                          *
 * Member: IFileDialogEvents:OnOverwrite                                    *
 *                                                                          *
 ****************************************************************************/

static HRESULT STDMETHODCALLTYPE IMyFileDialogEvents_OnOverwrite(IMyFileDialogEvents *this, IFileDialog *pfd, IShellItem *psi, FDE_OVERWRITE_RESPONSE *pResponse)
{
    UNREFERENCED_PARAMETER(this);
    UNREFERENCED_PARAMETER(pfd);
    UNREFERENCED_PARAMETER(psi);
    UNREFERENCED_PARAMETER(pResponse);
    return E_NOTIMPL;
}

/****************************************************************************
 *                                                                          *
 * Intrface: IMyFileDialogEvents_CreateInstance                             *
 *                                                                          *
 * Purpose : Create new instance of IMyFileDialogEvents COM object.         *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00-00-00  Created                                              *
 *                                                                          *
 ****************************************************************************/

static HRESULT STDMETHODCALLTYPE IMyFileDialogEvents_CreateInstance(LPUNKNOWN pUnkOuter, REFIID riid, LPVOID *ppvObj)
{
    IMyFileDialogEvents *this = NULL;

    *ppvObj = NULL;

    // We don't support aggregation.
    if (pUnkOuter) return CLASS_E_NOAGGREGATION;

    // Create new IMyFileDialogEvents object.
    this = calloc(1, sizeof(*this));
    if (!this) return E_OUTOFMEMORY;

    // Initialize new IMyFileDialogEvents object.
    static const IMyFileDialogEventsVtbl Vtbl = {
        .QueryInterface = IMyFileDialogEvents_QueryInterface,
        .AddRef = IMyFileDialogEvents_AddRef,
        .Release = IMyFileDialogEvents_Release,
        .OnFileOk = IMyFileDialogEvents_OnFileOk,
        .OnFolderChanging = IMyFileDialogEvents_OnFolderChanging,
        .OnFolderChange = IMyFileDialogEvents_OnFolderChange,
        .OnSelectionChange = IMyFileDialogEvents_OnSelectionChange,
        .OnShareViolation = IMyFileDialogEvents_OnShareViolation,
        .OnTypeChange = IMyFileDialogEvents_OnTypeChange,
        .OnOverwrite = IMyFileDialogEvents_OnOverwrite,
    };
    this->lpVtbl = &Vtbl;
    return this->lpVtbl->QueryInterface(this, riid, ppvObj);
}

/****************************************************************************
 *                                                                          *
 * Function: wWinMain                                                       *
 *                                                                          *
 * Purpose : We need to start somewhere, so why not here?                   *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00-00-00  Created                                              *
 *                                                                          *
 ****************************************************************************/

int APIENTRY wWinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPWSTR lpszCmdline, int nCmdShow)
{
    HRESULT hr;

    UNREFERENCED_PARAMETER(hPrevInst);
    UNREFERENCED_PARAMETER(lpszCmdline);
    UNREFERENCED_PARAMETER(nCmdShow);

    // Save in a global.
    g_hInst = hInst;

    // Need COM support for the new file dialogs.
    if (FAILED(OleInitialize(0)))
        return 0;

    // A file open dialog...
    hr = Simple_FileOpenDialog(NULL);
    if (FAILED(hr))
    {
        // error handling omitted for fun...
    }

    // A customized file save dialog...
    hr = Customized_FileSaveDialog(NULL);
    if (FAILED(hr))
    {
        // error handling omitted for speed...
    }

    // Shut down. Go home. Bye.
    OleUninitialize();
    return 0;
}
