/* Generated from wincodec.idl by POIDL version 0.80 - Do not edit */

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

#ifndef __wincodec_h__
#define __wincodec_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

#ifndef __IWICPalette_FWD_DEFINED__
#define __IWICPalette_FWD_DEFINED__
typedef interface IWICPalette IWICPalette;
#endif /* __IWICPalette_FWD_DEFINED__ */

#ifndef __IWICBitmapSource_FWD_DEFINED__
#define __IWICBitmapSource_FWD_DEFINED__
typedef interface IWICBitmapSource IWICBitmapSource;
#endif /* __IWICBitmapSource_FWD_DEFINED__ */

#ifndef __IWICFormatConverter_FWD_DEFINED__
#define __IWICFormatConverter_FWD_DEFINED__
typedef interface IWICFormatConverter IWICFormatConverter;
#endif /* __IWICFormatConverter_FWD_DEFINED__ */

#ifndef __IWICPlanarFormatConverter_FWD_DEFINED__
#define __IWICPlanarFormatConverter_FWD_DEFINED__
typedef interface IWICPlanarFormatConverter IWICPlanarFormatConverter;
#endif /* __IWICPlanarFormatConverter_FWD_DEFINED__ */

#ifndef __IWICBitmapScaler_FWD_DEFINED__
#define __IWICBitmapScaler_FWD_DEFINED__
typedef interface IWICBitmapScaler IWICBitmapScaler;
#endif /* __IWICBitmapScaler_FWD_DEFINED__ */

#ifndef __IWICBitmapClipper_FWD_DEFINED__
#define __IWICBitmapClipper_FWD_DEFINED__
typedef interface IWICBitmapClipper IWICBitmapClipper;
#endif /* __IWICBitmapClipper_FWD_DEFINED__ */

#ifndef __IWICBitmapFlipRotator_FWD_DEFINED__
#define __IWICBitmapFlipRotator_FWD_DEFINED__
typedef interface IWICBitmapFlipRotator IWICBitmapFlipRotator;
#endif /* __IWICBitmapFlipRotator_FWD_DEFINED__ */

#ifndef __IWICBitmapLock_FWD_DEFINED__
#define __IWICBitmapLock_FWD_DEFINED__
typedef interface IWICBitmapLock IWICBitmapLock;
#endif /* __IWICBitmapLock_FWD_DEFINED__ */

#ifndef __IWICBitmap_FWD_DEFINED__
#define __IWICBitmap_FWD_DEFINED__
typedef interface IWICBitmap IWICBitmap;
#endif /* __IWICBitmap_FWD_DEFINED__ */

#ifndef __IWICColorContext_FWD_DEFINED__
#define __IWICColorContext_FWD_DEFINED__
typedef interface IWICColorContext IWICColorContext;
#endif /* __IWICColorContext_FWD_DEFINED__ */

#ifndef __IWICColorTransform_FWD_DEFINED__
#define __IWICColorTransform_FWD_DEFINED__
typedef interface IWICColorTransform IWICColorTransform;
#endif /* __IWICColorTransform_FWD_DEFINED__ */

#ifndef __IWICFastMetadataEncoder_FWD_DEFINED__
#define __IWICFastMetadataEncoder_FWD_DEFINED__
typedef interface IWICFastMetadataEncoder IWICFastMetadataEncoder;
#endif /* __IWICFastMetadataEncoder_FWD_DEFINED__ */

#ifndef __IWICStream_FWD_DEFINED__
#define __IWICStream_FWD_DEFINED__
typedef interface IWICStream IWICStream;
#endif /* __IWICStream_FWD_DEFINED__ */

#ifndef __IWICEnumMetadataItem_FWD_DEFINED__
#define __IWICEnumMetadataItem_FWD_DEFINED__
typedef interface IWICEnumMetadataItem IWICEnumMetadataItem;
#endif /* __IWICEnumMetadataItem_FWD_DEFINED__ */

#ifndef __IWICMetadataQueryReader_FWD_DEFINED__
#define __IWICMetadataQueryReader_FWD_DEFINED__
typedef interface IWICMetadataQueryReader IWICMetadataQueryReader;
#endif /* __IWICMetadataQueryReader_FWD_DEFINED__ */

#ifndef __IWICMetadataQueryWriter_FWD_DEFINED__
#define __IWICMetadataQueryWriter_FWD_DEFINED__
typedef interface IWICMetadataQueryWriter IWICMetadataQueryWriter;
#endif /* __IWICMetadataQueryWriter_FWD_DEFINED__ */

#ifndef __IWICBitmapEncoder_FWD_DEFINED__
#define __IWICBitmapEncoder_FWD_DEFINED__
typedef interface IWICBitmapEncoder IWICBitmapEncoder;
#endif /* __IWICBitmapEncoder_FWD_DEFINED__ */

#ifndef __IWICBitmapFrameEncode_FWD_DEFINED__
#define __IWICBitmapFrameEncode_FWD_DEFINED__
typedef interface IWICBitmapFrameEncode IWICBitmapFrameEncode;
#endif /* __IWICBitmapFrameEncode_FWD_DEFINED__ */

#ifndef __IWICPlanarBitmapFrameEncode_FWD_DEFINED__
#define __IWICPlanarBitmapFrameEncode_FWD_DEFINED__
typedef interface IWICPlanarBitmapFrameEncode IWICPlanarBitmapFrameEncode;
#endif /* __IWICPlanarBitmapFrameEncode_FWD_DEFINED__ */

#ifndef __IWICImageEncoder_FWD_DEFINED__
#define __IWICImageEncoder_FWD_DEFINED__
typedef interface IWICImageEncoder IWICImageEncoder;
#endif /* __IWICImageEncoder_FWD_DEFINED__ */

#ifndef __IWICBitmapDecoder_FWD_DEFINED__
#define __IWICBitmapDecoder_FWD_DEFINED__
typedef interface IWICBitmapDecoder IWICBitmapDecoder;
#endif /* __IWICBitmapDecoder_FWD_DEFINED__ */

#ifndef __IWICBitmapSourceTransform_FWD_DEFINED__
#define __IWICBitmapSourceTransform_FWD_DEFINED__
typedef interface IWICBitmapSourceTransform IWICBitmapSourceTransform;
#endif /* __IWICBitmapSourceTransform_FWD_DEFINED__ */

#ifndef __IWICPlanarBitmapSourceTransform_FWD_DEFINED__
#define __IWICPlanarBitmapSourceTransform_FWD_DEFINED__
typedef interface IWICPlanarBitmapSourceTransform IWICPlanarBitmapSourceTransform;
#endif /* __IWICPlanarBitmapSourceTransform_FWD_DEFINED__ */

#ifndef __IWICBitmapFrameDecode_FWD_DEFINED__
#define __IWICBitmapFrameDecode_FWD_DEFINED__
typedef interface IWICBitmapFrameDecode IWICBitmapFrameDecode;
#endif /* __IWICBitmapFrameDecode_FWD_DEFINED__ */

#ifndef __IWICProgressiveLevelControl_FWD_DEFINED__
#define __IWICProgressiveLevelControl_FWD_DEFINED__
typedef interface IWICProgressiveLevelControl IWICProgressiveLevelControl;
#endif /* __IWICProgressiveLevelControl_FWD_DEFINED__ */

#ifndef __IWICProgressCallback_FWD_DEFINED__
#define __IWICProgressCallback_FWD_DEFINED__
typedef interface IWICProgressCallback IWICProgressCallback;
#endif /* __IWICProgressCallback_FWD_DEFINED__ */

#ifndef __IWICBitmapCodecProgressNotification_FWD_DEFINED__
#define __IWICBitmapCodecProgressNotification_FWD_DEFINED__
typedef interface IWICBitmapCodecProgressNotification IWICBitmapCodecProgressNotification;
#endif /* __IWICBitmapCodecProgressNotification_FWD_DEFINED__ */

#ifndef __IWICComponentInfo_FWD_DEFINED__
#define __IWICComponentInfo_FWD_DEFINED__
typedef interface IWICComponentInfo IWICComponentInfo;
#endif /* __IWICComponentInfo_FWD_DEFINED__ */

#ifndef __IWICFormatConverterInfo_FWD_DEFINED__
#define __IWICFormatConverterInfo_FWD_DEFINED__
typedef interface IWICFormatConverterInfo IWICFormatConverterInfo;
#endif /* __IWICFormatConverterInfo_FWD_DEFINED__ */

#ifndef __IWICBitmapCodecInfo_FWD_DEFINED__
#define __IWICBitmapCodecInfo_FWD_DEFINED__
typedef interface IWICBitmapCodecInfo IWICBitmapCodecInfo;
#endif /* __IWICBitmapCodecInfo_FWD_DEFINED__ */

#ifndef __IWICBitmapEncoderInfo_FWD_DEFINED__
#define __IWICBitmapEncoderInfo_FWD_DEFINED__
typedef interface IWICBitmapEncoderInfo IWICBitmapEncoderInfo;
#endif /* __IWICBitmapEncoderInfo_FWD_DEFINED__ */

#ifndef __IWICBitmapDecoderInfo_FWD_DEFINED__
#define __IWICBitmapDecoderInfo_FWD_DEFINED__
typedef interface IWICBitmapDecoderInfo IWICBitmapDecoderInfo;
#endif /* __IWICBitmapDecoderInfo_FWD_DEFINED__ */

#ifndef __IWICPixelFormatInfo_FWD_DEFINED__
#define __IWICPixelFormatInfo_FWD_DEFINED__
typedef interface IWICPixelFormatInfo IWICPixelFormatInfo;
#endif /* __IWICPixelFormatInfo_FWD_DEFINED__ */

#ifndef __IWICPixelFormatInfo2_FWD_DEFINED__
#define __IWICPixelFormatInfo2_FWD_DEFINED__
typedef interface IWICPixelFormatInfo2 IWICPixelFormatInfo2;
#endif /* __IWICPixelFormatInfo2_FWD_DEFINED__ */

#ifndef __IWICImagingFactory_FWD_DEFINED__
#define __IWICImagingFactory_FWD_DEFINED__
typedef interface IWICImagingFactory IWICImagingFactory;
#endif /* __IWICImagingFactory_FWD_DEFINED__ */

#ifndef __IWICImagingFactory2_FWD_DEFINED__
#define __IWICImagingFactory2_FWD_DEFINED__
typedef interface IWICImagingFactory2 IWICImagingFactory2;
#endif /* __IWICImagingFactory2_FWD_DEFINED__ */

#ifndef __IWICDevelopRawNotificationCallback_FWD_DEFINED__
#define __IWICDevelopRawNotificationCallback_FWD_DEFINED__
typedef interface IWICDevelopRawNotificationCallback IWICDevelopRawNotificationCallback;
#endif /* __IWICDevelopRawNotificationCallback_FWD_DEFINED__ */

#ifndef __IWICDevelopRaw_FWD_DEFINED__
#define __IWICDevelopRaw_FWD_DEFINED__
typedef interface IWICDevelopRaw IWICDevelopRaw;
#endif /* __IWICDevelopRaw_FWD_DEFINED__ */

#ifndef __IWICDdsDecoder_FWD_DEFINED__
#define __IWICDdsDecoder_FWD_DEFINED__
typedef interface IWICDdsDecoder IWICDdsDecoder;
#endif /* __IWICDdsDecoder_FWD_DEFINED__ */

#ifndef __IWICDdsEncoder_FWD_DEFINED__
#define __IWICDdsEncoder_FWD_DEFINED__
typedef interface IWICDdsEncoder IWICDdsEncoder;
#endif /* __IWICDdsEncoder_FWD_DEFINED__ */

#ifndef __IWICDdsFrameDecode_FWD_DEFINED__
#define __IWICDdsFrameDecode_FWD_DEFINED__
typedef interface IWICDdsFrameDecode IWICDdsFrameDecode;
#endif /* __IWICDdsFrameDecode_FWD_DEFINED__ */

#ifndef __IWICJpegFrameDecode_FWD_DEFINED__
#define __IWICJpegFrameDecode_FWD_DEFINED__
typedef interface IWICJpegFrameDecode IWICJpegFrameDecode;
#endif /* __IWICJpegFrameDecode_FWD_DEFINED__ */

#ifndef __IWICJpegFrameEncode_FWD_DEFINED__
#define __IWICJpegFrameEncode_FWD_DEFINED__
typedef interface IWICJpegFrameEncode IWICJpegFrameEncode;
#endif /* __IWICJpegFrameEncode_FWD_DEFINED__ */

/* Headers for imported files */

#include "wtypes.h"
#include "propidl.h"
#include "objidl.h"
#include "ocidl.h"
#include "dxgiformat.h"
#include "dxgitype.h"


/* #include <intsafe.h> */
#include <dcommon.h>

#define WINCODEC_SDK_VERSION1 0x0236
#define WINCODEC_SDK_VERSION2 0x0237

DEFINE_GUID(CLSID_WICImagingFactory,  0xcacaf262, 0x9370, 0x4615, 0xa1, 0x3b, 0x9f, 0x55, 0x39, 0xda, 0x4c, 0xa);
DEFINE_GUID(CLSID_WICImagingFactory1, 0xcacaf262, 0x9370, 0x4615, 0xa1, 0x3b, 0x9f, 0x55, 0x39, 0xda, 0x4c, 0xa);
DEFINE_GUID(CLSID_WICImagingFactory2, 0x317d06e8, 0x5f24, 0x433d, 0xbd, 0xf7, 0x79, 0xce, 0x68, 0xd8, 0xab, 0xc2);

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8) || defined(_WIN7_PLATFORM_UPDATE)
#define WINCODEC_SDK_VERSION WINCODEC_SDK_VERSION2
#define CLSID_WICImagingFactory CLSID_WICImagingFactory2
#else
#define WINCODEC_SDK_VERSION WINCODEC_SDK_VERSION1
#endif

DEFINE_GUID(GUID_VendorMicrosoft, 0xf0e749ca, 0xedef, 0x4589, 0xa7, 0x3a, 0xee, 0xe, 0x62, 0x6a, 0x2a, 0x2b);
DEFINE_GUID(GUID_VendorMicrosoftBuiltIn, 0x257a30fd, 0x6b6, 0x462b, 0xae, 0xa4, 0x63, 0xf7, 0xb, 0x86, 0xe5, 0x33);

DEFINE_GUID(CLSID_WICPngDecoder,   0x389ea17b, 0x5078, 0x4cde, 0xb6, 0xef, 0x25, 0xc1, 0x51, 0x75, 0xc7, 0x51);
DEFINE_GUID(CLSID_WICPngDecoder1,  0x389ea17b, 0x5078, 0x4cde, 0xb6, 0xef, 0x25, 0xc1, 0x51, 0x75, 0xc7, 0x51);
DEFINE_GUID(CLSID_WICPngDecoder2,  0xe018945b, 0xaa86, 0x4008, 0x9b, 0xd4, 0x67, 0x77, 0xa1, 0xe4, 0x0c, 0x11);

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8) || defined(_WIN7_PLATFORM_UPDATE)
#define CLSID_WICPngDecoder CLSID_WICPngDecoder2
#endif

DEFINE_GUID(CLSID_WICBmpDecoder,  0x6b462062, 0x7cbf, 0x400d, 0x9f, 0xdb, 0x81, 0x3d, 0xd1, 0x0f, 0x27, 0x78);
DEFINE_GUID(CLSID_WICIcoDecoder,  0xc61bfcdf, 0x2e0f, 0x4aad, 0xa8, 0xd7, 0xe0, 0x6b, 0xaf, 0xeb, 0xcd, 0xfe);
DEFINE_GUID(CLSID_WICJpegDecoder, 0x9456a480, 0xe88b, 0x43ea, 0x9e, 0x73, 0x0b, 0x2d, 0x9b, 0x71, 0xb1, 0xca);
DEFINE_GUID(CLSID_WICGifDecoder,  0x381dda3c, 0x9ce9, 0x4834, 0xa2, 0x3e, 0x1f, 0x98, 0xf8, 0xfc, 0x52, 0xbe);
DEFINE_GUID(CLSID_WICTiffDecoder, 0xb54e85d9, 0xfe23, 0x499f, 0x8b, 0x88, 0x6a, 0xce, 0xa7, 0x13, 0x75, 0x2b);
DEFINE_GUID(CLSID_WICWmpDecoder,  0xa26cec36, 0x234c, 0x4950, 0xae, 0x16, 0xe3, 0x4a, 0xac, 0xe7, 0x1d, 0x0d);
DEFINE_GUID(CLSID_WICDdsDecoder,  0x9053699f, 0xa341, 0x429d, 0x9e, 0x90, 0xee, 0x43, 0x7c, 0xf8, 0x0c, 0x73);

DEFINE_GUID(CLSID_WICBmpEncoder,  0x69be8bb4, 0xd66d, 0x47c8, 0x86, 0x5a, 0xed, 0x15, 0x89, 0x43, 0x37, 0x82);
DEFINE_GUID(CLSID_WICPngEncoder,  0x27949969, 0x876a, 0x41d7, 0x94, 0x47, 0x56, 0x8f, 0x6a, 0x35, 0xa4, 0xdc);
DEFINE_GUID(CLSID_WICJpegEncoder, 0x1a34f5c1, 0x4a5a, 0x46dc, 0xb6, 0x44, 0x1f, 0x45, 0x67, 0xe7, 0xa6, 0x76);
DEFINE_GUID(CLSID_WICGifEncoder,  0x114f5598, 0x0b22, 0x40a0, 0x86, 0xa1, 0xc8, 0x3e, 0xa4, 0x95, 0xad, 0xbd);
DEFINE_GUID(CLSID_WICTiffEncoder, 0x0131be10, 0x2001, 0x4c5f, 0xa9, 0xb0, 0xcc, 0x88, 0xfa, 0xb6, 0x4c, 0xe8);
DEFINE_GUID(CLSID_WICWmpEncoder,  0xac4ce3cb, 0xe1c1, 0x44cd, 0x82, 0x15, 0x5a, 0x16, 0x65, 0x50, 0x9e, 0xc2);
DEFINE_GUID(CLSID_WICDdsEncoder,  0xa61dde94, 0x66ce, 0x4ac1, 0x88, 0x1b, 0x71, 0x68, 0x05, 0x88, 0x89, 0x5e);
DEFINE_GUID(CLSID_WICAdngDecoder, 0x981d9411, 0x909e, 0x42a7, 0x8f, 0x5d, 0xa7, 0x47, 0xff, 0x05, 0x2e, 0xdb);

DEFINE_GUID(CLSID_WICJpegQualcommPhoneEncoder, 0x68ed5c62, 0xf534, 0x4979, 0xb2, 0xb3, 0x68, 0x6a, 0x12, 0xb2, 0xb3, 0x4c);

DEFINE_GUID(CLSID_WICHeifDecoder,  0xe9A4A80a, 0x44fe, 0x4DE4, 0x89, 0x71, 0x71, 0x50, 0XB1, 0X0a, 0X51, 0X99);
DEFINE_GUID(CLSID_WICHeifEncoder,  0x0dbecec1, 0x9eb3, 0x4860, 0x9c, 0x6f, 0xdd, 0xbe, 0x86, 0x63, 0x45, 0x75);

DEFINE_GUID(CLSID_WICWebpDecoder,  0x7693E886, 0x51C9, 0x4070, 0x84, 0x19, 0x9F, 0x70, 0X73, 0X8E, 0XC8, 0XFA);
DEFINE_GUID(CLSID_WICRAWDecoder,   0x41945702, 0x8302, 0x44A6, 0x94, 0x45, 0xAC, 0x98, 0xE8, 0xAF, 0xA0, 0x86);

DEFINE_GUID(GUID_ContainerFormatBmp,  0x0af1d87e, 0xfcfe, 0x4188, 0xbd, 0xeb, 0xa7, 0x90, 0x64, 0x71, 0xcb, 0xe3);
DEFINE_GUID(GUID_ContainerFormatPng,  0x1b7cfaf4, 0x713f, 0x473c, 0xbb, 0xcd, 0x61, 0x37, 0x42, 0x5f, 0xae, 0xaf);
DEFINE_GUID(GUID_ContainerFormatIco,  0xa3a860c4, 0x338f, 0x4c17, 0x91, 0x9a, 0xfb, 0xa4, 0xb5, 0x62, 0x8f, 0x21);
DEFINE_GUID(GUID_ContainerFormatJpeg, 0x19e4a5aa, 0x5662, 0x4fc5, 0xa0, 0xc0, 0x17, 0x58, 0x02, 0x8e, 0x10, 0x57);
DEFINE_GUID(GUID_ContainerFormatTiff, 0x163bcc30, 0xe2e9, 0x4f0b, 0x96, 0x1d, 0xa3, 0xe9, 0xfd, 0xb7, 0x88, 0xa3);
DEFINE_GUID(GUID_ContainerFormatGif,  0x1f8a5601, 0x7d4d, 0x4cbd, 0x9c, 0x82, 0x1b, 0xc8, 0xd4, 0xee, 0xb9, 0xa5);
DEFINE_GUID(GUID_ContainerFormatWmp,  0x57a37caa, 0x367a, 0x4540, 0x91, 0x6b, 0xf1, 0x83, 0xc5, 0x09, 0x3a, 0x4b);
DEFINE_GUID(GUID_ContainerFormatDds,  0x9967cb95, 0x2e85, 0x4ac8, 0x8c, 0xa2, 0x83, 0xd7, 0xcc, 0xd4, 0x25, 0xc9);
DEFINE_GUID(GUID_ContainerFormatAdng, 0xf3ff6d0d, 0x38c0, 0x41c4, 0xb1, 0xfe, 0x1f, 0x38, 0x24, 0xf1, 0x7b, 0x84);
DEFINE_GUID(GUID_ContainerFormatHeif, 0xe1e62521, 0x6787, 0x405b, 0xa3, 0x39, 0x50, 0x07, 0x15, 0xb5, 0x76, 0x3f);
DEFINE_GUID(GUID_ContainerFormatWebp, 0xe094b0e2, 0x67f2, 0x45b3, 0xb0, 0xea, 0x11, 0x53, 0x37, 0xca, 0x7c, 0xf3);
DEFINE_GUID(GUID_ContainerFormatRaw,  0xfe99ce60, 0xf19c, 0x433c, 0xa3, 0xae, 0x00, 0xac, 0xef, 0xa9, 0xca, 0x21);

DEFINE_GUID(CLSID_WICImagingCategories, 0xfae3d380, 0xfea4, 0x4623, 0x8c, 0x75, 0xc6, 0xb6, 0x11, 0x10, 0xb6, 0x81);
DEFINE_GUID(CATID_WICBitmapDecoders,    0x7ed96837, 0x96f0, 0x4812, 0xb2, 0x11, 0xf1, 0x3c, 0x24, 0x11, 0x7e, 0xd3);
DEFINE_GUID(CATID_WICBitmapEncoders,    0xac757296, 0x3522, 0x4e11, 0x98, 0x62, 0xc1, 0x7b, 0xe5, 0xa1, 0x76, 0x7e);
DEFINE_GUID(CATID_WICPixelFormats,      0x2b46e70f, 0xcda7, 0x473e, 0x89, 0xf6, 0xdc, 0x96, 0x30, 0xa2, 0x39, 0x0b);
DEFINE_GUID(CATID_WICFormatConverters,  0x7835eae8, 0xbf14, 0x49d1, 0x93, 0xce, 0x53, 0x3a, 0x40, 0x7b, 0x22, 0x48);
DEFINE_GUID(CATID_WICMetadataReader,    0x05af94d8, 0x7174, 0x4cd2, 0xbe, 0x4a, 0x41, 0x24, 0xb8, 0x0e, 0xe4, 0xb8);
DEFINE_GUID(CATID_WICMetadataWriter,    0xabe3b9a4, 0x257d, 0x4b97, 0xbd, 0x1a, 0x29, 0x4a, 0xf4, 0x96, 0x22, 0x2e);

DEFINE_GUID(CLSID_WICDefaultFormatConverter, 0x1a3f11dc, 0xb514, 0x4b17, 0x8c, 0x5f, 0x21, 0x54, 0x51, 0x38, 0x52, 0xf1);
DEFINE_GUID(CLSID_WICFormatConverterHighColor, 0xac75d454, 0x9f37, 0x48f8, 0xb9, 0x72, 0x4e, 0x19, 0xbc, 0x85, 0x60, 0x11);
DEFINE_GUID(CLSID_WICFormatConverterNChannel, 0xc17cabb2, 0xd4a3, 0x47d7, 0xa5, 0x57, 0x33, 0x9b, 0x2e, 0xfb, 0xd4, 0xf1);
DEFINE_GUID(CLSID_WICFormatConverterWMPhoto, 0x9cb5172b, 0xd600, 0x46ba, 0xab, 0x77, 0x77, 0xbb, 0x7e, 0x3a, 0x00, 0xd9);
DEFINE_GUID(CLSID_WICPlanarFormatConverter, 0x184132b8, 0x32f8, 0x4784, 0x91, 0x31, 0xdd, 0x72, 0x24, 0xb2, 0x34, 0x38);


#ifndef __IWICImagingFactory_FWD_DEFINED__
#define __IWICImagingFactory_FWD_DEFINED__
typedef interface IWICImagingFactory IWICImagingFactory;
#endif /* __IWICImagingFactory_FWD_DEFINED__ */

#ifndef __IWICImagingFactory2_FWD_DEFINED__
#define __IWICImagingFactory2_FWD_DEFINED__
typedef interface IWICImagingFactory2 IWICImagingFactory2;
#endif /* __IWICImagingFactory2_FWD_DEFINED__ */

#ifndef __IWICPalette_FWD_DEFINED__
#define __IWICPalette_FWD_DEFINED__
typedef interface IWICPalette IWICPalette;
#endif /* __IWICPalette_FWD_DEFINED__ */

#ifndef __IWICBitmap_FWD_DEFINED__
#define __IWICBitmap_FWD_DEFINED__
typedef interface IWICBitmap IWICBitmap;
#endif /* __IWICBitmap_FWD_DEFINED__ */

#ifndef __IWICBitmapLock_FWD_DEFINED__
#define __IWICBitmapLock_FWD_DEFINED__
typedef interface IWICBitmapLock IWICBitmapLock;
#endif /* __IWICBitmapLock_FWD_DEFINED__ */

#ifndef __IWICBitmapSource_FWD_DEFINED__
#define __IWICBitmapSource_FWD_DEFINED__
typedef interface IWICBitmapSource IWICBitmapSource;
#endif /* __IWICBitmapSource_FWD_DEFINED__ */

#ifndef __IWICFastMetadataEncoder_FWD_DEFINED__
#define __IWICFastMetadataEncoder_FWD_DEFINED__
typedef interface IWICFastMetadataEncoder IWICFastMetadataEncoder;
#endif /* __IWICFastMetadataEncoder_FWD_DEFINED__ */

#ifndef __IWICBitmapCodecInfo_FWD_DEFINED__
#define __IWICBitmapCodecInfo_FWD_DEFINED__
typedef interface IWICBitmapCodecInfo IWICBitmapCodecInfo;
#endif /* __IWICBitmapCodecInfo_FWD_DEFINED__ */

#ifndef __IWICBitmapDecoderInfo_FWD_DEFINED__
#define __IWICBitmapDecoderInfo_FWD_DEFINED__
typedef interface IWICBitmapDecoderInfo IWICBitmapDecoderInfo;
#endif /* __IWICBitmapDecoderInfo_FWD_DEFINED__ */

#ifndef __IWICBitmapEncoderInfo_FWD_DEFINED__
#define __IWICBitmapEncoderInfo_FWD_DEFINED__
typedef interface IWICBitmapEncoderInfo IWICBitmapEncoderInfo;
#endif /* __IWICBitmapEncoderInfo_FWD_DEFINED__ */

#ifndef __IWICBitmapDecoder_FWD_DEFINED__
#define __IWICBitmapDecoder_FWD_DEFINED__
typedef interface IWICBitmapDecoder IWICBitmapDecoder;
#endif /* __IWICBitmapDecoder_FWD_DEFINED__ */

#ifndef __IWICBitmapEncoder_FWD_DEFINED__
#define __IWICBitmapEncoder_FWD_DEFINED__
typedef interface IWICBitmapEncoder IWICBitmapEncoder;
#endif /* __IWICBitmapEncoder_FWD_DEFINED__ */
#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8) || defined(_WIN7_PLATFORM_UPDATE)

#ifndef __IWICImageEncoder_FWD_DEFINED__
#define __IWICImageEncoder_FWD_DEFINED__
typedef interface IWICImageEncoder IWICImageEncoder;
#endif /* __IWICImageEncoder_FWD_DEFINED__ */
#endif

#ifndef __IWICBitmapFrameDecode_FWD_DEFINED__
#define __IWICBitmapFrameDecode_FWD_DEFINED__
typedef interface IWICBitmapFrameDecode IWICBitmapFrameDecode;
#endif /* __IWICBitmapFrameDecode_FWD_DEFINED__ */

#ifndef __IWICBitmapFrameEncode_FWD_DEFINED__
#define __IWICBitmapFrameEncode_FWD_DEFINED__
typedef interface IWICBitmapFrameEncode IWICBitmapFrameEncode;
#endif /* __IWICBitmapFrameEncode_FWD_DEFINED__ */

#ifndef __IWICPlanarBitmapFrameEncode_FWD_DEFINED__
#define __IWICPlanarBitmapFrameEncode_FWD_DEFINED__
typedef interface IWICPlanarBitmapFrameEncode IWICPlanarBitmapFrameEncode;
#endif /* __IWICPlanarBitmapFrameEncode_FWD_DEFINED__ */

#ifndef __IWICBitmapSourceTransform_FWD_DEFINED__
#define __IWICBitmapSourceTransform_FWD_DEFINED__
typedef interface IWICBitmapSourceTransform IWICBitmapSourceTransform;
#endif /* __IWICBitmapSourceTransform_FWD_DEFINED__ */

#ifndef __IWICPlanarBitmapSourceTransform_FWD_DEFINED__
#define __IWICPlanarBitmapSourceTransform_FWD_DEFINED__
typedef interface IWICPlanarBitmapSourceTransform IWICPlanarBitmapSourceTransform;
#endif /* __IWICPlanarBitmapSourceTransform_FWD_DEFINED__ */

#ifndef __IWICBitmapScaler_FWD_DEFINED__
#define __IWICBitmapScaler_FWD_DEFINED__
typedef interface IWICBitmapScaler IWICBitmapScaler;
#endif /* __IWICBitmapScaler_FWD_DEFINED__ */

#ifndef __IWICBitmapClipper_FWD_DEFINED__
#define __IWICBitmapClipper_FWD_DEFINED__
typedef interface IWICBitmapClipper IWICBitmapClipper;
#endif /* __IWICBitmapClipper_FWD_DEFINED__ */

#ifndef __IWICBitmapFlipRotator_FWD_DEFINED__
#define __IWICBitmapFlipRotator_FWD_DEFINED__
typedef interface IWICBitmapFlipRotator IWICBitmapFlipRotator;
#endif /* __IWICBitmapFlipRotator_FWD_DEFINED__ */

#ifndef __IWICFormatConverter_FWD_DEFINED__
#define __IWICFormatConverter_FWD_DEFINED__
typedef interface IWICFormatConverter IWICFormatConverter;
#endif /* __IWICFormatConverter_FWD_DEFINED__ */

#ifndef __IWICPlanarFormatConverter_FWD_DEFINED__
#define __IWICPlanarFormatConverter_FWD_DEFINED__
typedef interface IWICPlanarFormatConverter IWICPlanarFormatConverter;
#endif /* __IWICPlanarFormatConverter_FWD_DEFINED__ */

#ifndef __IWICComponentInfo_FWD_DEFINED__
#define __IWICComponentInfo_FWD_DEFINED__
typedef interface IWICComponentInfo IWICComponentInfo;
#endif /* __IWICComponentInfo_FWD_DEFINED__ */

#ifndef __IWICStream_FWD_DEFINED__
#define __IWICStream_FWD_DEFINED__
typedef interface IWICStream IWICStream;
#endif /* __IWICStream_FWD_DEFINED__ */

#ifndef __IWICEnumMetadataItem_FWD_DEFINED__
#define __IWICEnumMetadataItem_FWD_DEFINED__
typedef interface IWICEnumMetadataItem IWICEnumMetadataItem;
#endif /* __IWICEnumMetadataItem_FWD_DEFINED__ */

