#ifndef _MSIQUERY_H
#define _MSIQUERY_H

#if __POCC__ >= 500
#pragma once
#endif

/* Installer Service custom actions and tools definitions */

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#include "msi.h"

#define MSI_NULL_INTEGER 0x80000000  

#define MSIDBOPEN_READONLY     (LPCTSTR)0  
#define MSIDBOPEN_TRANSACT     (LPCTSTR)1  
#define MSIDBOPEN_DIRECT       (LPCTSTR)2  
#define MSIDBOPEN_CREATE       (LPCTSTR)3  
#define MSIDBOPEN_CREATEDIRECT (LPCTSTR)4  
#define MSIDBOPEN_PATCHFILE    32/sizeof(*MSIDBOPEN_READONLY) 

typedef enum tagMSIDBSTATE {
    MSIDBSTATE_ERROR = -1,
    MSIDBSTATE_READ = 0,
    MSIDBSTATE_WRITE = 1,
} MSIDBSTATE;

typedef enum tagMSIMODIFY {
    MSIMODIFY_SEEK = -1,
    MSIMODIFY_REFRESH = 0,
    MSIMODIFY_INSERT = 1,
    MSIMODIFY_UPDATE = 2,
    MSIMODIFY_ASSIGN = 3,
    MSIMODIFY_REPLACE = 4,
    MSIMODIFY_MERGE = 5,
    MSIMODIFY_DELETE = 6,
    MSIMODIFY_INSERT_TEMPORARY = 7,
    MSIMODIFY_VALIDATE = 8,
    MSIMODIFY_VALIDATE_NEW = 9,
    MSIMODIFY_VALIDATE_FIELD = 10,
    MSIMODIFY_VALIDATE_DELETE = 11,
} MSIMODIFY;

typedef enum tagMSICOLINFO {
    MSICOLINFO_NAMES = 0,
    MSICOLINFO_TYPES = 1,
} MSICOLINFO;

typedef enum tagMSICONDITION {
    MSICONDITION_FALSE = 0,
    MSICONDITION_TRUE = 1,
    MSICONDITION_NONE = 2,
    MSICONDITION_ERROR = 3,
} MSICONDITION;

typedef enum tagMSICOSTTREE {
    MSICOSTTREE_SELFONLY = 0,
    MSICOSTTREE_CHILDREN = 1,
    MSICOSTTREE_PARENTS = 2,
    MSICOSTTREE_RESERVED = 3,
} MSICOSTTREE;

typedef enum tagMSIDBERROR {
    MSIDBERROR_INVALIDARG = -3,
    MSIDBERROR_MOREDATA = -2,
    MSIDBERROR_FUNCTIONERROR = -1,
    MSIDBERROR_NOERROR = 0,
    MSIDBERROR_DUPLICATEKEY = 1,
    MSIDBERROR_REQUIRED = 2,
    MSIDBERROR_BADLINK = 3,
    MSIDBERROR_OVERFLOW = 4,
    MSIDBERROR_UNDERFLOW = 5,
    MSIDBERROR_NOTINSET = 6,
    MSIDBERROR_BADVERSION = 7,
    MSIDBERROR_BADCASE = 8,
    MSIDBERROR_BADGUID = 9,
    MSIDBERROR_BADWILDCARD = 10,
    MSIDBERROR_BADIDENTIFIER = 11,
    MSIDBERROR_BADLANGUAGE = 12,
    MSIDBERROR_BADFILENAME = 13,
    MSIDBERROR_BADPATH = 14,
    MSIDBERROR_BADCONDITION = 15,
    MSIDBERROR_BADFORMATTED = 16,
    MSIDBERROR_BADTEMPLATE = 17,
    MSIDBERROR_BADDEFAULTDIR = 18,
    MSIDBERROR_BADREGPATH = 19,
    MSIDBERROR_BADCUSTOMSOURCE = 20,
    MSIDBERROR_BADPROPERTY = 21,
    MSIDBERROR_MISSINGDATA = 22,
    MSIDBERROR_BADCATEGORY = 23,
    MSIDBERROR_BADKEYTABLE = 24,
    MSIDBERROR_BADMAXMINVALUES = 25,
    MSIDBERROR_BADCABINET = 26,
    MSIDBERROR_BADSHORTCUT = 27,
    MSIDBERROR_STRINGOVERFLOW = 28,
    MSIDBERROR_BADLOCALIZEATTRIB = 29
} MSIDBERROR;

