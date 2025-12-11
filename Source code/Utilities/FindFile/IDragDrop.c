// IDragDrop.c
#define WIN32_LEAN_AND_MEAN
#include "IDragDrop.h"
#include <stdio.h>
#include <tchar.h>
#define COBJMACROS
#include <objidl.h>

#pragma warn(disable:2229) // potentially used without being initialised

#include "findfile.h"

static HGLOBAL g_hGlob = NULL;

static BOOL g_fUnicode = TRUE;	// unicode

/*<MSDN_Note>
 Note	...To support the drag-and-drop helper object, the data object's
 SetData and GetData implementations must be able to accept and return
 arbitrary private formats.
</MSDN_Note>*/

// IDataObject vtable
IDataObjectVtbl idataObjectVtbl =
{
	IDataObject_QueryInterface,
	IDataObject_AddRef,
	IDataObject_Release,
	IDataObject_GetData,
	IDataObject_GetDataHere,
	IDataObject_QueryGetData,
	IDataObject_GetCanonicalFormatEtc,
	IDataObject_SetData,
	IDataObject_EnumFormatEtc,
	IDataObject_DAdvise,
	IDataObject_DUnadvise,
	IDataObject_EnumDAdvise
};

/****************************************************************************
 *																			*
 * Function: IDataObject_CDataObject										*
 *																			*
 * Purpose : IDataObject_CDataObject is the IDataObject constructor 		*
 *																			*
 *			 The IDataObject interface specifies methods that enable data	*
 *			 transfer and notification of changes in data. Data transfer	*
 *			 methods specify the format of the transferred data along with	*
 *			 the medium through which the data is to be transferred.		*
 *			 Optionally, the data can be rendered for a specific target 	*
 *			 device. In addition to methods for retrieving and storing data,*
 *			 the IDataObject interface specifies methods for enumerating	*
 *			 available formats and managing connections to advisory sinks	*
 *			 for handling change notifications. 							*
 *																			*
 ****************************************************************************/
IDataObject *IDataObject_CDataObject(void)
{
	// alloc enough mem for interface and the class variables
	DataObjectEx *pDOEx = malloc(sizeof(DataObjectEx));
	if (!pDOEx)
		return NULL;

	// init the vars and vtable
	pDOEx->dt.lpVtbl = &idataObjectVtbl;
	pDOEx->m_cRefCount = 1;	// add one reference count
	pDOEx->m_pFormatEtc = NULL;
	pDOEx->m_pStgMedium = NULL;
	pDOEx->m_cDataCount = 0;

	return &pDOEx->dt;	// return the Interface pointer
}

/****************************************************************************
 *																			*
 * Function: IDataObject_QueryInterface 									*
 *																			*
 * Purpose : Returns a pointer to a specified interface on an object to 	*
 *			 which a client currently holds an interface pointer. This		*
 *			 function must call AddRef on the pointer it returns.			*
 *																			*
****************************************************************************/
STDMETHODIMP IDataObject_QueryInterface(IDataObject * this, REFIID riid, LPVOID * ppvObject)
{
	if (IsEqualIID(riid, &IID_IUnknown) || IsEqualIID(riid, &IID_IDataObject))
	{
		*ppvObject = (void *)this;
		this->lpVtbl->AddRef(this);
		return S_OK;
	}
	*ppvObject = NULL;
	return E_NOINTERFACE;
}

/****************************************************************************
 *																			*
 * Function: IDataObject_AddRef 											*
 *																			*
 * Purpose : The AddRef method increments the reference count for an		*
 *			 interface on an object. It should be called for every new		*
 *			 copy of a pointer to an interface on a given object.			*
 *																			*
****************************************************************************/
ULONG STDMETHODCALLTYPE IDataObject_AddRef(IDataObject * this)
{
	// cast to get a pointer to the dataobject class
	DataObjectEx *pDOEx = (DataObjectEx *)this;

	// increase reference count
	return ++pDOEx->m_cRefCount;
}

/****************************************************************************
 *																			*
 * Function: IDataObject_Release											*
 *																			*
 * Purpose : The Release method Decrements the reference count for the		*
 *			 calling interface on a object. If the reference count on the	*
 *			 object falls to 0, the object is freed from memory.			*
 *																			*
****************************************************************************/
ULONG STDMETHODCALLTYPE IDataObject_Release(IDataObject * this)
{
	DataObjectEx *pDOEx = (DataObjectEx *)this;

	if (--pDOEx->m_cRefCount == 0)
	{
		free(this);
		return 0;
	}
	return pDOEx->m_cRefCount;
}

/****************************************************************************
 *																			*
 * Function: IDataObject_GetData											*
 *																			*
 * Purpose : The GetData method is called by a data consumer to obtain data *
 *			 from a source data object. The GetData method renders the data *
 *			 described in the specified FORMATETC structure and transfers	*
 *			 it through the specified STGMEDIUM structure. The caller then	*
 *			 assumes responsibility for releasing the STGMEDIUM structure.	*
 *																			*
****************************************************************************/
STDMETHODIMP IDataObject_GetData(IDataObject * this, LPFORMATETC pformatetc, LPSTGMEDIUM pmedium)
{
	DataObjectEx *pDOEx = (DataObjectEx *)this;

	if (pformatetc == NULL || pmedium == NULL)
		return E_INVALIDARG;

	memset(pmedium, 0, sizeof(STGMEDIUM));

	DWORD i;

	for (i = 0; i < pDOEx->m_cDataCount; i++)
	{
		if ((pformatetc->tymed & pDOEx->m_pFormatEtc[i].tymed) && (pformatetc->dwAspect == pDOEx->m_pFormatEtc[i].dwAspect) && (pformatetc->cfFormat == pDOEx->m_pFormatEtc[i].cfFormat) && (pformatetc->lindex == pDOEx->m_pFormatEtc[i].lindex))
		{
			HRESULT hr;

			hr = CopyStgMedium(&pDOEx->m_pStgMedium[i], pmedium);

			if (pmedium->tymed == TYMED_HGLOBAL)
			{
				//this tell's the caller not to free the global memory
				this->lpVtbl->QueryInterface(this, &IID_IUnknown, (LPVOID *) & pmedium->pUnkForRelease);
			}

			return hr;
		}
	}

	return DV_E_FORMATETC;
}

/****************************************************************************
 *																			*
 * Function: IDataObject_GetDataHere										*
 *																			*
 * Purpose : The GetDataHere method is called by a data consumer to obtain	*
 *			 data from a source data object. The GetData method renders the *
 *			 data described in the specified FORMATETC structure and		*
 *			 transfers it through the specified STGMEDIUM structure. The	*
 *			 caller then assumes responsibility for releasing the STGMEDIUM *
 *			 structure. 													*
 *																			*
****************************************************************************/
STDMETHODIMP IDataObject_GetDataHere(IDataObject * this, LPFORMATETC pformatetc, LPSTGMEDIUM pmedium)
{
	return E_NOTIMPL;
}

