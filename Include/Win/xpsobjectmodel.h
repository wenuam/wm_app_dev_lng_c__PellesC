/* Generated from xpsobjectmodel.idl by POIDL version 0.80 - Do not edit */

#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif /* COM_NO_WINDOWS_H */

#ifndef __xpsobjectmodel_h__
#define __xpsobjectmodel_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

#ifndef __IXpsOMShareable_FWD_DEFINED__
#define __IXpsOMShareable_FWD_DEFINED__
typedef interface IXpsOMShareable IXpsOMShareable;
#endif /* __IXpsOMShareable_FWD_DEFINED__ */

#ifndef __IXpsOMVisual_FWD_DEFINED__
#define __IXpsOMVisual_FWD_DEFINED__
typedef interface IXpsOMVisual IXpsOMVisual;
#endif /* __IXpsOMVisual_FWD_DEFINED__ */

#ifndef __IXpsOMPart_FWD_DEFINED__
#define __IXpsOMPart_FWD_DEFINED__
typedef interface IXpsOMPart IXpsOMPart;
#endif /* __IXpsOMPart_FWD_DEFINED__ */

#ifndef __IXpsOMGlyphsEditor_FWD_DEFINED__
#define __IXpsOMGlyphsEditor_FWD_DEFINED__
typedef interface IXpsOMGlyphsEditor IXpsOMGlyphsEditor;
#endif /* __IXpsOMGlyphsEditor_FWD_DEFINED__ */

#ifndef __IXpsOMGlyphs_FWD_DEFINED__
#define __IXpsOMGlyphs_FWD_DEFINED__
typedef interface IXpsOMGlyphs IXpsOMGlyphs;
#endif /* __IXpsOMGlyphs_FWD_DEFINED__ */

#ifndef __IXpsOMDashCollection_FWD_DEFINED__
#define __IXpsOMDashCollection_FWD_DEFINED__
typedef interface IXpsOMDashCollection IXpsOMDashCollection;
#endif /* __IXpsOMDashCollection_FWD_DEFINED__ */

#ifndef __IXpsOMMatrixTransform_FWD_DEFINED__
#define __IXpsOMMatrixTransform_FWD_DEFINED__
typedef interface IXpsOMMatrixTransform IXpsOMMatrixTransform;
#endif /* __IXpsOMMatrixTransform_FWD_DEFINED__ */

#ifndef __IXpsOMGeometry_FWD_DEFINED__
#define __IXpsOMGeometry_FWD_DEFINED__
typedef interface IXpsOMGeometry IXpsOMGeometry;
#endif /* __IXpsOMGeometry_FWD_DEFINED__ */

#ifndef __IXpsOMGeometryFigure_FWD_DEFINED__
#define __IXpsOMGeometryFigure_FWD_DEFINED__
typedef interface IXpsOMGeometryFigure IXpsOMGeometryFigure;
#endif /* __IXpsOMGeometryFigure_FWD_DEFINED__ */

#ifndef __IXpsOMGeometryFigureCollection_FWD_DEFINED__
#define __IXpsOMGeometryFigureCollection_FWD_DEFINED__
typedef interface IXpsOMGeometryFigureCollection IXpsOMGeometryFigureCollection;
#endif /* __IXpsOMGeometryFigureCollection_FWD_DEFINED__ */

#ifndef __IXpsOMPath_FWD_DEFINED__
#define __IXpsOMPath_FWD_DEFINED__
typedef interface IXpsOMPath IXpsOMPath;
#endif /* __IXpsOMPath_FWD_DEFINED__ */

#ifndef __IXpsOMBrush_FWD_DEFINED__
#define __IXpsOMBrush_FWD_DEFINED__
typedef interface IXpsOMBrush IXpsOMBrush;
#endif /* __IXpsOMBrush_FWD_DEFINED__ */

#ifndef __IXpsOMGradientStopCollection_FWD_DEFINED__
#define __IXpsOMGradientStopCollection_FWD_DEFINED__
typedef interface IXpsOMGradientStopCollection IXpsOMGradientStopCollection;
#endif /* __IXpsOMGradientStopCollection_FWD_DEFINED__ */

#ifndef __IXpsOMSolidColorBrush_FWD_DEFINED__
#define __IXpsOMSolidColorBrush_FWD_DEFINED__
typedef interface IXpsOMSolidColorBrush IXpsOMSolidColorBrush;
#endif /* __IXpsOMSolidColorBrush_FWD_DEFINED__ */

#ifndef __IXpsOMTileBrush_FWD_DEFINED__
#define __IXpsOMTileBrush_FWD_DEFINED__
typedef interface IXpsOMTileBrush IXpsOMTileBrush;
#endif /* __IXpsOMTileBrush_FWD_DEFINED__ */

#ifndef __IXpsOMVisualBrush_FWD_DEFINED__
#define __IXpsOMVisualBrush_FWD_DEFINED__
typedef interface IXpsOMVisualBrush IXpsOMVisualBrush;
#endif /* __IXpsOMVisualBrush_FWD_DEFINED__ */

#ifndef __IXpsOMImageBrush_FWD_DEFINED__
#define __IXpsOMImageBrush_FWD_DEFINED__
typedef interface IXpsOMImageBrush IXpsOMImageBrush;
#endif /* __IXpsOMImageBrush_FWD_DEFINED__ */

#ifndef __IXpsOMGradientStop_FWD_DEFINED__
#define __IXpsOMGradientStop_FWD_DEFINED__
typedef interface IXpsOMGradientStop IXpsOMGradientStop;
#endif /* __IXpsOMGradientStop_FWD_DEFINED__ */

#ifndef __IXpsOMGradientBrush_FWD_DEFINED__
#define __IXpsOMGradientBrush_FWD_DEFINED__
typedef interface IXpsOMGradientBrush IXpsOMGradientBrush;
#endif /* __IXpsOMGradientBrush_FWD_DEFINED__ */

#ifndef __IXpsOMLinearGradientBrush_FWD_DEFINED__
#define __IXpsOMLinearGradientBrush_FWD_DEFINED__
typedef interface IXpsOMLinearGradientBrush IXpsOMLinearGradientBrush;
#endif /* __IXpsOMLinearGradientBrush_FWD_DEFINED__ */

#ifndef __IXpsOMRadialGradientBrush_FWD_DEFINED__
#define __IXpsOMRadialGradientBrush_FWD_DEFINED__
typedef interface IXpsOMRadialGradientBrush IXpsOMRadialGradientBrush;
#endif /* __IXpsOMRadialGradientBrush_FWD_DEFINED__ */

#ifndef __IXpsOMResource_FWD_DEFINED__
#define __IXpsOMResource_FWD_DEFINED__
typedef interface IXpsOMResource IXpsOMResource;
#endif /* __IXpsOMResource_FWD_DEFINED__ */

#ifndef __IXpsOMPartResources_FWD_DEFINED__
#define __IXpsOMPartResources_FWD_DEFINED__
typedef interface IXpsOMPartResources IXpsOMPartResources;
#endif /* __IXpsOMPartResources_FWD_DEFINED__ */

#ifndef __IXpsOMDictionary_FWD_DEFINED__
#define __IXpsOMDictionary_FWD_DEFINED__
typedef interface IXpsOMDictionary IXpsOMDictionary;
#endif /* __IXpsOMDictionary_FWD_DEFINED__ */

#ifndef __IXpsOMFontResource_FWD_DEFINED__
#define __IXpsOMFontResource_FWD_DEFINED__
typedef interface IXpsOMFontResource IXpsOMFontResource;
#endif /* __IXpsOMFontResource_FWD_DEFINED__ */

#ifndef __IXpsOMFontResourceCollection_FWD_DEFINED__
#define __IXpsOMFontResourceCollection_FWD_DEFINED__
typedef interface IXpsOMFontResourceCollection IXpsOMFontResourceCollection;
#endif /* __IXpsOMFontResourceCollection_FWD_DEFINED__ */

#ifndef __IXpsOMImageResource_FWD_DEFINED__
#define __IXpsOMImageResource_FWD_DEFINED__
typedef interface IXpsOMImageResource IXpsOMImageResource;
#endif /* __IXpsOMImageResource_FWD_DEFINED__ */

#ifndef __IXpsOMImageResourceCollection_FWD_DEFINED__
#define __IXpsOMImageResourceCollection_FWD_DEFINED__
typedef interface IXpsOMImageResourceCollection IXpsOMImageResourceCollection;
#endif /* __IXpsOMImageResourceCollection_FWD_DEFINED__ */

#ifndef __IXpsOMColorProfileResource_FWD_DEFINED__
#define __IXpsOMColorProfileResource_FWD_DEFINED__
typedef interface IXpsOMColorProfileResource IXpsOMColorProfileResource;
#endif /* __IXpsOMColorProfileResource_FWD_DEFINED__ */

#ifndef __IXpsOMColorProfileResourceCollection_FWD_DEFINED__
#define __IXpsOMColorProfileResourceCollection_FWD_DEFINED__
typedef interface IXpsOMColorProfileResourceCollection IXpsOMColorProfileResourceCollection;
#endif /* __IXpsOMColorProfileResourceCollection_FWD_DEFINED__ */

#ifndef __IXpsOMPrintTicketResource_FWD_DEFINED__
#define __IXpsOMPrintTicketResource_FWD_DEFINED__
typedef interface IXpsOMPrintTicketResource IXpsOMPrintTicketResource;
#endif /* __IXpsOMPrintTicketResource_FWD_DEFINED__ */

#ifndef __IXpsOMRemoteDictionaryResource_FWD_DEFINED__
#define __IXpsOMRemoteDictionaryResource_FWD_DEFINED__
typedef interface IXpsOMRemoteDictionaryResource IXpsOMRemoteDictionaryResource;
#endif /* __IXpsOMRemoteDictionaryResource_FWD_DEFINED__ */

#ifndef __IXpsOMRemoteDictionaryResourceCollection_FWD_DEFINED__
#define __IXpsOMRemoteDictionaryResourceCollection_FWD_DEFINED__
typedef interface IXpsOMRemoteDictionaryResourceCollection IXpsOMRemoteDictionaryResourceCollection;
#endif /* __IXpsOMRemoteDictionaryResourceCollection_FWD_DEFINED__ */

#ifndef __IXpsOMSignatureBlockResourceCollection_FWD_DEFINED__
#define __IXpsOMSignatureBlockResourceCollection_FWD_DEFINED__
typedef interface IXpsOMSignatureBlockResourceCollection IXpsOMSignatureBlockResourceCollection;
#endif /* __IXpsOMSignatureBlockResourceCollection_FWD_DEFINED__ */

#ifndef __IXpsOMDocumentStructureResource_FWD_DEFINED__
#define __IXpsOMDocumentStructureResource_FWD_DEFINED__
typedef interface IXpsOMDocumentStructureResource IXpsOMDocumentStructureResource;
#endif /* __IXpsOMDocumentStructureResource_FWD_DEFINED__ */

#ifndef __IXpsOMStoryFragmentsResource_FWD_DEFINED__
#define __IXpsOMStoryFragmentsResource_FWD_DEFINED__
typedef interface IXpsOMStoryFragmentsResource IXpsOMStoryFragmentsResource;
#endif /* __IXpsOMStoryFragmentsResource_FWD_DEFINED__ */

#ifndef __IXpsOMSignatureBlockResource_FWD_DEFINED__
#define __IXpsOMSignatureBlockResource_FWD_DEFINED__
typedef interface IXpsOMSignatureBlockResource IXpsOMSignatureBlockResource;
#endif /* __IXpsOMSignatureBlockResource_FWD_DEFINED__ */

#ifndef __IXpsOMVisualCollection_FWD_DEFINED__
#define __IXpsOMVisualCollection_FWD_DEFINED__
typedef interface IXpsOMVisualCollection IXpsOMVisualCollection;
#endif /* __IXpsOMVisualCollection_FWD_DEFINED__ */

#ifndef __IXpsOMCanvas_FWD_DEFINED__
#define __IXpsOMCanvas_FWD_DEFINED__
typedef interface IXpsOMCanvas IXpsOMCanvas;
#endif /* __IXpsOMCanvas_FWD_DEFINED__ */

#ifndef __IXpsOMPage_FWD_DEFINED__
#define __IXpsOMPage_FWD_DEFINED__
typedef interface IXpsOMPage IXpsOMPage;
#endif /* __IXpsOMPage_FWD_DEFINED__ */

#ifndef __IXpsOMPageReference_FWD_DEFINED__
#define __IXpsOMPageReference_FWD_DEFINED__
typedef interface IXpsOMPageReference IXpsOMPageReference;
#endif /* __IXpsOMPageReference_FWD_DEFINED__ */

#ifndef __IXpsOMPageReferenceCollection_FWD_DEFINED__
#define __IXpsOMPageReferenceCollection_FWD_DEFINED__
typedef interface IXpsOMPageReferenceCollection IXpsOMPageReferenceCollection;
#endif /* __IXpsOMPageReferenceCollection_FWD_DEFINED__ */

#ifndef __IXpsOMDocument_FWD_DEFINED__
#define __IXpsOMDocument_FWD_DEFINED__
typedef interface IXpsOMDocument IXpsOMDocument;
#endif /* __IXpsOMDocument_FWD_DEFINED__ */

#ifndef __IXpsOMDocumentCollection_FWD_DEFINED__
#define __IXpsOMDocumentCollection_FWD_DEFINED__
typedef interface IXpsOMDocumentCollection IXpsOMDocumentCollection;
#endif /* __IXpsOMDocumentCollection_FWD_DEFINED__ */

#ifndef __IXpsOMDocumentSequence_FWD_DEFINED__
#define __IXpsOMDocumentSequence_FWD_DEFINED__
typedef interface IXpsOMDocumentSequence IXpsOMDocumentSequence;
#endif /* __IXpsOMDocumentSequence_FWD_DEFINED__ */

#ifndef __IXpsOMCoreProperties_FWD_DEFINED__
#define __IXpsOMCoreProperties_FWD_DEFINED__
typedef interface IXpsOMCoreProperties IXpsOMCoreProperties;
#endif /* __IXpsOMCoreProperties_FWD_DEFINED__ */

#ifndef __IXpsOMPackage_FWD_DEFINED__
#define __IXpsOMPackage_FWD_DEFINED__
typedef interface IXpsOMPackage IXpsOMPackage;
#endif /* __IXpsOMPackage_FWD_DEFINED__ */

#ifndef __IXpsOMObjectFactory_FWD_DEFINED__
#define __IXpsOMObjectFactory_FWD_DEFINED__
typedef interface IXpsOMObjectFactory IXpsOMObjectFactory;
#endif /* __IXpsOMObjectFactory_FWD_DEFINED__ */

#ifndef __IXpsOMNameCollection_FWD_DEFINED__
#define __IXpsOMNameCollection_FWD_DEFINED__
typedef interface IXpsOMNameCollection IXpsOMNameCollection;
#endif /* __IXpsOMNameCollection_FWD_DEFINED__ */

#ifndef __IXpsOMPartUriCollection_FWD_DEFINED__
#define __IXpsOMPartUriCollection_FWD_DEFINED__
typedef interface IXpsOMPartUriCollection IXpsOMPartUriCollection;
#endif /* __IXpsOMPartUriCollection_FWD_DEFINED__ */

#ifndef __IXpsOMPackageWriter_FWD_DEFINED__
#define __IXpsOMPackageWriter_FWD_DEFINED__
typedef interface IXpsOMPackageWriter IXpsOMPackageWriter;
#endif /* __IXpsOMPackageWriter_FWD_DEFINED__ */

#ifndef __IXpsOMPackageTarget_FWD_DEFINED__
#define __IXpsOMPackageTarget_FWD_DEFINED__
typedef interface IXpsOMPackageTarget IXpsOMPackageTarget;
#endif /* __IXpsOMPackageTarget_FWD_DEFINED__ */

#ifndef __IXpsOMThumbnailGenerator_FWD_DEFINED__
#define __IXpsOMThumbnailGenerator_FWD_DEFINED__
typedef interface IXpsOMThumbnailGenerator IXpsOMThumbnailGenerator;
#endif /* __IXpsOMThumbnailGenerator_FWD_DEFINED__ */

#ifndef __XpsOMObjectFactory_FWD_DEFINED__
#define __XpsOMObjectFactory_FWD_DEFINED__
typedef struct XpsOMObjectFactory XpsOMObjectFactory;
#endif /* __XpsOMObjectFactory_FWD_DEFINED__ */

#ifndef __XpsOMThumbnailGenerator_FWD_DEFINED__
#define __XpsOMThumbnailGenerator_FWD_DEFINED__
typedef struct XpsOMThumbnailGenerator XpsOMThumbnailGenerator;
#endif /* __XpsOMThumbnailGenerator_FWD_DEFINED__ */

/* Headers for imported files */

#include "oaidl.h"
#include "ocidl.h"

#include "msopc.h"


#include <winapifamily.h>

#if (NTDDI_VERSION >= NTDDI_WIN7)

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)


#ifndef __IXpsOMPackage_FWD_DEFINED__
#define __IXpsOMPackage_FWD_DEFINED__
typedef interface IXpsOMPackage IXpsOMPackage;
#endif /* __IXpsOMPackage_FWD_DEFINED__ */

#ifndef __IXpsOMPart_FWD_DEFINED__
#define __IXpsOMPart_FWD_DEFINED__
typedef interface IXpsOMPart IXpsOMPart;
#endif /* __IXpsOMPart_FWD_DEFINED__ */

#ifndef __IXpsOMShareable_FWD_DEFINED__
#define __IXpsOMShareable_FWD_DEFINED__
typedef interface IXpsOMShareable IXpsOMShareable;
#endif /* __IXpsOMShareable_FWD_DEFINED__ */

#ifndef __IXpsOMVisual_FWD_DEFINED__
#define __IXpsOMVisual_FWD_DEFINED__
typedef interface IXpsOMVisual IXpsOMVisual;
#endif /* __IXpsOMVisual_FWD_DEFINED__ */

#ifndef __IXpsOMBrush_FWD_DEFINED__
#define __IXpsOMBrush_FWD_DEFINED__
typedef interface IXpsOMBrush IXpsOMBrush;
#endif /* __IXpsOMBrush_FWD_DEFINED__ */

#ifndef __IXpsOMTileBrush_FWD_DEFINED__
#define __IXpsOMTileBrush_FWD_DEFINED__
typedef interface IXpsOMTileBrush IXpsOMTileBrush;
#endif /* __IXpsOMTileBrush_FWD_DEFINED__ */

#ifndef __IXpsOMResource_FWD_DEFINED__
#define __IXpsOMResource_FWD_DEFINED__
typedef interface IXpsOMResource IXpsOMResource;
#endif /* __IXpsOMResource_FWD_DEFINED__ */

#ifndef __IXpsOMCanvas_FWD_DEFINED__
#define __IXpsOMCanvas_FWD_DEFINED__
typedef interface IXpsOMCanvas IXpsOMCanvas;
#endif /* __IXpsOMCanvas_FWD_DEFINED__ */

#ifndef __IXpsOMColorProfileResource_FWD_DEFINED__
#define __IXpsOMColorProfileResource_FWD_DEFINED__
typedef interface IXpsOMColorProfileResource IXpsOMColorProfileResource;
#endif /* __IXpsOMColorProfileResource_FWD_DEFINED__ */

#ifndef __IXpsOMColorProfileResourceCollection_FWD_DEFINED__
#define __IXpsOMColorProfileResourceCollection_FWD_DEFINED__
typedef interface IXpsOMColorProfileResourceCollection IXpsOMColorProfileResourceCollection;
#endif /* __IXpsOMColorProfileResourceCollection_FWD_DEFINED__ */

#ifndef __IXpsOMDashCollection_FWD_DEFINED__
#define __IXpsOMDashCollection_FWD_DEFINED__
typedef interface IXpsOMDashCollection IXpsOMDashCollection;
#endif /* __IXpsOMDashCollection_FWD_DEFINED__ */

#ifndef __IXpsOMFontResource_FWD_DEFINED__
#define __IXpsOMFontResource_FWD_DEFINED__
typedef interface IXpsOMFontResource IXpsOMFontResource;
#endif /* __IXpsOMFontResource_FWD_DEFINED__ */

#ifndef __IXpsOMFontResourceCollection_FWD_DEFINED__
#define __IXpsOMFontResourceCollection_FWD_DEFINED__
typedef interface IXpsOMFontResourceCollection IXpsOMFontResourceCollection;
#endif /* __IXpsOMFontResourceCollection_FWD_DEFINED__ */

#ifndef __IXpsOMGeometry_FWD_DEFINED__
#define __IXpsOMGeometry_FWD_DEFINED__
typedef interface IXpsOMGeometry IXpsOMGeometry;
#endif /* __IXpsOMGeometry_FWD_DEFINED__ */

#ifndef __IXpsOMGeometryFigure_FWD_DEFINED__
#define __IXpsOMGeometryFigure_FWD_DEFINED__
typedef interface IXpsOMGeometryFigure IXpsOMGeometryFigure;
#endif /* __IXpsOMGeometryFigure_FWD_DEFINED__ */

#ifndef __IXpsOMGeometryFigureCollection_FWD_DEFINED__
#define __IXpsOMGeometryFigureCollection_FWD_DEFINED__
typedef interface IXpsOMGeometryFigureCollection IXpsOMGeometryFigureCollection;
#endif /* __IXpsOMGeometryFigureCollection_FWD_DEFINED__ */

#ifndef __IXpsOMGlyphs_FWD_DEFINED__
#define __IXpsOMGlyphs_FWD_DEFINED__
typedef interface IXpsOMGlyphs IXpsOMGlyphs;
#endif /* __IXpsOMGlyphs_FWD_DEFINED__ */

#ifndef __IXpsOMGradientBrush_FWD_DEFINED__
#define __IXpsOMGradientBrush_FWD_DEFINED__
typedef interface IXpsOMGradientBrush IXpsOMGradientBrush;
#endif /* __IXpsOMGradientBrush_FWD_DEFINED__ */

#ifndef __IXpsOMGradientStop_FWD_DEFINED__
#define __IXpsOMGradientStop_FWD_DEFINED__
typedef interface IXpsOMGradientStop IXpsOMGradientStop;
#endif /* __IXpsOMGradientStop_FWD_DEFINED__ */

#ifndef __IXpsOMGradientStopCollection_FWD_DEFINED__
#define __IXpsOMGradientStopCollection_FWD_DEFINED__
typedef interface IXpsOMGradientStopCollection IXpsOMGradientStopCollection;
#endif /* __IXpsOMGradientStopCollection_FWD_DEFINED__ */

#ifndef __IXpsOMImageBrush_FWD_DEFINED__
#define __IXpsOMImageBrush_FWD_DEFINED__
typedef interface IXpsOMImageBrush IXpsOMImageBrush;
#endif /* __IXpsOMImageBrush_FWD_DEFINED__ */

#ifndef __IXpsOMImageResource_FWD_DEFINED__
#define __IXpsOMImageResource_FWD_DEFINED__
typedef interface IXpsOMImageResource IXpsOMImageResource;
#endif /* __IXpsOMImageResource_FWD_DEFINED__ */

#ifndef __IXpsOMImageResourceCollection_FWD_DEFINED__
#define __IXpsOMImageResourceCollection_FWD_DEFINED__
typedef interface IXpsOMImageResourceCollection IXpsOMImageResourceCollection;
#endif /* __IXpsOMImageResourceCollection_FWD_DEFINED__ */

#ifndef __IXpsOMLinearGradientBrush_FWD_DEFINED__
#define __IXpsOMLinearGradientBrush_FWD_DEFINED__
typedef interface IXpsOMLinearGradientBrush IXpsOMLinearGradientBrush;
#endif /* __IXpsOMLinearGradientBrush_FWD_DEFINED__ */

#ifndef __IXpsOMMatrixTransform_FWD_DEFINED__
#define __IXpsOMMatrixTransform_FWD_DEFINED__
typedef interface IXpsOMMatrixTransform IXpsOMMatrixTransform;
#endif /* __IXpsOMMatrixTransform_FWD_DEFINED__ */

#ifndef __IXpsOMPartResources_FWD_DEFINED__
#define __IXpsOMPartResources_FWD_DEFINED__
typedef interface IXpsOMPartResources IXpsOMPartResources;
#endif /* __IXpsOMPartResources_FWD_DEFINED__ */

#ifndef __IXpsOMPath_FWD_DEFINED__
#define __IXpsOMPath_FWD_DEFINED__
typedef interface IXpsOMPath IXpsOMPath;
#endif /* __IXpsOMPath_FWD_DEFINED__ */

#ifndef __IXpsOMPartUriCollection_FWD_DEFINED__
#define __IXpsOMPartUriCollection_FWD_DEFINED__
typedef interface IXpsOMPartUriCollection IXpsOMPartUriCollection;
#endif /* __IXpsOMPartUriCollection_FWD_DEFINED__ */

#ifndef __IXpsOMRadialGradientBrush_FWD_DEFINED__
#define __IXpsOMRadialGradientBrush_FWD_DEFINED__
typedef interface IXpsOMRadialGradientBrush IXpsOMRadialGradientBrush;
#endif /* __IXpsOMRadialGradientBrush_FWD_DEFINED__ */

#ifndef __IXpsOMRemoteDictionaryResource_FWD_DEFINED__
#define __IXpsOMRemoteDictionaryResource_FWD_DEFINED__
typedef interface IXpsOMRemoteDictionaryResource IXpsOMRemoteDictionaryResource;
#endif /* __IXpsOMRemoteDictionaryResource_FWD_DEFINED__ */

#ifndef __IXpsOMRemoteDictionaryResourceCollection_FWD_DEFINED__
#define __IXpsOMRemoteDictionaryResourceCollection_FWD_DEFINED__
typedef interface IXpsOMRemoteDictionaryResourceCollection IXpsOMRemoteDictionaryResourceCollection;
#endif /* __IXpsOMRemoteDictionaryResourceCollection_FWD_DEFINED__ */

#ifndef __IXpsOMDictionary_FWD_DEFINED__
#define __IXpsOMDictionary_FWD_DEFINED__
typedef interface IXpsOMDictionary IXpsOMDictionary;
#endif /* __IXpsOMDictionary_FWD_DEFINED__ */


#ifndef __IXpsOMShareable_FWD_DEFINED__
#define __IXpsOMShareable_FWD_DEFINED__
typedef interface IXpsOMShareable IXpsOMShareable;
#endif /* __IXpsOMShareable_FWD_DEFINED__ */


#ifndef __IXpsOMSolidColorBrush_FWD_DEFINED__
#define __IXpsOMSolidColorBrush_FWD_DEFINED__
typedef interface IXpsOMSolidColorBrush IXpsOMSolidColorBrush;
#endif /* __IXpsOMSolidColorBrush_FWD_DEFINED__ */


#ifndef __IXpsOMTileBrush_FWD_DEFINED__
#define __IXpsOMTileBrush_FWD_DEFINED__
typedef interface IXpsOMTileBrush IXpsOMTileBrush;
#endif /* __IXpsOMTileBrush_FWD_DEFINED__ */


#ifndef __IXpsOMVisualBrush_FWD_DEFINED__
#define __IXpsOMVisualBrush_FWD_DEFINED__
typedef interface IXpsOMVisualBrush IXpsOMVisualBrush;
#endif /* __IXpsOMVisualBrush_FWD_DEFINED__ */

#ifndef __IXpsOMVisualCollection_FWD_DEFINED__
#define __IXpsOMVisualCollection_FWD_DEFINED__
typedef interface IXpsOMVisualCollection IXpsOMVisualCollection;
#endif /* __IXpsOMVisualCollection_FWD_DEFINED__ */

#ifndef __IXpsOMPageReference_FWD_DEFINED__
#define __IXpsOMPageReference_FWD_DEFINED__
typedef interface IXpsOMPageReference IXpsOMPageReference;
#endif /* __IXpsOMPageReference_FWD_DEFINED__ */

#ifndef __IXpsOMDocumentSequence_FWD_DEFINED__
#define __IXpsOMDocumentSequence_FWD_DEFINED__
typedef interface IXpsOMDocumentSequence IXpsOMDocumentSequence;
#endif /* __IXpsOMDocumentSequence_FWD_DEFINED__ */

#ifndef __IXpsOMSignatureBlockResource_FWD_DEFINED__
#define __IXpsOMSignatureBlockResource_FWD_DEFINED__
typedef interface IXpsOMSignatureBlockResource IXpsOMSignatureBlockResource;
#endif /* __IXpsOMSignatureBlockResource_FWD_DEFINED__ */

#ifndef __IXpsOMSignatureBlockResourceCollection_FWD_DEFINED__
#define __IXpsOMSignatureBlockResourceCollection_FWD_DEFINED__
typedef interface IXpsOMSignatureBlockResourceCollection IXpsOMSignatureBlockResourceCollection;
#endif /* __IXpsOMSignatureBlockResourceCollection_FWD_DEFINED__ */

#ifndef __IXpsOMNameCollection_FWD_DEFINED__
#define __IXpsOMNameCollection_FWD_DEFINED__
typedef interface IXpsOMNameCollection IXpsOMNameCollection;
#endif /* __IXpsOMNameCollection_FWD_DEFINED__ */

#ifndef __IXpsOMDocument_FWD_DEFINED__
#define __IXpsOMDocument_FWD_DEFINED__
typedef interface IXpsOMDocument IXpsOMDocument;
#endif /* __IXpsOMDocument_FWD_DEFINED__ */

#ifndef __IXpsOMPage_FWD_DEFINED__
#define __IXpsOMPage_FWD_DEFINED__
typedef interface IXpsOMPage IXpsOMPage;
#endif /* __IXpsOMPage_FWD_DEFINED__ */

#ifndef __IXpsOMPackageWriter_FWD_DEFINED__
#define __IXpsOMPackageWriter_FWD_DEFINED__
typedef interface IXpsOMPackageWriter IXpsOMPackageWriter;
#endif /* __IXpsOMPackageWriter_FWD_DEFINED__ */

#ifndef __IXpsOMPackageTarget_FWD_DEFINED__
#define __IXpsOMPackageTarget_FWD_DEFINED__
typedef interface IXpsOMPackageTarget IXpsOMPackageTarget;
#endif /* __IXpsOMPackageTarget_FWD_DEFINED__ */

typedef enum __POIDL_xpsobjectmodel_tag_00000023 {
    XPS_TILE_MODE_NONE = 1,
    XPS_TILE_MODE_TILE = 2,
    XPS_TILE_MODE_FLIPX = 3,
    XPS_TILE_MODE_FLIPY = 4,
    XPS_TILE_MODE_FLIPXY = 5
} XPS_TILE_MODE;

typedef enum __POIDL_xpsobjectmodel_tag_00000024 {
    XPS_COLOR_INTERPOLATION_SCRGBLINEAR = 1,
    XPS_COLOR_INTERPOLATION_SRGBLINEAR = 2
} XPS_COLOR_INTERPOLATION;

typedef enum __POIDL_xpsobjectmodel_tag_00000025 {
    XPS_SPREAD_METHOD_PAD = 1,
    XPS_SPREAD_METHOD_REFLECT = 2,
    XPS_SPREAD_METHOD_REPEAT = 3
} XPS_SPREAD_METHOD;

typedef enum __POIDL_xpsobjectmodel_tag_00000026 {
    XPS_STYLE_SIMULATION_NONE = 1,
    XPS_STYLE_SIMULATION_ITALIC = 2,
    XPS_STYLE_SIMULATION_BOLD = 3,
    XPS_STYLE_SIMULATION_BOLDITALIC = 4
} XPS_STYLE_SIMULATION;

typedef enum __POIDL_xpsobjectmodel_tag_00000027 {
    XPS_LINE_CAP_FLAT = 1,
    XPS_LINE_CAP_ROUND = 2,
    XPS_LINE_CAP_SQUARE = 3,
    XPS_LINE_CAP_TRIANGLE = 4
} XPS_LINE_CAP;

typedef enum __POIDL_xpsobjectmodel_tag_00000028 {
    XPS_DASH_CAP_FLAT = 1,
    XPS_DASH_CAP_ROUND = 2,
    XPS_DASH_CAP_SQUARE = 3,
    XPS_DASH_CAP_TRIANGLE = 4
} XPS_DASH_CAP;

typedef enum __POIDL_xpsobjectmodel_tag_00000029 {
    XPS_LINE_JOIN_MITER = 1,
    XPS_LINE_JOIN_BEVEL = 2,
    XPS_LINE_JOIN_ROUND = 3
} XPS_LINE_JOIN;

typedef enum __POIDL_xpsobjectmodel_tag_0000002A {
    XPS_IMAGE_TYPE_JPEG = 1,
    XPS_IMAGE_TYPE_PNG = 2,
    XPS_IMAGE_TYPE_TIFF = 3,
    XPS_IMAGE_TYPE_WDP = 4,
    XPS_IMAGE_TYPE_JXR = 5
} XPS_IMAGE_TYPE;

typedef enum __POIDL_xpsobjectmodel_tag_0000002B {
    XPS_COLOR_TYPE_SRGB = 1,
    XPS_COLOR_TYPE_SCRGB = 2,
    XPS_COLOR_TYPE_CONTEXT = 3
} XPS_COLOR_TYPE;

typedef enum __POIDL_xpsobjectmodel_tag_0000002C {
    XPS_FILL_RULE_EVENODD = 1,
    XPS_FILL_RULE_NONZERO = 2
} XPS_FILL_RULE;

typedef enum __POIDL_xpsobjectmodel_tag_0000002D {
    XPS_SEGMENT_TYPE_ARC_LARGE_CLOCKWISE = 1,
    XPS_SEGMENT_TYPE_ARC_LARGE_COUNTERCLOCKWISE = 2,
    XPS_SEGMENT_TYPE_ARC_SMALL_CLOCKWISE = 3,
    XPS_SEGMENT_TYPE_ARC_SMALL_COUNTERCLOCKWISE = 4,
    XPS_SEGMENT_TYPE_BEZIER = 5,
    XPS_SEGMENT_TYPE_LINE = 6,
    XPS_SEGMENT_TYPE_QUADRATIC_BEZIER = 7
} XPS_SEGMENT_TYPE;

typedef enum __POIDL_xpsobjectmodel_tag_0000002E {
    XPS_SEGMENT_STROKE_PATTERN_ALL = 1,
    XPS_SEGMENT_STROKE_PATTERN_NONE = 2,
    XPS_SEGMENT_STROKE_PATTERN_MIXED = 3
} XPS_SEGMENT_STROKE_PATTERN;

typedef enum __POIDL_xpsobjectmodel_tag_0000002F {
    XPS_FONT_EMBEDDING_NORMAL = 1,
    XPS_FONT_EMBEDDING_OBFUSCATED = 2,
    XPS_FONT_EMBEDDING_RESTRICTED = 3,
    XPS_FONT_EMBEDDING_RESTRICTED_UNOBFUSCATED = 4
} XPS_FONT_EMBEDDING;

typedef enum __POIDL_xpsobjectmodel_tag_00000030 {
    XPS_OBJECT_TYPE_CANVAS = 1,
    XPS_OBJECT_TYPE_GLYPHS = 2,
    XPS_OBJECT_TYPE_PATH = 3,
    XPS_OBJECT_TYPE_MATRIX_TRANSFORM = 4,
    XPS_OBJECT_TYPE_GEOMETRY = 5,
    XPS_OBJECT_TYPE_SOLID_COLOR_BRUSH = 6,
    XPS_OBJECT_TYPE_IMAGE_BRUSH = 7,
    XPS_OBJECT_TYPE_LINEAR_GRADIENT_BRUSH = 8,
    XPS_OBJECT_TYPE_RADIAL_GRADIENT_BRUSH = 9,
    XPS_OBJECT_TYPE_VISUAL_BRUSH = 10
} XPS_OBJECT_TYPE;

typedef enum __POIDL_xpsobjectmodel_tag_00000031 {
    XPS_THUMBNAIL_SIZE_VERYSMALL = 1,
    XPS_THUMBNAIL_SIZE_SMALL = 2,
    XPS_THUMBNAIL_SIZE_MEDIUM = 3,
    XPS_THUMBNAIL_SIZE_LARGE = 4
} XPS_THUMBNAIL_SIZE;