typedef enum tagMSIRUNMODE {
    MSIRUNMODE_ADMIN = 0,
    MSIRUNMODE_ADVERTISE = 1,
    MSIRUNMODE_MAINTENANCE = 2,
    MSIRUNMODE_ROLLBACKENABLED = 3,
    MSIRUNMODE_LOGENABLED = 4,
    MSIRUNMODE_OPERATIONS = 5,
    MSIRUNMODE_REBOOTATEND = 6,
    MSIRUNMODE_REBOOTNOW = 7,
    MSIRUNMODE_CABINET = 8,
    MSIRUNMODE_SOURCESHORTNAMES = 9,
    MSIRUNMODE_TARGETSHORTNAMES = 10,
    MSIRUNMODE_RESERVED11 = 11,
    MSIRUNMODE_WINDOWS9X = 12,
    MSIRUNMODE_ZAWENABLED = 13,
    MSIRUNMODE_RESERVED14 = 14,
    MSIRUNMODE_RESERVED15 = 15,
    MSIRUNMODE_SCHEDULED = 16,
    MSIRUNMODE_ROLLBACK = 17,
    MSIRUNMODE_COMMIT = 18,
} MSIRUNMODE;

#define INSTALLMESSAGE_TYPEMASK 0xFF000000L  

typedef enum tagMSITRANSFORM_ERROR {
    MSITRANSFORM_ERROR_ADDEXISTINGROW = 0x00000001,
    MSITRANSFORM_ERROR_DELMISSINGROW = 0x00000002,
    MSITRANSFORM_ERROR_ADDEXISTINGTABLE = 0x00000004,
    MSITRANSFORM_ERROR_DELMISSINGTABLE = 0x00000008,
    MSITRANSFORM_ERROR_UPDATEMISSINGROW = 0x00000010,
    MSITRANSFORM_ERROR_CHANGECODEPAGE = 0x00000020,
    MSITRANSFORM_ERROR_VIEWTRANSFORM = 0x00000100,
} MSITRANSFORM_ERROR;

typedef enum tagMSITRANSFORM_VALIDATE {
    MSITRANSFORM_VALIDATE_LANGUAGE = 0x00000001,
    MSITRANSFORM_VALIDATE_PRODUCT = 0x00000002,
    MSITRANSFORM_VALIDATE_PLATFORM = 0x00000004,
    MSITRANSFORM_VALIDATE_MAJORVERSION = 0x00000008,
    MSITRANSFORM_VALIDATE_MINORVERSION = 0x00000010,
    MSITRANSFORM_VALIDATE_UPDATEVERSION = 0x00000020,
    MSITRANSFORM_VALIDATE_NEWLESSBASEVERSION = 0x00000040,
    MSITRANSFORM_VALIDATE_NEWLESSEQUALBASEVERSION = 0x00000080,
    MSITRANSFORM_VALIDATE_NEWEQUALBASEVERSION = 0x00000100,
    MSITRANSFORM_VALIDATE_NEWGREATEREQUALBASEVERSION = 0x00000200,
    MSITRANSFORM_VALIDATE_NEWGREATERBASEVERSION = 0x00000400,
    MSITRANSFORM_VALIDATE_UPGRADECODE = 0x00000800,
} MSITRANSFORM_VALIDATE;