/****************************************************************************
 *																			*
 * Function: IDataObject_QueryGetData										*
 *																			*
 * Purpose : The QueryGetData method determines whether the data object is	*
 *			 capable of rendering the data described in the FORMATETC		*
 *			 structure. Objects attempting a paste or drop operation can	*
 *			 call this method before calling IDataObject_GetData to get an	*
 *			 indication of whether the operation may be successful. 		*
 *																			*
****************************************************************************/
STDMETHODIMP IDataObject_QueryGetData(IDataObject * this, LPFORMATETC pformatetc)
{
	DataObjectEx *pDOEx = (DataObjectEx *)this;

	if (!pformatetc)
		return DV_E_FORMATETC;

	if (!(DVASPECT_CONTENT & pformatetc->dwAspect))
		return DV_E_DVASPECT;

	//now check for an appropriate TYMED.
	DWORD i;
	HRESULT hr = DV_E_TYMED;

	for (i = 0; i < pDOEx->m_cDataCount; i++)
	{
		if (pformatetc->tymed & pDOEx->m_pFormatEtc[i].tymed)
		{
			if (pformatetc->cfFormat == pDOEx->m_pFormatEtc[i].cfFormat)
				return S_OK;
			else
				hr = DV_E_CLIPFORMAT;
		}
		else
			hr = DV_E_TYMED;
	}

	return hr;
}

/****************************************************************************
 *																			*
 * Function: IDataObject_GetCanonicalFormatEtc								*
 *																			*
 * Purpose : The GetCanonicalFormatEtc method provides a standard FORMATETC *
 *			 structure that is logically equivalent to one that is more 	*
 *			 complex. You use this method to determine whether two			*
 *			 different FORMATETC structures would return the same data, 	*
 *			 removing the need for duplicate rendering. 					*
 *																			*
****************************************************************************/
STDMETHODIMP IDataObject_GetCanonicalFormatEtc(IDataObject * this, LPFORMATETC pformatetc1, LPFORMATETC pformatetc2)
{
	return DATA_S_SAMEFORMATETC;
}

/****************************************************************************
 *																			*
 * Function: IDataObject_SetData											*
 *																			*
 * Purpose : The SetData method allows another object to attempt to send	*
 *			 data to the implementing data object. A data object implements *
 *			 this method if it supports receiving data from another object. *
 *			 If it does not support this, it should be implemented to		 *
 *			 return E_NOTIMPL. 											 *
 *																			*
 *			 The caller allocates the storage medium indicated by the		*
 *			 pmedium, in which the data is passed. The data object called	 *
 *			 does not take ownership of the data until it has successfully  *
 *			 received it and no error code is returned. The value of the	 *
 *			 fRelease parameter indicates the ownership of the medium		 *
 *			 after the call returns. FALSE indicates the caller still owns  *
 *			 the medium, and the data object only has the use of it during  *
 *			 the call; TRUE indicates that the data object now owns it and  *
 *			 must release it when it is no longer needed.					 *
 *																			*
 *			 The type of medium (TYMED) specified in the pformatetc and 	*
 *			 pmedium parameters must be the same. For example, one cannot	 *
 *			 be an hGlobal (global handle) and the other a stream. 		 *
 *																			*
****************************************************************************/
STDMETHODIMP IDataObject_SetData(IDataObject * this, LPFORMATETC pformatetc, LPSTGMEDIUM pmedium, BOOL fRelease)
{
	DataObjectEx *pDOEx = (DataObjectEx *)this;

	LPFORMATETC pfeNew;
	LPSTGMEDIUM psmNew;

	pDOEx->m_cDataCount++;

	pfeNew = calloc(1, sizeof(FORMATETC) * pDOEx->m_cDataCount);
	psmNew = calloc(1, sizeof(STGMEDIUM) * pDOEx->m_cDataCount);

	//copy the existing data
	if (pDOEx->m_pFormatEtc)
	{
		memcpy(pfeNew, pDOEx->m_pFormatEtc, sizeof(FORMATETC) * (pDOEx->m_cDataCount - 1));
	}
	if (pDOEx->m_pStgMedium)
	{
		memcpy(psmNew, pDOEx->m_pStgMedium, sizeof(STGMEDIUM) * (pDOEx->m_cDataCount - 1));
	}

	//add the new data
	pfeNew[pDOEx->m_cDataCount - 1] = *pformatetc;
	if (fRelease)
	{
		psmNew[pDOEx->m_cDataCount - 1] = *pmedium;
	}
	else
	{
		CopyStgMedium(pmedium, &psmNew[pDOEx->m_cDataCount - 1]);
	}

	LPFORMATETC pfeTemp = pDOEx->m_pFormatEtc;
	pDOEx->m_pFormatEtc = pfeNew;
	pfeNew = pfeTemp;

	LPSTGMEDIUM psmTemp = pDOEx->m_pStgMedium;
	pDOEx->m_pStgMedium = psmNew;
	psmNew = psmTemp;

	if (pfeNew)
		free(pfeNew);
	if (psmNew)
		free(psmNew);

	if (pDOEx->m_pFormatEtc && pDOEx->m_pStgMedium)
		return S_OK;

	return E_OUTOFMEMORY;
}

/****************************************************************************
 *																			*
 * Function: IDataObject_EnumFormatEtc										*
 *																			*
 * Purpose : The EnumFormatEtc method creates an object for enumerating the *
 *			 FORMATETC structures for a data object. These structures are	*
 *			 used in calls to IDataObject_GetData or IDataObject_SetData.	 *
 *																			*
****************************************************************************/
STDMETHODIMP IDataObject_EnumFormatEtc(IDataObject * this, DWORD dwDir, LPENUMFORMATETC * ppEnum)
{
	DataObjectEx *pDOEx = (DataObjectEx *)this;

	*ppEnum = NULL;

	switch (dwDir)
	{
	case DATADIR_GET:
		*ppEnum = IEnumFORMATETC_CEnumFormatEtc(pDOEx->m_pFormatEtc, pDOEx->m_cDataCount);

		if (*ppEnum)
			return S_OK;
		else
			return E_OUTOFMEMORY;

		break;

	default:
		return OLE_S_USEREG;
	}
}

/****************************************************************************
 *																			*
 * Function: IDataObject_DAdvise											*
 *																			*
 * Purpose : The DAdvise method is called by an object supporting an advise *
 *			 sink to create a connection between a data object and the		*
 *			 advise sink. This enables the advise sink to be notified of	 *
 *			 changes in the data of the object.							 *
 *																			*
****************************************************************************/
STDMETHODIMP IDataObject_DAdvise(IDataObject * this, LPFORMATETC pformatetc, DWORD advf, LPADVISESINK pAdvSink, LPDWORD pdwConnection)
{
	return E_NOTIMPL;
}

/****************************************************************************
 *																			*
 * Function: IDataObject_DUnadvise											*
 *																			*
 * Purpose : The DAdvise method destroys a notification connection that had *
 *			 been previously set up.										*
 *																			*
****************************************************************************/
STDMETHODIMP IDataObject_DUnadvise(IDataObject * this, DWORD dwConnection)
{
	return E_NOTIMPL;
}