typedef enum __POIDL_xpsobjectmodel_tag_00000032 {
    XPS_INTERLEAVING_OFF = 1,
    XPS_INTERLEAVING_ON = 2
} XPS_INTERLEAVING;

typedef struct __POIDL_xpsobjectmodel_tag_00000033 {
    FLOAT x;
    FLOAT y;
} XPS_POINT;

typedef struct __POIDL_xpsobjectmodel_tag_00000034 {
    FLOAT width;
    FLOAT height;
} XPS_SIZE;

typedef struct __POIDL_xpsobjectmodel_tag_00000035 {
    FLOAT x;
    FLOAT y;
    FLOAT width;
    FLOAT height;
} XPS_RECT;

typedef struct __POIDL_xpsobjectmodel_tag_00000036 {
    FLOAT length;
    FLOAT gap;
} XPS_DASH;

typedef struct __POIDL_xpsobjectmodel_tag_00000037 {
    LONG index;
    FLOAT advanceWidth;
    FLOAT horizontalOffset;
    FLOAT verticalOffset;
} XPS_GLYPH_INDEX;

typedef struct __POIDL_xpsobjectmodel_tag_00000038 {
    UINT32 unicodeStringStart;
    UINT16 unicodeStringLength;
    UINT32 glyphIndicesStart;
    UINT16 glyphIndicesLength;
} XPS_GLYPH_MAPPING;

typedef struct __POIDL_xpsobjectmodel_tag_00000039 {
    FLOAT m11;
    FLOAT m12;
    FLOAT m21;
    FLOAT m22;
    FLOAT m31;
    FLOAT m32;
} XPS_MATRIX;

typedef struct __POIDL_xpsobjectmodel_tag_0000003A {
    struct {
        UINT8 alpha;
        UINT8 red;
        UINT8 green;
        UINT8 blue;
    } sRGB;
    struct {
        FLOAT alpha;
        FLOAT red;
        FLOAT green;
        FLOAT blue;
    } scRGB;
    struct {
        UINT8 channelCount;
        FLOAT channels[ 9 ];
    } context;
} XPS_COLOR;

/*****************************************************************************
 * IXpsOMShareable interface
 */
#ifndef __IXpsOMShareable_INTERFACE_DEFINED__
#define __IXpsOMShareable_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMShareable;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMShareableVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMShareable *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMShareable *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMShareable *This);

    /*** IXpsOMShareable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetOwner)(
        IXpsOMShareable *This,
        IUnknown **owner);

    HRESULT (STDMETHODCALLTYPE *GetType)(
        IXpsOMShareable *This,
        XPS_OBJECT_TYPE *type);

    END_INTERFACE
} IXpsOMShareableVtbl;

interface IXpsOMShareable {
    CONST_VTBL IXpsOMShareableVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMShareable_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMShareable_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMShareable_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMShareable methods ***/
#define IXpsOMShareable_GetOwner(This,owner) \
    ((This)->lpVtbl->GetOwner(This,owner))
#define IXpsOMShareable_GetType(This,type) \
    ((This)->lpVtbl->GetType(This,type))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMShareable_INTERFACE_DEFINED__ */
/*****************************************************************************
 * IXpsOMVisual interface
 */
#ifndef __IXpsOMVisual_INTERFACE_DEFINED__
#define __IXpsOMVisual_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMVisual;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMVisualVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMVisual *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMVisual *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMVisual *This);

    /*** IXpsOMShareable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetOwner)(
        IXpsOMVisual *This,
        IUnknown **owner);

    HRESULT (STDMETHODCALLTYPE *GetType)(
        IXpsOMVisual *This,
        XPS_OBJECT_TYPE *type);

    /*** IXpsOMVisual methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTransform)(
        IXpsOMVisual *This,
        IXpsOMMatrixTransform **matrixTransform);

    HRESULT (STDMETHODCALLTYPE *GetTransformLocal)(
        IXpsOMVisual *This,
        IXpsOMMatrixTransform **matrixTransform);

    HRESULT (STDMETHODCALLTYPE *SetTransformLocal)(
        IXpsOMVisual *This,
        IXpsOMMatrixTransform *matrixTransform);

    HRESULT (STDMETHODCALLTYPE *GetTransformLookup)(
        IXpsOMVisual *This,
        LPWSTR *key);

    HRESULT (STDMETHODCALLTYPE *SetTransformLookup)(
        IXpsOMVisual *This,
        LPCWSTR key);

    HRESULT (STDMETHODCALLTYPE *GetClipGeometry)(
        IXpsOMVisual *This,
        IXpsOMGeometry **clipGeometry);

    HRESULT (STDMETHODCALLTYPE *GetClipGeometryLocal)(
        IXpsOMVisual *This,
        IXpsOMGeometry **clipGeometry);

    HRESULT (STDMETHODCALLTYPE *SetClipGeometryLocal)(
        IXpsOMVisual *This,
        IXpsOMGeometry *clipGeometry);

    HRESULT (STDMETHODCALLTYPE *GetClipGeometryLookup)(
        IXpsOMVisual *This,
        LPWSTR *key);

    HRESULT (STDMETHODCALLTYPE *SetClipGeometryLookup)(
        IXpsOMVisual *This,
        LPCWSTR key);

    HRESULT (STDMETHODCALLTYPE *GetOpacity)(
        IXpsOMVisual *This,
        FLOAT *opacity);

    HRESULT (STDMETHODCALLTYPE *SetOpacity)(
        IXpsOMVisual *This,
        FLOAT opacity);

    HRESULT (STDMETHODCALLTYPE *GetOpacityMaskBrush)(
        IXpsOMVisual *This,
        IXpsOMBrush **opacityMaskBrush);

    HRESULT (STDMETHODCALLTYPE *GetOpacityMaskBrushLocal)(
        IXpsOMVisual *This,
        IXpsOMBrush **opacityMaskBrush);

    HRESULT (STDMETHODCALLTYPE *SetOpacityMaskBrushLocal)(
        IXpsOMVisual *This,
        IXpsOMBrush *opacityMaskBrush);

    HRESULT (STDMETHODCALLTYPE *GetOpacityMaskBrushLookup)(
        IXpsOMVisual *This,
        LPWSTR *key);

    HRESULT (STDMETHODCALLTYPE *SetOpacityMaskBrushLookup)(
        IXpsOMVisual *This,
        LPCWSTR key);

    HRESULT (STDMETHODCALLTYPE *GetName)(
        IXpsOMVisual *This,
        LPWSTR *name);

    HRESULT (STDMETHODCALLTYPE *SetName)(
        IXpsOMVisual *This,
        LPCWSTR name);

    HRESULT (STDMETHODCALLTYPE *GetIsHyperlinkTarget)(
        IXpsOMVisual *This,
        BOOL *isHyperlink);

    HRESULT (STDMETHODCALLTYPE *SetIsHyperlinkTarget)(
        IXpsOMVisual *This,
        BOOL isHyperlink);

    HRESULT (STDMETHODCALLTYPE *GetHyperlinkNavigateUri)(
        IXpsOMVisual *This,
        IUri **hyperlinkUri);

    HRESULT (STDMETHODCALLTYPE *SetHyperlinkNavigateUri)(
        IXpsOMVisual *This,
        IUri *hyperlinkUri);

    HRESULT (STDMETHODCALLTYPE *GetLanguage)(
        IXpsOMVisual *This,
        LPWSTR *language);

    HRESULT (STDMETHODCALLTYPE *SetLanguage)(
        IXpsOMVisual *This,
        LPCWSTR language);

    END_INTERFACE
} IXpsOMVisualVtbl;

interface IXpsOMVisual {
    CONST_VTBL IXpsOMVisualVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMVisual_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMVisual_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMVisual_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMShareable methods ***/
#define IXpsOMVisual_GetOwner(This,owner) \
    ((This)->lpVtbl->GetOwner(This,owner))
#define IXpsOMVisual_GetType(This,type) \
    ((This)->lpVtbl->GetType(This,type))
/*** IXpsOMVisual methods ***/
#define IXpsOMVisual_GetTransform(This,matrixTransform) \
    ((This)->lpVtbl->GetTransform(This,matrixTransform))
#define IXpsOMVisual_GetTransformLocal(This,matrixTransform) \
    ((This)->lpVtbl->GetTransformLocal(This,matrixTransform))
#define IXpsOMVisual_SetTransformLocal(This,matrixTransform) \
    ((This)->lpVtbl->SetTransformLocal(This,matrixTransform))
#define IXpsOMVisual_GetTransformLookup(This,key) \
    ((This)->lpVtbl->GetTransformLookup(This,key))
#define IXpsOMVisual_SetTransformLookup(This,key) \
    ((This)->lpVtbl->SetTransformLookup(This,key))
#define IXpsOMVisual_GetClipGeometry(This,clipGeometry) \
    ((This)->lpVtbl->GetClipGeometry(This,clipGeometry))
#define IXpsOMVisual_GetClipGeometryLocal(This,clipGeometry) \
    ((This)->lpVtbl->GetClipGeometryLocal(This,clipGeometry))
#define IXpsOMVisual_SetClipGeometryLocal(This,clipGeometry) \
    ((This)->lpVtbl->SetClipGeometryLocal(This,clipGeometry))
#define IXpsOMVisual_GetClipGeometryLookup(This,key) \
    ((This)->lpVtbl->GetClipGeometryLookup(This,key))
#define IXpsOMVisual_SetClipGeometryLookup(This,key) \
    ((This)->lpVtbl->SetClipGeometryLookup(This,key))
#define IXpsOMVisual_GetOpacity(This,opacity) \
    ((This)->lpVtbl->GetOpacity(This,opacity))
#define IXpsOMVisual_SetOpacity(This,opacity) \
    ((This)->lpVtbl->SetOpacity(This,opacity))
#define IXpsOMVisual_GetOpacityMaskBrush(This,opacityMaskBrush) \
    ((This)->lpVtbl->GetOpacityMaskBrush(This,opacityMaskBrush))
#define IXpsOMVisual_GetOpacityMaskBrushLocal(This,opacityMaskBrush) \
    ((This)->lpVtbl->GetOpacityMaskBrushLocal(This,opacityMaskBrush))
#define IXpsOMVisual_SetOpacityMaskBrushLocal(This,opacityMaskBrush) \
    ((This)->lpVtbl->SetOpacityMaskBrushLocal(This,opacityMaskBrush))
#define IXpsOMVisual_GetOpacityMaskBrushLookup(This,key) \
    ((This)->lpVtbl->GetOpacityMaskBrushLookup(This,key))
#define IXpsOMVisual_SetOpacityMaskBrushLookup(This,key) \
    ((This)->lpVtbl->SetOpacityMaskBrushLookup(This,key))
#define IXpsOMVisual_GetName(This,name) \
    ((This)->lpVtbl->GetName(This,name))
#define IXpsOMVisual_SetName(This,name) \
    ((This)->lpVtbl->SetName(This,name))
#define IXpsOMVisual_GetIsHyperlinkTarget(This,isHyperlink) \
    ((This)->lpVtbl->GetIsHyperlinkTarget(This,isHyperlink))
#define IXpsOMVisual_SetIsHyperlinkTarget(This,isHyperlink) \
    ((This)->lpVtbl->SetIsHyperlinkTarget(This,isHyperlink))
#define IXpsOMVisual_GetHyperlinkNavigateUri(This,hyperlinkUri) \
    ((This)->lpVtbl->GetHyperlinkNavigateUri(This,hyperlinkUri))
#define IXpsOMVisual_SetHyperlinkNavigateUri(This,hyperlinkUri) \
    ((This)->lpVtbl->SetHyperlinkNavigateUri(This,hyperlinkUri))
#define IXpsOMVisual_GetLanguage(This,language) \
    ((This)->lpVtbl->GetLanguage(This,language))
#define IXpsOMVisual_SetLanguage(This,language) \
    ((This)->lpVtbl->SetLanguage(This,language))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMVisual_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMPart interface
 */
#ifndef __IXpsOMPart_INTERFACE_DEFINED__
#define __IXpsOMPart_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMPart;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMPartVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMPart *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMPart *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMPart *This);

    /*** IXpsOMPart methods ***/
    HRESULT (STDMETHODCALLTYPE *GetPartName)(
        IXpsOMPart *This,
        IOpcPartUri **partUri);

    HRESULT (STDMETHODCALLTYPE *SetPartName)(
        IXpsOMPart *This,
        IOpcPartUri *partUri);

    END_INTERFACE
} IXpsOMPartVtbl;

interface IXpsOMPart {
    CONST_VTBL IXpsOMPartVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMPart_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMPart_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMPart_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMPart methods ***/
#define IXpsOMPart_GetPartName(This,partUri) \
    ((This)->lpVtbl->GetPartName(This,partUri))
#define IXpsOMPart_SetPartName(This,partUri) \
    ((This)->lpVtbl->SetPartName(This,partUri))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMPart_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMGlyphsEditor interface
 */
#ifndef __IXpsOMGlyphsEditor_INTERFACE_DEFINED__
#define __IXpsOMGlyphsEditor_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMGlyphsEditor;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMGlyphsEditorVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMGlyphsEditor *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMGlyphsEditor *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMGlyphsEditor *This);

    /*** IXpsOMGlyphsEditor methods ***/
    HRESULT (STDMETHODCALLTYPE *ApplyEdits)(
        IXpsOMGlyphsEditor *This);

    HRESULT (STDMETHODCALLTYPE *GetUnicodeString)(
        IXpsOMGlyphsEditor *This,
        LPWSTR *unicodeString);

    HRESULT (STDMETHODCALLTYPE *SetUnicodeString)(
        IXpsOMGlyphsEditor *This,
        LPCWSTR unicodeString);

    HRESULT (STDMETHODCALLTYPE *GetGlyphIndexCount)(
        IXpsOMGlyphsEditor *This,
        UINT32 *indexCount);

    HRESULT (STDMETHODCALLTYPE *GetGlyphIndices)(
        IXpsOMGlyphsEditor *This,
        UINT32 *indexCount,
        XPS_GLYPH_INDEX *glyphIndices);

    HRESULT (STDMETHODCALLTYPE *SetGlyphIndices)(
        IXpsOMGlyphsEditor *This,
        UINT32 indexCount,
        const XPS_GLYPH_INDEX *glyphIndices);

    HRESULT (STDMETHODCALLTYPE *GetGlyphMappingCount)(
        IXpsOMGlyphsEditor *This,
        UINT32 *glyphMappingCount);

    HRESULT (STDMETHODCALLTYPE *GetGlyphMappings)(
        IXpsOMGlyphsEditor *This,
        UINT32 *glyphMappingCount,
        XPS_GLYPH_MAPPING *glyphMappings);

    HRESULT (STDMETHODCALLTYPE *SetGlyphMappings)(
        IXpsOMGlyphsEditor *This,
        UINT32 glyphMappingCount,
        const XPS_GLYPH_MAPPING *glyphMappings);

    HRESULT (STDMETHODCALLTYPE *GetProhibitedCaretStopCount)(
        IXpsOMGlyphsEditor *This,
        UINT32 *prohibitedCaretStopCount);

    HRESULT (STDMETHODCALLTYPE *GetProhibitedCaretStops)(
        IXpsOMGlyphsEditor *This,
        UINT32 *count,
        UINT32 *prohibitedCaretStops);

    HRESULT (STDMETHODCALLTYPE *SetProhibitedCaretStops)(
        IXpsOMGlyphsEditor *This,
        UINT32 count,
        const UINT32 *prohibitedCaretStops);

    HRESULT (STDMETHODCALLTYPE *GetBidiLevel)(
        IXpsOMGlyphsEditor *This,
        UINT32 *bidiLevel);

    HRESULT (STDMETHODCALLTYPE *SetBidiLevel)(
        IXpsOMGlyphsEditor *This,
        UINT32 bidiLevel);

    HRESULT (STDMETHODCALLTYPE *GetIsSideways)(
        IXpsOMGlyphsEditor *This,
        BOOL *isSideways);

    HRESULT (STDMETHODCALLTYPE *SetIsSideways)(
        IXpsOMGlyphsEditor *This,
        BOOL isSideways);

    HRESULT (STDMETHODCALLTYPE *GetDeviceFontName)(
        IXpsOMGlyphsEditor *This,
        LPWSTR *deviceFontName);

    HRESULT (STDMETHODCALLTYPE *SetDeviceFontName)(
        IXpsOMGlyphsEditor *This,
        LPCWSTR deviceFontName);

    END_INTERFACE
} IXpsOMGlyphsEditorVtbl;

interface IXpsOMGlyphsEditor {
    CONST_VTBL IXpsOMGlyphsEditorVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMGlyphsEditor_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMGlyphsEditor_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMGlyphsEditor_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMGlyphsEditor methods ***/
#define IXpsOMGlyphsEditor_ApplyEdits(This) \
    ((This)->lpVtbl->ApplyEdits(This))
#define IXpsOMGlyphsEditor_GetUnicodeString(This,unicodeString) \
    ((This)->lpVtbl->GetUnicodeString(This,unicodeString))
#define IXpsOMGlyphsEditor_SetUnicodeString(This,unicodeString) \
    ((This)->lpVtbl->SetUnicodeString(This,unicodeString))
#define IXpsOMGlyphsEditor_GetGlyphIndexCount(This,indexCount) \
    ((This)->lpVtbl->GetGlyphIndexCount(This,indexCount))
#define IXpsOMGlyphsEditor_GetGlyphIndices(This,indexCount,glyphIndices) \
    ((This)->lpVtbl->GetGlyphIndices(This,indexCount,glyphIndices))
#define IXpsOMGlyphsEditor_SetGlyphIndices(This,indexCount,glyphIndices) \
    ((This)->lpVtbl->SetGlyphIndices(This,indexCount,glyphIndices))
#define IXpsOMGlyphsEditor_GetGlyphMappingCount(This,glyphMappingCount) \
    ((This)->lpVtbl->GetGlyphMappingCount(This,glyphMappingCount))
#define IXpsOMGlyphsEditor_GetGlyphMappings(This,glyphMappingCount,glyphMappings) \
    ((This)->lpVtbl->GetGlyphMappings(This,glyphMappingCount,glyphMappings))
#define IXpsOMGlyphsEditor_SetGlyphMappings(This,glyphMappingCount,glyphMappings) \
    ((This)->lpVtbl->SetGlyphMappings(This,glyphMappingCount,glyphMappings))
#define IXpsOMGlyphsEditor_GetProhibitedCaretStopCount(This,prohibitedCaretStopCount) \
    ((This)->lpVtbl->GetProhibitedCaretStopCount(This,prohibitedCaretStopCount))
#define IXpsOMGlyphsEditor_GetProhibitedCaretStops(This,count,prohibitedCaretStops) \
    ((This)->lpVtbl->GetProhibitedCaretStops(This,count,prohibitedCaretStops))
#define IXpsOMGlyphsEditor_SetProhibitedCaretStops(This,count,prohibitedCaretStops) \
    ((This)->lpVtbl->SetProhibitedCaretStops(This,count,prohibitedCaretStops))
#define IXpsOMGlyphsEditor_GetBidiLevel(This,bidiLevel) \
    ((This)->lpVtbl->GetBidiLevel(This,bidiLevel))
#define IXpsOMGlyphsEditor_SetBidiLevel(This,bidiLevel) \
    ((This)->lpVtbl->SetBidiLevel(This,bidiLevel))
#define IXpsOMGlyphsEditor_GetIsSideways(This,isSideways) \
    ((This)->lpVtbl->GetIsSideways(This,isSideways))
#define IXpsOMGlyphsEditor_SetIsSideways(This,isSideways) \
    ((This)->lpVtbl->SetIsSideways(This,isSideways))
#define IXpsOMGlyphsEditor_GetDeviceFontName(This,deviceFontName) \
    ((This)->lpVtbl->GetDeviceFontName(This,deviceFontName))
#define IXpsOMGlyphsEditor_SetDeviceFontName(This,deviceFontName) \
    ((This)->lpVtbl->SetDeviceFontName(This,deviceFontName))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMGlyphsEditor_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMGlyphs interface
 */
#ifndef __IXpsOMGlyphs_INTERFACE_DEFINED__
#define __IXpsOMGlyphs_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMGlyphs;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMGlyphsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMGlyphs *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMGlyphs *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMGlyphs *This);

    /*** IXpsOMShareable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetOwner)(
        IXpsOMGlyphs *This,
        IUnknown **owner);

    HRESULT (STDMETHODCALLTYPE *GetType)(
        IXpsOMGlyphs *This,
        XPS_OBJECT_TYPE *type);

    /*** IXpsOMVisual methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTransform)(
        IXpsOMGlyphs *This,
        IXpsOMMatrixTransform **matrixTransform);

    HRESULT (STDMETHODCALLTYPE *GetTransformLocal)(
        IXpsOMGlyphs *This,
        IXpsOMMatrixTransform **matrixTransform);

    HRESULT (STDMETHODCALLTYPE *SetTransformLocal)(
        IXpsOMGlyphs *This,
        IXpsOMMatrixTransform *matrixTransform);

    HRESULT (STDMETHODCALLTYPE *GetTransformLookup)(
        IXpsOMGlyphs *This,
        LPWSTR *key);

    HRESULT (STDMETHODCALLTYPE *SetTransformLookup)(
        IXpsOMGlyphs *This,
        LPCWSTR key);

    HRESULT (STDMETHODCALLTYPE *GetClipGeometry)(
        IXpsOMGlyphs *This,
        IXpsOMGeometry **clipGeometry);

    HRESULT (STDMETHODCALLTYPE *GetClipGeometryLocal)(
        IXpsOMGlyphs *This,
        IXpsOMGeometry **clipGeometry);

    HRESULT (STDMETHODCALLTYPE *SetClipGeometryLocal)(
        IXpsOMGlyphs *This,
        IXpsOMGeometry *clipGeometry);

    HRESULT (STDMETHODCALLTYPE *GetClipGeometryLookup)(
        IXpsOMGlyphs *This,
        LPWSTR *key);

    HRESULT (STDMETHODCALLTYPE *SetClipGeometryLookup)(
        IXpsOMGlyphs *This,
        LPCWSTR key);

    HRESULT (STDMETHODCALLTYPE *GetOpacity)(
        IXpsOMGlyphs *This,
        FLOAT *opacity);

    HRESULT (STDMETHODCALLTYPE *SetOpacity)(
        IXpsOMGlyphs *This,
        FLOAT opacity);

    HRESULT (STDMETHODCALLTYPE *GetOpacityMaskBrush)(
        IXpsOMGlyphs *This,
        IXpsOMBrush **opacityMaskBrush);

    HRESULT (STDMETHODCALLTYPE *GetOpacityMaskBrushLocal)(
        IXpsOMGlyphs *This,
        IXpsOMBrush **opacityMaskBrush);

    HRESULT (STDMETHODCALLTYPE *SetOpacityMaskBrushLocal)(
        IXpsOMGlyphs *This,
        IXpsOMBrush *opacityMaskBrush);

    HRESULT (STDMETHODCALLTYPE *GetOpacityMaskBrushLookup)(
        IXpsOMGlyphs *This,
        LPWSTR *key);

    HRESULT (STDMETHODCALLTYPE *SetOpacityMaskBrushLookup)(
        IXpsOMGlyphs *This,
        LPCWSTR key);

    HRESULT (STDMETHODCALLTYPE *GetName)(
        IXpsOMGlyphs *This,
        LPWSTR *name);

    HRESULT (STDMETHODCALLTYPE *SetName)(
        IXpsOMGlyphs *This,
        LPCWSTR name);

    HRESULT (STDMETHODCALLTYPE *GetIsHyperlinkTarget)(
        IXpsOMGlyphs *This,
        BOOL *isHyperlink);

    HRESULT (STDMETHODCALLTYPE *SetIsHyperlinkTarget)(
        IXpsOMGlyphs *This,
        BOOL isHyperlink);

    HRESULT (STDMETHODCALLTYPE *GetHyperlinkNavigateUri)(
        IXpsOMGlyphs *This,
        IUri **hyperlinkUri);

    HRESULT (STDMETHODCALLTYPE *SetHyperlinkNavigateUri)(
        IXpsOMGlyphs *This,
        IUri *hyperlinkUri);

    HRESULT (STDMETHODCALLTYPE *GetLanguage)(
        IXpsOMGlyphs *This,
        LPWSTR *language);

    HRESULT (STDMETHODCALLTYPE *SetLanguage)(
        IXpsOMGlyphs *This,
        LPCWSTR language);

    /*** IXpsOMGlyphs methods ***/
    HRESULT (STDMETHODCALLTYPE *GetUnicodeString)(
        IXpsOMGlyphs *This,
        LPWSTR *unicodeString);

    HRESULT (STDMETHODCALLTYPE *GetGlyphIndexCount)(
        IXpsOMGlyphs *This,
        UINT32 *indexCount);

    HRESULT (STDMETHODCALLTYPE *GetGlyphIndices)(
        IXpsOMGlyphs *This,
        UINT32 *indexCount,
        XPS_GLYPH_INDEX *glyphIndices);

    HRESULT (STDMETHODCALLTYPE *GetGlyphMappingCount)(
        IXpsOMGlyphs *This,
        UINT32 *glyphMappingCount);

    HRESULT (STDMETHODCALLTYPE *GetGlyphMappings)(
        IXpsOMGlyphs *This,
        UINT32 *glyphMappingCount,
        XPS_GLYPH_MAPPING *glyphMappings);

    HRESULT (STDMETHODCALLTYPE *GetProhibitedCaretStopCount)(
        IXpsOMGlyphs *This,
        UINT32 *prohibitedCaretStopCount);

    HRESULT (STDMETHODCALLTYPE *GetProhibitedCaretStops)(
        IXpsOMGlyphs *This,
        UINT32 *prohibitedCaretStopCount,
        UINT32 *prohibitedCaretStops);

    HRESULT (STDMETHODCALLTYPE *GetBidiLevel)(
        IXpsOMGlyphs *This,
        UINT32 *bidiLevel);

    HRESULT (STDMETHODCALLTYPE *GetIsSideways)(
        IXpsOMGlyphs *This,
        BOOL *isSideways);

    HRESULT (STDMETHODCALLTYPE *GetDeviceFontName)(
        IXpsOMGlyphs *This,
        LPWSTR *deviceFontName);

    HRESULT (STDMETHODCALLTYPE *GetStyleSimulations)(
        IXpsOMGlyphs *This,
        XPS_STYLE_SIMULATION *styleSimulations);

    HRESULT (STDMETHODCALLTYPE *SetStyleSimulations)(
        IXpsOMGlyphs *This,
        XPS_STYLE_SIMULATION styleSimulations);

    HRESULT (STDMETHODCALLTYPE *GetOrigin)(
        IXpsOMGlyphs *This,
        XPS_POINT *origin);

    HRESULT (STDMETHODCALLTYPE *SetOrigin)(
        IXpsOMGlyphs *This,
        const XPS_POINT *origin);

    HRESULT (STDMETHODCALLTYPE *GetFontRenderingEmSize)(
        IXpsOMGlyphs *This,
        FLOAT *fontRenderingEmSize);

    HRESULT (STDMETHODCALLTYPE *SetFontRenderingEmSize)(
        IXpsOMGlyphs *This,
        FLOAT fontRenderingEmSize);

    HRESULT (STDMETHODCALLTYPE *GetFontResource)(
        IXpsOMGlyphs *This,
        IXpsOMFontResource **fontResource);

    HRESULT (STDMETHODCALLTYPE *SetFontResource)(
        IXpsOMGlyphs *This,
        IXpsOMFontResource *fontResource);

    HRESULT (STDMETHODCALLTYPE *GetFontFaceIndex)(
        IXpsOMGlyphs *This,
        SHORT *fontFaceIndex);

    HRESULT (STDMETHODCALLTYPE *SetFontFaceIndex)(
        IXpsOMGlyphs *This,
        SHORT fontFaceIndex);

    HRESULT (STDMETHODCALLTYPE *GetFillBrush)(
        IXpsOMGlyphs *This,
        IXpsOMBrush **fillBrush);

    HRESULT (STDMETHODCALLTYPE *GetFillBrushLocal)(
        IXpsOMGlyphs *This,
        IXpsOMBrush **fillBrush);

    HRESULT (STDMETHODCALLTYPE *SetFillBrushLocal)(
        IXpsOMGlyphs *This,
        IXpsOMBrush *fillBrush);

    HRESULT (STDMETHODCALLTYPE *GetFillBrushLookup)(
        IXpsOMGlyphs *This,
        LPWSTR *key);

    HRESULT (STDMETHODCALLTYPE *SetFillBrushLookup)(
        IXpsOMGlyphs *This,
        LPCWSTR key);

    HRESULT (STDMETHODCALLTYPE *GetGlyphsEditor)(
        IXpsOMGlyphs *This,
        IXpsOMGlyphsEditor **editor);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IXpsOMGlyphs *This,
        IXpsOMGlyphs **glyphs);

    END_INTERFACE
} IXpsOMGlyphsVtbl;

interface IXpsOMGlyphs {
    CONST_VTBL IXpsOMGlyphsVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMGlyphs_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMGlyphs_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMGlyphs_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMShareable methods ***/
#define IXpsOMGlyphs_GetOwner(This,owner) \
    ((This)->lpVtbl->GetOwner(This,owner))
#define IXpsOMGlyphs_GetType(This,type) \
    ((This)->lpVtbl->GetType(This,type))
/*** IXpsOMVisual methods ***/
#define IXpsOMGlyphs_GetTransform(This,matrixTransform) \
    ((This)->lpVtbl->GetTransform(This,matrixTransform))
#define IXpsOMGlyphs_GetTransformLocal(This,matrixTransform) \
    ((This)->lpVtbl->GetTransformLocal(This,matrixTransform))
#define IXpsOMGlyphs_SetTransformLocal(This,matrixTransform) \
    ((This)->lpVtbl->SetTransformLocal(This,matrixTransform))
#define IXpsOMGlyphs_GetTransformLookup(This,key) \
    ((This)->lpVtbl->GetTransformLookup(This,key))
#define IXpsOMGlyphs_SetTransformLookup(This,key) \
    ((This)->lpVtbl->SetTransformLookup(This,key))
#define IXpsOMGlyphs_GetClipGeometry(This,clipGeometry) \
    ((This)->lpVtbl->GetClipGeometry(This,clipGeometry))
#define IXpsOMGlyphs_GetClipGeometryLocal(This,clipGeometry) \
    ((This)->lpVtbl->GetClipGeometryLocal(This,clipGeometry))
#define IXpsOMGlyphs_SetClipGeometryLocal(This,clipGeometry) \
    ((This)->lpVtbl->SetClipGeometryLocal(This,clipGeometry))
#define IXpsOMGlyphs_GetClipGeometryLookup(This,key) \
    ((This)->lpVtbl->GetClipGeometryLookup(This,key))
#define IXpsOMGlyphs_SetClipGeometryLookup(This,key) \
    ((This)->lpVtbl->SetClipGeometryLookup(This,key))
#define IXpsOMGlyphs_GetOpacity(This,opacity) \
    ((This)->lpVtbl->GetOpacity(This,opacity))
#define IXpsOMGlyphs_SetOpacity(This,opacity) \
    ((This)->lpVtbl->SetOpacity(This,opacity))
#define IXpsOMGlyphs_GetOpacityMaskBrush(This,opacityMaskBrush) \
    ((This)->lpVtbl->GetOpacityMaskBrush(This,opacityMaskBrush))
#define IXpsOMGlyphs_GetOpacityMaskBrushLocal(This,opacityMaskBrush) \
    ((This)->lpVtbl->GetOpacityMaskBrushLocal(This,opacityMaskBrush))
#define IXpsOMGlyphs_SetOpacityMaskBrushLocal(This,opacityMaskBrush) \
    ((This)->lpVtbl->SetOpacityMaskBrushLocal(This,opacityMaskBrush))
#define IXpsOMGlyphs_GetOpacityMaskBrushLookup(This,key) \
    ((This)->lpVtbl->GetOpacityMaskBrushLookup(This,key))
#define IXpsOMGlyphs_SetOpacityMaskBrushLookup(This,key) \
    ((This)->lpVtbl->SetOpacityMaskBrushLookup(This,key))
#define IXpsOMGlyphs_GetName(This,name) \
    ((This)->lpVtbl->GetName(This,name))
#define IXpsOMGlyphs_SetName(This,name) \
    ((This)->lpVtbl->SetName(This,name))
#define IXpsOMGlyphs_GetIsHyperlinkTarget(This,isHyperlink) \
    ((This)->lpVtbl->GetIsHyperlinkTarget(This,isHyperlink))
#define IXpsOMGlyphs_SetIsHyperlinkTarget(This,isHyperlink) \
    ((This)->lpVtbl->SetIsHyperlinkTarget(This,isHyperlink))
#define IXpsOMGlyphs_GetHyperlinkNavigateUri(This,hyperlinkUri) \
    ((This)->lpVtbl->GetHyperlinkNavigateUri(This,hyperlinkUri))
#define IXpsOMGlyphs_SetHyperlinkNavigateUri(This,hyperlinkUri) \
    ((This)->lpVtbl->SetHyperlinkNavigateUri(This,hyperlinkUri))
#define IXpsOMGlyphs_GetLanguage(This,language) \
    ((This)->lpVtbl->GetLanguage(This,language))
#define IXpsOMGlyphs_SetLanguage(This,language) \
    ((This)->lpVtbl->SetLanguage(This,language))
/*** IXpsOMGlyphs methods ***/
#define IXpsOMGlyphs_GetUnicodeString(This,unicodeString) \
    ((This)->lpVtbl->GetUnicodeString(This,unicodeString))
#define IXpsOMGlyphs_GetGlyphIndexCount(This,indexCount) \
    ((This)->lpVtbl->GetGlyphIndexCount(This,indexCount))
#define IXpsOMGlyphs_GetGlyphIndices(This,indexCount,glyphIndices) \
    ((This)->lpVtbl->GetGlyphIndices(This,indexCount,glyphIndices))
#define IXpsOMGlyphs_GetGlyphMappingCount(This,glyphMappingCount) \
    ((This)->lpVtbl->GetGlyphMappingCount(This,glyphMappingCount))
#define IXpsOMGlyphs_GetGlyphMappings(This,glyphMappingCount,glyphMappings) \
    ((This)->lpVtbl->GetGlyphMappings(This,glyphMappingCount,glyphMappings))
#define IXpsOMGlyphs_GetProhibitedCaretStopCount(This,prohibitedCaretStopCount) \
    ((This)->lpVtbl->GetProhibitedCaretStopCount(This,prohibitedCaretStopCount))
#define IXpsOMGlyphs_GetProhibitedCaretStops(This,prohibitedCaretStopCount,prohibitedCaretStops) \
    ((This)->lpVtbl->GetProhibitedCaretStops(This,prohibitedCaretStopCount,prohibitedCaretStops))
#define IXpsOMGlyphs_GetBidiLevel(This,bidiLevel) \
    ((This)->lpVtbl->GetBidiLevel(This,bidiLevel))
#define IXpsOMGlyphs_GetIsSideways(This,isSideways) \
    ((This)->lpVtbl->GetIsSideways(This,isSideways))
#define IXpsOMGlyphs_GetDeviceFontName(This,deviceFontName) \
    ((This)->lpVtbl->GetDeviceFontName(This,deviceFontName))
#define IXpsOMGlyphs_GetStyleSimulations(This,styleSimulations) \
    ((This)->lpVtbl->GetStyleSimulations(This,styleSimulations))
#define IXpsOMGlyphs_SetStyleSimulations(This,styleSimulations) \
    ((This)->lpVtbl->SetStyleSimulations(This,styleSimulations))
#define IXpsOMGlyphs_GetOrigin(This,origin) \
    ((This)->lpVtbl->GetOrigin(This,origin))
#define IXpsOMGlyphs_SetOrigin(This,origin) \
    ((This)->lpVtbl->SetOrigin(This,origin))
#define IXpsOMGlyphs_GetFontRenderingEmSize(This,fontRenderingEmSize) \
    ((This)->lpVtbl->GetFontRenderingEmSize(This,fontRenderingEmSize))
#define IXpsOMGlyphs_SetFontRenderingEmSize(This,fontRenderingEmSize) \
    ((This)->lpVtbl->SetFontRenderingEmSize(This,fontRenderingEmSize))
#define IXpsOMGlyphs_GetFontResource(This,fontResource) \
    ((This)->lpVtbl->GetFontResource(This,fontResource))
#define IXpsOMGlyphs_SetFontResource(This,fontResource) \
    ((This)->lpVtbl->SetFontResource(This,fontResource))
#define IXpsOMGlyphs_GetFontFaceIndex(This,fontFaceIndex) \
    ((This)->lpVtbl->GetFontFaceIndex(This,fontFaceIndex))
#define IXpsOMGlyphs_SetFontFaceIndex(This,fontFaceIndex) \
    ((This)->lpVtbl->SetFontFaceIndex(This,fontFaceIndex))
#define IXpsOMGlyphs_GetFillBrush(This,fillBrush) \
    ((This)->lpVtbl->GetFillBrush(This,fillBrush))
#define IXpsOMGlyphs_GetFillBrushLocal(This,fillBrush) \
    ((This)->lpVtbl->GetFillBrushLocal(This,fillBrush))
#define IXpsOMGlyphs_SetFillBrushLocal(This,fillBrush) \
    ((This)->lpVtbl->SetFillBrushLocal(This,fillBrush))
#define IXpsOMGlyphs_GetFillBrushLookup(This,key) \
    ((This)->lpVtbl->GetFillBrushLookup(This,key))
#define IXpsOMGlyphs_SetFillBrushLookup(This,key) \
    ((This)->lpVtbl->SetFillBrushLookup(This,key))
#define IXpsOMGlyphs_GetGlyphsEditor(This,editor) \
    ((This)->lpVtbl->GetGlyphsEditor(This,editor))
#define IXpsOMGlyphs_Clone(This,glyphs) \
    ((This)->lpVtbl->Clone(This,glyphs))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMGlyphs_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMDashCollection interface
 */
#ifndef __IXpsOMDashCollection_INTERFACE_DEFINED__
#define __IXpsOMDashCollection_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMDashCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMDashCollectionVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMDashCollection *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMDashCollection *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMDashCollection *This);