UINT WINAPI MsiDatabaseOpenViewA(MSIHANDLE hDatabase, LPCSTR szQuery, MSIHANDLE * phView);
UINT WINAPI MsiDatabaseOpenViewW(MSIHANDLE hDatabase, LPCWSTR szQuery, MSIHANDLE * phView);
#ifdef UNICODE
#define MsiDatabaseOpenView  MsiDatabaseOpenViewW
#else /* !UNICODE */
#define MsiDatabaseOpenView  MsiDatabaseOpenViewA
#endif /* !UNICODE */

MSIDBERROR WINAPI MsiViewGetErrorA(MSIHANDLE hView, LPSTR szColumnNameBuffer, LPDWORD pcchBuf);
MSIDBERROR WINAPI MsiViewGetErrorW(MSIHANDLE hView, LPWSTR szColumnNameBuffer, LPDWORD pcchBuf);
#ifdef UNICODE
#define MsiViewGetError  MsiViewGetErrorW
#else /* !UNICODE */
#define MsiViewGetError  MsiViewGetErrorA
#endif /* !UNICODE */

UINT WINAPI MsiViewExecute(MSIHANDLE hView, MSIHANDLE hRecord);
UINT WINAPI MsiViewFetch(MSIHANDLE hView, MSIHANDLE *phRecord);
UINT WINAPI MsiViewModify(MSIHANDLE hView, MSIMODIFY eModifyMode, MSIHANDLE hRecord);
UINT WINAPI MsiViewGetColumnInfo(MSIHANDLE hView, MSICOLINFO eColumnInfo, MSIHANDLE *phRecord);
UINT WINAPI MsiViewClose(MSIHANDLE hView);
UINT WINAPI MsiDatabaseGetPrimaryKeysA(MSIHANDLE hDatabase, LPCSTR szTableName, MSIHANDLE *phRecord);
UINT WINAPI MsiDatabaseGetPrimaryKeysW(MSIHANDLE hDatabase, LPCWSTR szTableName, MSIHANDLE *phRecord);
#ifdef UNICODE
#define MsiDatabaseGetPrimaryKeys  MsiDatabaseGetPrimaryKeysW
#else /* !UNICODE */
#define MsiDatabaseGetPrimaryKeys  MsiDatabaseGetPrimaryKeysA
#endif /* !UNICODE */

MSICONDITION WINAPI MsiDatabaseIsTablePersistentA(MSIHANDLE hDatabase, LPCSTR szTableName);
MSICONDITION WINAPI MsiDatabaseIsTablePersistentW(MSIHANDLE hDatabase, LPCWSTR szTableName);
#ifdef UNICODE
#define MsiDatabaseIsTablePersistent  MsiDatabaseIsTablePersistentW
#else /* !UNICODE */
#define MsiDatabaseIsTablePersistent  MsiDatabaseIsTablePersistentA
#endif /* !UNICODE */

UINT WINAPI MsiGetSummaryInformationA(MSIHANDLE hDatabase, LPCSTR szDatabasePath, UINT uiUpdateCount, MSIHANDLE *phSummaryInfo);
UINT WINAPI MsiGetSummaryInformationW(MSIHANDLE hDatabase, LPCWSTR szDatabasePath, UINT uiUpdateCount, MSIHANDLE *phSummaryInfo);
#ifdef UNICODE
#define MsiGetSummaryInformation  MsiGetSummaryInformationW
#else /* !UNICODE */
#define MsiGetSummaryInformation  MsiGetSummaryInformationA
#endif /* !UNICODE */

UINT WINAPI MsiSummaryInfoGetPropertyCount(MSIHANDLE hSummaryInfo, PUINT puiPropertyCount);
UINT WINAPI MsiSummaryInfoSetPropertyA(MSIHANDLE hSummaryInfo, UINT uiProperty, UINT uiDataType, INT iValue, FILETIME *pftValue, LPCSTR szValue);
UINT WINAPI MsiSummaryInfoSetPropertyW(MSIHANDLE hSummaryInfo, UINT uiProperty, UINT uiDataType, INT iValue, FILETIME *pftValue, LPCWSTR szValue);
#ifdef UNICODE
#define MsiSummaryInfoSetProperty  MsiSummaryInfoSetPropertyW
#else /* !UNICODE */
#define MsiSummaryInfoSetProperty  MsiSummaryInfoSetPropertyA
#endif /* !UNICODE */