#ifndef __IWICMetadataQueryReader_FWD_DEFINED__
#define __IWICMetadataQueryReader_FWD_DEFINED__
typedef interface IWICMetadataQueryReader IWICMetadataQueryReader;
#endif /* __IWICMetadataQueryReader_FWD_DEFINED__ */

#ifndef __IWICMetadataQueryWriter_FWD_DEFINED__
#define __IWICMetadataQueryWriter_FWD_DEFINED__
typedef interface IWICMetadataQueryWriter IWICMetadataQueryWriter;
#endif /* __IWICMetadataQueryWriter_FWD_DEFINED__ */

typedef interface ID2D1Device ID2D1Device;
typedef interface ID2D1Image ID2D1Image;

typedef UINT32 WICColor;

typedef struct WICRect {
    INT X;
    INT Y;
    INT Width;
    INT Height;
} WICRect;

typedef BYTE* WICInProcPointer;

typedef enum WICColorContextType {
    WICColorContextUninitialized = 0x0,
    WICColorContextProfile = 0x1,
    WICColorContextExifColorSpace = 0x2
} WICColorContextType;

#define WIC_JPEG_MAX_COMPONENT_COUNT  (4)
#define WIC_JPEG_MAX_TABLE_INDEX  (3)
#define WIC_JPEG_SAMPLE_FACTORS_ONE  (0x11)
#define WIC_JPEG_SAMPLE_FACTORS_THREE_420  (0x111122)
#define WIC_JPEG_SAMPLE_FACTORS_THREE_422  (0x111121)
#define WIC_JPEG_SAMPLE_FACTORS_THREE_440  (0x111112)
#define WIC_JPEG_SAMPLE_FACTORS_THREE_444  (0x111111)
#define WIC_JPEG_QUANTIZATION_BASELINE_ONE  (0x0)
#define WIC_JPEG_QUANTIZATION_BASELINE_THREE  (0x10100)
#define WIC_JPEG_HUFFMAN_BASELINE_ONE  (0x0)
#define WIC_JPEG_HUFFMAN_BASELINE_THREE  (0x111100)

typedef REFGUID REFWICPixelFormatGUID;
typedef GUID WICPixelFormatGUID;

#define GUID_WICPixelFormatUndefined GUID_WICPixelFormatDontCare
DEFINE_GUID(GUID_WICPixelFormatDontCare, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x00);

DEFINE_GUID(GUID_WICPixelFormat1bppIndexed, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x01);
DEFINE_GUID(GUID_WICPixelFormat2bppIndexed, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x02);
DEFINE_GUID(GUID_WICPixelFormat4bppIndexed, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x03);
DEFINE_GUID(GUID_WICPixelFormat8bppIndexed, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x04);

DEFINE_GUID(GUID_WICPixelFormatBlackWhite, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x05);
DEFINE_GUID(GUID_WICPixelFormat2bppGray,   0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x06);
DEFINE_GUID(GUID_WICPixelFormat4bppGray,   0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x07);
DEFINE_GUID(GUID_WICPixelFormat8bppGray,   0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x08);

DEFINE_GUID(GUID_WICPixelFormat8bppAlpha, 0xe6cd0116, 0xeeba, 0x4161, 0xaa, 0x85, 0x27, 0xdd, 0x9f, 0xb3, 0xa8, 0x95);

DEFINE_GUID(GUID_WICPixelFormat16bppBGR555, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x09);
DEFINE_GUID(GUID_WICPixelFormat16bppBGR565, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x0a);
DEFINE_GUID(GUID_WICPixelFormat16bppBGRA5551, 0x05ec7c2b, 0xf1e6, 0x4961, 0xad, 0x46, 0xe1, 0xcc, 0x81, 0x0a, 0x87, 0xd2);
DEFINE_GUID(GUID_WICPixelFormat16bppGray,   0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x0b);

DEFINE_GUID(GUID_WICPixelFormat24bppBGR, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x0c);
DEFINE_GUID(GUID_WICPixelFormat24bppRGB, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x0d);

DEFINE_GUID(GUID_WICPixelFormat32bppBGR,   0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x0e);
DEFINE_GUID(GUID_WICPixelFormat32bppBGRA,  0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x0f);
DEFINE_GUID(GUID_WICPixelFormat32bppPBGRA, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x10);
DEFINE_GUID(GUID_WICPixelFormat32bppGrayFloat,  0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x11);
#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8) || defined(_WIN7_PLATFORM_UPDATE)
DEFINE_GUID(GUID_WICPixelFormat32bppRGB,  0xd98c6b95, 0x3efe, 0x47d6, 0xbb, 0x25, 0xeb, 0x17, 0x48, 0xab, 0x0c, 0xf1);
#endif
DEFINE_GUID(GUID_WICPixelFormat32bppRGBA, 0xf5c7ad2d, 0x6a8d, 0x43dd, 0xa7, 0xa8, 0xa2, 0x99, 0x35, 0x26, 0x1a, 0xe9);
DEFINE_GUID(GUID_WICPixelFormat32bppPRGBA, 0x3cc4a650, 0xa527, 0x4d37, 0xa9, 0x16, 0x31, 0x42, 0xc7, 0xeb, 0xed, 0xba);

DEFINE_GUID(GUID_WICPixelFormat48bppRGB, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x15);
DEFINE_GUID(GUID_WICPixelFormat48bppBGR, 0xe605a384, 0xb468, 0x46ce, 0xbb, 0x2e, 0x36, 0xf1, 0x80, 0xe6, 0x43, 0x13);

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8) || defined(_WIN7_PLATFORM_UPDATE)
DEFINE_GUID(GUID_WICPixelFormat64bppRGB,   0xa1182111, 0x186d, 0x4d42, 0xbc, 0x6a, 0x9c, 0x83, 0x03, 0xa8, 0xdf, 0xf9);
#endif
DEFINE_GUID(GUID_WICPixelFormat64bppRGBA,  0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x16);
DEFINE_GUID(GUID_WICPixelFormat64bppBGRA,  0x1562ff7c, 0xd352, 0x46f9, 0x97, 0x9e, 0x42, 0x97, 0x6b, 0x79, 0x22, 0x46);
DEFINE_GUID(GUID_WICPixelFormat64bppPRGBA, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x17);
DEFINE_GUID(GUID_WICPixelFormat64bppPBGRA, 0x8c518e8e, 0xa4ec, 0x468b, 0xae, 0x70, 0xc9, 0xa3, 0x5a, 0x9c, 0x55, 0x30);

DEFINE_GUID(GUID_WICPixelFormat16bppGrayFixedPoint, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x13);

DEFINE_GUID(GUID_WICPixelFormat32bppBGR101010, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x14);

DEFINE_GUID(GUID_WICPixelFormat48bppRGBFixedPoint, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x12);
DEFINE_GUID(GUID_WICPixelFormat48bppBGRFixedPoint, 0x49ca140e, 0xcab6, 0x493b, 0x9d, 0xdf, 0x60, 0x18, 0x7c, 0x37, 0x53, 0x2a);

DEFINE_GUID(GUID_WICPixelFormat96bppRGBFixedPoint, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x18);
#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8) || defined(_WIN7_PLATFORM_UPDATE)
DEFINE_GUID(GUID_WICPixelFormat96bppRGBFloat, 0xe3fed78f, 0xe8db, 0x4acf, 0x84, 0xc1, 0xe9, 0x7f, 0x61, 0x36, 0xb3, 0x27);
#endif

DEFINE_GUID(GUID_WICPixelFormat128bppRGBAFloat,  0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x19);
DEFINE_GUID(GUID_WICPixelFormat128bppPRGBAFloat, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x1a);
DEFINE_GUID(GUID_WICPixelFormat128bppRGBFloat,   0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x1b);

DEFINE_GUID(GUID_WICPixelFormat32bppCMYK, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x1c);

DEFINE_GUID(GUID_WICPixelFormat64bppRGBAFixedPoint, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x1d);
DEFINE_GUID(GUID_WICPixelFormat64bppBGRAFixedPoint, 0x356de33c, 0x54d2, 0x4a23, 0xbb, 0x4, 0x9b, 0x7b, 0xf9, 0xb1, 0xd4, 0x2d);
DEFINE_GUID(GUID_WICPixelFormat64bppRGBFixedPoint, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x40);
DEFINE_GUID(GUID_WICPixelFormat128bppRGBAFixedPoint, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x1e);
DEFINE_GUID(GUID_WICPixelFormat128bppRGBFixedPoint, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x41);

DEFINE_GUID(GUID_WICPixelFormat64bppRGBAHalf, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x3a);
#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8) || defined(_WIN7_PLATFORM_UPDATE)
DEFINE_GUID(GUID_WICPixelFormat64bppPRGBAHalf, 0x58ad26c2, 0xc623, 0x4d9d, 0xb3, 0x20, 0x38, 0x7e, 0x49, 0xf8, 0xc4, 0x42);
#endif
DEFINE_GUID(GUID_WICPixelFormat64bppRGBHalf, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x42);
DEFINE_GUID(GUID_WICPixelFormat48bppRGBHalf, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x3b);

DEFINE_GUID(GUID_WICPixelFormat32bppRGBE, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x3d);

DEFINE_GUID(GUID_WICPixelFormat16bppGrayHalf, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x3e);
DEFINE_GUID(GUID_WICPixelFormat32bppGrayFixedPoint, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x3f);

DEFINE_GUID(GUID_WICPixelFormat32bppRGBA1010102, 0x25238D72, 0xFCF9, 0x4522, 0xb5, 0x14, 0x55, 0x78, 0xe5, 0xad, 0x55, 0xe0);
DEFINE_GUID(GUID_WICPixelFormat32bppRGBA1010102XR, 0x00DE6B9A, 0xC101, 0x434b, 0xb5, 0x02, 0xd0, 0x16, 0x5e, 0xe1, 0x12, 0x2c);

DEFINE_GUID(GUID_WICPixelFormat32bppR10G10B10A2, 0x604e1bb5, 0x8a3c, 0x4b65, 0xb1, 0x1c, 0xbc, 0x0b, 0x8d, 0xd7, 0x5b, 0x7f);

DEFINE_GUID(GUID_WICPixelFormat32bppR10G10B10A2HDR10, 0x9c215c5d, 0x1acc, 0x4f0e, 0xa4, 0xbc, 0x70, 0xfb, 0x3a, 0xe8, 0xfd, 0x28);

DEFINE_GUID(GUID_WICPixelFormat64bppCMYK, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x1f);

DEFINE_GUID(GUID_WICPixelFormat24bpp3Channels, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x20);
DEFINE_GUID(GUID_WICPixelFormat32bpp4Channels, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x21);
DEFINE_GUID(GUID_WICPixelFormat40bpp5Channels, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x22);
DEFINE_GUID(GUID_WICPixelFormat48bpp6Channels, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x23);
DEFINE_GUID(GUID_WICPixelFormat56bpp7Channels, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x24);
DEFINE_GUID(GUID_WICPixelFormat64bpp8Channels, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x25);

DEFINE_GUID(GUID_WICPixelFormat48bpp3Channels, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x26);
DEFINE_GUID(GUID_WICPixelFormat64bpp4Channels, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x27);
DEFINE_GUID(GUID_WICPixelFormat80bpp5Channels, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x28);
DEFINE_GUID(GUID_WICPixelFormat96bpp6Channels, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x29);
DEFINE_GUID(GUID_WICPixelFormat112bpp7Channels, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x2a);
DEFINE_GUID(GUID_WICPixelFormat128bpp8Channels, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x2b);

DEFINE_GUID(GUID_WICPixelFormat40bppCMYKAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x2c);
DEFINE_GUID(GUID_WICPixelFormat80bppCMYKAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x2d);

DEFINE_GUID(GUID_WICPixelFormat32bpp3ChannelsAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x2e);
DEFINE_GUID(GUID_WICPixelFormat40bpp4ChannelsAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x2f);
DEFINE_GUID(GUID_WICPixelFormat48bpp5ChannelsAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x30);
DEFINE_GUID(GUID_WICPixelFormat56bpp6ChannelsAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x31);
DEFINE_GUID(GUID_WICPixelFormat64bpp7ChannelsAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x32);
DEFINE_GUID(GUID_WICPixelFormat72bpp8ChannelsAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x33);

DEFINE_GUID(GUID_WICPixelFormat64bpp3ChannelsAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x34);
DEFINE_GUID(GUID_WICPixelFormat80bpp4ChannelsAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x35);
DEFINE_GUID(GUID_WICPixelFormat96bpp5ChannelsAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x36);
DEFINE_GUID(GUID_WICPixelFormat112bpp6ChannelsAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x37);
DEFINE_GUID(GUID_WICPixelFormat128bpp7ChannelsAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x38);
DEFINE_GUID(GUID_WICPixelFormat144bpp8ChannelsAlpha, 0x6fddc324, 0x4e03, 0x4bfe, 0xb1, 0x85, 0x3d, 0x77, 0x76, 0x8d, 0xc9, 0x39);

DEFINE_GUID(GUID_WICPixelFormat8bppY,            0x91B4DB54, 0x2DF9, 0x42F0, 0xB4, 0x49, 0x29, 0x09, 0xBB, 0x3D, 0xF8, 0x8E);
DEFINE_GUID(GUID_WICPixelFormat8bppCb,           0x1339F224, 0x6BFE, 0x4C3E, 0x93, 0x02, 0xE4, 0xF3, 0xA6, 0xD0, 0xCA, 0x2A);
DEFINE_GUID(GUID_WICPixelFormat8bppCr,           0xB8145053, 0x2116, 0x49F0, 0x88, 0x35, 0xED, 0x84, 0x4B, 0x20, 0x5C, 0x51);
DEFINE_GUID(GUID_WICPixelFormat16bppCbCr,        0xFF95BA6E, 0x11E0, 0x4263, 0xBB, 0x45, 0x01, 0x72, 0x1F, 0x34, 0x60, 0xA4);

DEFINE_GUID(GUID_WICPixelFormat16bppYQuantizedDctCoefficients,           0xA355F433, 0x48E8, 0x4A42, 0x84, 0xD8, 0xE2, 0xAA, 0x26, 0xCA, 0x80, 0xA4);
DEFINE_GUID(GUID_WICPixelFormat16bppCbQuantizedDctCoefficients,          0xD2C4FF61, 0x56A5, 0x49C2, 0x8B, 0x5C, 0x4C, 0x19, 0x25, 0x96, 0x48, 0x37);
DEFINE_GUID(GUID_WICPixelFormat16bppCrQuantizedDctCoefficients,          0x2FE354F0, 0x1680, 0x42D8, 0x92, 0x31, 0xE7, 0x3C, 0x05, 0x65, 0xBF, 0xC1);

typedef enum WICBitmapCreateCacheOption {
    WICBitmapNoCache = 0x0,
    WICBitmapCacheOnDemand = 0x1,
    WICBitmapCacheOnLoad = 0x2,
    WICBITMAPCREATECACHEOPTION_FORCE_DWORD = 0x7fffffff
} WICBitmapCreateCacheOption;

typedef enum WICDecodeOptions {
    WICDecodeMetadataCacheOnDemand = 0x0,
    WICDecodeMetadataCacheOnLoad = 0x1,
    WICMETADATACACHEOPTION_FORCE_DWORD = 0x7fffffff
} WICDecodeOptions;

typedef enum WICBitmapEncoderCacheOption {
    WICBitmapEncoderCacheInMemory = 0x0,
    WICBitmapEncoderCacheTempFile = 0x1,
    WICBitmapEncoderNoCache = 0x2,
    WICBITMAPENCODERCACHEOPTION_FORCE_DWORD = 0x7fffffff
} WICBitmapEncoderCacheOption;

typedef enum WICComponentType {
    WICDecoder = 0x1,
    WICEncoder = 0x2,
    WICPixelFormatConverter = 0x4,
    WICMetadataReader = 0x8,
    WICMetadataWriter = 0x10,
    WICPixelFormat = 0x20,
    WICAllComponents = 0x3f,
    WICCOMPONENTTYPE_FORCE_DWORD = 0x7fffffff
} WICComponentType;

typedef enum WICComponentEnumerateOptions {
    WICComponentEnumerateDefault = 0x0,
    WICComponentEnumerateRefresh = 0x1,
    WICComponentEnumerateDisabled = 0x80000000,
    WICComponentEnumerateUnsigned = 0x40000000,
    WICComponentEnumerateBuiltInOnly = 0x20000000,
    WICCOMPONENTENUMERATEOPTIONS_FORCE_DWORD = 0x7fffffff
} WICComponentEnumerateOptions;

typedef struct WICBitmapPattern {
    ULARGE_INTEGER Position;
    ULONG Length;
    BYTE *Pattern;
    BYTE *Mask;
    BOOL EndOfStream;
} WICBitmapPattern;

typedef enum WICBitmapInterpolationMode {
    WICBitmapInterpolationModeNearestNeighbor = 0x0,
    WICBitmapInterpolationModeLinear = 0x1,
    WICBitmapInterpolationModeCubic = 0x2,
    WICBitmapInterpolationModeFant = 0x3,
    WICBitmapInterpolationModeHighQualityCubic = 0x4,
    WICBITMAPINTERPOLATIONMODE_FORCE_DWORD = 0x7fffffff
} WICBitmapInterpolationMode;

typedef enum WICBitmapPaletteType {
    WICBitmapPaletteTypeCustom = 0x0,
    WICBitmapPaletteTypeMedianCut = 0x1,
    WICBitmapPaletteTypeFixedBW = 0x2,
    WICBitmapPaletteTypeFixedHalftone8 = 0x3,
    WICBitmapPaletteTypeFixedHalftone27 = 0x4,
    WICBitmapPaletteTypeFixedHalftone64 = 0x5,
    WICBitmapPaletteTypeFixedHalftone125 = 0x6,
    WICBitmapPaletteTypeFixedHalftone216 = 0x7,
    WICBitmapPaletteTypeFixedWebPalette = WICBitmapPaletteTypeFixedHalftone216,
    WICBitmapPaletteTypeFixedHalftone252 = 0x8,
    WICBitmapPaletteTypeFixedHalftone256 = 0x9,
    WICBitmapPaletteTypeFixedGray4 = 0xa,
    WICBitmapPaletteTypeFixedGray16 = 0xb,
    WICBitmapPaletteTypeFixedGray256 = 0xc,
    WICBITMAPPALETTETYPE_FORCE_DWORD = 0x7fffffff
} WICBitmapPaletteType;

typedef enum WICBitmapDitherType {
    WICBitmapDitherTypeNone = 0x0,
    WICBitmapDitherTypeSolid = 0x0,
    WICBitmapDitherTypeOrdered4x4 = 0x1,
    WICBitmapDitherTypeOrdered8x8 = 0x2,
    WICBitmapDitherTypeOrdered16x16 = 0x3,
    WICBitmapDitherTypeSpiral4x4 = 0x4,
    WICBitmapDitherTypeSpiral8x8 = 0x5,
    WICBitmapDitherTypeDualSpiral4x4 = 0x6,
    WICBitmapDitherTypeDualSpiral8x8 = 0x7,
    WICBitmapDitherTypeErrorDiffusion = 0x8,
    WICBITMAPDITHERTYPE_FORCE_DWORD = 0x7fffffff
} WICBitmapDitherType;

typedef enum WICBitmapAlphaChannelOption {
    WICBitmapUseAlpha = 0x0,
    WICBitmapUsePremultipliedAlpha = 0x1,
    WICBitmapIgnoreAlpha = 0x2,
    WICBITMAPALPHACHANNELOPTIONS_FORCE_DWORD = 0x7fffffff
} WICBitmapAlphaChannelOption;

typedef enum WICBitmapTransformOptions {
    WICBitmapTransformRotate0 = 0x0,
    WICBitmapTransformRotate90 = 0x1,
    WICBitmapTransformRotate180 = 0x2,
    WICBitmapTransformRotate270 = 0x3,
    WICBitmapTransformFlipHorizontal = 0x8,
    WICBitmapTransformFlipVertical = 0x10,
    WICBITMAPTRANSFORMOPTIONS_FORCE_DWORD = 0x7fffffff
} WICBitmapTransformOptions;

typedef enum WICBitmapLockFlags {
    WICBitmapLockRead = 0x1,
    WICBitmapLockWrite = 0x2,
    WICBITMAPLOCKFLAGS_FORCE_DWORD = 0x7fffffff
} WICBitmapLockFlags;

typedef enum WICBitmapDecoderCapabilities {
    WICBitmapDecoderCapabilitySameEncoder = 0x1,
    WICBitmapDecoderCapabilityCanDecodeAllImages = 0x2,
    WICBitmapDecoderCapabilityCanDecodeSomeImages = 0x4,
    WICBitmapDecoderCapabilityCanEnumerateMetadata = 0x8,
    WICBitmapDecoderCapabilityCanDecodeThumbnail = 0x10,
    WICBITMAPDECODERCAPABILITIES_FORCE_DWORD = 0x7fffffff
} WICBitmapDecoderCapabilities;

typedef enum WICProgressOperation {
    WICProgressOperationCopyPixels = 0x1,
    WICProgressOperationWritePixels = 0x2,
    WICProgressOperationAll = 0xffff,
    WICPROGRESSOPERATION_FORCE_DWORD = 0x7fffffff
} WICProgressOperation;

typedef enum WICProgressNotification {
    WICProgressNotificationBegin = 0x10000,
    WICProgressNotificationEnd = 0x20000,
    WICProgressNotificationFrequent = 0x40000,
    WICProgressNotificationAll = 0xffff0000,
    WICPROGRESSNOTIFICATION_FORCE_DWORD = 0x7fffffff
} WICProgressNotification;

typedef enum WICComponentSigning {
    WICComponentSigned = 0x1,
    WICComponentUnsigned = 0x2,
    WICComponentSafe = 0x4,
    WICComponentDisabled = 0x80000000,
    WICCOMPONENTSIGNING_FORCE_DWORD = 0x7fffffff
} WICComponentSigning;

typedef enum WICGifLogicalScreenDescriptorProperties {
    WICGifLogicalScreenSignature = 0x1,
    WICGifLogicalScreenDescriptorWidth = 0x2,
    WICGifLogicalScreenDescriptorHeight = 0x3,
    WICGifLogicalScreenDescriptorGlobalColorTableFlag = 0x4,
    WICGifLogicalScreenDescriptorColorResolution = 0x5,
    WICGifLogicalScreenDescriptorSortFlag = 0x6,
    WICGifLogicalScreenDescriptorGlobalColorTableSize = 0x7,
    WICGifLogicalScreenDescriptorBackgroundColorIndex = 0x8,
    WICGifLogicalScreenDescriptorPixelAspectRatio = 0x9,
    WICGifLogicalScreenDescriptorProperties_FORCE_DWORD = 0x7fffffff
} WICGifLogicalScreenDescriptorProperties;

typedef enum WICGifImageDescriptorProperties {
    WICGifImageDescriptorLeft = 0x1,
    WICGifImageDescriptorTop = 0x2,
    WICGifImageDescriptorWidth = 0x3,
    WICGifImageDescriptorHeight = 0x4,
    WICGifImageDescriptorLocalColorTableFlag = 0x5,
    WICGifImageDescriptorInterlaceFlag = 0x6,
    WICGifImageDescriptorSortFlag = 0x7,
    WICGifImageDescriptorLocalColorTableSize = 0x8,
    WICGifImageDescriptorProperties_FORCE_DWORD = 0x7fffffff
} WICGifImageDescriptorProperties;

typedef enum WICGifGraphicControlExtensionProperties {
    WICGifGraphicControlExtensionDisposal = 0x1,
    WICGifGraphicControlExtensionUserInputFlag = 0x2,
    WICGifGraphicControlExtensionTransparencyFlag = 0x3,
    WICGifGraphicControlExtensionDelay = 0x4,
    WICGifGraphicControlExtensionTransparentColorIndex = 0x5,
    WICGifGraphicControlExtensionProperties_FORCE_DWORD = 0x7fffffff
} WICGifGraphicControlExtensionProperties;

typedef enum WICGifApplicationExtensionProperties {
    WICGifApplicationExtensionApplication = 0x1,
    WICGifApplicationExtensionData = 0x2,
    WICGifApplicationExtensionProperties_FORCE_DWORD = 0x7fffffff
} WICGifApplicationExtensionProperties;

typedef enum WICGifCommentExtensionProperties {
    WICGifCommentExtensionText = 0x1,
    WICGifCommentExtensionProperties_FORCE_DWORD = 0x7fffffff
} WICGifCommentExtensionProperties;

typedef enum WICJpegCommentProperties {
    WICJpegCommentText = 0x1,
    WICJpegCommentProperties_FORCE_DWORD = 0x7fffffff
} WICJpegCommentProperties;

typedef enum WICJpegLuminanceProperties {
    WICJpegLuminanceTable = 0x1,
    WICJpegLuminanceProperties_FORCE_DWORD = 0x7fffffff
} WICJpegLuminanceProperties;

typedef enum WICJpegChrominanceProperties {
    WICJpegChrominanceTable = 0x1,
    WICJpegChrominanceProperties_FORCE_DWORD = 0x7fffffff
} WICJpegChrominanceProperties;

typedef enum WIC8BIMIptcProperties {
    WIC8BIMIptcPString = 0x0,
    WIC8BIMIptcEmbeddedIPTC = 0x1,
    WIC8BIMIptcProperties_FORCE_DWORD = 0x7fffffff
} WIC8BIMIptcProperties;

typedef enum WIC8BIMResolutionInfoProperties {
    WIC8BIMResolutionInfoPString = 0x1,
    WIC8BIMResolutionInfoHResolution = 0x2,
    WIC8BIMResolutionInfoHResolutionUnit = 0x3,
    WIC8BIMResolutionInfoWidthUnit = 0x4,
    WIC8BIMResolutionInfoVResolution = 0x5,
    WIC8BIMResolutionInfoVResolutionUnit = 0x6,
    WIC8BIMResolutionInfoHeightUnit = 0x7,
    WIC8BIMResolutionInfoProperties_FORCE_DWORD = 0x7fffffff
} WIC8BIMResolutionInfoProperties;

typedef enum WIC8BIMIptcDigestProperties {
    WIC8BIMIptcDigestPString = 0x1,
    WIC8BIMIptcDigestIptcDigest = 0x2,
    WIC8BIMIptcDigestProperties_FORCE_DWORD = 0x7fffffff
} WIC8BIMIptcDigestProperties;

typedef enum WICPngGamaProperties {
    WICPngGamaGamma = 0x1,
    WICPngGamaProperties_FORCE_DWORD = 0x7fffffff
} WICPngGamaProperties;

typedef enum WICPngBkgdProperties {
    WICPngBkgdBackgroundColor = 0x1,
    WICPngBkgdProperties_FORCE_DWORD = 0x7fffffff
} WICPngBkgdProperties;

typedef enum WICPngItxtProperties {
    WICPngItxtKeyword = 0x1,
    WICPngItxtCompressionFlag = 0x2,
    WICPngItxtLanguageTag = 0x3,
    WICPngItxtTranslatedKeyword = 0x4,
    WICPngItxtText = 0x5,
    WICPngItxtProperties_FORCE_DWORD = 0x7fffffff
} WICPngItxtProperties;

typedef enum WICPngChrmProperties {
    WICPngChrmWhitePointX = 0x1,
    WICPngChrmWhitePointY = 0x2,
    WICPngChrmRedX = 0x3,
    WICPngChrmRedY = 0x4,
    WICPngChrmGreenX = 0x5,
    WICPngChrmGreenY = 0x6,
    WICPngChrmBlueX = 0x7,
    WICPngChrmBlueY = 0x8,
    WICPngChrmProperties_FORCE_DWORD = 0x7fffffff
} WICPngChrmProperties;

typedef enum WICPngHistProperties {
    WICPngHistFrequencies = 0x1,
    WICPngHistProperties_FORCE_DWORD = 0x7fffffff
} WICPngHistProperties;

typedef enum WICPngIccpProperties {
    WICPngIccpProfileName = 0x1,
    WICPngIccpProfileData = 0x2,
    WICPngIccpProperties_FORCE_DWORD = 0x7fffffff
} WICPngIccpProperties;

typedef enum WICPngSrgbProperties {
    WICPngSrgbRenderingIntent = 0x1,
    WICPngSrgbProperties_FORCE_DWORD = 0x7fffffff
} WICPngSrgbProperties;

typedef enum WICPngTimeProperties {
    WICPngTimeYear = 0x1,
    WICPngTimeMonth = 0x2,
    WICPngTimeDay = 0x3,
    WICPngTimeHour = 0x4,
    WICPngTimeMinute = 0x5,
    WICPngTimeSecond = 0x6,
    WICPngTimeProperties_FORCE_DWORD = 0x7fffffff
} WICPngTimeProperties;

typedef enum WICHeifProperties {
    WICHeifOrientation = 0x1,
    WICHeifProperties_FORCE_DWORD = 0x7fffffff
} WICHeifProperties;

typedef enum WICHeifHdrProperties {
    WICHeifHdrMaximumLuminanceLevel = 0x1,
    WICHeifHdrMaximumFrameAverageLuminanceLevel = 0x2,
    WICHeifHdrMinimumMasteringDisplayLuminanceLevel = 0x3,
    WICHeifHdrMaximumMasteringDisplayLuminanceLevel = 0x4,
    WICHeifHdrCustomVideoPrimaries = 0x5,
    WICHeifHdrProperties_FORCE_DWORD = 0x7fffffff
} WICHeifHdrProperties;

typedef enum WICWebpAnimProperties {
    WICWebpAnimLoopCount = 0x1,
    WICWebpAnimProperties_FORCE_DWORD = 0x7fffffff
} WICWebpAnimProperties;

typedef enum WICWebpAnmfProperties {
    WICWebpAnmfFrameDuration = 0x1,
    WICWebpAnmfProperties_FORCE_DWORD = 0x7fffffff
} WICWebpAnmfProperties;

typedef enum WICSectionAccessLevel {
    WICSectionAccessLevelRead = 0x1,
    WICSectionAccessLevelReadWrite = 0x3,
    WICSectionAccessLevel_FORCE_DWORD = 0x7fffffff
} WICSectionAccessLevel;

typedef enum WICPixelFormatNumericRepresentation {
    WICPixelFormatNumericRepresentationUnspecified = 0x0,
    WICPixelFormatNumericRepresentationIndexed = 0x1,
    WICPixelFormatNumericRepresentationUnsignedInteger = 0x2,
    WICPixelFormatNumericRepresentationSignedInteger = 0x3,
    WICPixelFormatNumericRepresentationFixed = 0x4,
    WICPixelFormatNumericRepresentationFloat = 0x5,
    WICPixelFormatNumericRepresentation_FORCE_DWORD = 0x7fffffff
} WICPixelFormatNumericRepresentation;

typedef enum WICPlanarOptions {
    WICPlanarOptionsDefault = 0x0,
    WICPlanarOptionsPreserveSubsampling = 0x1,
    WICPLANAROPTIONS_FORCE_DWORD = 0x7fffffff
} WICPlanarOptions;

typedef enum WICJpegIndexingOptions {
    WICJpegIndexingOptionsGenerateOnDemand = 0x0,
    WICJpegIndexingOptionsGenerateOnLoad = 0x1,
    WICJpegIndexingOptions_FORCE_DWORD = 0x7fffffff
} WICJpegIndexingOptions;

typedef enum WICJpegTransferMatrix {
    WICJpegTransferMatrixIdentity = 0x0,
    WICJpegTransferMatrixBT601 = 0x1,
    WICJpegTransferMatrix_FORCE_DWORD = 0x7fffffff
} WICJpegTransferMatrix;

typedef enum WICJpegScanType {
    WICJpegScanTypeInterleaved = 0x0,
    WICJpegScanTypePlanarComponents = 0x1,
    WICJpegScanTypeProgressive = 0x2,
    WICJpegScanType_FORCE_DWORD = 0x7fffffff
} WICJpegScanType;

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8) || defined(_WIN7_PLATFORM_UPDATE)

typedef struct WICImageParameters {
    D2D1_PIXEL_FORMAT PixelFormat;
    FLOAT DpiX;
    FLOAT DpiY;
    FLOAT Top;
    FLOAT Left;
    UINT32 PixelWidth;
    UINT32 PixelHeight;
} WICImageParameters;
#endif