/****************************************************************************
 *																			*
 * Function: IDataObject_EnumDAdvise										*
 *																			*
 * Purpose : The EnumDAdvise method creates an object that can be used to	*
 *			 enumerate the current advisory connections.					*
 *																			*
 *			 The enumerator object created by this method implements the	*
 *			 IEnumSTATDATA interface, one of the standard enumerator		 *
 *			 interfaces that contain the Next, Reset, Clone, and Skip		 *
 *			 methods. IEnumSTATDATA permits the enumeration of the data	 *
 *			 stored in an array of STATDATA structures. Each of these		 *
 *			 structures provides information on a single advisory			 *
 *			 connection, and includes FORMATETC and ADVF information, as	 *
 *			 well as the pointer to the advise sink and the token			 *
 *			 representing the connection.									 *
 *																			*
****************************************************************************/
STDMETHODIMP IDataObject_EnumDAdvise(IDataObject * this, LPENUMSTATDATA * ppenumAdvise)
{
	return OLE_E_ADVISENOTSUPPORTED;
}

// IDropSource vtable
IDropSourceVtbl idropSourceVtbl =
{
	IDropSource_QueryInterface,
	IDropSource_AddRef,
	IDropSource_Release,
	IDropSource_QueryContinueDrag,
	IDropSource_GiveFeedback
};

// IDropSource Interface constructor
/****************************************************************************
 *																			*
 * Function: IDropSource_CDataObject										*
 *																			*
 * Purpose : IDropSource_CDataObject is the IDropSource constructor 		*
 *																			*
 *			 The IDropSource interface is one of the interfaces you 		*
 *			 implement to provide drag-and-drop operations in your 		 *
 *			 application. It contains methods used in any application		 *
 *			 used as a data source in a drag-and-drop operation. The data	 *
 *			 source application in a drag-and-drop operation is			 *
 *			 responsible for:												 *
 *																			*
 *			 Determining the data being dragged based on the user's 		*
 *			 selection.													 *
 *																			*
 *			 Initiating the drag-and-drop operation based on the user's 	*
 *			 mouse actions.												 *
 *																			*
 *			 Generating some of the visual feedback during the				*
 *			 drag-and-drop operation, such as setting the cursor and		 *
 *			 highlighting the data selected for the drag-and-drop operation.*
 *																			*
 *			 Canceling or completing the drag-and-drop operation based on	*
 *			 the user's mouse actions. 									 *
 *																			*
 *			 Performing any action on the original data caused by the drop	*
 *			 operation, such as deleting the data on a drag move.			 *
 *																			*
 *			 IDropSource contains the methods for generating visual 		*
 *			 feedback to the end user and for canceling or completing the	 *
 *			 drag-and-drop operation. You also need to call the			 *
 *			 DoDragDrop, RegisterDragDrop, and RevokeDragDrop functions	 *
 *			 in drag-and-drop operations.									 *
 *																			*
 ****************************************************************************/
IDropSource *IDropSource_CDropSource(void)
{
	// alloc enough mem for interface and any class vars
	DropSourceEx *pDSEx = malloc(sizeof(DropSourceEx));
	if (!pDSEx)
		return NULL;

	// init the vars and vtable
	pDSEx->ds.lpVtbl = &idropSourceVtbl;
	pDSEx->m_cRefCount = 1;
	return &pDSEx->ds;
}

/****************************************************************************
 *																			*
 * Function: IDropSource_QueryInterface 									*
 *																			*
 * Purpose : Returns a pointer to a specified interface on an object to 	*
 *			 which a client currently holds an interface pointer. This		*
 *			 function must call AddRef on the pointer it returns.			*
 *																			*
****************************************************************************/
STDMETHODIMP IDropSource_QueryInterface(IDropSource * this, REFIID riid, LPVOID * ppvObject)
{
	if (IsEqualIID(riid, &IID_IUnknown) || IsEqualIID(riid, &IID_IDropSource))
	{
		*ppvObject = (void *)this;
		this->lpVtbl->AddRef(this);
		return S_OK;
	}
	*ppvObject = NULL;
	return E_NOINTERFACE;
}

/****************************************************************************
 *																			*
 * Function: IDropSource_AddRef 											*
 *																			*
 * Purpose : The AddRef method increments the reference count for an		*
 *			 interface on an object. It should be called for every new		*
 *			 copy of a pointer to an interface on a given object.			*
 *																			*
****************************************************************************/
ULONG STDMETHODCALLTYPE IDropSource_AddRef(IDropSource * this)
{
	// cast to get a pointer to the class
	DropSourceEx *pDSEx = (DropSourceEx *)this;
	// increase reference count
	return ++pDSEx->m_cRefCount;
}

/****************************************************************************
 *																			*
 * Function: IDropSource_Release											*
 *																			*
 * Purpose : The Release method Decrements the reference count for the		*
 *			 calling interface on a object. If the reference count on the	*
 *			 object falls to 0, the object is freed from memory.			*
 *																			*
****************************************************************************/
ULONG STDMETHODCALLTYPE IDropSource_Release(IDropSource * this)
{
	DropSourceEx *pDSEx = (DropSourceEx *)this;

	// decrease reference count
	if (--pDSEx->m_cRefCount == 0)
	{
		// free the memory if ref count is zero
		free(this);
		return 0;
	}
	return pDSEx->m_cRefCount;
}

/****************************************************************************
 *																			*
 * Function: IDropSource_GiveFeedback										*
 *																			*
 * Purpose : The GiveFeedback method enables a source application to give	*
 *			 visual feedback to the end user during a drag-and-drop 		*
 *			 operation by providing the DoDragDrop function with an		 *
 *			 enumeration value specifying the visual effect.				 *
 *																			*
****************************************************************************/
STDMETHODIMP IDropSource_GiveFeedback(IDropSource * this, DWORD dwEffect)
{
	return DRAGDROP_S_USEDEFAULTCURSORS;
}

/****************************************************************************
 *																			*
 * Function: IDropSource_QueryContinueDrag									*
 *																			*
 * Purpose : The QueryContinueDrag method determines whether a				*
 *			 drag-and-drop operation should be continued, canceled, or		*
 *			 completed. You do not call this method directly. The OLE		 *
 *			 DoDragDrop function calls this method during a drag-and-drop	 *
 *			 operation.													 *
 *																			*
****************************************************************************/
STDMETHODIMP IDropSource_QueryContinueDrag(IDropSource * this, BOOL fEscapePressed, DWORD grfKeyState)
{
	if (fEscapePressed)
		return DRAGDROP_S_CANCEL;

	if ((grfKeyState & MK_LBUTTON) || (grfKeyState & MK_RBUTTON))
		return S_OK;

	if (!(grfKeyState & MK_LBUTTON) || !(grfKeyState & MK_RBUTTON))
		return DRAGDROP_S_DROP;

	return S_OK;
}