UINT WINAPI MsiSummaryInfoGetPropertyA(MSIHANDLE hSummaryInfo, UINT uiProperty, PUINT puiDataType, LPINT piValue, FILETIME *pftValue, LPSTR szValueBuf, LPDWORD pcchValueBuf);
UINT WINAPI MsiSummaryInfoGetPropertyW(MSIHANDLE hSummaryInfo, UINT uiProperty, PUINT puiDataType, LPINT piValue, FILETIME *pftValue, LPWSTR szValueBuf, LPDWORD pcchValueBuf);
#ifdef UNICODE
#define MsiSummaryInfoGetProperty  MsiSummaryInfoGetPropertyW
#else /* !UNICODE */
#define MsiSummaryInfoGetProperty  MsiSummaryInfoGetPropertyA
#endif /* !UNICODE */

UINT WINAPI MsiSummaryInfoPersist(MSIHANDLE hSummaryInfo);
UINT WINAPI MsiOpenDatabaseA(LPCSTR szDatabasePath, LPCSTR szPersist, MSIHANDLE * phDatabase);
UINT WINAPI MsiOpenDatabaseW(LPCWSTR szDatabasePath, LPCWSTR szPersist, MSIHANDLE * phDatabase);
#ifdef UNICODE
#define MsiOpenDatabase  MsiOpenDatabaseW
#else /* !UNICODE */
#define MsiOpenDatabase  MsiOpenDatabaseA
#endif /* !UNICODE */

UINT WINAPI MsiDatabaseImportA(MSIHANDLE hDatabase, LPCSTR szFolderPath, LPCSTR szFileName);
UINT WINAPI MsiDatabaseImportW(MSIHANDLE hDatabase, LPCWSTR szFolderPath, LPCWSTR szFileName);
#ifdef UNICODE
#define MsiDatabaseImport  MsiDatabaseImportW
#else /* !UNICODE */
#define MsiDatabaseImport  MsiDatabaseImportA
#endif /* !UNICODE */

UINT WINAPI MsiDatabaseExportA(MSIHANDLE hDatabase, LPCSTR szTableName, LPCSTR szFolderPath, LPCSTR szFileName);
UINT WINAPI MsiDatabaseExportW(MSIHANDLE hDatabase, LPCWSTR szTableName, LPCWSTR szFolderPath, LPCWSTR szFileName);
#ifdef UNICODE
#define MsiDatabaseExport  MsiDatabaseExportW
#else /* !UNICODE */
#define MsiDatabaseExport  MsiDatabaseExportA
#endif /* !UNICODE */

UINT WINAPI MsiDatabaseMergeA(MSIHANDLE hDatabase, MSIHANDLE hDatabaseMerge, LPCSTR szTableName);
UINT WINAPI MsiDatabaseMergeW(MSIHANDLE hDatabase, MSIHANDLE hDatabaseMerge, LPCWSTR szTableName);
#ifdef UNICODE
#define MsiDatabaseMerge  MsiDatabaseMergeW
#else /* !UNICODE */
#define MsiDatabaseMerge  MsiDatabaseMergeA
#endif /* !UNICODE */

UINT WINAPI MsiDatabaseGenerateTransformA(MSIHANDLE hDatabase, MSIHANDLE hDatabaseReference, LPCSTR szTransformFile, int iReserved1, int iReserved2);
UINT WINAPI MsiDatabaseGenerateTransformW(MSIHANDLE hDatabase, MSIHANDLE hDatabaseReference, LPCWSTR szTransformFile, int iReserved1, int iReserved2);
#ifdef UNICODE
#define MsiDatabaseGenerateTransform  MsiDatabaseGenerateTransformW
#else /* !UNICODE */
#define MsiDatabaseGenerateTransform  MsiDatabaseGenerateTransformA
#endif /* !UNICODE */