typedef struct WICBitmapPlaneDescription {
    WICPixelFormatGUID Format;
    UINT Width;
    UINT Height;
} WICBitmapPlaneDescription;

typedef struct WICBitmapPlane {
    WICPixelFormatGUID Format;
    BYTE *pbBuffer;
    UINT cbStride;
    UINT cbBufferSize;
} WICBitmapPlane;

typedef struct WICJpegFrameHeader {
    UINT Width;
    UINT Height;
    WICJpegTransferMatrix TransferMatrix;
    WICJpegScanType ScanType;
    UINT cComponents;
    DWORD ComponentIdentifiers;
    DWORD SampleFactors;
    DWORD QuantizationTableIndices;
} WICJpegFrameHeader;

typedef struct WICJpegScanHeader {
    UINT cComponents;
    UINT RestartInterval;
    DWORD ComponentSelectors;
    DWORD HuffmanTableIndices;
    BYTE StartSpectralSelection;
    BYTE EndSpectralSelection;
    BYTE SuccessiveApproximationHigh;
    BYTE SuccessiveApproximationLow;
} WICJpegScanHeader;

/*****************************************************************************
 * IWICPalette interface
 */
#ifndef __IWICPalette_INTERFACE_DEFINED__
#define __IWICPalette_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICPalette;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICPaletteVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICPalette *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICPalette *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICPalette *This);

    /*** IWICPalette methods ***/
    HRESULT (STDMETHODCALLTYPE *InitializePredefined)(
        IWICPalette *This,
        WICBitmapPaletteType ePaletteType,
        BOOL fAddTransparentColor);

    HRESULT (STDMETHODCALLTYPE *InitializeCustom)(
        IWICPalette *This,
        WICColor *pColors,
        UINT cCount);

    HRESULT (STDMETHODCALLTYPE *InitializeFromBitmap)(
        IWICPalette *This,
        IWICBitmapSource *pISurface,
        UINT cCount,
        BOOL fAddTransparentColor);

    HRESULT (STDMETHODCALLTYPE *InitializeFromPalette)(
        IWICPalette *This,
        IWICPalette *pIPalette);

    HRESULT (STDMETHODCALLTYPE *GetType)(
        IWICPalette *This,
        WICBitmapPaletteType *pePaletteType);

    HRESULT (STDMETHODCALLTYPE *GetColorCount)(
        IWICPalette *This,
        UINT *pcCount);

    HRESULT (STDMETHODCALLTYPE *GetColors)(
        IWICPalette *This,
        UINT cCount,
        WICColor *pColors,
        UINT *pcActualColors);

    HRESULT (STDMETHODCALLTYPE *IsBlackWhite)(
        IWICPalette *This,
        BOOL *pfIsBlackWhite);

    HRESULT (STDMETHODCALLTYPE *IsGrayscale)(
        IWICPalette *This,
        BOOL *pfIsGrayscale);

    HRESULT (STDMETHODCALLTYPE *HasAlpha)(
        IWICPalette *This,
        BOOL *pfHasAlpha);

    END_INTERFACE
} IWICPaletteVtbl;

interface IWICPalette {
    CONST_VTBL IWICPaletteVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICPalette_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICPalette_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICPalette_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICPalette methods ***/
#define IWICPalette_InitializePredefined(This,ePaletteType,fAddTransparentColor) \
    ((This)->lpVtbl->InitializePredefined(This,ePaletteType,fAddTransparentColor))
#define IWICPalette_InitializeCustom(This,pColors,cCount) \
    ((This)->lpVtbl->InitializeCustom(This,pColors,cCount))
#define IWICPalette_InitializeFromBitmap(This,pISurface,cCount,fAddTransparentColor) \
    ((This)->lpVtbl->InitializeFromBitmap(This,pISurface,cCount,fAddTransparentColor))
#define IWICPalette_InitializeFromPalette(This,pIPalette) \
    ((This)->lpVtbl->InitializeFromPalette(This,pIPalette))
#define IWICPalette_GetType(This,pePaletteType) \
    ((This)->lpVtbl->GetType(This,pePaletteType))
#define IWICPalette_GetColorCount(This,pcCount) \
    ((This)->lpVtbl->GetColorCount(This,pcCount))
#define IWICPalette_GetColors(This,cCount,pColors,pcActualColors) \
    ((This)->lpVtbl->GetColors(This,cCount,pColors,pcActualColors))
#define IWICPalette_IsBlackWhite(This,pfIsBlackWhite) \
    ((This)->lpVtbl->IsBlackWhite(This,pfIsBlackWhite))
#define IWICPalette_IsGrayscale(This,pfIsGrayscale) \
    ((This)->lpVtbl->IsGrayscale(This,pfIsGrayscale))
#define IWICPalette_HasAlpha(This,pfHasAlpha) \
    ((This)->lpVtbl->HasAlpha(This,pfHasAlpha))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWICPalette_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWICBitmapSource interface
 */
#ifndef __IWICBitmapSource_INTERFACE_DEFINED__
#define __IWICBitmapSource_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICBitmapSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICBitmapSourceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICBitmapSource *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICBitmapSource *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICBitmapSource *This);

    /*** IWICBitmapSource methods ***/
    HRESULT (STDMETHODCALLTYPE *GetSize)(
        IWICBitmapSource *This,
        UINT *puiWidth,
        UINT *puiHeight);

    HRESULT (STDMETHODCALLTYPE *GetPixelFormat)(
        IWICBitmapSource *This,
        WICPixelFormatGUID *pPixelFormat);

    HRESULT (STDMETHODCALLTYPE *GetResolution)(
        IWICBitmapSource *This,
        double *pDpiX,
        double *pDpiY);

    HRESULT (STDMETHODCALLTYPE *CopyPalette)(
        IWICBitmapSource *This,
        IWICPalette *pIPalette);

    HRESULT (STDMETHODCALLTYPE *CopyPixels)(
        IWICBitmapSource *This,
        const WICRect *prc,
        UINT cbStride,
        UINT cbBufferSize,
        BYTE *pbBuffer);

    END_INTERFACE
} IWICBitmapSourceVtbl;

interface IWICBitmapSource {
    CONST_VTBL IWICBitmapSourceVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICBitmapSource_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICBitmapSource_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICBitmapSource_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICBitmapSource methods ***/
#define IWICBitmapSource_GetSize(This,puiWidth,puiHeight) \
    ((This)->lpVtbl->GetSize(This,puiWidth,puiHeight))
#define IWICBitmapSource_GetPixelFormat(This,pPixelFormat) \
    ((This)->lpVtbl->GetPixelFormat(This,pPixelFormat))
#define IWICBitmapSource_GetResolution(This,pDpiX,pDpiY) \
    ((This)->lpVtbl->GetResolution(This,pDpiX,pDpiY))
#define IWICBitmapSource_CopyPalette(This,pIPalette) \
    ((This)->lpVtbl->CopyPalette(This,pIPalette))
#define IWICBitmapSource_CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer) \
    ((This)->lpVtbl->CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWICBitmapSource_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWICFormatConverter interface
 */
#ifndef __IWICFormatConverter_INTERFACE_DEFINED__
#define __IWICFormatConverter_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICFormatConverter;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICFormatConverterVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICFormatConverter *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICFormatConverter *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICFormatConverter *This);

    /*** IWICBitmapSource methods ***/
    HRESULT (STDMETHODCALLTYPE *GetSize)(
        IWICFormatConverter *This,
        UINT *puiWidth,
        UINT *puiHeight);

    HRESULT (STDMETHODCALLTYPE *GetPixelFormat)(
        IWICFormatConverter *This,
        WICPixelFormatGUID *pPixelFormat);

    HRESULT (STDMETHODCALLTYPE *GetResolution)(
        IWICFormatConverter *This,
        double *pDpiX,
        double *pDpiY);

    HRESULT (STDMETHODCALLTYPE *CopyPalette)(
        IWICFormatConverter *This,
        IWICPalette *pIPalette);

    HRESULT (STDMETHODCALLTYPE *CopyPixels)(
        IWICFormatConverter *This,
        const WICRect *prc,
        UINT cbStride,
        UINT cbBufferSize,
        BYTE *pbBuffer);

    /*** IWICFormatConverter methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        IWICFormatConverter *This,
        IWICBitmapSource *pISource,
        REFWICPixelFormatGUID dstFormat,
        WICBitmapDitherType dither,
        IWICPalette *pIPalette,
        double alphaThresholdPercent,
        WICBitmapPaletteType paletteTranslate);

    HRESULT (STDMETHODCALLTYPE *CanConvert)(
        IWICFormatConverter *This,
        REFWICPixelFormatGUID srcPixelFormat,
        REFWICPixelFormatGUID dstPixelFormat,
        BOOL *pfCanConvert);

    END_INTERFACE
} IWICFormatConverterVtbl;

interface IWICFormatConverter {
    CONST_VTBL IWICFormatConverterVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICFormatConverter_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICFormatConverter_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICFormatConverter_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICBitmapSource methods ***/
#define IWICFormatConverter_GetSize(This,puiWidth,puiHeight) \
    ((This)->lpVtbl->GetSize(This,puiWidth,puiHeight))
#define IWICFormatConverter_GetPixelFormat(This,pPixelFormat) \
    ((This)->lpVtbl->GetPixelFormat(This,pPixelFormat))
#define IWICFormatConverter_GetResolution(This,pDpiX,pDpiY) \
    ((This)->lpVtbl->GetResolution(This,pDpiX,pDpiY))
#define IWICFormatConverter_CopyPalette(This,pIPalette) \
    ((This)->lpVtbl->CopyPalette(This,pIPalette))
#define IWICFormatConverter_CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer) \
    ((This)->lpVtbl->CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer))
/*** IWICFormatConverter methods ***/
#define IWICFormatConverter_Initialize(This,pISource,dstFormat,dither,pIPalette,alphaThresholdPercent,paletteTranslate) \
    ((This)->lpVtbl->Initialize(This,pISource,dstFormat,dither,pIPalette,alphaThresholdPercent,paletteTranslate))
#define IWICFormatConverter_CanConvert(This,srcPixelFormat,dstPixelFormat,pfCanConvert) \
    ((This)->lpVtbl->CanConvert(This,srcPixelFormat,dstPixelFormat,pfCanConvert))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWICFormatConverter_INTERFACE_DEFINED__ */
/*****************************************************************************
 * IWICPlanarFormatConverter interface
 */
#ifndef __IWICPlanarFormatConverter_INTERFACE_DEFINED__
#define __IWICPlanarFormatConverter_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICPlanarFormatConverter;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICPlanarFormatConverterVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICPlanarFormatConverter *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICPlanarFormatConverter *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICPlanarFormatConverter *This);

    /*** IWICBitmapSource methods ***/
    HRESULT (STDMETHODCALLTYPE *GetSize)(
        IWICPlanarFormatConverter *This,
        UINT *puiWidth,
        UINT *puiHeight);

    HRESULT (STDMETHODCALLTYPE *GetPixelFormat)(
        IWICPlanarFormatConverter *This,
        WICPixelFormatGUID *pPixelFormat);

    HRESULT (STDMETHODCALLTYPE *GetResolution)(
        IWICPlanarFormatConverter *This,
        double *pDpiX,
        double *pDpiY);

    HRESULT (STDMETHODCALLTYPE *CopyPalette)(
        IWICPlanarFormatConverter *This,
        IWICPalette *pIPalette);

    HRESULT (STDMETHODCALLTYPE *CopyPixels)(
        IWICPlanarFormatConverter *This,
        const WICRect *prc,
        UINT cbStride,
        UINT cbBufferSize,
        BYTE *pbBuffer);

    /*** IWICPlanarFormatConverter methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        IWICPlanarFormatConverter *This,
        IWICBitmapSource **ppPlanes,
        UINT cPlanes,
        REFWICPixelFormatGUID dstFormat,
        WICBitmapDitherType dither,
        IWICPalette *pIPalette,
        double alphaThresholdPercent,
        WICBitmapPaletteType paletteTranslate);

    HRESULT (STDMETHODCALLTYPE *CanConvert)(
        IWICPlanarFormatConverter *This,
        const WICPixelFormatGUID *pSrcPixelFormats,
        UINT cSrcPlanes,
        REFWICPixelFormatGUID dstPixelFormat,
        BOOL *pfCanConvert);

    END_INTERFACE
} IWICPlanarFormatConverterVtbl;

interface IWICPlanarFormatConverter {
    CONST_VTBL IWICPlanarFormatConverterVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICPlanarFormatConverter_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICPlanarFormatConverter_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICPlanarFormatConverter_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICBitmapSource methods ***/
#define IWICPlanarFormatConverter_GetSize(This,puiWidth,puiHeight) \
    ((This)->lpVtbl->GetSize(This,puiWidth,puiHeight))
#define IWICPlanarFormatConverter_GetPixelFormat(This,pPixelFormat) \
    ((This)->lpVtbl->GetPixelFormat(This,pPixelFormat))
#define IWICPlanarFormatConverter_GetResolution(This,pDpiX,pDpiY) \
    ((This)->lpVtbl->GetResolution(This,pDpiX,pDpiY))
#define IWICPlanarFormatConverter_CopyPalette(This,pIPalette) \
    ((This)->lpVtbl->CopyPalette(This,pIPalette))
#define IWICPlanarFormatConverter_CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer) \
    ((This)->lpVtbl->CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer))
/*** IWICPlanarFormatConverter methods ***/
#define IWICPlanarFormatConverter_Initialize(This,ppPlanes,cPlanes,dstFormat,dither,pIPalette,alphaThresholdPercent,paletteTranslate) \
    ((This)->lpVtbl->Initialize(This,ppPlanes,cPlanes,dstFormat,dither,pIPalette,alphaThresholdPercent,paletteTranslate))
#define IWICPlanarFormatConverter_CanConvert(This,pSrcPixelFormats,cSrcPlanes,dstPixelFormat,pfCanConvert) \
    ((This)->lpVtbl->CanConvert(This,pSrcPixelFormats,cSrcPlanes,dstPixelFormat,pfCanConvert))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWICPlanarFormatConverter_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWICBitmapScaler interface
 */
#ifndef __IWICBitmapScaler_INTERFACE_DEFINED__
#define __IWICBitmapScaler_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICBitmapScaler;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICBitmapScalerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICBitmapScaler *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICBitmapScaler *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICBitmapScaler *This);

    /*** IWICBitmapSource methods ***/
    HRESULT (STDMETHODCALLTYPE *GetSize)(
        IWICBitmapScaler *This,
        UINT *puiWidth,
        UINT *puiHeight);

    HRESULT (STDMETHODCALLTYPE *GetPixelFormat)(
        IWICBitmapScaler *This,
        WICPixelFormatGUID *pPixelFormat);

    HRESULT (STDMETHODCALLTYPE *GetResolution)(
        IWICBitmapScaler *This,
        double *pDpiX,
        double *pDpiY);

    HRESULT (STDMETHODCALLTYPE *CopyPalette)(
        IWICBitmapScaler *This,
        IWICPalette *pIPalette);

    HRESULT (STDMETHODCALLTYPE *CopyPixels)(
        IWICBitmapScaler *This,
        const WICRect *prc,
        UINT cbStride,
        UINT cbBufferSize,
        BYTE *pbBuffer);

    /*** IWICBitmapScaler methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        IWICBitmapScaler *This,
        IWICBitmapSource *pISource,
        UINT uiWidth,
        UINT uiHeight,
        WICBitmapInterpolationMode mode);

    END_INTERFACE
} IWICBitmapScalerVtbl;

interface IWICBitmapScaler {
    CONST_VTBL IWICBitmapScalerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICBitmapScaler_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICBitmapScaler_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICBitmapScaler_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICBitmapSource methods ***/
#define IWICBitmapScaler_GetSize(This,puiWidth,puiHeight) \
    ((This)->lpVtbl->GetSize(This,puiWidth,puiHeight))
#define IWICBitmapScaler_GetPixelFormat(This,pPixelFormat) \
    ((This)->lpVtbl->GetPixelFormat(This,pPixelFormat))
#define IWICBitmapScaler_GetResolution(This,pDpiX,pDpiY) \
    ((This)->lpVtbl->GetResolution(This,pDpiX,pDpiY))
#define IWICBitmapScaler_CopyPalette(This,pIPalette) \
    ((This)->lpVtbl->CopyPalette(This,pIPalette))
#define IWICBitmapScaler_CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer) \
    ((This)->lpVtbl->CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer))
/*** IWICBitmapScaler methods ***/
#define IWICBitmapScaler_Initialize(This,pISource,uiWidth,uiHeight,mode) \
    ((This)->lpVtbl->Initialize(This,pISource,uiWidth,uiHeight,mode))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWICBitmapScaler_INTERFACE_DEFINED__ */
/*****************************************************************************
 * IWICBitmapClipper interface
 */
#ifndef __IWICBitmapClipper_INTERFACE_DEFINED__
#define __IWICBitmapClipper_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICBitmapClipper;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICBitmapClipperVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICBitmapClipper *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICBitmapClipper *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICBitmapClipper *This);

    /*** IWICBitmapSource methods ***/
    HRESULT (STDMETHODCALLTYPE *GetSize)(
        IWICBitmapClipper *This,
        UINT *puiWidth,
        UINT *puiHeight);

    HRESULT (STDMETHODCALLTYPE *GetPixelFormat)(
        IWICBitmapClipper *This,
        WICPixelFormatGUID *pPixelFormat);

    HRESULT (STDMETHODCALLTYPE *GetResolution)(
        IWICBitmapClipper *This,
        double *pDpiX,
        double *pDpiY);

    HRESULT (STDMETHODCALLTYPE *CopyPalette)(
        IWICBitmapClipper *This,
        IWICPalette *pIPalette);

    HRESULT (STDMETHODCALLTYPE *CopyPixels)(
        IWICBitmapClipper *This,
        const WICRect *prc,
        UINT cbStride,
        UINT cbBufferSize,
        BYTE *pbBuffer);

    /*** IWICBitmapClipper methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        IWICBitmapClipper *This,
        IWICBitmapSource *pISource,
        const WICRect *prc);

    END_INTERFACE
} IWICBitmapClipperVtbl;

interface IWICBitmapClipper {
    CONST_VTBL IWICBitmapClipperVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICBitmapClipper_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICBitmapClipper_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICBitmapClipper_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICBitmapSource methods ***/
#define IWICBitmapClipper_GetSize(This,puiWidth,puiHeight) \
    ((This)->lpVtbl->GetSize(This,puiWidth,puiHeight))
#define IWICBitmapClipper_GetPixelFormat(This,pPixelFormat) \
    ((This)->lpVtbl->GetPixelFormat(This,pPixelFormat))
#define IWICBitmapClipper_GetResolution(This,pDpiX,pDpiY) \
    ((This)->lpVtbl->GetResolution(This,pDpiX,pDpiY))
#define IWICBitmapClipper_CopyPalette(This,pIPalette) \
    ((This)->lpVtbl->CopyPalette(This,pIPalette))
#define IWICBitmapClipper_CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer) \
    ((This)->lpVtbl->CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer))
/*** IWICBitmapClipper methods ***/
#define IWICBitmapClipper_Initialize(This,pISource,prc) \
    ((This)->lpVtbl->Initialize(This,pISource,prc))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWICBitmapClipper_INTERFACE_DEFINED__ */
/*****************************************************************************
 * IWICBitmapFlipRotator interface
 */
#ifndef __IWICBitmapFlipRotator_INTERFACE_DEFINED__
#define __IWICBitmapFlipRotator_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICBitmapFlipRotator;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICBitmapFlipRotatorVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICBitmapFlipRotator *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICBitmapFlipRotator *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICBitmapFlipRotator *This);

    /*** IWICBitmapSource methods ***/
    HRESULT (STDMETHODCALLTYPE *GetSize)(
        IWICBitmapFlipRotator *This,
        UINT *puiWidth,
        UINT *puiHeight);

    HRESULT (STDMETHODCALLTYPE *GetPixelFormat)(
        IWICBitmapFlipRotator *This,
        WICPixelFormatGUID *pPixelFormat);

    HRESULT (STDMETHODCALLTYPE *GetResolution)(
        IWICBitmapFlipRotator *This,
        double *pDpiX,
        double *pDpiY);

    HRESULT (STDMETHODCALLTYPE *CopyPalette)(
        IWICBitmapFlipRotator *This,
        IWICPalette *pIPalette);

    HRESULT (STDMETHODCALLTYPE *CopyPixels)(
        IWICBitmapFlipRotator *This,
        const WICRect *prc,
        UINT cbStride,
        UINT cbBufferSize,
        BYTE *pbBuffer);

    /*** IWICBitmapFlipRotator methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        IWICBitmapFlipRotator *This,
        IWICBitmapSource *pISource,
        WICBitmapTransformOptions options);

    END_INTERFACE
} IWICBitmapFlipRotatorVtbl;

interface IWICBitmapFlipRotator {
    CONST_VTBL IWICBitmapFlipRotatorVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICBitmapFlipRotator_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICBitmapFlipRotator_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICBitmapFlipRotator_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICBitmapSource methods ***/
#define IWICBitmapFlipRotator_GetSize(This,puiWidth,puiHeight) \
    ((This)->lpVtbl->GetSize(This,puiWidth,puiHeight))
#define IWICBitmapFlipRotator_GetPixelFormat(This,pPixelFormat) \
    ((This)->lpVtbl->GetPixelFormat(This,pPixelFormat))
#define IWICBitmapFlipRotator_GetResolution(This,pDpiX,pDpiY) \
    ((This)->lpVtbl->GetResolution(This,pDpiX,pDpiY))
#define IWICBitmapFlipRotator_CopyPalette(This,pIPalette) \
    ((This)->lpVtbl->CopyPalette(This,pIPalette))
#define IWICBitmapFlipRotator_CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer) \
    ((This)->lpVtbl->CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer))
/*** IWICBitmapFlipRotator methods ***/
#define IWICBitmapFlipRotator_Initialize(This,pISource,options) \
    ((This)->lpVtbl->Initialize(This,pISource,options))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWICBitmapFlipRotator_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWICBitmapLock interface
 */
#ifndef __IWICBitmapLock_INTERFACE_DEFINED__
#define __IWICBitmapLock_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICBitmapLock;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICBitmapLockVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICBitmapLock *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICBitmapLock *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICBitmapLock *This);

    /*** IWICBitmapLock methods ***/
    HRESULT (STDMETHODCALLTYPE *GetSize)(
        IWICBitmapLock *This,
        UINT *puiWidth,
        UINT *puiHeight);

    HRESULT (STDMETHODCALLTYPE *GetStride)(
        IWICBitmapLock *This,
        UINT *pcbStride);

    HRESULT (STDMETHODCALLTYPE *GetDataPointer)(
        IWICBitmapLock *This,
        UINT *pcbBufferSize,
        WICInProcPointer *ppbData);

    HRESULT (STDMETHODCALLTYPE *GetPixelFormat)(
        IWICBitmapLock *This,
        WICPixelFormatGUID *pPixelFormat);

    END_INTERFACE
} IWICBitmapLockVtbl;

interface IWICBitmapLock {
    CONST_VTBL IWICBitmapLockVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICBitmapLock_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICBitmapLock_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICBitmapLock_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICBitmapLock methods ***/
#define IWICBitmapLock_GetSize(This,puiWidth,puiHeight) \
    ((This)->lpVtbl->GetSize(This,puiWidth,puiHeight))
#define IWICBitmapLock_GetStride(This,pcbStride) \
    ((This)->lpVtbl->GetStride(This,pcbStride))
#define IWICBitmapLock_GetDataPointer(This,pcbBufferSize,ppbData) \
    ((This)->lpVtbl->GetDataPointer(This,pcbBufferSize,ppbData))
#define IWICBitmapLock_GetPixelFormat(This,pPixelFormat) \
    ((This)->lpVtbl->GetPixelFormat(This,pPixelFormat))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWICBitmapLock_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWICBitmap interface
 */
#ifndef __IWICBitmap_INTERFACE_DEFINED__
#define __IWICBitmap_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICBitmap;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICBitmapVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICBitmap *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICBitmap *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICBitmap *This);

    /*** IWICBitmapSource methods ***/
    HRESULT (STDMETHODCALLTYPE *GetSize)(
        IWICBitmap *This,
        UINT *puiWidth,
        UINT *puiHeight);

    HRESULT (STDMETHODCALLTYPE *GetPixelFormat)(
        IWICBitmap *This,
        WICPixelFormatGUID *pPixelFormat);

    HRESULT (STDMETHODCALLTYPE *GetResolution)(
        IWICBitmap *This,
        double *pDpiX,
        double *pDpiY);

    HRESULT (STDMETHODCALLTYPE *CopyPalette)(
        IWICBitmap *This,
        IWICPalette *pIPalette);

    HRESULT (STDMETHODCALLTYPE *CopyPixels)(
        IWICBitmap *This,
        const WICRect *prc,
        UINT cbStride,
        UINT cbBufferSize,
        BYTE *pbBuffer);

    /*** IWICBitmap methods ***/
    HRESULT (STDMETHODCALLTYPE *Lock)(
        IWICBitmap *This,
        const WICRect *prcLock,
        DWORD flags,
        IWICBitmapLock **ppILock);

    HRESULT (STDMETHODCALLTYPE *SetPalette)(
        IWICBitmap *This,
        IWICPalette *pIPalette);

    HRESULT (STDMETHODCALLTYPE *SetResolution)(
        IWICBitmap *This,
        double dpiX,
        double dpiY);

    END_INTERFACE
} IWICBitmapVtbl;

interface IWICBitmap {
    CONST_VTBL IWICBitmapVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICBitmap_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICBitmap_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICBitmap_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICBitmapSource methods ***/
#define IWICBitmap_GetSize(This,puiWidth,puiHeight) \
    ((This)->lpVtbl->GetSize(This,puiWidth,puiHeight))
#define IWICBitmap_GetPixelFormat(This,pPixelFormat) \
    ((This)->lpVtbl->GetPixelFormat(This,pPixelFormat))
#define IWICBitmap_GetResolution(This,pDpiX,pDpiY) \
    ((This)->lpVtbl->GetResolution(This,pDpiX,pDpiY))
#define IWICBitmap_CopyPalette(This,pIPalette) \
    ((This)->lpVtbl->CopyPalette(This,pIPalette))
#define IWICBitmap_CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer) \
    ((This)->lpVtbl->CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer))
/*** IWICBitmap methods ***/
#define IWICBitmap_Lock(This,prcLock,flags,ppILock) \
    ((This)->lpVtbl->Lock(This,prcLock,flags,ppILock))
#define IWICBitmap_SetPalette(This,pIPalette) \
    ((This)->lpVtbl->SetPalette(This,pIPalette))
#define IWICBitmap_SetResolution(This,dpiX,dpiY) \
    ((This)->lpVtbl->SetResolution(This,dpiX,dpiY))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWICBitmap_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWICColorContext interface
 */
#ifndef __IWICColorContext_INTERFACE_DEFINED__
#define __IWICColorContext_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICColorContext;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICColorContextVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICColorContext *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICColorContext *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICColorContext *This);

    /*** IWICColorContext methods ***/
    HRESULT (STDMETHODCALLTYPE *InitializeFromFilename)(
        IWICColorContext *This,
        LPCWSTR wzFilename);

    HRESULT (STDMETHODCALLTYPE *InitializeFromMemory)(
        IWICColorContext *This,
        const BYTE *pbBuffer,
        UINT cbBufferSize);

    HRESULT (STDMETHODCALLTYPE *InitializeFromExifColorSpace)(
        IWICColorContext *This,
        UINT value);

    HRESULT (STDMETHODCALLTYPE *GetType)(
        IWICColorContext *This,
        WICColorContextType *pType);

    HRESULT (STDMETHODCALLTYPE *GetProfileBytes)(
        IWICColorContext *This,
        UINT cbBuffer,
        BYTE *pbBuffer,
        UINT *pcbActual);

    HRESULT (STDMETHODCALLTYPE *GetExifColorSpace)(
        IWICColorContext *This,
        UINT *pValue);

    END_INTERFACE
} IWICColorContextVtbl;

interface IWICColorContext {
    CONST_VTBL IWICColorContextVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICColorContext_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICColorContext_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICColorContext_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICColorContext methods ***/
#define IWICColorContext_InitializeFromFilename(This,wzFilename) \
    ((This)->lpVtbl->InitializeFromFilename(This,wzFilename))
#define IWICColorContext_InitializeFromMemory(This,pbBuffer,cbBufferSize) \
    ((This)->lpVtbl->InitializeFromMemory(This,pbBuffer,cbBufferSize))
#define IWICColorContext_InitializeFromExifColorSpace(This,value) \
    ((This)->lpVtbl->InitializeFromExifColorSpace(This,value))
#define IWICColorContext_GetType(This,pType) \
    ((This)->lpVtbl->GetType(This,pType))
#define IWICColorContext_GetProfileBytes(This,cbBuffer,pbBuffer,pcbActual) \
    ((This)->lpVtbl->GetProfileBytes(This,cbBuffer,pbBuffer,pcbActual))
#define IWICColorContext_GetExifColorSpace(This,pValue) \
    ((This)->lpVtbl->GetExifColorSpace(This,pValue))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWICColorContext_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWICColorTransform interface
 */
#ifndef __IWICColorTransform_INTERFACE_DEFINED__
#define __IWICColorTransform_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICColorTransform;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICColorTransformVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICColorTransform *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICColorTransform *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICColorTransform *This);

    /*** IWICBitmapSource methods ***/
    HRESULT (STDMETHODCALLTYPE *GetSize)(
        IWICColorTransform *This,
        UINT *puiWidth,
        UINT *puiHeight);

    HRESULT (STDMETHODCALLTYPE *GetPixelFormat)(
        IWICColorTransform *This,
        WICPixelFormatGUID *pPixelFormat);

    HRESULT (STDMETHODCALLTYPE *GetResolution)(
        IWICColorTransform *This,
        double *pDpiX,
        double *pDpiY);

    HRESULT (STDMETHODCALLTYPE *CopyPalette)(
        IWICColorTransform *This,
        IWICPalette *pIPalette);

    HRESULT (STDMETHODCALLTYPE *CopyPixels)(
        IWICColorTransform *This,
        const WICRect *prc,
        UINT cbStride,
        UINT cbBufferSize,
        BYTE *pbBuffer);

    /*** IWICColorTransform methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        IWICColorTransform *This,
        IWICBitmapSource *pIBitmapSource,
        IWICColorContext *pIContextSource,
        IWICColorContext *pIContextDest,
        REFWICPixelFormatGUID pixelFmtDest);

    END_INTERFACE
} IWICColorTransformVtbl;

interface IWICColorTransform {
    CONST_VTBL IWICColorTransformVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICColorTransform_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICColorTransform_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICColorTransform_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICBitmapSource methods ***/
#define IWICColorTransform_GetSize(This,puiWidth,puiHeight) \
    ((This)->lpVtbl->GetSize(This,puiWidth,puiHeight))
#define IWICColorTransform_GetPixelFormat(This,pPixelFormat) \
    ((This)->lpVtbl->GetPixelFormat(This,pPixelFormat))
#define IWICColorTransform_GetResolution(This,pDpiX,pDpiY) \
    ((This)->lpVtbl->GetResolution(This,pDpiX,pDpiY))
#define IWICColorTransform_CopyPalette(This,pIPalette) \
    ((This)->lpVtbl->CopyPalette(This,pIPalette))
#define IWICColorTransform_CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer) \
    ((This)->lpVtbl->CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer))
/*** IWICColorTransform methods ***/
#define IWICColorTransform_Initialize(This,pIBitmapSource,pIContextSource,pIContextDest,pixelFmtDest) \
    ((This)->lpVtbl->Initialize(This,pIBitmapSource,pIContextSource,pIContextDest,pixelFmtDest))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWICColorTransform_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWICFastMetadataEncoder interface
 */