// IEnumFORMATETC vtable
struct IEnumFORMATETCVtbl ienumFORMATETCVtbl =
{
	IEnumFORMATETC_QueryInterface,
	IEnumFORMATETC_AddRef,
	IEnumFORMATETC_Release,
	IEnumFORMATETC_Next,
	IEnumFORMATETC_Skip,
	IEnumFORMATETC_Reset,
	IEnumFORMATETC_Clone
};

// IEnumFORMATETC Interface constructor
/****************************************************************************
 *																			*
 * Function: IEnumFORMATETC_CEnumFormatEtc									*
 *																			*
 * Purpose : The IEnumFORMATETC interface is used to enumerate an array of	*
 *			 FORMATETC structures. IEnumFORMATETC has the same methods as	*
 *			 all enumerator interfaces: Next, Skip, Reset, and Clone.		*
 *																			*
****************************************************************************/
IEnumFORMATETC *IEnumFORMATETC_CEnumFormatEtc(LPFORMATETC pformatetc, int nItems)
{
	// alloc enough mem for interface and any class vars
	EnumFORMATETCEx *pEFEx = malloc(sizeof(EnumFORMATETCEx));
	if (!pEFEx)
		return NULL;

	// init the vars and vtable
	pEFEx->ef.lpVtbl = &ienumFORMATETCVtbl;
	pEFEx->m_pStrFE = NULL;
	pEFEx->m_iCur = 0;
	pEFEx->m_cItems = nItems;
	pEFEx->m_cRefCount = 1;

	pEFEx->m_pStrFE = malloc(sizeof(FORMATETC) * nItems);
	if (!pEFEx->m_pStrFE)
		return NULL;

	memcpy(pEFEx->m_pStrFE, pformatetc, sizeof(FORMATETC) * nItems);

	return &pEFEx->ef;	// return the Interface pointer
}

/****************************************************************************
 *																			*
 * Function: IEnumFORMATETC_QueryInterface									*
 *																			*
 * Purpose : Returns a pointer to a specified interface on an object to 	*
 *			 which a client currently holds an interface pointer. This		*
 *			 function must call AddRef on the pointer it returns.			*
 *																			*
****************************************************************************/
STDMETHODIMP IEnumFORMATETC_QueryInterface(IEnumFORMATETC * this, REFIID riid, LPVOID * ppvOut)
{
	if (IsEqualIID(riid, &IID_IUnknown) || IsEqualIID(riid, &IID_IEnumFORMATETC))
	{
		*ppvOut = (void *)this;
		this->lpVtbl->AddRef(this);
		return S_OK;
	}
	*ppvOut = NULL;
	return E_NOINTERFACE;
}

/****************************************************************************
 *																			*
 * Function: IEnumFORMATETC_AddRef											*
 *																			*
 * Purpose : The AddRef method increments the reference count for an		*
 *			 interface on an object. It should be called for every new		*
 *			 copy of a pointer to an interface on a given object.			*
 *																			*
****************************************************************************/
ULONG STDMETHODCALLTYPE IEnumFORMATETC_AddRef(IEnumFORMATETC * this)
{
	// cast the local EnumFORMATETCEx pointer
	EnumFORMATETCEx *pEFEx = (EnumFORMATETCEx *)this;
	return ++pEFEx->m_cRefCount;
}

/****************************************************************************
 *																			*
 * Function: IEnumFORMATETC_Release 										*
 *																			*
 * Purpose : The Release method Decrements the reference count for the		*
 *			 calling interface on a object. If the reference count on the	*
 *			 object falls to 0, the object is freed from memory.			*
 *																			*
****************************************************************************/
ULONG STDMETHODCALLTYPE IEnumFORMATETC_Release(IEnumFORMATETC * this)
{
	EnumFORMATETCEx *pEFEx = (EnumFORMATETCEx *)this;

	if (--pEFEx->m_cRefCount == 0)
	{
		if (pEFEx->m_pStrFE)
			free(pEFEx->m_pStrFE);
		free(this);
		return 0;
	}
	return pEFEx->m_cRefCount;
}

/****************************************************************************
 *																			*
 * Function: IEnumFORMATETC_Next											*
 *																			*
 * Purpose : Retrieves a specified number of items in the enumeration		*
 *			 sequence.														*
 *																			*
****************************************************************************/
STDMETHODIMP IEnumFORMATETC_Next(IEnumFORMATETC * this, ULONG celt, LPFORMATETC pformatetc, ULONG * puFetched)
{
	EnumFORMATETCEx *pEFEx = (EnumFORMATETCEx *)this;

	ULONG cReturn = 0L;

	if (celt <= 0 || pformatetc == NULL || pEFEx->m_iCur >= pEFEx->m_cItems)
		return S_FALSE;

	if (puFetched == NULL && celt != 1)
		return S_FALSE;

	if (puFetched != NULL)
		*puFetched = 0;

	while (pEFEx->m_iCur < pEFEx->m_cItems && celt > 0)
	{
		*pformatetc++ = pEFEx->m_pStrFE[pEFEx->m_iCur++];
		cReturn++;
		celt--;
	}

	if (NULL != puFetched)
		*puFetched = (cReturn - celt);

	return S_OK;
}

/****************************************************************************
 *																			*
 * Function: IEnumFORMATETC_Skip											*
 *																			*
 * Purpose : Skips over a specified number of items in the enumeration		*
 *			 sequence.														*
 *																			*
****************************************************************************/
STDMETHODIMP IEnumFORMATETC_Skip(IEnumFORMATETC * this, ULONG celt)
{
	EnumFORMATETCEx *pEFEx = (EnumFORMATETCEx *)this;

	if ((pEFEx->m_iCur + celt) >= pEFEx->m_cItems)
		return S_FALSE;

	pEFEx->m_iCur += celt;

	return S_OK;
}

/****************************************************************************
 *																			*
 * Function: IEnumFORMATETC_Reset											*
 *																			*
 * Purpose : Resets the enumeration sequence to the beginning.				*
 *																			*
****************************************************************************/
STDMETHODIMP IEnumFORMATETC_Reset(IEnumFORMATETC * this)
{
	EnumFORMATETCEx *pEFEx = (EnumFORMATETCEx *)this;

	pEFEx->m_iCur = 0;
	return S_OK;
}

/****************************************************************************
 *																			*
 * Function: IEnumFORMATETC_Clone											*
 *																			*
 * Purpose : Creates another enumerator that contains the same enumeration	*
 *			 state as the current one.										*
 *																			*
****************************************************************************/
STDMETHODIMP IEnumFORMATETC_Clone(IEnumFORMATETC * this, IEnumFORMATETC ** ppCloneEnumFormatEtc)
{
	EnumFORMATETCEx *pEFEx = (EnumFORMATETCEx *)this;

	IEnumFORMATETC *newEnum;

	if (NULL == ppCloneEnumFormatEtc)
		return S_FALSE;

	newEnum = IEnumFORMATETC_CEnumFormatEtc(pEFEx->m_pStrFE, pEFEx->m_cItems);
	if (!newEnum)
	{
		*ppCloneEnumFormatEtc = NULL;
		return E_OUTOFMEMORY;
	}

	*ppCloneEnumFormatEtc = newEnum;

	// cast another local EnumFORMATETCEx pointer to the new interface
	EnumFORMATETCEx *pEFExtmp = (EnumFORMATETCEx *)newEnum;

	pEFExtmp->m_iCur = pEFEx->m_iCur;

	return S_OK;
}