    /*** IXpsOMDashCollection methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IXpsOMDashCollection *This,
        UINT32 *count);

    HRESULT (STDMETHODCALLTYPE *GetAt)(
        IXpsOMDashCollection *This,
        UINT32 index,
        XPS_DASH *dash);

    HRESULT (STDMETHODCALLTYPE *InsertAt)(
        IXpsOMDashCollection *This,
        UINT32 index,
        const XPS_DASH *dash);

    HRESULT (STDMETHODCALLTYPE *RemoveAt)(
        IXpsOMDashCollection *This,
        UINT32 index);

    HRESULT (STDMETHODCALLTYPE *SetAt)(
        IXpsOMDashCollection *This,
        UINT32 index,
        const XPS_DASH *dash);

    HRESULT (STDMETHODCALLTYPE *Append)(
        IXpsOMDashCollection *This,
        const XPS_DASH *dash);

    END_INTERFACE
} IXpsOMDashCollectionVtbl;

interface IXpsOMDashCollection {
    CONST_VTBL IXpsOMDashCollectionVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMDashCollection_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMDashCollection_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMDashCollection_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMDashCollection methods ***/
#define IXpsOMDashCollection_GetCount(This,count) \
    ((This)->lpVtbl->GetCount(This,count))
#define IXpsOMDashCollection_GetAt(This,index,dash) \
    ((This)->lpVtbl->GetAt(This,index,dash))
#define IXpsOMDashCollection_InsertAt(This,index,dash) \
    ((This)->lpVtbl->InsertAt(This,index,dash))
#define IXpsOMDashCollection_RemoveAt(This,index) \
    ((This)->lpVtbl->RemoveAt(This,index))
#define IXpsOMDashCollection_SetAt(This,index,dash) \
    ((This)->lpVtbl->SetAt(This,index,dash))
#define IXpsOMDashCollection_Append(This,dash) \
    ((This)->lpVtbl->Append(This,dash))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMDashCollection_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMMatrixTransform interface
 */
#ifndef __IXpsOMMatrixTransform_INTERFACE_DEFINED__
#define __IXpsOMMatrixTransform_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMMatrixTransform;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMMatrixTransformVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMMatrixTransform *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMMatrixTransform *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMMatrixTransform *This);

    /*** IXpsOMShareable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetOwner)(
        IXpsOMMatrixTransform *This,
        IUnknown **owner);

    HRESULT (STDMETHODCALLTYPE *GetType)(
        IXpsOMMatrixTransform *This,
        XPS_OBJECT_TYPE *type);

    /*** IXpsOMMatrixTransform methods ***/
    HRESULT (STDMETHODCALLTYPE *GetMatrix)(
        IXpsOMMatrixTransform *This,
        XPS_MATRIX *matrix);

    HRESULT (STDMETHODCALLTYPE *SetMatrix)(
        IXpsOMMatrixTransform *This,
        const XPS_MATRIX *matrix);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IXpsOMMatrixTransform *This,
        IXpsOMMatrixTransform **matrixTransform);

    END_INTERFACE
} IXpsOMMatrixTransformVtbl;

interface IXpsOMMatrixTransform {
    CONST_VTBL IXpsOMMatrixTransformVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMMatrixTransform_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMMatrixTransform_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMMatrixTransform_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMShareable methods ***/
#define IXpsOMMatrixTransform_GetOwner(This,owner) \
    ((This)->lpVtbl->GetOwner(This,owner))
#define IXpsOMMatrixTransform_GetType(This,type) \
    ((This)->lpVtbl->GetType(This,type))
/*** IXpsOMMatrixTransform methods ***/
#define IXpsOMMatrixTransform_GetMatrix(This,matrix) \
    ((This)->lpVtbl->GetMatrix(This,matrix))
#define IXpsOMMatrixTransform_SetMatrix(This,matrix) \
    ((This)->lpVtbl->SetMatrix(This,matrix))
#define IXpsOMMatrixTransform_Clone(This,matrixTransform) \
    ((This)->lpVtbl->Clone(This,matrixTransform))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMMatrixTransform_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMGeometry interface
 */
#ifndef __IXpsOMGeometry_INTERFACE_DEFINED__
#define __IXpsOMGeometry_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMGeometry;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMGeometryVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMGeometry *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMGeometry *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMGeometry *This);

    /*** IXpsOMShareable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetOwner)(
        IXpsOMGeometry *This,
        IUnknown **owner);

    HRESULT (STDMETHODCALLTYPE *GetType)(
        IXpsOMGeometry *This,
        XPS_OBJECT_TYPE *type);

    /*** IXpsOMGeometry methods ***/
    HRESULT (STDMETHODCALLTYPE *GetFigures)(
        IXpsOMGeometry *This,
        IXpsOMGeometryFigureCollection **figures);

    HRESULT (STDMETHODCALLTYPE *GetFillRule)(
        IXpsOMGeometry *This,
        XPS_FILL_RULE *fillRule);

    HRESULT (STDMETHODCALLTYPE *SetFillRule)(
        IXpsOMGeometry *This,
        XPS_FILL_RULE fillRule);

    HRESULT (STDMETHODCALLTYPE *GetTransform)(
        IXpsOMGeometry *This,
        IXpsOMMatrixTransform **transform);

    HRESULT (STDMETHODCALLTYPE *GetTransformLocal)(
        IXpsOMGeometry *This,
        IXpsOMMatrixTransform **transform);

    HRESULT (STDMETHODCALLTYPE *SetTransformLocal)(
        IXpsOMGeometry *This,
        IXpsOMMatrixTransform *transform);

    HRESULT (STDMETHODCALLTYPE *GetTransformLookup)(
        IXpsOMGeometry *This,
        LPWSTR *lookup);

    HRESULT (STDMETHODCALLTYPE *SetTransformLookup)(
        IXpsOMGeometry *This,
        LPCWSTR lookup);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IXpsOMGeometry *This,
        IXpsOMGeometry **geometry);

    END_INTERFACE
} IXpsOMGeometryVtbl;

interface IXpsOMGeometry {
    CONST_VTBL IXpsOMGeometryVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMGeometry_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMGeometry_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMGeometry_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMShareable methods ***/
#define IXpsOMGeometry_GetOwner(This,owner) \
    ((This)->lpVtbl->GetOwner(This,owner))
#define IXpsOMGeometry_GetType(This,type) \
    ((This)->lpVtbl->GetType(This,type))
/*** IXpsOMGeometry methods ***/
#define IXpsOMGeometry_GetFigures(This,figures) \
    ((This)->lpVtbl->GetFigures(This,figures))
#define IXpsOMGeometry_GetFillRule(This,fillRule) \
    ((This)->lpVtbl->GetFillRule(This,fillRule))
#define IXpsOMGeometry_SetFillRule(This,fillRule) \
    ((This)->lpVtbl->SetFillRule(This,fillRule))
#define IXpsOMGeometry_GetTransform(This,transform) \
    ((This)->lpVtbl->GetTransform(This,transform))
#define IXpsOMGeometry_GetTransformLocal(This,transform) \
    ((This)->lpVtbl->GetTransformLocal(This,transform))
#define IXpsOMGeometry_SetTransformLocal(This,transform) \
    ((This)->lpVtbl->SetTransformLocal(This,transform))
#define IXpsOMGeometry_GetTransformLookup(This,lookup) \
    ((This)->lpVtbl->GetTransformLookup(This,lookup))
#define IXpsOMGeometry_SetTransformLookup(This,lookup) \
    ((This)->lpVtbl->SetTransformLookup(This,lookup))
#define IXpsOMGeometry_Clone(This,geometry) \
    ((This)->lpVtbl->Clone(This,geometry))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMGeometry_INTERFACE_DEFINED__ */
/*****************************************************************************
 * IXpsOMGeometryFigure interface
 */
#ifndef __IXpsOMGeometryFigure_INTERFACE_DEFINED__
#define __IXpsOMGeometryFigure_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMGeometryFigure;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMGeometryFigureVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMGeometryFigure *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMGeometryFigure *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMGeometryFigure *This);

    /*** IXpsOMGeometryFigure methods ***/
    HRESULT (STDMETHODCALLTYPE *GetOwner)(
        IXpsOMGeometryFigure *This,
        IXpsOMGeometry **owner);

    HRESULT (STDMETHODCALLTYPE *GetSegmentData)(
        IXpsOMGeometryFigure *This,
        UINT32 *dataCount,
        FLOAT *segmentData);

    HRESULT (STDMETHODCALLTYPE *GetSegmentTypes)(
        IXpsOMGeometryFigure *This,
        UINT32 *segmentCount,
        XPS_SEGMENT_TYPE *segmentTypes);

    HRESULT (STDMETHODCALLTYPE *GetSegmentStrokes)(
        IXpsOMGeometryFigure *This,
        UINT32 *segmentCount,
        BOOL *segmentStrokes);

    HRESULT (STDMETHODCALLTYPE *SetSegments)(
        IXpsOMGeometryFigure *This,
        UINT32 segmentCount,
        UINT32 segmentDataCount,
        const XPS_SEGMENT_TYPE *segmentTypes,
        const FLOAT *segmentData,
        const BOOL *segmentStrokes);

    HRESULT (STDMETHODCALLTYPE *GetStartPoint)(
        IXpsOMGeometryFigure *This,
        XPS_POINT *startPoint);

    HRESULT (STDMETHODCALLTYPE *SetStartPoint)(
        IXpsOMGeometryFigure *This,
        const XPS_POINT *startPoint);

    HRESULT (STDMETHODCALLTYPE *GetIsClosed)(
        IXpsOMGeometryFigure *This,
        BOOL *isClosed);

    HRESULT (STDMETHODCALLTYPE *SetIsClosed)(
        IXpsOMGeometryFigure *This,
        BOOL isClosed);

    HRESULT (STDMETHODCALLTYPE *GetIsFilled)(
        IXpsOMGeometryFigure *This,
        BOOL *isFilled);

    HRESULT (STDMETHODCALLTYPE *SetIsFilled)(
        IXpsOMGeometryFigure *This,
        BOOL isFilled);

    HRESULT (STDMETHODCALLTYPE *GetSegmentCount)(
        IXpsOMGeometryFigure *This,
        UINT32 *segmentCount);

    HRESULT (STDMETHODCALLTYPE *GetSegmentDataCount)(
        IXpsOMGeometryFigure *This,
        UINT32 *segmentDataCount);

    HRESULT (STDMETHODCALLTYPE *GetSegmentStrokePattern)(
        IXpsOMGeometryFigure *This,
        XPS_SEGMENT_STROKE_PATTERN *segmentStrokePattern);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IXpsOMGeometryFigure *This,
        IXpsOMGeometryFigure **geometryFigure);

    END_INTERFACE
} IXpsOMGeometryFigureVtbl;

interface IXpsOMGeometryFigure {
    CONST_VTBL IXpsOMGeometryFigureVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMGeometryFigure_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMGeometryFigure_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMGeometryFigure_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMGeometryFigure methods ***/
#define IXpsOMGeometryFigure_GetOwner(This,owner) \
    ((This)->lpVtbl->GetOwner(This,owner))
#define IXpsOMGeometryFigure_GetSegmentData(This,dataCount,segmentData) \
    ((This)->lpVtbl->GetSegmentData(This,dataCount,segmentData))
#define IXpsOMGeometryFigure_GetSegmentTypes(This,segmentCount,segmentTypes) \
    ((This)->lpVtbl->GetSegmentTypes(This,segmentCount,segmentTypes))
#define IXpsOMGeometryFigure_GetSegmentStrokes(This,segmentCount,segmentStrokes) \
    ((This)->lpVtbl->GetSegmentStrokes(This,segmentCount,segmentStrokes))
#define IXpsOMGeometryFigure_SetSegments(This,segmentCount,segmentDataCount,segmentTypes,segmentData,segmentStrokes) \
    ((This)->lpVtbl->SetSegments(This,segmentCount,segmentDataCount,segmentTypes,segmentData,segmentStrokes))
#define IXpsOMGeometryFigure_GetStartPoint(This,startPoint) \
    ((This)->lpVtbl->GetStartPoint(This,startPoint))
#define IXpsOMGeometryFigure_SetStartPoint(This,startPoint) \
    ((This)->lpVtbl->SetStartPoint(This,startPoint))
#define IXpsOMGeometryFigure_GetIsClosed(This,isClosed) \
    ((This)->lpVtbl->GetIsClosed(This,isClosed))
#define IXpsOMGeometryFigure_SetIsClosed(This,isClosed) \
    ((This)->lpVtbl->SetIsClosed(This,isClosed))
#define IXpsOMGeometryFigure_GetIsFilled(This,isFilled) \
    ((This)->lpVtbl->GetIsFilled(This,isFilled))
#define IXpsOMGeometryFigure_SetIsFilled(This,isFilled) \
    ((This)->lpVtbl->SetIsFilled(This,isFilled))
#define IXpsOMGeometryFigure_GetSegmentCount(This,segmentCount) \
    ((This)->lpVtbl->GetSegmentCount(This,segmentCount))
#define IXpsOMGeometryFigure_GetSegmentDataCount(This,segmentDataCount) \
    ((This)->lpVtbl->GetSegmentDataCount(This,segmentDataCount))
#define IXpsOMGeometryFigure_GetSegmentStrokePattern(This,segmentStrokePattern) \
    ((This)->lpVtbl->GetSegmentStrokePattern(This,segmentStrokePattern))
#define IXpsOMGeometryFigure_Clone(This,geometryFigure) \
    ((This)->lpVtbl->Clone(This,geometryFigure))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMGeometryFigure_INTERFACE_DEFINED__ */
/*****************************************************************************
 * IXpsOMGeometryFigureCollection interface
 */
#ifndef __IXpsOMGeometryFigureCollection_INTERFACE_DEFINED__
#define __IXpsOMGeometryFigureCollection_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMGeometryFigureCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMGeometryFigureCollectionVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMGeometryFigureCollection *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMGeometryFigureCollection *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMGeometryFigureCollection *This);

    /*** IXpsOMGeometryFigureCollection methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IXpsOMGeometryFigureCollection *This,
        UINT32 *count);

    HRESULT (STDMETHODCALLTYPE *GetAt)(
        IXpsOMGeometryFigureCollection *This,
        UINT32 index,
        IXpsOMGeometryFigure **geometryFigure);

    HRESULT (STDMETHODCALLTYPE *InsertAt)(
        IXpsOMGeometryFigureCollection *This,
        UINT32 index,
        IXpsOMGeometryFigure *geometryFigure);

    HRESULT (STDMETHODCALLTYPE *RemoveAt)(
        IXpsOMGeometryFigureCollection *This,
        UINT32 index);

    HRESULT (STDMETHODCALLTYPE *SetAt)(
        IXpsOMGeometryFigureCollection *This,
        UINT32 index,
        IXpsOMGeometryFigure *geometryFigure);

    HRESULT (STDMETHODCALLTYPE *Append)(
        IXpsOMGeometryFigureCollection *This,
        IXpsOMGeometryFigure *geometryFigure);

    END_INTERFACE
} IXpsOMGeometryFigureCollectionVtbl;

interface IXpsOMGeometryFigureCollection {
    CONST_VTBL IXpsOMGeometryFigureCollectionVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMGeometryFigureCollection_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMGeometryFigureCollection_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMGeometryFigureCollection_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMGeometryFigureCollection methods ***/
#define IXpsOMGeometryFigureCollection_GetCount(This,count) \
    ((This)->lpVtbl->GetCount(This,count))
#define IXpsOMGeometryFigureCollection_GetAt(This,index,geometryFigure) \
    ((This)->lpVtbl->GetAt(This,index,geometryFigure))
#define IXpsOMGeometryFigureCollection_InsertAt(This,index,geometryFigure) \
    ((This)->lpVtbl->InsertAt(This,index,geometryFigure))
#define IXpsOMGeometryFigureCollection_RemoveAt(This,index) \
    ((This)->lpVtbl->RemoveAt(This,index))
#define IXpsOMGeometryFigureCollection_SetAt(This,index,geometryFigure) \
    ((This)->lpVtbl->SetAt(This,index,geometryFigure))
#define IXpsOMGeometryFigureCollection_Append(This,geometryFigure) \
    ((This)->lpVtbl->Append(This,geometryFigure))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMGeometryFigureCollection_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMPath interface
 */
#ifndef __IXpsOMPath_INTERFACE_DEFINED__
#define __IXpsOMPath_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMPath;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMPathVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMPath *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMPath *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMPath *This);

    /*** IXpsOMShareable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetOwner)(
        IXpsOMPath *This,
        IUnknown **owner);

    HRESULT (STDMETHODCALLTYPE *GetType)(
        IXpsOMPath *This,
        XPS_OBJECT_TYPE *type);

    /*** IXpsOMVisual methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTransform)(
        IXpsOMPath *This,
        IXpsOMMatrixTransform **matrixTransform);

    HRESULT (STDMETHODCALLTYPE *GetTransformLocal)(
        IXpsOMPath *This,
        IXpsOMMatrixTransform **matrixTransform);

    HRESULT (STDMETHODCALLTYPE *SetTransformLocal)(
        IXpsOMPath *This,
        IXpsOMMatrixTransform *matrixTransform);

    HRESULT (STDMETHODCALLTYPE *GetTransformLookup)(
        IXpsOMPath *This,
        LPWSTR *key);

    HRESULT (STDMETHODCALLTYPE *SetTransformLookup)(
        IXpsOMPath *This,
        LPCWSTR key);

    HRESULT (STDMETHODCALLTYPE *GetClipGeometry)(
        IXpsOMPath *This,
        IXpsOMGeometry **clipGeometry);

    HRESULT (STDMETHODCALLTYPE *GetClipGeometryLocal)(
        IXpsOMPath *This,
        IXpsOMGeometry **clipGeometry);

    HRESULT (STDMETHODCALLTYPE *SetClipGeometryLocal)(
        IXpsOMPath *This,
        IXpsOMGeometry *clipGeometry);

    HRESULT (STDMETHODCALLTYPE *GetClipGeometryLookup)(
        IXpsOMPath *This,
        LPWSTR *key);

    HRESULT (STDMETHODCALLTYPE *SetClipGeometryLookup)(
        IXpsOMPath *This,
        LPCWSTR key);

    HRESULT (STDMETHODCALLTYPE *GetOpacity)(
        IXpsOMPath *This,
        FLOAT *opacity);

    HRESULT (STDMETHODCALLTYPE *SetOpacity)(
        IXpsOMPath *This,
        FLOAT opacity);

    HRESULT (STDMETHODCALLTYPE *GetOpacityMaskBrush)(
        IXpsOMPath *This,
        IXpsOMBrush **opacityMaskBrush);

    HRESULT (STDMETHODCALLTYPE *GetOpacityMaskBrushLocal)(
        IXpsOMPath *This,
        IXpsOMBrush **opacityMaskBrush);

    HRESULT (STDMETHODCALLTYPE *SetOpacityMaskBrushLocal)(
        IXpsOMPath *This,
        IXpsOMBrush *opacityMaskBrush);

    HRESULT (STDMETHODCALLTYPE *GetOpacityMaskBrushLookup)(
        IXpsOMPath *This,
        LPWSTR *key);

    HRESULT (STDMETHODCALLTYPE *SetOpacityMaskBrushLookup)(
        IXpsOMPath *This,
        LPCWSTR key);

    HRESULT (STDMETHODCALLTYPE *GetName)(
        IXpsOMPath *This,
        LPWSTR *name);

    HRESULT (STDMETHODCALLTYPE *SetName)(
        IXpsOMPath *This,
        LPCWSTR name);

    HRESULT (STDMETHODCALLTYPE *GetIsHyperlinkTarget)(
        IXpsOMPath *This,
        BOOL *isHyperlink);

    HRESULT (STDMETHODCALLTYPE *SetIsHyperlinkTarget)(
        IXpsOMPath *This,
        BOOL isHyperlink);

    HRESULT (STDMETHODCALLTYPE *GetHyperlinkNavigateUri)(
        IXpsOMPath *This,
        IUri **hyperlinkUri);

    HRESULT (STDMETHODCALLTYPE *SetHyperlinkNavigateUri)(
        IXpsOMPath *This,
        IUri *hyperlinkUri);

    HRESULT (STDMETHODCALLTYPE *GetLanguage)(
        IXpsOMPath *This,
        LPWSTR *language);

    HRESULT (STDMETHODCALLTYPE *SetLanguage)(
        IXpsOMPath *This,
        LPCWSTR language);

    /*** IXpsOMPath methods ***/
    HRESULT (STDMETHODCALLTYPE *GetGeometry)(
        IXpsOMPath *This,
        IXpsOMGeometry **geometry);

    HRESULT (STDMETHODCALLTYPE *GetGeometryLocal)(
        IXpsOMPath *This,
        IXpsOMGeometry **geometry);

    HRESULT (STDMETHODCALLTYPE *SetGeometryLocal)(
        IXpsOMPath *This,
        IXpsOMGeometry *geometry);

    HRESULT (STDMETHODCALLTYPE *GetGeometryLookup)(
        IXpsOMPath *This,
        LPWSTR *lookup);

    HRESULT (STDMETHODCALLTYPE *SetGeometryLookup)(
        IXpsOMPath *This,
        LPCWSTR lookup);

    HRESULT (STDMETHODCALLTYPE *GetAccessibilityShortDescription)(
        IXpsOMPath *This,
        LPWSTR *shortDescription);

    HRESULT (STDMETHODCALLTYPE *SetAccessibilityShortDescription)(
        IXpsOMPath *This,
        LPCWSTR shortDescription);

    HRESULT (STDMETHODCALLTYPE *GetAccessibilityLongDescription)(
        IXpsOMPath *This,
        LPWSTR *longDescription);

    HRESULT (STDMETHODCALLTYPE *SetAccessibilityLongDescription)(
        IXpsOMPath *This,
        LPCWSTR longDescription);

    HRESULT (STDMETHODCALLTYPE *GetSnapsToPixels)(
        IXpsOMPath *This,
        BOOL *snapsToPixels);

    HRESULT (STDMETHODCALLTYPE *SetSnapsToPixels)(
        IXpsOMPath *This,
        BOOL snapsToPixels);

    HRESULT (STDMETHODCALLTYPE *GetStrokeBrush)(
        IXpsOMPath *This,
        IXpsOMBrush **brush);

    HRESULT (STDMETHODCALLTYPE *GetStrokeBrushLocal)(
        IXpsOMPath *This,
        IXpsOMBrush **brush);

    HRESULT (STDMETHODCALLTYPE *SetStrokeBrushLocal)(
        IXpsOMPath *This,
        IXpsOMBrush *brush);

    HRESULT (STDMETHODCALLTYPE *GetStrokeBrushLookup)(
        IXpsOMPath *This,
        LPWSTR *lookup);

    HRESULT (STDMETHODCALLTYPE *SetStrokeBrushLookup)(
        IXpsOMPath *This,
        LPCWSTR lookup);

    HRESULT (STDMETHODCALLTYPE *GetStrokeDashes)(
        IXpsOMPath *This,
        IXpsOMDashCollection **strokeDashes);

    HRESULT (STDMETHODCALLTYPE *GetStrokeDashCap)(
        IXpsOMPath *This,
        XPS_DASH_CAP *strokeDashCap);

    HRESULT (STDMETHODCALLTYPE *SetStrokeDashCap)(
        IXpsOMPath *This,
        XPS_DASH_CAP strokeDashCap);

    HRESULT (STDMETHODCALLTYPE *GetStrokeDashOffset)(
        IXpsOMPath *This,
        FLOAT *strokeDashOffset);

    HRESULT (STDMETHODCALLTYPE *SetStrokeDashOffset)(
        IXpsOMPath *This,
        FLOAT strokeDashOffset);

    HRESULT (STDMETHODCALLTYPE *GetStrokeStartLineCap)(
        IXpsOMPath *This,
        XPS_LINE_CAP *strokeStartLineCap);

    HRESULT (STDMETHODCALLTYPE *SetStrokeStartLineCap)(
        IXpsOMPath *This,
        XPS_LINE_CAP strokeStartLineCap);

    HRESULT (STDMETHODCALLTYPE *GetStrokeEndLineCap)(
        IXpsOMPath *This,
        XPS_LINE_CAP *strokeEndLineCap);

    HRESULT (STDMETHODCALLTYPE *SetStrokeEndLineCap)(
        IXpsOMPath *This,
        XPS_LINE_CAP strokeEndLineCap);

    HRESULT (STDMETHODCALLTYPE *GetStrokeLineJoin)(
        IXpsOMPath *This,
        XPS_LINE_JOIN *strokeLineJoin);

    HRESULT (STDMETHODCALLTYPE *SetStrokeLineJoin)(
        IXpsOMPath *This,
        XPS_LINE_JOIN strokeLineJoin);

    HRESULT (STDMETHODCALLTYPE *GetStrokeMiterLimit)(
        IXpsOMPath *This,
        FLOAT *strokeMiterLimit);

    HRESULT (STDMETHODCALLTYPE *SetStrokeMiterLimit)(
        IXpsOMPath *This,
        FLOAT strokeMiterLimit);

    HRESULT (STDMETHODCALLTYPE *GetStrokeThickness)(
        IXpsOMPath *This,
        FLOAT *strokeThickness);

    HRESULT (STDMETHODCALLTYPE *SetStrokeThickness)(
        IXpsOMPath *This,
        FLOAT strokeThickness);

    HRESULT (STDMETHODCALLTYPE *GetFillBrush)(
        IXpsOMPath *This,
        IXpsOMBrush **brush);

    HRESULT (STDMETHODCALLTYPE *GetFillBrushLocal)(
        IXpsOMPath *This,
        IXpsOMBrush **brush);

    HRESULT (STDMETHODCALLTYPE *SetFillBrushLocal)(
        IXpsOMPath *This,
        IXpsOMBrush *brush);

    HRESULT (STDMETHODCALLTYPE *GetFillBrushLookup)(
        IXpsOMPath *This,
        LPWSTR *lookup);

    HRESULT (STDMETHODCALLTYPE *SetFillBrushLookup)(
        IXpsOMPath *This,
        LPCWSTR lookup);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IXpsOMPath *This,
        IXpsOMPath **path);

    END_INTERFACE
} IXpsOMPathVtbl;

interface IXpsOMPath {
    CONST_VTBL IXpsOMPathVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMPath_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMPath_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMPath_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMShareable methods ***/
#define IXpsOMPath_GetOwner(This,owner) \
    ((This)->lpVtbl->GetOwner(This,owner))
#define IXpsOMPath_GetType(This,type) \
    ((This)->lpVtbl->GetType(This,type))
/*** IXpsOMVisual methods ***/
#define IXpsOMPath_GetTransform(This,matrixTransform) \
    ((This)->lpVtbl->GetTransform(This,matrixTransform))
#define IXpsOMPath_GetTransformLocal(This,matrixTransform) \
    ((This)->lpVtbl->GetTransformLocal(This,matrixTransform))
#define IXpsOMPath_SetTransformLocal(This,matrixTransform) \
    ((This)->lpVtbl->SetTransformLocal(This,matrixTransform))
#define IXpsOMPath_GetTransformLookup(This,key) \
    ((This)->lpVtbl->GetTransformLookup(This,key))
#define IXpsOMPath_SetTransformLookup(This,key) \
    ((This)->lpVtbl->SetTransformLookup(This,key))
#define IXpsOMPath_GetClipGeometry(This,clipGeometry) \
    ((This)->lpVtbl->GetClipGeometry(This,clipGeometry))
#define IXpsOMPath_GetClipGeometryLocal(This,clipGeometry) \
    ((This)->lpVtbl->GetClipGeometryLocal(This,clipGeometry))
#define IXpsOMPath_SetClipGeometryLocal(This,clipGeometry) \
    ((This)->lpVtbl->SetClipGeometryLocal(This,clipGeometry))
#define IXpsOMPath_GetClipGeometryLookup(This,key) \
    ((This)->lpVtbl->GetClipGeometryLookup(This,key))
#define IXpsOMPath_SetClipGeometryLookup(This,key) \
    ((This)->lpVtbl->SetClipGeometryLookup(This,key))
#define IXpsOMPath_GetOpacity(This,opacity) \
    ((This)->lpVtbl->GetOpacity(This,opacity))
#define IXpsOMPath_SetOpacity(This,opacity) \
    ((This)->lpVtbl->SetOpacity(This,opacity))
#define IXpsOMPath_GetOpacityMaskBrush(This,opacityMaskBrush) \
    ((This)->lpVtbl->GetOpacityMaskBrush(This,opacityMaskBrush))
#define IXpsOMPath_GetOpacityMaskBrushLocal(This,opacityMaskBrush) \
    ((This)->lpVtbl->GetOpacityMaskBrushLocal(This,opacityMaskBrush))
#define IXpsOMPath_SetOpacityMaskBrushLocal(This,opacityMaskBrush) \
    ((This)->lpVtbl->SetOpacityMaskBrushLocal(This,opacityMaskBrush))
#define IXpsOMPath_GetOpacityMaskBrushLookup(This,key) \
    ((This)->lpVtbl->GetOpacityMaskBrushLookup(This,key))
#define IXpsOMPath_SetOpacityMaskBrushLookup(This,key) \
    ((This)->lpVtbl->SetOpacityMaskBrushLookup(This,key))
#define IXpsOMPath_GetName(This,name) \
    ((This)->lpVtbl->GetName(This,name))
#define IXpsOMPath_SetName(This,name) \
    ((This)->lpVtbl->SetName(This,name))
#define IXpsOMPath_GetIsHyperlinkTarget(This,isHyperlink) \
    ((This)->lpVtbl->GetIsHyperlinkTarget(This,isHyperlink))
#define IXpsOMPath_SetIsHyperlinkTarget(This,isHyperlink) \
    ((This)->lpVtbl->SetIsHyperlinkTarget(This,isHyperlink))
#define IXpsOMPath_GetHyperlinkNavigateUri(This,hyperlinkUri) \
    ((This)->lpVtbl->GetHyperlinkNavigateUri(This,hyperlinkUri))
#define IXpsOMPath_SetHyperlinkNavigateUri(This,hyperlinkUri) \
    ((This)->lpVtbl->SetHyperlinkNavigateUri(This,hyperlinkUri))
#define IXpsOMPath_GetLanguage(This,language) \
    ((This)->lpVtbl->GetLanguage(This,language))
#define IXpsOMPath_SetLanguage(This,language) \
    ((This)->lpVtbl->SetLanguage(This,language))
/*** IXpsOMPath methods ***/
#define IXpsOMPath_GetGeometry(This,geometry) \
    ((This)->lpVtbl->GetGeometry(This,geometry))
#define IXpsOMPath_GetGeometryLocal(This,geometry) \
    ((This)->lpVtbl->GetGeometryLocal(This,geometry))
#define IXpsOMPath_SetGeometryLocal(This,geometry) \
    ((This)->lpVtbl->SetGeometryLocal(This,geometry))
#define IXpsOMPath_GetGeometryLookup(This,lookup) \
    ((This)->lpVtbl->GetGeometryLookup(This,lookup))
#define IXpsOMPath_SetGeometryLookup(This,lookup) \
    ((This)->lpVtbl->SetGeometryLookup(This,lookup))
#define IXpsOMPath_GetAccessibilityShortDescription(This,shortDescription) \
    ((This)->lpVtbl->GetAccessibilityShortDescription(This,shortDescription))
#define IXpsOMPath_SetAccessibilityShortDescription(This,shortDescription) \
    ((This)->lpVtbl->SetAccessibilityShortDescription(This,shortDescription))
#define IXpsOMPath_GetAccessibilityLongDescription(This,longDescription) \
    ((This)->lpVtbl->GetAccessibilityLongDescription(This,longDescription))
#define IXpsOMPath_SetAccessibilityLongDescription(This,longDescription) \
    ((This)->lpVtbl->SetAccessibilityLongDescription(This,longDescription))
#define IXpsOMPath_GetSnapsToPixels(This,snapsToPixels) \
    ((This)->lpVtbl->GetSnapsToPixels(This,snapsToPixels))
#define IXpsOMPath_SetSnapsToPixels(This,snapsToPixels) \
    ((This)->lpVtbl->SetSnapsToPixels(This,snapsToPixels))
#define IXpsOMPath_GetStrokeBrush(This,brush) \
    ((This)->lpVtbl->GetStrokeBrush(This,brush))
#define IXpsOMPath_GetStrokeBrushLocal(This,brush) \
    ((This)->lpVtbl->GetStrokeBrushLocal(This,brush))
#define IXpsOMPath_SetStrokeBrushLocal(This,brush) \
    ((This)->lpVtbl->SetStrokeBrushLocal(This,brush))
#define IXpsOMPath_GetStrokeBrushLookup(This,lookup) \
    ((This)->lpVtbl->GetStrokeBrushLookup(This,lookup))
#define IXpsOMPath_SetStrokeBrushLookup(This,lookup) \
    ((This)->lpVtbl->SetStrokeBrushLookup(This,lookup))
#define IXpsOMPath_GetStrokeDashes(This,strokeDashes) \
    ((This)->lpVtbl->GetStrokeDashes(This,strokeDashes))
#define IXpsOMPath_GetStrokeDashCap(This,strokeDashCap) \
    ((This)->lpVtbl->GetStrokeDashCap(This,strokeDashCap))
#define IXpsOMPath_SetStrokeDashCap(This,strokeDashCap) \
    ((This)->lpVtbl->SetStrokeDashCap(This,strokeDashCap))
#define IXpsOMPath_GetStrokeDashOffset(This,strokeDashOffset) \
    ((This)->lpVtbl->GetStrokeDashOffset(This,strokeDashOffset))
#define IXpsOMPath_SetStrokeDashOffset(This,strokeDashOffset) \
    ((This)->lpVtbl->SetStrokeDashOffset(This,strokeDashOffset))
#define IXpsOMPath_GetStrokeStartLineCap(This,strokeStartLineCap) \
    ((This)->lpVtbl->GetStrokeStartLineCap(This,strokeStartLineCap))
#define IXpsOMPath_SetStrokeStartLineCap(This,strokeStartLineCap) \
    ((This)->lpVtbl->SetStrokeStartLineCap(This,strokeStartLineCap))
#define IXpsOMPath_GetStrokeEndLineCap(This,strokeEndLineCap) \
    ((This)->lpVtbl->GetStrokeEndLineCap(This,strokeEndLineCap))
#define IXpsOMPath_SetStrokeEndLineCap(This,strokeEndLineCap) \
    ((This)->lpVtbl->SetStrokeEndLineCap(This,strokeEndLineCap))
#define IXpsOMPath_GetStrokeLineJoin(This,strokeLineJoin) \
    ((This)->lpVtbl->GetStrokeLineJoin(This,strokeLineJoin))
#define IXpsOMPath_SetStrokeLineJoin(This,strokeLineJoin) \
    ((This)->lpVtbl->SetStrokeLineJoin(This,strokeLineJoin))
#define IXpsOMPath_GetStrokeMiterLimit(This,strokeMiterLimit) \
    ((This)->lpVtbl->GetStrokeMiterLimit(This,strokeMiterLimit))
#define IXpsOMPath_SetStrokeMiterLimit(This,strokeMiterLimit) \
    ((This)->lpVtbl->SetStrokeMiterLimit(This,strokeMiterLimit))
#define IXpsOMPath_GetStrokeThickness(This,strokeThickness) \
    ((This)->lpVtbl->GetStrokeThickness(This,strokeThickness))
#define IXpsOMPath_SetStrokeThickness(This,strokeThickness) \
    ((This)->lpVtbl->SetStrokeThickness(This,strokeThickness))
#define IXpsOMPath_GetFillBrush(This,brush) \
    ((This)->lpVtbl->GetFillBrush(This,brush))
#define IXpsOMPath_GetFillBrushLocal(This,brush) \
    ((This)->lpVtbl->GetFillBrushLocal(This,brush))
#define IXpsOMPath_SetFillBrushLocal(This,brush) \
    ((This)->lpVtbl->SetFillBrushLocal(This,brush))
#define IXpsOMPath_GetFillBrushLookup(This,lookup) \
    ((This)->lpVtbl->GetFillBrushLookup(This,lookup))
#define IXpsOMPath_SetFillBrushLookup(This,lookup) \
    ((This)->lpVtbl->SetFillBrushLookup(This,lookup))
#define IXpsOMPath_Clone(This,path) \
    ((This)->lpVtbl->Clone(This,path))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMPath_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMBrush interface
 */
#ifndef __IXpsOMBrush_INTERFACE_DEFINED__
#define __IXpsOMBrush_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMBrush;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMBrushVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMBrush *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMBrush *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMBrush *This);