UINT WINAPI MsiDatabaseApplyTransformA(MSIHANDLE hDatabase, LPCSTR szTransformFile, int iErrorConditions);
UINT WINAPI MsiDatabaseApplyTransformW(MSIHANDLE hDatabase, LPCWSTR szTransformFile, int iErrorConditions);
#ifdef UNICODE
#define MsiDatabaseApplyTransform  MsiDatabaseApplyTransformW
#else /* !UNICODE */
#define MsiDatabaseApplyTransform  MsiDatabaseApplyTransformA
#endif /* !UNICODE */

UINT WINAPI MsiCreateTransformSummaryInfoA(MSIHANDLE hDatabase, MSIHANDLE hDatabaseReference, LPCSTR szTransformFile, int iErrorConditions, int iValidation);
UINT WINAPI MsiCreateTransformSummaryInfoW(MSIHANDLE hDatabase, MSIHANDLE hDatabaseReference, LPCWSTR szTransformFile, int iErrorConditions, int iValidation);
#ifdef UNICODE
#define MsiCreateTransformSummaryInfo  MsiCreateTransformSummaryInfoW
#else /* !UNICODE */
#define MsiCreateTransformSummaryInfo  MsiCreateTransformSummaryInfoA
#endif /* !UNICODE */

UINT WINAPI MsiDatabaseCommit(MSIHANDLE hDatabase);
MSIDBSTATE WINAPI MsiGetDatabaseState(MSIHANDLE hDatabase);
MSIHANDLE WINAPI MsiCreateRecord(UINT cParams);
BOOL WINAPI MsiRecordIsNull(MSIHANDLE hRecord, UINT iField);
UINT WINAPI MsiRecordDataSize(MSIHANDLE hRecord, UINT iField);
UINT WINAPI MsiRecordSetInteger(MSIHANDLE hRecord, UINT iField, int iValue);
UINT WINAPI MsiRecordSetStringA(MSIHANDLE hRecord, UINT iField, LPCSTR szValue);
UINT WINAPI MsiRecordSetStringW(MSIHANDLE hRecord, UINT iField, LPCWSTR szValue);
#ifdef UNICODE
#define MsiRecordSetString  MsiRecordSetStringW
#else /* !UNICODE */
#define MsiRecordSetString  MsiRecordSetStringA
#endif /* !UNICODE */

int WINAPI MsiRecordGetInteger(MSIHANDLE hRecord, UINT iField);
UINT WINAPI MsiRecordGetStringA(MSIHANDLE hRecord, UINT iField, LPSTR szValueBuf, LPDWORD pcchValueBuf);
UINT WINAPI MsiRecordGetStringW(MSIHANDLE hRecord, UINT iField, LPWSTR szValueBuf, LPDWORD pcchValueBuf);
#ifdef UNICODE
#define MsiRecordGetString  MsiRecordGetStringW
#else /* !UNICODE */
#define MsiRecordGetString  MsiRecordGetStringA
#endif /* !UNICODE */

UINT WINAPI MsiRecordGetFieldCount(MSIHANDLE hRecord);
UINT WINAPI MsiRecordSetStreamA(MSIHANDLE hRecord, UINT iField, LPCSTR szFilePath);
UINT WINAPI MsiRecordSetStreamW(MSIHANDLE hRecord, UINT iField, LPCWSTR szFilePath);
#ifdef UNICODE
#define MsiRecordSetStream  MsiRecordSetStreamW
#else /* !UNICODE */
#define MsiRecordSetStream  MsiRecordSetStreamA
#endif /* !UNICODE */

