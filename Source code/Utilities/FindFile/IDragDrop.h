// IDragDrop.h

#ifndef _DRAGDROP_H_
#define _DRAGDROP_H_

//***************************************************************************
// Four interfaces, IDropSource, IDataObject, IDropTarget and IEnumFORMATETC
//***************************************************************************
#define WIN32_MEAN_AND_LEAN
#include <ole2.h>
#include <shlobj.h>
#include <shellapi.h>

DWORD HandleDragDrop(HWND hwndMain, HWND hwndList);
void FreeGlobalMem(void);

DEFINE_GUID(IID_IDropTargetHelper, 0x4657278b, 0x411b, 0x11d2, 0x83, 0x9a, 0x0, 0xc0, 0x4f, 0xd9, 0x18, 0xd0);
DEFINE_GUID(CLSID_DragDropHelper,   0x4657278a, 0x411b, 0x11d2, 0x83, 0x9a, 0x0, 0xc0, 0x4f, 0xd9, 0x18, 0xd0);
DEFINE_GUID(IID_IDragSourceHelper, 0xde5bf786, 0x477a, 0x11d2, 0x83, 0x9d, 0x0, 0xc0, 0x4f, 0xd9, 0x18, 0xd0);

//***************************************************************************
// Forward declarations for the IDropSource Interface
//***************************************************************************
STDMETHODIMP IDropSource_QueryInterface(IDropSource *this, REFIID riid, LPVOID *ppvOut);
ULONG STDMETHODCALLTYPE IDropSource_AddRef(IDropSource *this);
ULONG STDMETHODCALLTYPE IDropSource_Release(IDropSource *this);
STDMETHODIMP IDropSource_QueryContinueDrag(IDropSource *this, BOOL fEscapePressed, DWORD grfKeyState);
STDMETHODIMP IDropSource_GiveFeedback(IDropSource *this, DWORD dwEffect);

// Forward declaration for the IDropSource constructor
IDropSource * IDropSource_CDropSource(void);

// IDropSource Ex struct, the size is large enough
// to hold the interface members and the class variables
typedef struct _DropSourceEx
{
	// first part for the vtable
	IDropSource ds;
	// second part for the variables
	DWORD   m_cRefCount;
} DropSourceEx;

//  Forward declarations for the IDataObject interface
STDMETHODIMP IDataObject_QueryInterface(IDataObject *this, REFIID riid, LPVOID *ppvOut);
ULONG STDMETHODCALLTYPE IDataObject_AddRef(IDataObject *this);
ULONG STDMETHODCALLTYPE IDataObject_Release(IDataObject *this);
STDMETHODIMP IDataObject_GetData(IDataObject *this, LPFORMATETC pFE, LPSTGMEDIUM pSM);
STDMETHODIMP IDataObject_GetDataHere(IDataObject *this, LPFORMATETC pFE, LPSTGMEDIUM pSM);
STDMETHODIMP IDataObject_QueryGetData(IDataObject *this, LPFORMATETC pFE);
STDMETHODIMP IDataObject_GetCanonicalFormatEtc(IDataObject *this, LPFORMATETC pFE1, LPFORMATETC pFE2);
STDMETHODIMP IDataObject_SetData(IDataObject *this, LPFORMATETC pFE , LPSTGMEDIUM pSM, BOOL fRelease);
STDMETHODIMP IDataObject_EnumFormatEtc(IDataObject *this, DWORD dwDir, LPENUMFORMATETC *ppEnum);
STDMETHODIMP IDataObject_DAdvise(IDataObject *this, LPFORMATETC pFE, DWORD advf, LPADVISESINK pAdvSink, LPDWORD pdwConnection);
STDMETHODIMP IDataObject_DUnadvise(IDataObject *this, DWORD dwConnection);
STDMETHODIMP IDataObject_EnumDAdvise(IDataObject *this, LPENUMSTATDATA *ppenumAdvise);

// Forward declaration for the IDataObject constructor
IDataObject * IDataObject_CDataObject(void);

// IDataObject Ex struct to hold the interface and variables
typedef struct _DataObjectEx
{
	// first part for the vtable
	IDataObject dt;
	// second part for the variables
	DWORD 		m_cRefCount;
	LPFORMATETC m_pFormatEtc;
	LPSTGMEDIUM m_pStgMedium;
	DWORD 		m_cDataCount;
} DataObjectEx;

// Forward declarations for the IEnumFORMATETC Interface
STDMETHODIMP IEnumFORMATETC_QueryInterface(IEnumFORMATETC *this, REFIID riid, LPVOID *ppvOut);
ULONG STDMETHODCALLTYPE IEnumFORMATETC_AddRef(IEnumFORMATETC *this);
ULONG STDMETHODCALLTYPE IEnumFORMATETC_Release(IEnumFORMATETC *this);
STDMETHODIMP IEnumFORMATETC_Next(IEnumFORMATETC *this, ULONG celt, LPFORMATETC pFE, ULONG *puFetched);
STDMETHODIMP IEnumFORMATETC_Skip(IEnumFORMATETC *this, ULONG celt);
STDMETHODIMP IEnumFORMATETC_Reset(IEnumFORMATETC *this);
STDMETHODIMP IEnumFORMATETC_Clone(IEnumFORMATETC *this, IEnumFORMATETC **ppCloneEnumFormatEtc);

// Forward declaration for IEnumFORMATETC constructor
IEnumFORMATETC * IEnumFORMATETC_CEnumFormatEtc(LPFORMATETC pFE, int nItems);

// IEnumFORMATETC Ex struct to hold the interface and variables
typedef struct _EnumFORMATETCEx
{
	// first part for the vtable
	IEnumFORMATETC ef;
	// second part for the variables
	DWORD 		m_cRefCount;
	LPFORMATETC m_pStrFE;
	ULONG 		m_iCur;
	ULONG 		m_cItems;
} EnumFORMATETCEx;

// IDropTarget Interface
STDMETHODIMP IDropTarget_QueryInterface(IDropTarget *this, REFIID riid, void ** ppvObject);
ULONG STDMETHODCALLTYPE IDropTarget_AddRef(IDropTarget *this);
ULONG STDMETHODCALLTYPE IDropTarget_Release(IDropTarget *this);
STDMETHODIMP IDropTarget_DragEnter(IDropTarget *this, LPDATAOBJECT pDataObj, DWORD grfKeyState, POINTL pt, DWORD *pdwEffect);
STDMETHODIMP IDropTarget_DragOver(IDropTarget *this, DWORD grfKeyState, POINTL pt, DWORD *pdwEffect);
STDMETHODIMP IDropTarget_Drop(IDropTarget *this, LPDATAOBJECT pDataObj, DWORD grfKeyState, POINTL pt, DWORD *pdwEffect);
STDMETHODIMP IDropTarget_DragLeave(IDropTarget *this);

// Forward declaration for IDropTarget constructor
IDropTarget * IDropTarget_CDropTarget(HWND hwndTarget);

// Forward declaration for the private function DropTarget_QueryDrop
BOOL DropTarget_QueryDrop(IDropTarget *this, DWORD grfKeyState, LPDWORD pdwEffect);

// IDropTarget Ex struct to hold the interface and variables
typedef struct _DropTargetEx
{
	// first part for the vtable
	IDropTarget dt;
	// third part for the variables
	DWORD 		m_cRefCount;
	BOOL 		m_fAcceptFmt;
	LPSTGMEDIUM m_pStgMedium;
	HWND        m_hwndTarget;
	IDropTargetHelper * m_pDropTargetHelper;
} DropTargetEx;

#endif //_DRAGDROP_H_