    /*** IXpsOMShareable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetOwner)(
        IXpsOMBrush *This,
        IUnknown **owner);

    HRESULT (STDMETHODCALLTYPE *GetType)(
        IXpsOMBrush *This,
        XPS_OBJECT_TYPE *type);

    /*** IXpsOMBrush methods ***/
    HRESULT (STDMETHODCALLTYPE *GetOpacity)(
        IXpsOMBrush *This,
        FLOAT *opacity);

    HRESULT (STDMETHODCALLTYPE *SetOpacity)(
        IXpsOMBrush *This,
        FLOAT opacity);

    END_INTERFACE
} IXpsOMBrushVtbl;

interface IXpsOMBrush {
    CONST_VTBL IXpsOMBrushVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMBrush_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMBrush_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMBrush_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMShareable methods ***/
#define IXpsOMBrush_GetOwner(This,owner) \
    ((This)->lpVtbl->GetOwner(This,owner))
#define IXpsOMBrush_GetType(This,type) \
    ((This)->lpVtbl->GetType(This,type))
/*** IXpsOMBrush methods ***/
#define IXpsOMBrush_GetOpacity(This,opacity) \
    ((This)->lpVtbl->GetOpacity(This,opacity))
#define IXpsOMBrush_SetOpacity(This,opacity) \
    ((This)->lpVtbl->SetOpacity(This,opacity))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMBrush_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMGradientStopCollection interface
 */
#ifndef __IXpsOMGradientStopCollection_INTERFACE_DEFINED__
#define __IXpsOMGradientStopCollection_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMGradientStopCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMGradientStopCollectionVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMGradientStopCollection *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMGradientStopCollection *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMGradientStopCollection *This);

    /*** IXpsOMGradientStopCollection methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IXpsOMGradientStopCollection *This,
        UINT32 *count);

    HRESULT (STDMETHODCALLTYPE *GetAt)(
        IXpsOMGradientStopCollection *This,
        UINT32 index,
        IXpsOMGradientStop **stop);

    HRESULT (STDMETHODCALLTYPE *InsertAt)(
        IXpsOMGradientStopCollection *This,
        UINT32 index,
        IXpsOMGradientStop *stop);

    HRESULT (STDMETHODCALLTYPE *RemoveAt)(
        IXpsOMGradientStopCollection *This,
        UINT32 index);

    HRESULT (STDMETHODCALLTYPE *SetAt)(
        IXpsOMGradientStopCollection *This,
        UINT32 index,
        IXpsOMGradientStop *stop);

    HRESULT (STDMETHODCALLTYPE *Append)(
        IXpsOMGradientStopCollection *This,
        IXpsOMGradientStop *stop);

    END_INTERFACE
} IXpsOMGradientStopCollectionVtbl;

interface IXpsOMGradientStopCollection {
    CONST_VTBL IXpsOMGradientStopCollectionVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMGradientStopCollection_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMGradientStopCollection_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMGradientStopCollection_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMGradientStopCollection methods ***/
#define IXpsOMGradientStopCollection_GetCount(This,count) \
    ((This)->lpVtbl->GetCount(This,count))
#define IXpsOMGradientStopCollection_GetAt(This,index,stop) \
    ((This)->lpVtbl->GetAt(This,index,stop))
#define IXpsOMGradientStopCollection_InsertAt(This,index,stop) \
    ((This)->lpVtbl->InsertAt(This,index,stop))
#define IXpsOMGradientStopCollection_RemoveAt(This,index) \
    ((This)->lpVtbl->RemoveAt(This,index))
#define IXpsOMGradientStopCollection_SetAt(This,index,stop) \
    ((This)->lpVtbl->SetAt(This,index,stop))
#define IXpsOMGradientStopCollection_Append(This,stop) \
    ((This)->lpVtbl->Append(This,stop))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMGradientStopCollection_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMSolidColorBrush interface
 */
#ifndef __IXpsOMSolidColorBrush_INTERFACE_DEFINED__
#define __IXpsOMSolidColorBrush_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMSolidColorBrush;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMSolidColorBrushVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMSolidColorBrush *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMSolidColorBrush *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMSolidColorBrush *This);

    /*** IXpsOMShareable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetOwner)(
        IXpsOMSolidColorBrush *This,
        IUnknown **owner);

    HRESULT (STDMETHODCALLTYPE *GetType)(
        IXpsOMSolidColorBrush *This,
        XPS_OBJECT_TYPE *type);

    /*** IXpsOMBrush methods ***/
    HRESULT (STDMETHODCALLTYPE *GetOpacity)(
        IXpsOMSolidColorBrush *This,
        FLOAT *opacity);

    HRESULT (STDMETHODCALLTYPE *SetOpacity)(
        IXpsOMSolidColorBrush *This,
        FLOAT opacity);

    /*** IXpsOMSolidColorBrush methods ***/
    HRESULT (STDMETHODCALLTYPE *GetColor)(
        IXpsOMSolidColorBrush *This,
        XPS_COLOR *color,
        IXpsOMColorProfileResource **colorProfile);

    HRESULT (STDMETHODCALLTYPE *SetColor)(
        IXpsOMSolidColorBrush *This,
        const XPS_COLOR *color,
        IXpsOMColorProfileResource *colorProfile);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IXpsOMSolidColorBrush *This,
        IXpsOMSolidColorBrush **solidColorBrush);

    END_INTERFACE
} IXpsOMSolidColorBrushVtbl;

interface IXpsOMSolidColorBrush {
    CONST_VTBL IXpsOMSolidColorBrushVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMSolidColorBrush_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMSolidColorBrush_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMSolidColorBrush_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMShareable methods ***/
#define IXpsOMSolidColorBrush_GetOwner(This,owner) \
    ((This)->lpVtbl->GetOwner(This,owner))
#define IXpsOMSolidColorBrush_GetType(This,type) \
    ((This)->lpVtbl->GetType(This,type))
/*** IXpsOMBrush methods ***/
#define IXpsOMSolidColorBrush_GetOpacity(This,opacity) \
    ((This)->lpVtbl->GetOpacity(This,opacity))
#define IXpsOMSolidColorBrush_SetOpacity(This,opacity) \
    ((This)->lpVtbl->SetOpacity(This,opacity))
/*** IXpsOMSolidColorBrush methods ***/
#define IXpsOMSolidColorBrush_GetColor(This,color,colorProfile) \
    ((This)->lpVtbl->GetColor(This,color,colorProfile))
#define IXpsOMSolidColorBrush_SetColor(This,color,colorProfile) \
    ((This)->lpVtbl->SetColor(This,color,colorProfile))
#define IXpsOMSolidColorBrush_Clone(This,solidColorBrush) \
    ((This)->lpVtbl->Clone(This,solidColorBrush))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMSolidColorBrush_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMTileBrush interface
 */
#ifndef __IXpsOMTileBrush_INTERFACE_DEFINED__
#define __IXpsOMTileBrush_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMTileBrush;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMTileBrushVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMTileBrush *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMTileBrush *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMTileBrush *This);

    /*** IXpsOMShareable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetOwner)(
        IXpsOMTileBrush *This,
        IUnknown **owner);

    HRESULT (STDMETHODCALLTYPE *GetType)(
        IXpsOMTileBrush *This,
        XPS_OBJECT_TYPE *type);

    /*** IXpsOMBrush methods ***/
    HRESULT (STDMETHODCALLTYPE *GetOpacity)(
        IXpsOMTileBrush *This,
        FLOAT *opacity);

    HRESULT (STDMETHODCALLTYPE *SetOpacity)(
        IXpsOMTileBrush *This,
        FLOAT opacity);

    /*** IXpsOMTileBrush methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTransform)(
        IXpsOMTileBrush *This,
        IXpsOMMatrixTransform **transform);

    HRESULT (STDMETHODCALLTYPE *GetTransformLocal)(
        IXpsOMTileBrush *This,
        IXpsOMMatrixTransform **transform);

    HRESULT (STDMETHODCALLTYPE *SetTransformLocal)(
        IXpsOMTileBrush *This,
        IXpsOMMatrixTransform *transform);

    HRESULT (STDMETHODCALLTYPE *GetTransformLookup)(
        IXpsOMTileBrush *This,
        LPWSTR *key);

    HRESULT (STDMETHODCALLTYPE *SetTransformLookup)(
        IXpsOMTileBrush *This,
        LPCWSTR key);

    HRESULT (STDMETHODCALLTYPE *GetViewbox)(
        IXpsOMTileBrush *This,
        XPS_RECT *viewbox);

    HRESULT (STDMETHODCALLTYPE *SetViewbox)(
        IXpsOMTileBrush *This,
        const XPS_RECT *viewbox);

    HRESULT (STDMETHODCALLTYPE *GetViewport)(
        IXpsOMTileBrush *This,
        XPS_RECT *viewport);

    HRESULT (STDMETHODCALLTYPE *SetViewport)(
        IXpsOMTileBrush *This,
        const XPS_RECT *viewport);

    HRESULT (STDMETHODCALLTYPE *GetTileMode)(
        IXpsOMTileBrush *This,
        XPS_TILE_MODE *tileMode);

    HRESULT (STDMETHODCALLTYPE *SetTileMode)(
        IXpsOMTileBrush *This,
        XPS_TILE_MODE tileMode);

    END_INTERFACE
} IXpsOMTileBrushVtbl;

interface IXpsOMTileBrush {
    CONST_VTBL IXpsOMTileBrushVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMTileBrush_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMTileBrush_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMTileBrush_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMShareable methods ***/
#define IXpsOMTileBrush_GetOwner(This,owner) \
    ((This)->lpVtbl->GetOwner(This,owner))
#define IXpsOMTileBrush_GetType(This,type) \
    ((This)->lpVtbl->GetType(This,type))
/*** IXpsOMBrush methods ***/
#define IXpsOMTileBrush_GetOpacity(This,opacity) \
    ((This)->lpVtbl->GetOpacity(This,opacity))
#define IXpsOMTileBrush_SetOpacity(This,opacity) \
    ((This)->lpVtbl->SetOpacity(This,opacity))
/*** IXpsOMTileBrush methods ***/
#define IXpsOMTileBrush_GetTransform(This,transform) \
    ((This)->lpVtbl->GetTransform(This,transform))
#define IXpsOMTileBrush_GetTransformLocal(This,transform) \
    ((This)->lpVtbl->GetTransformLocal(This,transform))
#define IXpsOMTileBrush_SetTransformLocal(This,transform) \
    ((This)->lpVtbl->SetTransformLocal(This,transform))
#define IXpsOMTileBrush_GetTransformLookup(This,key) \
    ((This)->lpVtbl->GetTransformLookup(This,key))
#define IXpsOMTileBrush_SetTransformLookup(This,key) \
    ((This)->lpVtbl->SetTransformLookup(This,key))
#define IXpsOMTileBrush_GetViewbox(This,viewbox) \
    ((This)->lpVtbl->GetViewbox(This,viewbox))
#define IXpsOMTileBrush_SetViewbox(This,viewbox) \
    ((This)->lpVtbl->SetViewbox(This,viewbox))
#define IXpsOMTileBrush_GetViewport(This,viewport) \
    ((This)->lpVtbl->GetViewport(This,viewport))
#define IXpsOMTileBrush_SetViewport(This,viewport) \
    ((This)->lpVtbl->SetViewport(This,viewport))
#define IXpsOMTileBrush_GetTileMode(This,tileMode) \
    ((This)->lpVtbl->GetTileMode(This,tileMode))
#define IXpsOMTileBrush_SetTileMode(This,tileMode) \
    ((This)->lpVtbl->SetTileMode(This,tileMode))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMTileBrush_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMVisualBrush interface
 */
#ifndef __IXpsOMVisualBrush_INTERFACE_DEFINED__
#define __IXpsOMVisualBrush_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMVisualBrush;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMVisualBrushVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMVisualBrush *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMVisualBrush *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMVisualBrush *This);

    /*** IXpsOMShareable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetOwner)(
        IXpsOMVisualBrush *This,
        IUnknown **owner);

    HRESULT (STDMETHODCALLTYPE *GetType)(
        IXpsOMVisualBrush *This,
        XPS_OBJECT_TYPE *type);

    /*** IXpsOMBrush methods ***/
    HRESULT (STDMETHODCALLTYPE *GetOpacity)(
        IXpsOMVisualBrush *This,
        FLOAT *opacity);

    HRESULT (STDMETHODCALLTYPE *SetOpacity)(
        IXpsOMVisualBrush *This,
        FLOAT opacity);

    /*** IXpsOMTileBrush methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTransform)(
        IXpsOMVisualBrush *This,
        IXpsOMMatrixTransform **transform);

    HRESULT (STDMETHODCALLTYPE *GetTransformLocal)(
        IXpsOMVisualBrush *This,
        IXpsOMMatrixTransform **transform);

    HRESULT (STDMETHODCALLTYPE *SetTransformLocal)(
        IXpsOMVisualBrush *This,
        IXpsOMMatrixTransform *transform);

    HRESULT (STDMETHODCALLTYPE *GetTransformLookup)(
        IXpsOMVisualBrush *This,
        LPWSTR *key);

    HRESULT (STDMETHODCALLTYPE *SetTransformLookup)(
        IXpsOMVisualBrush *This,
        LPCWSTR key);

    HRESULT (STDMETHODCALLTYPE *GetViewbox)(
        IXpsOMVisualBrush *This,
        XPS_RECT *viewbox);

    HRESULT (STDMETHODCALLTYPE *SetViewbox)(
        IXpsOMVisualBrush *This,
        const XPS_RECT *viewbox);

    HRESULT (STDMETHODCALLTYPE *GetViewport)(
        IXpsOMVisualBrush *This,
        XPS_RECT *viewport);

    HRESULT (STDMETHODCALLTYPE *SetViewport)(
        IXpsOMVisualBrush *This,
        const XPS_RECT *viewport);

    HRESULT (STDMETHODCALLTYPE *GetTileMode)(
        IXpsOMVisualBrush *This,
        XPS_TILE_MODE *tileMode);

    HRESULT (STDMETHODCALLTYPE *SetTileMode)(
        IXpsOMVisualBrush *This,
        XPS_TILE_MODE tileMode);

    /*** IXpsOMVisualBrush methods ***/
    HRESULT (STDMETHODCALLTYPE *GetVisual)(
        IXpsOMVisualBrush *This,
        IXpsOMVisual **visual);

    HRESULT (STDMETHODCALLTYPE *GetVisualLocal)(
        IXpsOMVisualBrush *This,
        IXpsOMVisual **visual);

    HRESULT (STDMETHODCALLTYPE *SetVisualLocal)(
        IXpsOMVisualBrush *This,
        IXpsOMVisual *visual);

    HRESULT (STDMETHODCALLTYPE *GetVisualLookup)(
        IXpsOMVisualBrush *This,
        LPWSTR *lookup);

    HRESULT (STDMETHODCALLTYPE *SetVisualLookup)(
        IXpsOMVisualBrush *This,
        LPCWSTR lookup);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IXpsOMVisualBrush *This,
        IXpsOMVisualBrush **visualBrush);

    END_INTERFACE
} IXpsOMVisualBrushVtbl;

interface IXpsOMVisualBrush {
    CONST_VTBL IXpsOMVisualBrushVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMVisualBrush_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMVisualBrush_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMVisualBrush_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMShareable methods ***/
#define IXpsOMVisualBrush_GetOwner(This,owner) \
    ((This)->lpVtbl->GetOwner(This,owner))
#define IXpsOMVisualBrush_GetType(This,type) \
    ((This)->lpVtbl->GetType(This,type))
/*** IXpsOMBrush methods ***/
#define IXpsOMVisualBrush_GetOpacity(This,opacity) \
    ((This)->lpVtbl->GetOpacity(This,opacity))
#define IXpsOMVisualBrush_SetOpacity(This,opacity) \
    ((This)->lpVtbl->SetOpacity(This,opacity))
/*** IXpsOMTileBrush methods ***/
#define IXpsOMVisualBrush_GetTransform(This,transform) \
    ((This)->lpVtbl->GetTransform(This,transform))
#define IXpsOMVisualBrush_GetTransformLocal(This,transform) \
    ((This)->lpVtbl->GetTransformLocal(This,transform))
#define IXpsOMVisualBrush_SetTransformLocal(This,transform) \
    ((This)->lpVtbl->SetTransformLocal(This,transform))
#define IXpsOMVisualBrush_GetTransformLookup(This,key) \
    ((This)->lpVtbl->GetTransformLookup(This,key))
#define IXpsOMVisualBrush_SetTransformLookup(This,key) \
    ((This)->lpVtbl->SetTransformLookup(This,key))
#define IXpsOMVisualBrush_GetViewbox(This,viewbox) \
    ((This)->lpVtbl->GetViewbox(This,viewbox))
#define IXpsOMVisualBrush_SetViewbox(This,viewbox) \
    ((This)->lpVtbl->SetViewbox(This,viewbox))
#define IXpsOMVisualBrush_GetViewport(This,viewport) \
    ((This)->lpVtbl->GetViewport(This,viewport))
#define IXpsOMVisualBrush_SetViewport(This,viewport) \
    ((This)->lpVtbl->SetViewport(This,viewport))
#define IXpsOMVisualBrush_GetTileMode(This,tileMode) \
    ((This)->lpVtbl->GetTileMode(This,tileMode))
#define IXpsOMVisualBrush_SetTileMode(This,tileMode) \
    ((This)->lpVtbl->SetTileMode(This,tileMode))
/*** IXpsOMVisualBrush methods ***/
#define IXpsOMVisualBrush_GetVisual(This,visual) \
    ((This)->lpVtbl->GetVisual(This,visual))
#define IXpsOMVisualBrush_GetVisualLocal(This,visual) \
    ((This)->lpVtbl->GetVisualLocal(This,visual))
#define IXpsOMVisualBrush_SetVisualLocal(This,visual) \
    ((This)->lpVtbl->SetVisualLocal(This,visual))
#define IXpsOMVisualBrush_GetVisualLookup(This,lookup) \
    ((This)->lpVtbl->GetVisualLookup(This,lookup))
#define IXpsOMVisualBrush_SetVisualLookup(This,lookup) \
    ((This)->lpVtbl->SetVisualLookup(This,lookup))
#define IXpsOMVisualBrush_Clone(This,visualBrush) \
    ((This)->lpVtbl->Clone(This,visualBrush))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMVisualBrush_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMImageBrush interface
 */
#ifndef __IXpsOMImageBrush_INTERFACE_DEFINED__
#define __IXpsOMImageBrush_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMImageBrush;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMImageBrushVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMImageBrush *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMImageBrush *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMImageBrush *This);

    /*** IXpsOMShareable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetOwner)(
        IXpsOMImageBrush *This,
        IUnknown **owner);

    HRESULT (STDMETHODCALLTYPE *GetType)(
        IXpsOMImageBrush *This,
        XPS_OBJECT_TYPE *type);

    /*** IXpsOMBrush methods ***/
    HRESULT (STDMETHODCALLTYPE *GetOpacity)(
        IXpsOMImageBrush *This,
        FLOAT *opacity);

    HRESULT (STDMETHODCALLTYPE *SetOpacity)(
        IXpsOMImageBrush *This,
        FLOAT opacity);

    /*** IXpsOMTileBrush methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTransform)(
        IXpsOMImageBrush *This,
        IXpsOMMatrixTransform **transform);

    HRESULT (STDMETHODCALLTYPE *GetTransformLocal)(
        IXpsOMImageBrush *This,
        IXpsOMMatrixTransform **transform);

    HRESULT (STDMETHODCALLTYPE *SetTransformLocal)(
        IXpsOMImageBrush *This,
        IXpsOMMatrixTransform *transform);

    HRESULT (STDMETHODCALLTYPE *GetTransformLookup)(
        IXpsOMImageBrush *This,
        LPWSTR *key);

    HRESULT (STDMETHODCALLTYPE *SetTransformLookup)(
        IXpsOMImageBrush *This,
        LPCWSTR key);

    HRESULT (STDMETHODCALLTYPE *GetViewbox)(
        IXpsOMImageBrush *This,
        XPS_RECT *viewbox);

    HRESULT (STDMETHODCALLTYPE *SetViewbox)(
        IXpsOMImageBrush *This,
        const XPS_RECT *viewbox);

    HRESULT (STDMETHODCALLTYPE *GetViewport)(
        IXpsOMImageBrush *This,
        XPS_RECT *viewport);

    HRESULT (STDMETHODCALLTYPE *SetViewport)(
        IXpsOMImageBrush *This,
        const XPS_RECT *viewport);

    HRESULT (STDMETHODCALLTYPE *GetTileMode)(
        IXpsOMImageBrush *This,
        XPS_TILE_MODE *tileMode);

    HRESULT (STDMETHODCALLTYPE *SetTileMode)(
        IXpsOMImageBrush *This,
        XPS_TILE_MODE tileMode);

    /*** IXpsOMImageBrush methods ***/
    HRESULT (STDMETHODCALLTYPE *GetImageResource)(
        IXpsOMImageBrush *This,
        IXpsOMImageResource **imageResource);

    HRESULT (STDMETHODCALLTYPE *SetImageResource)(
        IXpsOMImageBrush *This,
        IXpsOMImageResource *imageResource);

    HRESULT (STDMETHODCALLTYPE *GetColorProfileResource)(
        IXpsOMImageBrush *This,
        IXpsOMColorProfileResource **colorProfileResource);

    HRESULT (STDMETHODCALLTYPE *SetColorProfileResource)(
        IXpsOMImageBrush *This,
        IXpsOMColorProfileResource *colorProfileResource);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IXpsOMImageBrush *This,
        IXpsOMImageBrush **imageBrush);

    END_INTERFACE
} IXpsOMImageBrushVtbl;

interface IXpsOMImageBrush {
    CONST_VTBL IXpsOMImageBrushVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMImageBrush_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMImageBrush_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMImageBrush_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMShareable methods ***/
#define IXpsOMImageBrush_GetOwner(This,owner) \
    ((This)->lpVtbl->GetOwner(This,owner))
#define IXpsOMImageBrush_GetType(This,type) \
    ((This)->lpVtbl->GetType(This,type))
/*** IXpsOMBrush methods ***/
#define IXpsOMImageBrush_GetOpacity(This,opacity) \
    ((This)->lpVtbl->GetOpacity(This,opacity))
#define IXpsOMImageBrush_SetOpacity(This,opacity) \
    ((This)->lpVtbl->SetOpacity(This,opacity))
/*** IXpsOMTileBrush methods ***/
#define IXpsOMImageBrush_GetTransform(This,transform) \
    ((This)->lpVtbl->GetTransform(This,transform))
#define IXpsOMImageBrush_GetTransformLocal(This,transform) \
    ((This)->lpVtbl->GetTransformLocal(This,transform))
#define IXpsOMImageBrush_SetTransformLocal(This,transform) \
    ((This)->lpVtbl->SetTransformLocal(This,transform))
#define IXpsOMImageBrush_GetTransformLookup(This,key) \
    ((This)->lpVtbl->GetTransformLookup(This,key))
#define IXpsOMImageBrush_SetTransformLookup(This,key) \
    ((This)->lpVtbl->SetTransformLookup(This,key))
#define IXpsOMImageBrush_GetViewbox(This,viewbox) \
    ((This)->lpVtbl->GetViewbox(This,viewbox))
#define IXpsOMImageBrush_SetViewbox(This,viewbox) \
    ((This)->lpVtbl->SetViewbox(This,viewbox))
#define IXpsOMImageBrush_GetViewport(This,viewport) \
    ((This)->lpVtbl->GetViewport(This,viewport))
#define IXpsOMImageBrush_SetViewport(This,viewport) \
    ((This)->lpVtbl->SetViewport(This,viewport))
#define IXpsOMImageBrush_GetTileMode(This,tileMode) \
    ((This)->lpVtbl->GetTileMode(This,tileMode))
#define IXpsOMImageBrush_SetTileMode(This,tileMode) \
    ((This)->lpVtbl->SetTileMode(This,tileMode))
/*** IXpsOMImageBrush methods ***/
#define IXpsOMImageBrush_GetImageResource(This,imageResource) \
    ((This)->lpVtbl->GetImageResource(This,imageResource))
#define IXpsOMImageBrush_SetImageResource(This,imageResource) \
    ((This)->lpVtbl->SetImageResource(This,imageResource))
#define IXpsOMImageBrush_GetColorProfileResource(This,colorProfileResource) \
    ((This)->lpVtbl->GetColorProfileResource(This,colorProfileResource))
#define IXpsOMImageBrush_SetColorProfileResource(This,colorProfileResource) \
    ((This)->lpVtbl->SetColorProfileResource(This,colorProfileResource))
#define IXpsOMImageBrush_Clone(This,imageBrush) \
    ((This)->lpVtbl->Clone(This,imageBrush))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMImageBrush_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMGradientStop interface
 */
#ifndef __IXpsOMGradientStop_INTERFACE_DEFINED__
#define __IXpsOMGradientStop_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMGradientStop;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMGradientStopVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMGradientStop *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMGradientStop *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMGradientStop *This);

    /*** IXpsOMGradientStop methods ***/
    HRESULT (STDMETHODCALLTYPE *GetOwner)(
        IXpsOMGradientStop *This,
        IXpsOMGradientBrush **owner);

    HRESULT (STDMETHODCALLTYPE *GetOffset)(
        IXpsOMGradientStop *This,
        FLOAT *offset);

    HRESULT (STDMETHODCALLTYPE *SetOffset)(
        IXpsOMGradientStop *This,
        FLOAT offset);

    HRESULT (STDMETHODCALLTYPE *GetColor)(
        IXpsOMGradientStop *This,
        XPS_COLOR *color,
        IXpsOMColorProfileResource **colorProfile);

    HRESULT (STDMETHODCALLTYPE *SetColor)(
        IXpsOMGradientStop *This,
        const XPS_COLOR *color,
        IXpsOMColorProfileResource *colorProfile);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IXpsOMGradientStop *This,
        IXpsOMGradientStop **gradientStop);

    END_INTERFACE
} IXpsOMGradientStopVtbl;

interface IXpsOMGradientStop {
    CONST_VTBL IXpsOMGradientStopVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMGradientStop_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMGradientStop_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMGradientStop_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMGradientStop methods ***/
#define IXpsOMGradientStop_GetOwner(This,owner) \
    ((This)->lpVtbl->GetOwner(This,owner))
#define IXpsOMGradientStop_GetOffset(This,offset) \
    ((This)->lpVtbl->GetOffset(This,offset))
#define IXpsOMGradientStop_SetOffset(This,offset) \
    ((This)->lpVtbl->SetOffset(This,offset))
#define IXpsOMGradientStop_GetColor(This,color,colorProfile) \
    ((This)->lpVtbl->GetColor(This,color,colorProfile))
#define IXpsOMGradientStop_SetColor(This,color,colorProfile) \
    ((This)->lpVtbl->SetColor(This,color,colorProfile))
#define IXpsOMGradientStop_Clone(This,gradientStop) \
    ((This)->lpVtbl->Clone(This,gradientStop))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMGradientStop_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMGradientBrush interface
 */
#ifndef __IXpsOMGradientBrush_INTERFACE_DEFINED__
#define __IXpsOMGradientBrush_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMGradientBrush;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMGradientBrushVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMGradientBrush *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMGradientBrush *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMGradientBrush *This);

    /*** IXpsOMShareable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetOwner)(
        IXpsOMGradientBrush *This,
        IUnknown **owner);

    HRESULT (STDMETHODCALLTYPE *GetType)(
        IXpsOMGradientBrush *This,
        XPS_OBJECT_TYPE *type);

    /*** IXpsOMBrush methods ***/
    HRESULT (STDMETHODCALLTYPE *GetOpacity)(
        IXpsOMGradientBrush *This,
        FLOAT *opacity);

    HRESULT (STDMETHODCALLTYPE *SetOpacity)(
        IXpsOMGradientBrush *This,
        FLOAT opacity);

    /*** IXpsOMGradientBrush methods ***/
    HRESULT (STDMETHODCALLTYPE *GetGradientStops)(
        IXpsOMGradientBrush *This,
        IXpsOMGradientStopCollection **gradientStops);

    HRESULT (STDMETHODCALLTYPE *GetTransform)(
        IXpsOMGradientBrush *This,
        IXpsOMMatrixTransform **transform);

    HRESULT (STDMETHODCALLTYPE *GetTransformLocal)(
        IXpsOMGradientBrush *This,
        IXpsOMMatrixTransform **transform);

    HRESULT (STDMETHODCALLTYPE *SetTransformLocal)(
        IXpsOMGradientBrush *This,
        IXpsOMMatrixTransform *transform);

    HRESULT (STDMETHODCALLTYPE *GetTransformLookup)(
        IXpsOMGradientBrush *This,
        LPWSTR *key);

    HRESULT (STDMETHODCALLTYPE *SetTransformLookup)(
        IXpsOMGradientBrush *This,
        LPCWSTR key);

    HRESULT (STDMETHODCALLTYPE *GetSpreadMethod)(
        IXpsOMGradientBrush *This,
        XPS_SPREAD_METHOD *spreadMethod);

    HRESULT (STDMETHODCALLTYPE *SetSpreadMethod)(
        IXpsOMGradientBrush *This,
        XPS_SPREAD_METHOD spreadMethod);

    HRESULT (STDMETHODCALLTYPE *GetColorInterpolationMode)(
        IXpsOMGradientBrush *This,
        XPS_COLOR_INTERPOLATION *colorInterpolationMode);

    HRESULT (STDMETHODCALLTYPE *SetColorInterpolationMode)(
        IXpsOMGradientBrush *This,
        XPS_COLOR_INTERPOLATION colorInterpolationMode);

    END_INTERFACE
} IXpsOMGradientBrushVtbl;

interface IXpsOMGradientBrush {
    CONST_VTBL IXpsOMGradientBrushVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMGradientBrush_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMGradientBrush_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMGradientBrush_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMShareable methods ***/
#define IXpsOMGradientBrush_GetOwner(This,owner) \
    ((This)->lpVtbl->GetOwner(This,owner))
#define IXpsOMGradientBrush_GetType(This,type) \
    ((This)->lpVtbl->GetType(This,type))
/*** IXpsOMBrush methods ***/
#define IXpsOMGradientBrush_GetOpacity(This,opacity) \
    ((This)->lpVtbl->GetOpacity(This,opacity))
#define IXpsOMGradientBrush_SetOpacity(This,opacity) \
    ((This)->lpVtbl->SetOpacity(This,opacity))
/*** IXpsOMGradientBrush methods ***/
#define IXpsOMGradientBrush_GetGradientStops(This,gradientStops) \
    ((This)->lpVtbl->GetGradientStops(This,gradientStops))
#define IXpsOMGradientBrush_GetTransform(This,transform) \
    ((This)->lpVtbl->GetTransform(This,transform))
#define IXpsOMGradientBrush_GetTransformLocal(This,transform) \
    ((This)->lpVtbl->GetTransformLocal(This,transform))
#define IXpsOMGradientBrush_SetTransformLocal(This,transform) \
    ((This)->lpVtbl->SetTransformLocal(This,transform))
#define IXpsOMGradientBrush_GetTransformLookup(This,key) \
    ((This)->lpVtbl->GetTransformLookup(This,key))
#define IXpsOMGradientBrush_SetTransformLookup(This,key) \
    ((This)->lpVtbl->SetTransformLookup(This,key))
#define IXpsOMGradientBrush_GetSpreadMethod(This,spreadMethod) \
    ((This)->lpVtbl->GetSpreadMethod(This,spreadMethod))
#define IXpsOMGradientBrush_SetSpreadMethod(This,spreadMethod) \
    ((This)->lpVtbl->SetSpreadMethod(This,spreadMethod))
#define IXpsOMGradientBrush_GetColorInterpolationMode(This,colorInterpolationMode) \
    ((This)->lpVtbl->GetColorInterpolationMode(This,colorInterpolationMode))
#define IXpsOMGradientBrush_SetColorInterpolationMode(This,colorInterpolationMode) \
    ((This)->lpVtbl->SetColorInterpolationMode(This,colorInterpolationMode))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMGradientBrush_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMLinearGradientBrush interface
 */
#ifndef __IXpsOMLinearGradientBrush_INTERFACE_DEFINED__
#define __IXpsOMLinearGradientBrush_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMLinearGradientBrush;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMLinearGradientBrushVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMLinearGradientBrush *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMLinearGradientBrush *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMLinearGradientBrush *This);

    /*** IXpsOMShareable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetOwner)(
        IXpsOMLinearGradientBrush *This,
        IUnknown **owner);

    HRESULT (STDMETHODCALLTYPE *GetType)(
        IXpsOMLinearGradientBrush *This,
        XPS_OBJECT_TYPE *type);

    /*** IXpsOMBrush methods ***/
    HRESULT (STDMETHODCALLTYPE *GetOpacity)(
        IXpsOMLinearGradientBrush *This,
        FLOAT *opacity);

    HRESULT (STDMETHODCALLTYPE *SetOpacity)(
        IXpsOMLinearGradientBrush *This,
        FLOAT opacity);

    /*** IXpsOMGradientBrush methods ***/
    HRESULT (STDMETHODCALLTYPE *GetGradientStops)(
        IXpsOMLinearGradientBrush *This,
        IXpsOMGradientStopCollection **gradientStops);

    HRESULT (STDMETHODCALLTYPE *GetTransform)(
        IXpsOMLinearGradientBrush *This,
        IXpsOMMatrixTransform **transform);

    HRESULT (STDMETHODCALLTYPE *GetTransformLocal)(
        IXpsOMLinearGradientBrush *This,
        IXpsOMMatrixTransform **transform);

    HRESULT (STDMETHODCALLTYPE *SetTransformLocal)(
        IXpsOMLinearGradientBrush *This,
        IXpsOMMatrixTransform *transform);

    HRESULT (STDMETHODCALLTYPE *GetTransformLookup)(
        IXpsOMLinearGradientBrush *This,
        LPWSTR *key);

