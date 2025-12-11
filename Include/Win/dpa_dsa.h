#ifndef _DPA_DSA_H
#define _DPA_DSA_H

#if __POCC__ >= 500
#pragma once
#endif

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#ifndef _HRESULT_DEFINED
#define _HRESULT_DEFINED
typedef long HRESULT;
#endif /* _HRESULT_DEFINED */

#ifndef WINCOMMCTRLAPI
#define WINCOMMCTRLAPI  DECLSPEC_IMPORT
#endif /* WINCOMMCTRLAPI */

#ifndef NO_COMMCTRL_DA

#define __COMMCTRL_DA_DEFINED__

#define DA_LAST  (0x7FFFFFFF)
#define DA_ERR   (-1)

typedef int (CALLBACK *PFNDAENUMCALLBACK)(void *p, void *pData);
typedef int (CALLBACK *PFNDAENUMCALLBACKCONST)(const void *p, void *pData);
typedef int (CALLBACK *PFNDACOMPARE)(void *p1, void *p2, LPARAM lParam);
typedef int (CALLBACK *PFNDACOMPARECONST)(const void *p1, const void *p2, LPARAM lParam);

struct _DSA;
typedef struct _DSA *HDSA;

WINCOMMCTRLAPI HDSA WINAPI DSA_Create(int cbItem, int cItemGrow);
WINCOMMCTRLAPI BOOL WINAPI DSA_Destroy(HDSA hdsa);
WINCOMMCTRLAPI void WINAPI DSA_DestroyCallback(HDSA hdsa, PFNDAENUMCALLBACK pfnCB, void *pData);
WINCOMMCTRLAPI BOOL WINAPI DSA_DeleteItem(HDSA hdsa, int i);
WINCOMMCTRLAPI BOOL WINAPI DSA_DeleteAllItems(HDSA hdsa);
WINCOMMCTRLAPI void WINAPI DSA_EnumCallback(HDSA hdsa, PFNDAENUMCALLBACK pfnCB, void *pData);
WINCOMMCTRLAPI int WINAPI DSA_InsertItem(HDSA hdsa, int i, const void *pitem);
WINCOMMCTRLAPI PVOID WINAPI DSA_GetItemPtr(HDSA hdsa, int i);
WINCOMMCTRLAPI BOOL WINAPI DSA_GetItem(HDSA hdsa, int i, void *pitem);
WINCOMMCTRLAPI BOOL WINAPI DSA_SetItem(HDSA hdsa, int i, const void *pitem);
#define DSA_GetItemCount(hdsa) (*(int *)(hdsa))
#define DSA_AppendItem(hdsa, pitem) DSA_InsertItem(hdsa, DA_LAST, pitem)

#if (NTDDI_VERSION >= NTDDI_VISTA)
WINCOMMCTRLAPI HDSA WINAPI DSA_Clone(HDSA hdsa);
WINCOMMCTRLAPI ULONGLONG WINAPI DSA_GetSize(HDSA hdsa);
WINCOMMCTRLAPI BOOL WINAPI DSA_Sort(HDSA pdsa, PFNDACOMPARE pfnCompare, LPARAM lParam);
#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */

#define DSA_APPEND  DA_LAST
#define DSA_ERR     DA_ERR

#define PFNDSAENUMCALLBACK          PFNDAENUMCALLBACK
#define PFNDSAENUMCALLBACKCONST     PFNDAENUMCALLBACKCONST
#define PFNDSACOMPARE               PFNDACOMPARE
#define PFNDSACOMPARECONST          PFNDACOMPARECONST

struct _DPA;
typedef struct _DPA *HDPA;

WINCOMMCTRLAPI HDPA WINAPI DPA_Create(int cItemGrow);
WINCOMMCTRLAPI HDPA WINAPI DPA_CreateEx(int cpGrow, HANDLE hheap);
WINCOMMCTRLAPI HDPA WINAPI DPA_Clone(const HDPA hdpa, HDPA hdpaNew);
WINCOMMCTRLAPI BOOL WINAPI DPA_Destroy(HDPA hdpa);
WINCOMMCTRLAPI void WINAPI DPA_DestroyCallback(HDPA hdpa, PFNDAENUMCALLBACK pfnCB, void *pData);
WINCOMMCTRLAPI PVOID WINAPI DPA_DeletePtr(HDPA hdpa, int i);
WINCOMMCTRLAPI BOOL WINAPI DPA_DeleteAllPtrs(HDPA hdpa);
WINCOMMCTRLAPI void WINAPI DPA_EnumCallback(HDPA hdpa, PFNDAENUMCALLBACK pfnCB, void *pData);
WINCOMMCTRLAPI BOOL WINAPI DPA_Grow(HDPA pdpa, int cp);
WINCOMMCTRLAPI int WINAPI DPA_InsertPtr(HDPA hdpa, int i, void *p);
WINCOMMCTRLAPI BOOL WINAPI DPA_SetPtr(HDPA hdpa, int i, void *p);
WINCOMMCTRLAPI PVOID WINAPI DPA_GetPtr(HDPA hdpa, INT_PTR i);
WINCOMMCTRLAPI int WINAPI DPA_GetPtrIndex(HDPA hdpa, const void *p);