// IDropTarget vtable
IDropTargetVtbl idropTargetVtbl =
{
	IDropTarget_QueryInterface,
	IDropTarget_AddRef,
	IDropTarget_Release,
	IDropTarget_DragEnter,
	IDropTarget_DragOver,
	IDropTarget_DragLeave,
	IDropTarget_Drop
};

// IDropTarget Interface constructor
/****************************************************************************
 *																			*
 * Function: IDropTarget_CDropTarget										*
 *																			*
 * Purpose : The IDropTarget interface is one of the interfaces you 		*
 *			 implement to provide drag-and-drop operations in your			*
 *			 application. It contains methods used in any application that  *
 *			 can be a target for data during a drag-and-drop operation. A	 *
 *			 drop-target application is responsible for:					 *
 *																			*
 *			 Determining the effect of the drop on the target application	*
 *																			*
 *			 Incorporating any valid dropped data when the drop occurs.	 *
 *																			*
 *			 Communicating target feedback to the source so the source 	 *
 *			 application can provide appropriate visual feedback such as	 *
 *			 setting the cursor.											 *
 *																			*
 *			 Implementing drag scrolling.									 *
 *																			*
 *			 Registering and revoking application windows as drop targets.  *
 *																			*
****************************************************************************/
IDropTarget *IDropTarget_CDropTarget(HWND hwndTarget)
{
	// alloc enough mem for interface and any class vars
	DropTargetEx *pDTEx = malloc(sizeof(DropTargetEx));
	if (!pDTEx)
		return NULL;

	// init the vars and vtable
	pDTEx->dt.lpVtbl = &idropTargetVtbl;
	pDTEx->m_cRefCount = 1;
	pDTEx->m_fAcceptFmt = FALSE;
	pDTEx->m_pDropTargetHelper = NULL;
	pDTEx->m_hwndTarget = hwndTarget;

	// Create the IID_IDropTargetHelper pointer
	CoCreateInstance(&CLSID_DragDropHelper, NULL, CLSCTX_INPROC_SERVER, &IID_IDropTargetHelper, (LPVOID *) & pDTEx->m_pDropTargetHelper);

	return &pDTEx->dt;	// return the Interface pointer
}

/****************************************************************************
 *																			*
 * Function: IDropTarget_QueryInterface 									*
 *																			*
 * Purpose : Returns a pointer to a specified interface on an object to 	*
 *			 which a client currently holds an interface pointer. This		*
 *			 function must call AddRef on the pointer it returns.			*
 *																			*
****************************************************************************/
STDMETHODIMP IDropTarget_QueryInterface(IDropTarget * this, REFIID riid, void **ppvObject)
{
	if (IsEqualIID(riid, &IID_IUnknown) || IsEqualIID(riid, &IID_IDropTarget))
	{
		*ppvObject = (void *)this;
		this->lpVtbl->AddRef(this);
		return S_OK;
	}
	*ppvObject = NULL;
	return E_NOINTERFACE;
}

/****************************************************************************
 *																			*
 * Function: IDropTarget_AddRef 											*
 *																			*
 * Purpose : The AddRef method increments the reference count for an		*
 *			 interface on an object. It should be called for every new		*
 *			 copy of a pointer to an interface on a given object.			*
 *																			*
****************************************************************************/
ULONG STDMETHODCALLTYPE IDropTarget_AddRef(IDropTarget * this)
{
	// cast the local DropTargetEx pointer
	DropTargetEx *pDTEx = (DropTargetEx *)this;
	return ++pDTEx->m_cRefCount;
}

/****************************************************************************
 *																			*
 * Function: IDropTarget_Release											*
 *																			*
 * Purpose : The Release method Decrements the reference count for the		*
 *			 calling interface on a object. If the reference count on the	*
 *			 object falls to 0, the object is freed from memory.			*
 *																			*
****************************************************************************/
ULONG STDMETHODCALLTYPE IDropTarget_Release(IDropTarget * this)
{
	DropTargetEx *pDTEx = (DropTargetEx *)this;
	if (--pDTEx->m_cRefCount == 0)
	{
		if (pDTEx->m_pDropTargetHelper)
		{
			// Cleanup the IID_IDropTargetHelper
			pDTEx->m_pDropTargetHelper->lpVtbl->Release(pDTEx->m_pDropTargetHelper);
		}
		free(this);
		return 0;
	}

	return pDTEx->m_cRefCount;
}

/****************************************************************************
 *																			*
 * Function: IDropTarget_DragEnter											*
 *																			*
 * Purpose : Indicates whether a drop can be accepted, and, if so, the		*
 *			 effect of the drop.											*
 *																			*
 *			 You do not call IDropTarget_DragEnter directly; instead the	*
 *			 DoDragDrop function calls it to determine the effect of a drop *
 *			 the first time the user drags the mouse into the registered	 *
 *			 window of a drop target.										 *
 *																			*
****************************************************************************/
STDMETHODIMP IDropTarget_DragEnter(IDropTarget * this, LPDATAOBJECT pDataObj, DWORD grfKeyState, POINTL pt, LPDWORD pdwEffect)
{
	DropTargetEx *pDTEx = (DropTargetEx *)this;
	if (pDTEx->m_pDropTargetHelper)
		pDTEx->m_pDropTargetHelper->lpVtbl->DragEnter(pDTEx->m_pDropTargetHelper, pDTEx->m_hwndTarget, pDataObj, (LPPOINT) & pt, *pdwEffect);

	FORMATETC fe;

	fe.cfFormat = CF_HDROP;
	fe.ptd = NULL;
	fe.dwAspect = DVASPECT_CONTENT;
	fe.lindex = -1;
	fe.tymed = TYMED_HGLOBAL;

	// Does the drag source provide the clipboard format we are looking for?
	pDTEx->m_fAcceptFmt = (S_OK == pDataObj->lpVtbl->QueryGetData(pDataObj, &fe)) ? TRUE : FALSE;

	DropTarget_QueryDrop(this, grfKeyState, pdwEffect);
	return S_OK;
}