    HRESULT (STDMETHODCALLTYPE *SetTransformLookup)(
        IXpsOMLinearGradientBrush *This,
        LPCWSTR key);

    HRESULT (STDMETHODCALLTYPE *GetSpreadMethod)(
        IXpsOMLinearGradientBrush *This,
        XPS_SPREAD_METHOD *spreadMethod);

    HRESULT (STDMETHODCALLTYPE *SetSpreadMethod)(
        IXpsOMLinearGradientBrush *This,
        XPS_SPREAD_METHOD spreadMethod);

    HRESULT (STDMETHODCALLTYPE *GetColorInterpolationMode)(
        IXpsOMLinearGradientBrush *This,
        XPS_COLOR_INTERPOLATION *colorInterpolationMode);

    HRESULT (STDMETHODCALLTYPE *SetColorInterpolationMode)(
        IXpsOMLinearGradientBrush *This,
        XPS_COLOR_INTERPOLATION colorInterpolationMode);

    /*** IXpsOMLinearGradientBrush methods ***/
    HRESULT (STDMETHODCALLTYPE *GetStartPoint)(
        IXpsOMLinearGradientBrush *This,
        XPS_POINT *startPoint);

    HRESULT (STDMETHODCALLTYPE *SetStartPoint)(
        IXpsOMLinearGradientBrush *This,
        const XPS_POINT *startPoint);

    HRESULT (STDMETHODCALLTYPE *GetEndPoint)(
        IXpsOMLinearGradientBrush *This,
        XPS_POINT *endPoint);

    HRESULT (STDMETHODCALLTYPE *SetEndPoint)(
        IXpsOMLinearGradientBrush *This,
        const XPS_POINT *endPoint);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IXpsOMLinearGradientBrush *This,
        IXpsOMLinearGradientBrush **linearGradientBrush);

    END_INTERFACE
} IXpsOMLinearGradientBrushVtbl;

interface IXpsOMLinearGradientBrush {
    CONST_VTBL IXpsOMLinearGradientBrushVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMLinearGradientBrush_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMLinearGradientBrush_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMLinearGradientBrush_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMShareable methods ***/
#define IXpsOMLinearGradientBrush_GetOwner(This,owner) \
    ((This)->lpVtbl->GetOwner(This,owner))
#define IXpsOMLinearGradientBrush_GetType(This,type) \
    ((This)->lpVtbl->GetType(This,type))
/*** IXpsOMBrush methods ***/
#define IXpsOMLinearGradientBrush_GetOpacity(This,opacity) \
    ((This)->lpVtbl->GetOpacity(This,opacity))
#define IXpsOMLinearGradientBrush_SetOpacity(This,opacity) \
    ((This)->lpVtbl->SetOpacity(This,opacity))
/*** IXpsOMGradientBrush methods ***/
#define IXpsOMLinearGradientBrush_GetGradientStops(This,gradientStops) \
    ((This)->lpVtbl->GetGradientStops(This,gradientStops))
#define IXpsOMLinearGradientBrush_GetTransform(This,transform) \
    ((This)->lpVtbl->GetTransform(This,transform))
#define IXpsOMLinearGradientBrush_GetTransformLocal(This,transform) \
    ((This)->lpVtbl->GetTransformLocal(This,transform))
#define IXpsOMLinearGradientBrush_SetTransformLocal(This,transform) \
    ((This)->lpVtbl->SetTransformLocal(This,transform))
#define IXpsOMLinearGradientBrush_GetTransformLookup(This,key) \
    ((This)->lpVtbl->GetTransformLookup(This,key))
#define IXpsOMLinearGradientBrush_SetTransformLookup(This,key) \
    ((This)->lpVtbl->SetTransformLookup(This,key))
#define IXpsOMLinearGradientBrush_GetSpreadMethod(This,spreadMethod) \
    ((This)->lpVtbl->GetSpreadMethod(This,spreadMethod))
#define IXpsOMLinearGradientBrush_SetSpreadMethod(This,spreadMethod) \
    ((This)->lpVtbl->SetSpreadMethod(This,spreadMethod))
#define IXpsOMLinearGradientBrush_GetColorInterpolationMode(This,colorInterpolationMode) \
    ((This)->lpVtbl->GetColorInterpolationMode(This,colorInterpolationMode))
#define IXpsOMLinearGradientBrush_SetColorInterpolationMode(This,colorInterpolationMode) \
    ((This)->lpVtbl->SetColorInterpolationMode(This,colorInterpolationMode))
/*** IXpsOMLinearGradientBrush methods ***/
#define IXpsOMLinearGradientBrush_GetStartPoint(This,startPoint) \
    ((This)->lpVtbl->GetStartPoint(This,startPoint))
#define IXpsOMLinearGradientBrush_SetStartPoint(This,startPoint) \
    ((This)->lpVtbl->SetStartPoint(This,startPoint))
#define IXpsOMLinearGradientBrush_GetEndPoint(This,endPoint) \
    ((This)->lpVtbl->GetEndPoint(This,endPoint))
#define IXpsOMLinearGradientBrush_SetEndPoint(This,endPoint) \
    ((This)->lpVtbl->SetEndPoint(This,endPoint))
#define IXpsOMLinearGradientBrush_Clone(This,linearGradientBrush) \
    ((This)->lpVtbl->Clone(This,linearGradientBrush))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMLinearGradientBrush_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMRadialGradientBrush interface
 */
#ifndef __IXpsOMRadialGradientBrush_INTERFACE_DEFINED__
#define __IXpsOMRadialGradientBrush_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMRadialGradientBrush;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMRadialGradientBrushVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMRadialGradientBrush *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMRadialGradientBrush *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMRadialGradientBrush *This);

    /*** IXpsOMShareable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetOwner)(
        IXpsOMRadialGradientBrush *This,
        IUnknown **owner);

    HRESULT (STDMETHODCALLTYPE *GetType)(
        IXpsOMRadialGradientBrush *This,
        XPS_OBJECT_TYPE *type);

    /*** IXpsOMBrush methods ***/
    HRESULT (STDMETHODCALLTYPE *GetOpacity)(
        IXpsOMRadialGradientBrush *This,
        FLOAT *opacity);

    HRESULT (STDMETHODCALLTYPE *SetOpacity)(
        IXpsOMRadialGradientBrush *This,
        FLOAT opacity);

    /*** IXpsOMGradientBrush methods ***/
    HRESULT (STDMETHODCALLTYPE *GetGradientStops)(
        IXpsOMRadialGradientBrush *This,
        IXpsOMGradientStopCollection **gradientStops);

    HRESULT (STDMETHODCALLTYPE *GetTransform)(
        IXpsOMRadialGradientBrush *This,
        IXpsOMMatrixTransform **transform);

    HRESULT (STDMETHODCALLTYPE *GetTransformLocal)(
        IXpsOMRadialGradientBrush *This,
        IXpsOMMatrixTransform **transform);

    HRESULT (STDMETHODCALLTYPE *SetTransformLocal)(
        IXpsOMRadialGradientBrush *This,
        IXpsOMMatrixTransform *transform);

    HRESULT (STDMETHODCALLTYPE *GetTransformLookup)(
        IXpsOMRadialGradientBrush *This,
        LPWSTR *key);

    HRESULT (STDMETHODCALLTYPE *SetTransformLookup)(
        IXpsOMRadialGradientBrush *This,
        LPCWSTR key);

    HRESULT (STDMETHODCALLTYPE *GetSpreadMethod)(
        IXpsOMRadialGradientBrush *This,
        XPS_SPREAD_METHOD *spreadMethod);

    HRESULT (STDMETHODCALLTYPE *SetSpreadMethod)(
        IXpsOMRadialGradientBrush *This,
        XPS_SPREAD_METHOD spreadMethod);

    HRESULT (STDMETHODCALLTYPE *GetColorInterpolationMode)(
        IXpsOMRadialGradientBrush *This,
        XPS_COLOR_INTERPOLATION *colorInterpolationMode);

    HRESULT (STDMETHODCALLTYPE *SetColorInterpolationMode)(
        IXpsOMRadialGradientBrush *This,
        XPS_COLOR_INTERPOLATION colorInterpolationMode);

    /*** IXpsOMRadialGradientBrush methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCenter)(
        IXpsOMRadialGradientBrush *This,
        XPS_POINT *center);

    HRESULT (STDMETHODCALLTYPE *SetCenter)(
        IXpsOMRadialGradientBrush *This,
        const XPS_POINT *center);

    HRESULT (STDMETHODCALLTYPE *GetRadiiSizes)(
        IXpsOMRadialGradientBrush *This,
        XPS_SIZE *radiiSizes);

    HRESULT (STDMETHODCALLTYPE *SetRadiiSizes)(
        IXpsOMRadialGradientBrush *This,
        const XPS_SIZE *radiiSizes);

    HRESULT (STDMETHODCALLTYPE *GetGradientOrigin)(
        IXpsOMRadialGradientBrush *This,
        XPS_POINT *origin);

    HRESULT (STDMETHODCALLTYPE *SetGradientOrigin)(
        IXpsOMRadialGradientBrush *This,
        const XPS_POINT *origin);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IXpsOMRadialGradientBrush *This,
        IXpsOMRadialGradientBrush **radialGradientBrush);

    END_INTERFACE
} IXpsOMRadialGradientBrushVtbl;

interface IXpsOMRadialGradientBrush {
    CONST_VTBL IXpsOMRadialGradientBrushVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMRadialGradientBrush_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMRadialGradientBrush_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMRadialGradientBrush_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMShareable methods ***/
#define IXpsOMRadialGradientBrush_GetOwner(This,owner) \
    ((This)->lpVtbl->GetOwner(This,owner))
#define IXpsOMRadialGradientBrush_GetType(This,type) \
    ((This)->lpVtbl->GetType(This,type))
/*** IXpsOMBrush methods ***/
#define IXpsOMRadialGradientBrush_GetOpacity(This,opacity) \
    ((This)->lpVtbl->GetOpacity(This,opacity))
#define IXpsOMRadialGradientBrush_SetOpacity(This,opacity) \
    ((This)->lpVtbl->SetOpacity(This,opacity))
/*** IXpsOMGradientBrush methods ***/
#define IXpsOMRadialGradientBrush_GetGradientStops(This,gradientStops) \
    ((This)->lpVtbl->GetGradientStops(This,gradientStops))
#define IXpsOMRadialGradientBrush_GetTransform(This,transform) \
    ((This)->lpVtbl->GetTransform(This,transform))
#define IXpsOMRadialGradientBrush_GetTransformLocal(This,transform) \
    ((This)->lpVtbl->GetTransformLocal(This,transform))
#define IXpsOMRadialGradientBrush_SetTransformLocal(This,transform) \
    ((This)->lpVtbl->SetTransformLocal(This,transform))
#define IXpsOMRadialGradientBrush_GetTransformLookup(This,key) \
    ((This)->lpVtbl->GetTransformLookup(This,key))
#define IXpsOMRadialGradientBrush_SetTransformLookup(This,key) \
    ((This)->lpVtbl->SetTransformLookup(This,key))
#define IXpsOMRadialGradientBrush_GetSpreadMethod(This,spreadMethod) \
    ((This)->lpVtbl->GetSpreadMethod(This,spreadMethod))
#define IXpsOMRadialGradientBrush_SetSpreadMethod(This,spreadMethod) \
    ((This)->lpVtbl->SetSpreadMethod(This,spreadMethod))
#define IXpsOMRadialGradientBrush_GetColorInterpolationMode(This,colorInterpolationMode) \
    ((This)->lpVtbl->GetColorInterpolationMode(This,colorInterpolationMode))
#define IXpsOMRadialGradientBrush_SetColorInterpolationMode(This,colorInterpolationMode) \
    ((This)->lpVtbl->SetColorInterpolationMode(This,colorInterpolationMode))
/*** IXpsOMRadialGradientBrush methods ***/
#define IXpsOMRadialGradientBrush_GetCenter(This,center) \
    ((This)->lpVtbl->GetCenter(This,center))
#define IXpsOMRadialGradientBrush_SetCenter(This,center) \
    ((This)->lpVtbl->SetCenter(This,center))
#define IXpsOMRadialGradientBrush_GetRadiiSizes(This,radiiSizes) \
    ((This)->lpVtbl->GetRadiiSizes(This,radiiSizes))
#define IXpsOMRadialGradientBrush_SetRadiiSizes(This,radiiSizes) \
    ((This)->lpVtbl->SetRadiiSizes(This,radiiSizes))
#define IXpsOMRadialGradientBrush_GetGradientOrigin(This,origin) \
    ((This)->lpVtbl->GetGradientOrigin(This,origin))
#define IXpsOMRadialGradientBrush_SetGradientOrigin(This,origin) \
    ((This)->lpVtbl->SetGradientOrigin(This,origin))
#define IXpsOMRadialGradientBrush_Clone(This,radialGradientBrush) \
    ((This)->lpVtbl->Clone(This,radialGradientBrush))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMRadialGradientBrush_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMResource interface
 */
#ifndef __IXpsOMResource_INTERFACE_DEFINED__
#define __IXpsOMResource_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMResource;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMResourceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMResource *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMResource *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMResource *This);

    /*** IXpsOMPart methods ***/
    HRESULT (STDMETHODCALLTYPE *GetPartName)(
        IXpsOMResource *This,
        IOpcPartUri **partUri);

    HRESULT (STDMETHODCALLTYPE *SetPartName)(
        IXpsOMResource *This,
        IOpcPartUri *partUri);

    END_INTERFACE
} IXpsOMResourceVtbl;

interface IXpsOMResource {
    CONST_VTBL IXpsOMResourceVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMResource_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMResource_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMResource_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMPart methods ***/
#define IXpsOMResource_GetPartName(This,partUri) \
    ((This)->lpVtbl->GetPartName(This,partUri))
#define IXpsOMResource_SetPartName(This,partUri) \
    ((This)->lpVtbl->SetPartName(This,partUri))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMResource_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMPartResources interface
 */
#ifndef __IXpsOMPartResources_INTERFACE_DEFINED__
#define __IXpsOMPartResources_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMPartResources;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMPartResourcesVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMPartResources *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMPartResources *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMPartResources *This);

    /*** IXpsOMPartResources methods ***/
    HRESULT (STDMETHODCALLTYPE *GetFontResources)(
        IXpsOMPartResources *This,
        IXpsOMFontResourceCollection **fontResources);

    HRESULT (STDMETHODCALLTYPE *GetImageResources)(
        IXpsOMPartResources *This,
        IXpsOMImageResourceCollection **imageResources);

    HRESULT (STDMETHODCALLTYPE *GetColorProfileResources)(
        IXpsOMPartResources *This,
        IXpsOMColorProfileResourceCollection **colorProfileResources);

    HRESULT (STDMETHODCALLTYPE *GetRemoteDictionaryResources)(
        IXpsOMPartResources *This,
        IXpsOMRemoteDictionaryResourceCollection **dictionaryResources);

    END_INTERFACE
} IXpsOMPartResourcesVtbl;

interface IXpsOMPartResources {
    CONST_VTBL IXpsOMPartResourcesVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMPartResources_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMPartResources_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMPartResources_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMPartResources methods ***/
#define IXpsOMPartResources_GetFontResources(This,fontResources) \
    ((This)->lpVtbl->GetFontResources(This,fontResources))
#define IXpsOMPartResources_GetImageResources(This,imageResources) \
    ((This)->lpVtbl->GetImageResources(This,imageResources))
#define IXpsOMPartResources_GetColorProfileResources(This,colorProfileResources) \
    ((This)->lpVtbl->GetColorProfileResources(This,colorProfileResources))
#define IXpsOMPartResources_GetRemoteDictionaryResources(This,dictionaryResources) \
    ((This)->lpVtbl->GetRemoteDictionaryResources(This,dictionaryResources))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMPartResources_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMDictionary interface
 */
#ifndef __IXpsOMDictionary_INTERFACE_DEFINED__
#define __IXpsOMDictionary_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMDictionary;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMDictionaryVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMDictionary *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMDictionary *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMDictionary *This);

    /*** IXpsOMDictionary methods ***/
    HRESULT (STDMETHODCALLTYPE *GetOwner)(
        IXpsOMDictionary *This,
        IUnknown **owner);

    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IXpsOMDictionary *This,
        UINT32 *count);

    HRESULT (STDMETHODCALLTYPE *GetAt)(
        IXpsOMDictionary *This,
        UINT32 index,
        LPWSTR *key,
        IXpsOMShareable **entry);

    HRESULT (STDMETHODCALLTYPE *GetByKey)(
        IXpsOMDictionary *This,
        LPCWSTR key,
        IXpsOMShareable *beforeEntry,
        IXpsOMShareable **entry);

    HRESULT (STDMETHODCALLTYPE *GetIndex)(
        IXpsOMDictionary *This,
        IXpsOMShareable *entry,
        UINT32 *index);

    HRESULT (STDMETHODCALLTYPE *Append)(
        IXpsOMDictionary *This,
        LPCWSTR key,
        IXpsOMShareable *entry);

    HRESULT (STDMETHODCALLTYPE *InsertAt)(
        IXpsOMDictionary *This,
        UINT32 index,
        LPCWSTR key,
        IXpsOMShareable *entry);

    HRESULT (STDMETHODCALLTYPE *RemoveAt)(
        IXpsOMDictionary *This,
        UINT32 index);

    HRESULT (STDMETHODCALLTYPE *SetAt)(
        IXpsOMDictionary *This,
        UINT32 index,
        LPCWSTR key,
        IXpsOMShareable *entry);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IXpsOMDictionary *This,
        IXpsOMDictionary **dictionary);

    END_INTERFACE
} IXpsOMDictionaryVtbl;

interface IXpsOMDictionary {
    CONST_VTBL IXpsOMDictionaryVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMDictionary_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMDictionary_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMDictionary_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMDictionary methods ***/
#define IXpsOMDictionary_GetOwner(This,owner) \
    ((This)->lpVtbl->GetOwner(This,owner))
#define IXpsOMDictionary_GetCount(This,count) \
    ((This)->lpVtbl->GetCount(This,count))
#define IXpsOMDictionary_GetAt(This,index,key,entry) \
    ((This)->lpVtbl->GetAt(This,index,key,entry))
#define IXpsOMDictionary_GetByKey(This,key,beforeEntry,entry) \
    ((This)->lpVtbl->GetByKey(This,key,beforeEntry,entry))
#define IXpsOMDictionary_GetIndex(This,entry,index) \
    ((This)->lpVtbl->GetIndex(This,entry,index))
#define IXpsOMDictionary_Append(This,key,entry) \
    ((This)->lpVtbl->Append(This,key,entry))
#define IXpsOMDictionary_InsertAt(This,index,key,entry) \
    ((This)->lpVtbl->InsertAt(This,index,key,entry))
#define IXpsOMDictionary_RemoveAt(This,index) \
    ((This)->lpVtbl->RemoveAt(This,index))
#define IXpsOMDictionary_SetAt(This,index,key,entry) \
    ((This)->lpVtbl->SetAt(This,index,key,entry))
#define IXpsOMDictionary_Clone(This,dictionary) \
    ((This)->lpVtbl->Clone(This,dictionary))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMDictionary_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMFontResource interface
 */
#ifndef __IXpsOMFontResource_INTERFACE_DEFINED__
#define __IXpsOMFontResource_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMFontResource;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMFontResourceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMFontResource *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMFontResource *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMFontResource *This);

    /*** IXpsOMPart methods ***/
    HRESULT (STDMETHODCALLTYPE *GetPartName)(
        IXpsOMFontResource *This,
        IOpcPartUri **partUri);

    HRESULT (STDMETHODCALLTYPE *SetPartName)(
        IXpsOMFontResource *This,
        IOpcPartUri *partUri);

    /*** IXpsOMFontResource methods ***/
    HRESULT (STDMETHODCALLTYPE *GetStream)(
        IXpsOMFontResource *This,
        IStream **readerStream);

    HRESULT (STDMETHODCALLTYPE *SetContent)(
        IXpsOMFontResource *This,
        IStream *sourceStream,
        XPS_FONT_EMBEDDING embeddingOption,
        IOpcPartUri *partName);

    HRESULT (STDMETHODCALLTYPE *GetEmbeddingOption)(
        IXpsOMFontResource *This,
        XPS_FONT_EMBEDDING *embeddingOption);

    END_INTERFACE
} IXpsOMFontResourceVtbl;

interface IXpsOMFontResource {
    CONST_VTBL IXpsOMFontResourceVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMFontResource_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMFontResource_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMFontResource_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMPart methods ***/
#define IXpsOMFontResource_GetPartName(This,partUri) \
    ((This)->lpVtbl->GetPartName(This,partUri))
#define IXpsOMFontResource_SetPartName(This,partUri) \
    ((This)->lpVtbl->SetPartName(This,partUri))
/*** IXpsOMFontResource methods ***/
#define IXpsOMFontResource_GetStream(This,readerStream) \
    ((This)->lpVtbl->GetStream(This,readerStream))
#define IXpsOMFontResource_SetContent(This,sourceStream,embeddingOption,partName) \
    ((This)->lpVtbl->SetContent(This,sourceStream,embeddingOption,partName))
#define IXpsOMFontResource_GetEmbeddingOption(This,embeddingOption) \
    ((This)->lpVtbl->GetEmbeddingOption(This,embeddingOption))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMFontResource_INTERFACE_DEFINED__ */
/*****************************************************************************
 * IXpsOMFontResourceCollection interface
 */
#ifndef __IXpsOMFontResourceCollection_INTERFACE_DEFINED__
#define __IXpsOMFontResourceCollection_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMFontResourceCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMFontResourceCollectionVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMFontResourceCollection *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMFontResourceCollection *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMFontResourceCollection *This);

    /*** IXpsOMFontResourceCollection methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IXpsOMFontResourceCollection *This,
        UINT32 *count);

    HRESULT (STDMETHODCALLTYPE *GetAt)(
        IXpsOMFontResourceCollection *This,
        UINT32 index,
        IXpsOMFontResource **value);

    HRESULT (STDMETHODCALLTYPE *SetAt)(
        IXpsOMFontResourceCollection *This,
        UINT32 index,
        IXpsOMFontResource *value);

    HRESULT (STDMETHODCALLTYPE *InsertAt)(
        IXpsOMFontResourceCollection *This,
        UINT32 index,
        IXpsOMFontResource *value);

    HRESULT (STDMETHODCALLTYPE *Append)(
        IXpsOMFontResourceCollection *This,
        IXpsOMFontResource *value);

    HRESULT (STDMETHODCALLTYPE *RemoveAt)(
        IXpsOMFontResourceCollection *This,
        UINT32 index);

    HRESULT (STDMETHODCALLTYPE *GetByPartName)(
        IXpsOMFontResourceCollection *This,
        IOpcPartUri *partName,
        IXpsOMFontResource **part);

    END_INTERFACE
} IXpsOMFontResourceCollectionVtbl;

interface IXpsOMFontResourceCollection {
    CONST_VTBL IXpsOMFontResourceCollectionVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMFontResourceCollection_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMFontResourceCollection_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMFontResourceCollection_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMFontResourceCollection methods ***/
#define IXpsOMFontResourceCollection_GetCount(This,count) \
    ((This)->lpVtbl->GetCount(This,count))
#define IXpsOMFontResourceCollection_GetAt(This,index,value) \
    ((This)->lpVtbl->GetAt(This,index,value))
#define IXpsOMFontResourceCollection_SetAt(This,index,value) \
    ((This)->lpVtbl->SetAt(This,index,value))
#define IXpsOMFontResourceCollection_InsertAt(This,index,value) \
    ((This)->lpVtbl->InsertAt(This,index,value))
#define IXpsOMFontResourceCollection_Append(This,value) \
    ((This)->lpVtbl->Append(This,value))
#define IXpsOMFontResourceCollection_RemoveAt(This,index) \
    ((This)->lpVtbl->RemoveAt(This,index))
#define IXpsOMFontResourceCollection_GetByPartName(This,partName,part) \
    ((This)->lpVtbl->GetByPartName(This,partName,part))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMFontResourceCollection_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMImageResource interface
 */
#ifndef __IXpsOMImageResource_INTERFACE_DEFINED__
#define __IXpsOMImageResource_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMImageResource;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMImageResourceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMImageResource *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMImageResource *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMImageResource *This);

    /*** IXpsOMPart methods ***/
    HRESULT (STDMETHODCALLTYPE *GetPartName)(
        IXpsOMImageResource *This,
        IOpcPartUri **partUri);

    HRESULT (STDMETHODCALLTYPE *SetPartName)(
        IXpsOMImageResource *This,
        IOpcPartUri *partUri);

    /*** IXpsOMImageResource methods ***/
    HRESULT (STDMETHODCALLTYPE *GetStream)(
        IXpsOMImageResource *This,
        IStream **readerStream);

    HRESULT (STDMETHODCALLTYPE *SetContent)(
        IXpsOMImageResource *This,
        IStream *sourceStream,
        XPS_IMAGE_TYPE imageType,
        IOpcPartUri *partName);

    HRESULT (STDMETHODCALLTYPE *GetImageType)(
        IXpsOMImageResource *This,
        XPS_IMAGE_TYPE *imageType);

    END_INTERFACE
} IXpsOMImageResourceVtbl;

interface IXpsOMImageResource {
    CONST_VTBL IXpsOMImageResourceVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMImageResource_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMImageResource_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMImageResource_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMPart methods ***/
#define IXpsOMImageResource_GetPartName(This,partUri) \
    ((This)->lpVtbl->GetPartName(This,partUri))
#define IXpsOMImageResource_SetPartName(This,partUri) \
    ((This)->lpVtbl->SetPartName(This,partUri))
/*** IXpsOMImageResource methods ***/
#define IXpsOMImageResource_GetStream(This,readerStream) \
    ((This)->lpVtbl->GetStream(This,readerStream))
#define IXpsOMImageResource_SetContent(This,sourceStream,imageType,partName) \
    ((This)->lpVtbl->SetContent(This,sourceStream,imageType,partName))
#define IXpsOMImageResource_GetImageType(This,imageType) \
    ((This)->lpVtbl->GetImageType(This,imageType))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMImageResource_INTERFACE_DEFINED__ */
/*****************************************************************************
 * IXpsOMImageResourceCollection interface
 */
#ifndef __IXpsOMImageResourceCollection_INTERFACE_DEFINED__
#define __IXpsOMImageResourceCollection_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMImageResourceCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMImageResourceCollectionVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMImageResourceCollection *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMImageResourceCollection *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMImageResourceCollection *This);

    /*** IXpsOMImageResourceCollection methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IXpsOMImageResourceCollection *This,
        UINT32 *count);

    HRESULT (STDMETHODCALLTYPE *GetAt)(
        IXpsOMImageResourceCollection *This,
        UINT32 index,
        IXpsOMImageResource **object);

    HRESULT (STDMETHODCALLTYPE *InsertAt)(
        IXpsOMImageResourceCollection *This,
        UINT32 index,
        IXpsOMImageResource *object);

    HRESULT (STDMETHODCALLTYPE *RemoveAt)(
        IXpsOMImageResourceCollection *This,
        UINT32 index);

    HRESULT (STDMETHODCALLTYPE *SetAt)(
        IXpsOMImageResourceCollection *This,
        UINT32 index,
        IXpsOMImageResource *object);

    HRESULT (STDMETHODCALLTYPE *Append)(
        IXpsOMImageResourceCollection *This,
        IXpsOMImageResource *object);

    HRESULT (STDMETHODCALLTYPE *GetByPartName)(
        IXpsOMImageResourceCollection *This,
        IOpcPartUri *partName,
        IXpsOMImageResource **part);

    END_INTERFACE
} IXpsOMImageResourceCollectionVtbl;

interface IXpsOMImageResourceCollection {
    CONST_VTBL IXpsOMImageResourceCollectionVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMImageResourceCollection_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMImageResourceCollection_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMImageResourceCollection_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMImageResourceCollection methods ***/
#define IXpsOMImageResourceCollection_GetCount(This,count) \
    ((This)->lpVtbl->GetCount(This,count))
#define IXpsOMImageResourceCollection_GetAt(This,index,object) \
    ((This)->lpVtbl->GetAt(This,index,object))
#define IXpsOMImageResourceCollection_InsertAt(This,index,object) \
    ((This)->lpVtbl->InsertAt(This,index,object))
#define IXpsOMImageResourceCollection_RemoveAt(This,index) \
    ((This)->lpVtbl->RemoveAt(This,index))
#define IXpsOMImageResourceCollection_SetAt(This,index,object) \
    ((This)->lpVtbl->SetAt(This,index,object))
#define IXpsOMImageResourceCollection_Append(This,object) \
    ((This)->lpVtbl->Append(This,object))
#define IXpsOMImageResourceCollection_GetByPartName(This,partName,part) \
    ((This)->lpVtbl->GetByPartName(This,partName,part))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMImageResourceCollection_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMColorProfileResource interface
 */
#ifndef __IXpsOMColorProfileResource_INTERFACE_DEFINED__
#define __IXpsOMColorProfileResource_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMColorProfileResource;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMColorProfileResourceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMColorProfileResource *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMColorProfileResource *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMColorProfileResource *This);

    /*** IXpsOMPart methods ***/
    HRESULT (STDMETHODCALLTYPE *GetPartName)(
        IXpsOMColorProfileResource *This,
        IOpcPartUri **partUri);

    HRESULT (STDMETHODCALLTYPE *SetPartName)(
        IXpsOMColorProfileResource *This,
        IOpcPartUri *partUri);

    /*** IXpsOMColorProfileResource methods ***/
    HRESULT (STDMETHODCALLTYPE *GetStream)(
        IXpsOMColorProfileResource *This,
        IStream **stream);

    HRESULT (STDMETHODCALLTYPE *SetContent)(
        IXpsOMColorProfileResource *This,
        IStream *sourceStream,
        IOpcPartUri *partName);

    END_INTERFACE
} IXpsOMColorProfileResourceVtbl;

interface IXpsOMColorProfileResource {
    CONST_VTBL IXpsOMColorProfileResourceVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMColorProfileResource_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMColorProfileResource_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMColorProfileResource_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMPart methods ***/
#define IXpsOMColorProfileResource_GetPartName(This,partUri) \
    ((This)->lpVtbl->GetPartName(This,partUri))
#define IXpsOMColorProfileResource_SetPartName(This,partUri) \
    ((This)->lpVtbl->SetPartName(This,partUri))
/*** IXpsOMColorProfileResource methods ***/
#define IXpsOMColorProfileResource_GetStream(This,stream) \
    ((This)->lpVtbl->GetStream(This,stream))
#define IXpsOMColorProfileResource_SetContent(This,sourceStream,partName) \
    ((This)->lpVtbl->SetContent(This,sourceStream,partName))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMColorProfileResource_INTERFACE_DEFINED__ */
/*****************************************************************************
 * IXpsOMColorProfileResourceCollection interface
 */
#ifndef __IXpsOMColorProfileResourceCollection_INTERFACE_DEFINED__
#define __IXpsOMColorProfileResourceCollection_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMColorProfileResourceCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMColorProfileResourceCollectionVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMColorProfileResourceCollection *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMColorProfileResourceCollection *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMColorProfileResourceCollection *This);

    /*** IXpsOMColorProfileResourceCollection methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IXpsOMColorProfileResourceCollection *This,
        UINT32 *count);

    HRESULT (STDMETHODCALLTYPE *GetAt)(
        IXpsOMColorProfileResourceCollection *This,
        UINT32 index,
        IXpsOMColorProfileResource **object);

    HRESULT (STDMETHODCALLTYPE *InsertAt)(
        IXpsOMColorProfileResourceCollection *This,
        UINT32 index,
        IXpsOMColorProfileResource *object);

    HRESULT (STDMETHODCALLTYPE *RemoveAt)(
        IXpsOMColorProfileResourceCollection *This,
        UINT32 index);

    HRESULT (STDMETHODCALLTYPE *SetAt)(
        IXpsOMColorProfileResourceCollection *This,
        UINT32 index,
        IXpsOMColorProfileResource *object);

    HRESULT (STDMETHODCALLTYPE *Append)(
        IXpsOMColorProfileResourceCollection *This,
        IXpsOMColorProfileResource *object);

    HRESULT (STDMETHODCALLTYPE *GetByPartName)(
        IXpsOMColorProfileResourceCollection *This,
        IOpcPartUri *partName,
        IXpsOMColorProfileResource **part);

    END_INTERFACE
} IXpsOMColorProfileResourceCollectionVtbl;

interface IXpsOMColorProfileResourceCollection {
    CONST_VTBL IXpsOMColorProfileResourceCollectionVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMColorProfileResourceCollection_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMColorProfileResourceCollection_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMColorProfileResourceCollection_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMColorProfileResourceCollection methods ***/
#define IXpsOMColorProfileResourceCollection_GetCount(This,count) \
    ((This)->lpVtbl->GetCount(This,count))
#define IXpsOMColorProfileResourceCollection_GetAt(This,index,object) \
    ((This)->lpVtbl->GetAt(This,index,object))
#define IXpsOMColorProfileResourceCollection_InsertAt(This,index,object) \
    ((This)->lpVtbl->InsertAt(This,index,object))
#define IXpsOMColorProfileResourceCollection_RemoveAt(This,index) \
    ((This)->lpVtbl->RemoveAt(This,index))
#define IXpsOMColorProfileResourceCollection_SetAt(This,index,object) \
    ((This)->lpVtbl->SetAt(This,index,object))
#define IXpsOMColorProfileResourceCollection_Append(This,object) \
    ((This)->lpVtbl->Append(This,object))
#define IXpsOMColorProfileResourceCollection_GetByPartName(This,partName,part) \
    ((This)->lpVtbl->GetByPartName(This,partName,part))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMColorProfileResourceCollection_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMPrintTicketResource interface
 */
#ifndef __IXpsOMPrintTicketResource_INTERFACE_DEFINED__
#define __IXpsOMPrintTicketResource_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMPrintTicketResource;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMPrintTicketResourceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMPrintTicketResource *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMPrintTicketResource *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMPrintTicketResource *This);

    /*** IXpsOMPart methods ***/
    HRESULT (STDMETHODCALLTYPE *GetPartName)(
        IXpsOMPrintTicketResource *This,
        IOpcPartUri **partUri);

    HRESULT (STDMETHODCALLTYPE *SetPartName)(
        IXpsOMPrintTicketResource *This,
        IOpcPartUri *partUri);

    /*** IXpsOMPrintTicketResource methods ***/
    HRESULT (STDMETHODCALLTYPE *GetStream)(
        IXpsOMPrintTicketResource *This,
        IStream **stream);

    HRESULT (STDMETHODCALLTYPE *SetContent)(
        IXpsOMPrintTicketResource *This,
        IStream *sourceStream,
        IOpcPartUri *partName);

    END_INTERFACE
} IXpsOMPrintTicketResourceVtbl;

interface IXpsOMPrintTicketResource {
    CONST_VTBL IXpsOMPrintTicketResourceVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMPrintTicketResource_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMPrintTicketResource_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMPrintTicketResource_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMPart methods ***/
#define IXpsOMPrintTicketResource_GetPartName(This,partUri) \
    ((This)->lpVtbl->GetPartName(This,partUri))
#define IXpsOMPrintTicketResource_SetPartName(This,partUri) \
    ((This)->lpVtbl->SetPartName(This,partUri))
/*** IXpsOMPrintTicketResource methods ***/
#define IXpsOMPrintTicketResource_GetStream(This,stream) \
    ((This)->lpVtbl->GetStream(This,stream))
#define IXpsOMPrintTicketResource_SetContent(This,sourceStream,partName) \
    ((This)->lpVtbl->SetContent(This,sourceStream,partName))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMPrintTicketResource_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMRemoteDictionaryResource interface
 */
#ifndef __IXpsOMRemoteDictionaryResource_INTERFACE_DEFINED__
#define __IXpsOMRemoteDictionaryResource_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMRemoteDictionaryResource;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMRemoteDictionaryResourceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMRemoteDictionaryResource *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMRemoteDictionaryResource *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMRemoteDictionaryResource *This);

    /*** IXpsOMPart methods ***/
    HRESULT (STDMETHODCALLTYPE *GetPartName)(
        IXpsOMRemoteDictionaryResource *This,
        IOpcPartUri **partUri);