#ifndef __IWICFastMetadataEncoder_INTERFACE_DEFINED__
#define __IWICFastMetadataEncoder_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICFastMetadataEncoder;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICFastMetadataEncoderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICFastMetadataEncoder *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICFastMetadataEncoder *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICFastMetadataEncoder *This);

    /*** IWICFastMetadataEncoder methods ***/
    HRESULT (STDMETHODCALLTYPE *Commit)(
        IWICFastMetadataEncoder *This);

    HRESULT (STDMETHODCALLTYPE *GetMetadataQueryWriter)(
        IWICFastMetadataEncoder *This,
        IWICMetadataQueryWriter **ppIMetadataQueryWriter);

    END_INTERFACE
} IWICFastMetadataEncoderVtbl;

interface IWICFastMetadataEncoder {
    CONST_VTBL IWICFastMetadataEncoderVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICFastMetadataEncoder_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICFastMetadataEncoder_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICFastMetadataEncoder_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICFastMetadataEncoder methods ***/
#define IWICFastMetadataEncoder_Commit(This) \
    ((This)->lpVtbl->Commit(This))
#define IWICFastMetadataEncoder_GetMetadataQueryWriter(This,ppIMetadataQueryWriter) \
    ((This)->lpVtbl->GetMetadataQueryWriter(This,ppIMetadataQueryWriter))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWICFastMetadataEncoder_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWICStream interface
 */
#ifndef __IWICStream_INTERFACE_DEFINED__
#define __IWICStream_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICStream;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICStreamVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICStream *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICStream *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICStream *This);

    /*** ISequentialStream methods ***/
    HRESULT (STDMETHODCALLTYPE *Read)(
        IWICStream *This,
        void *pv,
        ULONG cb,
        ULONG *pcbRead);

    HRESULT (STDMETHODCALLTYPE *Write)(
        IWICStream *This,
        void *pv,
        ULONG cb,
        ULONG *pcbWritten);

    /*** IStream methods ***/
    HRESULT (STDMETHODCALLTYPE *Seek)(
        IWICStream *This,
        LARGE_INTEGER dlibMove,
        DWORD dwOrigin,
        ULARGE_INTEGER *plibNewPosition);

    HRESULT (STDMETHODCALLTYPE *SetSize)(
        IWICStream *This,
        ULARGE_INTEGER libNewSize);

    HRESULT (STDMETHODCALLTYPE *CopyTo)(
        IWICStream *This,
        IStream *pstm,
        ULARGE_INTEGER cb,
        ULARGE_INTEGER *pcbRead,
        ULARGE_INTEGER *pcbWritten);

    HRESULT (STDMETHODCALLTYPE *Commit)(
        IWICStream *This,
        DWORD grfCommitFlags);

    HRESULT (STDMETHODCALLTYPE *Revert)(
        IWICStream *This);

    HRESULT (STDMETHODCALLTYPE *LockRegion)(
        IWICStream *This,
        ULARGE_INTEGER libOffset,
        ULARGE_INTEGER cb,
        DWORD dwLockType);

    HRESULT (STDMETHODCALLTYPE *UnlockRegion)(
        IWICStream *This,
        ULARGE_INTEGER libOffset,
        ULARGE_INTEGER cb,
        DWORD dwLockType);

    HRESULT (STDMETHODCALLTYPE *Stat)(
        IWICStream *This,
        STATSTG *pstatstg,
        DWORD grfStatFlag);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IWICStream *This,
        IStream **ppstm);

    /*** IWICStream methods ***/
    HRESULT (STDMETHODCALLTYPE *InitializeFromIStream)(
        IWICStream *This,
        IStream *pIStream);

    HRESULT (STDMETHODCALLTYPE *InitializeFromFilename)(
        IWICStream *This,
        LPCWSTR wzFileName,
        DWORD dwDesiredAccess);

    HRESULT (STDMETHODCALLTYPE *InitializeFromMemory)(
        IWICStream *This,
        WICInProcPointer pbBuffer,
        DWORD cbBufferSize);

    HRESULT (STDMETHODCALLTYPE *InitializeFromIStreamRegion)(
        IWICStream *This,
        IStream *pIStream,
        ULARGE_INTEGER ulOffset,
        ULARGE_INTEGER ulMaxSize);

    END_INTERFACE
} IWICStreamVtbl;

interface IWICStream {
    CONST_VTBL IWICStreamVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICStream_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICStream_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICStream_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISequentialStream methods ***/
#define IWICStream_Read(This,pv,cb,pcbRead) \
    ((This)->lpVtbl->Read(This,pv,cb,pcbRead))
#define IWICStream_Write(This,pv,cb,pcbWritten) \
    ((This)->lpVtbl->Write(This,pv,cb,pcbWritten))
/*** IStream methods ***/
#define IWICStream_Seek(This,dlibMove,dwOrigin,plibNewPosition) \
    ((This)->lpVtbl->Seek(This,dlibMove,dwOrigin,plibNewPosition))
#define IWICStream_SetSize(This,libNewSize) \
    ((This)->lpVtbl->SetSize(This,libNewSize))
#define IWICStream_CopyTo(This,pstm,cb,pcbRead,pcbWritten) \
    ((This)->lpVtbl->CopyTo(This,pstm,cb,pcbRead,pcbWritten))
#define IWICStream_Commit(This,grfCommitFlags) \
    ((This)->lpVtbl->Commit(This,grfCommitFlags))
#define IWICStream_Revert(This) \
    ((This)->lpVtbl->Revert(This))
#define IWICStream_LockRegion(This,libOffset,cb,dwLockType) \
    ((This)->lpVtbl->LockRegion(This,libOffset,cb,dwLockType))
#define IWICStream_UnlockRegion(This,libOffset,cb,dwLockType) \
    ((This)->lpVtbl->UnlockRegion(This,libOffset,cb,dwLockType))
#define IWICStream_Stat(This,pstatstg,grfStatFlag) \
    ((This)->lpVtbl->Stat(This,pstatstg,grfStatFlag))
#define IWICStream_Clone(This,ppstm) \
    ((This)->lpVtbl->Clone(This,ppstm))
/*** IWICStream methods ***/
#define IWICStream_InitializeFromIStream(This,pIStream) \
    ((This)->lpVtbl->InitializeFromIStream(This,pIStream))
#define IWICStream_InitializeFromFilename(This,wzFileName,dwDesiredAccess) \
    ((This)->lpVtbl->InitializeFromFilename(This,wzFileName,dwDesiredAccess))
#define IWICStream_InitializeFromMemory(This,pbBuffer,cbBufferSize) \
    ((This)->lpVtbl->InitializeFromMemory(This,pbBuffer,cbBufferSize))
#define IWICStream_InitializeFromIStreamRegion(This,pIStream,ulOffset,ulMaxSize) \
    ((This)->lpVtbl->InitializeFromIStreamRegion(This,pIStream,ulOffset,ulMaxSize))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWICStream_INTERFACE_DEFINED__ */
/*****************************************************************************
 * IWICEnumMetadataItem interface
 */
#ifndef __IWICEnumMetadataItem_INTERFACE_DEFINED__
#define __IWICEnumMetadataItem_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICEnumMetadataItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICEnumMetadataItemVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICEnumMetadataItem *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICEnumMetadataItem *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICEnumMetadataItem *This);

    /*** IWICEnumMetadataItem methods ***/
    HRESULT (STDMETHODCALLTYPE *Next)(
        IWICEnumMetadataItem *This,
        ULONG celt,
        PROPVARIANT *rgeltSchema,
        PROPVARIANT *rgeltId,
        PROPVARIANT *rgeltValue,
        ULONG *pceltFetched);

    HRESULT (STDMETHODCALLTYPE *Skip)(
        IWICEnumMetadataItem *This,
        ULONG celt);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        IWICEnumMetadataItem *This);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IWICEnumMetadataItem *This,
        IWICEnumMetadataItem **ppIEnumMetadataItem);

    END_INTERFACE
} IWICEnumMetadataItemVtbl;

interface IWICEnumMetadataItem {
    CONST_VTBL IWICEnumMetadataItemVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICEnumMetadataItem_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICEnumMetadataItem_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICEnumMetadataItem_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICEnumMetadataItem methods ***/
#define IWICEnumMetadataItem_Next(This,celt,rgeltSchema,rgeltId,rgeltValue,pceltFetched) \
    ((This)->lpVtbl->Next(This,celt,rgeltSchema,rgeltId,rgeltValue,pceltFetched))
#define IWICEnumMetadataItem_Skip(This,celt) \
    ((This)->lpVtbl->Skip(This,celt))
#define IWICEnumMetadataItem_Reset(This) \
    ((This)->lpVtbl->Reset(This))
#define IWICEnumMetadataItem_Clone(This,ppIEnumMetadataItem) \
    ((This)->lpVtbl->Clone(This,ppIEnumMetadataItem))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWICEnumMetadataItem_INTERFACE_DEFINED__ */
/*****************************************************************************
 * IWICMetadataQueryReader interface
 */
#ifndef __IWICMetadataQueryReader_INTERFACE_DEFINED__
#define __IWICMetadataQueryReader_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICMetadataQueryReader;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICMetadataQueryReaderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICMetadataQueryReader *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICMetadataQueryReader *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICMetadataQueryReader *This);

    /*** IWICMetadataQueryReader methods ***/
    HRESULT (STDMETHODCALLTYPE *GetContainerFormat)(
        IWICMetadataQueryReader *This,
        GUID *pguidContainerFormat);

    HRESULT (STDMETHODCALLTYPE *GetLocation)(
        IWICMetadataQueryReader *This,
        UINT cchMaxLength,
        WCHAR *wzNamespace,
        UINT *pcchActualLength);

    HRESULT (STDMETHODCALLTYPE *GetMetadataByName)(
        IWICMetadataQueryReader *This,
        LPCWSTR wzName,
        PROPVARIANT *pvarValue);

    HRESULT (STDMETHODCALLTYPE *GetEnumerator)(
        IWICMetadataQueryReader *This,
        IEnumString **ppIEnumString);

    END_INTERFACE
} IWICMetadataQueryReaderVtbl;

interface IWICMetadataQueryReader {
    CONST_VTBL IWICMetadataQueryReaderVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICMetadataQueryReader_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICMetadataQueryReader_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICMetadataQueryReader_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICMetadataQueryReader methods ***/
#define IWICMetadataQueryReader_GetContainerFormat(This,pguidContainerFormat) \
    ((This)->lpVtbl->GetContainerFormat(This,pguidContainerFormat))
#define IWICMetadataQueryReader_GetLocation(This,cchMaxLength,wzNamespace,pcchActualLength) \
    ((This)->lpVtbl->GetLocation(This,cchMaxLength,wzNamespace,pcchActualLength))
#define IWICMetadataQueryReader_GetMetadataByName(This,wzName,pvarValue) \
    ((This)->lpVtbl->GetMetadataByName(This,wzName,pvarValue))
#define IWICMetadataQueryReader_GetEnumerator(This,ppIEnumString) \
    ((This)->lpVtbl->GetEnumerator(This,ppIEnumString))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWICMetadataQueryReader_INTERFACE_DEFINED__ */
/*****************************************************************************
 * IWICMetadataQueryWriter interface
 */
#ifndef __IWICMetadataQueryWriter_INTERFACE_DEFINED__
#define __IWICMetadataQueryWriter_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICMetadataQueryWriter;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICMetadataQueryWriterVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICMetadataQueryWriter *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICMetadataQueryWriter *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICMetadataQueryWriter *This);

    /*** IWICMetadataQueryReader methods ***/
    HRESULT (STDMETHODCALLTYPE *GetContainerFormat)(
        IWICMetadataQueryWriter *This,
        GUID *pguidContainerFormat);

    HRESULT (STDMETHODCALLTYPE *GetLocation)(
        IWICMetadataQueryWriter *This,
        UINT cchMaxLength,
        WCHAR *wzNamespace,
        UINT *pcchActualLength);

    HRESULT (STDMETHODCALLTYPE *GetMetadataByName)(
        IWICMetadataQueryWriter *This,
        LPCWSTR wzName,
        PROPVARIANT *pvarValue);

    HRESULT (STDMETHODCALLTYPE *GetEnumerator)(
        IWICMetadataQueryWriter *This,
        IEnumString **ppIEnumString);

    /*** IWICMetadataQueryWriter methods ***/
    HRESULT (STDMETHODCALLTYPE *SetMetadataByName)(
        IWICMetadataQueryWriter *This,
        LPCWSTR wzName,
        const PROPVARIANT *pvarValue);

    HRESULT (STDMETHODCALLTYPE *RemoveMetadataByName)(
        IWICMetadataQueryWriter *This,
        LPCWSTR wzName);

    END_INTERFACE
} IWICMetadataQueryWriterVtbl;

interface IWICMetadataQueryWriter {
    CONST_VTBL IWICMetadataQueryWriterVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICMetadataQueryWriter_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICMetadataQueryWriter_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICMetadataQueryWriter_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICMetadataQueryReader methods ***/
#define IWICMetadataQueryWriter_GetContainerFormat(This,pguidContainerFormat) \
    ((This)->lpVtbl->GetContainerFormat(This,pguidContainerFormat))
#define IWICMetadataQueryWriter_GetLocation(This,cchMaxLength,wzNamespace,pcchActualLength) \
    ((This)->lpVtbl->GetLocation(This,cchMaxLength,wzNamespace,pcchActualLength))
#define IWICMetadataQueryWriter_GetMetadataByName(This,wzName,pvarValue) \
    ((This)->lpVtbl->GetMetadataByName(This,wzName,pvarValue))
#define IWICMetadataQueryWriter_GetEnumerator(This,ppIEnumString) \
    ((This)->lpVtbl->GetEnumerator(This,ppIEnumString))
/*** IWICMetadataQueryWriter methods ***/
#define IWICMetadataQueryWriter_SetMetadataByName(This,wzName,pvarValue) \
    ((This)->lpVtbl->SetMetadataByName(This,wzName,pvarValue))
#define IWICMetadataQueryWriter_RemoveMetadataByName(This,wzName) \
    ((This)->lpVtbl->RemoveMetadataByName(This,wzName))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWICMetadataQueryWriter_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWICBitmapEncoder interface
 */
#ifndef __IWICBitmapEncoder_INTERFACE_DEFINED__
#define __IWICBitmapEncoder_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICBitmapEncoder;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICBitmapEncoderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICBitmapEncoder *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICBitmapEncoder *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICBitmapEncoder *This);

    /*** IWICBitmapEncoder methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        IWICBitmapEncoder *This,
        IStream *pIStream,
        WICBitmapEncoderCacheOption cacheOption);

    HRESULT (STDMETHODCALLTYPE *GetContainerFormat)(
        IWICBitmapEncoder *This,
        GUID *pguidContainerFormat);

    HRESULT (STDMETHODCALLTYPE *GetEncoderInfo)(
        IWICBitmapEncoder *This,
        IWICBitmapEncoderInfo **ppIEncoderInfo);

    HRESULT (STDMETHODCALLTYPE *SetColorContexts)(
        IWICBitmapEncoder *This,
        UINT cCount,
        IWICColorContext **ppIColorContext);

    HRESULT (STDMETHODCALLTYPE *SetPalette)(
        IWICBitmapEncoder *This,
        IWICPalette *pIPalette);

    HRESULT (STDMETHODCALLTYPE *SetThumbnail)(
        IWICBitmapEncoder *This,
        IWICBitmapSource *pIThumbnail);

    HRESULT (STDMETHODCALLTYPE *SetPreview)(
        IWICBitmapEncoder *This,
        IWICBitmapSource *pIPreview);

    HRESULT (STDMETHODCALLTYPE *CreateNewFrame)(
        IWICBitmapEncoder *This,
        IWICBitmapFrameEncode **ppIFrameEncode,
        IPropertyBag2 **ppIEncoderOptions);

    HRESULT (STDMETHODCALLTYPE *Commit)(
        IWICBitmapEncoder *This);

    HRESULT (STDMETHODCALLTYPE *GetMetadataQueryWriter)(
        IWICBitmapEncoder *This,
        IWICMetadataQueryWriter **ppIMetadataQueryWriter);

    END_INTERFACE
} IWICBitmapEncoderVtbl;

interface IWICBitmapEncoder {
    CONST_VTBL IWICBitmapEncoderVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICBitmapEncoder_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICBitmapEncoder_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICBitmapEncoder_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICBitmapEncoder methods ***/
#define IWICBitmapEncoder_Initialize(This,pIStream,cacheOption) \
    ((This)->lpVtbl->Initialize(This,pIStream,cacheOption))
#define IWICBitmapEncoder_GetContainerFormat(This,pguidContainerFormat) \
    ((This)->lpVtbl->GetContainerFormat(This,pguidContainerFormat))
#define IWICBitmapEncoder_GetEncoderInfo(This,ppIEncoderInfo) \
    ((This)->lpVtbl->GetEncoderInfo(This,ppIEncoderInfo))
#define IWICBitmapEncoder_SetColorContexts(This,cCount,ppIColorContext) \
    ((This)->lpVtbl->SetColorContexts(This,cCount,ppIColorContext))
#define IWICBitmapEncoder_SetPalette(This,pIPalette) \
    ((This)->lpVtbl->SetPalette(This,pIPalette))
#define IWICBitmapEncoder_SetThumbnail(This,pIThumbnail) \
    ((This)->lpVtbl->SetThumbnail(This,pIThumbnail))
#define IWICBitmapEncoder_SetPreview(This,pIPreview) \
    ((This)->lpVtbl->SetPreview(This,pIPreview))
#define IWICBitmapEncoder_CreateNewFrame(This,ppIFrameEncode,ppIEncoderOptions) \
    ((This)->lpVtbl->CreateNewFrame(This,ppIFrameEncode,ppIEncoderOptions))
#define IWICBitmapEncoder_Commit(This) \
    ((This)->lpVtbl->Commit(This))
#define IWICBitmapEncoder_GetMetadataQueryWriter(This,ppIMetadataQueryWriter) \
    ((This)->lpVtbl->GetMetadataQueryWriter(This,ppIMetadataQueryWriter))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWICBitmapEncoder_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWICBitmapFrameEncode interface
 */
#ifndef __IWICBitmapFrameEncode_INTERFACE_DEFINED__
#define __IWICBitmapFrameEncode_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICBitmapFrameEncode;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICBitmapFrameEncodeVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICBitmapFrameEncode *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICBitmapFrameEncode *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICBitmapFrameEncode *This);

    /*** IWICBitmapFrameEncode methods ***/
    HRESULT (STDMETHODCALLTYPE *Initialize)(
        IWICBitmapFrameEncode *This,
        IPropertyBag2 *pIEncoderOptions);

    HRESULT (STDMETHODCALLTYPE *SetSize)(
        IWICBitmapFrameEncode *This,
        UINT uiWidth,
        UINT uiHeight);

    HRESULT (STDMETHODCALLTYPE *SetResolution)(
        IWICBitmapFrameEncode *This,
        double dpiX,
        double dpiY);

    HRESULT (STDMETHODCALLTYPE *SetPixelFormat)(
        IWICBitmapFrameEncode *This,
        WICPixelFormatGUID *pPixelFormat);

    HRESULT (STDMETHODCALLTYPE *SetColorContexts)(
        IWICBitmapFrameEncode *This,
        UINT cCount,
        IWICColorContext **ppIColorContext);

    HRESULT (STDMETHODCALLTYPE *SetPalette)(
        IWICBitmapFrameEncode *This,
        IWICPalette *pIPalette);

    HRESULT (STDMETHODCALLTYPE *SetThumbnail)(
        IWICBitmapFrameEncode *This,
        IWICBitmapSource *pIThumbnail);

    HRESULT (STDMETHODCALLTYPE *WritePixels)(
        IWICBitmapFrameEncode *This,
        UINT lineCount,
        UINT cbStride,
        UINT cbBufferSize,
        BYTE *pbPixels);

    HRESULT (STDMETHODCALLTYPE *WriteSource)(
        IWICBitmapFrameEncode *This,
        IWICBitmapSource *pIBitmapSource,
        WICRect *prc);

    HRESULT (STDMETHODCALLTYPE *Commit)(
        IWICBitmapFrameEncode *This);

    HRESULT (STDMETHODCALLTYPE *GetMetadataQueryWriter)(
        IWICBitmapFrameEncode *This,
        IWICMetadataQueryWriter **ppIMetadataQueryWriter);

    END_INTERFACE
} IWICBitmapFrameEncodeVtbl;

interface IWICBitmapFrameEncode {
    CONST_VTBL IWICBitmapFrameEncodeVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICBitmapFrameEncode_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICBitmapFrameEncode_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICBitmapFrameEncode_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICBitmapFrameEncode methods ***/
#define IWICBitmapFrameEncode_Initialize(This,pIEncoderOptions) \
    ((This)->lpVtbl->Initialize(This,pIEncoderOptions))
#define IWICBitmapFrameEncode_SetSize(This,uiWidth,uiHeight) \
    ((This)->lpVtbl->SetSize(This,uiWidth,uiHeight))
#define IWICBitmapFrameEncode_SetResolution(This,dpiX,dpiY) \
    ((This)->lpVtbl->SetResolution(This,dpiX,dpiY))
#define IWICBitmapFrameEncode_SetPixelFormat(This,pPixelFormat) \
    ((This)->lpVtbl->SetPixelFormat(This,pPixelFormat))
#define IWICBitmapFrameEncode_SetColorContexts(This,cCount,ppIColorContext) \
    ((This)->lpVtbl->SetColorContexts(This,cCount,ppIColorContext))
#define IWICBitmapFrameEncode_SetPalette(This,pIPalette) \
    ((This)->lpVtbl->SetPalette(This,pIPalette))
#define IWICBitmapFrameEncode_SetThumbnail(This,pIThumbnail) \
    ((This)->lpVtbl->SetThumbnail(This,pIThumbnail))
#define IWICBitmapFrameEncode_WritePixels(This,lineCount,cbStride,cbBufferSize,pbPixels) \
    ((This)->lpVtbl->WritePixels(This,lineCount,cbStride,cbBufferSize,pbPixels))
#define IWICBitmapFrameEncode_WriteSource(This,pIBitmapSource,prc) \
    ((This)->lpVtbl->WriteSource(This,pIBitmapSource,prc))
#define IWICBitmapFrameEncode_Commit(This) \
    ((This)->lpVtbl->Commit(This))
#define IWICBitmapFrameEncode_GetMetadataQueryWriter(This,ppIMetadataQueryWriter) \
    ((This)->lpVtbl->GetMetadataQueryWriter(This,ppIMetadataQueryWriter))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWICBitmapFrameEncode_INTERFACE_DEFINED__ */
/*****************************************************************************
 * IWICPlanarBitmapFrameEncode interface
 */
#ifndef __IWICPlanarBitmapFrameEncode_INTERFACE_DEFINED__
#define __IWICPlanarBitmapFrameEncode_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICPlanarBitmapFrameEncode;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICPlanarBitmapFrameEncodeVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICPlanarBitmapFrameEncode *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICPlanarBitmapFrameEncode *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICPlanarBitmapFrameEncode *This);

    /*** IWICPlanarBitmapFrameEncode methods ***/
    HRESULT (STDMETHODCALLTYPE *WritePixels)(
        IWICPlanarBitmapFrameEncode *This,
        UINT lineCount,
        WICBitmapPlane *pPlanes,
        UINT cPlanes);

    HRESULT (STDMETHODCALLTYPE *WriteSource)(
        IWICPlanarBitmapFrameEncode *This,
        IWICBitmapSource **ppPlanes,
        UINT cPlanes,
        WICRect *prcSource);

    END_INTERFACE
} IWICPlanarBitmapFrameEncodeVtbl;

interface IWICPlanarBitmapFrameEncode {
    CONST_VTBL IWICPlanarBitmapFrameEncodeVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICPlanarBitmapFrameEncode_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICPlanarBitmapFrameEncode_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICPlanarBitmapFrameEncode_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICPlanarBitmapFrameEncode methods ***/
#define IWICPlanarBitmapFrameEncode_WritePixels(This,lineCount,pPlanes,cPlanes) \
    ((This)->lpVtbl->WritePixels(This,lineCount,pPlanes,cPlanes))
#define IWICPlanarBitmapFrameEncode_WriteSource(This,ppPlanes,cPlanes,prcSource) \
    ((This)->lpVtbl->WriteSource(This,ppPlanes,cPlanes,prcSource))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWICPlanarBitmapFrameEncode_INTERFACE_DEFINED__ */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8) || defined(_WIN7_PLATFORM_UPDATE)

/*****************************************************************************
 * IWICImageEncoder interface
 */
#ifndef __IWICImageEncoder_INTERFACE_DEFINED__
#define __IWICImageEncoder_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICImageEncoder;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICImageEncoderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICImageEncoder *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICImageEncoder *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICImageEncoder *This);

    /*** IWICImageEncoder methods ***/
    HRESULT (STDMETHODCALLTYPE *WriteFrame)(
        IWICImageEncoder *This,
        ID2D1Image *pImage,
        IWICBitmapFrameEncode *pFrameEncode,
        const WICImageParameters *pImageParameters);

    HRESULT (STDMETHODCALLTYPE *WriteFrameThumbnail)(
        IWICImageEncoder *This,
        ID2D1Image *pImage,
        IWICBitmapFrameEncode *pFrameEncode,
        const WICImageParameters *pImageParameters);

    HRESULT (STDMETHODCALLTYPE *WriteThumbnail)(
        IWICImageEncoder *This,
        ID2D1Image *pImage,
        IWICBitmapEncoder *pEncoder,
        const WICImageParameters *pImageParameters);

    END_INTERFACE
} IWICImageEncoderVtbl;

interface IWICImageEncoder {
    CONST_VTBL IWICImageEncoderVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICImageEncoder_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICImageEncoder_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICImageEncoder_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICImageEncoder methods ***/
#define IWICImageEncoder_WriteFrame(This,pImage,pFrameEncode,pImageParameters) \
    ((This)->lpVtbl->WriteFrame(This,pImage,pFrameEncode,pImageParameters))
#define IWICImageEncoder_WriteFrameThumbnail(This,pImage,pFrameEncode,pImageParameters) \
    ((This)->lpVtbl->WriteFrameThumbnail(This,pImage,pFrameEncode,pImageParameters))
#define IWICImageEncoder_WriteThumbnail(This,pImage,pEncoder,pImageParameters) \
    ((This)->lpVtbl->WriteThumbnail(This,pImage,pEncoder,pImageParameters))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWICImageEncoder_INTERFACE_DEFINED__ */

#endif

/*****************************************************************************
 * IWICBitmapDecoder interface
 */
#ifndef __IWICBitmapDecoder_INTERFACE_DEFINED__
#define __IWICBitmapDecoder_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICBitmapDecoder;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICBitmapDecoderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICBitmapDecoder *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICBitmapDecoder *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICBitmapDecoder *This);

    /*** IWICBitmapDecoder methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryCapability)(
        IWICBitmapDecoder *This,
        IStream *pIStream,
        DWORD *pdwCapability);

    HRESULT (STDMETHODCALLTYPE *Initialize)(
        IWICBitmapDecoder *This,
        IStream *pIStream,
        WICDecodeOptions cacheOptions);

    HRESULT (STDMETHODCALLTYPE *GetContainerFormat)(
        IWICBitmapDecoder *This,
        GUID *pguidContainerFormat);

    HRESULT (STDMETHODCALLTYPE *GetDecoderInfo)(
        IWICBitmapDecoder *This,
        IWICBitmapDecoderInfo **ppIDecoderInfo);

    HRESULT (STDMETHODCALLTYPE *CopyPalette)(
        IWICBitmapDecoder *This,
        IWICPalette *pIPalette);

    HRESULT (STDMETHODCALLTYPE *GetMetadataQueryReader)(
        IWICBitmapDecoder *This,
        IWICMetadataQueryReader **ppIMetadataQueryReader);

    HRESULT (STDMETHODCALLTYPE *GetPreview)(
        IWICBitmapDecoder *This,
        IWICBitmapSource **ppIBitmapSource);

    HRESULT (STDMETHODCALLTYPE *GetColorContexts)(
        IWICBitmapDecoder *This,
        UINT cCount,
        IWICColorContext **ppIColorContexts,
        UINT *pcActualCount);

    HRESULT (STDMETHODCALLTYPE *GetThumbnail)(
        IWICBitmapDecoder *This,
        IWICBitmapSource **ppIThumbnail);

    HRESULT (STDMETHODCALLTYPE *GetFrameCount)(
        IWICBitmapDecoder *This,
        UINT *pCount);

    HRESULT (STDMETHODCALLTYPE *GetFrame)(
        IWICBitmapDecoder *This,
        UINT index,
        IWICBitmapFrameDecode **ppIBitmapFrame);

    END_INTERFACE
} IWICBitmapDecoderVtbl;

interface IWICBitmapDecoder {
    CONST_VTBL IWICBitmapDecoderVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICBitmapDecoder_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICBitmapDecoder_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICBitmapDecoder_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICBitmapDecoder methods ***/
#define IWICBitmapDecoder_QueryCapability(This,pIStream,pdwCapability) \
    ((This)->lpVtbl->QueryCapability(This,pIStream,pdwCapability))
#define IWICBitmapDecoder_Initialize(This,pIStream,cacheOptions) \
    ((This)->lpVtbl->Initialize(This,pIStream,cacheOptions))
#define IWICBitmapDecoder_GetContainerFormat(This,pguidContainerFormat) \
    ((This)->lpVtbl->GetContainerFormat(This,pguidContainerFormat))
#define IWICBitmapDecoder_GetDecoderInfo(This,ppIDecoderInfo) \
    ((This)->lpVtbl->GetDecoderInfo(This,ppIDecoderInfo))
#define IWICBitmapDecoder_CopyPalette(This,pIPalette) \
    ((This)->lpVtbl->CopyPalette(This,pIPalette))
#define IWICBitmapDecoder_GetMetadataQueryReader(This,ppIMetadataQueryReader) \
    ((This)->lpVtbl->GetMetadataQueryReader(This,ppIMetadataQueryReader))
#define IWICBitmapDecoder_GetPreview(This,ppIBitmapSource) \
    ((This)->lpVtbl->GetPreview(This,ppIBitmapSource))
#define IWICBitmapDecoder_GetColorContexts(This,cCount,ppIColorContexts,pcActualCount) \
    ((This)->lpVtbl->GetColorContexts(This,cCount,ppIColorContexts,pcActualCount))
#define IWICBitmapDecoder_GetThumbnail(This,ppIThumbnail) \
    ((This)->lpVtbl->GetThumbnail(This,ppIThumbnail))
#define IWICBitmapDecoder_GetFrameCount(This,pCount) \
    ((This)->lpVtbl->GetFrameCount(This,pCount))
#define IWICBitmapDecoder_GetFrame(This,index,ppIBitmapFrame) \
    ((This)->lpVtbl->GetFrame(This,index,ppIBitmapFrame))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWICBitmapDecoder_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWICBitmapSourceTransform interface
 */
#ifndef __IWICBitmapSourceTransform_INTERFACE_DEFINED__
#define __IWICBitmapSourceTransform_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICBitmapSourceTransform;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICBitmapSourceTransformVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICBitmapSourceTransform *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICBitmapSourceTransform *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICBitmapSourceTransform *This);

    /*** IWICBitmapSourceTransform methods ***/
    HRESULT (STDMETHODCALLTYPE *CopyPixels)(
        IWICBitmapSourceTransform *This,
        const WICRect *prc,
        UINT uiWidth,
        UINT uiHeight,
        WICPixelFormatGUID *pguidDstFormat,
        WICBitmapTransformOptions dstTransform,
        UINT nStride,
        UINT cbBufferSize,
        BYTE *pbBuffer);

    HRESULT (STDMETHODCALLTYPE *GetClosestSize)(
        IWICBitmapSourceTransform *This,
        UINT *puiWidth,
        UINT *puiHeight);

    HRESULT (STDMETHODCALLTYPE *GetClosestPixelFormat)(
        IWICBitmapSourceTransform *This,
        WICPixelFormatGUID *pguidDstFormat);