UINT WINAPI MsiRecordReadStream(MSIHANDLE hRecord, UINT iField, char *szDataBuf, LPDWORD pcbDataBuf);
UINT WINAPI MsiRecordClearData(MSIHANDLE hRecord);
MSIHANDLE WINAPI MsiGetActiveDatabase(MSIHANDLE hInstall);
UINT WINAPI MsiSetPropertyA(MSIHANDLE hInstall, LPCSTR szName, LPCSTR szValue);
UINT WINAPI MsiSetPropertyW(MSIHANDLE hInstall, LPCWSTR szName, LPCWSTR szValue);
#ifdef UNICODE
#define MsiSetProperty  MsiSetPropertyW
#else /* !UNICODE */
#define MsiSetProperty  MsiSetPropertyA
#endif /* !UNICODE */

UINT WINAPI MsiGetPropertyA(MSIHANDLE hInstall, LPCSTR szName, LPSTR szValueBuf, LPDWORD pcchValueBuf);
UINT WINAPI MsiGetPropertyW(MSIHANDLE hInstall, LPCWSTR szName, LPWSTR szValueBuf, LPDWORD pcchValueBuf);
#ifdef UNICODE
#define MsiGetProperty  MsiGetPropertyW
#else /* !UNICODE */
#define MsiGetProperty  MsiGetPropertyA
#endif /* !UNICODE */

LANGID WINAPI MsiGetLanguage(MSIHANDLE hInstall);
BOOL WINAPI MsiGetMode(MSIHANDLE hInstall, MSIRUNMODE eRunMode);
UINT WINAPI MsiSetMode(MSIHANDLE hInstall, MSIRUNMODE eRunMode, BOOL fState);
UINT WINAPI MsiFormatRecordA(MSIHANDLE hInstall, MSIHANDLE hRecord, LPSTR szResultBuf, LPDWORD pcchResultBuf);
UINT WINAPI MsiFormatRecordW(MSIHANDLE hInstall, MSIHANDLE hRecord, LPWSTR szResultBuf, LPDWORD pcchResultBuf);
#ifdef UNICODE
#define MsiFormatRecord  MsiFormatRecordW
#else /* !UNICODE */
#define MsiFormatRecord  MsiFormatRecordA
#endif /* !UNICODE */

UINT WINAPI MsiDoActionA(MSIHANDLE hInstall, LPCSTR szAction);
UINT WINAPI MsiDoActionW(MSIHANDLE hInstall, LPCWSTR szAction);
#ifdef UNICODE
#define MsiDoAction  MsiDoActionW
#else /* !UNICODE */
#define MsiDoAction  MsiDoActionA
#endif /* !UNICODE */

UINT WINAPI MsiSequenceA(MSIHANDLE hInstall, LPCSTR szTable, INT iSequenceMode);
UINT WINAPI MsiSequenceW(MSIHANDLE hInstall, LPCWSTR szTable, INT iSequenceMode);
#ifdef UNICODE
#define MsiSequence  MsiSequenceW
#else /* !UNICODE */
#define MsiSequence  MsiSequenceA
#endif /* !UNICODE */

int WINAPI MsiProcessMessage(MSIHANDLE hInstall, INSTALLMESSAGE eMessageType, MSIHANDLE hRecord);
MSICONDITION WINAPI MsiEvaluateConditionA(MSIHANDLE hInstall, LPCSTR szCondition);
MSICONDITION WINAPI MsiEvaluateConditionW(MSIHANDLE hInstall, LPCWSTR szCondition);
#ifdef UNICODE
#define MsiEvaluateCondition  MsiEvaluateConditionW
#else /* !UNICODE */
#define MsiEvaluateCondition  MsiEvaluateConditionA
#endif /* !UNICODE */