    HRESULT (STDMETHODCALLTYPE *SetPartName)(
        IXpsOMRemoteDictionaryResource *This,
        IOpcPartUri *partUri);

    /*** IXpsOMRemoteDictionaryResource methods ***/
    HRESULT (STDMETHODCALLTYPE *GetDictionary)(
        IXpsOMRemoteDictionaryResource *This,
        IXpsOMDictionary **dictionary);

    HRESULT (STDMETHODCALLTYPE *SetDictionary)(
        IXpsOMRemoteDictionaryResource *This,
        IXpsOMDictionary *dictionary);

    END_INTERFACE
} IXpsOMRemoteDictionaryResourceVtbl;

interface IXpsOMRemoteDictionaryResource {
    CONST_VTBL IXpsOMRemoteDictionaryResourceVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMRemoteDictionaryResource_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMRemoteDictionaryResource_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMRemoteDictionaryResource_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMPart methods ***/
#define IXpsOMRemoteDictionaryResource_GetPartName(This,partUri) \
    ((This)->lpVtbl->GetPartName(This,partUri))
#define IXpsOMRemoteDictionaryResource_SetPartName(This,partUri) \
    ((This)->lpVtbl->SetPartName(This,partUri))
/*** IXpsOMRemoteDictionaryResource methods ***/
#define IXpsOMRemoteDictionaryResource_GetDictionary(This,dictionary) \
    ((This)->lpVtbl->GetDictionary(This,dictionary))
#define IXpsOMRemoteDictionaryResource_SetDictionary(This,dictionary) \
    ((This)->lpVtbl->SetDictionary(This,dictionary))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMRemoteDictionaryResource_INTERFACE_DEFINED__ */
/*****************************************************************************
 * IXpsOMRemoteDictionaryResourceCollection interface
 */
#ifndef __IXpsOMRemoteDictionaryResourceCollection_INTERFACE_DEFINED__
#define __IXpsOMRemoteDictionaryResourceCollection_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMRemoteDictionaryResourceCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMRemoteDictionaryResourceCollectionVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMRemoteDictionaryResourceCollection *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMRemoteDictionaryResourceCollection *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMRemoteDictionaryResourceCollection *This);

    /*** IXpsOMRemoteDictionaryResourceCollection methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IXpsOMRemoteDictionaryResourceCollection *This,
        UINT32 *count);

    HRESULT (STDMETHODCALLTYPE *GetAt)(
        IXpsOMRemoteDictionaryResourceCollection *This,
        UINT32 index,
        IXpsOMRemoteDictionaryResource **object);

    HRESULT (STDMETHODCALLTYPE *InsertAt)(
        IXpsOMRemoteDictionaryResourceCollection *This,
        UINT32 index,
        IXpsOMRemoteDictionaryResource *object);

    HRESULT (STDMETHODCALLTYPE *RemoveAt)(
        IXpsOMRemoteDictionaryResourceCollection *This,
        UINT32 index);

    HRESULT (STDMETHODCALLTYPE *SetAt)(
        IXpsOMRemoteDictionaryResourceCollection *This,
        UINT32 index,
        IXpsOMRemoteDictionaryResource *object);

    HRESULT (STDMETHODCALLTYPE *Append)(
        IXpsOMRemoteDictionaryResourceCollection *This,
        IXpsOMRemoteDictionaryResource *object);

    HRESULT (STDMETHODCALLTYPE *GetByPartName)(
        IXpsOMRemoteDictionaryResourceCollection *This,
        IOpcPartUri *partName,
        IXpsOMRemoteDictionaryResource **remoteDictionaryResource);

    END_INTERFACE
} IXpsOMRemoteDictionaryResourceCollectionVtbl;

interface IXpsOMRemoteDictionaryResourceCollection {
    CONST_VTBL IXpsOMRemoteDictionaryResourceCollectionVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMRemoteDictionaryResourceCollection_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMRemoteDictionaryResourceCollection_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMRemoteDictionaryResourceCollection_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMRemoteDictionaryResourceCollection methods ***/
#define IXpsOMRemoteDictionaryResourceCollection_GetCount(This,count) \
    ((This)->lpVtbl->GetCount(This,count))
#define IXpsOMRemoteDictionaryResourceCollection_GetAt(This,index,object) \
    ((This)->lpVtbl->GetAt(This,index,object))
#define IXpsOMRemoteDictionaryResourceCollection_InsertAt(This,index,object) \
    ((This)->lpVtbl->InsertAt(This,index,object))
#define IXpsOMRemoteDictionaryResourceCollection_RemoveAt(This,index) \
    ((This)->lpVtbl->RemoveAt(This,index))
#define IXpsOMRemoteDictionaryResourceCollection_SetAt(This,index,object) \
    ((This)->lpVtbl->SetAt(This,index,object))
#define IXpsOMRemoteDictionaryResourceCollection_Append(This,object) \
    ((This)->lpVtbl->Append(This,object))
#define IXpsOMRemoteDictionaryResourceCollection_GetByPartName(This,partName,remoteDictionaryResource) \
    ((This)->lpVtbl->GetByPartName(This,partName,remoteDictionaryResource))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMRemoteDictionaryResourceCollection_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMSignatureBlockResourceCollection interface
 */
#ifndef __IXpsOMSignatureBlockResourceCollection_INTERFACE_DEFINED__
#define __IXpsOMSignatureBlockResourceCollection_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMSignatureBlockResourceCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMSignatureBlockResourceCollectionVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMSignatureBlockResourceCollection *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMSignatureBlockResourceCollection *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMSignatureBlockResourceCollection *This);

    /*** IXpsOMSignatureBlockResourceCollection methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IXpsOMSignatureBlockResourceCollection *This,
        UINT32 *count);

    HRESULT (STDMETHODCALLTYPE *GetAt)(
        IXpsOMSignatureBlockResourceCollection *This,
        UINT32 index,
        IXpsOMSignatureBlockResource **signatureBlockResource);

    HRESULT (STDMETHODCALLTYPE *InsertAt)(
        IXpsOMSignatureBlockResourceCollection *This,
        UINT32 index,
        IXpsOMSignatureBlockResource *signatureBlockResource);

    HRESULT (STDMETHODCALLTYPE *RemoveAt)(
        IXpsOMSignatureBlockResourceCollection *This,
        UINT32 index);

    HRESULT (STDMETHODCALLTYPE *SetAt)(
        IXpsOMSignatureBlockResourceCollection *This,
        UINT32 index,
        IXpsOMSignatureBlockResource *signatureBlockResource);

    HRESULT (STDMETHODCALLTYPE *Append)(
        IXpsOMSignatureBlockResourceCollection *This,
        IXpsOMSignatureBlockResource *signatureBlockResource);

    HRESULT (STDMETHODCALLTYPE *GetByPartName)(
        IXpsOMSignatureBlockResourceCollection *This,
        IOpcPartUri *partName,
        IXpsOMSignatureBlockResource **signatureBlockResource);

    END_INTERFACE
} IXpsOMSignatureBlockResourceCollectionVtbl;

interface IXpsOMSignatureBlockResourceCollection {
    CONST_VTBL IXpsOMSignatureBlockResourceCollectionVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMSignatureBlockResourceCollection_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMSignatureBlockResourceCollection_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMSignatureBlockResourceCollection_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMSignatureBlockResourceCollection methods ***/
#define IXpsOMSignatureBlockResourceCollection_GetCount(This,count) \
    ((This)->lpVtbl->GetCount(This,count))
#define IXpsOMSignatureBlockResourceCollection_GetAt(This,index,signatureBlockResource) \
    ((This)->lpVtbl->GetAt(This,index,signatureBlockResource))
#define IXpsOMSignatureBlockResourceCollection_InsertAt(This,index,signatureBlockResource) \
    ((This)->lpVtbl->InsertAt(This,index,signatureBlockResource))
#define IXpsOMSignatureBlockResourceCollection_RemoveAt(This,index) \
    ((This)->lpVtbl->RemoveAt(This,index))
#define IXpsOMSignatureBlockResourceCollection_SetAt(This,index,signatureBlockResource) \
    ((This)->lpVtbl->SetAt(This,index,signatureBlockResource))
#define IXpsOMSignatureBlockResourceCollection_Append(This,signatureBlockResource) \
    ((This)->lpVtbl->Append(This,signatureBlockResource))
#define IXpsOMSignatureBlockResourceCollection_GetByPartName(This,partName,signatureBlockResource) \
    ((This)->lpVtbl->GetByPartName(This,partName,signatureBlockResource))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMSignatureBlockResourceCollection_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMDocumentStructureResource interface
 */
#ifndef __IXpsOMDocumentStructureResource_INTERFACE_DEFINED__
#define __IXpsOMDocumentStructureResource_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMDocumentStructureResource;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMDocumentStructureResourceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMDocumentStructureResource *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMDocumentStructureResource *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMDocumentStructureResource *This);

    /*** IXpsOMPart methods ***/
    HRESULT (STDMETHODCALLTYPE *GetPartName)(
        IXpsOMDocumentStructureResource *This,
        IOpcPartUri **partUri);

    HRESULT (STDMETHODCALLTYPE *SetPartName)(
        IXpsOMDocumentStructureResource *This,
        IOpcPartUri *partUri);

    /*** IXpsOMDocumentStructureResource methods ***/
    HRESULT (STDMETHODCALLTYPE *GetOwner)(
        IXpsOMDocumentStructureResource *This,
        IXpsOMDocument **owner);

    HRESULT (STDMETHODCALLTYPE *GetStream)(
        IXpsOMDocumentStructureResource *This,
        IStream **stream);

    HRESULT (STDMETHODCALLTYPE *SetContent)(
        IXpsOMDocumentStructureResource *This,
        IStream *sourceStream,
        IOpcPartUri *partName);

    END_INTERFACE
} IXpsOMDocumentStructureResourceVtbl;

interface IXpsOMDocumentStructureResource {
    CONST_VTBL IXpsOMDocumentStructureResourceVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMDocumentStructureResource_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMDocumentStructureResource_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMDocumentStructureResource_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMPart methods ***/
#define IXpsOMDocumentStructureResource_GetPartName(This,partUri) \
    ((This)->lpVtbl->GetPartName(This,partUri))
#define IXpsOMDocumentStructureResource_SetPartName(This,partUri) \
    ((This)->lpVtbl->SetPartName(This,partUri))
/*** IXpsOMDocumentStructureResource methods ***/
#define IXpsOMDocumentStructureResource_GetOwner(This,owner) \
    ((This)->lpVtbl->GetOwner(This,owner))
#define IXpsOMDocumentStructureResource_GetStream(This,stream) \
    ((This)->lpVtbl->GetStream(This,stream))
#define IXpsOMDocumentStructureResource_SetContent(This,sourceStream,partName) \
    ((This)->lpVtbl->SetContent(This,sourceStream,partName))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMDocumentStructureResource_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMStoryFragmentsResource interface
 */
#ifndef __IXpsOMStoryFragmentsResource_INTERFACE_DEFINED__
#define __IXpsOMStoryFragmentsResource_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMStoryFragmentsResource;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMStoryFragmentsResourceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMStoryFragmentsResource *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMStoryFragmentsResource *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMStoryFragmentsResource *This);

    /*** IXpsOMPart methods ***/
    HRESULT (STDMETHODCALLTYPE *GetPartName)(
        IXpsOMStoryFragmentsResource *This,
        IOpcPartUri **partUri);

    HRESULT (STDMETHODCALLTYPE *SetPartName)(
        IXpsOMStoryFragmentsResource *This,
        IOpcPartUri *partUri);

    /*** IXpsOMStoryFragmentsResource methods ***/
    HRESULT (STDMETHODCALLTYPE *GetOwner)(
        IXpsOMStoryFragmentsResource *This,
        IXpsOMPageReference **owner);

    HRESULT (STDMETHODCALLTYPE *GetStream)(
        IXpsOMStoryFragmentsResource *This,
        IStream **stream);

    HRESULT (STDMETHODCALLTYPE *SetContent)(
        IXpsOMStoryFragmentsResource *This,
        IStream *sourceStream,
        IOpcPartUri *partName);

    END_INTERFACE
} IXpsOMStoryFragmentsResourceVtbl;

interface IXpsOMStoryFragmentsResource {
    CONST_VTBL IXpsOMStoryFragmentsResourceVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMStoryFragmentsResource_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMStoryFragmentsResource_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMStoryFragmentsResource_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMPart methods ***/
#define IXpsOMStoryFragmentsResource_GetPartName(This,partUri) \
    ((This)->lpVtbl->GetPartName(This,partUri))
#define IXpsOMStoryFragmentsResource_SetPartName(This,partUri) \
    ((This)->lpVtbl->SetPartName(This,partUri))
/*** IXpsOMStoryFragmentsResource methods ***/
#define IXpsOMStoryFragmentsResource_GetOwner(This,owner) \
    ((This)->lpVtbl->GetOwner(This,owner))
#define IXpsOMStoryFragmentsResource_GetStream(This,stream) \
    ((This)->lpVtbl->GetStream(This,stream))
#define IXpsOMStoryFragmentsResource_SetContent(This,sourceStream,partName) \
    ((This)->lpVtbl->SetContent(This,sourceStream,partName))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMStoryFragmentsResource_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMSignatureBlockResource interface
 */
#ifndef __IXpsOMSignatureBlockResource_INTERFACE_DEFINED__
#define __IXpsOMSignatureBlockResource_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMSignatureBlockResource;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMSignatureBlockResourceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMSignatureBlockResource *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMSignatureBlockResource *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMSignatureBlockResource *This);

    /*** IXpsOMPart methods ***/
    HRESULT (STDMETHODCALLTYPE *GetPartName)(
        IXpsOMSignatureBlockResource *This,
        IOpcPartUri **partUri);

    HRESULT (STDMETHODCALLTYPE *SetPartName)(
        IXpsOMSignatureBlockResource *This,
        IOpcPartUri *partUri);

    /*** IXpsOMSignatureBlockResource methods ***/
    HRESULT (STDMETHODCALLTYPE *GetOwner)(
        IXpsOMSignatureBlockResource *This,
        IXpsOMDocument **owner);

    HRESULT (STDMETHODCALLTYPE *GetStream)(
        IXpsOMSignatureBlockResource *This,
        IStream **stream);

    HRESULT (STDMETHODCALLTYPE *SetContent)(
        IXpsOMSignatureBlockResource *This,
        IStream *sourceStream,
        IOpcPartUri *partName);

    END_INTERFACE
} IXpsOMSignatureBlockResourceVtbl;

interface IXpsOMSignatureBlockResource {
    CONST_VTBL IXpsOMSignatureBlockResourceVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMSignatureBlockResource_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMSignatureBlockResource_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMSignatureBlockResource_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMPart methods ***/
#define IXpsOMSignatureBlockResource_GetPartName(This,partUri) \
    ((This)->lpVtbl->GetPartName(This,partUri))
#define IXpsOMSignatureBlockResource_SetPartName(This,partUri) \
    ((This)->lpVtbl->SetPartName(This,partUri))
/*** IXpsOMSignatureBlockResource methods ***/
#define IXpsOMSignatureBlockResource_GetOwner(This,owner) \
    ((This)->lpVtbl->GetOwner(This,owner))
#define IXpsOMSignatureBlockResource_GetStream(This,stream) \
    ((This)->lpVtbl->GetStream(This,stream))
#define IXpsOMSignatureBlockResource_SetContent(This,sourceStream,partName) \
    ((This)->lpVtbl->SetContent(This,sourceStream,partName))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMSignatureBlockResource_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMVisualCollection interface
 */
#ifndef __IXpsOMVisualCollection_INTERFACE_DEFINED__
#define __IXpsOMVisualCollection_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMVisualCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMVisualCollectionVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMVisualCollection *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMVisualCollection *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMVisualCollection *This);

    /*** IXpsOMVisualCollection methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IXpsOMVisualCollection *This,
        UINT32 *count);

    HRESULT (STDMETHODCALLTYPE *GetAt)(
        IXpsOMVisualCollection *This,
        UINT32 index,
        IXpsOMVisual **object);

    HRESULT (STDMETHODCALLTYPE *InsertAt)(
        IXpsOMVisualCollection *This,
        UINT32 index,
        IXpsOMVisual *object);

    HRESULT (STDMETHODCALLTYPE *RemoveAt)(
        IXpsOMVisualCollection *This,
        UINT32 index);

    HRESULT (STDMETHODCALLTYPE *SetAt)(
        IXpsOMVisualCollection *This,
        UINT32 index,
        IXpsOMVisual *object);

    HRESULT (STDMETHODCALLTYPE *Append)(
        IXpsOMVisualCollection *This,
        IXpsOMVisual *object);

    END_INTERFACE
} IXpsOMVisualCollectionVtbl;

interface IXpsOMVisualCollection {
    CONST_VTBL IXpsOMVisualCollectionVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMVisualCollection_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMVisualCollection_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMVisualCollection_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMVisualCollection methods ***/
#define IXpsOMVisualCollection_GetCount(This,count) \
    ((This)->lpVtbl->GetCount(This,count))
#define IXpsOMVisualCollection_GetAt(This,index,object) \
    ((This)->lpVtbl->GetAt(This,index,object))
#define IXpsOMVisualCollection_InsertAt(This,index,object) \
    ((This)->lpVtbl->InsertAt(This,index,object))
#define IXpsOMVisualCollection_RemoveAt(This,index) \
    ((This)->lpVtbl->RemoveAt(This,index))
#define IXpsOMVisualCollection_SetAt(This,index,object) \
    ((This)->lpVtbl->SetAt(This,index,object))
#define IXpsOMVisualCollection_Append(This,object) \
    ((This)->lpVtbl->Append(This,object))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMVisualCollection_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMCanvas interface
 */
#ifndef __IXpsOMCanvas_INTERFACE_DEFINED__
#define __IXpsOMCanvas_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMCanvas;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMCanvasVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMCanvas *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMCanvas *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMCanvas *This);

    /*** IXpsOMShareable methods ***/
    HRESULT (STDMETHODCALLTYPE *GetOwner)(
        IXpsOMCanvas *This,
        IUnknown **owner);

    HRESULT (STDMETHODCALLTYPE *GetType)(
        IXpsOMCanvas *This,
        XPS_OBJECT_TYPE *type);

    /*** IXpsOMVisual methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTransform)(
        IXpsOMCanvas *This,
        IXpsOMMatrixTransform **matrixTransform);

    HRESULT (STDMETHODCALLTYPE *GetTransformLocal)(
        IXpsOMCanvas *This,
        IXpsOMMatrixTransform **matrixTransform);

    HRESULT (STDMETHODCALLTYPE *SetTransformLocal)(
        IXpsOMCanvas *This,
        IXpsOMMatrixTransform *matrixTransform);

    HRESULT (STDMETHODCALLTYPE *GetTransformLookup)(
        IXpsOMCanvas *This,
        LPWSTR *key);

    HRESULT (STDMETHODCALLTYPE *SetTransformLookup)(
        IXpsOMCanvas *This,
        LPCWSTR key);

    HRESULT (STDMETHODCALLTYPE *GetClipGeometry)(
        IXpsOMCanvas *This,
        IXpsOMGeometry **clipGeometry);

    HRESULT (STDMETHODCALLTYPE *GetClipGeometryLocal)(
        IXpsOMCanvas *This,
        IXpsOMGeometry **clipGeometry);

    HRESULT (STDMETHODCALLTYPE *SetClipGeometryLocal)(
        IXpsOMCanvas *This,
        IXpsOMGeometry *clipGeometry);

    HRESULT (STDMETHODCALLTYPE *GetClipGeometryLookup)(
        IXpsOMCanvas *This,
        LPWSTR *key);

    HRESULT (STDMETHODCALLTYPE *SetClipGeometryLookup)(
        IXpsOMCanvas *This,
        LPCWSTR key);

    HRESULT (STDMETHODCALLTYPE *GetOpacity)(
        IXpsOMCanvas *This,
        FLOAT *opacity);

    HRESULT (STDMETHODCALLTYPE *SetOpacity)(
        IXpsOMCanvas *This,
        FLOAT opacity);

    HRESULT (STDMETHODCALLTYPE *GetOpacityMaskBrush)(
        IXpsOMCanvas *This,
        IXpsOMBrush **opacityMaskBrush);

    HRESULT (STDMETHODCALLTYPE *GetOpacityMaskBrushLocal)(
        IXpsOMCanvas *This,
        IXpsOMBrush **opacityMaskBrush);

    HRESULT (STDMETHODCALLTYPE *SetOpacityMaskBrushLocal)(
        IXpsOMCanvas *This,
        IXpsOMBrush *opacityMaskBrush);

    HRESULT (STDMETHODCALLTYPE *GetOpacityMaskBrushLookup)(
        IXpsOMCanvas *This,
        LPWSTR *key);

    HRESULT (STDMETHODCALLTYPE *SetOpacityMaskBrushLookup)(
        IXpsOMCanvas *This,
        LPCWSTR key);

    HRESULT (STDMETHODCALLTYPE *GetName)(
        IXpsOMCanvas *This,
        LPWSTR *name);

    HRESULT (STDMETHODCALLTYPE *SetName)(
        IXpsOMCanvas *This,
        LPCWSTR name);

    HRESULT (STDMETHODCALLTYPE *GetIsHyperlinkTarget)(
        IXpsOMCanvas *This,
        BOOL *isHyperlink);

    HRESULT (STDMETHODCALLTYPE *SetIsHyperlinkTarget)(
        IXpsOMCanvas *This,
        BOOL isHyperlink);

    HRESULT (STDMETHODCALLTYPE *GetHyperlinkNavigateUri)(
        IXpsOMCanvas *This,
        IUri **hyperlinkUri);

    HRESULT (STDMETHODCALLTYPE *SetHyperlinkNavigateUri)(
        IXpsOMCanvas *This,
        IUri *hyperlinkUri);

    HRESULT (STDMETHODCALLTYPE *GetLanguage)(
        IXpsOMCanvas *This,
        LPWSTR *language);

    HRESULT (STDMETHODCALLTYPE *SetLanguage)(
        IXpsOMCanvas *This,
        LPCWSTR language);

    /*** IXpsOMCanvas methods ***/
    HRESULT (STDMETHODCALLTYPE *GetVisuals)(
        IXpsOMCanvas *This,
        IXpsOMVisualCollection **visuals);

    HRESULT (STDMETHODCALLTYPE *GetUseAliasedEdgeMode)(
        IXpsOMCanvas *This,
        BOOL *useAliasedEdgeMode);

    HRESULT (STDMETHODCALLTYPE *SetUseAliasedEdgeMode)(
        IXpsOMCanvas *This,
        BOOL useAliasedEdgeMode);

    HRESULT (STDMETHODCALLTYPE *GetAccessibilityShortDescription)(
        IXpsOMCanvas *This,
        LPWSTR *shortDescription);

    HRESULT (STDMETHODCALLTYPE *SetAccessibilityShortDescription)(
        IXpsOMCanvas *This,
        LPCWSTR shortDescription);

    HRESULT (STDMETHODCALLTYPE *GetAccessibilityLongDescription)(
        IXpsOMCanvas *This,
        LPWSTR *longDescription);

    HRESULT (STDMETHODCALLTYPE *SetAccessibilityLongDescription)(
        IXpsOMCanvas *This,
        LPCWSTR longDescription);

    HRESULT (STDMETHODCALLTYPE *GetDictionary)(
        IXpsOMCanvas *This,
        IXpsOMDictionary **resourceDictionary);

    HRESULT (STDMETHODCALLTYPE *GetDictionaryLocal)(
        IXpsOMCanvas *This,
        IXpsOMDictionary **resourceDictionary);

    HRESULT (STDMETHODCALLTYPE *SetDictionaryLocal)(
        IXpsOMCanvas *This,
        IXpsOMDictionary *resourceDictionary);

    HRESULT (STDMETHODCALLTYPE *GetDictionaryResource)(
        IXpsOMCanvas *This,
        IXpsOMRemoteDictionaryResource **remoteDictionaryResource);

    HRESULT (STDMETHODCALLTYPE *SetDictionaryResource)(
        IXpsOMCanvas *This,
        IXpsOMRemoteDictionaryResource *remoteDictionaryResource);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IXpsOMCanvas *This,
        IXpsOMCanvas **canvas);

    END_INTERFACE
} IXpsOMCanvasVtbl;

interface IXpsOMCanvas {
    CONST_VTBL IXpsOMCanvasVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMCanvas_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMCanvas_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMCanvas_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMShareable methods ***/
#define IXpsOMCanvas_GetOwner(This,owner) \
    ((This)->lpVtbl->GetOwner(This,owner))
#define IXpsOMCanvas_GetType(This,type) \
    ((This)->lpVtbl->GetType(This,type))
/*** IXpsOMVisual methods ***/
#define IXpsOMCanvas_GetTransform(This,matrixTransform) \
    ((This)->lpVtbl->GetTransform(This,matrixTransform))
#define IXpsOMCanvas_GetTransformLocal(This,matrixTransform) \
    ((This)->lpVtbl->GetTransformLocal(This,matrixTransform))
#define IXpsOMCanvas_SetTransformLocal(This,matrixTransform) \
    ((This)->lpVtbl->SetTransformLocal(This,matrixTransform))
#define IXpsOMCanvas_GetTransformLookup(This,key) \
    ((This)->lpVtbl->GetTransformLookup(This,key))
#define IXpsOMCanvas_SetTransformLookup(This,key) \
    ((This)->lpVtbl->SetTransformLookup(This,key))
#define IXpsOMCanvas_GetClipGeometry(This,clipGeometry) \
    ((This)->lpVtbl->GetClipGeometry(This,clipGeometry))
#define IXpsOMCanvas_GetClipGeometryLocal(This,clipGeometry) \
    ((This)->lpVtbl->GetClipGeometryLocal(This,clipGeometry))
#define IXpsOMCanvas_SetClipGeometryLocal(This,clipGeometry) \
    ((This)->lpVtbl->SetClipGeometryLocal(This,clipGeometry))
#define IXpsOMCanvas_GetClipGeometryLookup(This,key) \
    ((This)->lpVtbl->GetClipGeometryLookup(This,key))
#define IXpsOMCanvas_SetClipGeometryLookup(This,key) \
    ((This)->lpVtbl->SetClipGeometryLookup(This,key))
#define IXpsOMCanvas_GetOpacity(This,opacity) \
    ((This)->lpVtbl->GetOpacity(This,opacity))
#define IXpsOMCanvas_SetOpacity(This,opacity) \
    ((This)->lpVtbl->SetOpacity(This,opacity))
#define IXpsOMCanvas_GetOpacityMaskBrush(This,opacityMaskBrush) \
    ((This)->lpVtbl->GetOpacityMaskBrush(This,opacityMaskBrush))
#define IXpsOMCanvas_GetOpacityMaskBrushLocal(This,opacityMaskBrush) \
    ((This)->lpVtbl->GetOpacityMaskBrushLocal(This,opacityMaskBrush))
#define IXpsOMCanvas_SetOpacityMaskBrushLocal(This,opacityMaskBrush) \
    ((This)->lpVtbl->SetOpacityMaskBrushLocal(This,opacityMaskBrush))
#define IXpsOMCanvas_GetOpacityMaskBrushLookup(This,key) \
    ((This)->lpVtbl->GetOpacityMaskBrushLookup(This,key))
#define IXpsOMCanvas_SetOpacityMaskBrushLookup(This,key) \
    ((This)->lpVtbl->SetOpacityMaskBrushLookup(This,key))
#define IXpsOMCanvas_GetName(This,name) \
    ((This)->lpVtbl->GetName(This,name))
#define IXpsOMCanvas_SetName(This,name) \
    ((This)->lpVtbl->SetName(This,name))
#define IXpsOMCanvas_GetIsHyperlinkTarget(This,isHyperlink) \
    ((This)->lpVtbl->GetIsHyperlinkTarget(This,isHyperlink))
#define IXpsOMCanvas_SetIsHyperlinkTarget(This,isHyperlink) \
    ((This)->lpVtbl->SetIsHyperlinkTarget(This,isHyperlink))
#define IXpsOMCanvas_GetHyperlinkNavigateUri(This,hyperlinkUri) \
    ((This)->lpVtbl->GetHyperlinkNavigateUri(This,hyperlinkUri))
#define IXpsOMCanvas_SetHyperlinkNavigateUri(This,hyperlinkUri) \
    ((This)->lpVtbl->SetHyperlinkNavigateUri(This,hyperlinkUri))
#define IXpsOMCanvas_GetLanguage(This,language) \
    ((This)->lpVtbl->GetLanguage(This,language))
#define IXpsOMCanvas_SetLanguage(This,language) \
    ((This)->lpVtbl->SetLanguage(This,language))
/*** IXpsOMCanvas methods ***/
#define IXpsOMCanvas_GetVisuals(This,visuals) \
    ((This)->lpVtbl->GetVisuals(This,visuals))
#define IXpsOMCanvas_GetUseAliasedEdgeMode(This,useAliasedEdgeMode) \
    ((This)->lpVtbl->GetUseAliasedEdgeMode(This,useAliasedEdgeMode))
#define IXpsOMCanvas_SetUseAliasedEdgeMode(This,useAliasedEdgeMode) \
    ((This)->lpVtbl->SetUseAliasedEdgeMode(This,useAliasedEdgeMode))
#define IXpsOMCanvas_GetAccessibilityShortDescription(This,shortDescription) \
    ((This)->lpVtbl->GetAccessibilityShortDescription(This,shortDescription))
#define IXpsOMCanvas_SetAccessibilityShortDescription(This,shortDescription) \
    ((This)->lpVtbl->SetAccessibilityShortDescription(This,shortDescription))
#define IXpsOMCanvas_GetAccessibilityLongDescription(This,longDescription) \
    ((This)->lpVtbl->GetAccessibilityLongDescription(This,longDescription))
#define IXpsOMCanvas_SetAccessibilityLongDescription(This,longDescription) \
    ((This)->lpVtbl->SetAccessibilityLongDescription(This,longDescription))
#define IXpsOMCanvas_GetDictionary(This,resourceDictionary) \
    ((This)->lpVtbl->GetDictionary(This,resourceDictionary))
#define IXpsOMCanvas_GetDictionaryLocal(This,resourceDictionary) \
    ((This)->lpVtbl->GetDictionaryLocal(This,resourceDictionary))
#define IXpsOMCanvas_SetDictionaryLocal(This,resourceDictionary) \
    ((This)->lpVtbl->SetDictionaryLocal(This,resourceDictionary))
#define IXpsOMCanvas_GetDictionaryResource(This,remoteDictionaryResource) \
    ((This)->lpVtbl->GetDictionaryResource(This,remoteDictionaryResource))
#define IXpsOMCanvas_SetDictionaryResource(This,remoteDictionaryResource) \
    ((This)->lpVtbl->SetDictionaryResource(This,remoteDictionaryResource))
#define IXpsOMCanvas_Clone(This,canvas) \
    ((This)->lpVtbl->Clone(This,canvas))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMCanvas_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMPage interface
 */
#ifndef __IXpsOMPage_INTERFACE_DEFINED__
#define __IXpsOMPage_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMPage;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMPageVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMPage *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMPage *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMPage *This);

    /*** IXpsOMPart methods ***/
    HRESULT (STDMETHODCALLTYPE *GetPartName)(
        IXpsOMPage *This,
        IOpcPartUri **partUri);

    HRESULT (STDMETHODCALLTYPE *SetPartName)(
        IXpsOMPage *This,
        IOpcPartUri *partUri);

    /*** IXpsOMPage methods ***/
    HRESULT (STDMETHODCALLTYPE *GetOwner)(
        IXpsOMPage *This,
        IXpsOMPageReference **pageReference);

    HRESULT (STDMETHODCALLTYPE *GetVisuals)(
        IXpsOMPage *This,
        IXpsOMVisualCollection **visuals);

    HRESULT (STDMETHODCALLTYPE *GetPageDimensions)(
        IXpsOMPage *This,
        XPS_SIZE *pageDimensions);

    HRESULT (STDMETHODCALLTYPE *SetPageDimensions)(
        IXpsOMPage *This,
        const XPS_SIZE *pageDimensions);

    HRESULT (STDMETHODCALLTYPE *GetContentBox)(
        IXpsOMPage *This,
        XPS_RECT *contentBox);

    HRESULT (STDMETHODCALLTYPE *SetContentBox)(
        IXpsOMPage *This,
        const XPS_RECT *contentBox);

    HRESULT (STDMETHODCALLTYPE *GetBleedBox)(
        IXpsOMPage *This,
        XPS_RECT *bleedBox);

    HRESULT (STDMETHODCALLTYPE *SetBleedBox)(
        IXpsOMPage *This,
        const XPS_RECT *bleedBox);

    HRESULT (STDMETHODCALLTYPE *GetLanguage)(
        IXpsOMPage *This,
        LPWSTR *language);

    HRESULT (STDMETHODCALLTYPE *SetLanguage)(
        IXpsOMPage *This,
        LPCWSTR language);

    HRESULT (STDMETHODCALLTYPE *GetName)(
        IXpsOMPage *This,
        LPWSTR *name);

    HRESULT (STDMETHODCALLTYPE *SetName)(
        IXpsOMPage *This,
        LPCWSTR name);

    HRESULT (STDMETHODCALLTYPE *GetIsHyperlinkTarget)(
        IXpsOMPage *This,
        BOOL *isHyperlinkTarget);

    HRESULT (STDMETHODCALLTYPE *SetIsHyperlinkTarget)(
        IXpsOMPage *This,
        BOOL isHyperlinkTarget);

    HRESULT (STDMETHODCALLTYPE *GetDictionary)(
        IXpsOMPage *This,
        IXpsOMDictionary **resourceDictionary);

    HRESULT (STDMETHODCALLTYPE *GetDictionaryLocal)(
        IXpsOMPage *This,
        IXpsOMDictionary **resourceDictionary);

    HRESULT (STDMETHODCALLTYPE *SetDictionaryLocal)(
        IXpsOMPage *This,
        IXpsOMDictionary *resourceDictionary);

    HRESULT (STDMETHODCALLTYPE *GetDictionaryResource)(
        IXpsOMPage *This,
        IXpsOMRemoteDictionaryResource **remoteDictionaryResource);

    HRESULT (STDMETHODCALLTYPE *SetDictionaryResource)(
        IXpsOMPage *This,
        IXpsOMRemoteDictionaryResource *remoteDictionaryResource);

    HRESULT (STDMETHODCALLTYPE *Write)(
        IXpsOMPage *This,
        ISequentialStream *stream,
        BOOL optimizeMarkupSize);

    HRESULT (STDMETHODCALLTYPE *GenerateUnusedLookupKey)(
        IXpsOMPage *This,
        XPS_OBJECT_TYPE type,
        LPWSTR *key);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IXpsOMPage *This,
        IXpsOMPage **page);

    END_INTERFACE
} IXpsOMPageVtbl;