    HRESULT (STDMETHODCALLTYPE *DoesSupportTransform)(
        IWICBitmapSourceTransform *This,
        WICBitmapTransformOptions dstTransform,
        BOOL *pfIsSupported);

    END_INTERFACE
} IWICBitmapSourceTransformVtbl;

interface IWICBitmapSourceTransform {
    CONST_VTBL IWICBitmapSourceTransformVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICBitmapSourceTransform_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICBitmapSourceTransform_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICBitmapSourceTransform_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICBitmapSourceTransform methods ***/
#define IWICBitmapSourceTransform_CopyPixels(This,prc,uiWidth,uiHeight,pguidDstFormat,dstTransform,nStride,cbBufferSize,pbBuffer) \
    ((This)->lpVtbl->CopyPixels(This,prc,uiWidth,uiHeight,pguidDstFormat,dstTransform,nStride,cbBufferSize,pbBuffer))
#define IWICBitmapSourceTransform_GetClosestSize(This,puiWidth,puiHeight) \
    ((This)->lpVtbl->GetClosestSize(This,puiWidth,puiHeight))
#define IWICBitmapSourceTransform_GetClosestPixelFormat(This,pguidDstFormat) \
    ((This)->lpVtbl->GetClosestPixelFormat(This,pguidDstFormat))
#define IWICBitmapSourceTransform_DoesSupportTransform(This,dstTransform,pfIsSupported) \
    ((This)->lpVtbl->DoesSupportTransform(This,dstTransform,pfIsSupported))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWICBitmapSourceTransform_INTERFACE_DEFINED__ */
/*****************************************************************************
 * IWICPlanarBitmapSourceTransform interface
 */
#ifndef __IWICPlanarBitmapSourceTransform_INTERFACE_DEFINED__
#define __IWICPlanarBitmapSourceTransform_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICPlanarBitmapSourceTransform;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICPlanarBitmapSourceTransformVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICPlanarBitmapSourceTransform *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICPlanarBitmapSourceTransform *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICPlanarBitmapSourceTransform *This);

    /*** IWICPlanarBitmapSourceTransform methods ***/
    HRESULT (STDMETHODCALLTYPE *DoesSupportTransform)(
        IWICPlanarBitmapSourceTransform *This,
        UINT *puiWidth,
        UINT *puiHeight,
        WICBitmapTransformOptions dstTransform,
        WICPlanarOptions dstPlanarOptions,
        const WICPixelFormatGUID *pguidDstFormats,
        WICBitmapPlaneDescription *pPlaneDescriptions,
        UINT cPlanes,
        BOOL *pfIsSupported);

    HRESULT (STDMETHODCALLTYPE *CopyPixels)(
        IWICPlanarBitmapSourceTransform *This,
        const WICRect *prcSource,
        UINT uiWidth,
        UINT uiHeight,
        WICBitmapTransformOptions dstTransform,
        WICPlanarOptions dstPlanarOptions,
        const WICBitmapPlane *pDstPlanes,
        UINT cPlanes);

    END_INTERFACE
} IWICPlanarBitmapSourceTransformVtbl;

interface IWICPlanarBitmapSourceTransform {
    CONST_VTBL IWICPlanarBitmapSourceTransformVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICPlanarBitmapSourceTransform_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICPlanarBitmapSourceTransform_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICPlanarBitmapSourceTransform_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICPlanarBitmapSourceTransform methods ***/
#define IWICPlanarBitmapSourceTransform_DoesSupportTransform(This,puiWidth,puiHeight,dstTransform,dstPlanarOptions,pguidDstFormats,pPlaneDescriptions,cPlanes,pfIsSupported) \
    ((This)->lpVtbl->DoesSupportTransform(This,puiWidth,puiHeight,dstTransform,dstPlanarOptions,pguidDstFormats,pPlaneDescriptions,cPlanes,pfIsSupported))
#define IWICPlanarBitmapSourceTransform_CopyPixels(This,prcSource,uiWidth,uiHeight,dstTransform,dstPlanarOptions,pDstPlanes,cPlanes) \
    ((This)->lpVtbl->CopyPixels(This,prcSource,uiWidth,uiHeight,dstTransform,dstPlanarOptions,pDstPlanes,cPlanes))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWICPlanarBitmapSourceTransform_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWICBitmapFrameDecode interface
 */
#ifndef __IWICBitmapFrameDecode_INTERFACE_DEFINED__
#define __IWICBitmapFrameDecode_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICBitmapFrameDecode;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICBitmapFrameDecodeVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICBitmapFrameDecode *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICBitmapFrameDecode *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICBitmapFrameDecode *This);

    /*** IWICBitmapSource methods ***/
    HRESULT (STDMETHODCALLTYPE *GetSize)(
        IWICBitmapFrameDecode *This,
        UINT *puiWidth,
        UINT *puiHeight);

    HRESULT (STDMETHODCALLTYPE *GetPixelFormat)(
        IWICBitmapFrameDecode *This,
        WICPixelFormatGUID *pPixelFormat);

    HRESULT (STDMETHODCALLTYPE *GetResolution)(
        IWICBitmapFrameDecode *This,
        double *pDpiX,
        double *pDpiY);

    HRESULT (STDMETHODCALLTYPE *CopyPalette)(
        IWICBitmapFrameDecode *This,
        IWICPalette *pIPalette);

    HRESULT (STDMETHODCALLTYPE *CopyPixels)(
        IWICBitmapFrameDecode *This,
        const WICRect *prc,
        UINT cbStride,
        UINT cbBufferSize,
        BYTE *pbBuffer);

    /*** IWICBitmapFrameDecode methods ***/
    HRESULT (STDMETHODCALLTYPE *GetMetadataQueryReader)(
        IWICBitmapFrameDecode *This,
        IWICMetadataQueryReader **ppIMetadataQueryReader);

    HRESULT (STDMETHODCALLTYPE *GetColorContexts)(
        IWICBitmapFrameDecode *This,
        UINT cCount,
        IWICColorContext **ppIColorContexts,
        UINT *pcActualCount);

    HRESULT (STDMETHODCALLTYPE *GetThumbnail)(
        IWICBitmapFrameDecode *This,
        IWICBitmapSource **ppIThumbnail);

    END_INTERFACE
} IWICBitmapFrameDecodeVtbl;

interface IWICBitmapFrameDecode {
    CONST_VTBL IWICBitmapFrameDecodeVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICBitmapFrameDecode_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICBitmapFrameDecode_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICBitmapFrameDecode_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICBitmapSource methods ***/
#define IWICBitmapFrameDecode_GetSize(This,puiWidth,puiHeight) \
    ((This)->lpVtbl->GetSize(This,puiWidth,puiHeight))
#define IWICBitmapFrameDecode_GetPixelFormat(This,pPixelFormat) \
    ((This)->lpVtbl->GetPixelFormat(This,pPixelFormat))
#define IWICBitmapFrameDecode_GetResolution(This,pDpiX,pDpiY) \
    ((This)->lpVtbl->GetResolution(This,pDpiX,pDpiY))
#define IWICBitmapFrameDecode_CopyPalette(This,pIPalette) \
    ((This)->lpVtbl->CopyPalette(This,pIPalette))
#define IWICBitmapFrameDecode_CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer) \
    ((This)->lpVtbl->CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer))
/*** IWICBitmapFrameDecode methods ***/
#define IWICBitmapFrameDecode_GetMetadataQueryReader(This,ppIMetadataQueryReader) \
    ((This)->lpVtbl->GetMetadataQueryReader(This,ppIMetadataQueryReader))
#define IWICBitmapFrameDecode_GetColorContexts(This,cCount,ppIColorContexts,pcActualCount) \
    ((This)->lpVtbl->GetColorContexts(This,cCount,ppIColorContexts,pcActualCount))
#define IWICBitmapFrameDecode_GetThumbnail(This,ppIThumbnail) \
    ((This)->lpVtbl->GetThumbnail(This,ppIThumbnail))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWICBitmapFrameDecode_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWICProgressiveLevelControl interface
 */
#ifndef __IWICProgressiveLevelControl_INTERFACE_DEFINED__
#define __IWICProgressiveLevelControl_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICProgressiveLevelControl;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICProgressiveLevelControlVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICProgressiveLevelControl *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICProgressiveLevelControl *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICProgressiveLevelControl *This);

    /*** IWICProgressiveLevelControl methods ***/
    HRESULT (STDMETHODCALLTYPE *GetLevelCount)(
        IWICProgressiveLevelControl *This,
        UINT *pcLevels);

    HRESULT (STDMETHODCALLTYPE *GetCurrentLevel)(
        IWICProgressiveLevelControl *This,
        UINT *pnLevel);

    HRESULT (STDMETHODCALLTYPE *SetCurrentLevel)(
        IWICProgressiveLevelControl *This,
        UINT nLevel);

    END_INTERFACE
} IWICProgressiveLevelControlVtbl;

interface IWICProgressiveLevelControl {
    CONST_VTBL IWICProgressiveLevelControlVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICProgressiveLevelControl_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICProgressiveLevelControl_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICProgressiveLevelControl_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICProgressiveLevelControl methods ***/
#define IWICProgressiveLevelControl_GetLevelCount(This,pcLevels) \
    ((This)->lpVtbl->GetLevelCount(This,pcLevels))
#define IWICProgressiveLevelControl_GetCurrentLevel(This,pnLevel) \
    ((This)->lpVtbl->GetCurrentLevel(This,pnLevel))
#define IWICProgressiveLevelControl_SetCurrentLevel(This,nLevel) \
    ((This)->lpVtbl->SetCurrentLevel(This,nLevel))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWICProgressiveLevelControl_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWICProgressCallback interface
 */
#ifndef __IWICProgressCallback_INTERFACE_DEFINED__
#define __IWICProgressCallback_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICProgressCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICProgressCallbackVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICProgressCallback *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICProgressCallback *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICProgressCallback *This);

    /*** IWICProgressCallback methods ***/
    HRESULT (STDMETHODCALLTYPE *Notify)(
        IWICProgressCallback *This,
        ULONG uFrameNum,
        WICProgressOperation operation,
        double dblProgress);

    END_INTERFACE
} IWICProgressCallbackVtbl;

interface IWICProgressCallback {
    CONST_VTBL IWICProgressCallbackVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICProgressCallback_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICProgressCallback_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICProgressCallback_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICProgressCallback methods ***/
#define IWICProgressCallback_Notify(This,uFrameNum,operation,dblProgress) \
    ((This)->lpVtbl->Notify(This,uFrameNum,operation,dblProgress))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWICProgressCallback_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWICBitmapCodecProgressNotification interface
 */
#ifndef __IWICBitmapCodecProgressNotification_INTERFACE_DEFINED__
#define __IWICBitmapCodecProgressNotification_INTERFACE_DEFINED__

typedef HRESULT (*PFNProgressNotification)(
    LPVOID pvData,
    ULONG uFrameNum,
    WICProgressOperation operation,
    double dblProgress);

EXTERN_C const IID IID_IWICBitmapCodecProgressNotification;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICBitmapCodecProgressNotificationVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICBitmapCodecProgressNotification *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICBitmapCodecProgressNotification *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICBitmapCodecProgressNotification *This);

    /*** IWICBitmapCodecProgressNotification methods ***/
    HRESULT (STDMETHODCALLTYPE *RegisterProgressNotification)(
        IWICBitmapCodecProgressNotification *This,
        PFNProgressNotification pfnProgressNotification,
        LPVOID pvData,
        DWORD dwProgressFlags);

    END_INTERFACE
} IWICBitmapCodecProgressNotificationVtbl;

interface IWICBitmapCodecProgressNotification {
    CONST_VTBL IWICBitmapCodecProgressNotificationVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICBitmapCodecProgressNotification_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICBitmapCodecProgressNotification_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICBitmapCodecProgressNotification_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICBitmapCodecProgressNotification methods ***/
#define IWICBitmapCodecProgressNotification_RegisterProgressNotification(This,pfnProgressNotification,pvData,dwProgressFlags) \
    ((This)->lpVtbl->RegisterProgressNotification(This,pfnProgressNotification,pvData,dwProgressFlags))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IWICBitmapCodecProgressNotification_Remote_RegisterProgressNotification_Proxy(
    IWICBitmapCodecProgressNotification *This,
    IWICProgressCallback *pICallback,
    DWORD dwProgressFlags);

void __RPC_STUB IWICBitmapCodecProgressNotification_Remote_RegisterProgressNotification_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IWICBitmapCodecProgressNotification_RegisterProgressNotification_Proxy(
    PFNProgressNotification pfnProgressNotification,
    LPVOID pvData,
    DWORD dwProgressFlags);
HRESULT IWICBitmapCodecProgressNotification_RegisterProgressNotification_Stub(
    IWICProgressCallback *pICallback,
    DWORD dwProgressFlags);
#endif /* __IWICBitmapCodecProgressNotification_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWICComponentInfo interface
 */
#ifndef __IWICComponentInfo_INTERFACE_DEFINED__
#define __IWICComponentInfo_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICComponentInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICComponentInfoVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICComponentInfo *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICComponentInfo *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICComponentInfo *This);

    /*** IWICComponentInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *GetComponentType)(
        IWICComponentInfo *This,
        WICComponentType *pType);

    HRESULT (STDMETHODCALLTYPE *GetCLSID)(
        IWICComponentInfo *This,
        CLSID *pclsid);

    HRESULT (STDMETHODCALLTYPE *GetSigningStatus)(
        IWICComponentInfo *This,
        DWORD *pStatus);

    HRESULT (STDMETHODCALLTYPE *GetAuthor)(
        IWICComponentInfo *This,
        UINT cchAuthor,
        WCHAR *wzAuthor,
        UINT *pcchActual);

    HRESULT (STDMETHODCALLTYPE *GetVendorGUID)(
        IWICComponentInfo *This,
        GUID *pguidVendor);

    HRESULT (STDMETHODCALLTYPE *GetVersion)(
        IWICComponentInfo *This,
        UINT cchVersion,
        WCHAR *wzVersion,
        UINT *pcchActual);

    HRESULT (STDMETHODCALLTYPE *GetSpecVersion)(
        IWICComponentInfo *This,
        UINT cchSpecVersion,
        WCHAR *wzSpecVersion,
        UINT *pcchActual);

    HRESULT (STDMETHODCALLTYPE *GetFriendlyName)(
        IWICComponentInfo *This,
        UINT cchFriendlyName,
        WCHAR *wzFriendlyName,
        UINT *pcchActual);

    END_INTERFACE
} IWICComponentInfoVtbl;

interface IWICComponentInfo {
    CONST_VTBL IWICComponentInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICComponentInfo_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICComponentInfo_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICComponentInfo_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICComponentInfo methods ***/
#define IWICComponentInfo_GetComponentType(This,pType) \
    ((This)->lpVtbl->GetComponentType(This,pType))
#define IWICComponentInfo_GetCLSID(This,pclsid) \
    ((This)->lpVtbl->GetCLSID(This,pclsid))
#define IWICComponentInfo_GetSigningStatus(This,pStatus) \
    ((This)->lpVtbl->GetSigningStatus(This,pStatus))
#define IWICComponentInfo_GetAuthor(This,cchAuthor,wzAuthor,pcchActual) \
    ((This)->lpVtbl->GetAuthor(This,cchAuthor,wzAuthor,pcchActual))
#define IWICComponentInfo_GetVendorGUID(This,pguidVendor) \
    ((This)->lpVtbl->GetVendorGUID(This,pguidVendor))
#define IWICComponentInfo_GetVersion(This,cchVersion,wzVersion,pcchActual) \
    ((This)->lpVtbl->GetVersion(This,cchVersion,wzVersion,pcchActual))
#define IWICComponentInfo_GetSpecVersion(This,cchSpecVersion,wzSpecVersion,pcchActual) \
    ((This)->lpVtbl->GetSpecVersion(This,cchSpecVersion,wzSpecVersion,pcchActual))
#define IWICComponentInfo_GetFriendlyName(This,cchFriendlyName,wzFriendlyName,pcchActual) \
    ((This)->lpVtbl->GetFriendlyName(This,cchFriendlyName,wzFriendlyName,pcchActual))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWICComponentInfo_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWICFormatConverterInfo interface
 */
#ifndef __IWICFormatConverterInfo_INTERFACE_DEFINED__
#define __IWICFormatConverterInfo_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICFormatConverterInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICFormatConverterInfoVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICFormatConverterInfo *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICFormatConverterInfo *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICFormatConverterInfo *This);

    /*** IWICComponentInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *GetComponentType)(
        IWICFormatConverterInfo *This,
        WICComponentType *pType);

    HRESULT (STDMETHODCALLTYPE *GetCLSID)(
        IWICFormatConverterInfo *This,
        CLSID *pclsid);

    HRESULT (STDMETHODCALLTYPE *GetSigningStatus)(
        IWICFormatConverterInfo *This,
        DWORD *pStatus);

    HRESULT (STDMETHODCALLTYPE *GetAuthor)(
        IWICFormatConverterInfo *This,
        UINT cchAuthor,
        WCHAR *wzAuthor,
        UINT *pcchActual);

    HRESULT (STDMETHODCALLTYPE *GetVendorGUID)(
        IWICFormatConverterInfo *This,
        GUID *pguidVendor);

    HRESULT (STDMETHODCALLTYPE *GetVersion)(
        IWICFormatConverterInfo *This,
        UINT cchVersion,
        WCHAR *wzVersion,
        UINT *pcchActual);

    HRESULT (STDMETHODCALLTYPE *GetSpecVersion)(
        IWICFormatConverterInfo *This,
        UINT cchSpecVersion,
        WCHAR *wzSpecVersion,
        UINT *pcchActual);

    HRESULT (STDMETHODCALLTYPE *GetFriendlyName)(
        IWICFormatConverterInfo *This,
        UINT cchFriendlyName,
        WCHAR *wzFriendlyName,
        UINT *pcchActual);

    /*** IWICFormatConverterInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *GetPixelFormats)(
        IWICFormatConverterInfo *This,
        UINT cFormats,
        WICPixelFormatGUID *pPixelFormatGUIDs,
        UINT *pcActual);

    HRESULT (STDMETHODCALLTYPE *CreateInstance)(
        IWICFormatConverterInfo *This,
        IWICFormatConverter **ppIConverter);

    END_INTERFACE
} IWICFormatConverterInfoVtbl;

interface IWICFormatConverterInfo {
    CONST_VTBL IWICFormatConverterInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICFormatConverterInfo_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICFormatConverterInfo_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICFormatConverterInfo_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICComponentInfo methods ***/
#define IWICFormatConverterInfo_GetComponentType(This,pType) \
    ((This)->lpVtbl->GetComponentType(This,pType))
#define IWICFormatConverterInfo_GetCLSID(This,pclsid) \
    ((This)->lpVtbl->GetCLSID(This,pclsid))
#define IWICFormatConverterInfo_GetSigningStatus(This,pStatus) \
    ((This)->lpVtbl->GetSigningStatus(This,pStatus))
#define IWICFormatConverterInfo_GetAuthor(This,cchAuthor,wzAuthor,pcchActual) \
    ((This)->lpVtbl->GetAuthor(This,cchAuthor,wzAuthor,pcchActual))
#define IWICFormatConverterInfo_GetVendorGUID(This,pguidVendor) \
    ((This)->lpVtbl->GetVendorGUID(This,pguidVendor))
#define IWICFormatConverterInfo_GetVersion(This,cchVersion,wzVersion,pcchActual) \
    ((This)->lpVtbl->GetVersion(This,cchVersion,wzVersion,pcchActual))
#define IWICFormatConverterInfo_GetSpecVersion(This,cchSpecVersion,wzSpecVersion,pcchActual) \
    ((This)->lpVtbl->GetSpecVersion(This,cchSpecVersion,wzSpecVersion,pcchActual))
#define IWICFormatConverterInfo_GetFriendlyName(This,cchFriendlyName,wzFriendlyName,pcchActual) \
    ((This)->lpVtbl->GetFriendlyName(This,cchFriendlyName,wzFriendlyName,pcchActual))
/*** IWICFormatConverterInfo methods ***/
#define IWICFormatConverterInfo_GetPixelFormats(This,cFormats,pPixelFormatGUIDs,pcActual) \
    ((This)->lpVtbl->GetPixelFormats(This,cFormats,pPixelFormatGUIDs,pcActual))
#define IWICFormatConverterInfo_CreateInstance(This,ppIConverter) \
    ((This)->lpVtbl->CreateInstance(This,ppIConverter))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWICFormatConverterInfo_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWICBitmapCodecInfo interface
 */
#ifndef __IWICBitmapCodecInfo_INTERFACE_DEFINED__
#define __IWICBitmapCodecInfo_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICBitmapCodecInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICBitmapCodecInfoVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICBitmapCodecInfo *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICBitmapCodecInfo *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICBitmapCodecInfo *This);

    /*** IWICComponentInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *GetComponentType)(
        IWICBitmapCodecInfo *This,
        WICComponentType *pType);

    HRESULT (STDMETHODCALLTYPE *GetCLSID)(
        IWICBitmapCodecInfo *This,
        CLSID *pclsid);

    HRESULT (STDMETHODCALLTYPE *GetSigningStatus)(
        IWICBitmapCodecInfo *This,
        DWORD *pStatus);

    HRESULT (STDMETHODCALLTYPE *GetAuthor)(
        IWICBitmapCodecInfo *This,
        UINT cchAuthor,
        WCHAR *wzAuthor,
        UINT *pcchActual);

    HRESULT (STDMETHODCALLTYPE *GetVendorGUID)(
        IWICBitmapCodecInfo *This,
        GUID *pguidVendor);

    HRESULT (STDMETHODCALLTYPE *GetVersion)(
        IWICBitmapCodecInfo *This,
        UINT cchVersion,
        WCHAR *wzVersion,
        UINT *pcchActual);

    HRESULT (STDMETHODCALLTYPE *GetSpecVersion)(
        IWICBitmapCodecInfo *This,
        UINT cchSpecVersion,
        WCHAR *wzSpecVersion,
        UINT *pcchActual);

    HRESULT (STDMETHODCALLTYPE *GetFriendlyName)(
        IWICBitmapCodecInfo *This,
        UINT cchFriendlyName,
        WCHAR *wzFriendlyName,
        UINT *pcchActual);

    /*** IWICBitmapCodecInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *GetContainerFormat)(
        IWICBitmapCodecInfo *This,
        GUID *pguidContainerFormat);

    HRESULT (STDMETHODCALLTYPE *GetPixelFormats)(
        IWICBitmapCodecInfo *This,
        UINT cFormats,
        GUID *pguidPixelFormats,
        UINT *pcActual);

    HRESULT (STDMETHODCALLTYPE *GetColorManagementVersion)(
        IWICBitmapCodecInfo *This,
        UINT cchColorManagementVersion,
        WCHAR *wzColorManagementVersion,
        UINT *pcchActual);

    HRESULT (STDMETHODCALLTYPE *GetDeviceManufacturer)(
        IWICBitmapCodecInfo *This,
        UINT cchDeviceManufacturer,
        WCHAR *wzDeviceManufacturer,
        UINT *pcchActual);

    HRESULT (STDMETHODCALLTYPE *GetDeviceModels)(
        IWICBitmapCodecInfo *This,
        UINT cchDeviceModels,
        WCHAR *wzDeviceModels,
        UINT *pcchActual);

    HRESULT (STDMETHODCALLTYPE *GetMimeTypes)(
        IWICBitmapCodecInfo *This,
        UINT cchMimeTypes,
        WCHAR *wzMimeTypes,
        UINT *pcchActual);

    HRESULT (STDMETHODCALLTYPE *GetFileExtensions)(
        IWICBitmapCodecInfo *This,
        UINT cchFileExtensions,
        WCHAR *wzFileExtensions,
        UINT *pcchActual);

    HRESULT (STDMETHODCALLTYPE *DoesSupportAnimation)(
        IWICBitmapCodecInfo *This,
        BOOL *pfSupportAnimation);

    HRESULT (STDMETHODCALLTYPE *DoesSupportChromakey)(
        IWICBitmapCodecInfo *This,
        BOOL *pfSupportChromakey);

    HRESULT (STDMETHODCALLTYPE *DoesSupportLossless)(
        IWICBitmapCodecInfo *This,
        BOOL *pfSupportLossless);

    HRESULT (STDMETHODCALLTYPE *DoesSupportMultiframe)(
        IWICBitmapCodecInfo *This,
        BOOL *pfSupportMultiframe);

    HRESULT (STDMETHODCALLTYPE *MatchesMimeType)(
        IWICBitmapCodecInfo *This,
        LPCWSTR wzMimeType,
        BOOL *pfMatches);

    END_INTERFACE
} IWICBitmapCodecInfoVtbl;

interface IWICBitmapCodecInfo {
    CONST_VTBL IWICBitmapCodecInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICBitmapCodecInfo_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICBitmapCodecInfo_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICBitmapCodecInfo_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICComponentInfo methods ***/
#define IWICBitmapCodecInfo_GetComponentType(This,pType) \
    ((This)->lpVtbl->GetComponentType(This,pType))
#define IWICBitmapCodecInfo_GetCLSID(This,pclsid) \
    ((This)->lpVtbl->GetCLSID(This,pclsid))
#define IWICBitmapCodecInfo_GetSigningStatus(This,pStatus) \
    ((This)->lpVtbl->GetSigningStatus(This,pStatus))
#define IWICBitmapCodecInfo_GetAuthor(This,cchAuthor,wzAuthor,pcchActual) \
    ((This)->lpVtbl->GetAuthor(This,cchAuthor,wzAuthor,pcchActual))
#define IWICBitmapCodecInfo_GetVendorGUID(This,pguidVendor) \
    ((This)->lpVtbl->GetVendorGUID(This,pguidVendor))
#define IWICBitmapCodecInfo_GetVersion(This,cchVersion,wzVersion,pcchActual) \
    ((This)->lpVtbl->GetVersion(This,cchVersion,wzVersion,pcchActual))
#define IWICBitmapCodecInfo_GetSpecVersion(This,cchSpecVersion,wzSpecVersion,pcchActual) \
    ((This)->lpVtbl->GetSpecVersion(This,cchSpecVersion,wzSpecVersion,pcchActual))
#define IWICBitmapCodecInfo_GetFriendlyName(This,cchFriendlyName,wzFriendlyName,pcchActual) \
    ((This)->lpVtbl->GetFriendlyName(This,cchFriendlyName,wzFriendlyName,pcchActual))
/*** IWICBitmapCodecInfo methods ***/
#define IWICBitmapCodecInfo_GetContainerFormat(This,pguidContainerFormat) \
    ((This)->lpVtbl->GetContainerFormat(This,pguidContainerFormat))
#define IWICBitmapCodecInfo_GetPixelFormats(This,cFormats,pguidPixelFormats,pcActual) \
    ((This)->lpVtbl->GetPixelFormats(This,cFormats,pguidPixelFormats,pcActual))
#define IWICBitmapCodecInfo_GetColorManagementVersion(This,cchColorManagementVersion,wzColorManagementVersion,pcchActual) \
    ((This)->lpVtbl->GetColorManagementVersion(This,cchColorManagementVersion,wzColorManagementVersion,pcchActual))
#define IWICBitmapCodecInfo_GetDeviceManufacturer(This,cchDeviceManufacturer,wzDeviceManufacturer,pcchActual) \
    ((This)->lpVtbl->GetDeviceManufacturer(This,cchDeviceManufacturer,wzDeviceManufacturer,pcchActual))
#define IWICBitmapCodecInfo_GetDeviceModels(This,cchDeviceModels,wzDeviceModels,pcchActual) \
    ((This)->lpVtbl->GetDeviceModels(This,cchDeviceModels,wzDeviceModels,pcchActual))
#define IWICBitmapCodecInfo_GetMimeTypes(This,cchMimeTypes,wzMimeTypes,pcchActual) \
    ((This)->lpVtbl->GetMimeTypes(This,cchMimeTypes,wzMimeTypes,pcchActual))
#define IWICBitmapCodecInfo_GetFileExtensions(This,cchFileExtensions,wzFileExtensions,pcchActual) \
    ((This)->lpVtbl->GetFileExtensions(This,cchFileExtensions,wzFileExtensions,pcchActual))
#define IWICBitmapCodecInfo_DoesSupportAnimation(This,pfSupportAnimation) \
    ((This)->lpVtbl->DoesSupportAnimation(This,pfSupportAnimation))
#define IWICBitmapCodecInfo_DoesSupportChromakey(This,pfSupportChromakey) \
    ((This)->lpVtbl->DoesSupportChromakey(This,pfSupportChromakey))
#define IWICBitmapCodecInfo_DoesSupportLossless(This,pfSupportLossless) \
    ((This)->lpVtbl->DoesSupportLossless(This,pfSupportLossless))
#define IWICBitmapCodecInfo_DoesSupportMultiframe(This,pfSupportMultiframe) \
    ((This)->lpVtbl->DoesSupportMultiframe(This,pfSupportMultiframe))
#define IWICBitmapCodecInfo_MatchesMimeType(This,wzMimeType,pfMatches) \
    ((This)->lpVtbl->MatchesMimeType(This,wzMimeType,pfMatches))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWICBitmapCodecInfo_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWICBitmapEncoderInfo interface
 */
#ifndef __IWICBitmapEncoderInfo_INTERFACE_DEFINED__
#define __IWICBitmapEncoderInfo_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICBitmapEncoderInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICBitmapEncoderInfoVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICBitmapEncoderInfo *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICBitmapEncoderInfo *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICBitmapEncoderInfo *This);

    /*** IWICComponentInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *GetComponentType)(
        IWICBitmapEncoderInfo *This,
        WICComponentType *pType);

    HRESULT (STDMETHODCALLTYPE *GetCLSID)(
        IWICBitmapEncoderInfo *This,
        CLSID *pclsid);

    HRESULT (STDMETHODCALLTYPE *GetSigningStatus)(
        IWICBitmapEncoderInfo *This,
        DWORD *pStatus);

    HRESULT (STDMETHODCALLTYPE *GetAuthor)(
        IWICBitmapEncoderInfo *This,
        UINT cchAuthor,
        WCHAR *wzAuthor,
        UINT *pcchActual);

    HRESULT (STDMETHODCALLTYPE *GetVendorGUID)(
        IWICBitmapEncoderInfo *This,
        GUID *pguidVendor);

    HRESULT (STDMETHODCALLTYPE *GetVersion)(
        IWICBitmapEncoderInfo *This,
        UINT cchVersion,
        WCHAR *wzVersion,
        UINT *pcchActual);

    HRESULT (STDMETHODCALLTYPE *GetSpecVersion)(
        IWICBitmapEncoderInfo *This,
        UINT cchSpecVersion,
        WCHAR *wzSpecVersion,
        UINT *pcchActual);

    HRESULT (STDMETHODCALLTYPE *GetFriendlyName)(
        IWICBitmapEncoderInfo *This,
        UINT cchFriendlyName,
        WCHAR *wzFriendlyName,
        UINT *pcchActual);

    /*** IWICBitmapCodecInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *GetContainerFormat)(
        IWICBitmapEncoderInfo *This,
        GUID *pguidContainerFormat);

    HRESULT (STDMETHODCALLTYPE *GetPixelFormats)(
        IWICBitmapEncoderInfo *This,
        UINT cFormats,
        GUID *pguidPixelFormats,
        UINT *pcActual);

    HRESULT (STDMETHODCALLTYPE *GetColorManagementVersion)(
        IWICBitmapEncoderInfo *This,
        UINT cchColorManagementVersion,
        WCHAR *wzColorManagementVersion,
        UINT *pcchActual);

    HRESULT (STDMETHODCALLTYPE *GetDeviceManufacturer)(
        IWICBitmapEncoderInfo *This,
        UINT cchDeviceManufacturer,
        WCHAR *wzDeviceManufacturer,
        UINT *pcchActual);

    HRESULT (STDMETHODCALLTYPE *GetDeviceModels)(
        IWICBitmapEncoderInfo *This,
        UINT cchDeviceModels,
        WCHAR *wzDeviceModels,
        UINT *pcchActual);

    HRESULT (STDMETHODCALLTYPE *GetMimeTypes)(
        IWICBitmapEncoderInfo *This,
        UINT cchMimeTypes,
        WCHAR *wzMimeTypes,
        UINT *pcchActual);

    HRESULT (STDMETHODCALLTYPE *GetFileExtensions)(
        IWICBitmapEncoderInfo *This,
        UINT cchFileExtensions,
        WCHAR *wzFileExtensions,
        UINT *pcchActual);

    HRESULT (STDMETHODCALLTYPE *DoesSupportAnimation)(
        IWICBitmapEncoderInfo *This,
        BOOL *pfSupportAnimation);

    HRESULT (STDMETHODCALLTYPE *DoesSupportChromakey)(
        IWICBitmapEncoderInfo *This,
        BOOL *pfSupportChromakey);

    HRESULT (STDMETHODCALLTYPE *DoesSupportLossless)(
        IWICBitmapEncoderInfo *This,
        BOOL *pfSupportLossless);

    HRESULT (STDMETHODCALLTYPE *DoesSupportMultiframe)(
        IWICBitmapEncoderInfo *This,
        BOOL *pfSupportMultiframe);

    HRESULT (STDMETHODCALLTYPE *MatchesMimeType)(
        IWICBitmapEncoderInfo *This,
        LPCWSTR wzMimeType,
        BOOL *pfMatches);

    /*** IWICBitmapEncoderInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateInstance)(
        IWICBitmapEncoderInfo *This,
        IWICBitmapEncoder **ppIBitmapEncoder);

    END_INTERFACE
} IWICBitmapEncoderInfoVtbl;

interface IWICBitmapEncoderInfo {
    CONST_VTBL IWICBitmapEncoderInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICBitmapEncoderInfo_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICBitmapEncoderInfo_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICBitmapEncoderInfo_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICComponentInfo methods ***/
#define IWICBitmapEncoderInfo_GetComponentType(This,pType) \
    ((This)->lpVtbl->GetComponentType(This,pType))
#define IWICBitmapEncoderInfo_GetCLSID(This,pclsid) \
    ((This)->lpVtbl->GetCLSID(This,pclsid))
#define IWICBitmapEncoderInfo_GetSigningStatus(This,pStatus) \
    ((This)->lpVtbl->GetSigningStatus(This,pStatus))
#define IWICBitmapEncoderInfo_GetAuthor(This,cchAuthor,wzAuthor,pcchActual) \
    ((This)->lpVtbl->GetAuthor(This,cchAuthor,wzAuthor,pcchActual))
#define IWICBitmapEncoderInfo_GetVendorGUID(This,pguidVendor) \
    ((This)->lpVtbl->GetVendorGUID(This,pguidVendor))
#define IWICBitmapEncoderInfo_GetVersion(This,cchVersion,wzVersion,pcchActual) \
    ((This)->lpVtbl->GetVersion(This,cchVersion,wzVersion,pcchActual))
#define IWICBitmapEncoderInfo_GetSpecVersion(This,cchSpecVersion,wzSpecVersion,pcchActual) \
    ((This)->lpVtbl->GetSpecVersion(This,cchSpecVersion,wzSpecVersion,pcchActual))
#define IWICBitmapEncoderInfo_GetFriendlyName(This,cchFriendlyName,wzFriendlyName,pcchActual) \
    ((This)->lpVtbl->GetFriendlyName(This,cchFriendlyName,wzFriendlyName,pcchActual))
/*** IWICBitmapCodecInfo methods ***/
#define IWICBitmapEncoderInfo_GetContainerFormat(This,pguidContainerFormat) \
    ((This)->lpVtbl->GetContainerFormat(This,pguidContainerFormat))
#define IWICBitmapEncoderInfo_GetPixelFormats(This,cFormats,pguidPixelFormats,pcActual) \
    ((This)->lpVtbl->GetPixelFormats(This,cFormats,pguidPixelFormats,pcActual))
#define IWICBitmapEncoderInfo_GetColorManagementVersion(This,cchColorManagementVersion,wzColorManagementVersion,pcchActual) \
    ((This)->lpVtbl->GetColorManagementVersion(This,cchColorManagementVersion,wzColorManagementVersion,pcchActual))
#define IWICBitmapEncoderInfo_GetDeviceManufacturer(This,cchDeviceManufacturer,wzDeviceManufacturer,pcchActual) \
    ((This)->lpVtbl->GetDeviceManufacturer(This,cchDeviceManufacturer,wzDeviceManufacturer,pcchActual))
#define IWICBitmapEncoderInfo_GetDeviceModels(This,cchDeviceModels,wzDeviceModels,pcchActual) \
    ((This)->lpVtbl->GetDeviceModels(This,cchDeviceModels,wzDeviceModels,pcchActual))
#define IWICBitmapEncoderInfo_GetMimeTypes(This,cchMimeTypes,wzMimeTypes,pcchActual) \
    ((This)->lpVtbl->GetMimeTypes(This,cchMimeTypes,wzMimeTypes,pcchActual))
#define IWICBitmapEncoderInfo_GetFileExtensions(This,cchFileExtensions,wzFileExtensions,pcchActual) \
    ((This)->lpVtbl->GetFileExtensions(This,cchFileExtensions,wzFileExtensions,pcchActual))
#define IWICBitmapEncoderInfo_DoesSupportAnimation(This,pfSupportAnimation) \
    ((This)->lpVtbl->DoesSupportAnimation(This,pfSupportAnimation))
#define IWICBitmapEncoderInfo_DoesSupportChromakey(This,pfSupportChromakey) \
    ((This)->lpVtbl->DoesSupportChromakey(This,pfSupportChromakey))
#define IWICBitmapEncoderInfo_DoesSupportLossless(This,pfSupportLossless) \
    ((This)->lpVtbl->DoesSupportLossless(This,pfSupportLossless))
#define IWICBitmapEncoderInfo_DoesSupportMultiframe(This,pfSupportMultiframe) \
    ((This)->lpVtbl->DoesSupportMultiframe(This,pfSupportMultiframe))
#define IWICBitmapEncoderInfo_MatchesMimeType(This,wzMimeType,pfMatches) \
    ((This)->lpVtbl->MatchesMimeType(This,wzMimeType,pfMatches))
/*** IWICBitmapEncoderInfo methods ***/
#define IWICBitmapEncoderInfo_CreateInstance(This,ppIBitmapEncoder) \
    ((This)->lpVtbl->CreateInstance(This,ppIBitmapEncoder))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWICBitmapEncoderInfo_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWICBitmapDecoderInfo interface
 */
#ifndef __IWICBitmapDecoderInfo_INTERFACE_DEFINED__
#define __IWICBitmapDecoderInfo_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICBitmapDecoderInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICBitmapDecoderInfoVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICBitmapDecoderInfo *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICBitmapDecoderInfo *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICBitmapDecoderInfo *This);

    /*** IWICComponentInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *GetComponentType)(
        IWICBitmapDecoderInfo *This,
        WICComponentType *pType);

    HRESULT (STDMETHODCALLTYPE *GetCLSID)(
        IWICBitmapDecoderInfo *This,
        CLSID *pclsid);

    HRESULT (STDMETHODCALLTYPE *GetSigningStatus)(
        IWICBitmapDecoderInfo *This,
        DWORD *pStatus);

    HRESULT (STDMETHODCALLTYPE *GetAuthor)(
        IWICBitmapDecoderInfo *This,
        UINT cchAuthor,
        WCHAR *wzAuthor,
        UINT *pcchActual);

    HRESULT (STDMETHODCALLTYPE *GetVendorGUID)(
        IWICBitmapDecoderInfo *This,
        GUID *pguidVendor);

    HRESULT (STDMETHODCALLTYPE *GetVersion)(
        IWICBitmapDecoderInfo *This,
        UINT cchVersion,
        WCHAR *wzVersion,
        UINT *pcchActual);

    HRESULT (STDMETHODCALLTYPE *GetSpecVersion)(
        IWICBitmapDecoderInfo *This,
        UINT cchSpecVersion,
        WCHAR *wzSpecVersion,
        UINT *pcchActual);

    HRESULT (STDMETHODCALLTYPE *GetFriendlyName)(
        IWICBitmapDecoderInfo *This,
        UINT cchFriendlyName,
        WCHAR *wzFriendlyName,
        UINT *pcchActual);

    /*** IWICBitmapCodecInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *GetContainerFormat)(
        IWICBitmapDecoderInfo *This,
        GUID *pguidContainerFormat);

    HRESULT (STDMETHODCALLTYPE *GetPixelFormats)(
        IWICBitmapDecoderInfo *This,
        UINT cFormats,
        GUID *pguidPixelFormats,
        UINT *pcActual);

    HRESULT (STDMETHODCALLTYPE *GetColorManagementVersion)(
        IWICBitmapDecoderInfo *This,
        UINT cchColorManagementVersion,
        WCHAR *wzColorManagementVersion,
        UINT *pcchActual);

    HRESULT (STDMETHODCALLTYPE *GetDeviceManufacturer)(
        IWICBitmapDecoderInfo *This,
        UINT cchDeviceManufacturer,
        WCHAR *wzDeviceManufacturer,
        UINT *pcchActual);

    HRESULT (STDMETHODCALLTYPE *GetDeviceModels)(
        IWICBitmapDecoderInfo *This,
        UINT cchDeviceModels,
        WCHAR *wzDeviceModels,
        UINT *pcchActual);

    HRESULT (STDMETHODCALLTYPE *GetMimeTypes)(
        IWICBitmapDecoderInfo *This,
        UINT cchMimeTypes,
        WCHAR *wzMimeTypes,
        UINT *pcchActual);

    HRESULT (STDMETHODCALLTYPE *GetFileExtensions)(
        IWICBitmapDecoderInfo *This,
        UINT cchFileExtensions,
        WCHAR *wzFileExtensions,
        UINT *pcchActual);

    HRESULT (STDMETHODCALLTYPE *DoesSupportAnimation)(
        IWICBitmapDecoderInfo *This,
        BOOL *pfSupportAnimation);

    HRESULT (STDMETHODCALLTYPE *DoesSupportChromakey)(
        IWICBitmapDecoderInfo *This,
        BOOL *pfSupportChromakey);

    HRESULT (STDMETHODCALLTYPE *DoesSupportLossless)(
        IWICBitmapDecoderInfo *This,
        BOOL *pfSupportLossless);

    HRESULT (STDMETHODCALLTYPE *DoesSupportMultiframe)(
        IWICBitmapDecoderInfo *This,
        BOOL *pfSupportMultiframe);

    HRESULT (STDMETHODCALLTYPE *MatchesMimeType)(
        IWICBitmapDecoderInfo *This,
        LPCWSTR wzMimeType,
        BOOL *pfMatches);

    /*** IWICBitmapDecoderInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *GetPatterns)(
        IWICBitmapDecoderInfo *This,
        UINT cbSizePatterns,
        WICBitmapPattern *pPatterns,
        UINT *pcPatterns,
        UINT *pcbPatternsActual);

    HRESULT (STDMETHODCALLTYPE *MatchesPattern)(
        IWICBitmapDecoderInfo *This,
        IStream *pIStream,
        BOOL *pfMatches);

    HRESULT (STDMETHODCALLTYPE *CreateInstance)(
        IWICBitmapDecoderInfo *This,
        IWICBitmapDecoder **ppIBitmapDecoder);

    END_INTERFACE
} IWICBitmapDecoderInfoVtbl;

interface IWICBitmapDecoderInfo {
    CONST_VTBL IWICBitmapDecoderInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICBitmapDecoderInfo_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICBitmapDecoderInfo_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICBitmapDecoderInfo_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICComponentInfo methods ***/
#define IWICBitmapDecoderInfo_GetComponentType(This,pType) \
    ((This)->lpVtbl->GetComponentType(This,pType))
#define IWICBitmapDecoderInfo_GetCLSID(This,pclsid) \
    ((This)->lpVtbl->GetCLSID(This,pclsid))
#define IWICBitmapDecoderInfo_GetSigningStatus(This,pStatus) \
    ((This)->lpVtbl->GetSigningStatus(This,pStatus))
#define IWICBitmapDecoderInfo_GetAuthor(This,cchAuthor,wzAuthor,pcchActual) \
    ((This)->lpVtbl->GetAuthor(This,cchAuthor,wzAuthor,pcchActual))
#define IWICBitmapDecoderInfo_GetVendorGUID(This,pguidVendor) \
    ((This)->lpVtbl->GetVendorGUID(This,pguidVendor))
#define IWICBitmapDecoderInfo_GetVersion(This,cchVersion,wzVersion,pcchActual) \
    ((This)->lpVtbl->GetVersion(This,cchVersion,wzVersion,pcchActual))
#define IWICBitmapDecoderInfo_GetSpecVersion(This,cchSpecVersion,wzSpecVersion,pcchActual) \
    ((This)->lpVtbl->GetSpecVersion(This,cchSpecVersion,wzSpecVersion,pcchActual))
#define IWICBitmapDecoderInfo_GetFriendlyName(This,cchFriendlyName,wzFriendlyName,pcchActual) \
    ((This)->lpVtbl->GetFriendlyName(This,cchFriendlyName,wzFriendlyName,pcchActual))
/*** IWICBitmapCodecInfo methods ***/
#define IWICBitmapDecoderInfo_GetContainerFormat(This,pguidContainerFormat) \
    ((This)->lpVtbl->GetContainerFormat(This,pguidContainerFormat))
#define IWICBitmapDecoderInfo_GetPixelFormats(This,cFormats,pguidPixelFormats,pcActual) \
    ((This)->lpVtbl->GetPixelFormats(This,cFormats,pguidPixelFormats,pcActual))
#define IWICBitmapDecoderInfo_GetColorManagementVersion(This,cchColorManagementVersion,wzColorManagementVersion,pcchActual) \
    ((This)->lpVtbl->GetColorManagementVersion(This,cchColorManagementVersion,wzColorManagementVersion,pcchActual))
#define IWICBitmapDecoderInfo_GetDeviceManufacturer(This,cchDeviceManufacturer,wzDeviceManufacturer,pcchActual) \
    ((This)->lpVtbl->GetDeviceManufacturer(This,cchDeviceManufacturer,wzDeviceManufacturer,pcchActual))
#define IWICBitmapDecoderInfo_GetDeviceModels(This,cchDeviceModels,wzDeviceModels,pcchActual) \
    ((This)->lpVtbl->GetDeviceModels(This,cchDeviceModels,wzDeviceModels,pcchActual))
#define IWICBitmapDecoderInfo_GetMimeTypes(This,cchMimeTypes,wzMimeTypes,pcchActual) \
    ((This)->lpVtbl->GetMimeTypes(This,cchMimeTypes,wzMimeTypes,pcchActual))
#define IWICBitmapDecoderInfo_GetFileExtensions(This,cchFileExtensions,wzFileExtensions,pcchActual) \
    ((This)->lpVtbl->GetFileExtensions(This,cchFileExtensions,wzFileExtensions,pcchActual))
#define IWICBitmapDecoderInfo_DoesSupportAnimation(This,pfSupportAnimation) \
    ((This)->lpVtbl->DoesSupportAnimation(This,pfSupportAnimation))
#define IWICBitmapDecoderInfo_DoesSupportChromakey(This,pfSupportChromakey) \
    ((This)->lpVtbl->DoesSupportChromakey(This,pfSupportChromakey))
#define IWICBitmapDecoderInfo_DoesSupportLossless(This,pfSupportLossless) \
    ((This)->lpVtbl->DoesSupportLossless(This,pfSupportLossless))
#define IWICBitmapDecoderInfo_DoesSupportMultiframe(This,pfSupportMultiframe) \
    ((This)->lpVtbl->DoesSupportMultiframe(This,pfSupportMultiframe))
#define IWICBitmapDecoderInfo_MatchesMimeType(This,wzMimeType,pfMatches) \
    ((This)->lpVtbl->MatchesMimeType(This,wzMimeType,pfMatches))
/*** IWICBitmapDecoderInfo methods ***/
#define IWICBitmapDecoderInfo_GetPatterns(This,cbSizePatterns,pPatterns,pcPatterns,pcbPatternsActual) \
    ((This)->lpVtbl->GetPatterns(This,cbSizePatterns,pPatterns,pcPatterns,pcbPatternsActual))
#define IWICBitmapDecoderInfo_MatchesPattern(This,pIStream,pfMatches) \
    ((This)->lpVtbl->MatchesPattern(This,pIStream,pfMatches))
#define IWICBitmapDecoderInfo_CreateInstance(This,ppIBitmapDecoder) \
    ((This)->lpVtbl->CreateInstance(This,ppIBitmapDecoder))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IWICBitmapDecoderInfo_Remote_GetPatterns_Proxy(
    IWICBitmapDecoderInfo *This,
    WICBitmapPattern **ppPatterns,
    UINT *pcPatterns);

void __RPC_STUB IWICBitmapDecoderInfo_Remote_GetPatterns_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IWICBitmapDecoderInfo_GetPatterns_Proxy(
    UINT cbSizePatterns,
    WICBitmapPattern *pPatterns,
    UINT *pcPatterns,
    UINT *pcbPatternsActual);
HRESULT IWICBitmapDecoderInfo_GetPatterns_Stub(
    WICBitmapPattern **ppPatterns,
    UINT *pcPatterns);
#endif /* __IWICBitmapDecoderInfo_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWICPixelFormatInfo interface
 */
#ifndef __IWICPixelFormatInfo_INTERFACE_DEFINED__
#define __IWICPixelFormatInfo_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICPixelFormatInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICPixelFormatInfoVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICPixelFormatInfo *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICPixelFormatInfo *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICPixelFormatInfo *This);

    /*** IWICComponentInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *GetComponentType)(
        IWICPixelFormatInfo *This,
        WICComponentType *pType);

    HRESULT (STDMETHODCALLTYPE *GetCLSID)(
        IWICPixelFormatInfo *This,
        CLSID *pclsid);

    HRESULT (STDMETHODCALLTYPE *GetSigningStatus)(
        IWICPixelFormatInfo *This,
        DWORD *pStatus);

    HRESULT (STDMETHODCALLTYPE *GetAuthor)(
        IWICPixelFormatInfo *This,
        UINT cchAuthor,
        WCHAR *wzAuthor,
        UINT *pcchActual);

    HRESULT (STDMETHODCALLTYPE *GetVendorGUID)(
        IWICPixelFormatInfo *This,
        GUID *pguidVendor);

    HRESULT (STDMETHODCALLTYPE *GetVersion)(
        IWICPixelFormatInfo *This,
        UINT cchVersion,
        WCHAR *wzVersion,
        UINT *pcchActual);

    HRESULT (STDMETHODCALLTYPE *GetSpecVersion)(
        IWICPixelFormatInfo *This,
        UINT cchSpecVersion,
        WCHAR *wzSpecVersion,
        UINT *pcchActual);

    HRESULT (STDMETHODCALLTYPE *GetFriendlyName)(
        IWICPixelFormatInfo *This,
        UINT cchFriendlyName,
        WCHAR *wzFriendlyName,
        UINT *pcchActual);

    /*** IWICPixelFormatInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *GetFormatGUID)(
        IWICPixelFormatInfo *This,
        GUID *pFormat);

    HRESULT (STDMETHODCALLTYPE *GetColorContext)(
        IWICPixelFormatInfo *This,
        IWICColorContext **ppIColorContext);

    HRESULT (STDMETHODCALLTYPE *GetBitsPerPixel)(
        IWICPixelFormatInfo *This,
        UINT *puiBitsPerPixel);

    HRESULT (STDMETHODCALLTYPE *GetChannelCount)(
        IWICPixelFormatInfo *This,
        UINT *puiChannelCount);

    HRESULT (STDMETHODCALLTYPE *GetChannelMask)(
        IWICPixelFormatInfo *This,
        UINT uiChannelIndex,
        UINT cbMaskBuffer,
        BYTE *pbMaskBuffer,
        UINT *pcbActual);

    END_INTERFACE
} IWICPixelFormatInfoVtbl;

interface IWICPixelFormatInfo {
    CONST_VTBL IWICPixelFormatInfoVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICPixelFormatInfo_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICPixelFormatInfo_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICPixelFormatInfo_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICComponentInfo methods ***/
#define IWICPixelFormatInfo_GetComponentType(This,pType) \
    ((This)->lpVtbl->GetComponentType(This,pType))
#define IWICPixelFormatInfo_GetCLSID(This,pclsid) \
    ((This)->lpVtbl->GetCLSID(This,pclsid))
#define IWICPixelFormatInfo_GetSigningStatus(This,pStatus) \
    ((This)->lpVtbl->GetSigningStatus(This,pStatus))
#define IWICPixelFormatInfo_GetAuthor(This,cchAuthor,wzAuthor,pcchActual) \
    ((This)->lpVtbl->GetAuthor(This,cchAuthor,wzAuthor,pcchActual))
#define IWICPixelFormatInfo_GetVendorGUID(This,pguidVendor) \
    ((This)->lpVtbl->GetVendorGUID(This,pguidVendor))
#define IWICPixelFormatInfo_GetVersion(This,cchVersion,wzVersion,pcchActual) \
    ((This)->lpVtbl->GetVersion(This,cchVersion,wzVersion,pcchActual))
#define IWICPixelFormatInfo_GetSpecVersion(This,cchSpecVersion,wzSpecVersion,pcchActual) \
    ((This)->lpVtbl->GetSpecVersion(This,cchSpecVersion,wzSpecVersion,pcchActual))
#define IWICPixelFormatInfo_GetFriendlyName(This,cchFriendlyName,wzFriendlyName,pcchActual) \
    ((This)->lpVtbl->GetFriendlyName(This,cchFriendlyName,wzFriendlyName,pcchActual))
/*** IWICPixelFormatInfo methods ***/
#define IWICPixelFormatInfo_GetFormatGUID(This,pFormat) \
    ((This)->lpVtbl->GetFormatGUID(This,pFormat))
#define IWICPixelFormatInfo_GetColorContext(This,ppIColorContext) \
    ((This)->lpVtbl->GetColorContext(This,ppIColorContext))
#define IWICPixelFormatInfo_GetBitsPerPixel(This,puiBitsPerPixel) \
    ((This)->lpVtbl->GetBitsPerPixel(This,puiBitsPerPixel))
#define IWICPixelFormatInfo_GetChannelCount(This,puiChannelCount) \
    ((This)->lpVtbl->GetChannelCount(This,puiChannelCount))
#define IWICPixelFormatInfo_GetChannelMask(This,uiChannelIndex,cbMaskBuffer,pbMaskBuffer,pcbActual) \
    ((This)->lpVtbl->GetChannelMask(This,uiChannelIndex,cbMaskBuffer,pbMaskBuffer,pcbActual))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWICPixelFormatInfo_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWICPixelFormatInfo2 interface
 */
#ifndef __IWICPixelFormatInfo2_INTERFACE_DEFINED__
#define __IWICPixelFormatInfo2_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICPixelFormatInfo2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICPixelFormatInfo2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICPixelFormatInfo2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICPixelFormatInfo2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICPixelFormatInfo2 *This);

    /*** IWICComponentInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *GetComponentType)(
        IWICPixelFormatInfo2 *This,
        WICComponentType *pType);

    HRESULT (STDMETHODCALLTYPE *GetCLSID)(
        IWICPixelFormatInfo2 *This,
        CLSID *pclsid);

    HRESULT (STDMETHODCALLTYPE *GetSigningStatus)(
        IWICPixelFormatInfo2 *This,
        DWORD *pStatus);

    HRESULT (STDMETHODCALLTYPE *GetAuthor)(
        IWICPixelFormatInfo2 *This,
        UINT cchAuthor,
        WCHAR *wzAuthor,
        UINT *pcchActual);

    HRESULT (STDMETHODCALLTYPE *GetVendorGUID)(
        IWICPixelFormatInfo2 *This,
        GUID *pguidVendor);

    HRESULT (STDMETHODCALLTYPE *GetVersion)(
        IWICPixelFormatInfo2 *This,
        UINT cchVersion,
        WCHAR *wzVersion,
        UINT *pcchActual);

    HRESULT (STDMETHODCALLTYPE *GetSpecVersion)(
        IWICPixelFormatInfo2 *This,
        UINT cchSpecVersion,
        WCHAR *wzSpecVersion,
        UINT *pcchActual);

    HRESULT (STDMETHODCALLTYPE *GetFriendlyName)(
        IWICPixelFormatInfo2 *This,
        UINT cchFriendlyName,
        WCHAR *wzFriendlyName,
        UINT *pcchActual);

    /*** IWICPixelFormatInfo methods ***/
    HRESULT (STDMETHODCALLTYPE *GetFormatGUID)(
        IWICPixelFormatInfo2 *This,
        GUID *pFormat);

    HRESULT (STDMETHODCALLTYPE *GetColorContext)(
        IWICPixelFormatInfo2 *This,
        IWICColorContext **ppIColorContext);

    HRESULT (STDMETHODCALLTYPE *GetBitsPerPixel)(
        IWICPixelFormatInfo2 *This,
        UINT *puiBitsPerPixel);

    HRESULT (STDMETHODCALLTYPE *GetChannelCount)(
        IWICPixelFormatInfo2 *This,
        UINT *puiChannelCount);

    HRESULT (STDMETHODCALLTYPE *GetChannelMask)(
        IWICPixelFormatInfo2 *This,
        UINT uiChannelIndex,
        UINT cbMaskBuffer,
        BYTE *pbMaskBuffer,
        UINT *pcbActual);

    /*** IWICPixelFormatInfo2 methods ***/
    HRESULT (STDMETHODCALLTYPE *SupportsTransparency)(
        IWICPixelFormatInfo2 *This,
        BOOL *pfSupportsTransparency);

    HRESULT (STDMETHODCALLTYPE *GetNumericRepresentation)(
        IWICPixelFormatInfo2 *This,
        WICPixelFormatNumericRepresentation *pNumericRepresentation);

    END_INTERFACE
} IWICPixelFormatInfo2Vtbl;

interface IWICPixelFormatInfo2 {
    CONST_VTBL IWICPixelFormatInfo2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICPixelFormatInfo2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICPixelFormatInfo2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICPixelFormatInfo2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICComponentInfo methods ***/
#define IWICPixelFormatInfo2_GetComponentType(This,pType) \
    ((This)->lpVtbl->GetComponentType(This,pType))
#define IWICPixelFormatInfo2_GetCLSID(This,pclsid) \
    ((This)->lpVtbl->GetCLSID(This,pclsid))
#define IWICPixelFormatInfo2_GetSigningStatus(This,pStatus) \
    ((This)->lpVtbl->GetSigningStatus(This,pStatus))
#define IWICPixelFormatInfo2_GetAuthor(This,cchAuthor,wzAuthor,pcchActual) \
    ((This)->lpVtbl->GetAuthor(This,cchAuthor,wzAuthor,pcchActual))
#define IWICPixelFormatInfo2_GetVendorGUID(This,pguidVendor) \
    ((This)->lpVtbl->GetVendorGUID(This,pguidVendor))
#define IWICPixelFormatInfo2_GetVersion(This,cchVersion,wzVersion,pcchActual) \
    ((This)->lpVtbl->GetVersion(This,cchVersion,wzVersion,pcchActual))
#define IWICPixelFormatInfo2_GetSpecVersion(This,cchSpecVersion,wzSpecVersion,pcchActual) \
    ((This)->lpVtbl->GetSpecVersion(This,cchSpecVersion,wzSpecVersion,pcchActual))
#define IWICPixelFormatInfo2_GetFriendlyName(This,cchFriendlyName,wzFriendlyName,pcchActual) \
    ((This)->lpVtbl->GetFriendlyName(This,cchFriendlyName,wzFriendlyName,pcchActual))
/*** IWICPixelFormatInfo methods ***/
#define IWICPixelFormatInfo2_GetFormatGUID(This,pFormat) \
    ((This)->lpVtbl->GetFormatGUID(This,pFormat))
#define IWICPixelFormatInfo2_GetColorContext(This,ppIColorContext) \
    ((This)->lpVtbl->GetColorContext(This,ppIColorContext))
#define IWICPixelFormatInfo2_GetBitsPerPixel(This,puiBitsPerPixel) \
    ((This)->lpVtbl->GetBitsPerPixel(This,puiBitsPerPixel))
#define IWICPixelFormatInfo2_GetChannelCount(This,puiChannelCount) \
    ((This)->lpVtbl->GetChannelCount(This,puiChannelCount))
#define IWICPixelFormatInfo2_GetChannelMask(This,uiChannelIndex,cbMaskBuffer,pbMaskBuffer,pcbActual) \
    ((This)->lpVtbl->GetChannelMask(This,uiChannelIndex,cbMaskBuffer,pbMaskBuffer,pcbActual))
/*** IWICPixelFormatInfo2 methods ***/
#define IWICPixelFormatInfo2_SupportsTransparency(This,pfSupportsTransparency) \
    ((This)->lpVtbl->SupportsTransparency(This,pfSupportsTransparency))
#define IWICPixelFormatInfo2_GetNumericRepresentation(This,pNumericRepresentation) \
    ((This)->lpVtbl->GetNumericRepresentation(This,pNumericRepresentation))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWICPixelFormatInfo2_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWICImagingFactory interface
 */
#ifndef __IWICImagingFactory_INTERFACE_DEFINED__
#define __IWICImagingFactory_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICImagingFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICImagingFactoryVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICImagingFactory *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICImagingFactory *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICImagingFactory *This);