/****************************************************************************
 *																			*
 * Function: IDropTarget_DragOver											*
 *																			*
 * Purpose : Provides target feedback to the user and communicates the		*
 *			 drop's effect to the DoDragDrop function so it can communicate *
 *			 the effect of the drop back to the source.					 *
 *																			*
 *			 You do not call IDropTarget_DragOver directly. The DoDragDrop  *
 *			 function calls this method each time the user moves the mouse  *
 *			 across a given target window. DoDragDrop exits the loop if the *
 *			 drag-and-drop operation is canceled, if the user drags the	 *
 *			 mouse out of the target window, or if the drop is completed.	 *
 *																			*
 *																			*
****************************************************************************/
STDMETHODIMP IDropTarget_DragOver(IDropTarget * this, DWORD grfKeyState, POINTL pt, LPDWORD pdwEffect)
{
	DropTargetEx *pDTEx = (DropTargetEx *)this;
	if (pDTEx->m_pDropTargetHelper)
		pDTEx->m_pDropTargetHelper->lpVtbl->DragOver(pDTEx->m_pDropTargetHelper, (LPPOINT) & pt, *pdwEffect);

	DropTarget_QueryDrop(this, grfKeyState, pdwEffect);
	*pdwEffect = DROPEFFECT_NONE;	// Our window does not accept drops
	return S_OK;
}

/****************************************************************************
 *																			*
 * Function: IDropTarget_DragLeave											*
 *																			*
 * Purpose : Removes target feedback and releases the data object.			*
 *																			*
 *			 You do not call this method directly. The DoDragDrop function	*
 *			 calls this method in either of the following cases:			*
 *																			*
 *			 When the user drags the cursor out of a given target window.	*
 *			 When the user cancels the current drag-and-drop operation. 	*
 *																			*
 *			 To implement IDropTarget_DragLeave, you must remove any target *
 *			 feedback that is currently displayed. You must also release	 *
 *			 any references you hold to the data transfer object.			 *
 *																			*
****************************************************************************/
STDMETHODIMP IDropTarget_DragLeave(IDropTarget * this)
{
	DropTargetEx *pDTEx = (DropTargetEx *)this;
	if (pDTEx->m_pDropTargetHelper)
		pDTEx->m_pDropTargetHelper->lpVtbl->DragLeave(pDTEx->m_pDropTargetHelper);

	pDTEx->m_fAcceptFmt = FALSE;
	return S_OK;
}

/****************************************************************************
 *																			*
 * Function: IDropTarget_DragDrop											*
 *																			*
 * Purpose : Incorporates the source data into the target window, removes	*
 *			 target feedback, and releases the data object. 				*
 *																			*
 *			 You do not call this method directly. The DoDragDrop function  *
 *			 calls this method when the user completes the drag-and-drop	 *
 *			 operation.													 *
 *																			*
 *	 		In implementing IDropTarget_Drop, you must incorporate the	   *
 *			 data object into the target. Use the formats available in 	 *
 *			 IDataObject, available through pDataObject, along with the	 *
 *			 current state of the modifier keys to determine how the data	 *
 *			 is to be incorporated, such as linking or embedding.			 *
 *																			*
****************************************************************************/
STDMETHODIMP IDropTarget_Drop(IDropTarget * this, LPDATAOBJECT pDataObj, DWORD grfKeyState, POINTL pt, LPDWORD pdwEffect)
{
	DropTargetEx *pDTEx = (DropTargetEx *)this;
	if (pDTEx->m_pDropTargetHelper)
		pDTEx->m_pDropTargetHelper->lpVtbl->Drop(pDTEx->m_pDropTargetHelper, pDataObj, (LPPOINT) & pt, *pdwEffect);

	FORMATETC fe;
	STGMEDIUM sm;
	HRESULT hr = E_FAIL;

	if (DropTarget_QueryDrop(this, grfKeyState, pdwEffect))
	{
		fe.cfFormat = CF_HDROP;
		fe.ptd = NULL;
		fe.dwAspect = DVASPECT_CONTENT;
		fe.lindex = -1;
		fe.tymed = TYMED_HGLOBAL;

		// User has dropped on us. Get the data from drag source
		hr = pDataObj->lpVtbl->GetData(pDataObj, &fe, &sm);
		if (SUCCEEDED(hr))
		{
			ReleaseStgMedium(&sm);
		}
	}

	*pdwEffect = DROPEFFECT_NONE;

	return hr;
}

/* OleStdGetDropEffect
** -------------------
**
** Convert a keyboard state into a DROPEFFECT.
**
** returns the DROPEFFECT value derived from the key state.
**	  the following is the standard interpretation:
**			no modifier -- Default Drop 	(0 is returned)
**			CTRL		-- DROPEFFECT_COPY
**			SHIFT		-- DROPEFFECT_MOVE
**			CTRL-SHIFT	-- DROPEFFECT_LINK
**
**	  Default Drop: this depends on the type of the target application.
**	  this is re-interpretable by each target application. a typical
**	  interpretation is if the drag is local to the same document
**	  (which is source of the drag) then a MOVE operation is
**	  performed. if the drag is not local, then a COPY operation is
**	  performed.
*/
#define OleStdGetDropEffect(grfKeyState)	\
	( (grfKeyState & MK_CONTROL) ?			\
		( (grfKeyState & MK_SHIFT) ? DROPEFFECT_LINK : DROPEFFECT_COPY ) :	\
		( (grfKeyState & MK_SHIFT) ? DROPEFFECT_MOVE : 0 ) )

BOOL DropTarget_QueryDrop(IDropTarget * this, DWORD grfKeyState, LPDWORD pdwEffect)
{
	DropTargetEx *pDTEx = (DropTargetEx *)this;
	DWORD dwOKEffects = *pdwEffect;

	if (!pDTEx->m_fAcceptFmt)
	{
		*pdwEffect = DROPEFFECT_NONE;
		return FALSE;
	}

	*pdwEffect = OleStdGetDropEffect(grfKeyState);
	if (*pdwEffect == 0)
	{
		// No modifier keys used by user while dragging.
		if (DROPEFFECT_COPY & dwOKEffects)
			*pdwEffect = DROPEFFECT_COPY;
		else if (DROPEFFECT_MOVE & dwOKEffects)
			*pdwEffect = DROPEFFECT_MOVE;
		else if (DROPEFFECT_LINK & dwOKEffects)
			*pdwEffect = DROPEFFECT_LINK;
		else
		{
			*pdwEffect = DROPEFFECT_NONE;
		}
	}
	else
	{
		// Check if the drag source application allows the drop effect desired by user.
		// The drag source specifies this in DoDragDrop
		if (!(*pdwEffect & dwOKEffects))
			*pdwEffect = DROPEFFECT_NONE;

		// We don't accept links
		if (*pdwEffect == DROPEFFECT_LINK)
			*pdwEffect = DROPEFFECT_NONE;
	}

	return (DROPEFFECT_NONE == *pdwEffect) ? FALSE : TRUE;
}

void FreeGlobalMem(void)
{
	// free the previous allocation, this is because the RecycleBin
	// needs this memory left intact for some time after draging onto it.
	// also call this as the app is terminating.
	if (g_hGlob)
	{
		GlobalFree(g_hGlob);
		g_hGlob = NULL;
	}
}