interface IXpsOMPage {
    CONST_VTBL IXpsOMPageVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMPage_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMPage_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMPage_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMPart methods ***/
#define IXpsOMPage_GetPartName(This,partUri) \
    ((This)->lpVtbl->GetPartName(This,partUri))
#define IXpsOMPage_SetPartName(This,partUri) \
    ((This)->lpVtbl->SetPartName(This,partUri))
/*** IXpsOMPage methods ***/
#define IXpsOMPage_GetOwner(This,pageReference) \
    ((This)->lpVtbl->GetOwner(This,pageReference))
#define IXpsOMPage_GetVisuals(This,visuals) \
    ((This)->lpVtbl->GetVisuals(This,visuals))
#define IXpsOMPage_GetPageDimensions(This,pageDimensions) \
    ((This)->lpVtbl->GetPageDimensions(This,pageDimensions))
#define IXpsOMPage_SetPageDimensions(This,pageDimensions) \
    ((This)->lpVtbl->SetPageDimensions(This,pageDimensions))
#define IXpsOMPage_GetContentBox(This,contentBox) \
    ((This)->lpVtbl->GetContentBox(This,contentBox))
#define IXpsOMPage_SetContentBox(This,contentBox) \
    ((This)->lpVtbl->SetContentBox(This,contentBox))
#define IXpsOMPage_GetBleedBox(This,bleedBox) \
    ((This)->lpVtbl->GetBleedBox(This,bleedBox))
#define IXpsOMPage_SetBleedBox(This,bleedBox) \
    ((This)->lpVtbl->SetBleedBox(This,bleedBox))
#define IXpsOMPage_GetLanguage(This,language) \
    ((This)->lpVtbl->GetLanguage(This,language))
#define IXpsOMPage_SetLanguage(This,language) \
    ((This)->lpVtbl->SetLanguage(This,language))
#define IXpsOMPage_GetName(This,name) \
    ((This)->lpVtbl->GetName(This,name))
#define IXpsOMPage_SetName(This,name) \
    ((This)->lpVtbl->SetName(This,name))
#define IXpsOMPage_GetIsHyperlinkTarget(This,isHyperlinkTarget) \
    ((This)->lpVtbl->GetIsHyperlinkTarget(This,isHyperlinkTarget))
#define IXpsOMPage_SetIsHyperlinkTarget(This,isHyperlinkTarget) \
    ((This)->lpVtbl->SetIsHyperlinkTarget(This,isHyperlinkTarget))
#define IXpsOMPage_GetDictionary(This,resourceDictionary) \
    ((This)->lpVtbl->GetDictionary(This,resourceDictionary))
#define IXpsOMPage_GetDictionaryLocal(This,resourceDictionary) \
    ((This)->lpVtbl->GetDictionaryLocal(This,resourceDictionary))
#define IXpsOMPage_SetDictionaryLocal(This,resourceDictionary) \
    ((This)->lpVtbl->SetDictionaryLocal(This,resourceDictionary))
#define IXpsOMPage_GetDictionaryResource(This,remoteDictionaryResource) \
    ((This)->lpVtbl->GetDictionaryResource(This,remoteDictionaryResource))
#define IXpsOMPage_SetDictionaryResource(This,remoteDictionaryResource) \
    ((This)->lpVtbl->SetDictionaryResource(This,remoteDictionaryResource))
#define IXpsOMPage_Write(This,stream,optimizeMarkupSize) \
    ((This)->lpVtbl->Write(This,stream,optimizeMarkupSize))
#define IXpsOMPage_GenerateUnusedLookupKey(This,type,key) \
    ((This)->lpVtbl->GenerateUnusedLookupKey(This,type,key))
#define IXpsOMPage_Clone(This,page) \
    ((This)->lpVtbl->Clone(This,page))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMPage_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMPageReference interface
 */
#ifndef __IXpsOMPageReference_INTERFACE_DEFINED__
#define __IXpsOMPageReference_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMPageReference;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMPageReferenceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMPageReference *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMPageReference *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMPageReference *This);

    /*** IXpsOMPageReference methods ***/
    HRESULT (STDMETHODCALLTYPE *GetOwner)(
        IXpsOMPageReference *This,
        IXpsOMDocument **document);

    HRESULT (STDMETHODCALLTYPE *GetPage)(
        IXpsOMPageReference *This,
        IXpsOMPage **page);

    HRESULT (STDMETHODCALLTYPE *SetPage)(
        IXpsOMPageReference *This,
        IXpsOMPage *page);

    HRESULT (STDMETHODCALLTYPE *DiscardPage)(
        IXpsOMPageReference *This);

    HRESULT (STDMETHODCALLTYPE *IsPageLoaded)(
        IXpsOMPageReference *This,
        BOOL *isPageLoaded);

    HRESULT (STDMETHODCALLTYPE *GetAdvisoryPageDimensions)(
        IXpsOMPageReference *This,
        XPS_SIZE *pageDimensions);

    HRESULT (STDMETHODCALLTYPE *SetAdvisoryPageDimensions)(
        IXpsOMPageReference *This,
        const XPS_SIZE *pageDimensions);

    HRESULT (STDMETHODCALLTYPE *GetStoryFragmentsResource)(
        IXpsOMPageReference *This,
        IXpsOMStoryFragmentsResource **storyFragmentsResource);

    HRESULT (STDMETHODCALLTYPE *SetStoryFragmentsResource)(
        IXpsOMPageReference *This,
        IXpsOMStoryFragmentsResource *storyFragmentsResource);

    HRESULT (STDMETHODCALLTYPE *GetPrintTicketResource)(
        IXpsOMPageReference *This,
        IXpsOMPrintTicketResource **printTicketResource);

    HRESULT (STDMETHODCALLTYPE *SetPrintTicketResource)(
        IXpsOMPageReference *This,
        IXpsOMPrintTicketResource *printTicketResource);

    HRESULT (STDMETHODCALLTYPE *GetThumbnailResource)(
        IXpsOMPageReference *This,
        IXpsOMImageResource **imageResource);

    HRESULT (STDMETHODCALLTYPE *SetThumbnailResource)(
        IXpsOMPageReference *This,
        IXpsOMImageResource *imageResource);

    HRESULT (STDMETHODCALLTYPE *CollectLinkTargets)(
        IXpsOMPageReference *This,
        IXpsOMNameCollection **linkTargets);

    HRESULT (STDMETHODCALLTYPE *CollectPartResources)(
        IXpsOMPageReference *This,
        IXpsOMPartResources **partResources);

    HRESULT (STDMETHODCALLTYPE *HasRestrictedFonts)(
        IXpsOMPageReference *This,
        BOOL *restrictedFonts);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IXpsOMPageReference *This,
        IXpsOMPageReference **pageReference);

    END_INTERFACE
} IXpsOMPageReferenceVtbl;

interface IXpsOMPageReference {
    CONST_VTBL IXpsOMPageReferenceVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMPageReference_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMPageReference_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMPageReference_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMPageReference methods ***/
#define IXpsOMPageReference_GetOwner(This,document) \
    ((This)->lpVtbl->GetOwner(This,document))
#define IXpsOMPageReference_GetPage(This,page) \
    ((This)->lpVtbl->GetPage(This,page))
#define IXpsOMPageReference_SetPage(This,page) \
    ((This)->lpVtbl->SetPage(This,page))
#define IXpsOMPageReference_DiscardPage(This) \
    ((This)->lpVtbl->DiscardPage(This))
#define IXpsOMPageReference_IsPageLoaded(This,isPageLoaded) \
    ((This)->lpVtbl->IsPageLoaded(This,isPageLoaded))
#define IXpsOMPageReference_GetAdvisoryPageDimensions(This,pageDimensions) \
    ((This)->lpVtbl->GetAdvisoryPageDimensions(This,pageDimensions))
#define IXpsOMPageReference_SetAdvisoryPageDimensions(This,pageDimensions) \
    ((This)->lpVtbl->SetAdvisoryPageDimensions(This,pageDimensions))
#define IXpsOMPageReference_GetStoryFragmentsResource(This,storyFragmentsResource) \
    ((This)->lpVtbl->GetStoryFragmentsResource(This,storyFragmentsResource))
#define IXpsOMPageReference_SetStoryFragmentsResource(This,storyFragmentsResource) \
    ((This)->lpVtbl->SetStoryFragmentsResource(This,storyFragmentsResource))
#define IXpsOMPageReference_GetPrintTicketResource(This,printTicketResource) \
    ((This)->lpVtbl->GetPrintTicketResource(This,printTicketResource))
#define IXpsOMPageReference_SetPrintTicketResource(This,printTicketResource) \
    ((This)->lpVtbl->SetPrintTicketResource(This,printTicketResource))
#define IXpsOMPageReference_GetThumbnailResource(This,imageResource) \
    ((This)->lpVtbl->GetThumbnailResource(This,imageResource))
#define IXpsOMPageReference_SetThumbnailResource(This,imageResource) \
    ((This)->lpVtbl->SetThumbnailResource(This,imageResource))
#define IXpsOMPageReference_CollectLinkTargets(This,linkTargets) \
    ((This)->lpVtbl->CollectLinkTargets(This,linkTargets))
#define IXpsOMPageReference_CollectPartResources(This,partResources) \
    ((This)->lpVtbl->CollectPartResources(This,partResources))
#define IXpsOMPageReference_HasRestrictedFonts(This,restrictedFonts) \
    ((This)->lpVtbl->HasRestrictedFonts(This,restrictedFonts))
#define IXpsOMPageReference_Clone(This,pageReference) \
    ((This)->lpVtbl->Clone(This,pageReference))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMPageReference_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMPageReferenceCollection interface
 */
#ifndef __IXpsOMPageReferenceCollection_INTERFACE_DEFINED__
#define __IXpsOMPageReferenceCollection_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMPageReferenceCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMPageReferenceCollectionVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMPageReferenceCollection *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMPageReferenceCollection *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMPageReferenceCollection *This);

    /*** IXpsOMPageReferenceCollection methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IXpsOMPageReferenceCollection *This,
        UINT32 *count);

    HRESULT (STDMETHODCALLTYPE *GetAt)(
        IXpsOMPageReferenceCollection *This,
        UINT32 index,
        IXpsOMPageReference **pageReference);

    HRESULT (STDMETHODCALLTYPE *InsertAt)(
        IXpsOMPageReferenceCollection *This,
        UINT32 index,
        IXpsOMPageReference *pageReference);

    HRESULT (STDMETHODCALLTYPE *RemoveAt)(
        IXpsOMPageReferenceCollection *This,
        UINT32 index);

    HRESULT (STDMETHODCALLTYPE *SetAt)(
        IXpsOMPageReferenceCollection *This,
        UINT32 index,
        IXpsOMPageReference *pageReference);

    HRESULT (STDMETHODCALLTYPE *Append)(
        IXpsOMPageReferenceCollection *This,
        IXpsOMPageReference *pageReference);

    END_INTERFACE
} IXpsOMPageReferenceCollectionVtbl;

interface IXpsOMPageReferenceCollection {
    CONST_VTBL IXpsOMPageReferenceCollectionVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMPageReferenceCollection_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMPageReferenceCollection_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMPageReferenceCollection_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMPageReferenceCollection methods ***/
#define IXpsOMPageReferenceCollection_GetCount(This,count) \
    ((This)->lpVtbl->GetCount(This,count))
#define IXpsOMPageReferenceCollection_GetAt(This,index,pageReference) \
    ((This)->lpVtbl->GetAt(This,index,pageReference))
#define IXpsOMPageReferenceCollection_InsertAt(This,index,pageReference) \
    ((This)->lpVtbl->InsertAt(This,index,pageReference))
#define IXpsOMPageReferenceCollection_RemoveAt(This,index) \
    ((This)->lpVtbl->RemoveAt(This,index))
#define IXpsOMPageReferenceCollection_SetAt(This,index,pageReference) \
    ((This)->lpVtbl->SetAt(This,index,pageReference))
#define IXpsOMPageReferenceCollection_Append(This,pageReference) \
    ((This)->lpVtbl->Append(This,pageReference))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMPageReferenceCollection_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMDocument interface
 */
#ifndef __IXpsOMDocument_INTERFACE_DEFINED__
#define __IXpsOMDocument_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMDocument;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMDocumentVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMDocument *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMDocument *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMDocument *This);

    /*** IXpsOMPart methods ***/
    HRESULT (STDMETHODCALLTYPE *GetPartName)(
        IXpsOMDocument *This,
        IOpcPartUri **partUri);

    HRESULT (STDMETHODCALLTYPE *SetPartName)(
        IXpsOMDocument *This,
        IOpcPartUri *partUri);

    /*** IXpsOMDocument methods ***/
    HRESULT (STDMETHODCALLTYPE *GetOwner)(
        IXpsOMDocument *This,
        IXpsOMDocumentSequence **documentSequence);

    HRESULT (STDMETHODCALLTYPE *GetPageReferences)(
        IXpsOMDocument *This,
        IXpsOMPageReferenceCollection **pageReferences);

    HRESULT (STDMETHODCALLTYPE *GetPrintTicketResource)(
        IXpsOMDocument *This,
        IXpsOMPrintTicketResource **printTicketResource);

    HRESULT (STDMETHODCALLTYPE *SetPrintTicketResource)(
        IXpsOMDocument *This,
        IXpsOMPrintTicketResource *printTicketResource);

    HRESULT (STDMETHODCALLTYPE *GetDocumentStructureResource)(
        IXpsOMDocument *This,
        IXpsOMDocumentStructureResource **documentStructureResource);

    HRESULT (STDMETHODCALLTYPE *SetDocumentStructureResource)(
        IXpsOMDocument *This,
        IXpsOMDocumentStructureResource *documentStructureResource);

    HRESULT (STDMETHODCALLTYPE *GetSignatureBlockResources)(
        IXpsOMDocument *This,
        IXpsOMSignatureBlockResourceCollection **signatureBlockResources);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IXpsOMDocument *This,
        IXpsOMDocument **document);

    END_INTERFACE
} IXpsOMDocumentVtbl;

interface IXpsOMDocument {
    CONST_VTBL IXpsOMDocumentVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMDocument_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMDocument_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMDocument_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMPart methods ***/
#define IXpsOMDocument_GetPartName(This,partUri) \
    ((This)->lpVtbl->GetPartName(This,partUri))
#define IXpsOMDocument_SetPartName(This,partUri) \
    ((This)->lpVtbl->SetPartName(This,partUri))
/*** IXpsOMDocument methods ***/
#define IXpsOMDocument_GetOwner(This,documentSequence) \
    ((This)->lpVtbl->GetOwner(This,documentSequence))
#define IXpsOMDocument_GetPageReferences(This,pageReferences) \
    ((This)->lpVtbl->GetPageReferences(This,pageReferences))
#define IXpsOMDocument_GetPrintTicketResource(This,printTicketResource) \
    ((This)->lpVtbl->GetPrintTicketResource(This,printTicketResource))
#define IXpsOMDocument_SetPrintTicketResource(This,printTicketResource) \
    ((This)->lpVtbl->SetPrintTicketResource(This,printTicketResource))
#define IXpsOMDocument_GetDocumentStructureResource(This,documentStructureResource) \
    ((This)->lpVtbl->GetDocumentStructureResource(This,documentStructureResource))
#define IXpsOMDocument_SetDocumentStructureResource(This,documentStructureResource) \
    ((This)->lpVtbl->SetDocumentStructureResource(This,documentStructureResource))
#define IXpsOMDocument_GetSignatureBlockResources(This,signatureBlockResources) \
    ((This)->lpVtbl->GetSignatureBlockResources(This,signatureBlockResources))
#define IXpsOMDocument_Clone(This,document) \
    ((This)->lpVtbl->Clone(This,document))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMDocument_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMDocumentCollection interface
 */
#ifndef __IXpsOMDocumentCollection_INTERFACE_DEFINED__
#define __IXpsOMDocumentCollection_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMDocumentCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMDocumentCollectionVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMDocumentCollection *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMDocumentCollection *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMDocumentCollection *This);

    /*** IXpsOMDocumentCollection methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IXpsOMDocumentCollection *This,
        UINT32 *count);

    HRESULT (STDMETHODCALLTYPE *GetAt)(
        IXpsOMDocumentCollection *This,
        UINT32 index,
        IXpsOMDocument **document);

    HRESULT (STDMETHODCALLTYPE *InsertAt)(
        IXpsOMDocumentCollection *This,
        UINT32 index,
        IXpsOMDocument *document);

    HRESULT (STDMETHODCALLTYPE *RemoveAt)(
        IXpsOMDocumentCollection *This,
        UINT32 index);

    HRESULT (STDMETHODCALLTYPE *SetAt)(
        IXpsOMDocumentCollection *This,
        UINT32 index,
        IXpsOMDocument *document);

    HRESULT (STDMETHODCALLTYPE *Append)(
        IXpsOMDocumentCollection *This,
        IXpsOMDocument *document);

    END_INTERFACE
} IXpsOMDocumentCollectionVtbl;

interface IXpsOMDocumentCollection {
    CONST_VTBL IXpsOMDocumentCollectionVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMDocumentCollection_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMDocumentCollection_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMDocumentCollection_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMDocumentCollection methods ***/
#define IXpsOMDocumentCollection_GetCount(This,count) \
    ((This)->lpVtbl->GetCount(This,count))
#define IXpsOMDocumentCollection_GetAt(This,index,document) \
    ((This)->lpVtbl->GetAt(This,index,document))
#define IXpsOMDocumentCollection_InsertAt(This,index,document) \
    ((This)->lpVtbl->InsertAt(This,index,document))
#define IXpsOMDocumentCollection_RemoveAt(This,index) \
    ((This)->lpVtbl->RemoveAt(This,index))
#define IXpsOMDocumentCollection_SetAt(This,index,document) \
    ((This)->lpVtbl->SetAt(This,index,document))
#define IXpsOMDocumentCollection_Append(This,document) \
    ((This)->lpVtbl->Append(This,document))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMDocumentCollection_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMDocumentSequence interface
 */
#ifndef __IXpsOMDocumentSequence_INTERFACE_DEFINED__
#define __IXpsOMDocumentSequence_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMDocumentSequence;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMDocumentSequenceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMDocumentSequence *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMDocumentSequence *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMDocumentSequence *This);

    /*** IXpsOMPart methods ***/
    HRESULT (STDMETHODCALLTYPE *GetPartName)(
        IXpsOMDocumentSequence *This,
        IOpcPartUri **partUri);

    HRESULT (STDMETHODCALLTYPE *SetPartName)(
        IXpsOMDocumentSequence *This,
        IOpcPartUri *partUri);

    /*** IXpsOMDocumentSequence methods ***/
    HRESULT (STDMETHODCALLTYPE *GetOwner)(
        IXpsOMDocumentSequence *This,
        IXpsOMPackage **package);

    HRESULT (STDMETHODCALLTYPE *GetDocuments)(
        IXpsOMDocumentSequence *This,
        IXpsOMDocumentCollection **documents);

    HRESULT (STDMETHODCALLTYPE *GetPrintTicketResource)(
        IXpsOMDocumentSequence *This,
        IXpsOMPrintTicketResource **printTicketResource);

    HRESULT (STDMETHODCALLTYPE *SetPrintTicketResource)(
        IXpsOMDocumentSequence *This,
        IXpsOMPrintTicketResource *printTicketResource);

    END_INTERFACE
} IXpsOMDocumentSequenceVtbl;

interface IXpsOMDocumentSequence {
    CONST_VTBL IXpsOMDocumentSequenceVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMDocumentSequence_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMDocumentSequence_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMDocumentSequence_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMPart methods ***/
#define IXpsOMDocumentSequence_GetPartName(This,partUri) \
    ((This)->lpVtbl->GetPartName(This,partUri))
#define IXpsOMDocumentSequence_SetPartName(This,partUri) \
    ((This)->lpVtbl->SetPartName(This,partUri))
/*** IXpsOMDocumentSequence methods ***/
#define IXpsOMDocumentSequence_GetOwner(This,package) \
    ((This)->lpVtbl->GetOwner(This,package))
#define IXpsOMDocumentSequence_GetDocuments(This,documents) \
    ((This)->lpVtbl->GetDocuments(This,documents))
#define IXpsOMDocumentSequence_GetPrintTicketResource(This,printTicketResource) \
    ((This)->lpVtbl->GetPrintTicketResource(This,printTicketResource))
#define IXpsOMDocumentSequence_SetPrintTicketResource(This,printTicketResource) \
    ((This)->lpVtbl->SetPrintTicketResource(This,printTicketResource))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMDocumentSequence_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMCoreProperties interface
 */
#ifndef __IXpsOMCoreProperties_INTERFACE_DEFINED__
#define __IXpsOMCoreProperties_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMCoreProperties;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMCorePropertiesVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMCoreProperties *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMCoreProperties *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMCoreProperties *This);

    /*** IXpsOMPart methods ***/
    HRESULT (STDMETHODCALLTYPE *GetPartName)(
        IXpsOMCoreProperties *This,
        IOpcPartUri **partUri);

    HRESULT (STDMETHODCALLTYPE *SetPartName)(
        IXpsOMCoreProperties *This,
        IOpcPartUri *partUri);

    /*** IXpsOMCoreProperties methods ***/
    HRESULT (STDMETHODCALLTYPE *GetOwner)(
        IXpsOMCoreProperties *This,
        IXpsOMPackage **package);

    HRESULT (STDMETHODCALLTYPE *GetCategory)(
        IXpsOMCoreProperties *This,
        LPWSTR *category);

    HRESULT (STDMETHODCALLTYPE *SetCategory)(
        IXpsOMCoreProperties *This,
        LPCWSTR category);

    HRESULT (STDMETHODCALLTYPE *GetContentStatus)(
        IXpsOMCoreProperties *This,
        LPWSTR *contentStatus);

    HRESULT (STDMETHODCALLTYPE *SetContentStatus)(
        IXpsOMCoreProperties *This,
        LPCWSTR contentStatus);

    HRESULT (STDMETHODCALLTYPE *GetContentType)(
        IXpsOMCoreProperties *This,
        LPWSTR *contentType);

    HRESULT (STDMETHODCALLTYPE *SetContentType)(
        IXpsOMCoreProperties *This,
        LPCWSTR contentType);

    HRESULT (STDMETHODCALLTYPE *GetCreated)(
        IXpsOMCoreProperties *This,
        SYSTEMTIME *created);

    HRESULT (STDMETHODCALLTYPE *SetCreated)(
        IXpsOMCoreProperties *This,
        const SYSTEMTIME *created);

    HRESULT (STDMETHODCALLTYPE *GetCreator)(
        IXpsOMCoreProperties *This,
        LPWSTR *creator);

    HRESULT (STDMETHODCALLTYPE *SetCreator)(
        IXpsOMCoreProperties *This,
        LPCWSTR creator);

    HRESULT (STDMETHODCALLTYPE *GetDescription)(
        IXpsOMCoreProperties *This,
        LPWSTR *description);

    HRESULT (STDMETHODCALLTYPE *SetDescription)(
        IXpsOMCoreProperties *This,
        LPCWSTR description);

    HRESULT (STDMETHODCALLTYPE *GetIdentifier)(
        IXpsOMCoreProperties *This,
        LPWSTR *identifier);

    HRESULT (STDMETHODCALLTYPE *SetIdentifier)(
        IXpsOMCoreProperties *This,
        LPCWSTR identifier);

    HRESULT (STDMETHODCALLTYPE *GetKeywords)(
        IXpsOMCoreProperties *This,
        LPWSTR *keywords);

    HRESULT (STDMETHODCALLTYPE *SetKeywords)(
        IXpsOMCoreProperties *This,
        LPCWSTR keywords);

    HRESULT (STDMETHODCALLTYPE *GetLanguage)(
        IXpsOMCoreProperties *This,
        LPWSTR *language);

    HRESULT (STDMETHODCALLTYPE *SetLanguage)(
        IXpsOMCoreProperties *This,
        LPCWSTR language);

    HRESULT (STDMETHODCALLTYPE *GetLastModifiedBy)(
        IXpsOMCoreProperties *This,
        LPWSTR *lastModifiedBy);

    HRESULT (STDMETHODCALLTYPE *SetLastModifiedBy)(
        IXpsOMCoreProperties *This,
        LPCWSTR lastModifiedBy);

    HRESULT (STDMETHODCALLTYPE *GetLastPrinted)(
        IXpsOMCoreProperties *This,
        SYSTEMTIME *lastPrinted);

    HRESULT (STDMETHODCALLTYPE *SetLastPrinted)(
        IXpsOMCoreProperties *This,
        const SYSTEMTIME *lastPrinted);

    HRESULT (STDMETHODCALLTYPE *GetModified)(
        IXpsOMCoreProperties *This,
        SYSTEMTIME *modified);

    HRESULT (STDMETHODCALLTYPE *SetModified)(
        IXpsOMCoreProperties *This,
        const SYSTEMTIME *modified);

    HRESULT (STDMETHODCALLTYPE *GetRevision)(
        IXpsOMCoreProperties *This,
        LPWSTR *revision);

    HRESULT (STDMETHODCALLTYPE *SetRevision)(
        IXpsOMCoreProperties *This,
        LPCWSTR revision);

    HRESULT (STDMETHODCALLTYPE *GetSubject)(
        IXpsOMCoreProperties *This,
        LPWSTR *subject);

    HRESULT (STDMETHODCALLTYPE *SetSubject)(
        IXpsOMCoreProperties *This,
        LPCWSTR subject);

    HRESULT (STDMETHODCALLTYPE *GetTitle)(
        IXpsOMCoreProperties *This,
        LPWSTR *title);

    HRESULT (STDMETHODCALLTYPE *SetTitle)(
        IXpsOMCoreProperties *This,
        LPCWSTR title);

    HRESULT (STDMETHODCALLTYPE *GetVersion)(
        IXpsOMCoreProperties *This,
        LPWSTR *version);

    HRESULT (STDMETHODCALLTYPE *SetVersion)(
        IXpsOMCoreProperties *This,
        LPCWSTR version);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IXpsOMCoreProperties *This,
        IXpsOMCoreProperties **coreProperties);

    END_INTERFACE
} IXpsOMCorePropertiesVtbl;

interface IXpsOMCoreProperties {
    CONST_VTBL IXpsOMCorePropertiesVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMCoreProperties_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMCoreProperties_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMCoreProperties_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMPart methods ***/
#define IXpsOMCoreProperties_GetPartName(This,partUri) \
    ((This)->lpVtbl->GetPartName(This,partUri))
#define IXpsOMCoreProperties_SetPartName(This,partUri) \
    ((This)->lpVtbl->SetPartName(This,partUri))
/*** IXpsOMCoreProperties methods ***/
#define IXpsOMCoreProperties_GetOwner(This,package) \
    ((This)->lpVtbl->GetOwner(This,package))
#define IXpsOMCoreProperties_GetCategory(This,category) \
    ((This)->lpVtbl->GetCategory(This,category))
#define IXpsOMCoreProperties_SetCategory(This,category) \
    ((This)->lpVtbl->SetCategory(This,category))
#define IXpsOMCoreProperties_GetContentStatus(This,contentStatus) \
    ((This)->lpVtbl->GetContentStatus(This,contentStatus))
#define IXpsOMCoreProperties_SetContentStatus(This,contentStatus) \
    ((This)->lpVtbl->SetContentStatus(This,contentStatus))
#define IXpsOMCoreProperties_GetContentType(This,contentType) \
    ((This)->lpVtbl->GetContentType(This,contentType))
#define IXpsOMCoreProperties_SetContentType(This,contentType) \
    ((This)->lpVtbl->SetContentType(This,contentType))
#define IXpsOMCoreProperties_GetCreated(This,created) \
    ((This)->lpVtbl->GetCreated(This,created))
#define IXpsOMCoreProperties_SetCreated(This,created) \
    ((This)->lpVtbl->SetCreated(This,created))
#define IXpsOMCoreProperties_GetCreator(This,creator) \
    ((This)->lpVtbl->GetCreator(This,creator))
#define IXpsOMCoreProperties_SetCreator(This,creator) \
    ((This)->lpVtbl->SetCreator(This,creator))
#define IXpsOMCoreProperties_GetDescription(This,description) \
    ((This)->lpVtbl->GetDescription(This,description))
#define IXpsOMCoreProperties_SetDescription(This,description) \
    ((This)->lpVtbl->SetDescription(This,description))
#define IXpsOMCoreProperties_GetIdentifier(This,identifier) \
    ((This)->lpVtbl->GetIdentifier(This,identifier))
#define IXpsOMCoreProperties_SetIdentifier(This,identifier) \
    ((This)->lpVtbl->SetIdentifier(This,identifier))
#define IXpsOMCoreProperties_GetKeywords(This,keywords) \
    ((This)->lpVtbl->GetKeywords(This,keywords))
#define IXpsOMCoreProperties_SetKeywords(This,keywords) \
    ((This)->lpVtbl->SetKeywords(This,keywords))
#define IXpsOMCoreProperties_GetLanguage(This,language) \
    ((This)->lpVtbl->GetLanguage(This,language))
#define IXpsOMCoreProperties_SetLanguage(This,language) \
    ((This)->lpVtbl->SetLanguage(This,language))
#define IXpsOMCoreProperties_GetLastModifiedBy(This,lastModifiedBy) \
    ((This)->lpVtbl->GetLastModifiedBy(This,lastModifiedBy))
#define IXpsOMCoreProperties_SetLastModifiedBy(This,lastModifiedBy) \
    ((This)->lpVtbl->SetLastModifiedBy(This,lastModifiedBy))
#define IXpsOMCoreProperties_GetLastPrinted(This,lastPrinted) \
    ((This)->lpVtbl->GetLastPrinted(This,lastPrinted))
#define IXpsOMCoreProperties_SetLastPrinted(This,lastPrinted) \
    ((This)->lpVtbl->SetLastPrinted(This,lastPrinted))
#define IXpsOMCoreProperties_GetModified(This,modified) \
    ((This)->lpVtbl->GetModified(This,modified))
#define IXpsOMCoreProperties_SetModified(This,modified) \
    ((This)->lpVtbl->SetModified(This,modified))
#define IXpsOMCoreProperties_GetRevision(This,revision) \
    ((This)->lpVtbl->GetRevision(This,revision))
#define IXpsOMCoreProperties_SetRevision(This,revision) \
    ((This)->lpVtbl->SetRevision(This,revision))
#define IXpsOMCoreProperties_GetSubject(This,subject) \
    ((This)->lpVtbl->GetSubject(This,subject))
#define IXpsOMCoreProperties_SetSubject(This,subject) \
    ((This)->lpVtbl->SetSubject(This,subject))
#define IXpsOMCoreProperties_GetTitle(This,title) \
    ((This)->lpVtbl->GetTitle(This,title))
#define IXpsOMCoreProperties_SetTitle(This,title) \
    ((This)->lpVtbl->SetTitle(This,title))
#define IXpsOMCoreProperties_GetVersion(This,version) \
    ((This)->lpVtbl->GetVersion(This,version))
#define IXpsOMCoreProperties_SetVersion(This,version) \
    ((This)->lpVtbl->SetVersion(This,version))
#define IXpsOMCoreProperties_Clone(This,coreProperties) \
    ((This)->lpVtbl->Clone(This,coreProperties))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMCoreProperties_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMPackage interface
 */
#ifndef __IXpsOMPackage_INTERFACE_DEFINED__
#define __IXpsOMPackage_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMPackage;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMPackageVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMPackage *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMPackage *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMPackage *This);

    /*** IXpsOMPackage methods ***/
    HRESULT (STDMETHODCALLTYPE *GetDocumentSequence)(
        IXpsOMPackage *This,
        IXpsOMDocumentSequence **documentSequence);

    HRESULT (STDMETHODCALLTYPE *SetDocumentSequence)(
        IXpsOMPackage *This,
        IXpsOMDocumentSequence *documentSequence);

    HRESULT (STDMETHODCALLTYPE *GetCoreProperties)(
        IXpsOMPackage *This,
        IXpsOMCoreProperties **coreProperties);

    HRESULT (STDMETHODCALLTYPE *SetCoreProperties)(
        IXpsOMPackage *This,
        IXpsOMCoreProperties *coreProperties);

    HRESULT (STDMETHODCALLTYPE *GetDiscardControlPartName)(
        IXpsOMPackage *This,
        IOpcPartUri **discardControlPartUri);

    HRESULT (STDMETHODCALLTYPE *SetDiscardControlPartName)(
        IXpsOMPackage *This,
        IOpcPartUri *discardControlPartUri);

    HRESULT (STDMETHODCALLTYPE *GetThumbnailResource)(
        IXpsOMPackage *This,
        IXpsOMImageResource **imageResource);

    HRESULT (STDMETHODCALLTYPE *SetThumbnailResource)(
        IXpsOMPackage *This,
        IXpsOMImageResource *imageResource);

    HRESULT (STDMETHODCALLTYPE *WriteToFile)(
        IXpsOMPackage *This,
        LPCWSTR fileName,
        LPSECURITY_ATTRIBUTES securityAttributes,
        DWORD flagsAndAttributes,
        BOOL optimizeMarkupSize);

    HRESULT (STDMETHODCALLTYPE *WriteToStream)(
        IXpsOMPackage *This,
        ISequentialStream *stream,
        BOOL optimizeMarkupSize);

    END_INTERFACE
} IXpsOMPackageVtbl;

interface IXpsOMPackage {
    CONST_VTBL IXpsOMPackageVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMPackage_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMPackage_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMPackage_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMPackage methods ***/
#define IXpsOMPackage_GetDocumentSequence(This,documentSequence) \
    ((This)->lpVtbl->GetDocumentSequence(This,documentSequence))
#define IXpsOMPackage_SetDocumentSequence(This,documentSequence) \
    ((This)->lpVtbl->SetDocumentSequence(This,documentSequence))
#define IXpsOMPackage_GetCoreProperties(This,coreProperties) \
    ((This)->lpVtbl->GetCoreProperties(This,coreProperties))
#define IXpsOMPackage_SetCoreProperties(This,coreProperties) \
    ((This)->lpVtbl->SetCoreProperties(This,coreProperties))
#define IXpsOMPackage_GetDiscardControlPartName(This,discardControlPartUri) \
    ((This)->lpVtbl->GetDiscardControlPartName(This,discardControlPartUri))
#define IXpsOMPackage_SetDiscardControlPartName(This,discardControlPartUri) \
    ((This)->lpVtbl->SetDiscardControlPartName(This,discardControlPartUri))
#define IXpsOMPackage_GetThumbnailResource(This,imageResource) \
    ((This)->lpVtbl->GetThumbnailResource(This,imageResource))
#define IXpsOMPackage_SetThumbnailResource(This,imageResource) \
    ((This)->lpVtbl->SetThumbnailResource(This,imageResource))
#define IXpsOMPackage_WriteToFile(This,fileName,securityAttributes,flagsAndAttributes,optimizeMarkupSize) \
    ((This)->lpVtbl->WriteToFile(This,fileName,securityAttributes,flagsAndAttributes,optimizeMarkupSize))
#define IXpsOMPackage_WriteToStream(This,stream,optimizeMarkupSize) \
    ((This)->lpVtbl->WriteToStream(This,stream,optimizeMarkupSize))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMPackage_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMObjectFactory interface
 */
#ifndef __IXpsOMObjectFactory_INTERFACE_DEFINED__
#define __IXpsOMObjectFactory_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMObjectFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMObjectFactoryVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMObjectFactory *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMObjectFactory *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMObjectFactory *This);

    /*** IXpsOMObjectFactory methods ***/
    HRESULT (STDMETHODCALLTYPE *CreatePackage)(
        IXpsOMObjectFactory *This,
        IXpsOMPackage **package);

    HRESULT (STDMETHODCALLTYPE *CreatePackageFromFile)(
        IXpsOMObjectFactory *This,
        LPCWSTR filename,
        BOOL reuseObjects,
        IXpsOMPackage **package);

    HRESULT (STDMETHODCALLTYPE *CreatePackageFromStream)(
        IXpsOMObjectFactory *This,
        IStream *stream,
        BOOL reuseObjects,
        IXpsOMPackage **package);

    HRESULT (STDMETHODCALLTYPE *CreateStoryFragmentsResource)(
        IXpsOMObjectFactory *This,
        IStream *acquiredStream,
        IOpcPartUri *partUri,
        IXpsOMStoryFragmentsResource **storyFragmentsResource);

    HRESULT (STDMETHODCALLTYPE *CreateDocumentStructureResource)(
        IXpsOMObjectFactory *This,
        IStream *acquiredStream,
        IOpcPartUri *partUri,
        IXpsOMDocumentStructureResource **documentStructureResource);

    HRESULT (STDMETHODCALLTYPE *CreateSignatureBlockResource)(
        IXpsOMObjectFactory *This,
        IStream *acquiredStream,
        IOpcPartUri *partUri,
        IXpsOMSignatureBlockResource **signatureBlockResource);

    HRESULT (STDMETHODCALLTYPE *CreateRemoteDictionaryResource)(
        IXpsOMObjectFactory *This,
        IXpsOMDictionary *dictionary,
        IOpcPartUri *partUri,
        IXpsOMRemoteDictionaryResource **remoteDictionaryResource);

    HRESULT (STDMETHODCALLTYPE *CreateRemoteDictionaryResourceFromStream)(
        IXpsOMObjectFactory *This,
        IStream *dictionaryMarkupStream,
        IOpcPartUri *dictionaryPartUri,
        IXpsOMPartResources *resources,
        IXpsOMRemoteDictionaryResource **dictionaryResource);

    HRESULT (STDMETHODCALLTYPE *CreatePartResources)(
        IXpsOMObjectFactory *This,
        IXpsOMPartResources **partResources);