    /*** IWICImagingFactory methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateDecoderFromFilename)(
        IWICImagingFactory *This,
        LPCWSTR wzFilename,
        const GUID *pguidVendor,
        DWORD dwDesiredAccess,
        WICDecodeOptions metadataOptions,
        IWICBitmapDecoder **ppIDecoder);

    HRESULT (STDMETHODCALLTYPE *CreateDecoderFromStream)(
        IWICImagingFactory *This,
        IStream *pIStream,
        const GUID *pguidVendor,
        WICDecodeOptions metadataOptions,
        IWICBitmapDecoder **ppIDecoder);

    HRESULT (STDMETHODCALLTYPE *CreateDecoderFromFileHandle)(
        IWICImagingFactory *This,
        ULONG_PTR hFile,
        const GUID *pguidVendor,
        WICDecodeOptions metadataOptions,
        IWICBitmapDecoder **ppIDecoder);

    HRESULT (STDMETHODCALLTYPE *CreateComponentInfo)(
        IWICImagingFactory *This,
        REFCLSID clsidComponent,
        IWICComponentInfo **ppIInfo);

    HRESULT (STDMETHODCALLTYPE *CreateDecoder)(
        IWICImagingFactory *This,
        REFGUID guidContainerFormat,
        const GUID *pguidVendor,
        IWICBitmapDecoder **ppIDecoder);

    HRESULT (STDMETHODCALLTYPE *CreateEncoder)(
        IWICImagingFactory *This,
        REFGUID guidContainerFormat,
        const GUID *pguidVendor,
        IWICBitmapEncoder **ppIEncoder);

    HRESULT (STDMETHODCALLTYPE *CreatePalette)(
        IWICImagingFactory *This,
        IWICPalette **ppIPalette);

    HRESULT (STDMETHODCALLTYPE *CreateFormatConverter)(
        IWICImagingFactory *This,
        IWICFormatConverter **ppIFormatConverter);

    HRESULT (STDMETHODCALLTYPE *CreateBitmapScaler)(
        IWICImagingFactory *This,
        IWICBitmapScaler **ppIBitmapScaler);

    HRESULT (STDMETHODCALLTYPE *CreateBitmapClipper)(
        IWICImagingFactory *This,
        IWICBitmapClipper **ppIBitmapClipper);

    HRESULT (STDMETHODCALLTYPE *CreateBitmapFlipRotator)(
        IWICImagingFactory *This,
        IWICBitmapFlipRotator **ppIBitmapFlipRotator);

    HRESULT (STDMETHODCALLTYPE *CreateStream)(
        IWICImagingFactory *This,
        IWICStream **ppIWICStream);

    HRESULT (STDMETHODCALLTYPE *CreateColorContext)(
        IWICImagingFactory *This,
        IWICColorContext **ppIWICColorContext);

    HRESULT (STDMETHODCALLTYPE *CreateColorTransformer)(
        IWICImagingFactory *This,
        IWICColorTransform **ppIWICColorTransform);

    HRESULT (STDMETHODCALLTYPE *CreateBitmap)(
        IWICImagingFactory *This,
        UINT uiWidth,
        UINT uiHeight,
        REFWICPixelFormatGUID pixelFormat,
        WICBitmapCreateCacheOption option,
        IWICBitmap **ppIBitmap);

    HRESULT (STDMETHODCALLTYPE *CreateBitmapFromSource)(
        IWICImagingFactory *This,
        IWICBitmapSource *pIBitmapSource,
        WICBitmapCreateCacheOption option,
        IWICBitmap **ppIBitmap);

    HRESULT (STDMETHODCALLTYPE *CreateBitmapFromSourceRect)(
        IWICImagingFactory *This,
        IWICBitmapSource *pIBitmapSource,
        UINT x,
        UINT y,
        UINT width,
        UINT height,
        IWICBitmap **ppIBitmap);

    HRESULT (STDMETHODCALLTYPE *CreateBitmapFromMemory)(
        IWICImagingFactory *This,
        UINT uiWidth,
        UINT uiHeight,
        REFWICPixelFormatGUID pixelFormat,
        UINT cbStride,
        UINT cbBufferSize,
        BYTE *pbBuffer,
        IWICBitmap **ppIBitmap);

    HRESULT (STDMETHODCALLTYPE *CreateBitmapFromHBITMAP)(
        IWICImagingFactory *This,
        HBITMAP hBitmap,
        HPALETTE hPalette,
        WICBitmapAlphaChannelOption options,
        IWICBitmap **ppIBitmap);

    HRESULT (STDMETHODCALLTYPE *CreateBitmapFromHICON)(
        IWICImagingFactory *This,
        HICON hIcon,
        IWICBitmap **ppIBitmap);

    HRESULT (STDMETHODCALLTYPE *CreateComponentEnumerator)(
        IWICImagingFactory *This,
        DWORD componentTypes,
        DWORD options,
        IEnumUnknown **ppIEnumUnknown);

    HRESULT (STDMETHODCALLTYPE *CreateFastMetadataEncoderFromDecoder)(
        IWICImagingFactory *This,
        IWICBitmapDecoder *pIDecoder,
        IWICFastMetadataEncoder **ppIFastEncoder);

    HRESULT (STDMETHODCALLTYPE *CreateFastMetadataEncoderFromFrameDecode)(
        IWICImagingFactory *This,
        IWICBitmapFrameDecode *pIFrameDecoder,
        IWICFastMetadataEncoder **ppIFastEncoder);

    HRESULT (STDMETHODCALLTYPE *CreateQueryWriter)(
        IWICImagingFactory *This,
        REFGUID guidMetadataFormat,
        const GUID *pguidVendor,
        IWICMetadataQueryWriter **ppIQueryWriter);

    HRESULT (STDMETHODCALLTYPE *CreateQueryWriterFromReader)(
        IWICImagingFactory *This,
        IWICMetadataQueryReader *pIQueryReader,
        const GUID *pguidVendor,
        IWICMetadataQueryWriter **ppIQueryWriter);

    END_INTERFACE
} IWICImagingFactoryVtbl;

interface IWICImagingFactory {
    CONST_VTBL IWICImagingFactoryVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICImagingFactory_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICImagingFactory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICImagingFactory_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICImagingFactory methods ***/
#define IWICImagingFactory_CreateDecoderFromFilename(This,wzFilename,pguidVendor,dwDesiredAccess,metadataOptions,ppIDecoder) \
    ((This)->lpVtbl->CreateDecoderFromFilename(This,wzFilename,pguidVendor,dwDesiredAccess,metadataOptions,ppIDecoder))
#define IWICImagingFactory_CreateDecoderFromStream(This,pIStream,pguidVendor,metadataOptions,ppIDecoder) \
    ((This)->lpVtbl->CreateDecoderFromStream(This,pIStream,pguidVendor,metadataOptions,ppIDecoder))
#define IWICImagingFactory_CreateDecoderFromFileHandle(This,hFile,pguidVendor,metadataOptions,ppIDecoder) \
    ((This)->lpVtbl->CreateDecoderFromFileHandle(This,hFile,pguidVendor,metadataOptions,ppIDecoder))
#define IWICImagingFactory_CreateComponentInfo(This,clsidComponent,ppIInfo) \
    ((This)->lpVtbl->CreateComponentInfo(This,clsidComponent,ppIInfo))
#define IWICImagingFactory_CreateDecoder(This,guidContainerFormat,pguidVendor,ppIDecoder) \
    ((This)->lpVtbl->CreateDecoder(This,guidContainerFormat,pguidVendor,ppIDecoder))
#define IWICImagingFactory_CreateEncoder(This,guidContainerFormat,pguidVendor,ppIEncoder) \
    ((This)->lpVtbl->CreateEncoder(This,guidContainerFormat,pguidVendor,ppIEncoder))
#define IWICImagingFactory_CreatePalette(This,ppIPalette) \
    ((This)->lpVtbl->CreatePalette(This,ppIPalette))
#define IWICImagingFactory_CreateFormatConverter(This,ppIFormatConverter) \
    ((This)->lpVtbl->CreateFormatConverter(This,ppIFormatConverter))
#define IWICImagingFactory_CreateBitmapScaler(This,ppIBitmapScaler) \
    ((This)->lpVtbl->CreateBitmapScaler(This,ppIBitmapScaler))
#define IWICImagingFactory_CreateBitmapClipper(This,ppIBitmapClipper) \
    ((This)->lpVtbl->CreateBitmapClipper(This,ppIBitmapClipper))
#define IWICImagingFactory_CreateBitmapFlipRotator(This,ppIBitmapFlipRotator) \
    ((This)->lpVtbl->CreateBitmapFlipRotator(This,ppIBitmapFlipRotator))
#define IWICImagingFactory_CreateStream(This,ppIWICStream) \
    ((This)->lpVtbl->CreateStream(This,ppIWICStream))
#define IWICImagingFactory_CreateColorContext(This,ppIWICColorContext) \
    ((This)->lpVtbl->CreateColorContext(This,ppIWICColorContext))
#define IWICImagingFactory_CreateColorTransformer(This,ppIWICColorTransform) \
    ((This)->lpVtbl->CreateColorTransformer(This,ppIWICColorTransform))
#define IWICImagingFactory_CreateBitmap(This,uiWidth,uiHeight,pixelFormat,option,ppIBitmap) \
    ((This)->lpVtbl->CreateBitmap(This,uiWidth,uiHeight,pixelFormat,option,ppIBitmap))
#define IWICImagingFactory_CreateBitmapFromSource(This,pIBitmapSource,option,ppIBitmap) \
    ((This)->lpVtbl->CreateBitmapFromSource(This,pIBitmapSource,option,ppIBitmap))
#define IWICImagingFactory_CreateBitmapFromSourceRect(This,pIBitmapSource,x,y,width,height,ppIBitmap) \
    ((This)->lpVtbl->CreateBitmapFromSourceRect(This,pIBitmapSource,x,y,width,height,ppIBitmap))
#define IWICImagingFactory_CreateBitmapFromMemory(This,uiWidth,uiHeight,pixelFormat,cbStride,cbBufferSize,pbBuffer,ppIBitmap) \
    ((This)->lpVtbl->CreateBitmapFromMemory(This,uiWidth,uiHeight,pixelFormat,cbStride,cbBufferSize,pbBuffer,ppIBitmap))
#define IWICImagingFactory_CreateBitmapFromHBITMAP(This,hBitmap,hPalette,options,ppIBitmap) \
    ((This)->lpVtbl->CreateBitmapFromHBITMAP(This,hBitmap,hPalette,options,ppIBitmap))
#define IWICImagingFactory_CreateBitmapFromHICON(This,hIcon,ppIBitmap) \
    ((This)->lpVtbl->CreateBitmapFromHICON(This,hIcon,ppIBitmap))
#define IWICImagingFactory_CreateComponentEnumerator(This,componentTypes,options,ppIEnumUnknown) \
    ((This)->lpVtbl->CreateComponentEnumerator(This,componentTypes,options,ppIEnumUnknown))
#define IWICImagingFactory_CreateFastMetadataEncoderFromDecoder(This,pIDecoder,ppIFastEncoder) \
    ((This)->lpVtbl->CreateFastMetadataEncoderFromDecoder(This,pIDecoder,ppIFastEncoder))
#define IWICImagingFactory_CreateFastMetadataEncoderFromFrameDecode(This,pIFrameDecoder,ppIFastEncoder) \
    ((This)->lpVtbl->CreateFastMetadataEncoderFromFrameDecode(This,pIFrameDecoder,ppIFastEncoder))
#define IWICImagingFactory_CreateQueryWriter(This,guidMetadataFormat,pguidVendor,ppIQueryWriter) \
    ((This)->lpVtbl->CreateQueryWriter(This,guidMetadataFormat,pguidVendor,ppIQueryWriter))
#define IWICImagingFactory_CreateQueryWriterFromReader(This,pIQueryReader,pguidVendor,ppIQueryWriter) \
    ((This)->lpVtbl->CreateQueryWriterFromReader(This,pIQueryReader,pguidVendor,ppIQueryWriter))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWICImagingFactory_INTERFACE_DEFINED__ */

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8) || defined(_WIN7_PLATFORM_UPDATE)

/*****************************************************************************
 * IWICImagingFactory2 interface
 */
#ifndef __IWICImagingFactory2_INTERFACE_DEFINED__
#define __IWICImagingFactory2_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICImagingFactory2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICImagingFactory2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICImagingFactory2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICImagingFactory2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICImagingFactory2 *This);

    /*** IWICImagingFactory methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateDecoderFromFilename)(
        IWICImagingFactory2 *This,
        LPCWSTR wzFilename,
        const GUID *pguidVendor,
        DWORD dwDesiredAccess,
        WICDecodeOptions metadataOptions,
        IWICBitmapDecoder **ppIDecoder);

    HRESULT (STDMETHODCALLTYPE *CreateDecoderFromStream)(
        IWICImagingFactory2 *This,
        IStream *pIStream,
        const GUID *pguidVendor,
        WICDecodeOptions metadataOptions,
        IWICBitmapDecoder **ppIDecoder);

    HRESULT (STDMETHODCALLTYPE *CreateDecoderFromFileHandle)(
        IWICImagingFactory2 *This,
        ULONG_PTR hFile,
        const GUID *pguidVendor,
        WICDecodeOptions metadataOptions,
        IWICBitmapDecoder **ppIDecoder);

    HRESULT (STDMETHODCALLTYPE *CreateComponentInfo)(
        IWICImagingFactory2 *This,
        REFCLSID clsidComponent,
        IWICComponentInfo **ppIInfo);

    HRESULT (STDMETHODCALLTYPE *CreateDecoder)(
        IWICImagingFactory2 *This,
        REFGUID guidContainerFormat,
        const GUID *pguidVendor,
        IWICBitmapDecoder **ppIDecoder);

    HRESULT (STDMETHODCALLTYPE *CreateEncoder)(
        IWICImagingFactory2 *This,
        REFGUID guidContainerFormat,
        const GUID *pguidVendor,
        IWICBitmapEncoder **ppIEncoder);

    HRESULT (STDMETHODCALLTYPE *CreatePalette)(
        IWICImagingFactory2 *This,
        IWICPalette **ppIPalette);

    HRESULT (STDMETHODCALLTYPE *CreateFormatConverter)(
        IWICImagingFactory2 *This,
        IWICFormatConverter **ppIFormatConverter);

    HRESULT (STDMETHODCALLTYPE *CreateBitmapScaler)(
        IWICImagingFactory2 *This,
        IWICBitmapScaler **ppIBitmapScaler);

    HRESULT (STDMETHODCALLTYPE *CreateBitmapClipper)(
        IWICImagingFactory2 *This,
        IWICBitmapClipper **ppIBitmapClipper);

    HRESULT (STDMETHODCALLTYPE *CreateBitmapFlipRotator)(
        IWICImagingFactory2 *This,
        IWICBitmapFlipRotator **ppIBitmapFlipRotator);

    HRESULT (STDMETHODCALLTYPE *CreateStream)(
        IWICImagingFactory2 *This,
        IWICStream **ppIWICStream);

    HRESULT (STDMETHODCALLTYPE *CreateColorContext)(
        IWICImagingFactory2 *This,
        IWICColorContext **ppIWICColorContext);

    HRESULT (STDMETHODCALLTYPE *CreateColorTransformer)(
        IWICImagingFactory2 *This,
        IWICColorTransform **ppIWICColorTransform);

    HRESULT (STDMETHODCALLTYPE *CreateBitmap)(
        IWICImagingFactory2 *This,
        UINT uiWidth,
        UINT uiHeight,
        REFWICPixelFormatGUID pixelFormat,
        WICBitmapCreateCacheOption option,
        IWICBitmap **ppIBitmap);

    HRESULT (STDMETHODCALLTYPE *CreateBitmapFromSource)(
        IWICImagingFactory2 *This,
        IWICBitmapSource *pIBitmapSource,
        WICBitmapCreateCacheOption option,
        IWICBitmap **ppIBitmap);

    HRESULT (STDMETHODCALLTYPE *CreateBitmapFromSourceRect)(
        IWICImagingFactory2 *This,
        IWICBitmapSource *pIBitmapSource,
        UINT x,
        UINT y,
        UINT width,
        UINT height,
        IWICBitmap **ppIBitmap);

    HRESULT (STDMETHODCALLTYPE *CreateBitmapFromMemory)(
        IWICImagingFactory2 *This,
        UINT uiWidth,
        UINT uiHeight,
        REFWICPixelFormatGUID pixelFormat,
        UINT cbStride,
        UINT cbBufferSize,
        BYTE *pbBuffer,
        IWICBitmap **ppIBitmap);

    HRESULT (STDMETHODCALLTYPE *CreateBitmapFromHBITMAP)(
        IWICImagingFactory2 *This,
        HBITMAP hBitmap,
        HPALETTE hPalette,
        WICBitmapAlphaChannelOption options,
        IWICBitmap **ppIBitmap);

    HRESULT (STDMETHODCALLTYPE *CreateBitmapFromHICON)(
        IWICImagingFactory2 *This,
        HICON hIcon,
        IWICBitmap **ppIBitmap);

    HRESULT (STDMETHODCALLTYPE *CreateComponentEnumerator)(
        IWICImagingFactory2 *This,
        DWORD componentTypes,
        DWORD options,
        IEnumUnknown **ppIEnumUnknown);

    HRESULT (STDMETHODCALLTYPE *CreateFastMetadataEncoderFromDecoder)(
        IWICImagingFactory2 *This,
        IWICBitmapDecoder *pIDecoder,
        IWICFastMetadataEncoder **ppIFastEncoder);

    HRESULT (STDMETHODCALLTYPE *CreateFastMetadataEncoderFromFrameDecode)(
        IWICImagingFactory2 *This,
        IWICBitmapFrameDecode *pIFrameDecoder,
        IWICFastMetadataEncoder **ppIFastEncoder);

    HRESULT (STDMETHODCALLTYPE *CreateQueryWriter)(
        IWICImagingFactory2 *This,
        REFGUID guidMetadataFormat,
        const GUID *pguidVendor,
        IWICMetadataQueryWriter **ppIQueryWriter);

    HRESULT (STDMETHODCALLTYPE *CreateQueryWriterFromReader)(
        IWICImagingFactory2 *This,
        IWICMetadataQueryReader *pIQueryReader,
        const GUID *pguidVendor,
        IWICMetadataQueryWriter **ppIQueryWriter);

    /*** IWICImagingFactory2 methods ***/
    HRESULT (STDMETHODCALLTYPE *CreateImageEncoder)(
        IWICImagingFactory2 *This,
        ID2D1Device *pD2DDevice,
        IWICImageEncoder **ppWICImageEncoder);

    END_INTERFACE
} IWICImagingFactory2Vtbl;

interface IWICImagingFactory2 {
    CONST_VTBL IWICImagingFactory2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICImagingFactory2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICImagingFactory2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICImagingFactory2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICImagingFactory methods ***/
#define IWICImagingFactory2_CreateDecoderFromFilename(This,wzFilename,pguidVendor,dwDesiredAccess,metadataOptions,ppIDecoder) \
    ((This)->lpVtbl->CreateDecoderFromFilename(This,wzFilename,pguidVendor,dwDesiredAccess,metadataOptions,ppIDecoder))
#define IWICImagingFactory2_CreateDecoderFromStream(This,pIStream,pguidVendor,metadataOptions,ppIDecoder) \
    ((This)->lpVtbl->CreateDecoderFromStream(This,pIStream,pguidVendor,metadataOptions,ppIDecoder))
#define IWICImagingFactory2_CreateDecoderFromFileHandle(This,hFile,pguidVendor,metadataOptions,ppIDecoder) \
    ((This)->lpVtbl->CreateDecoderFromFileHandle(This,hFile,pguidVendor,metadataOptions,ppIDecoder))
#define IWICImagingFactory2_CreateComponentInfo(This,clsidComponent,ppIInfo) \
    ((This)->lpVtbl->CreateComponentInfo(This,clsidComponent,ppIInfo))
#define IWICImagingFactory2_CreateDecoder(This,guidContainerFormat,pguidVendor,ppIDecoder) \
    ((This)->lpVtbl->CreateDecoder(This,guidContainerFormat,pguidVendor,ppIDecoder))
#define IWICImagingFactory2_CreateEncoder(This,guidContainerFormat,pguidVendor,ppIEncoder) \
    ((This)->lpVtbl->CreateEncoder(This,guidContainerFormat,pguidVendor,ppIEncoder))
#define IWICImagingFactory2_CreatePalette(This,ppIPalette) \
    ((This)->lpVtbl->CreatePalette(This,ppIPalette))
#define IWICImagingFactory2_CreateFormatConverter(This,ppIFormatConverter) \
    ((This)->lpVtbl->CreateFormatConverter(This,ppIFormatConverter))
#define IWICImagingFactory2_CreateBitmapScaler(This,ppIBitmapScaler) \
    ((This)->lpVtbl->CreateBitmapScaler(This,ppIBitmapScaler))
#define IWICImagingFactory2_CreateBitmapClipper(This,ppIBitmapClipper) \
    ((This)->lpVtbl->CreateBitmapClipper(This,ppIBitmapClipper))
#define IWICImagingFactory2_CreateBitmapFlipRotator(This,ppIBitmapFlipRotator) \
    ((This)->lpVtbl->CreateBitmapFlipRotator(This,ppIBitmapFlipRotator))
#define IWICImagingFactory2_CreateStream(This,ppIWICStream) \
    ((This)->lpVtbl->CreateStream(This,ppIWICStream))
#define IWICImagingFactory2_CreateColorContext(This,ppIWICColorContext) \
    ((This)->lpVtbl->CreateColorContext(This,ppIWICColorContext))
#define IWICImagingFactory2_CreateColorTransformer(This,ppIWICColorTransform) \
    ((This)->lpVtbl->CreateColorTransformer(This,ppIWICColorTransform))
#define IWICImagingFactory2_CreateBitmap(This,uiWidth,uiHeight,pixelFormat,option,ppIBitmap) \
    ((This)->lpVtbl->CreateBitmap(This,uiWidth,uiHeight,pixelFormat,option,ppIBitmap))
#define IWICImagingFactory2_CreateBitmapFromSource(This,pIBitmapSource,option,ppIBitmap) \
    ((This)->lpVtbl->CreateBitmapFromSource(This,pIBitmapSource,option,ppIBitmap))
#define IWICImagingFactory2_CreateBitmapFromSourceRect(This,pIBitmapSource,x,y,width,height,ppIBitmap) \
    ((This)->lpVtbl->CreateBitmapFromSourceRect(This,pIBitmapSource,x,y,width,height,ppIBitmap))
#define IWICImagingFactory2_CreateBitmapFromMemory(This,uiWidth,uiHeight,pixelFormat,cbStride,cbBufferSize,pbBuffer,ppIBitmap) \
    ((This)->lpVtbl->CreateBitmapFromMemory(This,uiWidth,uiHeight,pixelFormat,cbStride,cbBufferSize,pbBuffer,ppIBitmap))
#define IWICImagingFactory2_CreateBitmapFromHBITMAP(This,hBitmap,hPalette,options,ppIBitmap) \
    ((This)->lpVtbl->CreateBitmapFromHBITMAP(This,hBitmap,hPalette,options,ppIBitmap))
#define IWICImagingFactory2_CreateBitmapFromHICON(This,hIcon,ppIBitmap) \
    ((This)->lpVtbl->CreateBitmapFromHICON(This,hIcon,ppIBitmap))
#define IWICImagingFactory2_CreateComponentEnumerator(This,componentTypes,options,ppIEnumUnknown) \
    ((This)->lpVtbl->CreateComponentEnumerator(This,componentTypes,options,ppIEnumUnknown))
#define IWICImagingFactory2_CreateFastMetadataEncoderFromDecoder(This,pIDecoder,ppIFastEncoder) \
    ((This)->lpVtbl->CreateFastMetadataEncoderFromDecoder(This,pIDecoder,ppIFastEncoder))
#define IWICImagingFactory2_CreateFastMetadataEncoderFromFrameDecode(This,pIFrameDecoder,ppIFastEncoder) \
    ((This)->lpVtbl->CreateFastMetadataEncoderFromFrameDecode(This,pIFrameDecoder,ppIFastEncoder))
#define IWICImagingFactory2_CreateQueryWriter(This,guidMetadataFormat,pguidVendor,ppIQueryWriter) \
    ((This)->lpVtbl->CreateQueryWriter(This,guidMetadataFormat,pguidVendor,ppIQueryWriter))
#define IWICImagingFactory2_CreateQueryWriterFromReader(This,pIQueryReader,pguidVendor,ppIQueryWriter) \
    ((This)->lpVtbl->CreateQueryWriterFromReader(This,pIQueryReader,pguidVendor,ppIQueryWriter))
/*** IWICImagingFactory2 methods ***/
#define IWICImagingFactory2_CreateImageEncoder(This,pD2DDevice,ppWICImageEncoder) \
    ((This)->lpVtbl->CreateImageEncoder(This,pD2DDevice,ppWICImageEncoder))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWICImagingFactory2_INTERFACE_DEFINED__ */

#endif

HRESULT WINAPI WICConvertBitmapSource(
      REFWICPixelFormatGUID dstFormat,
      IWICBitmapSource  *pISrc,
      IWICBitmapSource **ppIDst
     );

HRESULT WINAPI WICCreateBitmapFromSection(
      UINT width,
      UINT height,
      REFWICPixelFormatGUID pixelFormat,
      HANDLE hSection,
      UINT stride,
      UINT offset,
      IWICBitmap **ppIBitmap
     );

HRESULT WINAPI WICCreateBitmapFromSectionEx(
      UINT width,
      UINT height,
      REFWICPixelFormatGUID pixelFormat,
      HANDLE hSection,
      UINT stride,
      UINT offset,
      WICSectionAccessLevel desiredAccessLevel,
      IWICBitmap **ppIBitmap
     );

HRESULT WINAPI WICMapGuidToShortName(
     REFGUID guid,
     UINT cchName,
     WCHAR *wzName,
     UINT *pcchActual
   );

HRESULT WINAPI WICMapShortNameToGuid(
     PCWSTR wzName,
     GUID *pguid
   );

HRESULT WINAPI WICMapSchemaToName(
     REFGUID guidMetadataFormat,
     LPWSTR pwzSchema,
     UINT cchName,
     WCHAR *wzName,
     UINT *pcchActual
    );

#define FACILITY_WINCODEC_ERR 0x898
#define WINCODEC_ERR_BASE 0x2000

#define MAKE_WINCODECHR(sev, code) MAKE_HRESULT(sev, FACILITY_WINCODEC_ERR, (WINCODEC_ERR_BASE + code))
#define MAKE_WINCODECHR_ERR(code) MAKE_WINCODECHR(1, code)

#define WINCODEC_ERR_GENERIC_ERROR                    E_FAIL
#define WINCODEC_ERR_INVALIDPARAMETER                 E_INVALIDARG
#define WINCODEC_ERR_OUTOFMEMORY                      E_OUTOFMEMORY
#define WINCODEC_ERR_NOTIMPLEMENTED                   E_NOTIMPL
#define WINCODEC_ERR_ABORTED                          E_ABORT
#define WINCODEC_ERR_ACCESSDENIED                     E_ACCESSDENIED
#define WINCODEC_ERR_VALUEOVERFLOW                    INTSAFE_E_ARITHMETIC_OVERFLOW

typedef enum WICTiffCompressionOption {
    WICTiffCompressionDontCare = 0x0,
    WICTiffCompressionNone = 0x1,
    WICTiffCompressionCCITT3 = 0x2,
    WICTiffCompressionCCITT4 = 0x3,
    WICTiffCompressionLZW = 0x4,
    WICTiffCompressionRLE = 0x5,
    WICTiffCompressionZIP = 0x6,
    WICTiffCompressionLZWHDifferencing = 0x7,
    WICTIFFCOMPRESSIONOPTION_FORCE_DWORD = 0x7fffffff
} WICTiffCompressionOption;

typedef enum WICJpegYCrCbSubsamplingOption {
    WICJpegYCrCbSubsamplingDefault = 0x0,
    WICJpegYCrCbSubsampling420 = 0x1,
    WICJpegYCrCbSubsampling422 = 0x2,
    WICJpegYCrCbSubsampling444 = 0x3,
    WICJpegYCrCbSubsampling440 = 0x4,
    WICJPEGYCRCBSUBSAMPLING_FORCE_DWORD = 0x7fffffff
} WICJpegYCrCbSubsamplingOption;

typedef enum WICPngFilterOption {
    WICPngFilterUnspecified = 0x0,
    WICPngFilterNone = 0x1,
    WICPngFilterSub = 0x2,
    WICPngFilterUp = 0x3,
    WICPngFilterAverage = 0x4,
    WICPngFilterPaeth = 0x5,
    WICPngFilterAdaptive = 0x6,
    WICPNGFILTEROPTION_FORCE_DWORD = 0x7fffffff
} WICPngFilterOption;

typedef enum WICNamedWhitePoint {
    WICWhitePointDefault = 0x1,
    WICWhitePointDaylight = 0x2,
    WICWhitePointCloudy = 0x4,
    WICWhitePointShade = 0x8,
    WICWhitePointTungsten = 0x10,
    WICWhitePointFluorescent = 0x20,
    WICWhitePointFlash = 0x40,
    WICWhitePointUnderwater = 0x80,
    WICWhitePointCustom = 0x100,
    WICWhitePointAutoWhiteBalance = 0x200,
    WICWhitePointAsShot = WICWhitePointDefault,
    WICNAMEDWHITEPOINT_FORCE_DWORD = 0x7fffffff
} WICNamedWhitePoint;

typedef enum WICRawCapabilities {
    WICRawCapabilityNotSupported = 0x0,
    WICRawCapabilityGetSupported = 0x1,
    WICRawCapabilityFullySupported = 0x2,
    WICRAWCAPABILITIES_FORCE_DWORD = 0x7fffffff
} WICRawCapabilities;

typedef enum WICRawRotationCapabilities {
    WICRawRotationCapabilityNotSupported = 0x0,
    WICRawRotationCapabilityGetSupported = 0x1,
    WICRawRotationCapabilityNinetyDegreesSupported = 0x2,
    WICRawRotationCapabilityFullySupported = 0x3,
    WICRAWROTATIONCAPABILITIES_FORCE_DWORD = 0x7fffffff
} WICRawRotationCapabilities;

typedef struct WICRawCapabilitiesInfo {
    UINT cbSize;
    UINT CodecMajorVersion;
    UINT CodecMinorVersion;
    WICRawCapabilities ExposureCompensationSupport;
    WICRawCapabilities ContrastSupport;
    WICRawCapabilities RGBWhitePointSupport;
    WICRawCapabilities NamedWhitePointSupport;
    UINT NamedWhitePointSupportMask;
    WICRawCapabilities KelvinWhitePointSupport;
    WICRawCapabilities GammaSupport;
    WICRawCapabilities TintSupport;
    WICRawCapabilities SaturationSupport;
    WICRawCapabilities SharpnessSupport;
    WICRawCapabilities NoiseReductionSupport;
    WICRawCapabilities DestinationColorProfileSupport;
    WICRawCapabilities ToneCurveSupport;
    WICRawRotationCapabilities RotationSupport;
    WICRawCapabilities RenderModeSupport;
} WICRawCapabilitiesInfo;

typedef enum WICRawParameterSet {
    WICAsShotParameterSet = 0x1,
    WICUserAdjustedParameterSet = 0x2,
    WICAutoAdjustedParameterSet = 0x3,
    WICRAWPARAMETERSET_FORCE_DWORD = 0x7fffffff
} WICRawParameterSet;

typedef enum WICRawRenderMode {
    WICRawRenderModeDraft = 0x1,
    WICRawRenderModeNormal = 0x2,
    WICRawRenderModeBestQuality = 0x3,
    WICRAWRENDERMODE_FORCE_DWORD = 0x7fffffff
} WICRawRenderMode;

typedef struct WICRawToneCurvePoint {
    double Input;
    double Output;
} WICRawToneCurvePoint;

typedef struct WICRawToneCurve {
    UINT cPoints;
    WICRawToneCurvePoint aPoints[ 1 ];
} WICRawToneCurve;

#define WICRawChangeNotification_ExposureCompensation       0x00000001
#define WICRawChangeNotification_NamedWhitePoint            0x00000002
#define WICRawChangeNotification_KelvinWhitePoint           0x00000004
#define WICRawChangeNotification_RGBWhitePoint              0x00000008
#define WICRawChangeNotification_Contrast                   0x00000010
#define WICRawChangeNotification_Gamma                      0x00000020
#define WICRawChangeNotification_Sharpness                  0x00000040
#define WICRawChangeNotification_Saturation                 0x00000080
#define WICRawChangeNotification_Tint                       0x00000100
#define WICRawChangeNotification_NoiseReduction             0x00000200
#define WICRawChangeNotification_DestinationColorContext    0x00000400
#define WICRawChangeNotification_ToneCurve                  0x00000800
#define WICRawChangeNotification_Rotation                   0x00001000
#define WICRawChangeNotification_RenderMode                 0x00002000

/*****************************************************************************
 * IWICDevelopRawNotificationCallback interface
 */
#ifndef __IWICDevelopRawNotificationCallback_INTERFACE_DEFINED__
#define __IWICDevelopRawNotificationCallback_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICDevelopRawNotificationCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICDevelopRawNotificationCallbackVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICDevelopRawNotificationCallback *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICDevelopRawNotificationCallback *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICDevelopRawNotificationCallback *This);

    /*** IWICDevelopRawNotificationCallback methods ***/
    HRESULT (STDMETHODCALLTYPE *Notify)(
        IWICDevelopRawNotificationCallback *This,
        UINT NotificationMask);

    END_INTERFACE
} IWICDevelopRawNotificationCallbackVtbl;

interface IWICDevelopRawNotificationCallback {
    CONST_VTBL IWICDevelopRawNotificationCallbackVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICDevelopRawNotificationCallback_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICDevelopRawNotificationCallback_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICDevelopRawNotificationCallback_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICDevelopRawNotificationCallback methods ***/
#define IWICDevelopRawNotificationCallback_Notify(This,NotificationMask) \
    ((This)->lpVtbl->Notify(This,NotificationMask))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWICDevelopRawNotificationCallback_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWICDevelopRaw interface
 */
#ifndef __IWICDevelopRaw_INTERFACE_DEFINED__
#define __IWICDevelopRaw_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICDevelopRaw;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICDevelopRawVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICDevelopRaw *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICDevelopRaw *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICDevelopRaw *This);

    /*** IWICBitmapSource methods ***/
    HRESULT (STDMETHODCALLTYPE *GetSize)(
        IWICDevelopRaw *This,
        UINT *puiWidth,
        UINT *puiHeight);

    HRESULT (STDMETHODCALLTYPE *GetPixelFormat)(
        IWICDevelopRaw *This,
        WICPixelFormatGUID *pPixelFormat);