BOOL MyListView_IsItemVisible(HWND hList, int index)
{
	int topIndex  = ListView_GetTopIndex(hList);
	int pageCount = ListView_GetCountPerPage(hList);

	if (index >= topIndex && index < (topIndex + pageCount))
		return TRUE;
	else
		return FALSE;
}

int ListView_FindFirstAndLastVisSelItems(HWND hList, int *index, int numItems, int *lastItem)
{
	int j, i, first = 0, last = -1;
	for (i = 0; i < numItems; i++)
	{
		if (MyListView_IsItemVisible(hList, index[i]))
		{
			first = i;
			break;
		}
	}

	for (j = i; j < numItems; j++)
	{
		if (MyListView_IsItemVisible(hList, index[j]))
			last = j;
	}

	// Return the first and last visible items.
	*lastItem = last;
	return first;

}

int GetBmpWidthAndHeight(HWND hList, int *ind, int firstIndex, int span, int *height)
{
	RECT rc;
	int width = 0;

	// Get the maximum width and the height of listview
	// rectangles for the bitmap dimensions
	for (int i = firstIndex; i < (firstIndex + span); i++)
	{
		MyListView_GetItemRect(hList, ind[i], &rc, LVIR_SELECTBOUNDS);
		if (rc.right - rc.left > width)
		{
			width = rc.right - rc.left;
			*height = rc.bottom - rc.top;	// all heights will be the same
		}
	}
	return width;
}

HBITMAP CreateDragBitmap(HWND hList, wchar_t *pszFiles, int *indexs, int numItems, int *newIndex)
{
	/************************************************************
	The image will only be made using visible items of the listview.

	The indexs array elements correspond with the strings, so
	index[0] may equal 7, and that will be string one.
	*************************************************************/
	RECT rc;
	SIZE sz;
	int width, height, i;

	HIMAGELIST himlSmall = ListView_GetImageList(hList, LVSIL_SMALL);
	HICON hDefaultIcon = ImageList_GetIcon(himlSmall, 3, ILD_NORMAL);

	int firstVisSelItemIndex, lastVisSelItemIndex;
	firstVisSelItemIndex = ListView_FindFirstAndLastVisSelItems(hList, indexs, numItems, &lastVisSelItemIndex);

	// span is number of item rectangles that will be used for the image
	int span = indexs[lastVisSelItemIndex] - indexs[firstVisSelItemIndex] + 1;

	// Total possible number of images is span
	HICON hIcon[span];
	memset(&hIcon, 0, sizeof(HICON) * span);	// All hIcon's to NULL

	// Get the maximum width and the height of bitmap for items that
	// will be displayed.
	width = GetBmpWidthAndHeight(hList, indexs, firstVisSelItemIndex, span, &height);

	// Move 'p' onto the first visible string
	wchar_t *p = pszFiles;
	for (i = 0; i < firstVisSelItemIndex; i++)
	{
		p += wcslen(p) + 1;	// get next string
	}

	SHFILEINFO sfi;
	int j = firstVisSelItemIndex;
	int c = 0;

	// Make new arrays that contain gaps, will make it easier later.
	int index[span];
	wchar_t *pstr[span];
	for (i = indexs[firstVisSelItemIndex]; i < (indexs[firstVisSelItemIndex] + span); i++)
	{
		if (indexs[j] == i)
		{
			index[c] = indexs[j++];
			pstr[c] = p;
			if (SHGetFileInfo(pstr[c], 0, &sfi, sizeof(sfi), SHGFI_SYSICONINDEX | SHGFI_SMALLICON | SHGFI_ICON))
				hIcon[c] = sfi.hIcon;
			else
				hIcon[c] = hDefaultIcon;	// default icon if not given

			p += wcslen(p) + 1;	// get next string
		}
		else
		{
			index[c] = -1;
			pstr[c] = NULL;
		}
		c++;
	}

	//==============================================
	// Create the drag bitmap and select objects
	//==============================================
	HBITMAP hbmOld;
	HFONT hFontOld, hFont = (HFONT)SndMsg(hList, WM_GETFONT, 0, 0);

	HDC hdc = CreateCompatibleDC(GetDC(NULL));
	HBITMAP hbm = CreateCompatibleBitmap(GetDC(NULL), width, span * height);

	COLORREF col = GetSysColor(COLOR_HIGHLIGHT);
	HBRUSH hBrOld, hBr = GetSysColorBrush(COLOR_HIGHLIGHT);

	SetBkColor(hdc, col);
	SetTextColor(hdc, RGB(255, 255, 255));
	hFontOld = SelectObject(hdc, hFont);

	hBrOld = SelectObject(hdc, hBr);
	hbmOld = SelectObject(hdc, hbm);

	//==============================================
	// Draw hightlight rectangle, required text and
	// icons onto the bitmap
	//==============================================
	wchar_t szText[MAX_PATH];
	for (i = 0; i < span; i++)
	{
		szText[0] = 0;
		if (hIcon[i] != NULL)
		{
			DrawIconEx(hdc, 0, height * i, hIcon[i], 16, 16, 0, NULL, DI_NORMAL);
			ListView_GetItemText(hList, index[i], 0, szText, MAX_PATH);	// filename
			GetTextExtentPoint32(hdc, szText, wcslen(szText), &sz);
			Rectangle(hdc, 16, height * i, 18 + sz.cx, (height * i) + height);
			SetRect(&rc, 16, height * i + 1, 16 + width, (height * i) + height);
			DrawText(hdc, szText, wcslen(szText), &rc, DT_LEFT);
		}
	}

	//==============================================
	// Cleanup
	//==============================================
	SelectObject(hdc, hBrOld);
	SelectObject(hdc, hbmOld);
	SelectObject(hdc, hFontOld);
	DeleteDC(hdc);

	// MSDN: If SHGetFileInfo returns an icon handle in the hIcon member of
	// the SHFILEINFO structure pointed to by psfi, you are responsible for
	// freeing it with DestroyIcon when you no longer need it.
	DestroyIcon(hDefaultIcon);
	for (i = 0; i < span; i++)
	{
		if (hIcon[i])
			DestroyIcon(hIcon[i]);
	}

	*newIndex = firstVisSelItemIndex;	// newIndex as the first visible item

	return hbm;	// return handle to bitmap
}

