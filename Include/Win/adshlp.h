#ifndef _ADSHLP_H
#define _ADSHLP_H

#if __POCC__ >= 500
#pragma once
#endif

/* Active Directory Service helper definitions */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

HRESULT WINAPI ADsGetObject(LPCWSTR lpszPathName, REFIID riid, void **ppObject);
HRESULT WINAPI ADsBuildEnumerator(IADsContainer *pADsContainer, IEnumVARIANT **ppEnumVariant);
HRESULT WINAPI ADsFreeEnumerator( IEnumVARIANT *pEnumVariant);
HRESULT WINAPI ADsEnumerateNext(IEnumVARIANT *pEnumVariant, ULONG cElements, VARIANT *pvar, ULONG *pcElementsFetched);
HRESULT WINAPI ADsBuildVarArrayStr(LPWSTR *lppPathNames, DWORD dwPathNames, VARIANT *pVar);
HRESULT WINAPI ADsBuildVarArrayInt(LPDWORD lpdwObjectTypes, DWORD dwObjectTypes, VARIANT *pVar);
HRESULT WINAPI ADsOpenObject(LPCWSTR lpszPathName, LPCWSTR lpszUserName, LPCWSTR lpszPassword, DWORD dwReserved, REFIID riid, void **ppObject);
HRESULT WINAPI ADsGetLastError(LPDWORD lpError, LPWSTR lpErrorBuf, DWORD dwErrorBufLen, LPWSTR lpNameBuf, DWORD dwNameBufLen);
void WINAPI ADsSetLastError(DWORD dwErr, LPCWSTR pszError, LPCWSTR pszProvider);
void WINAPI ADsFreeAllErrorRecords(void);
LPVOID WINAPI AllocADsMem(DWORD cb);
BOOL WINAPI FreeADsMem(LPVOID pMem);
LPVOID WINAPI ReallocADsMem(LPVOID pOldMem, DWORD cbOld, DWORD cbNew);
LPWSTR WINAPI AllocADsStr(LPCWSTR pStr);
BOOL WINAPI FreeADsStr(LPWSTR pStr);
BOOL WINAPI ReallocADsStr(LPWSTR *ppStr, LPWSTR pStr);
HRESULT WINAPI ADsEncodeBinaryData(PBYTE pbSrcData, DWORD dwSrcLen, LPWSTR *ppszDestData);
HRESULT WINAPI ADsDecodeBinaryData(LPCWSTR szSrcData, PBYTE *ppbDestData, ULONG *pdwDestLen);
HRESULT WINAPI PropVariantToAdsType(VARIANT *pVariant, DWORD dwNumVariant, PADSVALUE *ppAdsValues, PDWORD pdwNumValues);
HRESULT WINAPI AdsTypeToPropVariant(PADSVALUE pAdsValues, DWORD dwNumValues, VARIANT *pVariant);
void WINAPI AdsFreeAdsValues(PADSVALUE pAdsValues, DWORD dwNumValues);
HRESULT WINAPI BinarySDToSecurityDescriptor(PSECURITY_DESCRIPTOR pSecurityDescriptor, VARIANT *pVarsec, LPCWSTR pszServerName, LPCWSTR userName, LPCWSTR passWord, DWORD dwFlags);
HRESULT WINAPI SecurityDescriptorToBinarySD(VARIANT vVarSecDes, PSECURITY_DESCRIPTOR *ppSecurityDescriptor, PDWORD pdwSDLength, LPCWSTR pszServerName, LPCWSTR userName, LPCWSTR passWord, DWORD dwFlags);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#endif /* _ADSHLP_H */