    HRESULT (STDMETHODCALLTYPE *GetResolution)(
        IWICDevelopRaw *This,
        double *pDpiX,
        double *pDpiY);

    HRESULT (STDMETHODCALLTYPE *CopyPalette)(
        IWICDevelopRaw *This,
        IWICPalette *pIPalette);

    HRESULT (STDMETHODCALLTYPE *CopyPixels)(
        IWICDevelopRaw *This,
        const WICRect *prc,
        UINT cbStride,
        UINT cbBufferSize,
        BYTE *pbBuffer);

    /*** IWICBitmapFrameDecode methods ***/
    HRESULT (STDMETHODCALLTYPE *GetMetadataQueryReader)(
        IWICDevelopRaw *This,
        IWICMetadataQueryReader **ppIMetadataQueryReader);

    HRESULT (STDMETHODCALLTYPE *GetColorContexts)(
        IWICDevelopRaw *This,
        UINT cCount,
        IWICColorContext **ppIColorContexts,
        UINT *pcActualCount);

    HRESULT (STDMETHODCALLTYPE *GetThumbnail)(
        IWICDevelopRaw *This,
        IWICBitmapSource **ppIThumbnail);

    /*** IWICDevelopRaw methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryRawCapabilitiesInfo)(
        IWICDevelopRaw *This,
        WICRawCapabilitiesInfo *pInfo);

    HRESULT (STDMETHODCALLTYPE *LoadParameterSet)(
        IWICDevelopRaw *This,
        WICRawParameterSet ParameterSet);

    HRESULT (STDMETHODCALLTYPE *GetCurrentParameterSet)(
        IWICDevelopRaw *This,
        IPropertyBag2 **ppCurrentParameterSet);

    HRESULT (STDMETHODCALLTYPE *SetExposureCompensation)(
        IWICDevelopRaw *This,
        double ev);

    HRESULT (STDMETHODCALLTYPE *GetExposureCompensation)(
        IWICDevelopRaw *This,
        double *pEV);

    HRESULT (STDMETHODCALLTYPE *SetWhitePointRGB)(
        IWICDevelopRaw *This,
        UINT Red,
        UINT Green,
        UINT Blue);

    HRESULT (STDMETHODCALLTYPE *GetWhitePointRGB)(
        IWICDevelopRaw *This,
        UINT *pRed,
        UINT *pGreen,
        UINT *pBlue);

    HRESULT (STDMETHODCALLTYPE *SetNamedWhitePoint)(
        IWICDevelopRaw *This,
        WICNamedWhitePoint WhitePoint);

    HRESULT (STDMETHODCALLTYPE *GetNamedWhitePoint)(
        IWICDevelopRaw *This,
        WICNamedWhitePoint *pWhitePoint);

    HRESULT (STDMETHODCALLTYPE *SetWhitePointKelvin)(
        IWICDevelopRaw *This,
        UINT WhitePointKelvin);

    HRESULT (STDMETHODCALLTYPE *GetWhitePointKelvin)(
        IWICDevelopRaw *This,
        UINT *pWhitePointKelvin);

    HRESULT (STDMETHODCALLTYPE *GetKelvinRangeInfo)(
        IWICDevelopRaw *This,
        UINT *pMinKelvinTemp,
        UINT *pMaxKelvinTemp,
        UINT *pKelvinTempStepValue);

    HRESULT (STDMETHODCALLTYPE *SetContrast)(
        IWICDevelopRaw *This,
        double Contrast);

    HRESULT (STDMETHODCALLTYPE *GetContrast)(
        IWICDevelopRaw *This,
        double *pContrast);

    HRESULT (STDMETHODCALLTYPE *SetGamma)(
        IWICDevelopRaw *This,
        double Gamma);

    HRESULT (STDMETHODCALLTYPE *GetGamma)(
        IWICDevelopRaw *This,
        double *pGamma);

    HRESULT (STDMETHODCALLTYPE *SetSharpness)(
        IWICDevelopRaw *This,
        double Sharpness);

    HRESULT (STDMETHODCALLTYPE *GetSharpness)(
        IWICDevelopRaw *This,
        double *pSharpness);

    HRESULT (STDMETHODCALLTYPE *SetSaturation)(
        IWICDevelopRaw *This,
        double Saturation);

    HRESULT (STDMETHODCALLTYPE *GetSaturation)(
        IWICDevelopRaw *This,
        double *pSaturation);

    HRESULT (STDMETHODCALLTYPE *SetTint)(
        IWICDevelopRaw *This,
        double Tint);

    HRESULT (STDMETHODCALLTYPE *GetTint)(
        IWICDevelopRaw *This,
        double *pTint);

    HRESULT (STDMETHODCALLTYPE *SetNoiseReduction)(
        IWICDevelopRaw *This,
        double NoiseReduction);

    HRESULT (STDMETHODCALLTYPE *GetNoiseReduction)(
        IWICDevelopRaw *This,
        double *pNoiseReduction);

    HRESULT (STDMETHODCALLTYPE *SetDestinationColorContext)(
        IWICDevelopRaw *This,
        IWICColorContext *pColorContext);

    HRESULT (STDMETHODCALLTYPE *SetToneCurve)(
        IWICDevelopRaw *This,
        UINT cbToneCurveSize,
        const WICRawToneCurve *pToneCurve);

    HRESULT (STDMETHODCALLTYPE *GetToneCurve)(
        IWICDevelopRaw *This,
        UINT cbToneCurveBufferSize,
        WICRawToneCurve *pToneCurve,
        UINT *pcbActualToneCurveBufferSize);

    HRESULT (STDMETHODCALLTYPE *SetRotation)(
        IWICDevelopRaw *This,
        double Rotation);

    HRESULT (STDMETHODCALLTYPE *GetRotation)(
        IWICDevelopRaw *This,
        double *pRotation);

    HRESULT (STDMETHODCALLTYPE *SetRenderMode)(
        IWICDevelopRaw *This,
        WICRawRenderMode RenderMode);

    HRESULT (STDMETHODCALLTYPE *GetRenderMode)(
        IWICDevelopRaw *This,
        WICRawRenderMode *pRenderMode);

    HRESULT (STDMETHODCALLTYPE *SetNotificationCallback)(
        IWICDevelopRaw *This,
        IWICDevelopRawNotificationCallback *pCallback);

    END_INTERFACE
} IWICDevelopRawVtbl;

interface IWICDevelopRaw {
    CONST_VTBL IWICDevelopRawVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICDevelopRaw_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICDevelopRaw_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICDevelopRaw_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICBitmapSource methods ***/
#define IWICDevelopRaw_GetSize(This,puiWidth,puiHeight) \
    ((This)->lpVtbl->GetSize(This,puiWidth,puiHeight))
#define IWICDevelopRaw_GetPixelFormat(This,pPixelFormat) \
    ((This)->lpVtbl->GetPixelFormat(This,pPixelFormat))
#define IWICDevelopRaw_GetResolution(This,pDpiX,pDpiY) \
    ((This)->lpVtbl->GetResolution(This,pDpiX,pDpiY))
#define IWICDevelopRaw_CopyPalette(This,pIPalette) \
    ((This)->lpVtbl->CopyPalette(This,pIPalette))
#define IWICDevelopRaw_CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer) \
    ((This)->lpVtbl->CopyPixels(This,prc,cbStride,cbBufferSize,pbBuffer))
/*** IWICBitmapFrameDecode methods ***/
#define IWICDevelopRaw_GetMetadataQueryReader(This,ppIMetadataQueryReader) \
    ((This)->lpVtbl->GetMetadataQueryReader(This,ppIMetadataQueryReader))
#define IWICDevelopRaw_GetColorContexts(This,cCount,ppIColorContexts,pcActualCount) \
    ((This)->lpVtbl->GetColorContexts(This,cCount,ppIColorContexts,pcActualCount))
#define IWICDevelopRaw_GetThumbnail(This,ppIThumbnail) \
    ((This)->lpVtbl->GetThumbnail(This,ppIThumbnail))
/*** IWICDevelopRaw methods ***/
#define IWICDevelopRaw_QueryRawCapabilitiesInfo(This,pInfo) \
    ((This)->lpVtbl->QueryRawCapabilitiesInfo(This,pInfo))
#define IWICDevelopRaw_LoadParameterSet(This,ParameterSet) \
    ((This)->lpVtbl->LoadParameterSet(This,ParameterSet))
#define IWICDevelopRaw_GetCurrentParameterSet(This,ppCurrentParameterSet) \
    ((This)->lpVtbl->GetCurrentParameterSet(This,ppCurrentParameterSet))
#define IWICDevelopRaw_SetExposureCompensation(This,ev) \
    ((This)->lpVtbl->SetExposureCompensation(This,ev))
#define IWICDevelopRaw_GetExposureCompensation(This,pEV) \
    ((This)->lpVtbl->GetExposureCompensation(This,pEV))
#define IWICDevelopRaw_SetWhitePointRGB(This,Red,Green,Blue) \
    ((This)->lpVtbl->SetWhitePointRGB(This,Red,Green,Blue))
#define IWICDevelopRaw_GetWhitePointRGB(This,pRed,pGreen,pBlue) \
    ((This)->lpVtbl->GetWhitePointRGB(This,pRed,pGreen,pBlue))
#define IWICDevelopRaw_SetNamedWhitePoint(This,WhitePoint) \
    ((This)->lpVtbl->SetNamedWhitePoint(This,WhitePoint))
#define IWICDevelopRaw_GetNamedWhitePoint(This,pWhitePoint) \
    ((This)->lpVtbl->GetNamedWhitePoint(This,pWhitePoint))
#define IWICDevelopRaw_SetWhitePointKelvin(This,WhitePointKelvin) \
    ((This)->lpVtbl->SetWhitePointKelvin(This,WhitePointKelvin))
#define IWICDevelopRaw_GetWhitePointKelvin(This,pWhitePointKelvin) \
    ((This)->lpVtbl->GetWhitePointKelvin(This,pWhitePointKelvin))
#define IWICDevelopRaw_GetKelvinRangeInfo(This,pMinKelvinTemp,pMaxKelvinTemp,pKelvinTempStepValue) \
    ((This)->lpVtbl->GetKelvinRangeInfo(This,pMinKelvinTemp,pMaxKelvinTemp,pKelvinTempStepValue))
#define IWICDevelopRaw_SetContrast(This,Contrast) \
    ((This)->lpVtbl->SetContrast(This,Contrast))
#define IWICDevelopRaw_GetContrast(This,pContrast) \
    ((This)->lpVtbl->GetContrast(This,pContrast))
#define IWICDevelopRaw_SetGamma(This,Gamma) \
    ((This)->lpVtbl->SetGamma(This,Gamma))
#define IWICDevelopRaw_GetGamma(This,pGamma) \
    ((This)->lpVtbl->GetGamma(This,pGamma))
#define IWICDevelopRaw_SetSharpness(This,Sharpness) \
    ((This)->lpVtbl->SetSharpness(This,Sharpness))
#define IWICDevelopRaw_GetSharpness(This,pSharpness) \
    ((This)->lpVtbl->GetSharpness(This,pSharpness))
#define IWICDevelopRaw_SetSaturation(This,Saturation) \
    ((This)->lpVtbl->SetSaturation(This,Saturation))
#define IWICDevelopRaw_GetSaturation(This,pSaturation) \
    ((This)->lpVtbl->GetSaturation(This,pSaturation))
#define IWICDevelopRaw_SetTint(This,Tint) \
    ((This)->lpVtbl->SetTint(This,Tint))
#define IWICDevelopRaw_GetTint(This,pTint) \
    ((This)->lpVtbl->GetTint(This,pTint))
#define IWICDevelopRaw_SetNoiseReduction(This,NoiseReduction) \
    ((This)->lpVtbl->SetNoiseReduction(This,NoiseReduction))
#define IWICDevelopRaw_GetNoiseReduction(This,pNoiseReduction) \
    ((This)->lpVtbl->GetNoiseReduction(This,pNoiseReduction))
#define IWICDevelopRaw_SetDestinationColorContext(This,pColorContext) \
    ((This)->lpVtbl->SetDestinationColorContext(This,pColorContext))
#define IWICDevelopRaw_SetToneCurve(This,cbToneCurveSize,pToneCurve) \
    ((This)->lpVtbl->SetToneCurve(This,cbToneCurveSize,pToneCurve))
#define IWICDevelopRaw_GetToneCurve(This,cbToneCurveBufferSize,pToneCurve,pcbActualToneCurveBufferSize) \
    ((This)->lpVtbl->GetToneCurve(This,cbToneCurveBufferSize,pToneCurve,pcbActualToneCurveBufferSize))
#define IWICDevelopRaw_SetRotation(This,Rotation) \
    ((This)->lpVtbl->SetRotation(This,Rotation))
#define IWICDevelopRaw_GetRotation(This,pRotation) \
    ((This)->lpVtbl->GetRotation(This,pRotation))
#define IWICDevelopRaw_SetRenderMode(This,RenderMode) \
    ((This)->lpVtbl->SetRenderMode(This,RenderMode))
#define IWICDevelopRaw_GetRenderMode(This,pRenderMode) \
    ((This)->lpVtbl->GetRenderMode(This,pRenderMode))
#define IWICDevelopRaw_SetNotificationCallback(This,pCallback) \
    ((This)->lpVtbl->SetNotificationCallback(This,pCallback))
#endif /* COBJMACROS */

#endif /* C */

HRESULT STDMETHODCALLTYPE IWICDevelopRaw_Remote_QueryRawCapabilitiesInfo_Proxy(
    IWICDevelopRaw *This,
    WICRawCapabilitiesInfo *pInfo);

void __RPC_STUB IWICDevelopRaw_Remote_QueryRawCapabilitiesInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE IWICDevelopRaw_Remote_SetToneCurve_Proxy(
    IWICDevelopRaw *This,
    UINT cPoints,
    const WICRawToneCurvePoint *aPoints);

void __RPC_STUB IWICDevelopRaw_Remote_SetToneCurve_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT STDMETHODCALLTYPE IWICDevelopRaw_Remote_GetToneCurve_Proxy(
    IWICDevelopRaw *This,
    UINT *pcPoints,
    WICRawToneCurvePoint **paPoints);

void __RPC_STUB IWICDevelopRaw_Remote_GetToneCurve_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *pRpcChannelBuffer,
    PRPC_MESSAGE pRpcMessage,
    DWORD *pdwStubPhase);

HRESULT IWICDevelopRaw_QueryRawCapabilitiesInfo_Proxy(
    WICRawCapabilitiesInfo *pInfo);
HRESULT IWICDevelopRaw_QueryRawCapabilitiesInfo_Stub(
    WICRawCapabilitiesInfo *pInfo);
HRESULT IWICDevelopRaw_SetToneCurve_Proxy(
    UINT cbToneCurveSize,
    const WICRawToneCurve *pToneCurve);
HRESULT IWICDevelopRaw_SetToneCurve_Stub(
    UINT cPoints,
    const WICRawToneCurvePoint *aPoints);
HRESULT IWICDevelopRaw_GetToneCurve_Proxy(
    UINT cbToneCurveBufferSize,
    WICRawToneCurve *pToneCurve,
    UINT *pcbActualToneCurveBufferSize);
HRESULT IWICDevelopRaw_GetToneCurve_Stub(
    UINT *pcPoints,
    WICRawToneCurvePoint **paPoints);
#endif /* __IWICDevelopRaw_INTERFACE_DEFINED__ */

typedef enum WICDdsDimension {
    WICDdsTexture1D = 0x0,
    WICDdsTexture2D = 0x1,
    WICDdsTexture3D = 0x2,
    WICDdsTextureCube = 0x3,
    WICDDSTEXTURE_FORCE_DWORD = 0x7fffffff
} WICDdsDimension;

typedef enum WICDdsAlphaMode {
    WICDdsAlphaModeUnknown = 0x0,
    WICDdsAlphaModeStraight = 0x1,
    WICDdsAlphaModePremultiplied = 0x2,
    WICDdsAlphaModeOpaque = 0x3,
    WICDdsAlphaModeCustom = 0x4,
    WICDDSALPHAMODE_FORCE_DWORD = 0x7fffffff
} WICDdsAlphaMode;

typedef struct WICDdsParameters {
    UINT Width;
    UINT Height;
    UINT Depth;
    UINT MipLevels;
    UINT ArraySize;
    DXGI_FORMAT DxgiFormat;
    WICDdsDimension Dimension;
    WICDdsAlphaMode AlphaMode;
} WICDdsParameters;

/*****************************************************************************
 * IWICDdsDecoder interface
 */
#ifndef __IWICDdsDecoder_INTERFACE_DEFINED__
#define __IWICDdsDecoder_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICDdsDecoder;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICDdsDecoderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICDdsDecoder *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICDdsDecoder *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICDdsDecoder *This);

    /*** IWICDdsDecoder methods ***/
    HRESULT (STDMETHODCALLTYPE *GetParameters)(
        IWICDdsDecoder *This,
        WICDdsParameters *pParameters);

    HRESULT (STDMETHODCALLTYPE *GetFrame)(
        IWICDdsDecoder *This,
        UINT arrayIndex,
        UINT mipLevel,
        UINT sliceIndex,
        IWICBitmapFrameDecode **ppIBitmapFrame);

    END_INTERFACE
} IWICDdsDecoderVtbl;

interface IWICDdsDecoder {
    CONST_VTBL IWICDdsDecoderVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICDdsDecoder_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICDdsDecoder_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICDdsDecoder_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICDdsDecoder methods ***/
#define IWICDdsDecoder_GetParameters(This,pParameters) \
    ((This)->lpVtbl->GetParameters(This,pParameters))
#define IWICDdsDecoder_GetFrame(This,arrayIndex,mipLevel,sliceIndex,ppIBitmapFrame) \
    ((This)->lpVtbl->GetFrame(This,arrayIndex,mipLevel,sliceIndex,ppIBitmapFrame))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWICDdsDecoder_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWICDdsEncoder interface
 */
#ifndef __IWICDdsEncoder_INTERFACE_DEFINED__
#define __IWICDdsEncoder_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICDdsEncoder;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICDdsEncoderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICDdsEncoder *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICDdsEncoder *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICDdsEncoder *This);

    /*** IWICDdsEncoder methods ***/
    HRESULT (STDMETHODCALLTYPE *SetParameters)(
        IWICDdsEncoder *This,
        WICDdsParameters *pParameters);

    HRESULT (STDMETHODCALLTYPE *GetParameters)(
        IWICDdsEncoder *This,
        WICDdsParameters *pParameters);

    HRESULT (STDMETHODCALLTYPE *CreateNewFrame)(
        IWICDdsEncoder *This,
        IWICBitmapFrameEncode **ppIFrameEncode,
        UINT *pArrayIndex,
        UINT *pMipLevel,
        UINT *pSliceIndex);

    END_INTERFACE
} IWICDdsEncoderVtbl;

interface IWICDdsEncoder {
    CONST_VTBL IWICDdsEncoderVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICDdsEncoder_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICDdsEncoder_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICDdsEncoder_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICDdsEncoder methods ***/
#define IWICDdsEncoder_SetParameters(This,pParameters) \
    ((This)->lpVtbl->SetParameters(This,pParameters))
#define IWICDdsEncoder_GetParameters(This,pParameters) \
    ((This)->lpVtbl->GetParameters(This,pParameters))
#define IWICDdsEncoder_CreateNewFrame(This,ppIFrameEncode,pArrayIndex,pMipLevel,pSliceIndex) \
    ((This)->lpVtbl->CreateNewFrame(This,ppIFrameEncode,pArrayIndex,pMipLevel,pSliceIndex))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWICDdsEncoder_INTERFACE_DEFINED__ */

typedef struct WICDdsFormatInfo {
    DXGI_FORMAT DxgiFormat;
    UINT BytesPerBlock;
    UINT BlockWidth;
    UINT BlockHeight;
} WICDdsFormatInfo;

/*****************************************************************************
 * IWICDdsFrameDecode interface
 */
#ifndef __IWICDdsFrameDecode_INTERFACE_DEFINED__
#define __IWICDdsFrameDecode_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICDdsFrameDecode;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICDdsFrameDecodeVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICDdsFrameDecode *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICDdsFrameDecode *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICDdsFrameDecode *This);

    /*** IWICDdsFrameDecode methods ***/
    HRESULT (STDMETHODCALLTYPE *GetSizeInBlocks)(
        IWICDdsFrameDecode *This,
        UINT *pWidthInBlocks,
        UINT *pHeightInBlocks);

    HRESULT (STDMETHODCALLTYPE *GetFormatInfo)(
        IWICDdsFrameDecode *This,
        WICDdsFormatInfo *pFormatInfo);

    HRESULT (STDMETHODCALLTYPE *CopyBlocks)(
        IWICDdsFrameDecode *This,
        const WICRect *prcBoundsInBlocks,
        UINT cbStride,
        UINT cbBufferSize,
        BYTE *pbBuffer);

    END_INTERFACE
} IWICDdsFrameDecodeVtbl;

interface IWICDdsFrameDecode {
    CONST_VTBL IWICDdsFrameDecodeVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICDdsFrameDecode_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICDdsFrameDecode_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICDdsFrameDecode_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICDdsFrameDecode methods ***/
#define IWICDdsFrameDecode_GetSizeInBlocks(This,pWidthInBlocks,pHeightInBlocks) \
    ((This)->lpVtbl->GetSizeInBlocks(This,pWidthInBlocks,pHeightInBlocks))
#define IWICDdsFrameDecode_GetFormatInfo(This,pFormatInfo) \
    ((This)->lpVtbl->GetFormatInfo(This,pFormatInfo))
#define IWICDdsFrameDecode_CopyBlocks(This,prcBoundsInBlocks,cbStride,cbBufferSize,pbBuffer) \
    ((This)->lpVtbl->CopyBlocks(This,prcBoundsInBlocks,cbStride,cbBufferSize,pbBuffer))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWICDdsFrameDecode_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWICJpegFrameDecode interface
 */
#ifndef __IWICJpegFrameDecode_INTERFACE_DEFINED__
#define __IWICJpegFrameDecode_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICJpegFrameDecode;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICJpegFrameDecodeVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICJpegFrameDecode *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICJpegFrameDecode *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICJpegFrameDecode *This);

    /*** IWICJpegFrameDecode methods ***/
    HRESULT (STDMETHODCALLTYPE *DoesSupportIndexing)(
        IWICJpegFrameDecode *This,
        BOOL *pfIndexingSupported);

    HRESULT (STDMETHODCALLTYPE *SetIndexing)(
        IWICJpegFrameDecode *This,
        WICJpegIndexingOptions options,
        UINT horizontalIntervalSize);

    HRESULT (STDMETHODCALLTYPE *ClearIndexing)(
        IWICJpegFrameDecode *This);

    HRESULT (STDMETHODCALLTYPE *GetAcHuffmanTable)(
        IWICJpegFrameDecode *This,
        UINT scanIndex,
        UINT tableIndex,
        DXGI_JPEG_AC_HUFFMAN_TABLE *pAcHuffmanTable);

    HRESULT (STDMETHODCALLTYPE *GetDcHuffmanTable)(
        IWICJpegFrameDecode *This,
        UINT scanIndex,
        UINT tableIndex,
        DXGI_JPEG_DC_HUFFMAN_TABLE *pDcHuffmanTable);

    HRESULT (STDMETHODCALLTYPE *GetQuantizationTable)(
        IWICJpegFrameDecode *This,
        UINT scanIndex,
        UINT tableIndex,
        DXGI_JPEG_QUANTIZATION_TABLE *pQuantizationTable);

    HRESULT (STDMETHODCALLTYPE *GetFrameHeader)(
        IWICJpegFrameDecode *This,
        WICJpegFrameHeader *pFrameHeader);

    HRESULT (STDMETHODCALLTYPE *GetScanHeader)(
        IWICJpegFrameDecode *This,
        UINT scanIndex,
        WICJpegScanHeader *pScanHeader);

    HRESULT (STDMETHODCALLTYPE *CopyScan)(
        IWICJpegFrameDecode *This,
        UINT scanIndex,
        UINT scanOffset,
        UINT cbScanData,
        BYTE *pbScanData,
        UINT *pcbScanDataActual);

    HRESULT (STDMETHODCALLTYPE *CopyMinimalStream)(
        IWICJpegFrameDecode *This,
        UINT streamOffset,
        UINT cbStreamData,
        BYTE *pbStreamData,
        UINT *pcbStreamDataActual);

    END_INTERFACE
} IWICJpegFrameDecodeVtbl;

interface IWICJpegFrameDecode {
    CONST_VTBL IWICJpegFrameDecodeVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICJpegFrameDecode_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICJpegFrameDecode_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICJpegFrameDecode_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICJpegFrameDecode methods ***/
#define IWICJpegFrameDecode_DoesSupportIndexing(This,pfIndexingSupported) \
    ((This)->lpVtbl->DoesSupportIndexing(This,pfIndexingSupported))
#define IWICJpegFrameDecode_SetIndexing(This,options,horizontalIntervalSize) \
    ((This)->lpVtbl->SetIndexing(This,options,horizontalIntervalSize))
#define IWICJpegFrameDecode_ClearIndexing(This) \
    ((This)->lpVtbl->ClearIndexing(This))
#define IWICJpegFrameDecode_GetAcHuffmanTable(This,scanIndex,tableIndex,pAcHuffmanTable) \
    ((This)->lpVtbl->GetAcHuffmanTable(This,scanIndex,tableIndex,pAcHuffmanTable))
#define IWICJpegFrameDecode_GetDcHuffmanTable(This,scanIndex,tableIndex,pDcHuffmanTable) \
    ((This)->lpVtbl->GetDcHuffmanTable(This,scanIndex,tableIndex,pDcHuffmanTable))
#define IWICJpegFrameDecode_GetQuantizationTable(This,scanIndex,tableIndex,pQuantizationTable) \
    ((This)->lpVtbl->GetQuantizationTable(This,scanIndex,tableIndex,pQuantizationTable))
#define IWICJpegFrameDecode_GetFrameHeader(This,pFrameHeader) \
    ((This)->lpVtbl->GetFrameHeader(This,pFrameHeader))
#define IWICJpegFrameDecode_GetScanHeader(This,scanIndex,pScanHeader) \
    ((This)->lpVtbl->GetScanHeader(This,scanIndex,pScanHeader))
#define IWICJpegFrameDecode_CopyScan(This,scanIndex,scanOffset,cbScanData,pbScanData,pcbScanDataActual) \
    ((This)->lpVtbl->CopyScan(This,scanIndex,scanOffset,cbScanData,pbScanData,pcbScanDataActual))
#define IWICJpegFrameDecode_CopyMinimalStream(This,streamOffset,cbStreamData,pbStreamData,pcbStreamDataActual) \
    ((This)->lpVtbl->CopyMinimalStream(This,streamOffset,cbStreamData,pbStreamData,pcbStreamDataActual))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWICJpegFrameDecode_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IWICJpegFrameEncode interface
 */
#ifndef __IWICJpegFrameEncode_INTERFACE_DEFINED__
#define __IWICJpegFrameEncode_INTERFACE_DEFINED__

EXTERN_C const IID IID_IWICJpegFrameEncode;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IWICJpegFrameEncodeVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IWICJpegFrameEncode *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IWICJpegFrameEncode *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IWICJpegFrameEncode *This);

    /*** IWICJpegFrameEncode methods ***/
    HRESULT (STDMETHODCALLTYPE *GetAcHuffmanTable)(
        IWICJpegFrameEncode *This,
        UINT scanIndex,
        UINT tableIndex,
        DXGI_JPEG_AC_HUFFMAN_TABLE *pAcHuffmanTable);

    HRESULT (STDMETHODCALLTYPE *GetDcHuffmanTable)(
        IWICJpegFrameEncode *This,
        UINT scanIndex,
        UINT tableIndex,
        DXGI_JPEG_DC_HUFFMAN_TABLE *pDcHuffmanTable);

    HRESULT (STDMETHODCALLTYPE *GetQuantizationTable)(
        IWICJpegFrameEncode *This,
        UINT scanIndex,
        UINT tableIndex,
        DXGI_JPEG_QUANTIZATION_TABLE *pQuantizationTable);

    HRESULT (STDMETHODCALLTYPE *WriteScan)(
        IWICJpegFrameEncode *This,
        UINT cbScanData,
        const BYTE *pbScanData);

    END_INTERFACE
} IWICJpegFrameEncodeVtbl;

interface IWICJpegFrameEncode {
    CONST_VTBL IWICJpegFrameEncodeVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IWICJpegFrameEncode_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IWICJpegFrameEncode_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IWICJpegFrameEncode_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IWICJpegFrameEncode methods ***/
#define IWICJpegFrameEncode_GetAcHuffmanTable(This,scanIndex,tableIndex,pAcHuffmanTable) \
    ((This)->lpVtbl->GetAcHuffmanTable(This,scanIndex,tableIndex,pAcHuffmanTable))
#define IWICJpegFrameEncode_GetDcHuffmanTable(This,scanIndex,tableIndex,pDcHuffmanTable) \
    ((This)->lpVtbl->GetDcHuffmanTable(This,scanIndex,tableIndex,pDcHuffmanTable))
#define IWICJpegFrameEncode_GetQuantizationTable(This,scanIndex,tableIndex,pQuantizationTable) \
    ((This)->lpVtbl->GetQuantizationTable(This,scanIndex,tableIndex,pQuantizationTable))
#define IWICJpegFrameEncode_WriteScan(This,cbScanData,pbScanData) \
    ((This)->lpVtbl->WriteScan(This,cbScanData,pbScanData))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IWICJpegFrameEncode_INTERFACE_DEFINED__ */
/* Begin additional prototypes for all interfaces */

ULONG __RPC_USER WICInProcPointer_UserSize(ULONG *, ULONG, WICInProcPointer *);
unsigned char * __RPC_USER WICInProcPointer_UserMarshal(ULONG *, unsigned char *, WICInProcPointer *);
unsigned char * __RPC_USER WICInProcPointer_UserUnmarshal(ULONG *, unsigned char *, WICInProcPointer *);
void __RPC_USER WICInProcPointer_UserFree(ULONG *, WICInProcPointer *);
ULONG __RPC_USER BSTR_UserSize(ULONG *, ULONG, BSTR *);
unsigned char * __RPC_USER BSTR_UserMarshal(ULONG *, unsigned char *, BSTR *);
unsigned char * __RPC_USER BSTR_UserUnmarshal(ULONG *, unsigned char *, BSTR *);
void __RPC_USER BSTR_UserFree(ULONG *, BSTR *);
ULONG __RPC_USER LPSAFEARRAY_UserSize(ULONG *, ULONG, LPSAFEARRAY *);
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal(ULONG *, unsigned char *, LPSAFEARRAY *);
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(ULONG *, unsigned char *, LPSAFEARRAY *);
void __RPC_USER LPSAFEARRAY_UserFree(ULONG *, LPSAFEARRAY *);
ULONG __RPC_USER HBITMAP_UserSize(ULONG *, ULONG, HBITMAP *);
unsigned char * __RPC_USER HBITMAP_UserMarshal(ULONG *, unsigned char *, HBITMAP *);
unsigned char * __RPC_USER HBITMAP_UserUnmarshal(ULONG *, unsigned char *, HBITMAP *);
void __RPC_USER HBITMAP_UserFree(ULONG *, HBITMAP *);
ULONG __RPC_USER HPALETTE_UserSize(ULONG *, ULONG, HPALETTE *);
unsigned char * __RPC_USER HPALETTE_UserMarshal(ULONG *, unsigned char *, HPALETTE *);
unsigned char * __RPC_USER HPALETTE_UserUnmarshal(ULONG *, unsigned char *, HPALETTE *);
void __RPC_USER HPALETTE_UserFree(ULONG *, HPALETTE *);
ULONG __RPC_USER HICON_UserSize(ULONG *, ULONG, HICON *);
unsigned char * __RPC_USER HICON_UserMarshal(ULONG *, unsigned char *, HICON *);
unsigned char * __RPC_USER HICON_UserUnmarshal(ULONG *, unsigned char *, HICON *);
void __RPC_USER HICON_UserFree(ULONG *, HICON *);

/* End additional prototypes for all interfaces */

#endif /* __wincodec_h__ */