#define DPA_GetPtrCount(hdpa) (*(int *)(hdpa))
#define DPA_SetPtrCount(hdpa, cItems) (*(int *)(hdpa) = (cItems))
#define DPA_FastDeleteLastPtr(hdpa) (--*(int *)(hdpa))
#define DPA_GetPtrPtr(hdpa) (*((void ***)((BYTE *)(hdpa) + sizeof(void *))))
#define DPA_FastGetPtr(hdpa, i) (DPA_GetPtrPtr(hdpa)[i])
#define DPA_AppendPtr(hdpa, pitem) DPA_InsertPtr(hdpa, DA_LAST, pitem)

#if (NTDDI_VERSION >= NTDDI_VISTA)
WINCOMMCTRLAPI ULONGLONG WINAPI DPA_GetSize(HDPA hdpa);
#endif /* (NTDDI_VERSION >= NTDDI_VISTA) */

WINCOMMCTRLAPI BOOL WINAPI DPA_Sort(HDPA hdpa, PFNDACOMPARE pfnCompare, LPARAM lParam);

typedef struct _DPASTREAMINFO {
    int iPos;
    void *pvItem;
} DPASTREAMINFO;

struct IStream;
typedef HRESULT (CALLBACK *PFNDPASTREAM)(DPASTREAMINFO *pinfo, struct IStream *pstream, void *pvInstData);

WINCOMMCTRLAPI HRESULT WINAPI DPA_LoadStream(HDPA *phdpa, PFNDPASTREAM pfn, struct IStream *pstream, void *pvInstData);
WINCOMMCTRLAPI HRESULT WINAPI DPA_SaveStream(HDPA hdpa, PFNDPASTREAM pfn, struct IStream *pstream, void *pvInstData);

#define DPAM_SORTED             0x00000001
#define DPAM_NORMAL             0x00000002
#define DPAM_UNION              0x00000004
#define DPAM_INTERSECT          0x00000008

typedef void * (CALLBACK *PFNDPAMERGE)(UINT uMsg, void *pvDest, void *pvSrc, LPARAM lParam);
typedef const void * (CALLBACK *PFNDPAMERGECONST)(UINT uMsg, const void *pvDest, const void *pvSrc, LPARAM lParam);

#define DPAMM_MERGE     1
#define DPAMM_DELETE    2
#define DPAMM_INSERT    3

WINCOMMCTRLAPI BOOL WINAPI DPA_Merge(HDPA hdpaDest, HDPA hdpaSrc, DWORD dwFlags, PFNDACOMPARE pfnCompare, PFNDPAMERGE pfnMerge, LPARAM lParam);

#define DPAS_SORTED             0x0001
#define DPAS_INSERTBEFORE       0x0002
#define DPAS_INSERTAFTER        0x0004

WINCOMMCTRLAPI int WINAPI DPA_Search(HDPA hdpa, void *pFind, int iStart, PFNDACOMPARE pfnCompare, LPARAM lParam, UINT options);

#define DPA_SortedInsertPtr(hdpa, pFind, iStart, pfnCompare, lParam, options, pitem)  \
            DPA_InsertPtr(hdpa, DPA_Search(hdpa, pFind, iStart, pfnCompare, lParam, (DPAS_SORTED | (options))), (pitem))

#define DPA_APPEND  DA_LAST
#define DPA_ERR     DA_ERR

#define PFNDPAENUMCALLBACK          PFNDAENUMCALLBACK
#define PFNDPAENUMCALLBACKCONST     PFNDAENUMCALLBACKCONST
#define PFNDPACOMPARE               PFNDACOMPARE
#define PFNDPACOMPARECONST          PFNDACOMPARECONST

#endif /* NO_COMMCTRL_DA */

WINCOMMCTRLAPI BOOL WINAPI Str_SetPtrW(LPWSTR *ppsz, LPCWSTR psz);

#ifndef RC_INVOKED
#if defined(ISOLATION_AWARE_ENABLED) && (ISOLATION_AWARE_ENABLED != 0)
#include "dpa_dsa.inl"
#endif /* ISOLATION_AWARE_ENABLED */
#endif /* !RC_INVOKED */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#endif /* _DPA_DSA_H */