UINT WINAPI MsiGetFeatureStateA(MSIHANDLE hInstall, LPCSTR szFeature, INSTALLSTATE *piInstalled, INSTALLSTATE *piAction);
UINT WINAPI MsiGetFeatureStateW(MSIHANDLE hInstall, LPCWSTR szFeature, INSTALLSTATE *piInstalled, INSTALLSTATE *piAction);
#ifdef UNICODE
#define MsiGetFeatureState  MsiGetFeatureStateW
#else /* !UNICODE */
#define MsiGetFeatureState  MsiGetFeatureStateA
#endif /* !UNICODE */

UINT WINAPI MsiSetFeatureStateA(MSIHANDLE hInstall, LPCSTR szFeature, INSTALLSTATE iState);
UINT WINAPI MsiSetFeatureStateW(MSIHANDLE hInstall, LPCWSTR szFeature, INSTALLSTATE iState);
#ifdef UNICODE
#define MsiSetFeatureState  MsiSetFeatureStateW
#else /* !UNICODE */
#define MsiSetFeatureState  MsiSetFeatureStateA
#endif /* !UNICODE */

#if (_WIN32_MSI >=  110)

UINT WINAPI MsiSetFeatureAttributesA(MSIHANDLE hInstall, LPCSTR szFeature, DWORD dwAttributes);
UINT WINAPI MsiSetFeatureAttributesW(MSIHANDLE hInstall, LPCWSTR szFeature, DWORD dwAttributes);
#ifdef UNICODE
#define MsiSetFeatureAttributes  MsiSetFeatureAttributesW
#else /* !UNICODE */
#define MsiSetFeatureAttributes  MsiSetFeatureAttributesA
#endif /* !UNICODE */

#endif /*  (_WIN32_MSI >=  110)  */

UINT WINAPI MsiGetComponentStateA(MSIHANDLE hInstall, LPCSTR szComponent, INSTALLSTATE *piInstalled, INSTALLSTATE *piAction);
UINT WINAPI MsiGetComponentStateW(MSIHANDLE hInstall, LPCWSTR szComponent, INSTALLSTATE *piInstalled, INSTALLSTATE *piAction);
#ifdef UNICODE
#define MsiGetComponentState  MsiGetComponentStateW
#else /* !UNICODE */
#define MsiGetComponentState  MsiGetComponentStateA
#endif /* !UNICODE */

UINT WINAPI MsiSetComponentStateA(MSIHANDLE hInstall, LPCSTR szComponent, INSTALLSTATE iState);
UINT WINAPI MsiSetComponentStateW(MSIHANDLE hInstall, LPCWSTR szComponent, INSTALLSTATE iState);
#ifdef UNICODE
#define MsiSetComponentState  MsiSetComponentStateW
#else /* !UNICODE */
#define MsiSetComponentState  MsiSetComponentStateA
#endif /* !UNICODE */

UINT WINAPI MsiGetFeatureCostA(MSIHANDLE hInstall, LPCSTR szFeature, MSICOSTTREE iCostTree, INSTALLSTATE iState, LPINT piCost);
UINT WINAPI MsiGetFeatureCostW(MSIHANDLE hInstall, LPCWSTR szFeature, MSICOSTTREE iCostTree, INSTALLSTATE iState, LPINT piCost);
#ifdef UNICODE
#define MsiGetFeatureCost  MsiGetFeatureCostW
#else /* !UNICODE */
#define MsiGetFeatureCost  MsiGetFeatureCostA
#endif /* !UNICODE */

#if (_WIN32_MSI >= 150)

UINT WINAPI MsiEnumComponentCostsA(MSIHANDLE hInstall, LPCSTR szComponent, DWORD dwIndex, INSTALLSTATE iState, LPSTR szDriveBuf, LPDWORD pcchDriveBuf, LPINT piCost, LPINT piTempCost);
UINT WINAPI MsiEnumComponentCostsW(MSIHANDLE hInstall, LPCWSTR szComponent, DWORD dwIndex, INSTALLSTATE iState, LPWSTR szDriveBuf, LPDWORD pcchDriveBuf, LPINT piCost, LPINT piTempCost);
#ifdef UNICODE
#define MsiEnumComponentCosts  MsiEnumComponentCostsW
#else /* !UNICODE */
#define MsiEnumComponentCosts  MsiEnumComponentCostsA
#endif /* !UNICODE */