    HRESULT (STDMETHODCALLTYPE *CreateDocumentSequence)(
        IXpsOMObjectFactory *This,
        IOpcPartUri *partUri,
        IXpsOMDocumentSequence **documentSequence);

    HRESULT (STDMETHODCALLTYPE *CreateDocument)(
        IXpsOMObjectFactory *This,
        IOpcPartUri *partUri,
        IXpsOMDocument **document);

    HRESULT (STDMETHODCALLTYPE *CreatePageReference)(
        IXpsOMObjectFactory *This,
        const XPS_SIZE *advisoryPageDimensions,
        IXpsOMPageReference **pageReference);

    HRESULT (STDMETHODCALLTYPE *CreatePage)(
        IXpsOMObjectFactory *This,
        const XPS_SIZE *pageDimensions,
        LPCWSTR language,
        IOpcPartUri *partUri,
        IXpsOMPage **page);

    HRESULT (STDMETHODCALLTYPE *CreatePageFromStream)(
        IXpsOMObjectFactory *This,
        IStream *pageMarkupStream,
        IOpcPartUri *partUri,
        IXpsOMPartResources *resources,
        BOOL reuseObjects,
        IXpsOMPage **page);

    HRESULT (STDMETHODCALLTYPE *CreateCanvas)(
        IXpsOMObjectFactory *This,
        IXpsOMCanvas **canvas);

    HRESULT (STDMETHODCALLTYPE *CreateGlyphs)(
        IXpsOMObjectFactory *This,
        IXpsOMFontResource *fontResource,
        IXpsOMGlyphs **glyphs);

    HRESULT (STDMETHODCALLTYPE *CreatePath)(
        IXpsOMObjectFactory *This,
        IXpsOMPath **path);

    HRESULT (STDMETHODCALLTYPE *CreateGeometry)(
        IXpsOMObjectFactory *This,
        IXpsOMGeometry **geometry);

    HRESULT (STDMETHODCALLTYPE *CreateGeometryFigure)(
        IXpsOMObjectFactory *This,
        const XPS_POINT *startPoint,
        IXpsOMGeometryFigure **figure);

    HRESULT (STDMETHODCALLTYPE *CreateMatrixTransform)(
        IXpsOMObjectFactory *This,
        const XPS_MATRIX *matrix,
        IXpsOMMatrixTransform **transform);

    HRESULT (STDMETHODCALLTYPE *CreateSolidColorBrush)(
        IXpsOMObjectFactory *This,
        const XPS_COLOR *color,
        IXpsOMColorProfileResource *colorProfile,
        IXpsOMSolidColorBrush **solidColorBrush);

    HRESULT (STDMETHODCALLTYPE *CreateColorProfileResource)(
        IXpsOMObjectFactory *This,
        IStream *acquiredStream,
        IOpcPartUri *partUri,
        IXpsOMColorProfileResource **colorProfileResource);

    HRESULT (STDMETHODCALLTYPE *CreateImageBrush)(
        IXpsOMObjectFactory *This,
        IXpsOMImageResource *image,
        const XPS_RECT *viewBox,
        const XPS_RECT *viewPort,
        IXpsOMImageBrush **imageBrush);

    HRESULT (STDMETHODCALLTYPE *CreateVisualBrush)(
        IXpsOMObjectFactory *This,
        const XPS_RECT *viewBox,
        const XPS_RECT *viewPort,
        IXpsOMVisualBrush **visualBrush);

    HRESULT (STDMETHODCALLTYPE *CreateImageResource)(
        IXpsOMObjectFactory *This,
        IStream *acquiredStream,
        XPS_IMAGE_TYPE contentType,
        IOpcPartUri *partUri,
        IXpsOMImageResource **imageResource);

    HRESULT (STDMETHODCALLTYPE *CreatePrintTicketResource)(
        IXpsOMObjectFactory *This,
        IStream *acquiredStream,
        IOpcPartUri *partUri,
        IXpsOMPrintTicketResource **printTicketResource);

    HRESULT (STDMETHODCALLTYPE *CreateFontResource)(
        IXpsOMObjectFactory *This,
        IStream *acquiredStream,
        XPS_FONT_EMBEDDING fontEmbedding,
        IOpcPartUri *partUri,
        BOOL isObfSourceStream,
        IXpsOMFontResource **fontResource);

    HRESULT (STDMETHODCALLTYPE *CreateGradientStop)(
        IXpsOMObjectFactory *This,
        const XPS_COLOR *color,
        IXpsOMColorProfileResource *colorProfile,
        FLOAT offset,
        IXpsOMGradientStop **gradientStop);

    HRESULT (STDMETHODCALLTYPE *CreateLinearGradientBrush)(
        IXpsOMObjectFactory *This,
        IXpsOMGradientStop *gradStop1,
        IXpsOMGradientStop *gradStop2,
        const XPS_POINT *startPoint,
        const XPS_POINT *endPoint,
        IXpsOMLinearGradientBrush **linearGradientBrush);

    HRESULT (STDMETHODCALLTYPE *CreateRadialGradientBrush)(
        IXpsOMObjectFactory *This,
        IXpsOMGradientStop *gradStop1,
        IXpsOMGradientStop *gradStop2,
        const XPS_POINT *centerPoint,
        const XPS_POINT *gradientOrigin,
        const XPS_SIZE *radiiSizes,
        IXpsOMRadialGradientBrush **radialGradientBrush);

    HRESULT (STDMETHODCALLTYPE *CreateCoreProperties)(
        IXpsOMObjectFactory *This,
        IOpcPartUri *partUri,
        IXpsOMCoreProperties **coreProperties);

    HRESULT (STDMETHODCALLTYPE *CreateDictionary)(
        IXpsOMObjectFactory *This,
        IXpsOMDictionary **dictionary);

    HRESULT (STDMETHODCALLTYPE *CreatePartUriCollection)(
        IXpsOMObjectFactory *This,
        IXpsOMPartUriCollection **partUriCollection);

    HRESULT (STDMETHODCALLTYPE *CreatePackageWriterOnFile)(
        IXpsOMObjectFactory *This,
        LPCWSTR fileName,
        LPSECURITY_ATTRIBUTES securityAttributes,
        DWORD flagsAndAttributes,
        BOOL optimizeMarkupSize,
        XPS_INTERLEAVING interleaving,
        IOpcPartUri *documentSequencePartName,
        IXpsOMCoreProperties *coreProperties,
        IXpsOMImageResource *packageThumbnail,
        IXpsOMPrintTicketResource *documentSequencePrintTicket,
        IOpcPartUri *discardControlPartName,
        IXpsOMPackageWriter **packageWriter);

    HRESULT (STDMETHODCALLTYPE *CreatePackageWriterOnStream)(
        IXpsOMObjectFactory *This,
        ISequentialStream *outputStream,
        BOOL optimizeMarkupSize,
        XPS_INTERLEAVING interleaving,
        IOpcPartUri *documentSequencePartName,
        IXpsOMCoreProperties *coreProperties,
        IXpsOMImageResource *packageThumbnail,
        IXpsOMPrintTicketResource *documentSequencePrintTicket,
        IOpcPartUri *discardControlPartName,
        IXpsOMPackageWriter **packageWriter);

    HRESULT (STDMETHODCALLTYPE *CreatePartUri)(
        IXpsOMObjectFactory *This,
        LPCWSTR uri,
        IOpcPartUri **partUri);

    HRESULT (STDMETHODCALLTYPE *CreateReadOnlyStreamOnFile)(
        IXpsOMObjectFactory *This,
        LPCWSTR filename,
        IStream **stream);

    END_INTERFACE
} IXpsOMObjectFactoryVtbl;

interface IXpsOMObjectFactory {
    CONST_VTBL IXpsOMObjectFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMObjectFactory_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMObjectFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMObjectFactory_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMObjectFactory methods ***/
#define IXpsOMObjectFactory_CreatePackage(This,package) \
    ((This)->lpVtbl->CreatePackage(This,package))
#define IXpsOMObjectFactory_CreatePackageFromFile(This,filename,reuseObjects,package) \
    ((This)->lpVtbl->CreatePackageFromFile(This,filename,reuseObjects,package))
#define IXpsOMObjectFactory_CreatePackageFromStream(This,stream,reuseObjects,package) \
    ((This)->lpVtbl->CreatePackageFromStream(This,stream,reuseObjects,package))
#define IXpsOMObjectFactory_CreateStoryFragmentsResource(This,acquiredStream,partUri,storyFragmentsResource) \
    ((This)->lpVtbl->CreateStoryFragmentsResource(This,acquiredStream,partUri,storyFragmentsResource))
#define IXpsOMObjectFactory_CreateDocumentStructureResource(This,acquiredStream,partUri,documentStructureResource) \
    ((This)->lpVtbl->CreateDocumentStructureResource(This,acquiredStream,partUri,documentStructureResource))
#define IXpsOMObjectFactory_CreateSignatureBlockResource(This,acquiredStream,partUri,signatureBlockResource) \
    ((This)->lpVtbl->CreateSignatureBlockResource(This,acquiredStream,partUri,signatureBlockResource))
#define IXpsOMObjectFactory_CreateRemoteDictionaryResource(This,dictionary,partUri,remoteDictionaryResource) \
    ((This)->lpVtbl->CreateRemoteDictionaryResource(This,dictionary,partUri,remoteDictionaryResource))
#define IXpsOMObjectFactory_CreateRemoteDictionaryResourceFromStream(This,dictionaryMarkupStream,dictionaryPartUri,resources,dictionaryResource) \
    ((This)->lpVtbl->CreateRemoteDictionaryResourceFromStream(This,dictionaryMarkupStream,dictionaryPartUri,resources,dictionaryResource))
#define IXpsOMObjectFactory_CreatePartResources(This,partResources) \
    ((This)->lpVtbl->CreatePartResources(This,partResources))
#define IXpsOMObjectFactory_CreateDocumentSequence(This,partUri,documentSequence) \
    ((This)->lpVtbl->CreateDocumentSequence(This,partUri,documentSequence))
#define IXpsOMObjectFactory_CreateDocument(This,partUri,document) \
    ((This)->lpVtbl->CreateDocument(This,partUri,document))
#define IXpsOMObjectFactory_CreatePageReference(This,advisoryPageDimensions,pageReference) \
    ((This)->lpVtbl->CreatePageReference(This,advisoryPageDimensions,pageReference))
#define IXpsOMObjectFactory_CreatePage(This,pageDimensions,language,partUri,page) \
    ((This)->lpVtbl->CreatePage(This,pageDimensions,language,partUri,page))
#define IXpsOMObjectFactory_CreatePageFromStream(This,pageMarkupStream,partUri,resources,reuseObjects,page) \
    ((This)->lpVtbl->CreatePageFromStream(This,pageMarkupStream,partUri,resources,reuseObjects,page))
#define IXpsOMObjectFactory_CreateCanvas(This,canvas) \
    ((This)->lpVtbl->CreateCanvas(This,canvas))
#define IXpsOMObjectFactory_CreateGlyphs(This,fontResource,glyphs) \
    ((This)->lpVtbl->CreateGlyphs(This,fontResource,glyphs))
#define IXpsOMObjectFactory_CreatePath(This,path) \
    ((This)->lpVtbl->CreatePath(This,path))
#define IXpsOMObjectFactory_CreateGeometry(This,geometry) \
    ((This)->lpVtbl->CreateGeometry(This,geometry))
#define IXpsOMObjectFactory_CreateGeometryFigure(This,startPoint,figure) \
    ((This)->lpVtbl->CreateGeometryFigure(This,startPoint,figure))
#define IXpsOMObjectFactory_CreateMatrixTransform(This,matrix,transform) \
    ((This)->lpVtbl->CreateMatrixTransform(This,matrix,transform))
#define IXpsOMObjectFactory_CreateSolidColorBrush(This,color,colorProfile,solidColorBrush) \
    ((This)->lpVtbl->CreateSolidColorBrush(This,color,colorProfile,solidColorBrush))
#define IXpsOMObjectFactory_CreateColorProfileResource(This,acquiredStream,partUri,colorProfileResource) \
    ((This)->lpVtbl->CreateColorProfileResource(This,acquiredStream,partUri,colorProfileResource))
#define IXpsOMObjectFactory_CreateImageBrush(This,image,viewBox,viewPort,imageBrush) \
    ((This)->lpVtbl->CreateImageBrush(This,image,viewBox,viewPort,imageBrush))
#define IXpsOMObjectFactory_CreateVisualBrush(This,viewBox,viewPort,visualBrush) \
    ((This)->lpVtbl->CreateVisualBrush(This,viewBox,viewPort,visualBrush))
#define IXpsOMObjectFactory_CreateImageResource(This,acquiredStream,contentType,partUri,imageResource) \
    ((This)->lpVtbl->CreateImageResource(This,acquiredStream,contentType,partUri,imageResource))
#define IXpsOMObjectFactory_CreatePrintTicketResource(This,acquiredStream,partUri,printTicketResource) \
    ((This)->lpVtbl->CreatePrintTicketResource(This,acquiredStream,partUri,printTicketResource))
#define IXpsOMObjectFactory_CreateFontResource(This,acquiredStream,fontEmbedding,partUri,isObfSourceStream,fontResource) \
    ((This)->lpVtbl->CreateFontResource(This,acquiredStream,fontEmbedding,partUri,isObfSourceStream,fontResource))
#define IXpsOMObjectFactory_CreateGradientStop(This,color,colorProfile,offset,gradientStop) \
    ((This)->lpVtbl->CreateGradientStop(This,color,colorProfile,offset,gradientStop))
#define IXpsOMObjectFactory_CreateLinearGradientBrush(This,gradStop1,gradStop2,startPoint,endPoint,linearGradientBrush) \
    ((This)->lpVtbl->CreateLinearGradientBrush(This,gradStop1,gradStop2,startPoint,endPoint,linearGradientBrush))
#define IXpsOMObjectFactory_CreateRadialGradientBrush(This,gradStop1,gradStop2,centerPoint,gradientOrigin,radiiSizes,radialGradientBrush) \
    ((This)->lpVtbl->CreateRadialGradientBrush(This,gradStop1,gradStop2,centerPoint,gradientOrigin,radiiSizes,radialGradientBrush))
#define IXpsOMObjectFactory_CreateCoreProperties(This,partUri,coreProperties) \
    ((This)->lpVtbl->CreateCoreProperties(This,partUri,coreProperties))
#define IXpsOMObjectFactory_CreateDictionary(This,dictionary) \
    ((This)->lpVtbl->CreateDictionary(This,dictionary))
#define IXpsOMObjectFactory_CreatePartUriCollection(This,partUriCollection) \
    ((This)->lpVtbl->CreatePartUriCollection(This,partUriCollection))
#define IXpsOMObjectFactory_CreatePackageWriterOnFile(This,fileName,securityAttributes,flagsAndAttributes,optimizeMarkupSize,interleaving,documentSequencePartName,coreProperties,packageThumbnail,documentSequencePrintTicket,discardControlPartName,packageWriter) \
    ((This)->lpVtbl->CreatePackageWriterOnFile(This,fileName,securityAttributes,flagsAndAttributes,optimizeMarkupSize,interleaving,documentSequencePartName,coreProperties,packageThumbnail,documentSequencePrintTicket,discardControlPartName,packageWriter))
#define IXpsOMObjectFactory_CreatePackageWriterOnStream(This,outputStream,optimizeMarkupSize,interleaving,documentSequencePartName,coreProperties,packageThumbnail,documentSequencePrintTicket,discardControlPartName,packageWriter) \
    ((This)->lpVtbl->CreatePackageWriterOnStream(This,outputStream,optimizeMarkupSize,interleaving,documentSequencePartName,coreProperties,packageThumbnail,documentSequencePrintTicket,discardControlPartName,packageWriter))
#define IXpsOMObjectFactory_CreatePartUri(This,uri,partUri) \
    ((This)->lpVtbl->CreatePartUri(This,uri,partUri))
#define IXpsOMObjectFactory_CreateReadOnlyStreamOnFile(This,filename,stream) \
    ((This)->lpVtbl->CreateReadOnlyStreamOnFile(This,filename,stream))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMObjectFactory_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMNameCollection interface
 */
#ifndef __IXpsOMNameCollection_INTERFACE_DEFINED__
#define __IXpsOMNameCollection_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMNameCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMNameCollectionVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMNameCollection *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMNameCollection *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMNameCollection *This);

    /*** IXpsOMNameCollection methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IXpsOMNameCollection *This,
        UINT32 *count);

    HRESULT (STDMETHODCALLTYPE *GetAt)(
        IXpsOMNameCollection *This,
        UINT32 index,
        LPWSTR *name);

    END_INTERFACE
} IXpsOMNameCollectionVtbl;

interface IXpsOMNameCollection {
    CONST_VTBL IXpsOMNameCollectionVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMNameCollection_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMNameCollection_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMNameCollection_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMNameCollection methods ***/
#define IXpsOMNameCollection_GetCount(This,count) \
    ((This)->lpVtbl->GetCount(This,count))
#define IXpsOMNameCollection_GetAt(This,index,name) \
    ((This)->lpVtbl->GetAt(This,index,name))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMNameCollection_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMPartUriCollection interface
 */
#ifndef __IXpsOMPartUriCollection_INTERFACE_DEFINED__
#define __IXpsOMPartUriCollection_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMPartUriCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMPartUriCollectionVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMPartUriCollection *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMPartUriCollection *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMPartUriCollection *This);

    /*** IXpsOMPartUriCollection methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IXpsOMPartUriCollection *This,
        UINT32 *count);

    HRESULT (STDMETHODCALLTYPE *GetAt)(
        IXpsOMPartUriCollection *This,
        UINT32 index,
        IOpcPartUri **partUri);

    HRESULT (STDMETHODCALLTYPE *InsertAt)(
        IXpsOMPartUriCollection *This,
        UINT32 index,
        IOpcPartUri *partUri);

    HRESULT (STDMETHODCALLTYPE *RemoveAt)(
        IXpsOMPartUriCollection *This,
        UINT32 index);

    HRESULT (STDMETHODCALLTYPE *SetAt)(
        IXpsOMPartUriCollection *This,
        UINT32 index,
        IOpcPartUri *partUri);

    HRESULT (STDMETHODCALLTYPE *Append)(
        IXpsOMPartUriCollection *This,
        IOpcPartUri *partUri);

    END_INTERFACE
} IXpsOMPartUriCollectionVtbl;

interface IXpsOMPartUriCollection {
    CONST_VTBL IXpsOMPartUriCollectionVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMPartUriCollection_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMPartUriCollection_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMPartUriCollection_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMPartUriCollection methods ***/
#define IXpsOMPartUriCollection_GetCount(This,count) \
    ((This)->lpVtbl->GetCount(This,count))
#define IXpsOMPartUriCollection_GetAt(This,index,partUri) \
    ((This)->lpVtbl->GetAt(This,index,partUri))
#define IXpsOMPartUriCollection_InsertAt(This,index,partUri) \
    ((This)->lpVtbl->InsertAt(This,index,partUri))
#define IXpsOMPartUriCollection_RemoveAt(This,index) \
    ((This)->lpVtbl->RemoveAt(This,index))
#define IXpsOMPartUriCollection_SetAt(This,index,partUri) \
    ((This)->lpVtbl->SetAt(This,index,partUri))
#define IXpsOMPartUriCollection_Append(This,partUri) \
    ((This)->lpVtbl->Append(This,partUri))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMPartUriCollection_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IXpsOMPackageWriter interface
 */
#ifndef __IXpsOMPackageWriter_INTERFACE_DEFINED__
#define __IXpsOMPackageWriter_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMPackageWriter;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMPackageWriterVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMPackageWriter *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMPackageWriter *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMPackageWriter *This);

    /*** IXpsOMPackageWriter methods ***/
    HRESULT (STDMETHODCALLTYPE *StartNewDocument)(
        IXpsOMPackageWriter *This,
        IOpcPartUri *documentPartName,
        IXpsOMPrintTicketResource *documentPrintTicket,
        IXpsOMDocumentStructureResource *documentStructure,
        IXpsOMSignatureBlockResourceCollection *signatureBlockResources,
        IXpsOMPartUriCollection *restrictedFonts);

    HRESULT (STDMETHODCALLTYPE *AddPage)(
        IXpsOMPackageWriter *This,
        IXpsOMPage *page,
        const XPS_SIZE *advisoryPageDimensions,
        IXpsOMPartUriCollection *discardableResourceParts,
        IXpsOMStoryFragmentsResource *storyFragments,
        IXpsOMPrintTicketResource *pagePrintTicket,
        IXpsOMImageResource *pageThumbnail);

    HRESULT (STDMETHODCALLTYPE *AddResource)(
        IXpsOMPackageWriter *This,
        IXpsOMResource *resource);

    HRESULT (STDMETHODCALLTYPE *Close)(
        IXpsOMPackageWriter *This);

    HRESULT (STDMETHODCALLTYPE *IsClosed)(
        IXpsOMPackageWriter *This,
        BOOL *isClosed);

    END_INTERFACE
} IXpsOMPackageWriterVtbl;

interface IXpsOMPackageWriter {
    CONST_VTBL IXpsOMPackageWriterVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMPackageWriter_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMPackageWriter_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMPackageWriter_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMPackageWriter methods ***/
#define IXpsOMPackageWriter_StartNewDocument(This,documentPartName,documentPrintTicket,documentStructure,signatureBlockResources,restrictedFonts) \
    ((This)->lpVtbl->StartNewDocument(This,documentPartName,documentPrintTicket,documentStructure,signatureBlockResources,restrictedFonts))
#define IXpsOMPackageWriter_AddPage(This,page,advisoryPageDimensions,discardableResourceParts,storyFragments,pagePrintTicket,pageThumbnail) \
    ((This)->lpVtbl->AddPage(This,page,advisoryPageDimensions,discardableResourceParts,storyFragments,pagePrintTicket,pageThumbnail))
#define IXpsOMPackageWriter_AddResource(This,resource) \
    ((This)->lpVtbl->AddResource(This,resource))
#define IXpsOMPackageWriter_Close(This) \
    ((This)->lpVtbl->Close(This))
#define IXpsOMPackageWriter_IsClosed(This,isClosed) \
    ((This)->lpVtbl->IsClosed(This,isClosed))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMPackageWriter_INTERFACE_DEFINED__ */
/*****************************************************************************
 * IXpsOMPackageTarget interface
 */
#ifndef __IXpsOMPackageTarget_INTERFACE_DEFINED__
#define __IXpsOMPackageTarget_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMPackageTarget;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMPackageTargetVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMPackageTarget *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMPackageTarget *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMPackageTarget *This);

    /*** IXpsOMPackageTarget methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateXpsOMPackageWriter)(
        IXpsOMPackageTarget *This,
        IOpcPartUri *documentSequencePartName,
        IXpsOMPrintTicketResource *documentSequencePrintTicket,
        IOpcPartUri *discardControlPartName,
        IXpsOMPackageWriter **packageWriter);

    END_INTERFACE
} IXpsOMPackageTargetVtbl;

interface IXpsOMPackageTarget {
    CONST_VTBL IXpsOMPackageTargetVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMPackageTarget_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMPackageTarget_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMPackageTarget_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMPackageTarget methods ***/
#define IXpsOMPackageTarget_CreateXpsOMPackageWriter(This,documentSequencePartName,documentSequencePrintTicket,discardControlPartName,packageWriter) \
    ((This)->lpVtbl->CreateXpsOMPackageWriter(This,documentSequencePartName,documentSequencePrintTicket,discardControlPartName,packageWriter))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMPackageTarget_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

/*****************************************************************************
 * IXpsOMThumbnailGenerator interface
 */
#ifndef __IXpsOMThumbnailGenerator_INTERFACE_DEFINED__
#define __IXpsOMThumbnailGenerator_INTERFACE_DEFINED__

EXTERN_C const IID IID_IXpsOMThumbnailGenerator;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IXpsOMThumbnailGeneratorVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IXpsOMThumbnailGenerator *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IXpsOMThumbnailGenerator *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IXpsOMThumbnailGenerator *This);

    /*** IXpsOMThumbnailGenerator methods ***/
    HRESULT (STDMETHODCALLTYPE *GenerateThumbnail)(
        IXpsOMThumbnailGenerator *This,
        IXpsOMPage *page,
        XPS_IMAGE_TYPE thumbnailType,
        XPS_THUMBNAIL_SIZE thumbnailSize,
        IOpcPartUri *imageResourcePartName,
        IXpsOMImageResource **imageResource);

    END_INTERFACE
} IXpsOMThumbnailGeneratorVtbl;

interface IXpsOMThumbnailGenerator {
    CONST_VTBL IXpsOMThumbnailGeneratorVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IXpsOMThumbnailGenerator_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IXpsOMThumbnailGenerator_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IXpsOMThumbnailGenerator_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IXpsOMThumbnailGenerator methods ***/
#define IXpsOMThumbnailGenerator_GenerateThumbnail(This,page,thumbnailType,thumbnailSize,imageResourcePartName,imageResource) \
    ((This)->lpVtbl->GenerateThumbnail(This,page,thumbnailType,thumbnailSize,imageResourcePartName,imageResource))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IXpsOMThumbnailGenerator_INTERFACE_DEFINED__ */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#ifndef __MSXPS_LIBRARY_DEFINED__
#define __MSXPS_LIBRARY_DEFINED__

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

/*****************************************************************************
 * XpsOMObjectFactory coclass
 */

EXTERN_C const CLSID CLSID_XpsOMObjectFactory;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

/*****************************************************************************
 * XpsOMThumbnailGenerator coclass
 */

EXTERN_C const CLSID CLSID_XpsOMThumbnailGenerator;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#endif /* __MSXPS_LIBRARY_DEFINED__ */

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

#define XPS_E_INVALID_LANGUAGE                           MAKE_HRESULT(1, FACILITY_XPS, 0x000)
#define XPS_E_INVALID_NAME                               MAKE_HRESULT(1, FACILITY_XPS, 0x001)
#define XPS_E_INVALID_RESOURCE_KEY                       MAKE_HRESULT(1, FACILITY_XPS, 0x002)
#define XPS_E_INVALID_PAGE_SIZE                          MAKE_HRESULT(1, FACILITY_XPS, 0x003)
#define XPS_E_INVALID_BLEED_BOX                          MAKE_HRESULT(1, FACILITY_XPS, 0x004)
#define XPS_E_INVALID_THUMBNAIL_IMAGE_TYPE               MAKE_HRESULT(1, FACILITY_XPS, 0x005)
#define XPS_E_INVALID_LOOKUP_TYPE                        MAKE_HRESULT(1, FACILITY_XPS, 0x006)
#define XPS_E_INVALID_FLOAT                              MAKE_HRESULT(1, FACILITY_XPS, 0x007)
#define XPS_E_UNEXPECTED_CONTENT_TYPE                    MAKE_HRESULT(1, FACILITY_XPS, 0x008)
#define XPS_E_INVALID_FONT_URI                           MAKE_HRESULT(1, FACILITY_XPS, 0x00a)
#define XPS_E_INVALID_CONTENT_BOX                        MAKE_HRESULT(1, FACILITY_XPS, 0x00b)
#define XPS_E_INVALID_MARKUP                             MAKE_HRESULT(1, FACILITY_XPS, 0x00c)
#define XPS_E_INVALID_XML_ENCODING                       MAKE_HRESULT(1, FACILITY_XPS, 0x00d)
#define XPS_E_INVALID_CONTENT_TYPE                       MAKE_HRESULT(1, FACILITY_XPS, 0x00e)
#define XPS_E_INVALID_OBFUSCATED_FONT_URI                MAKE_HRESULT(1, FACILITY_XPS, 0x00f)
#define XPS_E_UNEXPECTED_RELATIONSHIP_TYPE               MAKE_HRESULT(1, FACILITY_XPS, 0x010)
#define XPS_E_UNEXPECTED_RESTRICTED_FONT_RELATIONSHIP    MAKE_HRESULT(1, FACILITY_XPS, 0x011)

#define XPS_E_MISSING_NAME                               MAKE_HRESULT(1, FACILITY_XPS, 0x100)
#define XPS_E_MISSING_LOOKUP                             MAKE_HRESULT(1, FACILITY_XPS, 0x101)
#define XPS_E_MISSING_GLYPHS                             MAKE_HRESULT(1, FACILITY_XPS, 0x102)
#define XPS_E_MISSING_SEGMENT_DATA                       MAKE_HRESULT(1, FACILITY_XPS, 0x103)
#define XPS_E_MISSING_COLORPROFILE                       MAKE_HRESULT(1, FACILITY_XPS, 0x104)
#define XPS_E_MISSING_RELATIONSHIP_TARGET                MAKE_HRESULT(1, FACILITY_XPS, 0x105)
#define XPS_E_MISSING_RESOURCE_RELATIONSHIP              MAKE_HRESULT(1, FACILITY_XPS, 0x106)
#define XPS_E_MISSING_FONTURI                            MAKE_HRESULT(1, FACILITY_XPS, 0x107)
#define XPS_E_MISSING_DOCUMENTSEQUENCE_RELATIONSHIP      MAKE_HRESULT(1, FACILITY_XPS, 0x108)
#define XPS_E_MISSING_DOCUMENT                           MAKE_HRESULT(1, FACILITY_XPS, 0x109)
#define XPS_E_MISSING_REFERRED_DOCUMENT                  MAKE_HRESULT(1, FACILITY_XPS, 0x10a)
#define XPS_E_MISSING_REFERRED_PAGE                      MAKE_HRESULT(1, FACILITY_XPS, 0x10b)
#define XPS_E_MISSING_PAGE_IN_DOCUMENT                   MAKE_HRESULT(1, FACILITY_XPS, 0x10c)
#define XPS_E_MISSING_PAGE_IN_PAGEREFERENCE              MAKE_HRESULT(1, FACILITY_XPS, 0x10d)
#define XPS_E_MISSING_IMAGE_IN_IMAGEBRUSH                MAKE_HRESULT(1, FACILITY_XPS, 0x10e)
#define XPS_E_MISSING_RESOURCE_KEY                       MAKE_HRESULT(1, FACILITY_XPS, 0x10f)
#define XPS_E_MISSING_PART_REFERENCE                     MAKE_HRESULT(1, FACILITY_XPS, 0x110)
#define XPS_E_MISSING_RESTRICTED_FONT_RELATIONSHIP       MAKE_HRESULT(1, FACILITY_XPS, 0x111)
#define XPS_E_MISSING_DISCARDCONTROL                     MAKE_HRESULT(1, FACILITY_XPS, 0x112)
#define XPS_E_MISSING_PART_STREAM                        MAKE_HRESULT(1, FACILITY_XPS, 0x113)
#define XPS_E_UNAVAILABLE_PACKAGE                        MAKE_HRESULT(1, FACILITY_XPS, 0x114)

#define XPS_E_DUPLICATE_RESOURCE_KEYS                    MAKE_HRESULT(1, FACILITY_XPS, 0x200)
#define XPS_E_MULTIPLE_RESOURCES                         MAKE_HRESULT(1, FACILITY_XPS, 0x201)
#define XPS_E_MULTIPLE_DOCUMENTSEQUENCE_RELATIONSHIPS    MAKE_HRESULT(1, FACILITY_XPS, 0x202)
#define XPS_E_MULTIPLE_THUMBNAILS_ON_PAGE                MAKE_HRESULT(1, FACILITY_XPS, 0x203)
#define XPS_E_MULTIPLE_THUMBNAILS_ON_PACKAGE             MAKE_HRESULT(1, FACILITY_XPS, 0x204)
#define XPS_E_MULTIPLE_PRINTTICKETS_ON_PAGE              MAKE_HRESULT(1, FACILITY_XPS, 0x205)
#define XPS_E_MULTIPLE_PRINTTICKETS_ON_DOCUMENT          MAKE_HRESULT(1, FACILITY_XPS, 0x206)
#define XPS_E_MULTIPLE_PRINTTICKETS_ON_DOCUMENTSEQUENCE  MAKE_HRESULT(1, FACILITY_XPS, 0x207)
#define XPS_E_MULTIPLE_REFERENCES_TO_PART                MAKE_HRESULT(1, FACILITY_XPS, 0x208)
#define XPS_E_DUPLICATE_NAMES                            MAKE_HRESULT(1, FACILITY_XPS, 0x209)

#define XPS_E_STRING_TOO_LONG                            MAKE_HRESULT(1, FACILITY_XPS, 0x300)
#define XPS_E_TOO_MANY_INDICES                           MAKE_HRESULT(1, FACILITY_XPS, 0x301)
#define XPS_E_MAPPING_OUT_OF_ORDER                       MAKE_HRESULT(1, FACILITY_XPS, 0x302)
#define XPS_E_MAPPING_OUTSIDE_STRING                     MAKE_HRESULT(1, FACILITY_XPS, 0x303)
#define XPS_E_MAPPING_OUTSIDE_INDICES                    MAKE_HRESULT(1, FACILITY_XPS, 0x304)
#define XPS_E_CARET_OUTSIDE_STRING                       MAKE_HRESULT(1, FACILITY_XPS, 0x305)
#define XPS_E_CARET_OUT_OF_ORDER                         MAKE_HRESULT(1, FACILITY_XPS, 0x306)
#define XPS_E_ODD_BIDILEVEL                              MAKE_HRESULT(1, FACILITY_XPS, 0x307)
#define XPS_E_ONE_TO_ONE_MAPPING_EXPECTED                MAKE_HRESULT(1, FACILITY_XPS, 0x308)
#define XPS_E_RESTRICTED_FONT_NOT_OBFUSCATED             MAKE_HRESULT(1, FACILITY_XPS, 0x309)
#define XPS_E_NEGATIVE_FLOAT                             MAKE_HRESULT(1, FACILITY_XPS, 0x30a)

#define XPS_E_XKEY_ATTR_PRESENT_OUTSIDE_RES_DICT         MAKE_HRESULT(1, FACILITY_XPS, 0x400)
#define XPS_E_DICTIONARY_ITEM_NAMED                      MAKE_HRESULT(1, FACILITY_XPS, 0x401)
#define XPS_E_NESTED_REMOTE_DICTIONARY                   MAKE_HRESULT(1, FACILITY_XPS, 0x402)

#define XPS_E_INDEX_OUT_OF_RANGE                         MAKE_HRESULT(1, FACILITY_XPS, 0x500)
#define XPS_E_VISUAL_CIRCULAR_REF                        MAKE_HRESULT(1, FACILITY_XPS, 0x501)
#define XPS_E_NO_CUSTOM_OBJECTS                          MAKE_HRESULT(1, FACILITY_XPS, 0x502)
#define XPS_E_ALREADY_OWNED                              MAKE_HRESULT(1, FACILITY_XPS, 0x503)
#define XPS_E_RESOURCE_NOT_OWNED                         MAKE_HRESULT(1, FACILITY_XPS, 0x504)
#define XPS_E_UNEXPECTED_COLORPROFILE                    MAKE_HRESULT(1, FACILITY_XPS, 0x505)
#define XPS_E_COLOR_COMPONENT_OUT_OF_RANGE               MAKE_HRESULT(1, FACILITY_XPS, 0x506)
#define XPS_E_BOTH_PATHFIGURE_AND_ABBR_SYNTAX_PRESENT    MAKE_HRESULT(1, FACILITY_XPS, 0x507)
#define XPS_E_BOTH_RESOURCE_AND_SOURCEATTR_PRESENT       MAKE_HRESULT(1, FACILITY_XPS, 0x508)
#define XPS_E_BLEED_BOX_PAGE_DIMENSIONS_NOT_IN_SYNC      MAKE_HRESULT(1, FACILITY_XPS, 0x509)
#define XPS_E_RELATIONSHIP_EXTERNAL                      MAKE_HRESULT(1, FACILITY_XPS, 0x50a)
#define XPS_E_NOT_ENOUGH_GRADIENT_STOPS                  MAKE_HRESULT(1, FACILITY_XPS, 0x50b)
#define XPS_E_PACKAGE_WRITER_NOT_CLOSED                  MAKE_HRESULT(1, FACILITY_XPS, 0x50c)

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */

#endif // (NTDDI >= NTDDI_WIN7)
/* Begin additional prototypes for all interfaces */


/* End additional prototypes for all interfaces */

#endif /* __xpsobjectmodel_h__ */