DWORD HandleDragDrop(HWND hwndMain, HWND hwndList)
{
	DWORD ret = 0;
	DWORD dwEffect = 0;

	// free the previous allocation, this is because the RecycleBin
	// needs this memory left intact for some time after draging onto it.
	FreeGlobalMem();

	UINT LogPerfDropEffect = RegisterClipboardFormat(CFSTR_LOGICALPERFORMEDDROPEFFECT);
	UINT PerfDropEffect = RegisterClipboardFormat(CFSTR_PERFORMEDDROPEFFECT);

	// Create instances of IDataObject, IDropSource and IDropTarget
	IDropTarget *pIDropTarget = IDropTarget_CDropTarget(hwndMain);
	IDropSource *pIDropSource = IDropSource_CDropSource();
	IDataObject *pIDataObject = IDataObject_CDataObject();
	IDragSourceHelper * pIDragSourceHelper = NULL;
	HBITMAP hbm = NULL;

	// This is so the image is displayed over our window.
	RegisterDragDrop(hwndMain, pIDropTarget);

	// Moved these lines to above goto's to accommodate Pelles C 6.0
	// Cannot goto within a VLA block.
	int i, nStart;
	int nItems = ListView_GetSelectedCount(hwndList);
	int indexs[nItems];
	// get the indexes of the selected items
	for (i = 0, nStart = -1; i < nItems; i++)
	{
		nStart = indexs[i] = ListView_GetNextItem(hwndList, nStart, LVNI_SELECTED);
	}

	// free instances if necessary
	if (!pIDataObject || !pIDropSource || !pIDropTarget)
	{
		goto cleanup;
	}

	if (!nItems)
	{
		goto cleanup;
	}

	FORMATETC fe = { 0 };
	STGMEDIUM sm = { 0 };

	// GetListViewItems extracts the selected paths and names from the
	// listview, allocates memory and returns one buffer if 'action' is
	// ONE_BUFFER.
	wchar_t ** pp = NULL;
	size_t bufLen;
	pp = GetListViewItems(hwndList, NULL, ONE_BUFFER, &bufLen);

	char * psz;
	DROPFILES * pdf;
	wchar_t * pszFiles = pp[0];

	g_hGlob = GlobalAlloc(GMEM_FIXED, sizeof(DROPFILES) + bufLen*sizeof(wchar_t));
	if (!g_hGlob)
		goto cleanup;

	POINT pt;
	GetCursorPos(&pt);
	ScreenToClient(hwndList, &pt);

	pdf = GlobalLock(g_hGlob);
	pdf->pFiles = sizeof(DROPFILES);
	pdf->pt.x	 = 0;
	pdf->pt.y	 = 0;
	pdf->fNC	 = FALSE;	// client coordinates
	pdf->fWide   = g_fUnicode ? TRUE : FALSE;		// unicode ?

	psz = (char *)pdf + sizeof(DROPFILES);
	memcpy(psz, pszFiles, bufLen*sizeof(wchar_t));
	GlobalUnlock(g_hGlob);

	sm.pUnkForRelease = NULL;
	sm.tymed = TYMED_HGLOBAL;
	sm.hGlobal = g_hGlob;

	//initialize the data object
	fe.cfFormat = CF_HDROP;
	fe.ptd 	 = NULL;
	fe.lindex	 = -1;
	fe.dwAspect = DVASPECT_CONTENT;
	fe.tymed	 = TYMED_HGLOBAL;

	pIDataObject->lpVtbl->SetData(pIDataObject, &fe, &sm, TRUE);

	CoCreateInstance(&CLSID_DragDropHelper, NULL, CLSCTX_INPROC_SERVER, &IID_IDragSourceHelper, (LPVOID *) & pIDragSourceHelper);

	if (pIDragSourceHelper)
	{
		SHDRAGIMAGE di;
		RECT rc;

		BITMAP bm;
		int newIndex;
		hbm = CreateDragBitmap(hwndList, pszFiles, indexs, nItems, &newIndex);
		if (hbm == NULL)
			goto cleanup;

		// Get the offset for the cursor compared to the first selected item
		// newIndex is set in CreateDragBitmap() as the first visible item
		MyListView_GetItemRect(hwndList, indexs[newIndex], &rc, LVIR_SELECTBOUNDS);

		di.ptOffset.x = pt.x - rc.left;
		di.ptOffset.y = pt.y - rc.top;

		GetObject(hbm, sizeof(BITMAP), &bm);

		di.sizeDragImage.cx = bm.bmWidth;
		di.sizeDragImage.cy = bm.bmHeight;
		di.hbmpDragImage	  = hbm;
		di.crColorKey 	  = RGB(0, 0, 0);	// transparent color

		pIDragSourceHelper->lpVtbl->InitializeFromBitmap(pIDragSourceHelper, &di, pIDataObject);
	}
	else
		goto cleanup;

	// do the drag and drop DRAGDROP_S_DROP is returned
	DoDragDrop(pIDataObject, pIDropSource, DROPEFFECT_COPY | DROPEFFECT_MOVE, &dwEffect);

	/*
		If a source needs to know which operation took place, it can call the
		data object's IDataObject_GetData method and request the
		CFSTR_LOGICALPERFORMEDDROPEFFECT format. This format essentially
		reflects what happens from the user's point of view after the operation
		is complete. If a new file is created and the original file is deleted,
		the user sees a move operation and the format's data value is set to
		DROPEFFECT_MOVE. If the original file is still there, the user sees a
		copy operation and the format's data value is set to DROPEFFECT_COPY.
		If a link was created, the format's data value will be DROPEFFECT_LINK.
	 */

	// use the CFSTR_PERFORMEDDROPEFFECT first as
	// CFSTR_LOGICALPERFORMEDDROPEFFECT
	// may not be available before Internet Explorer 5

	fe.cfFormat = (CLIPFORMAT)PerfDropEffect;
	fe.ptd = NULL;
	fe.lindex = -1;
	fe.dwAspect = DVASPECT_CONTENT;
	fe.tymed = TYMED_HGLOBAL;

	pIDataObject->lpVtbl->GetData(pIDataObject, &fe, &sm);

	if (fe.cfFormat == PerfDropEffect && sm.tymed == TYMED_HGLOBAL)
	{
		ret = *(DWORD *) (sm.hGlobal);
		if (ret == DROPEFFECT_MOVE)
		{
			goto cleanup;
		}
	}

	// if CFSTR_PERFORMEDDROPEFFECT did not return DROPEFFECT_MOVE
	// try CFSTR_LOGICALPERFORMEDDROPEFFECT
	fe.cfFormat = (CLIPFORMAT)LogPerfDropEffect;
	fe.ptd = NULL;
	fe.lindex = -1;
	fe.dwAspect = DVASPECT_CONTENT;
	fe.tymed = TYMED_HGLOBAL;

	pIDataObject->lpVtbl->GetData(pIDataObject, &fe, &sm);

	if (fe.cfFormat == LogPerfDropEffect && sm.tymed == TYMED_HGLOBAL)
		ret = *(DWORD *) (sm.hGlobal);

	pIDataObject->lpVtbl->GetData(pIDataObject, &fe, &sm);

cleanup:
	// release interfaces
	if (pIDragSourceHelper)
		pIDragSourceHelper->lpVtbl->Release(pIDragSourceHelper);
	if (pIDataObject)
		pIDataObject->lpVtbl->Release(pIDataObject);
	if (pIDropSource)
		pIDropSource->lpVtbl->Release(pIDropSource);
	if (pIDropTarget)
		pIDropTarget->lpVtbl->Release(pIDropTarget);

	RevokeDragDrop(hwndMain);
	if(hbm)
	{
		DeleteObject(hbm);
	}
	if(pp[0])
	{
		free(pp[0]);
	}
	return ret;
}