#endif /* (_WIN32_MSI >= 150) */

UINT WINAPI MsiSetInstallLevel(MSIHANDLE hInstall, int iInstallLevel);
UINT WINAPI MsiGetFeatureValidStatesA(MSIHANDLE hInstall, LPCSTR szFeature, LPDWORD lpInstallStates);
UINT WINAPI MsiGetFeatureValidStatesW(MSIHANDLE hInstall, LPCWSTR szFeature, LPDWORD lpInstallStates);
#ifdef UNICODE
#define MsiGetFeatureValidStates  MsiGetFeatureValidStatesW
#else /* !UNICODE */
#define MsiGetFeatureValidStates  MsiGetFeatureValidStatesA
#endif /* !UNICODE */

UINT WINAPI MsiGetSourcePathA(MSIHANDLE hInstall, LPCSTR szFolder, LPSTR szPathBuf, LPDWORD pcchPathBuf);
UINT WINAPI MsiGetSourcePathW(MSIHANDLE hInstall, LPCWSTR szFolder, LPWSTR szPathBuf, LPDWORD pcchPathBuf);
#ifdef UNICODE
#define MsiGetSourcePath  MsiGetSourcePathW
#else /* !UNICODE */
#define MsiGetSourcePath  MsiGetSourcePathA
#endif /* !UNICODE */

UINT WINAPI MsiGetTargetPathA(MSIHANDLE hInstall, LPCSTR szFolder, LPSTR szPathBuf, LPDWORD pcchPathBuf);
UINT WINAPI MsiGetTargetPathW(MSIHANDLE hInstall, LPCWSTR szFolder, LPWSTR szPathBuf, LPDWORD pcchPathBuf);
#ifdef UNICODE
#define MsiGetTargetPath  MsiGetTargetPathW
#else /* !UNICODE */
#define MsiGetTargetPath  MsiGetTargetPathA
#endif /* !UNICODE */

UINT WINAPI MsiSetTargetPathA(MSIHANDLE hInstall, LPCSTR szFolder, LPCSTR szFolderPath);
UINT WINAPI MsiSetTargetPathW(MSIHANDLE hInstall, LPCWSTR szFolder, LPCWSTR szFolderPath);
#ifdef UNICODE
#define MsiSetTargetPath  MsiSetTargetPathW
#else /* !UNICODE */
#define MsiSetTargetPath  MsiSetTargetPathA
#endif /* !UNICODE */

UINT WINAPI MsiVerifyDiskSpace(MSIHANDLE hInstall);
UINT WINAPI MsiEnableUIPreview(MSIHANDLE hDatabase, MSIHANDLE * phPreview);
UINT WINAPI MsiPreviewDialogA(MSIHANDLE hPreview, LPCSTR szDialogName);
UINT WINAPI MsiPreviewDialogW(MSIHANDLE hPreview, LPCWSTR szDialogName);
#ifdef UNICODE
#define MsiPreviewDialog  MsiPreviewDialogW
#else /* !UNICODE */
#define MsiPreviewDialog  MsiPreviewDialogA
#endif /* !UNICODE */

UINT WINAPI MsiPreviewBillboardA(MSIHANDLE hPreview, LPCSTR szControlName, LPCSTR szBillboard);
UINT WINAPI MsiPreviewBillboardW(MSIHANDLE hPreview, LPCWSTR szControlName, LPCWSTR szBillboard);
#ifdef UNICODE
#define MsiPreviewBillboard  MsiPreviewBillboardW
#else /* !UNICODE */
#define MsiPreviewBillboard  MsiPreviewBillboardA
#endif /* !UNICODE */

MSIHANDLE WINAPI MsiGetLastErrorRecord(void);

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#endif /* _MSIQUERY_H */
