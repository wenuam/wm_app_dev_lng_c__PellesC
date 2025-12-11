/* Generated from sapi.idl by POIDL version 0.80 - Do not edit */

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

#ifndef __sapi_h__
#define __sapi_h__

#if __POCC__ >= 500
#pragma once
#endif

/* Forward declarations */

#ifndef __ISpNotifySource_FWD_DEFINED__
#define __ISpNotifySource_FWD_DEFINED__
typedef interface ISpNotifySource ISpNotifySource;
#endif /* __ISpNotifySource_FWD_DEFINED__ */

#ifndef __ISpNotifySink_FWD_DEFINED__
#define __ISpNotifySink_FWD_DEFINED__
typedef interface ISpNotifySink ISpNotifySink;
#endif /* __ISpNotifySink_FWD_DEFINED__ */

#ifndef __ISpNotifyTranslator_FWD_DEFINED__
#define __ISpNotifyTranslator_FWD_DEFINED__
typedef interface ISpNotifyTranslator ISpNotifyTranslator;
#endif /* __ISpNotifyTranslator_FWD_DEFINED__ */

#ifndef __ISpDataKey_FWD_DEFINED__
#define __ISpDataKey_FWD_DEFINED__
typedef interface ISpDataKey ISpDataKey;
#endif /* __ISpDataKey_FWD_DEFINED__ */

#ifndef __ISpRegDataKey_FWD_DEFINED__
#define __ISpRegDataKey_FWD_DEFINED__
typedef interface ISpRegDataKey ISpRegDataKey;
#endif /* __ISpRegDataKey_FWD_DEFINED__ */

#ifndef __ISpObjectTokenCategory_FWD_DEFINED__
#define __ISpObjectTokenCategory_FWD_DEFINED__
typedef interface ISpObjectTokenCategory ISpObjectTokenCategory;
#endif /* __ISpObjectTokenCategory_FWD_DEFINED__ */

#ifndef __ISpObjectToken_FWD_DEFINED__
#define __ISpObjectToken_FWD_DEFINED__
typedef interface ISpObjectToken ISpObjectToken;
#endif /* __ISpObjectToken_FWD_DEFINED__ */

#ifndef __ISpObjectTokenInit_FWD_DEFINED__
#define __ISpObjectTokenInit_FWD_DEFINED__
typedef interface ISpObjectTokenInit ISpObjectTokenInit;
#endif /* __ISpObjectTokenInit_FWD_DEFINED__ */

#ifndef __IEnumSpObjectTokens_FWD_DEFINED__
#define __IEnumSpObjectTokens_FWD_DEFINED__
typedef interface IEnumSpObjectTokens IEnumSpObjectTokens;
#endif /* __IEnumSpObjectTokens_FWD_DEFINED__ */

#ifndef __ISpObjectWithToken_FWD_DEFINED__
#define __ISpObjectWithToken_FWD_DEFINED__
typedef interface ISpObjectWithToken ISpObjectWithToken;
#endif /* __ISpObjectWithToken_FWD_DEFINED__ */

#ifndef __ISpResourceManager_FWD_DEFINED__
#define __ISpResourceManager_FWD_DEFINED__
typedef interface ISpResourceManager ISpResourceManager;
#endif /* __ISpResourceManager_FWD_DEFINED__ */

#ifndef __ISpEventSource_FWD_DEFINED__
#define __ISpEventSource_FWD_DEFINED__
typedef interface ISpEventSource ISpEventSource;
#endif /* __ISpEventSource_FWD_DEFINED__ */

#ifndef __ISpEventSource2_FWD_DEFINED__
#define __ISpEventSource2_FWD_DEFINED__
typedef interface ISpEventSource2 ISpEventSource2;
#endif /* __ISpEventSource2_FWD_DEFINED__ */

#ifndef __ISpEventSink_FWD_DEFINED__
#define __ISpEventSink_FWD_DEFINED__
typedef interface ISpEventSink ISpEventSink;
#endif /* __ISpEventSink_FWD_DEFINED__ */

#ifndef __ISpStreamFormat_FWD_DEFINED__
#define __ISpStreamFormat_FWD_DEFINED__
typedef interface ISpStreamFormat ISpStreamFormat;
#endif /* __ISpStreamFormat_FWD_DEFINED__ */

#ifndef __ISpStream_FWD_DEFINED__
#define __ISpStream_FWD_DEFINED__
typedef interface ISpStream ISpStream;
#endif /* __ISpStream_FWD_DEFINED__ */

#ifndef __ISpStreamFormatConverter_FWD_DEFINED__
#define __ISpStreamFormatConverter_FWD_DEFINED__
typedef interface ISpStreamFormatConverter ISpStreamFormatConverter;
#endif /* __ISpStreamFormatConverter_FWD_DEFINED__ */

#ifndef __ISpAudio_FWD_DEFINED__
#define __ISpAudio_FWD_DEFINED__
typedef interface ISpAudio ISpAudio;
#endif /* __ISpAudio_FWD_DEFINED__ */

#ifndef __ISpMMSysAudio_FWD_DEFINED__
#define __ISpMMSysAudio_FWD_DEFINED__
typedef interface ISpMMSysAudio ISpMMSysAudio;
#endif /* __ISpMMSysAudio_FWD_DEFINED__ */

#ifndef __ISpTranscript_FWD_DEFINED__
#define __ISpTranscript_FWD_DEFINED__
typedef interface ISpTranscript ISpTranscript;
#endif /* __ISpTranscript_FWD_DEFINED__ */

#ifndef __ISpLexicon_FWD_DEFINED__
#define __ISpLexicon_FWD_DEFINED__
typedef interface ISpLexicon ISpLexicon;
#endif /* __ISpLexicon_FWD_DEFINED__ */

#ifndef __ISpContainerLexicon_FWD_DEFINED__
#define __ISpContainerLexicon_FWD_DEFINED__
typedef interface ISpContainerLexicon ISpContainerLexicon;
#endif /* __ISpContainerLexicon_FWD_DEFINED__ */

#ifndef __ISpShortcut_FWD_DEFINED__
#define __ISpShortcut_FWD_DEFINED__
typedef interface ISpShortcut ISpShortcut;
#endif /* __ISpShortcut_FWD_DEFINED__ */

#ifndef __ISpPhoneConverter_FWD_DEFINED__
#define __ISpPhoneConverter_FWD_DEFINED__
typedef interface ISpPhoneConverter ISpPhoneConverter;
#endif /* __ISpPhoneConverter_FWD_DEFINED__ */

#ifndef __ISpPhoneticAlphabetConverter_FWD_DEFINED__
#define __ISpPhoneticAlphabetConverter_FWD_DEFINED__
typedef interface ISpPhoneticAlphabetConverter ISpPhoneticAlphabetConverter;
#endif /* __ISpPhoneticAlphabetConverter_FWD_DEFINED__ */

#ifndef __ISpPhoneticAlphabetSelection_FWD_DEFINED__
#define __ISpPhoneticAlphabetSelection_FWD_DEFINED__
typedef interface ISpPhoneticAlphabetSelection ISpPhoneticAlphabetSelection;
#endif /* __ISpPhoneticAlphabetSelection_FWD_DEFINED__ */

#ifndef __ISpVoice_FWD_DEFINED__
#define __ISpVoice_FWD_DEFINED__
typedef interface ISpVoice ISpVoice;
#endif /* __ISpVoice_FWD_DEFINED__ */

#ifndef __ISpPhrase_FWD_DEFINED__
#define __ISpPhrase_FWD_DEFINED__
typedef interface ISpPhrase ISpPhrase;
#endif /* __ISpPhrase_FWD_DEFINED__ */

#ifndef __ISpPhraseAlt_FWD_DEFINED__
#define __ISpPhraseAlt_FWD_DEFINED__
typedef interface ISpPhraseAlt ISpPhraseAlt;
#endif /* __ISpPhraseAlt_FWD_DEFINED__ */

#ifndef __ISpPhrase2_FWD_DEFINED__
#define __ISpPhrase2_FWD_DEFINED__
typedef interface ISpPhrase2 ISpPhrase2;
#endif /* __ISpPhrase2_FWD_DEFINED__ */

#ifndef __ISpRecoResult_FWD_DEFINED__
#define __ISpRecoResult_FWD_DEFINED__
typedef interface ISpRecoResult ISpRecoResult;
#endif /* __ISpRecoResult_FWD_DEFINED__ */

#ifndef __ISpRecoResult2_FWD_DEFINED__
#define __ISpRecoResult2_FWD_DEFINED__
typedef interface ISpRecoResult2 ISpRecoResult2;
#endif /* __ISpRecoResult2_FWD_DEFINED__ */

#ifndef __ISpXMLRecoResult_FWD_DEFINED__
#define __ISpXMLRecoResult_FWD_DEFINED__
typedef interface ISpXMLRecoResult ISpXMLRecoResult;
#endif /* __ISpXMLRecoResult_FWD_DEFINED__ */

#ifndef __ISpGrammarBuilder_FWD_DEFINED__
#define __ISpGrammarBuilder_FWD_DEFINED__
typedef interface ISpGrammarBuilder ISpGrammarBuilder;
#endif /* __ISpGrammarBuilder_FWD_DEFINED__ */

#ifndef __ISpRecoGrammar_FWD_DEFINED__
#define __ISpRecoGrammar_FWD_DEFINED__
typedef interface ISpRecoGrammar ISpRecoGrammar;
#endif /* __ISpRecoGrammar_FWD_DEFINED__ */

#ifndef __ISpGrammarBuilder2_FWD_DEFINED__
#define __ISpGrammarBuilder2_FWD_DEFINED__
typedef interface ISpGrammarBuilder2 ISpGrammarBuilder2;
#endif /* __ISpGrammarBuilder2_FWD_DEFINED__ */

#ifndef __ISpRecoGrammar2_FWD_DEFINED__
#define __ISpRecoGrammar2_FWD_DEFINED__
typedef interface ISpRecoGrammar2 ISpRecoGrammar2;
#endif /* __ISpRecoGrammar2_FWD_DEFINED__ */

#ifndef __ISpeechResourceLoader_FWD_DEFINED__
#define __ISpeechResourceLoader_FWD_DEFINED__
typedef interface ISpeechResourceLoader ISpeechResourceLoader;
#endif /* __ISpeechResourceLoader_FWD_DEFINED__ */

#ifndef __ISpRecoContext_FWD_DEFINED__
#define __ISpRecoContext_FWD_DEFINED__
typedef interface ISpRecoContext ISpRecoContext;
#endif /* __ISpRecoContext_FWD_DEFINED__ */

#ifndef __ISpRecoContext2_FWD_DEFINED__
#define __ISpRecoContext2_FWD_DEFINED__
typedef interface ISpRecoContext2 ISpRecoContext2;
#endif /* __ISpRecoContext2_FWD_DEFINED__ */

#ifndef __ISpProperties_FWD_DEFINED__
#define __ISpProperties_FWD_DEFINED__
typedef interface ISpProperties ISpProperties;
#endif /* __ISpProperties_FWD_DEFINED__ */

#ifndef __ISpRecognizer_FWD_DEFINED__
#define __ISpRecognizer_FWD_DEFINED__
typedef interface ISpRecognizer ISpRecognizer;
#endif /* __ISpRecognizer_FWD_DEFINED__ */

#ifndef __ISpSerializeState_FWD_DEFINED__
#define __ISpSerializeState_FWD_DEFINED__
typedef interface ISpSerializeState ISpSerializeState;
#endif /* __ISpSerializeState_FWD_DEFINED__ */

#ifndef __ISpRecognizer2_FWD_DEFINED__
#define __ISpRecognizer2_FWD_DEFINED__
typedef interface ISpRecognizer2 ISpRecognizer2;
#endif /* __ISpRecognizer2_FWD_DEFINED__ */

#ifndef __ISpRecoCategory_FWD_DEFINED__
#define __ISpRecoCategory_FWD_DEFINED__
typedef interface ISpRecoCategory ISpRecoCategory;
#endif /* __ISpRecoCategory_FWD_DEFINED__ */

#ifndef __ISpRecognizer3_FWD_DEFINED__
#define __ISpRecognizer3_FWD_DEFINED__
typedef interface ISpRecognizer3 ISpRecognizer3;
#endif /* __ISpRecognizer3_FWD_DEFINED__ */

#ifndef __ISpEnginePronunciation_FWD_DEFINED__
#define __ISpEnginePronunciation_FWD_DEFINED__
typedef interface ISpEnginePronunciation ISpEnginePronunciation;
#endif /* __ISpEnginePronunciation_FWD_DEFINED__ */

#ifndef __ISpDisplayAlternates_FWD_DEFINED__
#define __ISpDisplayAlternates_FWD_DEFINED__
typedef interface ISpDisplayAlternates ISpDisplayAlternates;
#endif /* __ISpDisplayAlternates_FWD_DEFINED__ */

#ifndef __SpNotifyTranslator_FWD_DEFINED__
#define __SpNotifyTranslator_FWD_DEFINED__
typedef struct SpNotifyTranslator SpNotifyTranslator;
#endif /* __SpNotifyTranslator_FWD_DEFINED__ */

#ifndef __SpObjectTokenCategory_FWD_DEFINED__
#define __SpObjectTokenCategory_FWD_DEFINED__
typedef struct SpObjectTokenCategory SpObjectTokenCategory;
#endif /* __SpObjectTokenCategory_FWD_DEFINED__ */

#ifndef __SpObjectToken_FWD_DEFINED__
#define __SpObjectToken_FWD_DEFINED__
typedef struct SpObjectToken SpObjectToken;
#endif /* __SpObjectToken_FWD_DEFINED__ */

#ifndef __SpResourceManager_FWD_DEFINED__
#define __SpResourceManager_FWD_DEFINED__
typedef struct SpResourceManager SpResourceManager;
#endif /* __SpResourceManager_FWD_DEFINED__ */

#ifndef __SpStreamFormatConverter_FWD_DEFINED__
#define __SpStreamFormatConverter_FWD_DEFINED__
typedef struct SpStreamFormatConverter SpStreamFormatConverter;
#endif /* __SpStreamFormatConverter_FWD_DEFINED__ */

#ifndef __SpMMAudioEnum_FWD_DEFINED__
#define __SpMMAudioEnum_FWD_DEFINED__
typedef struct SpMMAudioEnum SpMMAudioEnum;
#endif /* __SpMMAudioEnum_FWD_DEFINED__ */

#ifndef __SpMMAudioIn_FWD_DEFINED__
#define __SpMMAudioIn_FWD_DEFINED__
typedef struct SpMMAudioIn SpMMAudioIn;
#endif /* __SpMMAudioIn_FWD_DEFINED__ */

#ifndef __SpMMAudioOut_FWD_DEFINED__
#define __SpMMAudioOut_FWD_DEFINED__
typedef struct SpMMAudioOut SpMMAudioOut;
#endif /* __SpMMAudioOut_FWD_DEFINED__ */

#ifndef __SpStream_FWD_DEFINED__
#define __SpStream_FWD_DEFINED__
typedef struct SpStream SpStream;
#endif /* __SpStream_FWD_DEFINED__ */

#ifndef __SpVoice_FWD_DEFINED__
#define __SpVoice_FWD_DEFINED__
typedef struct SpVoice SpVoice;
#endif /* __SpVoice_FWD_DEFINED__ */

#ifndef __SpSharedRecoContext_FWD_DEFINED__
#define __SpSharedRecoContext_FWD_DEFINED__
typedef struct SpSharedRecoContext SpSharedRecoContext;
#endif /* __SpSharedRecoContext_FWD_DEFINED__ */

#ifndef __SpInprocRecognizer_FWD_DEFINED__
#define __SpInprocRecognizer_FWD_DEFINED__
typedef struct SpInprocRecognizer SpInprocRecognizer;
#endif /* __SpInprocRecognizer_FWD_DEFINED__ */

#ifndef __SpSharedRecognizer_FWD_DEFINED__
#define __SpSharedRecognizer_FWD_DEFINED__
typedef struct SpSharedRecognizer SpSharedRecognizer;
#endif /* __SpSharedRecognizer_FWD_DEFINED__ */

#ifndef __SpLexicon_FWD_DEFINED__
#define __SpLexicon_FWD_DEFINED__
typedef struct SpLexicon SpLexicon;
#endif /* __SpLexicon_FWD_DEFINED__ */

#ifndef __SpUnCompressedLexicon_FWD_DEFINED__
#define __SpUnCompressedLexicon_FWD_DEFINED__
typedef struct SpUnCompressedLexicon SpUnCompressedLexicon;
#endif /* __SpUnCompressedLexicon_FWD_DEFINED__ */

#ifndef __SpCompressedLexicon_FWD_DEFINED__
#define __SpCompressedLexicon_FWD_DEFINED__
typedef struct SpCompressedLexicon SpCompressedLexicon;
#endif /* __SpCompressedLexicon_FWD_DEFINED__ */

#ifndef __SpShortcut_FWD_DEFINED__
#define __SpShortcut_FWD_DEFINED__
typedef struct SpShortcut SpShortcut;
#endif /* __SpShortcut_FWD_DEFINED__ */

#ifndef __SpPhoneConverter_FWD_DEFINED__
#define __SpPhoneConverter_FWD_DEFINED__
typedef struct SpPhoneConverter SpPhoneConverter;
#endif /* __SpPhoneConverter_FWD_DEFINED__ */

#ifndef __SpPhoneticAlphabetConverter_FWD_DEFINED__
#define __SpPhoneticAlphabetConverter_FWD_DEFINED__
typedef struct SpPhoneticAlphabetConverter SpPhoneticAlphabetConverter;
#endif /* __SpPhoneticAlphabetConverter_FWD_DEFINED__ */

#ifndef __SpNullPhoneConverter_FWD_DEFINED__
#define __SpNullPhoneConverter_FWD_DEFINED__
typedef struct SpNullPhoneConverter SpNullPhoneConverter;
#endif /* __SpNullPhoneConverter_FWD_DEFINED__ */

/* Headers for imported files */

#include "oaidl.h"
#include "ocidl.h"


#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#ifndef _SAPI_VER

// Use SAPI 5.4 by default if target Windows 7 or above
#if _WIN32_WINNT >= 0x0601
#define _SAPI_VER 0x054
#elif _WIN32_WINNT >= 0x0600
#define _SAPI_VER 0x053
#else // _WIN32_WINNT < 0x0600
#define _SAPI_VER 0x051
#endif // _WIN32_WINNT >= 0x0601

#endif // _SAPI_VER

// The following definitions are for SAPI 5.4 and newer
#if  _SAPI_VER >= 0x054

#pragma comment(lib, "sapi.lib")

#include <mmsystem.h>

#ifndef __ISpNotifySource_FWD_DEFINED__
#define __ISpNotifySource_FWD_DEFINED__
typedef interface ISpNotifySource ISpNotifySource;
#endif /* __ISpNotifySource_FWD_DEFINED__ */

#ifndef __ISpNotifySink_FWD_DEFINED__
#define __ISpNotifySink_FWD_DEFINED__
typedef interface ISpNotifySink ISpNotifySink;
#endif /* __ISpNotifySink_FWD_DEFINED__ */

#ifndef __ISpNotifyTranslator_FWD_DEFINED__
#define __ISpNotifyTranslator_FWD_DEFINED__
typedef interface ISpNotifyTranslator ISpNotifyTranslator;
#endif /* __ISpNotifyTranslator_FWD_DEFINED__ */


#ifndef __ISpDataKey_FWD_DEFINED__
#define __ISpDataKey_FWD_DEFINED__
typedef interface ISpDataKey ISpDataKey;
#endif /* __ISpDataKey_FWD_DEFINED__ */

#ifndef __ISpObjectTokenCategory_FWD_DEFINED__
#define __ISpObjectTokenCategory_FWD_DEFINED__
typedef interface ISpObjectTokenCategory ISpObjectTokenCategory;
#endif /* __ISpObjectTokenCategory_FWD_DEFINED__ */

#ifndef __ISpObjectToken_FWD_DEFINED__
#define __ISpObjectToken_FWD_DEFINED__
typedef interface ISpObjectToken ISpObjectToken;
#endif /* __ISpObjectToken_FWD_DEFINED__ */

#ifndef __IEnumSpObjectTokens_FWD_DEFINED__
#define __IEnumSpObjectTokens_FWD_DEFINED__
typedef interface IEnumSpObjectTokens IEnumSpObjectTokens;
#endif /* __IEnumSpObjectTokens_FWD_DEFINED__ */

#ifndef __ISpObjectWithToken_FWD_DEFINED__
#define __ISpObjectWithToken_FWD_DEFINED__
typedef interface ISpObjectWithToken ISpObjectWithToken;
#endif /* __ISpObjectWithToken_FWD_DEFINED__ */


#ifndef __ISpResourceManager_FWD_DEFINED__
#define __ISpResourceManager_FWD_DEFINED__
typedef interface ISpResourceManager ISpResourceManager;
#endif /* __ISpResourceManager_FWD_DEFINED__ */


#ifndef __ISpEventSource_FWD_DEFINED__
#define __ISpEventSource_FWD_DEFINED__
typedef interface ISpEventSource ISpEventSource;
#endif /* __ISpEventSource_FWD_DEFINED__ */

#ifndef __ISpEventSink_FWD_DEFINED__
#define __ISpEventSink_FWD_DEFINED__
typedef interface ISpEventSink ISpEventSink;
#endif /* __ISpEventSink_FWD_DEFINED__ */


#ifndef __ISpStreamFormat_FWD_DEFINED__
#define __ISpStreamFormat_FWD_DEFINED__
typedef interface ISpStreamFormat ISpStreamFormat;
#endif /* __ISpStreamFormat_FWD_DEFINED__ */

#ifndef __ISpStream_FWD_DEFINED__
#define __ISpStream_FWD_DEFINED__
typedef interface ISpStream ISpStream;
#endif /* __ISpStream_FWD_DEFINED__ */

#ifndef __ISpStreamFormatConverter_FWD_DEFINED__
#define __ISpStreamFormatConverter_FWD_DEFINED__
typedef interface ISpStreamFormatConverter ISpStreamFormatConverter;
#endif /* __ISpStreamFormatConverter_FWD_DEFINED__ */

#ifndef __ISpAudio_FWD_DEFINED__
#define __ISpAudio_FWD_DEFINED__
typedef interface ISpAudio ISpAudio;
#endif /* __ISpAudio_FWD_DEFINED__ */

#ifndef __ISpMMSysAudio_FWD_DEFINED__
#define __ISpMMSysAudio_FWD_DEFINED__
typedef interface ISpMMSysAudio ISpMMSysAudio;
#endif /* __ISpMMSysAudio_FWD_DEFINED__ */

#ifndef __ISpTranscript_FWD_DEFINED__
#define __ISpTranscript_FWD_DEFINED__
typedef interface ISpTranscript ISpTranscript;
#endif /* __ISpTranscript_FWD_DEFINED__ */


#ifndef __ISpVoice_FWD_DEFINED__
#define __ISpVoice_FWD_DEFINED__
typedef interface ISpVoice ISpVoice;
#endif /* __ISpVoice_FWD_DEFINED__ */


#ifndef __ISpRecoResult_FWD_DEFINED__
#define __ISpRecoResult_FWD_DEFINED__
typedef interface ISpRecoResult ISpRecoResult;
#endif /* __ISpRecoResult_FWD_DEFINED__ */

#ifndef __ISpRecoContext_FWD_DEFINED__
#define __ISpRecoContext_FWD_DEFINED__
typedef interface ISpRecoContext ISpRecoContext;
#endif /* __ISpRecoContext_FWD_DEFINED__ */

#ifndef __ISpRecognizer_FWD_DEFINED__
#define __ISpRecognizer_FWD_DEFINED__
typedef interface ISpRecognizer ISpRecognizer;
#endif /* __ISpRecognizer_FWD_DEFINED__ */


#ifndef __ISpRecoContext2_FWD_DEFINED__
#define __ISpRecoContext2_FWD_DEFINED__
typedef interface ISpRecoContext2 ISpRecoContext2;
#endif /* __ISpRecoContext2_FWD_DEFINED__ */

#ifndef __ISpRecognizer2_FWD_DEFINED__
#define __ISpRecognizer2_FWD_DEFINED__
typedef interface ISpRecognizer2 ISpRecognizer2;
#endif /* __ISpRecognizer2_FWD_DEFINED__ */


#ifndef __ISpRecognizer3_FWD_DEFINED__
#define __ISpRecognizer3_FWD_DEFINED__
typedef interface ISpRecognizer3 ISpRecognizer3;
#endif /* __ISpRecognizer3_FWD_DEFINED__ */


#ifndef __ISpProperties_FWD_DEFINED__
#define __ISpProperties_FWD_DEFINED__
typedef interface ISpProperties ISpProperties;
#endif /* __ISpProperties_FWD_DEFINED__ */


#ifndef __ISpLexicon_FWD_DEFINED__
#define __ISpLexicon_FWD_DEFINED__
typedef interface ISpLexicon ISpLexicon;
#endif /* __ISpLexicon_FWD_DEFINED__ */


#ifndef __ISpShortcut_FWD_DEFINED__
#define __ISpShortcut_FWD_DEFINED__
typedef interface ISpShortcut ISpShortcut;
#endif /* __ISpShortcut_FWD_DEFINED__ */


#ifndef __ISpPhoneConverter_FWD_DEFINED__
#define __ISpPhoneConverter_FWD_DEFINED__
typedef interface ISpPhoneConverter ISpPhoneConverter;
#endif /* __ISpPhoneConverter_FWD_DEFINED__ */


#ifndef __ISpPhoneticAlphabetConverter_FWD_DEFINED__
#define __ISpPhoneticAlphabetConverter_FWD_DEFINED__
typedef interface ISpPhoneticAlphabetConverter ISpPhoneticAlphabetConverter;
#endif /* __ISpPhoneticAlphabetConverter_FWD_DEFINED__ */

#ifndef __ISpPhoneticAlphabetSelection_FWD_DEFINED__
#define __ISpPhoneticAlphabetSelection_FWD_DEFINED__
typedef interface ISpPhoneticAlphabetSelection ISpPhoneticAlphabetSelection;
#endif /* __ISpPhoneticAlphabetSelection_FWD_DEFINED__ */


#ifndef __ISpPhrase_FWD_DEFINED__
#define __ISpPhrase_FWD_DEFINED__
typedef interface ISpPhrase ISpPhrase;
#endif /* __ISpPhrase_FWD_DEFINED__ */


#ifndef __ISpRecoGrammar2_FWD_DEFINED__
#define __ISpRecoGrammar2_FWD_DEFINED__
typedef interface ISpRecoGrammar2 ISpRecoGrammar2;
#endif /* __ISpRecoGrammar2_FWD_DEFINED__ */

#ifndef __ISpeechResourceLoader_FWD_DEFINED__
#define __ISpeechResourceLoader_FWD_DEFINED__
typedef interface ISpeechResourceLoader ISpeechResourceLoader;
#endif /* __ISpeechResourceLoader_FWD_DEFINED__ */

typedef enum SPDATAKEYLOCATION {
    SPDKL_DefaultLocation = 0,
    SPDKL_CurrentUser = 1,
    SPDKL_LocalMachine = 2,
    SPDKL_CurrentConfig = 5
} SPDATAKEYLOCATION;

#define SPDUI_EngineProperties   L"EngineProperties"
#define SPDUI_AddRemoveWord      L"AddRemoveWord"
#define SPDUI_UserTraining       L"UserTraining"
#define SPDUI_MicTraining        L"MicTraining"
#define SPDUI_RecoProfileProperties L"RecoProfileProperties"
#define SPDUI_AudioProperties    L"AudioProperties"
#define SPDUI_AudioVolume        L"AudioVolume"
#define SPDUI_UserEnrollment     L"UserEnrollment"
#define SPDUI_ShareData          L"ShareData"

#define SPDUI_Tutorial           L"Tutorial"

typedef enum SPSTREAMFORMAT {
    SPSF_Default = -1,
    SPSF_NoAssignedFormat = 0,
    SPSF_Text = 1,
    SPSF_NonStandardFormat = 2,
    SPSF_ExtendedAudioFormat = 3,
    SPSF_8kHz8BitMono = 4,
    SPSF_8kHz8BitStereo = 5,
    SPSF_8kHz16BitMono = 6,
    SPSF_8kHz16BitStereo = 7,
    SPSF_11kHz8BitMono = 8,
    SPSF_11kHz8BitStereo = 9,
    SPSF_11kHz16BitMono = 10,
    SPSF_11kHz16BitStereo = 11,
    SPSF_12kHz8BitMono = 12,
    SPSF_12kHz8BitStereo = 13,
    SPSF_12kHz16BitMono = 14,
    SPSF_12kHz16BitStereo = 15,
    SPSF_16kHz8BitMono = 16,
    SPSF_16kHz8BitStereo = 17,
    SPSF_16kHz16BitMono = 18,
    SPSF_16kHz16BitStereo = 19,
    SPSF_22kHz8BitMono = 20,
    SPSF_22kHz8BitStereo = 21,
    SPSF_22kHz16BitMono = 22,
    SPSF_22kHz16BitStereo = 23,
    SPSF_24kHz8BitMono = 24,
    SPSF_24kHz8BitStereo = 25,
    SPSF_24kHz16BitMono = 26,
    SPSF_24kHz16BitStereo = 27,
    SPSF_32kHz8BitMono = 28,
    SPSF_32kHz8BitStereo = 29,
    SPSF_32kHz16BitMono = 30,
    SPSF_32kHz16BitStereo = 31,
    SPSF_44kHz8BitMono = 32,
    SPSF_44kHz8BitStereo = 33,
    SPSF_44kHz16BitMono = 34,
    SPSF_44kHz16BitStereo = 35,
    SPSF_48kHz8BitMono = 36,
    SPSF_48kHz8BitStereo = 37,
    SPSF_48kHz16BitMono = 38,
    SPSF_48kHz16BitStereo = 39,
    SPSF_TrueSpeech_8kHz1BitMono = 40,
    SPSF_CCITT_ALaw_8kHzMono = 41,
    SPSF_CCITT_ALaw_8kHzStereo = 42,
    SPSF_CCITT_ALaw_11kHzMono = 43,
    SPSF_CCITT_ALaw_11kHzStereo = 44,
    SPSF_CCITT_ALaw_22kHzMono = 45,
    SPSF_CCITT_ALaw_22kHzStereo = 46,
    SPSF_CCITT_ALaw_44kHzMono = 47,
    SPSF_CCITT_ALaw_44kHzStereo = 48,
    SPSF_CCITT_uLaw_8kHzMono = 49,
    SPSF_CCITT_uLaw_8kHzStereo = 50,
    SPSF_CCITT_uLaw_11kHzMono = 51,
    SPSF_CCITT_uLaw_11kHzStereo = 52,
    SPSF_CCITT_uLaw_22kHzMono = 53,
    SPSF_CCITT_uLaw_22kHzStereo = 54,
    SPSF_CCITT_uLaw_44kHzMono = 55,
    SPSF_CCITT_uLaw_44kHzStereo = 56,
    SPSF_ADPCM_8kHzMono = 57,
    SPSF_ADPCM_8kHzStereo = 58,
    SPSF_ADPCM_11kHzMono = 59,
    SPSF_ADPCM_11kHzStereo = 60,
    SPSF_ADPCM_22kHzMono = 61,
    SPSF_ADPCM_22kHzStereo = 62,
    SPSF_ADPCM_44kHzMono = 63,
    SPSF_ADPCM_44kHzStereo = 64,
    SPSF_GSM610_8kHzMono = 65,
    SPSF_GSM610_11kHzMono = 66,
    SPSF_GSM610_22kHzMono = 67,
    SPSF_GSM610_44kHzMono = 68,
    SPSF_NUM_FORMATS = 69
} SPSTREAMFORMAT;

EXTERN_C const GUID SPDFID_Text;
EXTERN_C const GUID SPDFID_WaveFormatEx;

#define SPREG_USER_ROOT          L"HKEY_CURRENT_USER\\SOFTWARE\\Microsoft\\Speech"
#define SPREG_LOCAL_MACHINE_ROOT L"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Speech"

#define SPCAT_AUDIOOUT         L"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Speech\\AudioOutput"
#define SPCAT_AUDIOIN          L"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Speech\\AudioInput"
#define SPCAT_VOICES           L"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Speech\\Voices"
#define SPCAT_RECOGNIZERS      L"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Speech\\Recognizers"
#define SPCAT_APPLEXICONS      L"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Speech\\AppLexicons"
#define SPCAT_PHONECONVERTERS  L"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Speech\\PhoneConverters"
#define SPCAT_TEXTNORMALIZERS  L"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Speech\\TextNormalizers"
#define SPCAT_RECOPROFILES     L"HKEY_CURRENT_USER\\SOFTWARE\\Microsoft\\Speech\\RecoProfiles"

#define SPMMSYS_AUDIO_IN_TOKEN_ID        L"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Speech\\AudioInput\\TokenEnums\\MMAudioIn\\"
#define SPMMSYS_AUDIO_OUT_TOKEN_ID       L"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Speech\\AudioOutput\\TokenEnums\\MMAudioOut\\"
#define SPCURRENT_USER_LEXICON_TOKEN_ID  L"HKEY_CURRENT_USER\\SOFTWARE\\Microsoft\\Speech\\CurrentUserLexicon"

#define SPCURRENT_USER_SHORTCUT_TOKEN_ID  L"HKEY_CURRENT_USER\\SOFTWARE\\Microsoft\\Speech\\CurrentUserShortcut"

#define SPTOKENVALUE_CLSID L"CLSID"
#define SPTOKENKEY_FILES L"Files"
#define SPTOKENKEY_UI L"UI"
#define SPTOKENKEY_ATTRIBUTES L"Attributes"

#define SPTOKENKEY_RETAINEDAUDIO L"SecondsPerRetainedAudioEvent"
#define SPTOKENKEY_AUDIO_LATENCY_WARNING L"LatencyWarningThreshold"
#define SPTOKENKEY_AUDIO_LATENCY_TRUNCATE L"LatencyTruncateThreshold"
#define SPTOKENKEY_AUDIO_LATENCY_UPDATE_INTERVAL L"LatencyUpdateInterval"

#define SPVOICECATEGORY_TTSRATE L"DefaultTTSRate"

#define SPPROP_RESOURCE_USAGE              L"ResourceUsage"
#define SPPROP_HIGH_CONFIDENCE_THRESHOLD   L"HighConfidenceThreshold"
#define SPPROP_NORMAL_CONFIDENCE_THRESHOLD L"NormalConfidenceThreshold"
#define SPPROP_LOW_CONFIDENCE_THRESHOLD    L"LowConfidenceThreshold"
#define SPPROP_RESPONSE_SPEED              L"ResponseSpeed"
#define SPPROP_COMPLEX_RESPONSE_SPEED      L"ComplexResponseSpeed"
#define SPPROP_ADAPTATION_ON               L"AdaptationOn"

#define SPPROP_PERSISTED_BACKGROUND_ADAPTATION L"PersistedBackgroundAdaptation"
#define SPPROP_PERSISTED_LANGUAGE_MODEL_ADAPTATION L"PersistedLanguageModelAdaptation"
#define SPPROP_UX_IS_LISTENING             L"UXIsListening"

#define SPTOPIC_SPELLING L"Spelling"

#define SPWILDCARD L"..."

#define SPDICTATION    L"*"
#define SPINFDICTATION L"*+"

#define SPREG_SAFE_USER_TOKENS       L"HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Speech\\UserTokens"

#define SP_LOW_CONFIDENCE  (-1)
#define SP_NORMAL_CONFIDENCE  (0)
#define SP_HIGH_CONFIDENCE  (+1)

#define DEFAULT_WEIGHT  (1)

#define SP_MAX_WORD_LENGTH  (128)
#define SP_MAX_PRON_LENGTH  (384)

#define SP_EMULATE_RESULT  (0x40000000)

typedef void *ISpNotifyCallback;
typedef void __stdcall SPNOTIFYCALLBACK(WPARAM wParam, LPARAM lParam);

/*****************************************************************************
 * ISpNotifySource interface
 */
#ifndef __ISpNotifySource_INTERFACE_DEFINED__
#define __ISpNotifySource_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpNotifySource;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpNotifySourceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpNotifySource *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpNotifySource *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpNotifySource *This);

    /*** ISpNotifySource methods ***/
    HRESULT (STDMETHODCALLTYPE *SetNotifySink)(
        ISpNotifySource *This,
        ISpNotifySink *pNotifySink);

    HRESULT (STDMETHODCALLTYPE *SetNotifyWindowMessage)(
        ISpNotifySource *This,
        HWND hWnd,
        UINT Msg,
        WPARAM wParam,
        LPARAM lParam);

    HRESULT (STDMETHODCALLTYPE *SetNotifyCallbackFunction)(
        ISpNotifySource *This,
        SPNOTIFYCALLBACK *pfnCallback,
        WPARAM wParam,
        LPARAM lParam);

    HRESULT (STDMETHODCALLTYPE *SetNotifyCallbackInterface)(
        ISpNotifySource *This,
        ISpNotifyCallback *pSpCallback,
        WPARAM wParam,
        LPARAM lParam);

    HRESULT (STDMETHODCALLTYPE *SetNotifyWin32Event)(
        ISpNotifySource *This);

    HRESULT (STDMETHODCALLTYPE *WaitForNotifyEvent)(
        ISpNotifySource *This,
        DWORD dwMilliseconds);

    HANDLE (STDMETHODCALLTYPE *GetNotifyEventHandle)(
        ISpNotifySource *This);

    END_INTERFACE
} ISpNotifySourceVtbl;

interface ISpNotifySource {
    CONST_VTBL ISpNotifySourceVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpNotifySource_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpNotifySource_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpNotifySource_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISpNotifySource methods ***/
#define ISpNotifySource_SetNotifySink(This,pNotifySink) \
    ((This)->lpVtbl->SetNotifySink(This,pNotifySink))
#define ISpNotifySource_SetNotifyWindowMessage(This,hWnd,Msg,wParam,lParam) \
    ((This)->lpVtbl->SetNotifyWindowMessage(This,hWnd,Msg,wParam,lParam))
#define ISpNotifySource_SetNotifyCallbackFunction(This,pfnCallback,wParam,lParam) \
    ((This)->lpVtbl->SetNotifyCallbackFunction(This,pfnCallback,wParam,lParam))
#define ISpNotifySource_SetNotifyCallbackInterface(This,pSpCallback,wParam,lParam) \
    ((This)->lpVtbl->SetNotifyCallbackInterface(This,pSpCallback,wParam,lParam))
#define ISpNotifySource_SetNotifyWin32Event(This) \
    ((This)->lpVtbl->SetNotifyWin32Event(This))
#define ISpNotifySource_WaitForNotifyEvent(This,dwMilliseconds) \
    ((This)->lpVtbl->WaitForNotifyEvent(This,dwMilliseconds))
#define ISpNotifySource_GetNotifyEventHandle(This) \
    ((This)->lpVtbl->GetNotifyEventHandle(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpNotifySource_INTERFACE_DEFINED__ */
/*****************************************************************************
 * ISpNotifySink interface
 */
#ifndef __ISpNotifySink_INTERFACE_DEFINED__
#define __ISpNotifySink_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpNotifySink;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpNotifySinkVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpNotifySink *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpNotifySink *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpNotifySink *This);

    /*** ISpNotifySink methods ***/
    HRESULT (STDMETHODCALLTYPE *Notify)(
        ISpNotifySink *This);

    END_INTERFACE
} ISpNotifySinkVtbl;

interface ISpNotifySink {
    CONST_VTBL ISpNotifySinkVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpNotifySink_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpNotifySink_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpNotifySink_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISpNotifySink methods ***/
#define ISpNotifySink_Notify(This) \
    ((This)->lpVtbl->Notify(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpNotifySink_INTERFACE_DEFINED__ */
/*****************************************************************************
 * ISpNotifyTranslator interface
 */
#ifndef __ISpNotifyTranslator_INTERFACE_DEFINED__
#define __ISpNotifyTranslator_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpNotifyTranslator;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpNotifyTranslatorVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpNotifyTranslator *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpNotifyTranslator *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpNotifyTranslator *This);

    /*** ISpNotifySink methods ***/
    HRESULT (STDMETHODCALLTYPE *Notify)(
        ISpNotifyTranslator *This);

    /*** ISpNotifyTranslator methods ***/
    HRESULT (STDMETHODCALLTYPE *InitWindowMessage)(
        ISpNotifyTranslator *This,
        HWND hWnd,
        UINT Msg,
        WPARAM wParam,
        LPARAM lParam);

    HRESULT (STDMETHODCALLTYPE *InitCallback)(
        ISpNotifyTranslator *This,
        SPNOTIFYCALLBACK *pfnCallback,
        WPARAM wParam,
        LPARAM lParam);

    HRESULT (STDMETHODCALLTYPE *InitSpNotifyCallback)(
        ISpNotifyTranslator *This,
        ISpNotifyCallback *pSpCallback,
        WPARAM wParam,
        LPARAM lParam);

    HRESULT (STDMETHODCALLTYPE *InitWin32Event)(
        ISpNotifyTranslator *This,
        HANDLE hEvent,
        BOOL fCloseHandleOnRelease);

    HRESULT (STDMETHODCALLTYPE *Wait)(
        ISpNotifyTranslator *This,
        DWORD dwMilliseconds);

    HANDLE (STDMETHODCALLTYPE *GetEventHandle)(
        ISpNotifyTranslator *This);

    END_INTERFACE
} ISpNotifyTranslatorVtbl;

interface ISpNotifyTranslator {
    CONST_VTBL ISpNotifyTranslatorVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpNotifyTranslator_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpNotifyTranslator_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpNotifyTranslator_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISpNotifySink methods ***/
#define ISpNotifyTranslator_Notify(This) \
    ((This)->lpVtbl->Notify(This))
/*** ISpNotifyTranslator methods ***/
#define ISpNotifyTranslator_InitWindowMessage(This,hWnd,Msg,wParam,lParam) \
    ((This)->lpVtbl->InitWindowMessage(This,hWnd,Msg,wParam,lParam))
#define ISpNotifyTranslator_InitCallback(This,pfnCallback,wParam,lParam) \
    ((This)->lpVtbl->InitCallback(This,pfnCallback,wParam,lParam))
#define ISpNotifyTranslator_InitSpNotifyCallback(This,pSpCallback,wParam,lParam) \
    ((This)->lpVtbl->InitSpNotifyCallback(This,pSpCallback,wParam,lParam))
#define ISpNotifyTranslator_InitWin32Event(This,hEvent,fCloseHandleOnRelease) \
    ((This)->lpVtbl->InitWin32Event(This,hEvent,fCloseHandleOnRelease))
#define ISpNotifyTranslator_Wait(This,dwMilliseconds) \
    ((This)->lpVtbl->Wait(This,dwMilliseconds))
#define ISpNotifyTranslator_GetEventHandle(This) \
    ((This)->lpVtbl->GetEventHandle(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpNotifyTranslator_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ISpDataKey interface
 */
#ifndef __ISpDataKey_INTERFACE_DEFINED__
#define __ISpDataKey_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpDataKey;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpDataKeyVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpDataKey *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpDataKey *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpDataKey *This);

    /*** ISpDataKey methods ***/
    HRESULT (STDMETHODCALLTYPE *SetData)(
        ISpDataKey *This,
        LPCWSTR pszValueName,
        ULONG cbData,
        const BYTE *pData);

    HRESULT (STDMETHODCALLTYPE *GetData)(
        ISpDataKey *This,
        LPCWSTR pszValueName,
        ULONG *pcbData,
        BYTE *pData);

    HRESULT (STDMETHODCALLTYPE *SetStringValue)(
        ISpDataKey *This,
        LPCWSTR pszValueName,
        LPCWSTR pszValue);

    HRESULT (STDMETHODCALLTYPE *GetStringValue)(
        ISpDataKey *This,
        LPCWSTR pszValueName,
        LPWSTR *ppszValue);

    HRESULT (STDMETHODCALLTYPE *SetDWORD)(
        ISpDataKey *This,
        LPCWSTR pszValueName,
        DWORD dwValue);

    HRESULT (STDMETHODCALLTYPE *GetDWORD)(
        ISpDataKey *This,
        LPCWSTR pszValueName,
        DWORD *pdwValue);

    HRESULT (STDMETHODCALLTYPE *OpenKey)(
        ISpDataKey *This,
        LPCWSTR pszSubKeyName,
        ISpDataKey **ppSubKey);

    HRESULT (STDMETHODCALLTYPE *CreateKey)(
        ISpDataKey *This,
        LPCWSTR pszSubKey,
        ISpDataKey **ppSubKey);

    HRESULT (STDMETHODCALLTYPE *DeleteKey)(
        ISpDataKey *This,
        LPCWSTR pszSubKey);

    HRESULT (STDMETHODCALLTYPE *DeleteValue)(
        ISpDataKey *This,
        LPCWSTR pszValueName);

    HRESULT (STDMETHODCALLTYPE *EnumKeys)(
        ISpDataKey *This,
        ULONG Index,
        LPWSTR *ppszSubKeyName);

    HRESULT (STDMETHODCALLTYPE *EnumValues)(
        ISpDataKey *This,
        ULONG Index,
        LPWSTR *ppszValueName);

    END_INTERFACE
} ISpDataKeyVtbl;

interface ISpDataKey {
    CONST_VTBL ISpDataKeyVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpDataKey_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpDataKey_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpDataKey_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISpDataKey methods ***/
#define ISpDataKey_SetData(This,pszValueName,cbData,pData) \
    ((This)->lpVtbl->SetData(This,pszValueName,cbData,pData))
#define ISpDataKey_GetData(This,pszValueName,pcbData,pData) \
    ((This)->lpVtbl->GetData(This,pszValueName,pcbData,pData))
#define ISpDataKey_SetStringValue(This,pszValueName,pszValue) \
    ((This)->lpVtbl->SetStringValue(This,pszValueName,pszValue))
#define ISpDataKey_GetStringValue(This,pszValueName,ppszValue) \
    ((This)->lpVtbl->GetStringValue(This,pszValueName,ppszValue))
#define ISpDataKey_SetDWORD(This,pszValueName,dwValue) \
    ((This)->lpVtbl->SetDWORD(This,pszValueName,dwValue))
#define ISpDataKey_GetDWORD(This,pszValueName,pdwValue) \
    ((This)->lpVtbl->GetDWORD(This,pszValueName,pdwValue))
#define ISpDataKey_OpenKey(This,pszSubKeyName,ppSubKey) \
    ((This)->lpVtbl->OpenKey(This,pszSubKeyName,ppSubKey))
#define ISpDataKey_CreateKey(This,pszSubKey,ppSubKey) \
    ((This)->lpVtbl->CreateKey(This,pszSubKey,ppSubKey))
#define ISpDataKey_DeleteKey(This,pszSubKey) \
    ((This)->lpVtbl->DeleteKey(This,pszSubKey))
#define ISpDataKey_DeleteValue(This,pszValueName) \
    ((This)->lpVtbl->DeleteValue(This,pszValueName))
#define ISpDataKey_EnumKeys(This,Index,ppszSubKeyName) \
    ((This)->lpVtbl->EnumKeys(This,Index,ppszSubKeyName))
#define ISpDataKey_EnumValues(This,Index,ppszValueName) \
    ((This)->lpVtbl->EnumValues(This,Index,ppszValueName))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpDataKey_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ISpRegDataKey interface
 */
#ifndef __ISpRegDataKey_INTERFACE_DEFINED__
#define __ISpRegDataKey_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpRegDataKey;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpRegDataKeyVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpRegDataKey *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpRegDataKey *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpRegDataKey *This);

    /*** ISpDataKey methods ***/
    HRESULT (STDMETHODCALLTYPE *SetData)(
        ISpRegDataKey *This,
        LPCWSTR pszValueName,
        ULONG cbData,
        const BYTE *pData);

    HRESULT (STDMETHODCALLTYPE *GetData)(
        ISpRegDataKey *This,
        LPCWSTR pszValueName,
        ULONG *pcbData,
        BYTE *pData);

    HRESULT (STDMETHODCALLTYPE *SetStringValue)(
        ISpRegDataKey *This,
        LPCWSTR pszValueName,
        LPCWSTR pszValue);

    HRESULT (STDMETHODCALLTYPE *GetStringValue)(
        ISpRegDataKey *This,
        LPCWSTR pszValueName,
        LPWSTR *ppszValue);

    HRESULT (STDMETHODCALLTYPE *SetDWORD)(
        ISpRegDataKey *This,
        LPCWSTR pszValueName,
        DWORD dwValue);

    HRESULT (STDMETHODCALLTYPE *GetDWORD)(
        ISpRegDataKey *This,
        LPCWSTR pszValueName,
        DWORD *pdwValue);

    HRESULT (STDMETHODCALLTYPE *OpenKey)(
        ISpRegDataKey *This,
        LPCWSTR pszSubKeyName,
        ISpDataKey **ppSubKey);

    HRESULT (STDMETHODCALLTYPE *CreateKey)(
        ISpRegDataKey *This,
        LPCWSTR pszSubKey,
        ISpDataKey **ppSubKey);

    HRESULT (STDMETHODCALLTYPE *DeleteKey)(
        ISpRegDataKey *This,
        LPCWSTR pszSubKey);

    HRESULT (STDMETHODCALLTYPE *DeleteValue)(
        ISpRegDataKey *This,
        LPCWSTR pszValueName);

    HRESULT (STDMETHODCALLTYPE *EnumKeys)(
        ISpRegDataKey *This,
        ULONG Index,
        LPWSTR *ppszSubKeyName);

    HRESULT (STDMETHODCALLTYPE *EnumValues)(
        ISpRegDataKey *This,
        ULONG Index,
        LPWSTR *ppszValueName);

    /*** ISpRegDataKey methods ***/
    HRESULT (STDMETHODCALLTYPE *SetKey)(
        ISpRegDataKey *This,
        HKEY hkey,
        BOOL fReadOnly);

    END_INTERFACE
} ISpRegDataKeyVtbl;

interface ISpRegDataKey {
    CONST_VTBL ISpRegDataKeyVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpRegDataKey_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpRegDataKey_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpRegDataKey_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISpDataKey methods ***/
#define ISpRegDataKey_SetData(This,pszValueName,cbData,pData) \
    ((This)->lpVtbl->SetData(This,pszValueName,cbData,pData))
#define ISpRegDataKey_GetData(This,pszValueName,pcbData,pData) \
    ((This)->lpVtbl->GetData(This,pszValueName,pcbData,pData))
#define ISpRegDataKey_SetStringValue(This,pszValueName,pszValue) \
    ((This)->lpVtbl->SetStringValue(This,pszValueName,pszValue))
#define ISpRegDataKey_GetStringValue(This,pszValueName,ppszValue) \
    ((This)->lpVtbl->GetStringValue(This,pszValueName,ppszValue))
#define ISpRegDataKey_SetDWORD(This,pszValueName,dwValue) \
    ((This)->lpVtbl->SetDWORD(This,pszValueName,dwValue))
#define ISpRegDataKey_GetDWORD(This,pszValueName,pdwValue) \
    ((This)->lpVtbl->GetDWORD(This,pszValueName,pdwValue))
#define ISpRegDataKey_OpenKey(This,pszSubKeyName,ppSubKey) \
    ((This)->lpVtbl->OpenKey(This,pszSubKeyName,ppSubKey))
#define ISpRegDataKey_CreateKey(This,pszSubKey,ppSubKey) \
    ((This)->lpVtbl->CreateKey(This,pszSubKey,ppSubKey))
#define ISpRegDataKey_DeleteKey(This,pszSubKey) \
    ((This)->lpVtbl->DeleteKey(This,pszSubKey))
#define ISpRegDataKey_DeleteValue(This,pszValueName) \
    ((This)->lpVtbl->DeleteValue(This,pszValueName))
#define ISpRegDataKey_EnumKeys(This,Index,ppszSubKeyName) \
    ((This)->lpVtbl->EnumKeys(This,Index,ppszSubKeyName))
#define ISpRegDataKey_EnumValues(This,Index,ppszValueName) \
    ((This)->lpVtbl->EnumValues(This,Index,ppszValueName))
/*** ISpRegDataKey methods ***/
#define ISpRegDataKey_SetKey(This,hkey,fReadOnly) \
    ((This)->lpVtbl->SetKey(This,hkey,fReadOnly))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpRegDataKey_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ISpObjectTokenCategory interface
 */
#ifndef __ISpObjectTokenCategory_INTERFACE_DEFINED__
#define __ISpObjectTokenCategory_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpObjectTokenCategory;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpObjectTokenCategoryVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpObjectTokenCategory *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpObjectTokenCategory *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpObjectTokenCategory *This);

    /*** ISpDataKey methods ***/
    HRESULT (STDMETHODCALLTYPE *SetData)(
        ISpObjectTokenCategory *This,
        LPCWSTR pszValueName,
        ULONG cbData,
        const BYTE *pData);

    HRESULT (STDMETHODCALLTYPE *GetData)(
        ISpObjectTokenCategory *This,
        LPCWSTR pszValueName,
        ULONG *pcbData,
        BYTE *pData);

    HRESULT (STDMETHODCALLTYPE *SetStringValue)(
        ISpObjectTokenCategory *This,
        LPCWSTR pszValueName,
        LPCWSTR pszValue);

    HRESULT (STDMETHODCALLTYPE *GetStringValue)(
        ISpObjectTokenCategory *This,
        LPCWSTR pszValueName,
        LPWSTR *ppszValue);

    HRESULT (STDMETHODCALLTYPE *SetDWORD)(
        ISpObjectTokenCategory *This,
        LPCWSTR pszValueName,
        DWORD dwValue);

    HRESULT (STDMETHODCALLTYPE *GetDWORD)(
        ISpObjectTokenCategory *This,
        LPCWSTR pszValueName,
        DWORD *pdwValue);

    HRESULT (STDMETHODCALLTYPE *OpenKey)(
        ISpObjectTokenCategory *This,
        LPCWSTR pszSubKeyName,
        ISpDataKey **ppSubKey);

    HRESULT (STDMETHODCALLTYPE *CreateKey)(
        ISpObjectTokenCategory *This,
        LPCWSTR pszSubKey,
        ISpDataKey **ppSubKey);

    HRESULT (STDMETHODCALLTYPE *DeleteKey)(
        ISpObjectTokenCategory *This,
        LPCWSTR pszSubKey);

    HRESULT (STDMETHODCALLTYPE *DeleteValue)(
        ISpObjectTokenCategory *This,
        LPCWSTR pszValueName);

    HRESULT (STDMETHODCALLTYPE *EnumKeys)(
        ISpObjectTokenCategory *This,
        ULONG Index,
        LPWSTR *ppszSubKeyName);

    HRESULT (STDMETHODCALLTYPE *EnumValues)(
        ISpObjectTokenCategory *This,
        ULONG Index,
        LPWSTR *ppszValueName);

    /*** ISpObjectTokenCategory methods ***/
    HRESULT (STDMETHODCALLTYPE *SetId)(
        ISpObjectTokenCategory *This,
        LPCWSTR pszCategoryId,
        BOOL fCreateIfNotExist);

    HRESULT (STDMETHODCALLTYPE *GetId)(
        ISpObjectTokenCategory *This,
        LPWSTR *ppszCoMemCategoryId);

    HRESULT (STDMETHODCALLTYPE *GetDataKey)(
        ISpObjectTokenCategory *This,
        SPDATAKEYLOCATION spdkl,
        ISpDataKey **ppDataKey);

    HRESULT (STDMETHODCALLTYPE *EnumTokens)(
        ISpObjectTokenCategory *This,
        LPCWSTR pzsReqAttribs,
        LPCWSTR pszOptAttribs,
        IEnumSpObjectTokens **ppEnum);

    HRESULT (STDMETHODCALLTYPE *SetDefaultTokenId)(
        ISpObjectTokenCategory *This,
        LPCWSTR pszTokenId);

    HRESULT (STDMETHODCALLTYPE *GetDefaultTokenId)(
        ISpObjectTokenCategory *This,
        LPWSTR *ppszCoMemTokenId);

    END_INTERFACE
} ISpObjectTokenCategoryVtbl;

interface ISpObjectTokenCategory {
    CONST_VTBL ISpObjectTokenCategoryVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpObjectTokenCategory_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpObjectTokenCategory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpObjectTokenCategory_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISpDataKey methods ***/
#define ISpObjectTokenCategory_SetData(This,pszValueName,cbData,pData) \
    ((This)->lpVtbl->SetData(This,pszValueName,cbData,pData))
#define ISpObjectTokenCategory_GetData(This,pszValueName,pcbData,pData) \
    ((This)->lpVtbl->GetData(This,pszValueName,pcbData,pData))
#define ISpObjectTokenCategory_SetStringValue(This,pszValueName,pszValue) \
    ((This)->lpVtbl->SetStringValue(This,pszValueName,pszValue))
#define ISpObjectTokenCategory_GetStringValue(This,pszValueName,ppszValue) \
    ((This)->lpVtbl->GetStringValue(This,pszValueName,ppszValue))
#define ISpObjectTokenCategory_SetDWORD(This,pszValueName,dwValue) \
    ((This)->lpVtbl->SetDWORD(This,pszValueName,dwValue))
#define ISpObjectTokenCategory_GetDWORD(This,pszValueName,pdwValue) \
    ((This)->lpVtbl->GetDWORD(This,pszValueName,pdwValue))
#define ISpObjectTokenCategory_OpenKey(This,pszSubKeyName,ppSubKey) \
    ((This)->lpVtbl->OpenKey(This,pszSubKeyName,ppSubKey))
#define ISpObjectTokenCategory_CreateKey(This,pszSubKey,ppSubKey) \
    ((This)->lpVtbl->CreateKey(This,pszSubKey,ppSubKey))
#define ISpObjectTokenCategory_DeleteKey(This,pszSubKey) \
    ((This)->lpVtbl->DeleteKey(This,pszSubKey))
#define ISpObjectTokenCategory_DeleteValue(This,pszValueName) \
    ((This)->lpVtbl->DeleteValue(This,pszValueName))
#define ISpObjectTokenCategory_EnumKeys(This,Index,ppszSubKeyName) \
    ((This)->lpVtbl->EnumKeys(This,Index,ppszSubKeyName))
#define ISpObjectTokenCategory_EnumValues(This,Index,ppszValueName) \
    ((This)->lpVtbl->EnumValues(This,Index,ppszValueName))
/*** ISpObjectTokenCategory methods ***/
#define ISpObjectTokenCategory_SetId(This,pszCategoryId,fCreateIfNotExist) \
    ((This)->lpVtbl->SetId(This,pszCategoryId,fCreateIfNotExist))
#define ISpObjectTokenCategory_GetId(This,ppszCoMemCategoryId) \
    ((This)->lpVtbl->GetId(This,ppszCoMemCategoryId))
#define ISpObjectTokenCategory_GetDataKey(This,spdkl,ppDataKey) \
    ((This)->lpVtbl->GetDataKey(This,spdkl,ppDataKey))
#define ISpObjectTokenCategory_EnumTokens(This,pzsReqAttribs,pszOptAttribs,ppEnum) \
    ((This)->lpVtbl->EnumTokens(This,pzsReqAttribs,pszOptAttribs,ppEnum))
#define ISpObjectTokenCategory_SetDefaultTokenId(This,pszTokenId) \
    ((This)->lpVtbl->SetDefaultTokenId(This,pszTokenId))
#define ISpObjectTokenCategory_GetDefaultTokenId(This,ppszCoMemTokenId) \
    ((This)->lpVtbl->GetDefaultTokenId(This,ppszCoMemTokenId))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpObjectTokenCategory_INTERFACE_DEFINED__ */
/*****************************************************************************
 * ISpObjectToken interface
 */
#ifndef __ISpObjectToken_INTERFACE_DEFINED__
#define __ISpObjectToken_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpObjectToken;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpObjectTokenVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpObjectToken *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpObjectToken *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpObjectToken *This);

    /*** ISpDataKey methods ***/
    HRESULT (STDMETHODCALLTYPE *SetData)(
        ISpObjectToken *This,
        LPCWSTR pszValueName,
        ULONG cbData,
        const BYTE *pData);

    HRESULT (STDMETHODCALLTYPE *GetData)(
        ISpObjectToken *This,
        LPCWSTR pszValueName,
        ULONG *pcbData,
        BYTE *pData);

    HRESULT (STDMETHODCALLTYPE *SetStringValue)(
        ISpObjectToken *This,
        LPCWSTR pszValueName,
        LPCWSTR pszValue);

    HRESULT (STDMETHODCALLTYPE *GetStringValue)(
        ISpObjectToken *This,
        LPCWSTR pszValueName,
        LPWSTR *ppszValue);

    HRESULT (STDMETHODCALLTYPE *SetDWORD)(
        ISpObjectToken *This,
        LPCWSTR pszValueName,
        DWORD dwValue);

    HRESULT (STDMETHODCALLTYPE *GetDWORD)(
        ISpObjectToken *This,
        LPCWSTR pszValueName,
        DWORD *pdwValue);

    HRESULT (STDMETHODCALLTYPE *OpenKey)(
        ISpObjectToken *This,
        LPCWSTR pszSubKeyName,
        ISpDataKey **ppSubKey);

    HRESULT (STDMETHODCALLTYPE *CreateKey)(
        ISpObjectToken *This,
        LPCWSTR pszSubKey,
        ISpDataKey **ppSubKey);

    HRESULT (STDMETHODCALLTYPE *DeleteKey)(
        ISpObjectToken *This,
        LPCWSTR pszSubKey);

    HRESULT (STDMETHODCALLTYPE *DeleteValue)(
        ISpObjectToken *This,
        LPCWSTR pszValueName);

    HRESULT (STDMETHODCALLTYPE *EnumKeys)(
        ISpObjectToken *This,
        ULONG Index,
        LPWSTR *ppszSubKeyName);

    HRESULT (STDMETHODCALLTYPE *EnumValues)(
        ISpObjectToken *This,
        ULONG Index,
        LPWSTR *ppszValueName);

    /*** ISpObjectToken methods ***/
    HRESULT (STDMETHODCALLTYPE *SetId)(
        ISpObjectToken *This,
        LPCWSTR pszCategoryId,
        LPCWSTR pszTokenId,
        BOOL fCreateIfNotExist);

    HRESULT (STDMETHODCALLTYPE *GetId)(
        ISpObjectToken *This,
        LPWSTR *ppszCoMemTokenId);

    HRESULT (STDMETHODCALLTYPE *GetCategory)(
        ISpObjectToken *This,
        ISpObjectTokenCategory **ppTokenCategory);

    HRESULT (STDMETHODCALLTYPE *CreateInstance)(
        ISpObjectToken *This,
        IUnknown *pUnkOuter,
        DWORD dwClsContext,
        REFIID riid,
        void **ppvObject);

    HRESULT (STDMETHODCALLTYPE *GetStorageFileName)(
        ISpObjectToken *This,
        REFCLSID clsidCaller,
        LPCWSTR pszValueName,
        LPCWSTR pszFileNameSpecifier,
        ULONG nFolder,
        LPWSTR *ppszFilePath);

    HRESULT (STDMETHODCALLTYPE *RemoveStorageFileName)(
        ISpObjectToken *This,
        REFCLSID clsidCaller,
        LPCWSTR pszKeyName,
        BOOL fDeleteFile);

    HRESULT (STDMETHODCALLTYPE *Remove)(
        ISpObjectToken *This,
        const CLSID *pclsidCaller);

    HRESULT (STDMETHODCALLTYPE *IsUISupported)(
        ISpObjectToken *This,
        LPCWSTR pszTypeOfUI,
        void *pvExtraData,
        ULONG cbExtraData,
        IUnknown *punkObject,
        BOOL *pfSupported);

    HRESULT (STDMETHODCALLTYPE *DisplayUI)(
        ISpObjectToken *This,
        HWND hwndParent,
        LPCWSTR pszTitle,
        LPCWSTR pszTypeOfUI,
        void *pvExtraData,
        ULONG cbExtraData,
        IUnknown *punkObject);

    HRESULT (STDMETHODCALLTYPE *MatchesAttributes)(
        ISpObjectToken *This,
        LPCWSTR pszAttributes,
        BOOL *pfMatches);

    END_INTERFACE
} ISpObjectTokenVtbl;

interface ISpObjectToken {
    CONST_VTBL ISpObjectTokenVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpObjectToken_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpObjectToken_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpObjectToken_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISpDataKey methods ***/
#define ISpObjectToken_SetData(This,pszValueName,cbData,pData) \
    ((This)->lpVtbl->SetData(This,pszValueName,cbData,pData))
#define ISpObjectToken_GetData(This,pszValueName,pcbData,pData) \
    ((This)->lpVtbl->GetData(This,pszValueName,pcbData,pData))
#define ISpObjectToken_SetStringValue(This,pszValueName,pszValue) \
    ((This)->lpVtbl->SetStringValue(This,pszValueName,pszValue))
#define ISpObjectToken_GetStringValue(This,pszValueName,ppszValue) \
    ((This)->lpVtbl->GetStringValue(This,pszValueName,ppszValue))
#define ISpObjectToken_SetDWORD(This,pszValueName,dwValue) \
    ((This)->lpVtbl->SetDWORD(This,pszValueName,dwValue))
#define ISpObjectToken_GetDWORD(This,pszValueName,pdwValue) \
    ((This)->lpVtbl->GetDWORD(This,pszValueName,pdwValue))
#define ISpObjectToken_OpenKey(This,pszSubKeyName,ppSubKey) \
    ((This)->lpVtbl->OpenKey(This,pszSubKeyName,ppSubKey))
#define ISpObjectToken_CreateKey(This,pszSubKey,ppSubKey) \
    ((This)->lpVtbl->CreateKey(This,pszSubKey,ppSubKey))
#define ISpObjectToken_DeleteKey(This,pszSubKey) \
    ((This)->lpVtbl->DeleteKey(This,pszSubKey))
#define ISpObjectToken_DeleteValue(This,pszValueName) \
    ((This)->lpVtbl->DeleteValue(This,pszValueName))
#define ISpObjectToken_EnumKeys(This,Index,ppszSubKeyName) \
    ((This)->lpVtbl->EnumKeys(This,Index,ppszSubKeyName))
#define ISpObjectToken_EnumValues(This,Index,ppszValueName) \
    ((This)->lpVtbl->EnumValues(This,Index,ppszValueName))
/*** ISpObjectToken methods ***/
#define ISpObjectToken_SetId(This,pszCategoryId,pszTokenId,fCreateIfNotExist) \
    ((This)->lpVtbl->SetId(This,pszCategoryId,pszTokenId,fCreateIfNotExist))
#define ISpObjectToken_GetId(This,ppszCoMemTokenId) \
    ((This)->lpVtbl->GetId(This,ppszCoMemTokenId))
#define ISpObjectToken_GetCategory(This,ppTokenCategory) \
    ((This)->lpVtbl->GetCategory(This,ppTokenCategory))
#define ISpObjectToken_CreateInstance(This,pUnkOuter,dwClsContext,riid,ppvObject) \
    ((This)->lpVtbl->CreateInstance(This,pUnkOuter,dwClsContext,riid,ppvObject))
#define ISpObjectToken_GetStorageFileName(This,clsidCaller,pszValueName,pszFileNameSpecifier,nFolder,ppszFilePath) \
    ((This)->lpVtbl->GetStorageFileName(This,clsidCaller,pszValueName,pszFileNameSpecifier,nFolder,ppszFilePath))
#define ISpObjectToken_RemoveStorageFileName(This,clsidCaller,pszKeyName,fDeleteFile) \
    ((This)->lpVtbl->RemoveStorageFileName(This,clsidCaller,pszKeyName,fDeleteFile))
#define ISpObjectToken_Remove(This,pclsidCaller) \
    ((This)->lpVtbl->Remove(This,pclsidCaller))
#define ISpObjectToken_IsUISupported(This,pszTypeOfUI,pvExtraData,cbExtraData,punkObject,pfSupported) \
    ((This)->lpVtbl->IsUISupported(This,pszTypeOfUI,pvExtraData,cbExtraData,punkObject,pfSupported))
#define ISpObjectToken_DisplayUI(This,hwndParent,pszTitle,pszTypeOfUI,pvExtraData,cbExtraData,punkObject) \
    ((This)->lpVtbl->DisplayUI(This,hwndParent,pszTitle,pszTypeOfUI,pvExtraData,cbExtraData,punkObject))
#define ISpObjectToken_MatchesAttributes(This,pszAttributes,pfMatches) \
    ((This)->lpVtbl->MatchesAttributes(This,pszAttributes,pfMatches))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpObjectToken_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ISpObjectTokenInit interface
 */
#ifndef __ISpObjectTokenInit_INTERFACE_DEFINED__
#define __ISpObjectTokenInit_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpObjectTokenInit;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpObjectTokenInitVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpObjectTokenInit *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpObjectTokenInit *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpObjectTokenInit *This);

    /*** ISpDataKey methods ***/
    HRESULT (STDMETHODCALLTYPE *SetData)(
        ISpObjectTokenInit *This,
        LPCWSTR pszValueName,
        ULONG cbData,
        const BYTE *pData);

    HRESULT (STDMETHODCALLTYPE *GetData)(
        ISpObjectTokenInit *This,
        LPCWSTR pszValueName,
        ULONG *pcbData,
        BYTE *pData);

    HRESULT (STDMETHODCALLTYPE *SetStringValue)(
        ISpObjectTokenInit *This,
        LPCWSTR pszValueName,
        LPCWSTR pszValue);

    HRESULT (STDMETHODCALLTYPE *GetStringValue)(
        ISpObjectTokenInit *This,
        LPCWSTR pszValueName,
        LPWSTR *ppszValue);

    HRESULT (STDMETHODCALLTYPE *SetDWORD)(
        ISpObjectTokenInit *This,
        LPCWSTR pszValueName,
        DWORD dwValue);

    HRESULT (STDMETHODCALLTYPE *GetDWORD)(
        ISpObjectTokenInit *This,
        LPCWSTR pszValueName,
        DWORD *pdwValue);

    HRESULT (STDMETHODCALLTYPE *OpenKey)(
        ISpObjectTokenInit *This,
        LPCWSTR pszSubKeyName,
        ISpDataKey **ppSubKey);

    HRESULT (STDMETHODCALLTYPE *CreateKey)(
        ISpObjectTokenInit *This,
        LPCWSTR pszSubKey,
        ISpDataKey **ppSubKey);

    HRESULT (STDMETHODCALLTYPE *DeleteKey)(
        ISpObjectTokenInit *This,
        LPCWSTR pszSubKey);

    HRESULT (STDMETHODCALLTYPE *DeleteValue)(
        ISpObjectTokenInit *This,
        LPCWSTR pszValueName);

    HRESULT (STDMETHODCALLTYPE *EnumKeys)(
        ISpObjectTokenInit *This,
        ULONG Index,
        LPWSTR *ppszSubKeyName);

    HRESULT (STDMETHODCALLTYPE *EnumValues)(
        ISpObjectTokenInit *This,
        ULONG Index,
        LPWSTR *ppszValueName);

    /*** ISpObjectToken methods ***/
    HRESULT (STDMETHODCALLTYPE *SetId)(
        ISpObjectTokenInit *This,
        LPCWSTR pszCategoryId,
        LPCWSTR pszTokenId,
        BOOL fCreateIfNotExist);

    HRESULT (STDMETHODCALLTYPE *GetId)(
        ISpObjectTokenInit *This,
        LPWSTR *ppszCoMemTokenId);

    HRESULT (STDMETHODCALLTYPE *GetCategory)(
        ISpObjectTokenInit *This,
        ISpObjectTokenCategory **ppTokenCategory);

    HRESULT (STDMETHODCALLTYPE *CreateInstance)(
        ISpObjectTokenInit *This,
        IUnknown *pUnkOuter,
        DWORD dwClsContext,
        REFIID riid,
        void **ppvObject);

    HRESULT (STDMETHODCALLTYPE *GetStorageFileName)(
        ISpObjectTokenInit *This,
        REFCLSID clsidCaller,
        LPCWSTR pszValueName,
        LPCWSTR pszFileNameSpecifier,
        ULONG nFolder,
        LPWSTR *ppszFilePath);

    HRESULT (STDMETHODCALLTYPE *RemoveStorageFileName)(
        ISpObjectTokenInit *This,
        REFCLSID clsidCaller,
        LPCWSTR pszKeyName,
        BOOL fDeleteFile);

    HRESULT (STDMETHODCALLTYPE *Remove)(
        ISpObjectTokenInit *This,
        const CLSID *pclsidCaller);

    HRESULT (STDMETHODCALLTYPE *IsUISupported)(
        ISpObjectTokenInit *This,
        LPCWSTR pszTypeOfUI,
        void *pvExtraData,
        ULONG cbExtraData,
        IUnknown *punkObject,
        BOOL *pfSupported);

    HRESULT (STDMETHODCALLTYPE *DisplayUI)(
        ISpObjectTokenInit *This,
        HWND hwndParent,
        LPCWSTR pszTitle,
        LPCWSTR pszTypeOfUI,
        void *pvExtraData,
        ULONG cbExtraData,
        IUnknown *punkObject);

    HRESULT (STDMETHODCALLTYPE *MatchesAttributes)(
        ISpObjectTokenInit *This,
        LPCWSTR pszAttributes,
        BOOL *pfMatches);

    /*** ISpObjectTokenInit methods ***/
    HRESULT (STDMETHODCALLTYPE *InitFromDataKey)(
        ISpObjectTokenInit *This,
        LPCWSTR pszCategoryId,
        LPCWSTR pszTokenId,
        ISpDataKey *pDataKey);

    END_INTERFACE
} ISpObjectTokenInitVtbl;

interface ISpObjectTokenInit {
    CONST_VTBL ISpObjectTokenInitVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpObjectTokenInit_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpObjectTokenInit_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpObjectTokenInit_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISpDataKey methods ***/
#define ISpObjectTokenInit_SetData(This,pszValueName,cbData,pData) \
    ((This)->lpVtbl->SetData(This,pszValueName,cbData,pData))
#define ISpObjectTokenInit_GetData(This,pszValueName,pcbData,pData) \
    ((This)->lpVtbl->GetData(This,pszValueName,pcbData,pData))
#define ISpObjectTokenInit_SetStringValue(This,pszValueName,pszValue) \
    ((This)->lpVtbl->SetStringValue(This,pszValueName,pszValue))
#define ISpObjectTokenInit_GetStringValue(This,pszValueName,ppszValue) \
    ((This)->lpVtbl->GetStringValue(This,pszValueName,ppszValue))
#define ISpObjectTokenInit_SetDWORD(This,pszValueName,dwValue) \
    ((This)->lpVtbl->SetDWORD(This,pszValueName,dwValue))
#define ISpObjectTokenInit_GetDWORD(This,pszValueName,pdwValue) \
    ((This)->lpVtbl->GetDWORD(This,pszValueName,pdwValue))
#define ISpObjectTokenInit_OpenKey(This,pszSubKeyName,ppSubKey) \
    ((This)->lpVtbl->OpenKey(This,pszSubKeyName,ppSubKey))
#define ISpObjectTokenInit_CreateKey(This,pszSubKey,ppSubKey) \
    ((This)->lpVtbl->CreateKey(This,pszSubKey,ppSubKey))
#define ISpObjectTokenInit_DeleteKey(This,pszSubKey) \
    ((This)->lpVtbl->DeleteKey(This,pszSubKey))
#define ISpObjectTokenInit_DeleteValue(This,pszValueName) \
    ((This)->lpVtbl->DeleteValue(This,pszValueName))
#define ISpObjectTokenInit_EnumKeys(This,Index,ppszSubKeyName) \
    ((This)->lpVtbl->EnumKeys(This,Index,ppszSubKeyName))
#define ISpObjectTokenInit_EnumValues(This,Index,ppszValueName) \
    ((This)->lpVtbl->EnumValues(This,Index,ppszValueName))
/*** ISpObjectToken methods ***/
#define ISpObjectTokenInit_SetId(This,pszCategoryId,pszTokenId,fCreateIfNotExist) \
    ((This)->lpVtbl->SetId(This,pszCategoryId,pszTokenId,fCreateIfNotExist))
#define ISpObjectTokenInit_GetId(This,ppszCoMemTokenId) \
    ((This)->lpVtbl->GetId(This,ppszCoMemTokenId))
#define ISpObjectTokenInit_GetCategory(This,ppTokenCategory) \
    ((This)->lpVtbl->GetCategory(This,ppTokenCategory))
#define ISpObjectTokenInit_CreateInstance(This,pUnkOuter,dwClsContext,riid,ppvObject) \
    ((This)->lpVtbl->CreateInstance(This,pUnkOuter,dwClsContext,riid,ppvObject))
#define ISpObjectTokenInit_GetStorageFileName(This,clsidCaller,pszValueName,pszFileNameSpecifier,nFolder,ppszFilePath) \
    ((This)->lpVtbl->GetStorageFileName(This,clsidCaller,pszValueName,pszFileNameSpecifier,nFolder,ppszFilePath))
#define ISpObjectTokenInit_RemoveStorageFileName(This,clsidCaller,pszKeyName,fDeleteFile) \
    ((This)->lpVtbl->RemoveStorageFileName(This,clsidCaller,pszKeyName,fDeleteFile))
#define ISpObjectTokenInit_Remove(This,pclsidCaller) \
    ((This)->lpVtbl->Remove(This,pclsidCaller))
#define ISpObjectTokenInit_IsUISupported(This,pszTypeOfUI,pvExtraData,cbExtraData,punkObject,pfSupported) \
    ((This)->lpVtbl->IsUISupported(This,pszTypeOfUI,pvExtraData,cbExtraData,punkObject,pfSupported))
#define ISpObjectTokenInit_DisplayUI(This,hwndParent,pszTitle,pszTypeOfUI,pvExtraData,cbExtraData,punkObject) \
    ((This)->lpVtbl->DisplayUI(This,hwndParent,pszTitle,pszTypeOfUI,pvExtraData,cbExtraData,punkObject))
#define ISpObjectTokenInit_MatchesAttributes(This,pszAttributes,pfMatches) \
    ((This)->lpVtbl->MatchesAttributes(This,pszAttributes,pfMatches))
/*** ISpObjectTokenInit methods ***/
#define ISpObjectTokenInit_InitFromDataKey(This,pszCategoryId,pszTokenId,pDataKey) \
    ((This)->lpVtbl->InitFromDataKey(This,pszCategoryId,pszTokenId,pDataKey))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpObjectTokenInit_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IEnumSpObjectTokens interface
 */
#ifndef __IEnumSpObjectTokens_INTERFACE_DEFINED__
#define __IEnumSpObjectTokens_INTERFACE_DEFINED__

EXTERN_C const IID IID_IEnumSpObjectTokens;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct IEnumSpObjectTokensVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEnumSpObjectTokens *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEnumSpObjectTokens *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEnumSpObjectTokens *This);

    /*** IEnumSpObjectTokens methods ***/
    HRESULT (STDMETHODCALLTYPE *Next)(
        IEnumSpObjectTokens *This,
        ULONG celt,
        ISpObjectToken **pelt,
        ULONG *pceltFetched);

    HRESULT (STDMETHODCALLTYPE *Skip)(
        IEnumSpObjectTokens *This,
        ULONG celt);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        IEnumSpObjectTokens *This);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IEnumSpObjectTokens *This,
        IEnumSpObjectTokens **ppEnum);

    HRESULT (STDMETHODCALLTYPE *Item)(
        IEnumSpObjectTokens *This,
        ULONG Index,
        ISpObjectToken **ppToken);

    HRESULT (STDMETHODCALLTYPE *GetCount)(
        IEnumSpObjectTokens *This,
        ULONG *pCount);

    END_INTERFACE
} IEnumSpObjectTokensVtbl;

interface IEnumSpObjectTokens {
    CONST_VTBL IEnumSpObjectTokensVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define IEnumSpObjectTokens_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define IEnumSpObjectTokens_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define IEnumSpObjectTokens_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IEnumSpObjectTokens methods ***/
#define IEnumSpObjectTokens_Next(This,celt,pelt,pceltFetched) \
    ((This)->lpVtbl->Next(This,celt,pelt,pceltFetched))
#define IEnumSpObjectTokens_Skip(This,celt) \
    ((This)->lpVtbl->Skip(This,celt))
#define IEnumSpObjectTokens_Reset(This) \
    ((This)->lpVtbl->Reset(This))
#define IEnumSpObjectTokens_Clone(This,ppEnum) \
    ((This)->lpVtbl->Clone(This,ppEnum))
#define IEnumSpObjectTokens_Item(This,Index,ppToken) \
    ((This)->lpVtbl->Item(This,Index,ppToken))
#define IEnumSpObjectTokens_GetCount(This,pCount) \
    ((This)->lpVtbl->GetCount(This,pCount))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __IEnumSpObjectTokens_INTERFACE_DEFINED__ */
/*****************************************************************************
 * ISpObjectWithToken interface
 */
#ifndef __ISpObjectWithToken_INTERFACE_DEFINED__
#define __ISpObjectWithToken_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpObjectWithToken;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpObjectWithTokenVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpObjectWithToken *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpObjectWithToken *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpObjectWithToken *This);

    /*** ISpObjectWithToken methods ***/
    HRESULT (STDMETHODCALLTYPE *SetObjectToken)(
        ISpObjectWithToken *This,
        ISpObjectToken *pToken);

    HRESULT (STDMETHODCALLTYPE *GetObjectToken)(
        ISpObjectWithToken *This,
        ISpObjectToken **ppToken);

    END_INTERFACE
} ISpObjectWithTokenVtbl;

interface ISpObjectWithToken {
    CONST_VTBL ISpObjectWithTokenVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpObjectWithToken_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpObjectWithToken_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpObjectWithToken_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISpObjectWithToken methods ***/
#define ISpObjectWithToken_SetObjectToken(This,pToken) \
    ((This)->lpVtbl->SetObjectToken(This,pToken))
#define ISpObjectWithToken_GetObjectToken(This,ppToken) \
    ((This)->lpVtbl->GetObjectToken(This,ppToken))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpObjectWithToken_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ISpResourceManager interface
 */
#ifndef __ISpResourceManager_INTERFACE_DEFINED__
#define __ISpResourceManager_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpResourceManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpResourceManagerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpResourceManager *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpResourceManager *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpResourceManager *This);

    /*** IServiceProvider methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryService)(
        ISpResourceManager *This,
        REFGUID guidService,
        REFIID riid,
        void **ppvObject);

    /*** ISpResourceManager methods ***/
    HRESULT (STDMETHODCALLTYPE *SetObject)(
        ISpResourceManager *This,
        REFGUID guidServiceId,
        IUnknown *pUnkObject);

    HRESULT (STDMETHODCALLTYPE *GetObject)(
        ISpResourceManager *This,
        REFGUID guidServiceId,
        REFCLSID ObjectCLSID,
        REFIID ObjectIID,
        BOOL fReleaseWhenLastExternalRefReleased,
        void **ppObject);

    END_INTERFACE
} ISpResourceManagerVtbl;

interface ISpResourceManager {
    CONST_VTBL ISpResourceManagerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpResourceManager_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpResourceManager_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpResourceManager_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IServiceProvider methods ***/
#define ISpResourceManager_QueryService(This,guidService,riid,ppvObject) \
    ((This)->lpVtbl->QueryService(This,guidService,riid,ppvObject))
/*** ISpResourceManager methods ***/
#define ISpResourceManager_SetObject(This,guidServiceId,pUnkObject) \
    ((This)->lpVtbl->SetObject(This,guidServiceId,pUnkObject))
#define ISpResourceManager_GetObject(This,guidServiceId,ObjectCLSID,ObjectIID,fReleaseWhenLastExternalRefReleased,ppObject) \
    ((This)->lpVtbl->GetObject(This,guidServiceId,ObjectCLSID,ObjectIID,fReleaseWhenLastExternalRefReleased,ppObject))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpResourceManager_INTERFACE_DEFINED__ */

typedef enum SPEVENTLPARAMTYPE {
    SPET_LPARAM_IS_UNDEFINED = 0,
    SPET_LPARAM_IS_TOKEN = 1,
    SPET_LPARAM_IS_OBJECT = 2,
    SPET_LPARAM_IS_POINTER = 3,
    SPET_LPARAM_IS_STRING = 4
} SPEVENTLPARAMTYPE;

typedef enum SPEVENTENUM {
    SPEI_UNDEFINED = 0,
    SPEI_START_INPUT_STREAM = 1,
    SPEI_END_INPUT_STREAM = 2,
    SPEI_VOICE_CHANGE = 3,
    SPEI_TTS_BOOKMARK = 4,
    SPEI_WORD_BOUNDARY = 5,
    SPEI_PHONEME = 6,
    SPEI_SENTENCE_BOUNDARY = 7,
    SPEI_VISEME = 8,
    SPEI_TTS_AUDIO_LEVEL = 9,
    SPEI_TTS_PRIVATE = 15,
    SPEI_MIN_TTS = 1,
    SPEI_MAX_TTS = 15,
    SPEI_END_SR_STREAM = 34,
    SPEI_SOUND_START = 35,
    SPEI_SOUND_END = 36,
    SPEI_PHRASE_START = 37,
    SPEI_RECOGNITION = 38,
    SPEI_HYPOTHESIS = 39,
    SPEI_SR_BOOKMARK = 40,
    SPEI_PROPERTY_NUM_CHANGE = 41,
    SPEI_PROPERTY_STRING_CHANGE = 42,
    SPEI_FALSE_RECOGNITION = 43,
    SPEI_INTERFERENCE = 44,
    SPEI_REQUEST_UI = 45,
    SPEI_RECO_STATE_CHANGE = 46,
    SPEI_ADAPTATION = 47,
    SPEI_START_SR_STREAM = 48,
    SPEI_RECO_OTHER_CONTEXT = 49,
    SPEI_SR_AUDIO_LEVEL = 50,
    SPEI_SR_RETAINEDAUDIO = 51,
    SPEI_SR_PRIVATE = 52,
    SPEI_ACTIVE_CATEGORY_CHANGED = 53,
    SPEI_RESERVED5 = 54,
    SPEI_RESERVED6 = 55,
    SPEI_MIN_SR = 34,
    SPEI_MAX_SR = 55,
    SPEI_RESERVED1 = 30,
    SPEI_RESERVED2 = 33,
    SPEI_RESERVED3 = 63
} SPEVENTENUM;

#define SPFEI_FLAGCHECK ( (1ui64 << SPEI_RESERVED1) | (1ui64 << SPEI_RESERVED2) )

#define SPFEI_ALL_TTS_EVENTS (0x000000000000FFFEui64 | SPFEI_FLAGCHECK)
#define SPFEI_ALL_SR_EVENTS  (0x003FFFFC00000000ui64 | SPFEI_FLAGCHECK)
#define SPFEI_ALL_EVENTS      0xEFFFFFFFFFFFFFFFui64

#define SPFEI(SPEI_ord) ((1ui64 << SPEI_ord) | SPFEI_FLAGCHECK)

typedef struct SPEVENT {
    SPEVENTENUM eEventId : 16;
    SPEVENTLPARAMTYPE elParamType : 16;
    ULONG ulStreamNum;
    ULONGLONG ullAudioStreamOffset;
    WPARAM wParam;
    LPARAM lParam;
} SPEVENT;

typedef struct SPSERIALIZEDEVENT {
    SPEVENTENUM eEventId : 16;
    SPEVENTLPARAMTYPE elParamType : 16;
    ULONG ulStreamNum;
    ULONGLONG ullAudioStreamOffset;
    ULONG SerializedwParam;
    LONG SerializedlParam;
} SPSERIALIZEDEVENT;

typedef struct SPSERIALIZEDEVENT64 {
    SPEVENTENUM eEventId : 16;
    SPEVENTLPARAMTYPE elParamType : 16;
    ULONG ulStreamNum;
    ULONGLONG ullAudioStreamOffset;
    ULONGLONG SerializedwParam;
    LONGLONG SerializedlParam;
} SPSERIALIZEDEVENT64;

typedef struct SPEVENTEX {
    SPEVENTENUM eEventId : 16;
    SPEVENTLPARAMTYPE elParamType : 16;
    ULONG ulStreamNum;
    ULONGLONG ullAudioStreamOffset;
    WPARAM wParam;
    LPARAM lParam;
    ULONGLONG ullAudioTimeOffset;
} SPEVENTEX;

typedef enum SPINTERFERENCE {
    SPINTERFERENCE_NONE = 0,
    SPINTERFERENCE_NOISE = 1,
    SPINTERFERENCE_NOSIGNAL = 2,
    SPINTERFERENCE_TOOLOUD = 3,
    SPINTERFERENCE_TOOQUIET = 4,
    SPINTERFERENCE_TOOFAST = 5,
    SPINTERFERENCE_TOOSLOW = 6,
    SPINTERFERENCE_LATENCY_WARNING = 7,
    SPINTERFERENCE_LATENCY_TRUNCATE_BEGIN = 8,
    SPINTERFERENCE_LATENCY_TRUNCATE_END = 9
} SPINTERFERENCE;

typedef enum SPENDSRSTREAMFLAGS {
    SPESF_NONE = 0,
    SPESF_STREAM_RELEASED = 1 << 0,
    SPESF_EMULATED = 1 << 1
} SPENDSRSTREAMFLAGS;

typedef enum SPVFEATURE {
    SPVFEATURE_STRESSED = 1 << 0,
    SPVFEATURE_EMPHASIS = 1 << 1
} SPVFEATURE;

typedef enum SPVISEMES {
    SP_VISEME_0 = 0,
    SP_VISEME_1 = 1,
    SP_VISEME_2 = 2,
    SP_VISEME_3 = 3,
    SP_VISEME_4 = 4,
    SP_VISEME_5 = 5,
    SP_VISEME_6 = 6,
    SP_VISEME_7 = 7,
    SP_VISEME_8 = 8,
    SP_VISEME_9 = 9,
    SP_VISEME_10 = 10,
    SP_VISEME_11 = 11,
    SP_VISEME_12 = 12,
    SP_VISEME_13 = 13,
    SP_VISEME_14 = 14,
    SP_VISEME_15 = 15,
    SP_VISEME_16 = 16,
    SP_VISEME_17 = 17,
    SP_VISEME_18 = 18,
    SP_VISEME_19 = 19,
    SP_VISEME_20 = 20,
    SP_VISEME_21 = 21
} SPVISEMES;

typedef struct SPEVENTSOURCEINFO {
    ULONGLONG ullEventInterest;
    ULONGLONG ullQueuedInterest;
    ULONG ulCount;
} SPEVENTSOURCEINFO;

/*****************************************************************************
 * ISpEventSource interface
 */
#ifndef __ISpEventSource_INTERFACE_DEFINED__
#define __ISpEventSource_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpEventSource;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpEventSourceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpEventSource *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpEventSource *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpEventSource *This);

    /*** ISpNotifySource methods ***/
    HRESULT (STDMETHODCALLTYPE *SetNotifySink)(
        ISpEventSource *This,
        ISpNotifySink *pNotifySink);

    HRESULT (STDMETHODCALLTYPE *SetNotifyWindowMessage)(
        ISpEventSource *This,
        HWND hWnd,
        UINT Msg,
        WPARAM wParam,
        LPARAM lParam);

    HRESULT (STDMETHODCALLTYPE *SetNotifyCallbackFunction)(
        ISpEventSource *This,
        SPNOTIFYCALLBACK *pfnCallback,
        WPARAM wParam,
        LPARAM lParam);

    HRESULT (STDMETHODCALLTYPE *SetNotifyCallbackInterface)(
        ISpEventSource *This,
        ISpNotifyCallback *pSpCallback,
        WPARAM wParam,
        LPARAM lParam);

    HRESULT (STDMETHODCALLTYPE *SetNotifyWin32Event)(
        ISpEventSource *This);

    HRESULT (STDMETHODCALLTYPE *WaitForNotifyEvent)(
        ISpEventSource *This,
        DWORD dwMilliseconds);

    HANDLE (STDMETHODCALLTYPE *GetNotifyEventHandle)(
        ISpEventSource *This);

    /*** ISpEventSource methods ***/
    HRESULT (STDMETHODCALLTYPE *SetInterest)(
        ISpEventSource *This,
        ULONGLONG ullEventInterest,
        ULONGLONG ullQueuedInterest);

    HRESULT (STDMETHODCALLTYPE *GetEvents)(
        ISpEventSource *This,
        ULONG ulCount,
        SPEVENT *pEventArray,
        ULONG *pulFetched);

    HRESULT (STDMETHODCALLTYPE *GetInfo)(
        ISpEventSource *This,
        SPEVENTSOURCEINFO *pInfo);

    END_INTERFACE
} ISpEventSourceVtbl;

interface ISpEventSource {
    CONST_VTBL ISpEventSourceVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpEventSource_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpEventSource_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpEventSource_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISpNotifySource methods ***/
#define ISpEventSource_SetNotifySink(This,pNotifySink) \
    ((This)->lpVtbl->SetNotifySink(This,pNotifySink))
#define ISpEventSource_SetNotifyWindowMessage(This,hWnd,Msg,wParam,lParam) \
    ((This)->lpVtbl->SetNotifyWindowMessage(This,hWnd,Msg,wParam,lParam))
#define ISpEventSource_SetNotifyCallbackFunction(This,pfnCallback,wParam,lParam) \
    ((This)->lpVtbl->SetNotifyCallbackFunction(This,pfnCallback,wParam,lParam))
#define ISpEventSource_SetNotifyCallbackInterface(This,pSpCallback,wParam,lParam) \
    ((This)->lpVtbl->SetNotifyCallbackInterface(This,pSpCallback,wParam,lParam))
#define ISpEventSource_SetNotifyWin32Event(This) \
    ((This)->lpVtbl->SetNotifyWin32Event(This))
#define ISpEventSource_WaitForNotifyEvent(This,dwMilliseconds) \
    ((This)->lpVtbl->WaitForNotifyEvent(This,dwMilliseconds))
#define ISpEventSource_GetNotifyEventHandle(This) \
    ((This)->lpVtbl->GetNotifyEventHandle(This))
/*** ISpEventSource methods ***/
#define ISpEventSource_SetInterest(This,ullEventInterest,ullQueuedInterest) \
    ((This)->lpVtbl->SetInterest(This,ullEventInterest,ullQueuedInterest))
#define ISpEventSource_GetEvents(This,ulCount,pEventArray,pulFetched) \
    ((This)->lpVtbl->GetEvents(This,ulCount,pEventArray,pulFetched))
#define ISpEventSource_GetInfo(This,pInfo) \
    ((This)->lpVtbl->GetInfo(This,pInfo))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpEventSource_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ISpEventSource2 interface
 */
#ifndef __ISpEventSource2_INTERFACE_DEFINED__
#define __ISpEventSource2_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpEventSource2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpEventSource2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpEventSource2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpEventSource2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpEventSource2 *This);

    /*** ISpNotifySource methods ***/
    HRESULT (STDMETHODCALLTYPE *SetNotifySink)(
        ISpEventSource2 *This,
        ISpNotifySink *pNotifySink);

    HRESULT (STDMETHODCALLTYPE *SetNotifyWindowMessage)(
        ISpEventSource2 *This,
        HWND hWnd,
        UINT Msg,
        WPARAM wParam,
        LPARAM lParam);

    HRESULT (STDMETHODCALLTYPE *SetNotifyCallbackFunction)(
        ISpEventSource2 *This,
        SPNOTIFYCALLBACK *pfnCallback,
        WPARAM wParam,
        LPARAM lParam);

    HRESULT (STDMETHODCALLTYPE *SetNotifyCallbackInterface)(
        ISpEventSource2 *This,
        ISpNotifyCallback *pSpCallback,
        WPARAM wParam,
        LPARAM lParam);

    HRESULT (STDMETHODCALLTYPE *SetNotifyWin32Event)(
        ISpEventSource2 *This);

    HRESULT (STDMETHODCALLTYPE *WaitForNotifyEvent)(
        ISpEventSource2 *This,
        DWORD dwMilliseconds);

    HANDLE (STDMETHODCALLTYPE *GetNotifyEventHandle)(
        ISpEventSource2 *This);

    /*** ISpEventSource methods ***/
    HRESULT (STDMETHODCALLTYPE *SetInterest)(
        ISpEventSource2 *This,
        ULONGLONG ullEventInterest,
        ULONGLONG ullQueuedInterest);

    HRESULT (STDMETHODCALLTYPE *GetEvents)(
        ISpEventSource2 *This,
        ULONG ulCount,
        SPEVENT *pEventArray,
        ULONG *pulFetched);

    HRESULT (STDMETHODCALLTYPE *GetInfo)(
        ISpEventSource2 *This,
        SPEVENTSOURCEINFO *pInfo);

    /*** ISpEventSource2 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetEventsEx)(
        ISpEventSource2 *This,
        ULONG ulCount,
        SPEVENTEX *pEventArray,
        ULONG *pulFetched);

    END_INTERFACE
} ISpEventSource2Vtbl;

interface ISpEventSource2 {
    CONST_VTBL ISpEventSource2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpEventSource2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpEventSource2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpEventSource2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISpNotifySource methods ***/
#define ISpEventSource2_SetNotifySink(This,pNotifySink) \
    ((This)->lpVtbl->SetNotifySink(This,pNotifySink))
#define ISpEventSource2_SetNotifyWindowMessage(This,hWnd,Msg,wParam,lParam) \
    ((This)->lpVtbl->SetNotifyWindowMessage(This,hWnd,Msg,wParam,lParam))
#define ISpEventSource2_SetNotifyCallbackFunction(This,pfnCallback,wParam,lParam) \
    ((This)->lpVtbl->SetNotifyCallbackFunction(This,pfnCallback,wParam,lParam))
#define ISpEventSource2_SetNotifyCallbackInterface(This,pSpCallback,wParam,lParam) \
    ((This)->lpVtbl->SetNotifyCallbackInterface(This,pSpCallback,wParam,lParam))
#define ISpEventSource2_SetNotifyWin32Event(This) \
    ((This)->lpVtbl->SetNotifyWin32Event(This))
#define ISpEventSource2_WaitForNotifyEvent(This,dwMilliseconds) \
    ((This)->lpVtbl->WaitForNotifyEvent(This,dwMilliseconds))
#define ISpEventSource2_GetNotifyEventHandle(This) \
    ((This)->lpVtbl->GetNotifyEventHandle(This))
/*** ISpEventSource methods ***/
#define ISpEventSource2_SetInterest(This,ullEventInterest,ullQueuedInterest) \
    ((This)->lpVtbl->SetInterest(This,ullEventInterest,ullQueuedInterest))
#define ISpEventSource2_GetEvents(This,ulCount,pEventArray,pulFetched) \
    ((This)->lpVtbl->GetEvents(This,ulCount,pEventArray,pulFetched))
#define ISpEventSource2_GetInfo(This,pInfo) \
    ((This)->lpVtbl->GetInfo(This,pInfo))
/*** ISpEventSource2 methods ***/
#define ISpEventSource2_GetEventsEx(This,ulCount,pEventArray,pulFetched) \
    ((This)->lpVtbl->GetEventsEx(This,ulCount,pEventArray,pulFetched))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpEventSource2_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ISpEventSink interface
 */
#ifndef __ISpEventSink_INTERFACE_DEFINED__
#define __ISpEventSink_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpEventSink;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpEventSinkVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpEventSink *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpEventSink *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpEventSink *This);

    /*** ISpEventSink methods ***/
    HRESULT (STDMETHODCALLTYPE *AddEvents)(
        ISpEventSink *This,
        const SPEVENT *pEventArray,
        ULONG ulCount);

    HRESULT (STDMETHODCALLTYPE *GetEventInterest)(
        ISpEventSink *This,
        ULONGLONG *pullEventInterest);

    END_INTERFACE
} ISpEventSinkVtbl;

interface ISpEventSink {
    CONST_VTBL ISpEventSinkVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpEventSink_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpEventSink_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpEventSink_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISpEventSink methods ***/
#define ISpEventSink_AddEvents(This,pEventArray,ulCount) \
    ((This)->lpVtbl->AddEvents(This,pEventArray,ulCount))
#define ISpEventSink_GetEventInterest(This,pullEventInterest) \
    ((This)->lpVtbl->GetEventInterest(This,pullEventInterest))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpEventSink_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ISpStreamFormat interface
 */
#ifndef __ISpStreamFormat_INTERFACE_DEFINED__
#define __ISpStreamFormat_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpStreamFormat;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpStreamFormatVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpStreamFormat *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpStreamFormat *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpStreamFormat *This);

    /*** ISequentialStream methods ***/
    HRESULT (STDMETHODCALLTYPE *Read)(
        ISpStreamFormat *This,
        void *pv,
        ULONG cb,
        ULONG *pcbRead);

    HRESULT (STDMETHODCALLTYPE *Write)(
        ISpStreamFormat *This,
        void *pv,
        ULONG cb,
        ULONG *pcbWritten);

    /*** IStream methods ***/
    HRESULT (STDMETHODCALLTYPE *Seek)(
        ISpStreamFormat *This,
        LARGE_INTEGER dlibMove,
        DWORD dwOrigin,
        ULARGE_INTEGER *plibNewPosition);

    HRESULT (STDMETHODCALLTYPE *SetSize)(
        ISpStreamFormat *This,
        ULARGE_INTEGER libNewSize);

    HRESULT (STDMETHODCALLTYPE *CopyTo)(
        ISpStreamFormat *This,
        IStream *pstm,
        ULARGE_INTEGER cb,
        ULARGE_INTEGER *pcbRead,
        ULARGE_INTEGER *pcbWritten);

    HRESULT (STDMETHODCALLTYPE *Commit)(
        ISpStreamFormat *This,
        DWORD grfCommitFlags);

    HRESULT (STDMETHODCALLTYPE *Revert)(
        ISpStreamFormat *This);

    HRESULT (STDMETHODCALLTYPE *LockRegion)(
        ISpStreamFormat *This,
        ULARGE_INTEGER libOffset,
        ULARGE_INTEGER cb,
        DWORD dwLockType);

    HRESULT (STDMETHODCALLTYPE *UnlockRegion)(
        ISpStreamFormat *This,
        ULARGE_INTEGER libOffset,
        ULARGE_INTEGER cb,
        DWORD dwLockType);

    HRESULT (STDMETHODCALLTYPE *Stat)(
        ISpStreamFormat *This,
        STATSTG *pstatstg,
        DWORD grfStatFlag);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        ISpStreamFormat *This,
        IStream **ppstm);

    /*** ISpStreamFormat methods ***/
    HRESULT (STDMETHODCALLTYPE *GetFormat)(
        ISpStreamFormat *This,
        GUID *pguidFormatId,
        WAVEFORMATEX **ppCoMemWaveFormatEx);

    END_INTERFACE
} ISpStreamFormatVtbl;

interface ISpStreamFormat {
    CONST_VTBL ISpStreamFormatVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpStreamFormat_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpStreamFormat_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpStreamFormat_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISequentialStream methods ***/
#define ISpStreamFormat_Read(This,pv,cb,pcbRead) \
    ((This)->lpVtbl->Read(This,pv,cb,pcbRead))
#define ISpStreamFormat_Write(This,pv,cb,pcbWritten) \
    ((This)->lpVtbl->Write(This,pv,cb,pcbWritten))
/*** IStream methods ***/
#define ISpStreamFormat_Seek(This,dlibMove,dwOrigin,plibNewPosition) \
    ((This)->lpVtbl->Seek(This,dlibMove,dwOrigin,plibNewPosition))
#define ISpStreamFormat_SetSize(This,libNewSize) \
    ((This)->lpVtbl->SetSize(This,libNewSize))
#define ISpStreamFormat_CopyTo(This,pstm,cb,pcbRead,pcbWritten) \
    ((This)->lpVtbl->CopyTo(This,pstm,cb,pcbRead,pcbWritten))
#define ISpStreamFormat_Commit(This,grfCommitFlags) \
    ((This)->lpVtbl->Commit(This,grfCommitFlags))
#define ISpStreamFormat_Revert(This) \
    ((This)->lpVtbl->Revert(This))
#define ISpStreamFormat_LockRegion(This,libOffset,cb,dwLockType) \
    ((This)->lpVtbl->LockRegion(This,libOffset,cb,dwLockType))
#define ISpStreamFormat_UnlockRegion(This,libOffset,cb,dwLockType) \
    ((This)->lpVtbl->UnlockRegion(This,libOffset,cb,dwLockType))
#define ISpStreamFormat_Stat(This,pstatstg,grfStatFlag) \
    ((This)->lpVtbl->Stat(This,pstatstg,grfStatFlag))
#define ISpStreamFormat_Clone(This,ppstm) \
    ((This)->lpVtbl->Clone(This,ppstm))
/*** ISpStreamFormat methods ***/
#define ISpStreamFormat_GetFormat(This,pguidFormatId,ppCoMemWaveFormatEx) \
    ((This)->lpVtbl->GetFormat(This,pguidFormatId,ppCoMemWaveFormatEx))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpStreamFormat_INTERFACE_DEFINED__ */

typedef enum SPFILEMODE {
    SPFM_OPEN_READONLY = 0,
    SPFM_OPEN_READWRITE = 1,
    SPFM_CREATE = 2,
    SPFM_CREATE_ALWAYS = 3,
    SPFM_NUM_MODES = 4
} SPFILEMODE;

/*****************************************************************************
 * ISpStream interface
 */
#ifndef __ISpStream_INTERFACE_DEFINED__
#define __ISpStream_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpStream;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpStreamVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpStream *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpStream *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpStream *This);

    /*** ISequentialStream methods ***/
    HRESULT (STDMETHODCALLTYPE *Read)(
        ISpStream *This,
        void *pv,
        ULONG cb,
        ULONG *pcbRead);

    HRESULT (STDMETHODCALLTYPE *Write)(
        ISpStream *This,
        void *pv,
        ULONG cb,
        ULONG *pcbWritten);

    /*** IStream methods ***/
    HRESULT (STDMETHODCALLTYPE *Seek)(
        ISpStream *This,
        LARGE_INTEGER dlibMove,
        DWORD dwOrigin,
        ULARGE_INTEGER *plibNewPosition);

    HRESULT (STDMETHODCALLTYPE *SetSize)(
        ISpStream *This,
        ULARGE_INTEGER libNewSize);

    HRESULT (STDMETHODCALLTYPE *CopyTo)(
        ISpStream *This,
        IStream *pstm,
        ULARGE_INTEGER cb,
        ULARGE_INTEGER *pcbRead,
        ULARGE_INTEGER *pcbWritten);

    HRESULT (STDMETHODCALLTYPE *Commit)(
        ISpStream *This,
        DWORD grfCommitFlags);

    HRESULT (STDMETHODCALLTYPE *Revert)(
        ISpStream *This);

    HRESULT (STDMETHODCALLTYPE *LockRegion)(
        ISpStream *This,
        ULARGE_INTEGER libOffset,
        ULARGE_INTEGER cb,
        DWORD dwLockType);

    HRESULT (STDMETHODCALLTYPE *UnlockRegion)(
        ISpStream *This,
        ULARGE_INTEGER libOffset,
        ULARGE_INTEGER cb,
        DWORD dwLockType);

    HRESULT (STDMETHODCALLTYPE *Stat)(
        ISpStream *This,
        STATSTG *pstatstg,
        DWORD grfStatFlag);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        ISpStream *This,
        IStream **ppstm);

    /*** ISpStreamFormat methods ***/
    HRESULT (STDMETHODCALLTYPE *GetFormat)(
        ISpStream *This,
        GUID *pguidFormatId,
        WAVEFORMATEX **ppCoMemWaveFormatEx);

    /*** ISpStream methods ***/
    HRESULT (STDMETHODCALLTYPE *SetBaseStream)(
        ISpStream *This,
        IStream *pStream,
        REFGUID rguidFormat,
        const WAVEFORMATEX *pWaveFormatEx);

    HRESULT (STDMETHODCALLTYPE *GetBaseStream)(
        ISpStream *This,
        IStream **ppStream);

    HRESULT (STDMETHODCALLTYPE *BindToFile)(
        ISpStream *This,
        LPCWSTR pszFileName,
        SPFILEMODE eMode,
        const GUID *pFormatId,
        const WAVEFORMATEX *pWaveFormatEx,
        ULONGLONG ullEventInterest);

    HRESULT (STDMETHODCALLTYPE *Close)(
        ISpStream *This);

    END_INTERFACE
} ISpStreamVtbl;

interface ISpStream {
    CONST_VTBL ISpStreamVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpStream_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpStream_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpStream_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISequentialStream methods ***/
#define ISpStream_Read(This,pv,cb,pcbRead) \
    ((This)->lpVtbl->Read(This,pv,cb,pcbRead))
#define ISpStream_Write(This,pv,cb,pcbWritten) \
    ((This)->lpVtbl->Write(This,pv,cb,pcbWritten))
/*** IStream methods ***/
#define ISpStream_Seek(This,dlibMove,dwOrigin,plibNewPosition) \
    ((This)->lpVtbl->Seek(This,dlibMove,dwOrigin,plibNewPosition))
#define ISpStream_SetSize(This,libNewSize) \
    ((This)->lpVtbl->SetSize(This,libNewSize))
#define ISpStream_CopyTo(This,pstm,cb,pcbRead,pcbWritten) \
    ((This)->lpVtbl->CopyTo(This,pstm,cb,pcbRead,pcbWritten))
#define ISpStream_Commit(This,grfCommitFlags) \
    ((This)->lpVtbl->Commit(This,grfCommitFlags))
#define ISpStream_Revert(This) \
    ((This)->lpVtbl->Revert(This))
#define ISpStream_LockRegion(This,libOffset,cb,dwLockType) \
    ((This)->lpVtbl->LockRegion(This,libOffset,cb,dwLockType))
#define ISpStream_UnlockRegion(This,libOffset,cb,dwLockType) \
    ((This)->lpVtbl->UnlockRegion(This,libOffset,cb,dwLockType))
#define ISpStream_Stat(This,pstatstg,grfStatFlag) \
    ((This)->lpVtbl->Stat(This,pstatstg,grfStatFlag))
#define ISpStream_Clone(This,ppstm) \
    ((This)->lpVtbl->Clone(This,ppstm))
/*** ISpStreamFormat methods ***/
#define ISpStream_GetFormat(This,pguidFormatId,ppCoMemWaveFormatEx) \
    ((This)->lpVtbl->GetFormat(This,pguidFormatId,ppCoMemWaveFormatEx))
/*** ISpStream methods ***/
#define ISpStream_SetBaseStream(This,pStream,rguidFormat,pWaveFormatEx) \
    ((This)->lpVtbl->SetBaseStream(This,pStream,rguidFormat,pWaveFormatEx))
#define ISpStream_GetBaseStream(This,ppStream) \
    ((This)->lpVtbl->GetBaseStream(This,ppStream))
#define ISpStream_BindToFile(This,pszFileName,eMode,pFormatId,pWaveFormatEx,ullEventInterest) \
    ((This)->lpVtbl->BindToFile(This,pszFileName,eMode,pFormatId,pWaveFormatEx,ullEventInterest))
#define ISpStream_Close(This) \
    ((This)->lpVtbl->Close(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpStream_INTERFACE_DEFINED__ */
/*****************************************************************************
 * ISpStreamFormatConverter interface
 */
#ifndef __ISpStreamFormatConverter_INTERFACE_DEFINED__
#define __ISpStreamFormatConverter_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpStreamFormatConverter;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpStreamFormatConverterVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpStreamFormatConverter *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpStreamFormatConverter *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpStreamFormatConverter *This);

    /*** ISequentialStream methods ***/
    HRESULT (STDMETHODCALLTYPE *Read)(
        ISpStreamFormatConverter *This,
        void *pv,
        ULONG cb,
        ULONG *pcbRead);

    HRESULT (STDMETHODCALLTYPE *Write)(
        ISpStreamFormatConverter *This,
        void *pv,
        ULONG cb,
        ULONG *pcbWritten);

    /*** IStream methods ***/
    HRESULT (STDMETHODCALLTYPE *Seek)(
        ISpStreamFormatConverter *This,
        LARGE_INTEGER dlibMove,
        DWORD dwOrigin,
        ULARGE_INTEGER *plibNewPosition);

    HRESULT (STDMETHODCALLTYPE *SetSize)(
        ISpStreamFormatConverter *This,
        ULARGE_INTEGER libNewSize);

    HRESULT (STDMETHODCALLTYPE *CopyTo)(
        ISpStreamFormatConverter *This,
        IStream *pstm,
        ULARGE_INTEGER cb,
        ULARGE_INTEGER *pcbRead,
        ULARGE_INTEGER *pcbWritten);

    HRESULT (STDMETHODCALLTYPE *Commit)(
        ISpStreamFormatConverter *This,
        DWORD grfCommitFlags);

    HRESULT (STDMETHODCALLTYPE *Revert)(
        ISpStreamFormatConverter *This);

    HRESULT (STDMETHODCALLTYPE *LockRegion)(
        ISpStreamFormatConverter *This,
        ULARGE_INTEGER libOffset,
        ULARGE_INTEGER cb,
        DWORD dwLockType);

    HRESULT (STDMETHODCALLTYPE *UnlockRegion)(
        ISpStreamFormatConverter *This,
        ULARGE_INTEGER libOffset,
        ULARGE_INTEGER cb,
        DWORD dwLockType);

    HRESULT (STDMETHODCALLTYPE *Stat)(
        ISpStreamFormatConverter *This,
        STATSTG *pstatstg,
        DWORD grfStatFlag);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        ISpStreamFormatConverter *This,
        IStream **ppstm);

    /*** ISpStreamFormat methods ***/
    HRESULT (STDMETHODCALLTYPE *GetFormat)(
        ISpStreamFormatConverter *This,
        GUID *pguidFormatId,
        WAVEFORMATEX **ppCoMemWaveFormatEx);

    /*** ISpStreamFormatConverter methods ***/
    HRESULT (STDMETHODCALLTYPE *SetBaseStream)(
        ISpStreamFormatConverter *This,
        ISpStreamFormat *pStream,
        BOOL fSetFormatToBaseStreamFormat,
        BOOL fWriteToBaseStream);

    HRESULT (STDMETHODCALLTYPE *GetBaseStream)(
        ISpStreamFormatConverter *This,
        ISpStreamFormat **ppStream);

    HRESULT (STDMETHODCALLTYPE *SetFormat)(
        ISpStreamFormatConverter *This,
        REFGUID rguidFormatIdOfConvertedStream,
        const WAVEFORMATEX *pWaveFormatExOfConvertedStream);

    HRESULT (STDMETHODCALLTYPE *ResetSeekPosition)(
        ISpStreamFormatConverter *This);

    HRESULT (STDMETHODCALLTYPE *ScaleConvertedToBaseOffset)(
        ISpStreamFormatConverter *This,
        ULONGLONG ullOffsetConvertedStream,
        ULONGLONG *pullOffsetBaseStream);

    HRESULT (STDMETHODCALLTYPE *ScaleBaseToConvertedOffset)(
        ISpStreamFormatConverter *This,
        ULONGLONG ullOffsetBaseStream,
        ULONGLONG *pullOffsetConvertedStream);

    END_INTERFACE
} ISpStreamFormatConverterVtbl;

interface ISpStreamFormatConverter {
    CONST_VTBL ISpStreamFormatConverterVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpStreamFormatConverter_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpStreamFormatConverter_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpStreamFormatConverter_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISequentialStream methods ***/
#define ISpStreamFormatConverter_Read(This,pv,cb,pcbRead) \
    ((This)->lpVtbl->Read(This,pv,cb,pcbRead))
#define ISpStreamFormatConverter_Write(This,pv,cb,pcbWritten) \
    ((This)->lpVtbl->Write(This,pv,cb,pcbWritten))
/*** IStream methods ***/
#define ISpStreamFormatConverter_Seek(This,dlibMove,dwOrigin,plibNewPosition) \
    ((This)->lpVtbl->Seek(This,dlibMove,dwOrigin,plibNewPosition))
#define ISpStreamFormatConverter_SetSize(This,libNewSize) \
    ((This)->lpVtbl->SetSize(This,libNewSize))
#define ISpStreamFormatConverter_CopyTo(This,pstm,cb,pcbRead,pcbWritten) \
    ((This)->lpVtbl->CopyTo(This,pstm,cb,pcbRead,pcbWritten))
#define ISpStreamFormatConverter_Commit(This,grfCommitFlags) \
    ((This)->lpVtbl->Commit(This,grfCommitFlags))
#define ISpStreamFormatConverter_Revert(This) \
    ((This)->lpVtbl->Revert(This))
#define ISpStreamFormatConverter_LockRegion(This,libOffset,cb,dwLockType) \
    ((This)->lpVtbl->LockRegion(This,libOffset,cb,dwLockType))
#define ISpStreamFormatConverter_UnlockRegion(This,libOffset,cb,dwLockType) \
    ((This)->lpVtbl->UnlockRegion(This,libOffset,cb,dwLockType))
#define ISpStreamFormatConverter_Stat(This,pstatstg,grfStatFlag) \
    ((This)->lpVtbl->Stat(This,pstatstg,grfStatFlag))
#define ISpStreamFormatConverter_Clone(This,ppstm) \
    ((This)->lpVtbl->Clone(This,ppstm))
/*** ISpStreamFormat methods ***/
#define ISpStreamFormatConverter_GetFormat(This,pguidFormatId,ppCoMemWaveFormatEx) \
    ((This)->lpVtbl->GetFormat(This,pguidFormatId,ppCoMemWaveFormatEx))
/*** ISpStreamFormatConverter methods ***/
#define ISpStreamFormatConverter_SetBaseStream(This,pStream,fSetFormatToBaseStreamFormat,fWriteToBaseStream) \
    ((This)->lpVtbl->SetBaseStream(This,pStream,fSetFormatToBaseStreamFormat,fWriteToBaseStream))
#define ISpStreamFormatConverter_GetBaseStream(This,ppStream) \
    ((This)->lpVtbl->GetBaseStream(This,ppStream))
#define ISpStreamFormatConverter_SetFormat(This,rguidFormatIdOfConvertedStream,pWaveFormatExOfConvertedStream) \
    ((This)->lpVtbl->SetFormat(This,rguidFormatIdOfConvertedStream,pWaveFormatExOfConvertedStream))
#define ISpStreamFormatConverter_ResetSeekPosition(This) \
    ((This)->lpVtbl->ResetSeekPosition(This))
#define ISpStreamFormatConverter_ScaleConvertedToBaseOffset(This,ullOffsetConvertedStream,pullOffsetBaseStream) \
    ((This)->lpVtbl->ScaleConvertedToBaseOffset(This,ullOffsetConvertedStream,pullOffsetBaseStream))
#define ISpStreamFormatConverter_ScaleBaseToConvertedOffset(This,ullOffsetBaseStream,pullOffsetConvertedStream) \
    ((This)->lpVtbl->ScaleBaseToConvertedOffset(This,ullOffsetBaseStream,pullOffsetConvertedStream))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpStreamFormatConverter_INTERFACE_DEFINED__ */

typedef enum _SPAUDIOSTATE {
    SPAS_CLOSED = 0,
    SPAS_STOP = 1,
    SPAS_PAUSE = 2,
    SPAS_RUN = 3
} SPAUDIOSTATE;

typedef struct SPAUDIOSTATUS {
    long cbFreeBuffSpace;
    ULONG cbNonBlockingIO;
    SPAUDIOSTATE State;
    ULONGLONG CurSeekPos;
    ULONGLONG CurDevicePos;
    DWORD dwAudioLevel;
    DWORD dwReserved2;
} SPAUDIOSTATUS;

typedef struct SPAUDIOBUFFERINFO {
    ULONG ulMsMinNotification;
    ULONG ulMsBufferSize;
    ULONG ulMsEventBias;
} SPAUDIOBUFFERINFO;

/*****************************************************************************
 * ISpAudio interface
 */
#ifndef __ISpAudio_INTERFACE_DEFINED__
#define __ISpAudio_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpAudio;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpAudioVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpAudio *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpAudio *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpAudio *This);

    /*** ISequentialStream methods ***/
    HRESULT (STDMETHODCALLTYPE *Read)(
        ISpAudio *This,
        void *pv,
        ULONG cb,
        ULONG *pcbRead);

    HRESULT (STDMETHODCALLTYPE *Write)(
        ISpAudio *This,
        void *pv,
        ULONG cb,
        ULONG *pcbWritten);

    /*** IStream methods ***/
    HRESULT (STDMETHODCALLTYPE *Seek)(
        ISpAudio *This,
        LARGE_INTEGER dlibMove,
        DWORD dwOrigin,
        ULARGE_INTEGER *plibNewPosition);

    HRESULT (STDMETHODCALLTYPE *SetSize)(
        ISpAudio *This,
        ULARGE_INTEGER libNewSize);

    HRESULT (STDMETHODCALLTYPE *CopyTo)(
        ISpAudio *This,
        IStream *pstm,
        ULARGE_INTEGER cb,
        ULARGE_INTEGER *pcbRead,
        ULARGE_INTEGER *pcbWritten);

    HRESULT (STDMETHODCALLTYPE *Commit)(
        ISpAudio *This,
        DWORD grfCommitFlags);

    HRESULT (STDMETHODCALLTYPE *Revert)(
        ISpAudio *This);

    HRESULT (STDMETHODCALLTYPE *LockRegion)(
        ISpAudio *This,
        ULARGE_INTEGER libOffset,
        ULARGE_INTEGER cb,
        DWORD dwLockType);

    HRESULT (STDMETHODCALLTYPE *UnlockRegion)(
        ISpAudio *This,
        ULARGE_INTEGER libOffset,
        ULARGE_INTEGER cb,
        DWORD dwLockType);

    HRESULT (STDMETHODCALLTYPE *Stat)(
        ISpAudio *This,
        STATSTG *pstatstg,
        DWORD grfStatFlag);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        ISpAudio *This,
        IStream **ppstm);

    /*** ISpStreamFormat methods ***/
    HRESULT (STDMETHODCALLTYPE *GetFormat)(
        ISpAudio *This,
        GUID *pguidFormatId,
        WAVEFORMATEX **ppCoMemWaveFormatEx);

    /*** ISpAudio methods ***/
    HRESULT (STDMETHODCALLTYPE *SetState)(
        ISpAudio *This,
        SPAUDIOSTATE NewState,
        ULONGLONG ullReserved);

    HRESULT (STDMETHODCALLTYPE *SetFormat)(
        ISpAudio *This,
        REFGUID rguidFmtId,
        const WAVEFORMATEX *pWaveFormatEx);

    HRESULT (STDMETHODCALLTYPE *GetStatus)(
        ISpAudio *This,
        SPAUDIOSTATUS *pStatus);

    HRESULT (STDMETHODCALLTYPE *SetBufferInfo)(
        ISpAudio *This,
        const SPAUDIOBUFFERINFO *pBuffInfo);

    HRESULT (STDMETHODCALLTYPE *GetBufferInfo)(
        ISpAudio *This,
        SPAUDIOBUFFERINFO *pBuffInfo);

    HRESULT (STDMETHODCALLTYPE *GetDefaultFormat)(
        ISpAudio *This,
        GUID *pFormatId,
        WAVEFORMATEX **ppCoMemWaveFormatEx);

    HANDLE (STDMETHODCALLTYPE *EventHandle)(
        ISpAudio *This);

    HRESULT (STDMETHODCALLTYPE *GetVolumeLevel)(
        ISpAudio *This,
        ULONG *pLevel);

    HRESULT (STDMETHODCALLTYPE *SetVolumeLevel)(
        ISpAudio *This,
        ULONG Level);

    HRESULT (STDMETHODCALLTYPE *GetBufferNotifySize)(
        ISpAudio *This,
        ULONG *pcbSize);

    HRESULT (STDMETHODCALLTYPE *SetBufferNotifySize)(
        ISpAudio *This,
        ULONG cbSize);

    END_INTERFACE
} ISpAudioVtbl;

interface ISpAudio {
    CONST_VTBL ISpAudioVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpAudio_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpAudio_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpAudio_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISequentialStream methods ***/
#define ISpAudio_Read(This,pv,cb,pcbRead) \
    ((This)->lpVtbl->Read(This,pv,cb,pcbRead))
#define ISpAudio_Write(This,pv,cb,pcbWritten) \
    ((This)->lpVtbl->Write(This,pv,cb,pcbWritten))
/*** IStream methods ***/
#define ISpAudio_Seek(This,dlibMove,dwOrigin,plibNewPosition) \
    ((This)->lpVtbl->Seek(This,dlibMove,dwOrigin,plibNewPosition))
#define ISpAudio_SetSize(This,libNewSize) \
    ((This)->lpVtbl->SetSize(This,libNewSize))
#define ISpAudio_CopyTo(This,pstm,cb,pcbRead,pcbWritten) \
    ((This)->lpVtbl->CopyTo(This,pstm,cb,pcbRead,pcbWritten))
#define ISpAudio_Commit(This,grfCommitFlags) \
    ((This)->lpVtbl->Commit(This,grfCommitFlags))
#define ISpAudio_Revert(This) \
    ((This)->lpVtbl->Revert(This))
#define ISpAudio_LockRegion(This,libOffset,cb,dwLockType) \
    ((This)->lpVtbl->LockRegion(This,libOffset,cb,dwLockType))
#define ISpAudio_UnlockRegion(This,libOffset,cb,dwLockType) \
    ((This)->lpVtbl->UnlockRegion(This,libOffset,cb,dwLockType))
#define ISpAudio_Stat(This,pstatstg,grfStatFlag) \
    ((This)->lpVtbl->Stat(This,pstatstg,grfStatFlag))
#define ISpAudio_Clone(This,ppstm) \
    ((This)->lpVtbl->Clone(This,ppstm))
/*** ISpStreamFormat methods ***/
#define ISpAudio_GetFormat(This,pguidFormatId,ppCoMemWaveFormatEx) \
    ((This)->lpVtbl->GetFormat(This,pguidFormatId,ppCoMemWaveFormatEx))
/*** ISpAudio methods ***/
#define ISpAudio_SetState(This,NewState,ullReserved) \
    ((This)->lpVtbl->SetState(This,NewState,ullReserved))
#define ISpAudio_SetFormat(This,rguidFmtId,pWaveFormatEx) \
    ((This)->lpVtbl->SetFormat(This,rguidFmtId,pWaveFormatEx))
#define ISpAudio_GetStatus(This,pStatus) \
    ((This)->lpVtbl->GetStatus(This,pStatus))
#define ISpAudio_SetBufferInfo(This,pBuffInfo) \
    ((This)->lpVtbl->SetBufferInfo(This,pBuffInfo))
#define ISpAudio_GetBufferInfo(This,pBuffInfo) \
    ((This)->lpVtbl->GetBufferInfo(This,pBuffInfo))
#define ISpAudio_GetDefaultFormat(This,pFormatId,ppCoMemWaveFormatEx) \
    ((This)->lpVtbl->GetDefaultFormat(This,pFormatId,ppCoMemWaveFormatEx))
#define ISpAudio_EventHandle(This) \
    ((This)->lpVtbl->EventHandle(This))
#define ISpAudio_GetVolumeLevel(This,pLevel) \
    ((This)->lpVtbl->GetVolumeLevel(This,pLevel))
#define ISpAudio_SetVolumeLevel(This,Level) \
    ((This)->lpVtbl->SetVolumeLevel(This,Level))
#define ISpAudio_GetBufferNotifySize(This,pcbSize) \
    ((This)->lpVtbl->GetBufferNotifySize(This,pcbSize))
#define ISpAudio_SetBufferNotifySize(This,cbSize) \
    ((This)->lpVtbl->SetBufferNotifySize(This,cbSize))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpAudio_INTERFACE_DEFINED__ */
/*****************************************************************************
 * ISpMMSysAudio interface
 */
#ifndef __ISpMMSysAudio_INTERFACE_DEFINED__
#define __ISpMMSysAudio_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpMMSysAudio;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpMMSysAudioVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpMMSysAudio *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpMMSysAudio *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpMMSysAudio *This);

    /*** ISequentialStream methods ***/
    HRESULT (STDMETHODCALLTYPE *Read)(
        ISpMMSysAudio *This,
        void *pv,
        ULONG cb,
        ULONG *pcbRead);

    HRESULT (STDMETHODCALLTYPE *Write)(
        ISpMMSysAudio *This,
        void *pv,
        ULONG cb,
        ULONG *pcbWritten);

    /*** IStream methods ***/
    HRESULT (STDMETHODCALLTYPE *Seek)(
        ISpMMSysAudio *This,
        LARGE_INTEGER dlibMove,
        DWORD dwOrigin,
        ULARGE_INTEGER *plibNewPosition);

    HRESULT (STDMETHODCALLTYPE *SetSize)(
        ISpMMSysAudio *This,
        ULARGE_INTEGER libNewSize);

    HRESULT (STDMETHODCALLTYPE *CopyTo)(
        ISpMMSysAudio *This,
        IStream *pstm,
        ULARGE_INTEGER cb,
        ULARGE_INTEGER *pcbRead,
        ULARGE_INTEGER *pcbWritten);

    HRESULT (STDMETHODCALLTYPE *Commit)(
        ISpMMSysAudio *This,
        DWORD grfCommitFlags);

    HRESULT (STDMETHODCALLTYPE *Revert)(
        ISpMMSysAudio *This);

    HRESULT (STDMETHODCALLTYPE *LockRegion)(
        ISpMMSysAudio *This,
        ULARGE_INTEGER libOffset,
        ULARGE_INTEGER cb,
        DWORD dwLockType);

    HRESULT (STDMETHODCALLTYPE *UnlockRegion)(
        ISpMMSysAudio *This,
        ULARGE_INTEGER libOffset,
        ULARGE_INTEGER cb,
        DWORD dwLockType);

    HRESULT (STDMETHODCALLTYPE *Stat)(
        ISpMMSysAudio *This,
        STATSTG *pstatstg,
        DWORD grfStatFlag);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        ISpMMSysAudio *This,
        IStream **ppstm);

    /*** ISpStreamFormat methods ***/
    HRESULT (STDMETHODCALLTYPE *GetFormat)(
        ISpMMSysAudio *This,
        GUID *pguidFormatId,
        WAVEFORMATEX **ppCoMemWaveFormatEx);

    /*** ISpAudio methods ***/
    HRESULT (STDMETHODCALLTYPE *SetState)(
        ISpMMSysAudio *This,
        SPAUDIOSTATE NewState,
        ULONGLONG ullReserved);

    HRESULT (STDMETHODCALLTYPE *SetFormat)(
        ISpMMSysAudio *This,
        REFGUID rguidFmtId,
        const WAVEFORMATEX *pWaveFormatEx);

    HRESULT (STDMETHODCALLTYPE *GetStatus)(
        ISpMMSysAudio *This,
        SPAUDIOSTATUS *pStatus);

    HRESULT (STDMETHODCALLTYPE *SetBufferInfo)(
        ISpMMSysAudio *This,
        const SPAUDIOBUFFERINFO *pBuffInfo);

    HRESULT (STDMETHODCALLTYPE *GetBufferInfo)(
        ISpMMSysAudio *This,
        SPAUDIOBUFFERINFO *pBuffInfo);

    HRESULT (STDMETHODCALLTYPE *GetDefaultFormat)(
        ISpMMSysAudio *This,
        GUID *pFormatId,
        WAVEFORMATEX **ppCoMemWaveFormatEx);

    HANDLE (STDMETHODCALLTYPE *EventHandle)(
        ISpMMSysAudio *This);

    HRESULT (STDMETHODCALLTYPE *GetVolumeLevel)(
        ISpMMSysAudio *This,
        ULONG *pLevel);

    HRESULT (STDMETHODCALLTYPE *SetVolumeLevel)(
        ISpMMSysAudio *This,
        ULONG Level);

    HRESULT (STDMETHODCALLTYPE *GetBufferNotifySize)(
        ISpMMSysAudio *This,
        ULONG *pcbSize);

    HRESULT (STDMETHODCALLTYPE *SetBufferNotifySize)(
        ISpMMSysAudio *This,
        ULONG cbSize);

    /*** ISpMMSysAudio methods ***/
    HRESULT (STDMETHODCALLTYPE *GetDeviceId)(
        ISpMMSysAudio *This,
        UINT *puDeviceId);

    HRESULT (STDMETHODCALLTYPE *SetDeviceId)(
        ISpMMSysAudio *This,
        UINT uDeviceId);

    HRESULT (STDMETHODCALLTYPE *GetMMHandle)(
        ISpMMSysAudio *This,
        void **pHandle);

    HRESULT (STDMETHODCALLTYPE *GetLineId)(
        ISpMMSysAudio *This,
        UINT *puLineId);

    HRESULT (STDMETHODCALLTYPE *SetLineId)(
        ISpMMSysAudio *This,
        UINT uLineId);

    END_INTERFACE
} ISpMMSysAudioVtbl;

interface ISpMMSysAudio {
    CONST_VTBL ISpMMSysAudioVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpMMSysAudio_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpMMSysAudio_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpMMSysAudio_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISequentialStream methods ***/
#define ISpMMSysAudio_Read(This,pv,cb,pcbRead) \
    ((This)->lpVtbl->Read(This,pv,cb,pcbRead))
#define ISpMMSysAudio_Write(This,pv,cb,pcbWritten) \
    ((This)->lpVtbl->Write(This,pv,cb,pcbWritten))
/*** IStream methods ***/
#define ISpMMSysAudio_Seek(This,dlibMove,dwOrigin,plibNewPosition) \
    ((This)->lpVtbl->Seek(This,dlibMove,dwOrigin,plibNewPosition))
#define ISpMMSysAudio_SetSize(This,libNewSize) \
    ((This)->lpVtbl->SetSize(This,libNewSize))
#define ISpMMSysAudio_CopyTo(This,pstm,cb,pcbRead,pcbWritten) \
    ((This)->lpVtbl->CopyTo(This,pstm,cb,pcbRead,pcbWritten))
#define ISpMMSysAudio_Commit(This,grfCommitFlags) \
    ((This)->lpVtbl->Commit(This,grfCommitFlags))
#define ISpMMSysAudio_Revert(This) \
    ((This)->lpVtbl->Revert(This))
#define ISpMMSysAudio_LockRegion(This,libOffset,cb,dwLockType) \
    ((This)->lpVtbl->LockRegion(This,libOffset,cb,dwLockType))
#define ISpMMSysAudio_UnlockRegion(This,libOffset,cb,dwLockType) \
    ((This)->lpVtbl->UnlockRegion(This,libOffset,cb,dwLockType))
#define ISpMMSysAudio_Stat(This,pstatstg,grfStatFlag) \
    ((This)->lpVtbl->Stat(This,pstatstg,grfStatFlag))
#define ISpMMSysAudio_Clone(This,ppstm) \
    ((This)->lpVtbl->Clone(This,ppstm))
/*** ISpStreamFormat methods ***/
#define ISpMMSysAudio_GetFormat(This,pguidFormatId,ppCoMemWaveFormatEx) \
    ((This)->lpVtbl->GetFormat(This,pguidFormatId,ppCoMemWaveFormatEx))
/*** ISpAudio methods ***/
#define ISpMMSysAudio_SetState(This,NewState,ullReserved) \
    ((This)->lpVtbl->SetState(This,NewState,ullReserved))
#define ISpMMSysAudio_SetFormat(This,rguidFmtId,pWaveFormatEx) \
    ((This)->lpVtbl->SetFormat(This,rguidFmtId,pWaveFormatEx))
#define ISpMMSysAudio_GetStatus(This,pStatus) \
    ((This)->lpVtbl->GetStatus(This,pStatus))
#define ISpMMSysAudio_SetBufferInfo(This,pBuffInfo) \
    ((This)->lpVtbl->SetBufferInfo(This,pBuffInfo))
#define ISpMMSysAudio_GetBufferInfo(This,pBuffInfo) \
    ((This)->lpVtbl->GetBufferInfo(This,pBuffInfo))
#define ISpMMSysAudio_GetDefaultFormat(This,pFormatId,ppCoMemWaveFormatEx) \
    ((This)->lpVtbl->GetDefaultFormat(This,pFormatId,ppCoMemWaveFormatEx))
#define ISpMMSysAudio_EventHandle(This) \
    ((This)->lpVtbl->EventHandle(This))
#define ISpMMSysAudio_GetVolumeLevel(This,pLevel) \
    ((This)->lpVtbl->GetVolumeLevel(This,pLevel))
#define ISpMMSysAudio_SetVolumeLevel(This,Level) \
    ((This)->lpVtbl->SetVolumeLevel(This,Level))
#define ISpMMSysAudio_GetBufferNotifySize(This,pcbSize) \
    ((This)->lpVtbl->GetBufferNotifySize(This,pcbSize))
#define ISpMMSysAudio_SetBufferNotifySize(This,cbSize) \
    ((This)->lpVtbl->SetBufferNotifySize(This,cbSize))
/*** ISpMMSysAudio methods ***/
#define ISpMMSysAudio_GetDeviceId(This,puDeviceId) \
    ((This)->lpVtbl->GetDeviceId(This,puDeviceId))
#define ISpMMSysAudio_SetDeviceId(This,uDeviceId) \
    ((This)->lpVtbl->SetDeviceId(This,uDeviceId))
#define ISpMMSysAudio_GetMMHandle(This,pHandle) \
    ((This)->lpVtbl->GetMMHandle(This,pHandle))
#define ISpMMSysAudio_GetLineId(This,puLineId) \
    ((This)->lpVtbl->GetLineId(This,puLineId))
#define ISpMMSysAudio_SetLineId(This,uLineId) \
    ((This)->lpVtbl->SetLineId(This,uLineId))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpMMSysAudio_INTERFACE_DEFINED__ */
/*****************************************************************************
 * ISpTranscript interface
 */
#ifndef __ISpTranscript_INTERFACE_DEFINED__
#define __ISpTranscript_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpTranscript;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpTranscriptVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpTranscript *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpTranscript *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpTranscript *This);

    /*** ISpTranscript methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTranscript)(
        ISpTranscript *This,
        LPWSTR *ppszTranscript);

    HRESULT (STDMETHODCALLTYPE *AppendTranscript)(
        ISpTranscript *This,
        LPCWSTR pszTranscript);

    END_INTERFACE
} ISpTranscriptVtbl;

interface ISpTranscript {
    CONST_VTBL ISpTranscriptVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpTranscript_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpTranscript_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpTranscript_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISpTranscript methods ***/
#define ISpTranscript_GetTranscript(This,ppszTranscript) \
    ((This)->lpVtbl->GetTranscript(This,ppszTranscript))
#define ISpTranscript_AppendTranscript(This,pszTranscript) \
    ((This)->lpVtbl->AppendTranscript(This,pszTranscript))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpTranscript_INTERFACE_DEFINED__ */

typedef enum SPDISPLYATTRIBUTES {
    SPAF_ONE_TRAILING_SPACE = 0x2,
    SPAF_TWO_TRAILING_SPACES = 0x4,
    SPAF_CONSUME_LEADING_SPACES = 0x8,
    SPAF_BUFFER_POSITION = 0x10,
    SPAF_ALL = 0x1f,
    SPAF_USER_SPECIFIED = 0x80
} SPDISPLAYATTRIBUTES;

typedef WCHAR SPPHONEID;
typedef LPWSTR PSPPHONEID;
typedef LPCWSTR PCSPPHONEID;

typedef struct SPPHRASEELEMENT {
    ULONG ulAudioTimeOffset;
    ULONG ulAudioSizeTime;
    ULONG ulAudioStreamOffset;
    ULONG ulAudioSizeBytes;
    ULONG ulRetainedStreamOffset;
    ULONG ulRetainedSizeBytes;
    LPCWSTR pszDisplayText;
    LPCWSTR pszLexicalForm;
    const SPPHONEID *pszPronunciation;
    BYTE bDisplayAttributes;
    signed char RequiredConfidence;
    signed char ActualConfidence;
    BYTE Reserved;
    float SREngineConfidence;
} SPPHRASEELEMENT;

typedef struct SPPHRASERULE SPPHRASERULE;

struct SPPHRASERULE {
    LPCWSTR pszName;
    ULONG ulId;
    ULONG ulFirstElement;
    ULONG ulCountOfElements;
    const SPPHRASERULE *pNextSibling;
    const SPPHRASERULE *pFirstChild;
    float SREngineConfidence;
    signed char Confidence;
};

typedef struct SPPHRASEPROPERTY SPPHRASEPROPERTY;

typedef enum SPPHRASEPROPERTYUNIONTYPE {
    SPPPUT_UNUSED = 0,
    SPPPUT_ARRAY_INDEX = 1
} SPPHRASEPROPERTYUNIONTYPE;

struct SPPHRASEPROPERTY {
    LPCWSTR pszName;
    union {
        ULONG ulId;
        struct {
            byte bType;
            byte bReserved;
            unsigned short usArrayIndex;
        };
    };
    LPCWSTR pszValue;
    VARIANT vValue;
    ULONG ulFirstElement;
    ULONG ulCountOfElements;
    const SPPHRASEPROPERTY *pNextSibling;
    const SPPHRASEPROPERTY *pFirstChild;
    float SREngineConfidence;
    signed char Confidence;
};

typedef struct SPPHRASEREPLACEMENT {
    BYTE bDisplayAttributes;
    LPCWSTR pszReplacementText;
    ULONG ulFirstElement;
    ULONG ulCountOfElements;
} SPPHRASEREPLACEMENT;

typedef struct SPSEMANTICERRORINFO {
    ULONG ulLineNumber;
    LPWSTR pszScriptLine;
    LPWSTR pszSource;
    LPWSTR pszDescription;
    HRESULT hrResultCode;
} SPSEMANTICERRORINFO;

typedef enum SPSEMANTICFORMAT {
    SPSMF_SAPI_PROPERTIES = 0,
    SPSMF_SRGS_SEMANTICINTERPRETATION_MS = 1,
    SPSMF_SRGS_SAPIPROPERTIES = 2,
    SPSMF_UPS = 4,
    SPSMF_SRGS_SEMANTICINTERPRETATION_W3C = 8
} SPSEMANTICFORMAT;

typedef struct SPPHRASE_50 {
    ULONG cbSize;
    WORD LangID;
    WORD wHomophoneGroupId;
    ULONGLONG ullGrammarID;
    ULONGLONG ftStartTime;
    ULONGLONG ullAudioStreamPosition;
    ULONG ulAudioSizeBytes;
    ULONG ulRetainedSizeBytes;
    ULONG ulAudioSizeTime;
    SPPHRASERULE Rule;
    const SPPHRASEPROPERTY *pProperties;
    const SPPHRASEELEMENT *pElements;
    ULONG cReplacements;
    const SPPHRASEREPLACEMENT *pReplacements;
    GUID SREngineID;
    ULONG ulSREnginePrivateDataSize;
    const BYTE *pSREnginePrivateData;
} SPPHRASE_50;

#define SP_SPPHRASESIZE_500 sizeof(SPPHRASE_50)

typedef struct SPPHRASE_53 {
    ULONG cbSize;
    WORD LangID;
    WORD wHomophoneGroupId;
    ULONGLONG ullGrammarID;
    ULONGLONG ftStartTime;
    ULONGLONG ullAudioStreamPosition;
    ULONG ulAudioSizeBytes;
    ULONG ulRetainedSizeBytes;
    ULONG ulAudioSizeTime;
    SPPHRASERULE Rule;
    const SPPHRASEPROPERTY *pProperties;
    const SPPHRASEELEMENT *pElements;
    ULONG cReplacements;
    const SPPHRASEREPLACEMENT *pReplacements;
    GUID SREngineID;
    ULONG ulSREnginePrivateDataSize;
    const BYTE *pSREnginePrivateData;
    LPWSTR pSML;
    SPSEMANTICERRORINFO *pSemanticErrorInfo;
} SPPHRASE_53;

#define SP_SPPHRASESIZE_530 sizeof(SPPHRASE_53)

typedef struct SPPHRASE {
    ULONG cbSize;
    WORD LangID;
    WORD wHomophoneGroupId;
    ULONGLONG ullGrammarID;
    ULONGLONG ftStartTime;
    ULONGLONG ullAudioStreamPosition;
    ULONG ulAudioSizeBytes;
    ULONG ulRetainedSizeBytes;
    ULONG ulAudioSizeTime;
    SPPHRASERULE Rule;
    const SPPHRASEPROPERTY *pProperties;
    const SPPHRASEELEMENT *pElements;
    ULONG cReplacements;
    const SPPHRASEREPLACEMENT *pReplacements;
    GUID SREngineID;
    ULONG ulSREnginePrivateDataSize;
    const BYTE *pSREnginePrivateData;
    LPWSTR pSML;
    SPSEMANTICERRORINFO *pSemanticErrorInfo;
    SPSEMANTICFORMAT SemanticTagFormat;
} SPPHRASE;

typedef struct SPSERIALIZEDPHRASE {
    ULONG ulSerializedSize;
} SPSERIALIZEDPHRASE;

typedef struct SPRULE {
    LPCWSTR pszRuleName;
    ULONG ulRuleId;
    DWORD dwAttributes;
} SPRULE;

typedef enum SPVALUETYPE {
    SPDF_PROPERTY = 0x1,
    SPDF_REPLACEMENT = 0x2,
    SPDF_RULE = 0x4,
    SPDF_DISPLAYTEXT = 0x8,
    SPDF_LEXICALFORM = 0x10,
    SPDF_PRONUNCIATION = 0x20,
    SPDF_AUDIO = 0x40,
    SPDF_ALTERNATES = 0x80,
    SPDF_ALL = 0xff
} SPVALUETYPE;

typedef struct SPBINARYGRAMMAR {
    ULONG ulTotalSerializedSize;
} SPBINARYGRAMMAR;

typedef enum SPPHRASERNG {
    SPPR_ALL_ELEMENTS = -1
} SPPHRASERNG;
#define SP_GETWHOLEPHRASE SPPR_ALL_ELEMENTS
#define SPRR_ALL_ELEMENTS SPPR_ALL_ELEMENTS

DECLARE_HANDLE(SPSTATEHANDLE);

typedef enum SPRECOEVENTFLAGS {
    SPREF_AutoPause = 1 << 0,
    SPREF_Emulated = 1 << 1,
    SPREF_SMLTimeout = 1 << 2,
    SPREF_ExtendableParse = 1 << 3,
    SPREF_ReSent = 1 << 4,
    SPREF_Hypothesis = 1 << 5,
    SPREF_FalseRecognition = 1 << 6
} SPRECOEVENTFLAGS;

typedef enum SPPARTOFSPEECH {
    SPPS_NotOverriden = -1,
    SPPS_Unknown = 0,
    SPPS_Noun = 0x1000,
    SPPS_Verb = 0x2000,
    SPPS_Modifier = 0x3000,
    SPPS_Function = 0x4000,
    SPPS_Interjection = 0x5000,
    SPPS_Noncontent = 0x6000,
    SPPS_LMA = 0x7000,
    SPPS_SuppressWord = 0xf000
} SPPARTOFSPEECH;

typedef enum SPLEXICONTYPE {
    eLEXTYPE_USER = 1 << 0,
    eLEXTYPE_APP = 1 << 1,
    eLEXTYPE_VENDORLEXICON = 1 << 2,
    eLEXTYPE_LETTERTOSOUND = 1 << 3,
    eLEXTYPE_MORPHOLOGY = 1 << 4,
    eLEXTYPE_RESERVED4 = 1 << 5,
    eLEXTYPE_USER_SHORTCUT = 1 << 6,
    eLEXTYPE_RESERVED6 = 1 << 7,
    eLEXTYPE_RESERVED7 = 1 << 8,
    eLEXTYPE_RESERVED8 = 1 << 9,
    eLEXTYPE_RESERVED9 = 1 << 10,
    eLEXTYPE_RESERVED10 = 1 << 11,
    eLEXTYPE_PRIVATE1 = 1 << 12,
    eLEXTYPE_PRIVATE2 = 1 << 13,
    eLEXTYPE_PRIVATE3 = 1 << 14,
    eLEXTYPE_PRIVATE4 = 1 << 15,
    eLEXTYPE_PRIVATE5 = 1 << 16,
    eLEXTYPE_PRIVATE6 = 1 << 17,
    eLEXTYPE_PRIVATE7 = 1 << 18,
    eLEXTYPE_PRIVATE8 = 1 << 19,
    eLEXTYPE_PRIVATE9 = 1 << 20,
    eLEXTYPE_PRIVATE10 = 1 << 21,
    eLEXTYPE_PRIVATE11 = 1 << 22,
    eLEXTYPE_PRIVATE12 = 1 << 23,
    eLEXTYPE_PRIVATE13 = 1 << 24,
    eLEXTYPE_PRIVATE14 = 1 << 25,
    eLEXTYPE_PRIVATE15 = 1 << 26,
    eLEXTYPE_PRIVATE16 = 1 << 27,
    eLEXTYPE_PRIVATE17 = 1 << 28,
    eLEXTYPE_PRIVATE18 = 1 << 29,
    eLEXTYPE_PRIVATE19 = 1 << 30,
    eLEXTYPE_PRIVATE20 = 1 << 31
} SPLEXICONTYPE;

typedef enum SPWORDTYPE {
    eWORDTYPE_ADDED = 1 << 0,
    eWORDTYPE_DELETED = 1 << 1
} SPWORDTYPE;

typedef enum SPPRONUNCIATIONFLAGS {
    ePRONFLAG_USED = 1 << 0
} SPPRONUNCIATIONFLAGS;

typedef struct SPWORDPRONUNCIATION {
    struct SPWORDPRONUNCIATION *pNextWordPronunciation;
    SPLEXICONTYPE eLexiconType;
    WORD LangID;
    WORD wPronunciationFlags;
    SPPARTOFSPEECH ePartOfSpeech;
    SPPHONEID szPronunciation[ 1 ];
} SPWORDPRONUNCIATION;

typedef struct SPWORDPRONUNCIATIONLIST {
    ULONG ulSize;
    BYTE *pvBuffer;
    SPWORDPRONUNCIATION *pFirstWordPronunciation;
} SPWORDPRONUNCIATIONLIST;

typedef struct SPWORD {
    struct SPWORD *pNextWord;
    WORD LangID;
    WORD wReserved;
    SPWORDTYPE eWordType;
    LPWSTR pszWord;
    SPWORDPRONUNCIATION *pFirstWordPronunciation;
} SPWORD;

typedef struct SPWORDLIST {
    ULONG ulSize;
    BYTE *pvBuffer;
    SPWORD *pFirstWord;
} SPWORDLIST;

/*****************************************************************************
 * ISpLexicon interface
 */
#ifndef __ISpLexicon_INTERFACE_DEFINED__
#define __ISpLexicon_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpLexicon;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpLexiconVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpLexicon *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpLexicon *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpLexicon *This);

    /*** ISpLexicon methods ***/
    HRESULT (STDMETHODCALLTYPE *GetPronunciations)(
        ISpLexicon *This,
        LPCWSTR pszWord,
        WORD LangID,
        DWORD dwFlags,
        SPWORDPRONUNCIATIONLIST *pWordPronunciationList);

    HRESULT (STDMETHODCALLTYPE *AddPronunciation)(
        ISpLexicon *This,
        LPCWSTR pszWord,
        WORD LangID,
        SPPARTOFSPEECH ePartOfSpeech,
        PCSPPHONEID pszPronunciation);

    HRESULT (STDMETHODCALLTYPE *RemovePronunciation)(
        ISpLexicon *This,
        LPCWSTR pszWord,
        WORD LangID,
        SPPARTOFSPEECH ePartOfSpeech,
        PCSPPHONEID pszPronunciation);

    HRESULT (STDMETHODCALLTYPE *GetGeneration)(
        ISpLexicon *This,
        DWORD *pdwGeneration);

    HRESULT (STDMETHODCALLTYPE *GetGenerationChange)(
        ISpLexicon *This,
        DWORD dwFlags,
        DWORD *pdwGeneration,
        SPWORDLIST *pWordList);

    HRESULT (STDMETHODCALLTYPE *GetWords)(
        ISpLexicon *This,
        DWORD dwFlags,
        DWORD *pdwGeneration,
        DWORD *pdwCookie,
        SPWORDLIST *pWordList);

    END_INTERFACE
} ISpLexiconVtbl;

interface ISpLexicon {
    CONST_VTBL ISpLexiconVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpLexicon_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpLexicon_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpLexicon_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISpLexicon methods ***/
#define ISpLexicon_GetPronunciations(This,pszWord,LangID,dwFlags,pWordPronunciationList) \
    ((This)->lpVtbl->GetPronunciations(This,pszWord,LangID,dwFlags,pWordPronunciationList))
#define ISpLexicon_AddPronunciation(This,pszWord,LangID,ePartOfSpeech,pszPronunciation) \
    ((This)->lpVtbl->AddPronunciation(This,pszWord,LangID,ePartOfSpeech,pszPronunciation))
#define ISpLexicon_RemovePronunciation(This,pszWord,LangID,ePartOfSpeech,pszPronunciation) \
    ((This)->lpVtbl->RemovePronunciation(This,pszWord,LangID,ePartOfSpeech,pszPronunciation))
#define ISpLexicon_GetGeneration(This,pdwGeneration) \
    ((This)->lpVtbl->GetGeneration(This,pdwGeneration))
#define ISpLexicon_GetGenerationChange(This,dwFlags,pdwGeneration,pWordList) \
    ((This)->lpVtbl->GetGenerationChange(This,dwFlags,pdwGeneration,pWordList))
#define ISpLexicon_GetWords(This,dwFlags,pdwGeneration,pdwCookie,pWordList) \
    ((This)->lpVtbl->GetWords(This,dwFlags,pdwGeneration,pdwCookie,pWordList))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpLexicon_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ISpContainerLexicon interface
 */
#ifndef __ISpContainerLexicon_INTERFACE_DEFINED__
#define __ISpContainerLexicon_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpContainerLexicon;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpContainerLexiconVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpContainerLexicon *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpContainerLexicon *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpContainerLexicon *This);

    /*** ISpLexicon methods ***/
    HRESULT (STDMETHODCALLTYPE *GetPronunciations)(
        ISpContainerLexicon *This,
        LPCWSTR pszWord,
        WORD LangID,
        DWORD dwFlags,
        SPWORDPRONUNCIATIONLIST *pWordPronunciationList);

    HRESULT (STDMETHODCALLTYPE *AddPronunciation)(
        ISpContainerLexicon *This,
        LPCWSTR pszWord,
        WORD LangID,
        SPPARTOFSPEECH ePartOfSpeech,
        PCSPPHONEID pszPronunciation);

    HRESULT (STDMETHODCALLTYPE *RemovePronunciation)(
        ISpContainerLexicon *This,
        LPCWSTR pszWord,
        WORD LangID,
        SPPARTOFSPEECH ePartOfSpeech,
        PCSPPHONEID pszPronunciation);

    HRESULT (STDMETHODCALLTYPE *GetGeneration)(
        ISpContainerLexicon *This,
        DWORD *pdwGeneration);

    HRESULT (STDMETHODCALLTYPE *GetGenerationChange)(
        ISpContainerLexicon *This,
        DWORD dwFlags,
        DWORD *pdwGeneration,
        SPWORDLIST *pWordList);

    HRESULT (STDMETHODCALLTYPE *GetWords)(
        ISpContainerLexicon *This,
        DWORD dwFlags,
        DWORD *pdwGeneration,
        DWORD *pdwCookie,
        SPWORDLIST *pWordList);

    /*** ISpContainerLexicon methods ***/
    HRESULT (STDMETHODCALLTYPE *AddLexicon)(
        ISpContainerLexicon *This,
        ISpLexicon *pAddLexicon,
        DWORD dwFlags);

    END_INTERFACE
} ISpContainerLexiconVtbl;

interface ISpContainerLexicon {
    CONST_VTBL ISpContainerLexiconVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpContainerLexicon_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpContainerLexicon_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpContainerLexicon_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISpLexicon methods ***/
#define ISpContainerLexicon_GetPronunciations(This,pszWord,LangID,dwFlags,pWordPronunciationList) \
    ((This)->lpVtbl->GetPronunciations(This,pszWord,LangID,dwFlags,pWordPronunciationList))
#define ISpContainerLexicon_AddPronunciation(This,pszWord,LangID,ePartOfSpeech,pszPronunciation) \
    ((This)->lpVtbl->AddPronunciation(This,pszWord,LangID,ePartOfSpeech,pszPronunciation))
#define ISpContainerLexicon_RemovePronunciation(This,pszWord,LangID,ePartOfSpeech,pszPronunciation) \
    ((This)->lpVtbl->RemovePronunciation(This,pszWord,LangID,ePartOfSpeech,pszPronunciation))
#define ISpContainerLexicon_GetGeneration(This,pdwGeneration) \
    ((This)->lpVtbl->GetGeneration(This,pdwGeneration))
#define ISpContainerLexicon_GetGenerationChange(This,dwFlags,pdwGeneration,pWordList) \
    ((This)->lpVtbl->GetGenerationChange(This,dwFlags,pdwGeneration,pWordList))
#define ISpContainerLexicon_GetWords(This,dwFlags,pdwGeneration,pdwCookie,pWordList) \
    ((This)->lpVtbl->GetWords(This,dwFlags,pdwGeneration,pdwCookie,pWordList))
/*** ISpContainerLexicon methods ***/
#define ISpContainerLexicon_AddLexicon(This,pAddLexicon,dwFlags) \
    ((This)->lpVtbl->AddLexicon(This,pAddLexicon,dwFlags))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpContainerLexicon_INTERFACE_DEFINED__ */

typedef enum SPSHORTCUTTYPE {
    SPSHT_NotOverriden = -1,
    SPSHT_Unknown = 0,
    SPSHT_EMAIL = 0x1000,
    SPSHT_OTHER = 0x2000,
    SPPS_RESERVED1 = 0x3000,
    SPPS_RESERVED2 = 0x4000,
    SPPS_RESERVED3 = 0x5000,
    SPPS_RESERVED4 = 0xf000
} SPSHORTCUTTYPE;

typedef struct SPSHORTCUTPAIR {
    struct SPSHORTCUTPAIR *pNextSHORTCUTPAIR;
    WORD LangID;
    SPSHORTCUTTYPE shType;
    LPWSTR pszDisplay;
    LPWSTR pszSpoken;
} SPSHORTCUTPAIR;

typedef struct SPSHORTCUTPAIRLIST {
    ULONG ulSize;
    BYTE *pvBuffer;
    SPSHORTCUTPAIR *pFirstShortcutPair;
} SPSHORTCUTPAIRLIST;

/*****************************************************************************
 * ISpShortcut interface
 */
#ifndef __ISpShortcut_INTERFACE_DEFINED__
#define __ISpShortcut_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpShortcut;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpShortcutVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpShortcut *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpShortcut *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpShortcut *This);

    /*** ISpShortcut methods ***/
    HRESULT (STDMETHODCALLTYPE *AddShortcut)(
        ISpShortcut *This,
        LPCWSTR pszDisplay,
        WORD LangID,
        LPCWSTR pszSpoken,
        SPSHORTCUTTYPE shType);

    HRESULT (STDMETHODCALLTYPE *RemoveShortcut)(
        ISpShortcut *This,
        LPCWSTR pszDisplay,
        WORD LangID,
        LPCWSTR pszSpoken,
        SPSHORTCUTTYPE shType);

    HRESULT (STDMETHODCALLTYPE *GetShortcuts)(
        ISpShortcut *This,
        WORD LangID,
        SPSHORTCUTPAIRLIST *pShortcutpairList);

    HRESULT (STDMETHODCALLTYPE *GetGeneration)(
        ISpShortcut *This,
        DWORD *pdwGeneration);

    HRESULT (STDMETHODCALLTYPE *GetWordsFromGenerationChange)(
        ISpShortcut *This,
        DWORD *pdwGeneration,
        SPWORDLIST *pWordList);

    HRESULT (STDMETHODCALLTYPE *GetWords)(
        ISpShortcut *This,
        DWORD *pdwGeneration,
        DWORD *pdwCookie,
        SPWORDLIST *pWordList);

    HRESULT (STDMETHODCALLTYPE *GetShortcutsForGeneration)(
        ISpShortcut *This,
        DWORD *pdwGeneration,
        DWORD *pdwCookie,
        SPSHORTCUTPAIRLIST *pShortcutpairList);

    HRESULT (STDMETHODCALLTYPE *GetGenerationChange)(
        ISpShortcut *This,
        DWORD *pdwGeneration,
        SPSHORTCUTPAIRLIST *pShortcutpairList);

    END_INTERFACE
} ISpShortcutVtbl;

interface ISpShortcut {
    CONST_VTBL ISpShortcutVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpShortcut_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpShortcut_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpShortcut_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISpShortcut methods ***/
#define ISpShortcut_AddShortcut(This,pszDisplay,LangID,pszSpoken,shType) \
    ((This)->lpVtbl->AddShortcut(This,pszDisplay,LangID,pszSpoken,shType))
#define ISpShortcut_RemoveShortcut(This,pszDisplay,LangID,pszSpoken,shType) \
    ((This)->lpVtbl->RemoveShortcut(This,pszDisplay,LangID,pszSpoken,shType))
#define ISpShortcut_GetShortcuts(This,LangID,pShortcutpairList) \
    ((This)->lpVtbl->GetShortcuts(This,LangID,pShortcutpairList))
#define ISpShortcut_GetGeneration(This,pdwGeneration) \
    ((This)->lpVtbl->GetGeneration(This,pdwGeneration))
#define ISpShortcut_GetWordsFromGenerationChange(This,pdwGeneration,pWordList) \
    ((This)->lpVtbl->GetWordsFromGenerationChange(This,pdwGeneration,pWordList))
#define ISpShortcut_GetWords(This,pdwGeneration,pdwCookie,pWordList) \
    ((This)->lpVtbl->GetWords(This,pdwGeneration,pdwCookie,pWordList))
#define ISpShortcut_GetShortcutsForGeneration(This,pdwGeneration,pdwCookie,pShortcutpairList) \
    ((This)->lpVtbl->GetShortcutsForGeneration(This,pdwGeneration,pdwCookie,pShortcutpairList))
#define ISpShortcut_GetGenerationChange(This,pdwGeneration,pShortcutpairList) \
    ((This)->lpVtbl->GetGenerationChange(This,pdwGeneration,pShortcutpairList))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpShortcut_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ISpPhoneConverter interface
 */
#ifndef __ISpPhoneConverter_INTERFACE_DEFINED__
#define __ISpPhoneConverter_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpPhoneConverter;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpPhoneConverterVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpPhoneConverter *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpPhoneConverter *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpPhoneConverter *This);

    /*** ISpObjectWithToken methods ***/
    HRESULT (STDMETHODCALLTYPE *SetObjectToken)(
        ISpPhoneConverter *This,
        ISpObjectToken *pToken);

    HRESULT (STDMETHODCALLTYPE *GetObjectToken)(
        ISpPhoneConverter *This,
        ISpObjectToken **ppToken);

    /*** ISpPhoneConverter methods ***/
    HRESULT (STDMETHODCALLTYPE *PhoneToId)(
        ISpPhoneConverter *This,
        LPCWSTR pszPhone,
        SPPHONEID *pId);

    HRESULT (STDMETHODCALLTYPE *IdToPhone)(
        ISpPhoneConverter *This,
        PCSPPHONEID pId,
        WCHAR *pszPhone);

    END_INTERFACE
} ISpPhoneConverterVtbl;

interface ISpPhoneConverter {
    CONST_VTBL ISpPhoneConverterVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpPhoneConverter_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpPhoneConverter_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpPhoneConverter_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISpObjectWithToken methods ***/
#define ISpPhoneConverter_SetObjectToken(This,pToken) \
    ((This)->lpVtbl->SetObjectToken(This,pToken))
#define ISpPhoneConverter_GetObjectToken(This,ppToken) \
    ((This)->lpVtbl->GetObjectToken(This,ppToken))
/*** ISpPhoneConverter methods ***/
#define ISpPhoneConverter_PhoneToId(This,pszPhone,pId) \
    ((This)->lpVtbl->PhoneToId(This,pszPhone,pId))
#define ISpPhoneConverter_IdToPhone(This,pId,pszPhone) \
    ((This)->lpVtbl->IdToPhone(This,pId,pszPhone))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpPhoneConverter_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ISpPhoneticAlphabetConverter interface
 */
#ifndef __ISpPhoneticAlphabetConverter_INTERFACE_DEFINED__
#define __ISpPhoneticAlphabetConverter_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpPhoneticAlphabetConverter;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpPhoneticAlphabetConverterVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpPhoneticAlphabetConverter *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpPhoneticAlphabetConverter *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpPhoneticAlphabetConverter *This);

    /*** ISpPhoneticAlphabetConverter methods ***/
    HRESULT (STDMETHODCALLTYPE *GetLangId)(
        ISpPhoneticAlphabetConverter *This,
        WORD *pLangID);

    HRESULT (STDMETHODCALLTYPE *SetLangId)(
        ISpPhoneticAlphabetConverter *This,
        WORD LangID);

    HRESULT (STDMETHODCALLTYPE *SAPI2UPS)(
        ISpPhoneticAlphabetConverter *This,
        const SPPHONEID *pszSAPIId,
        SPPHONEID *pszUPSId,
        DWORD cMaxLength);

    HRESULT (STDMETHODCALLTYPE *UPS2SAPI)(
        ISpPhoneticAlphabetConverter *This,
        const SPPHONEID *pszUPSId,
        SPPHONEID *pszSAPIId,
        DWORD cMaxLength);

    HRESULT (STDMETHODCALLTYPE *GetMaxConvertLength)(
        ISpPhoneticAlphabetConverter *This,
        DWORD cSrcLength,
        BOOL bSAPI2UPS,
        DWORD *pcMaxDestLength);

    END_INTERFACE
} ISpPhoneticAlphabetConverterVtbl;

interface ISpPhoneticAlphabetConverter {
    CONST_VTBL ISpPhoneticAlphabetConverterVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpPhoneticAlphabetConverter_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpPhoneticAlphabetConverter_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpPhoneticAlphabetConverter_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISpPhoneticAlphabetConverter methods ***/
#define ISpPhoneticAlphabetConverter_GetLangId(This,pLangID) \
    ((This)->lpVtbl->GetLangId(This,pLangID))
#define ISpPhoneticAlphabetConverter_SetLangId(This,LangID) \
    ((This)->lpVtbl->SetLangId(This,LangID))
#define ISpPhoneticAlphabetConverter_SAPI2UPS(This,pszSAPIId,pszUPSId,cMaxLength) \
    ((This)->lpVtbl->SAPI2UPS(This,pszSAPIId,pszUPSId,cMaxLength))
#define ISpPhoneticAlphabetConverter_UPS2SAPI(This,pszUPSId,pszSAPIId,cMaxLength) \
    ((This)->lpVtbl->UPS2SAPI(This,pszUPSId,pszSAPIId,cMaxLength))
#define ISpPhoneticAlphabetConverter_GetMaxConvertLength(This,cSrcLength,bSAPI2UPS,pcMaxDestLength) \
    ((This)->lpVtbl->GetMaxConvertLength(This,cSrcLength,bSAPI2UPS,pcMaxDestLength))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpPhoneticAlphabetConverter_INTERFACE_DEFINED__ */
/*****************************************************************************
 * ISpPhoneticAlphabetSelection interface
 */
#ifndef __ISpPhoneticAlphabetSelection_INTERFACE_DEFINED__
#define __ISpPhoneticAlphabetSelection_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpPhoneticAlphabetSelection;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpPhoneticAlphabetSelectionVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpPhoneticAlphabetSelection *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpPhoneticAlphabetSelection *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpPhoneticAlphabetSelection *This);

    /*** ISpPhoneticAlphabetSelection methods ***/
    HRESULT (STDMETHODCALLTYPE *IsAlphabetUPS)(
        ISpPhoneticAlphabetSelection *This,
        BOOL *pfIsUPS);

    HRESULT (STDMETHODCALLTYPE *SetAlphabetToUPS)(
        ISpPhoneticAlphabetSelection *This,
        BOOL fForceUPS);

    END_INTERFACE
} ISpPhoneticAlphabetSelectionVtbl;

interface ISpPhoneticAlphabetSelection {
    CONST_VTBL ISpPhoneticAlphabetSelectionVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpPhoneticAlphabetSelection_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpPhoneticAlphabetSelection_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpPhoneticAlphabetSelection_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISpPhoneticAlphabetSelection methods ***/
#define ISpPhoneticAlphabetSelection_IsAlphabetUPS(This,pfIsUPS) \
    ((This)->lpVtbl->IsAlphabetUPS(This,pfIsUPS))
#define ISpPhoneticAlphabetSelection_SetAlphabetToUPS(This,fForceUPS) \
    ((This)->lpVtbl->SetAlphabetToUPS(This,fForceUPS))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpPhoneticAlphabetSelection_INTERFACE_DEFINED__ */

typedef struct SPVPITCH {
    long MiddleAdj;
    long RangeAdj;
} SPVPITCH;

typedef enum SPVACTIONS {
    SPVA_Speak = 0,
    SPVA_Silence = 1,
    SPVA_Pronounce = 2,
    SPVA_Bookmark = 3,
    SPVA_SpellOut = 4,
    SPVA_Section = 5,
    SPVA_ParseUnknownTag = 6
} SPVACTIONS;

typedef struct SPVCONTEXT {
    LPCWSTR pCategory;
    LPCWSTR pBefore;
    LPCWSTR pAfter;
} SPVCONTEXT;

typedef struct SPVSTATE {
    SPVACTIONS eAction;
    WORD LangID;
    WORD wReserved;
    long EmphAdj;
    long RateAdj;
    ULONG Volume;
    SPVPITCH PitchAdj;
    ULONG SilenceMSecs;
    SPPHONEID *pPhoneIds;
    SPPARTOFSPEECH ePartOfSpeech;
    SPVCONTEXT Context;
} SPVSTATE;

typedef enum SPRUNSTATE {
    SPRS_DONE = 1 << 0,
    SPRS_IS_SPEAKING = 1 << 1
} SPRUNSTATE;

typedef enum SPVLIMITS {
    SPMIN_VOLUME = 0,
    SPMAX_VOLUME = 100,
    SPMIN_RATE = -10,
    SPMAX_RATE = 10
} SPVLIMITS;

typedef enum SPVPRIORITY {
    SPVPRI_NORMAL = 0,
    SPVPRI_ALERT = 1 << 0,
    SPVPRI_OVER = 1 << 1
} SPVPRIORITY;

typedef struct SPVOICESTATUS {
    ULONG ulCurrentStream;
    ULONG ulLastStreamQueued;
    HRESULT hrLastResult;
    DWORD dwRunningState;
    ULONG ulInputWordPos;
    ULONG ulInputWordLen;
    ULONG ulInputSentPos;
    ULONG ulInputSentLen;
    LONG lBookmarkId;
    SPPHONEID PhonemeId;
    SPVISEMES VisemeId;
    DWORD dwReserved1;
    DWORD dwReserved2;
} SPVOICESTATUS;

typedef enum SPEAKFLAGS {
    SPF_DEFAULT = 0,
    SPF_ASYNC = 1 << 0,
    SPF_PURGEBEFORESPEAK = 1 << 1,
    SPF_IS_FILENAME = 1 << 2,
    SPF_IS_XML = 1 << 3,
    SPF_IS_NOT_XML = 1 << 4,
    SPF_PERSIST_XML = 1 << 5,
    SPF_NLP_SPEAK_PUNC = 1 << 6,
    SPF_PARSE_SAPI = 1 << 7,
    SPF_PARSE_SSML = 1 << 8,
    SPF_PARSE_AUTODETECT = 0,
    SPF_NLP_MASK = SPF_NLP_SPEAK_PUNC,
    SPF_PARSE_MASK = SPF_PARSE_SAPI | SPF_PARSE_SSML,
    SPF_VOICE_MASK = ((((((SPF_ASYNC | SPF_PURGEBEFORESPEAK) | SPF_IS_FILENAME) | SPF_IS_XML) | SPF_IS_NOT_XML) | SPF_NLP_MASK) | SPF_PERSIST_XML) | SPF_PARSE_MASK,
    SPF_UNUSED_FLAGS = ~SPF_VOICE_MASK
} SPEAKFLAGS;

/*****************************************************************************
 * ISpVoice interface
 */
#ifndef __ISpVoice_INTERFACE_DEFINED__
#define __ISpVoice_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpVoice;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpVoiceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpVoice *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpVoice *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpVoice *This);

    /*** ISpNotifySource methods ***/
    HRESULT (STDMETHODCALLTYPE *SetNotifySink)(
        ISpVoice *This,
        ISpNotifySink *pNotifySink);

    HRESULT (STDMETHODCALLTYPE *SetNotifyWindowMessage)(
        ISpVoice *This,
        HWND hWnd,
        UINT Msg,
        WPARAM wParam,
        LPARAM lParam);

    HRESULT (STDMETHODCALLTYPE *SetNotifyCallbackFunction)(
        ISpVoice *This,
        SPNOTIFYCALLBACK *pfnCallback,
        WPARAM wParam,
        LPARAM lParam);

    HRESULT (STDMETHODCALLTYPE *SetNotifyCallbackInterface)(
        ISpVoice *This,
        ISpNotifyCallback *pSpCallback,
        WPARAM wParam,
        LPARAM lParam);

    HRESULT (STDMETHODCALLTYPE *SetNotifyWin32Event)(
        ISpVoice *This);

    HRESULT (STDMETHODCALLTYPE *WaitForNotifyEvent)(
        ISpVoice *This,
        DWORD dwMilliseconds);

    HANDLE (STDMETHODCALLTYPE *GetNotifyEventHandle)(
        ISpVoice *This);

    /*** ISpEventSource methods ***/
    HRESULT (STDMETHODCALLTYPE *SetInterest)(
        ISpVoice *This,
        ULONGLONG ullEventInterest,
        ULONGLONG ullQueuedInterest);

    HRESULT (STDMETHODCALLTYPE *GetEvents)(
        ISpVoice *This,
        ULONG ulCount,
        SPEVENT *pEventArray,
        ULONG *pulFetched);

    HRESULT (STDMETHODCALLTYPE *GetInfo)(
        ISpVoice *This,
        SPEVENTSOURCEINFO *pInfo);

    /*** ISpVoice methods ***/
    HRESULT (STDMETHODCALLTYPE *SetOutput)(
        ISpVoice *This,
        IUnknown *pUnkOutput,
        BOOL fAllowFormatChanges);

    HRESULT (STDMETHODCALLTYPE *GetOutputObjectToken)(
        ISpVoice *This,
        ISpObjectToken **ppObjectToken);

    HRESULT (STDMETHODCALLTYPE *GetOutputStream)(
        ISpVoice *This,
        ISpStreamFormat **ppStream);

    HRESULT (STDMETHODCALLTYPE *Pause)(
        ISpVoice *This);

    HRESULT (STDMETHODCALLTYPE *Resume)(
        ISpVoice *This);

    HRESULT (STDMETHODCALLTYPE *SetVoice)(
        ISpVoice *This,
        ISpObjectToken *pToken);

    HRESULT (STDMETHODCALLTYPE *GetVoice)(
        ISpVoice *This,
        ISpObjectToken **ppToken);

    HRESULT (STDMETHODCALLTYPE *Speak)(
        ISpVoice *This,
        LPCWSTR pwcs,
        DWORD dwFlags,
        ULONG *pulStreamNumber);

    HRESULT (STDMETHODCALLTYPE *SpeakStream)(
        ISpVoice *This,
        IStream *pStream,
        DWORD dwFlags,
        ULONG *pulStreamNumber);

    HRESULT (STDMETHODCALLTYPE *GetStatus)(
        ISpVoice *This,
        SPVOICESTATUS *pStatus,
        LPWSTR *ppszLastBookmark);

    HRESULT (STDMETHODCALLTYPE *Skip)(
        ISpVoice *This,
        LPCWSTR pItemType,
        long lNumItems,
        ULONG *pulNumSkipped);

    HRESULT (STDMETHODCALLTYPE *SetPriority)(
        ISpVoice *This,
        SPVPRIORITY ePriority);

    HRESULT (STDMETHODCALLTYPE *GetPriority)(
        ISpVoice *This,
        SPVPRIORITY *pePriority);

    HRESULT (STDMETHODCALLTYPE *SetAlertBoundary)(
        ISpVoice *This,
        SPEVENTENUM eBoundary);

    HRESULT (STDMETHODCALLTYPE *GetAlertBoundary)(
        ISpVoice *This,
        SPEVENTENUM *peBoundary);

    HRESULT (STDMETHODCALLTYPE *SetRate)(
        ISpVoice *This,
        long RateAdjust);

    HRESULT (STDMETHODCALLTYPE *GetRate)(
        ISpVoice *This,
        long *pRateAdjust);

    HRESULT (STDMETHODCALLTYPE *SetVolume)(
        ISpVoice *This,
        USHORT usVolume);

    HRESULT (STDMETHODCALLTYPE *GetVolume)(
        ISpVoice *This,
        USHORT *pusVolume);

    HRESULT (STDMETHODCALLTYPE *WaitUntilDone)(
        ISpVoice *This,
        ULONG msTimeout);

    HRESULT (STDMETHODCALLTYPE *SetSyncSpeakTimeout)(
        ISpVoice *This,
        ULONG msTimeout);

    HRESULT (STDMETHODCALLTYPE *GetSyncSpeakTimeout)(
        ISpVoice *This,
        ULONG *pmsTimeout);

    HANDLE (STDMETHODCALLTYPE *SpeakCompleteEvent)(
        ISpVoice *This);

    HRESULT (STDMETHODCALLTYPE *IsUISupported)(
        ISpVoice *This,
        LPCWSTR pszTypeOfUI,
        void *pvExtraData,
        ULONG cbExtraData,
        BOOL *pfSupported);

    HRESULT (STDMETHODCALLTYPE *DisplayUI)(
        ISpVoice *This,
        HWND hwndParent,
        LPCWSTR pszTitle,
        LPCWSTR pszTypeOfUI,
        void *pvExtraData,
        ULONG cbExtraData);

    END_INTERFACE
} ISpVoiceVtbl;

interface ISpVoice {
    CONST_VTBL ISpVoiceVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpVoice_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpVoice_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpVoice_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISpNotifySource methods ***/
#define ISpVoice_SetNotifySink(This,pNotifySink) \
    ((This)->lpVtbl->SetNotifySink(This,pNotifySink))
#define ISpVoice_SetNotifyWindowMessage(This,hWnd,Msg,wParam,lParam) \
    ((This)->lpVtbl->SetNotifyWindowMessage(This,hWnd,Msg,wParam,lParam))
#define ISpVoice_SetNotifyCallbackFunction(This,pfnCallback,wParam,lParam) \
    ((This)->lpVtbl->SetNotifyCallbackFunction(This,pfnCallback,wParam,lParam))
#define ISpVoice_SetNotifyCallbackInterface(This,pSpCallback,wParam,lParam) \
    ((This)->lpVtbl->SetNotifyCallbackInterface(This,pSpCallback,wParam,lParam))
#define ISpVoice_SetNotifyWin32Event(This) \
    ((This)->lpVtbl->SetNotifyWin32Event(This))
#define ISpVoice_WaitForNotifyEvent(This,dwMilliseconds) \
    ((This)->lpVtbl->WaitForNotifyEvent(This,dwMilliseconds))
#define ISpVoice_GetNotifyEventHandle(This) \
    ((This)->lpVtbl->GetNotifyEventHandle(This))
/*** ISpEventSource methods ***/
#define ISpVoice_SetInterest(This,ullEventInterest,ullQueuedInterest) \
    ((This)->lpVtbl->SetInterest(This,ullEventInterest,ullQueuedInterest))
#define ISpVoice_GetEvents(This,ulCount,pEventArray,pulFetched) \
    ((This)->lpVtbl->GetEvents(This,ulCount,pEventArray,pulFetched))
#define ISpVoice_GetInfo(This,pInfo) \
    ((This)->lpVtbl->GetInfo(This,pInfo))
/*** ISpVoice methods ***/
#define ISpVoice_SetOutput(This,pUnkOutput,fAllowFormatChanges) \
    ((This)->lpVtbl->SetOutput(This,pUnkOutput,fAllowFormatChanges))
#define ISpVoice_GetOutputObjectToken(This,ppObjectToken) \
    ((This)->lpVtbl->GetOutputObjectToken(This,ppObjectToken))
#define ISpVoice_GetOutputStream(This,ppStream) \
    ((This)->lpVtbl->GetOutputStream(This,ppStream))
#define ISpVoice_Pause(This) \
    ((This)->lpVtbl->Pause(This))
#define ISpVoice_Resume(This) \
    ((This)->lpVtbl->Resume(This))
#define ISpVoice_SetVoice(This,pToken) \
    ((This)->lpVtbl->SetVoice(This,pToken))
#define ISpVoice_GetVoice(This,ppToken) \
    ((This)->lpVtbl->GetVoice(This,ppToken))
#define ISpVoice_Speak(This,pwcs,dwFlags,pulStreamNumber) \
    ((This)->lpVtbl->Speak(This,pwcs,dwFlags,pulStreamNumber))
#define ISpVoice_SpeakStream(This,pStream,dwFlags,pulStreamNumber) \
    ((This)->lpVtbl->SpeakStream(This,pStream,dwFlags,pulStreamNumber))
#define ISpVoice_GetStatus(This,pStatus,ppszLastBookmark) \
    ((This)->lpVtbl->GetStatus(This,pStatus,ppszLastBookmark))
#define ISpVoice_Skip(This,pItemType,lNumItems,pulNumSkipped) \
    ((This)->lpVtbl->Skip(This,pItemType,lNumItems,pulNumSkipped))
#define ISpVoice_SetPriority(This,ePriority) \
    ((This)->lpVtbl->SetPriority(This,ePriority))
#define ISpVoice_GetPriority(This,pePriority) \
    ((This)->lpVtbl->GetPriority(This,pePriority))
#define ISpVoice_SetAlertBoundary(This,eBoundary) \
    ((This)->lpVtbl->SetAlertBoundary(This,eBoundary))
#define ISpVoice_GetAlertBoundary(This,peBoundary) \
    ((This)->lpVtbl->GetAlertBoundary(This,peBoundary))
#define ISpVoice_SetRate(This,RateAdjust) \
    ((This)->lpVtbl->SetRate(This,RateAdjust))
#define ISpVoice_GetRate(This,pRateAdjust) \
    ((This)->lpVtbl->GetRate(This,pRateAdjust))
#define ISpVoice_SetVolume(This,usVolume) \
    ((This)->lpVtbl->SetVolume(This,usVolume))
#define ISpVoice_GetVolume(This,pusVolume) \
    ((This)->lpVtbl->GetVolume(This,pusVolume))
#define ISpVoice_WaitUntilDone(This,msTimeout) \
    ((This)->lpVtbl->WaitUntilDone(This,msTimeout))
#define ISpVoice_SetSyncSpeakTimeout(This,msTimeout) \
    ((This)->lpVtbl->SetSyncSpeakTimeout(This,msTimeout))
#define ISpVoice_GetSyncSpeakTimeout(This,pmsTimeout) \
    ((This)->lpVtbl->GetSyncSpeakTimeout(This,pmsTimeout))
#define ISpVoice_SpeakCompleteEvent(This) \
    ((This)->lpVtbl->SpeakCompleteEvent(This))
#define ISpVoice_IsUISupported(This,pszTypeOfUI,pvExtraData,cbExtraData,pfSupported) \
    ((This)->lpVtbl->IsUISupported(This,pszTypeOfUI,pvExtraData,cbExtraData,pfSupported))
#define ISpVoice_DisplayUI(This,hwndParent,pszTitle,pszTypeOfUI,pvExtraData,cbExtraData) \
    ((This)->lpVtbl->DisplayUI(This,hwndParent,pszTitle,pszTypeOfUI,pvExtraData,cbExtraData))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpVoice_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ISpPhrase interface
 */
#ifndef __ISpPhrase_INTERFACE_DEFINED__
#define __ISpPhrase_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpPhrase;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpPhraseVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpPhrase *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpPhrase *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpPhrase *This);

    /*** ISpPhrase methods ***/
    HRESULT (STDMETHODCALLTYPE *GetPhrase)(
        ISpPhrase *This,
        SPPHRASE **ppCoMemPhrase);

    HRESULT (STDMETHODCALLTYPE *GetSerializedPhrase)(
        ISpPhrase *This,
        SPSERIALIZEDPHRASE **ppCoMemPhrase);

    HRESULT (STDMETHODCALLTYPE *GetText)(
        ISpPhrase *This,
        ULONG ulStart,
        ULONG ulCount,
        BOOL fUseTextReplacements,
        LPWSTR *ppszCoMemText,
        BYTE *pbDisplayAttributes);

    HRESULT (STDMETHODCALLTYPE *Discard)(
        ISpPhrase *This,
        DWORD dwValueTypes);

    END_INTERFACE
} ISpPhraseVtbl;

interface ISpPhrase {
    CONST_VTBL ISpPhraseVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpPhrase_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpPhrase_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpPhrase_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISpPhrase methods ***/
#define ISpPhrase_GetPhrase(This,ppCoMemPhrase) \
    ((This)->lpVtbl->GetPhrase(This,ppCoMemPhrase))
#define ISpPhrase_GetSerializedPhrase(This,ppCoMemPhrase) \
    ((This)->lpVtbl->GetSerializedPhrase(This,ppCoMemPhrase))
#define ISpPhrase_GetText(This,ulStart,ulCount,fUseTextReplacements,ppszCoMemText,pbDisplayAttributes) \
    ((This)->lpVtbl->GetText(This,ulStart,ulCount,fUseTextReplacements,ppszCoMemText,pbDisplayAttributes))
#define ISpPhrase_Discard(This,dwValueTypes) \
    ((This)->lpVtbl->Discard(This,dwValueTypes))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpPhrase_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ISpPhraseAlt interface
 */
#ifndef __ISpPhraseAlt_INTERFACE_DEFINED__
#define __ISpPhraseAlt_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpPhraseAlt;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpPhraseAltVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpPhraseAlt *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpPhraseAlt *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpPhraseAlt *This);

    /*** ISpPhrase methods ***/
    HRESULT (STDMETHODCALLTYPE *GetPhrase)(
        ISpPhraseAlt *This,
        SPPHRASE **ppCoMemPhrase);

    HRESULT (STDMETHODCALLTYPE *GetSerializedPhrase)(
        ISpPhraseAlt *This,
        SPSERIALIZEDPHRASE **ppCoMemPhrase);

    HRESULT (STDMETHODCALLTYPE *GetText)(
        ISpPhraseAlt *This,
        ULONG ulStart,
        ULONG ulCount,
        BOOL fUseTextReplacements,
        LPWSTR *ppszCoMemText,
        BYTE *pbDisplayAttributes);

    HRESULT (STDMETHODCALLTYPE *Discard)(
        ISpPhraseAlt *This,
        DWORD dwValueTypes);

    /*** ISpPhraseAlt methods ***/
    HRESULT (STDMETHODCALLTYPE *GetAltInfo)(
        ISpPhraseAlt *This,
        ISpPhrase **ppParent,
        ULONG *pulStartElementInParent,
        ULONG *pcElementsInParent,
        ULONG *pcElementsInAlt);

    HRESULT (STDMETHODCALLTYPE *Commit)(
        ISpPhraseAlt *This);

    END_INTERFACE
} ISpPhraseAltVtbl;

interface ISpPhraseAlt {
    CONST_VTBL ISpPhraseAltVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpPhraseAlt_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpPhraseAlt_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpPhraseAlt_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISpPhrase methods ***/
#define ISpPhraseAlt_GetPhrase(This,ppCoMemPhrase) \
    ((This)->lpVtbl->GetPhrase(This,ppCoMemPhrase))
#define ISpPhraseAlt_GetSerializedPhrase(This,ppCoMemPhrase) \
    ((This)->lpVtbl->GetSerializedPhrase(This,ppCoMemPhrase))
#define ISpPhraseAlt_GetText(This,ulStart,ulCount,fUseTextReplacements,ppszCoMemText,pbDisplayAttributes) \
    ((This)->lpVtbl->GetText(This,ulStart,ulCount,fUseTextReplacements,ppszCoMemText,pbDisplayAttributes))
#define ISpPhraseAlt_Discard(This,dwValueTypes) \
    ((This)->lpVtbl->Discard(This,dwValueTypes))
/*** ISpPhraseAlt methods ***/
#define ISpPhraseAlt_GetAltInfo(This,ppParent,pulStartElementInParent,pcElementsInParent,pcElementsInAlt) \
    ((This)->lpVtbl->GetAltInfo(This,ppParent,pulStartElementInParent,pcElementsInParent,pcElementsInAlt))
#define ISpPhraseAlt_Commit(This) \
    ((This)->lpVtbl->Commit(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpPhraseAlt_INTERFACE_DEFINED__ */

typedef enum SPXMLRESULTOPTIONS {
    SPXRO_SML = 0,
    SPXRO_Alternates_SML = 1
} SPXMLRESULTOPTIONS;

/*****************************************************************************
 * ISpPhrase2 interface
 */
#ifndef __ISpPhrase2_INTERFACE_DEFINED__
#define __ISpPhrase2_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpPhrase2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpPhrase2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpPhrase2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpPhrase2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpPhrase2 *This);

    /*** ISpPhrase methods ***/
    HRESULT (STDMETHODCALLTYPE *GetPhrase)(
        ISpPhrase2 *This,
        SPPHRASE **ppCoMemPhrase);

    HRESULT (STDMETHODCALLTYPE *GetSerializedPhrase)(
        ISpPhrase2 *This,
        SPSERIALIZEDPHRASE **ppCoMemPhrase);

    HRESULT (STDMETHODCALLTYPE *GetText)(
        ISpPhrase2 *This,
        ULONG ulStart,
        ULONG ulCount,
        BOOL fUseTextReplacements,
        LPWSTR *ppszCoMemText,
        BYTE *pbDisplayAttributes);

    HRESULT (STDMETHODCALLTYPE *Discard)(
        ISpPhrase2 *This,
        DWORD dwValueTypes);

    /*** ISpPhrase2 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetXMLResult)(
        ISpPhrase2 *This,
        LPWSTR *ppszCoMemXMLResult,
        SPXMLRESULTOPTIONS Options);

    HRESULT (STDMETHODCALLTYPE *GetXMLErrorInfo)(
        ISpPhrase2 *This,
        SPSEMANTICERRORINFO *pSemanticErrorInfo);

    HRESULT (STDMETHODCALLTYPE *GetAudio)(
        ISpPhrase2 *This,
        ULONG ulStartElement,
        ULONG cElements,
        ISpStreamFormat **ppStream);

    END_INTERFACE
} ISpPhrase2Vtbl;

interface ISpPhrase2 {
    CONST_VTBL ISpPhrase2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpPhrase2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpPhrase2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpPhrase2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISpPhrase methods ***/
#define ISpPhrase2_GetPhrase(This,ppCoMemPhrase) \
    ((This)->lpVtbl->GetPhrase(This,ppCoMemPhrase))
#define ISpPhrase2_GetSerializedPhrase(This,ppCoMemPhrase) \
    ((This)->lpVtbl->GetSerializedPhrase(This,ppCoMemPhrase))
#define ISpPhrase2_GetText(This,ulStart,ulCount,fUseTextReplacements,ppszCoMemText,pbDisplayAttributes) \
    ((This)->lpVtbl->GetText(This,ulStart,ulCount,fUseTextReplacements,ppszCoMemText,pbDisplayAttributes))
#define ISpPhrase2_Discard(This,dwValueTypes) \
    ((This)->lpVtbl->Discard(This,dwValueTypes))
/*** ISpPhrase2 methods ***/
#define ISpPhrase2_GetXMLResult(This,ppszCoMemXMLResult,Options) \
    ((This)->lpVtbl->GetXMLResult(This,ppszCoMemXMLResult,Options))
#define ISpPhrase2_GetXMLErrorInfo(This,pSemanticErrorInfo) \
    ((This)->lpVtbl->GetXMLErrorInfo(This,pSemanticErrorInfo))
#define ISpPhrase2_GetAudio(This,ulStartElement,cElements,ppStream) \
    ((This)->lpVtbl->GetAudio(This,ulStartElement,cElements,ppStream))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpPhrase2_INTERFACE_DEFINED__ */

typedef struct SPRECORESULTTIMES {
    FILETIME ftStreamTime;
    ULONGLONG ullLength;
    DWORD dwTickCount;
    ULONGLONG ullStart;
} SPRECORESULTTIMES;

typedef struct SPSERIALIZEDRESULT {
    ULONG ulSerializedSize;
} SPSERIALIZEDRESULT;

/*****************************************************************************
 * ISpRecoResult interface
 */
#ifndef __ISpRecoResult_INTERFACE_DEFINED__
#define __ISpRecoResult_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpRecoResult;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpRecoResultVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpRecoResult *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpRecoResult *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpRecoResult *This);

    /*** ISpPhrase methods ***/
    HRESULT (STDMETHODCALLTYPE *GetPhrase)(
        ISpRecoResult *This,
        SPPHRASE **ppCoMemPhrase);

    HRESULT (STDMETHODCALLTYPE *GetSerializedPhrase)(
        ISpRecoResult *This,
        SPSERIALIZEDPHRASE **ppCoMemPhrase);

    HRESULT (STDMETHODCALLTYPE *GetText)(
        ISpRecoResult *This,
        ULONG ulStart,
        ULONG ulCount,
        BOOL fUseTextReplacements,
        LPWSTR *ppszCoMemText,
        BYTE *pbDisplayAttributes);

    HRESULT (STDMETHODCALLTYPE *Discard)(
        ISpRecoResult *This,
        DWORD dwValueTypes);

    /*** ISpRecoResult methods ***/
    HRESULT (STDMETHODCALLTYPE *GetResultTimes)(
        ISpRecoResult *This,
        SPRECORESULTTIMES *pTimes);

    HRESULT (STDMETHODCALLTYPE *GetAlternates)(
        ISpRecoResult *This,
        ULONG ulStartElement,
        ULONG cElements,
        ULONG ulRequestCount,
        ISpPhraseAlt **ppPhrases,
        ULONG *pcPhrasesReturned);

    HRESULT (STDMETHODCALLTYPE *GetAudio)(
        ISpRecoResult *This,
        ULONG ulStartElement,
        ULONG cElements,
        ISpStreamFormat **ppStream);

    HRESULT (STDMETHODCALLTYPE *SpeakAudio)(
        ISpRecoResult *This,
        ULONG ulStartElement,
        ULONG cElements,
        DWORD dwFlags,
        ULONG *pulStreamNumber);

    HRESULT (STDMETHODCALLTYPE *Serialize)(
        ISpRecoResult *This,
        SPSERIALIZEDRESULT **ppCoMemSerializedResult);

    HRESULT (STDMETHODCALLTYPE *ScaleAudio)(
        ISpRecoResult *This,
        const GUID *pAudioFormatId,
        const WAVEFORMATEX *pWaveFormatEx);

    HRESULT (STDMETHODCALLTYPE *GetRecoContext)(
        ISpRecoResult *This,
        ISpRecoContext **ppRecoContext);

    END_INTERFACE
} ISpRecoResultVtbl;

interface ISpRecoResult {
    CONST_VTBL ISpRecoResultVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpRecoResult_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpRecoResult_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpRecoResult_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISpPhrase methods ***/
#define ISpRecoResult_GetPhrase(This,ppCoMemPhrase) \
    ((This)->lpVtbl->GetPhrase(This,ppCoMemPhrase))
#define ISpRecoResult_GetSerializedPhrase(This,ppCoMemPhrase) \
    ((This)->lpVtbl->GetSerializedPhrase(This,ppCoMemPhrase))
#define ISpRecoResult_GetText(This,ulStart,ulCount,fUseTextReplacements,ppszCoMemText,pbDisplayAttributes) \
    ((This)->lpVtbl->GetText(This,ulStart,ulCount,fUseTextReplacements,ppszCoMemText,pbDisplayAttributes))
#define ISpRecoResult_Discard(This,dwValueTypes) \
    ((This)->lpVtbl->Discard(This,dwValueTypes))
/*** ISpRecoResult methods ***/
#define ISpRecoResult_GetResultTimes(This,pTimes) \
    ((This)->lpVtbl->GetResultTimes(This,pTimes))
#define ISpRecoResult_GetAlternates(This,ulStartElement,cElements,ulRequestCount,ppPhrases,pcPhrasesReturned) \
    ((This)->lpVtbl->GetAlternates(This,ulStartElement,cElements,ulRequestCount,ppPhrases,pcPhrasesReturned))
#define ISpRecoResult_GetAudio(This,ulStartElement,cElements,ppStream) \
    ((This)->lpVtbl->GetAudio(This,ulStartElement,cElements,ppStream))
#define ISpRecoResult_SpeakAudio(This,ulStartElement,cElements,dwFlags,pulStreamNumber) \
    ((This)->lpVtbl->SpeakAudio(This,ulStartElement,cElements,dwFlags,pulStreamNumber))
#define ISpRecoResult_Serialize(This,ppCoMemSerializedResult) \
    ((This)->lpVtbl->Serialize(This,ppCoMemSerializedResult))
#define ISpRecoResult_ScaleAudio(This,pAudioFormatId,pWaveFormatEx) \
    ((This)->lpVtbl->ScaleAudio(This,pAudioFormatId,pWaveFormatEx))
#define ISpRecoResult_GetRecoContext(This,ppRecoContext) \
    ((This)->lpVtbl->GetRecoContext(This,ppRecoContext))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpRecoResult_INTERFACE_DEFINED__ */

typedef enum SPCOMMITFLAGS {
    SPCF_NONE = 0,
    SPCF_ADD_TO_USER_LEXICON = 1 << 0,
    SPCF_DEFINITE_CORRECTION = 1 << 1
} SPCOMMITFLAGS;

/*****************************************************************************
 * ISpRecoResult2 interface
 */
#ifndef __ISpRecoResult2_INTERFACE_DEFINED__
#define __ISpRecoResult2_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpRecoResult2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpRecoResult2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpRecoResult2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpRecoResult2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpRecoResult2 *This);

    /*** ISpPhrase methods ***/
    HRESULT (STDMETHODCALLTYPE *GetPhrase)(
        ISpRecoResult2 *This,
        SPPHRASE **ppCoMemPhrase);

    HRESULT (STDMETHODCALLTYPE *GetSerializedPhrase)(
        ISpRecoResult2 *This,
        SPSERIALIZEDPHRASE **ppCoMemPhrase);

    HRESULT (STDMETHODCALLTYPE *GetText)(
        ISpRecoResult2 *This,
        ULONG ulStart,
        ULONG ulCount,
        BOOL fUseTextReplacements,
        LPWSTR *ppszCoMemText,
        BYTE *pbDisplayAttributes);

    HRESULT (STDMETHODCALLTYPE *Discard)(
        ISpRecoResult2 *This,
        DWORD dwValueTypes);

    /*** ISpRecoResult methods ***/
    HRESULT (STDMETHODCALLTYPE *GetResultTimes)(
        ISpRecoResult2 *This,
        SPRECORESULTTIMES *pTimes);

    HRESULT (STDMETHODCALLTYPE *GetAlternates)(
        ISpRecoResult2 *This,
        ULONG ulStartElement,
        ULONG cElements,
        ULONG ulRequestCount,
        ISpPhraseAlt **ppPhrases,
        ULONG *pcPhrasesReturned);

    HRESULT (STDMETHODCALLTYPE *GetAudio)(
        ISpRecoResult2 *This,
        ULONG ulStartElement,
        ULONG cElements,
        ISpStreamFormat **ppStream);

    HRESULT (STDMETHODCALLTYPE *SpeakAudio)(
        ISpRecoResult2 *This,
        ULONG ulStartElement,
        ULONG cElements,
        DWORD dwFlags,
        ULONG *pulStreamNumber);

    HRESULT (STDMETHODCALLTYPE *Serialize)(
        ISpRecoResult2 *This,
        SPSERIALIZEDRESULT **ppCoMemSerializedResult);

    HRESULT (STDMETHODCALLTYPE *ScaleAudio)(
        ISpRecoResult2 *This,
        const GUID *pAudioFormatId,
        const WAVEFORMATEX *pWaveFormatEx);

    HRESULT (STDMETHODCALLTYPE *GetRecoContext)(
        ISpRecoResult2 *This,
        ISpRecoContext **ppRecoContext);

    /*** ISpRecoResult2 methods ***/
    HRESULT (STDMETHODCALLTYPE *CommitAlternate)(
        ISpRecoResult2 *This,
        ISpPhraseAlt *pPhraseAlt,
        ISpRecoResult **ppNewResult);

    HRESULT (STDMETHODCALLTYPE *CommitText)(
        ISpRecoResult2 *This,
        ULONG ulStartElement,
        ULONG cElements,
        LPCWSTR pszCorrectedData,
        DWORD eCommitFlags);

    HRESULT (STDMETHODCALLTYPE *SetTextFeedback)(
        ISpRecoResult2 *This,
        LPCWSTR pszFeedback,
        BOOL fSuccessful);

    END_INTERFACE
} ISpRecoResult2Vtbl;

interface ISpRecoResult2 {
    CONST_VTBL ISpRecoResult2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpRecoResult2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpRecoResult2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpRecoResult2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISpPhrase methods ***/
#define ISpRecoResult2_GetPhrase(This,ppCoMemPhrase) \
    ((This)->lpVtbl->GetPhrase(This,ppCoMemPhrase))
#define ISpRecoResult2_GetSerializedPhrase(This,ppCoMemPhrase) \
    ((This)->lpVtbl->GetSerializedPhrase(This,ppCoMemPhrase))
#define ISpRecoResult2_GetText(This,ulStart,ulCount,fUseTextReplacements,ppszCoMemText,pbDisplayAttributes) \
    ((This)->lpVtbl->GetText(This,ulStart,ulCount,fUseTextReplacements,ppszCoMemText,pbDisplayAttributes))
#define ISpRecoResult2_Discard(This,dwValueTypes) \
    ((This)->lpVtbl->Discard(This,dwValueTypes))
/*** ISpRecoResult methods ***/
#define ISpRecoResult2_GetResultTimes(This,pTimes) \
    ((This)->lpVtbl->GetResultTimes(This,pTimes))
#define ISpRecoResult2_GetAlternates(This,ulStartElement,cElements,ulRequestCount,ppPhrases,pcPhrasesReturned) \
    ((This)->lpVtbl->GetAlternates(This,ulStartElement,cElements,ulRequestCount,ppPhrases,pcPhrasesReturned))
#define ISpRecoResult2_GetAudio(This,ulStartElement,cElements,ppStream) \
    ((This)->lpVtbl->GetAudio(This,ulStartElement,cElements,ppStream))
#define ISpRecoResult2_SpeakAudio(This,ulStartElement,cElements,dwFlags,pulStreamNumber) \
    ((This)->lpVtbl->SpeakAudio(This,ulStartElement,cElements,dwFlags,pulStreamNumber))
#define ISpRecoResult2_Serialize(This,ppCoMemSerializedResult) \
    ((This)->lpVtbl->Serialize(This,ppCoMemSerializedResult))
#define ISpRecoResult2_ScaleAudio(This,pAudioFormatId,pWaveFormatEx) \
    ((This)->lpVtbl->ScaleAudio(This,pAudioFormatId,pWaveFormatEx))
#define ISpRecoResult2_GetRecoContext(This,ppRecoContext) \
    ((This)->lpVtbl->GetRecoContext(This,ppRecoContext))
/*** ISpRecoResult2 methods ***/
#define ISpRecoResult2_CommitAlternate(This,pPhraseAlt,ppNewResult) \
    ((This)->lpVtbl->CommitAlternate(This,pPhraseAlt,ppNewResult))
#define ISpRecoResult2_CommitText(This,ulStartElement,cElements,pszCorrectedData,eCommitFlags) \
    ((This)->lpVtbl->CommitText(This,ulStartElement,cElements,pszCorrectedData,eCommitFlags))
#define ISpRecoResult2_SetTextFeedback(This,pszFeedback,fSuccessful) \
    ((This)->lpVtbl->SetTextFeedback(This,pszFeedback,fSuccessful))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpRecoResult2_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ISpXMLRecoResult interface
 */
#ifndef __ISpXMLRecoResult_INTERFACE_DEFINED__
#define __ISpXMLRecoResult_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpXMLRecoResult;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpXMLRecoResultVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpXMLRecoResult *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpXMLRecoResult *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpXMLRecoResult *This);

    /*** ISpPhrase methods ***/
    HRESULT (STDMETHODCALLTYPE *GetPhrase)(
        ISpXMLRecoResult *This,
        SPPHRASE **ppCoMemPhrase);

    HRESULT (STDMETHODCALLTYPE *GetSerializedPhrase)(
        ISpXMLRecoResult *This,
        SPSERIALIZEDPHRASE **ppCoMemPhrase);

    HRESULT (STDMETHODCALLTYPE *GetText)(
        ISpXMLRecoResult *This,
        ULONG ulStart,
        ULONG ulCount,
        BOOL fUseTextReplacements,
        LPWSTR *ppszCoMemText,
        BYTE *pbDisplayAttributes);

    HRESULT (STDMETHODCALLTYPE *Discard)(
        ISpXMLRecoResult *This,
        DWORD dwValueTypes);

    /*** ISpRecoResult methods ***/
    HRESULT (STDMETHODCALLTYPE *GetResultTimes)(
        ISpXMLRecoResult *This,
        SPRECORESULTTIMES *pTimes);

    HRESULT (STDMETHODCALLTYPE *GetAlternates)(
        ISpXMLRecoResult *This,
        ULONG ulStartElement,
        ULONG cElements,
        ULONG ulRequestCount,
        ISpPhraseAlt **ppPhrases,
        ULONG *pcPhrasesReturned);

    HRESULT (STDMETHODCALLTYPE *GetAudio)(
        ISpXMLRecoResult *This,
        ULONG ulStartElement,
        ULONG cElements,
        ISpStreamFormat **ppStream);

    HRESULT (STDMETHODCALLTYPE *SpeakAudio)(
        ISpXMLRecoResult *This,
        ULONG ulStartElement,
        ULONG cElements,
        DWORD dwFlags,
        ULONG *pulStreamNumber);

    HRESULT (STDMETHODCALLTYPE *Serialize)(
        ISpXMLRecoResult *This,
        SPSERIALIZEDRESULT **ppCoMemSerializedResult);

    HRESULT (STDMETHODCALLTYPE *ScaleAudio)(
        ISpXMLRecoResult *This,
        const GUID *pAudioFormatId,
        const WAVEFORMATEX *pWaveFormatEx);

    HRESULT (STDMETHODCALLTYPE *GetRecoContext)(
        ISpXMLRecoResult *This,
        ISpRecoContext **ppRecoContext);

    /*** ISpXMLRecoResult methods ***/
    HRESULT (STDMETHODCALLTYPE *GetXMLResult)(
        ISpXMLRecoResult *This,
        LPWSTR *ppszCoMemXMLResult,
        SPXMLRESULTOPTIONS Options);

    HRESULT (STDMETHODCALLTYPE *GetXMLErrorInfo)(
        ISpXMLRecoResult *This,
        SPSEMANTICERRORINFO *pSemanticErrorInfo);

    END_INTERFACE
} ISpXMLRecoResultVtbl;

interface ISpXMLRecoResult {
    CONST_VTBL ISpXMLRecoResultVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpXMLRecoResult_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpXMLRecoResult_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpXMLRecoResult_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISpPhrase methods ***/
#define ISpXMLRecoResult_GetPhrase(This,ppCoMemPhrase) \
    ((This)->lpVtbl->GetPhrase(This,ppCoMemPhrase))
#define ISpXMLRecoResult_GetSerializedPhrase(This,ppCoMemPhrase) \
    ((This)->lpVtbl->GetSerializedPhrase(This,ppCoMemPhrase))
#define ISpXMLRecoResult_GetText(This,ulStart,ulCount,fUseTextReplacements,ppszCoMemText,pbDisplayAttributes) \
    ((This)->lpVtbl->GetText(This,ulStart,ulCount,fUseTextReplacements,ppszCoMemText,pbDisplayAttributes))
#define ISpXMLRecoResult_Discard(This,dwValueTypes) \
    ((This)->lpVtbl->Discard(This,dwValueTypes))
/*** ISpRecoResult methods ***/
#define ISpXMLRecoResult_GetResultTimes(This,pTimes) \
    ((This)->lpVtbl->GetResultTimes(This,pTimes))
#define ISpXMLRecoResult_GetAlternates(This,ulStartElement,cElements,ulRequestCount,ppPhrases,pcPhrasesReturned) \
    ((This)->lpVtbl->GetAlternates(This,ulStartElement,cElements,ulRequestCount,ppPhrases,pcPhrasesReturned))
#define ISpXMLRecoResult_GetAudio(This,ulStartElement,cElements,ppStream) \
    ((This)->lpVtbl->GetAudio(This,ulStartElement,cElements,ppStream))
#define ISpXMLRecoResult_SpeakAudio(This,ulStartElement,cElements,dwFlags,pulStreamNumber) \
    ((This)->lpVtbl->SpeakAudio(This,ulStartElement,cElements,dwFlags,pulStreamNumber))
#define ISpXMLRecoResult_Serialize(This,ppCoMemSerializedResult) \
    ((This)->lpVtbl->Serialize(This,ppCoMemSerializedResult))
#define ISpXMLRecoResult_ScaleAudio(This,pAudioFormatId,pWaveFormatEx) \
    ((This)->lpVtbl->ScaleAudio(This,pAudioFormatId,pWaveFormatEx))
#define ISpXMLRecoResult_GetRecoContext(This,ppRecoContext) \
    ((This)->lpVtbl->GetRecoContext(This,ppRecoContext))
/*** ISpXMLRecoResult methods ***/
#define ISpXMLRecoResult_GetXMLResult(This,ppszCoMemXMLResult,Options) \
    ((This)->lpVtbl->GetXMLResult(This,ppszCoMemXMLResult,Options))
#define ISpXMLRecoResult_GetXMLErrorInfo(This,pSemanticErrorInfo) \
    ((This)->lpVtbl->GetXMLErrorInfo(This,pSemanticErrorInfo))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpXMLRecoResult_INTERFACE_DEFINED__ */

typedef struct tagSPTEXTSELECTIONINFO {
    ULONG ulStartActiveOffset;
    ULONG cchActiveChars;
    ULONG ulStartSelection;
    ULONG cchSelection;
} SPTEXTSELECTIONINFO;

typedef enum SPWORDPRONOUNCEABLE {
    SPWP_UNKNOWN_WORD_UNPRONOUNCEABLE = 0,
    SPWP_UNKNOWN_WORD_PRONOUNCEABLE = 1,
    SPWP_KNOWN_WORD_PRONOUNCEABLE = 2
} SPWORDPRONOUNCEABLE;

typedef enum SPGRAMMARSTATE {
    SPGS_DISABLED = 0,
    SPGS_ENABLED = 1,
    SPGS_EXCLUSIVE = 3
} SPGRAMMARSTATE;

typedef enum SPCONTEXTSTATE {
    SPCS_DISABLED = 0,
    SPCS_ENABLED = 1
} SPCONTEXTSTATE;

typedef enum SPRULESTATE {
    SPRS_INACTIVE = 0,
    SPRS_ACTIVE = 1,
    SPRS_ACTIVE_WITH_AUTO_PAUSE = 3,
    SPRS_ACTIVE_USER_DELIMITED = 4
} SPRULESTATE;

#define SP_STREAMPOS_ASAP  (0)
#define SP_STREAMPOS_REALTIME  (-1)

#define SPRULETRANS_TEXTBUFFER (SPSTATEHANDLE)(-1)
#define SPRULETRANS_WILDCARD   (SPSTATEHANDLE)(-2)
#define SPRULETRANS_DICTATION  (SPSTATEHANDLE)(-3)

typedef enum SPGRAMMARWORDTYPE {
    SPWT_DISPLAY = 0,
    SPWT_LEXICAL = 1,
    SPWT_PRONUNCIATION = 2,
    SPWT_LEXICAL_NO_SPECIAL_CHARS = 3
} SPGRAMMARWORDTYPE;

typedef struct tagSPPROPERTYINFO {
    LPCWSTR pszName;
    ULONG ulId;
    LPCWSTR pszValue;
    VARIANT vValue;
} SPPROPERTYINFO;

typedef enum SPCFGRULEATTRIBUTES {
    SPRAF_TopLevel = 1 << 0,
    SPRAF_Active = 1 << 1,
    SPRAF_Export = 1 << 2,
    SPRAF_Import = 1 << 3,
    SPRAF_Interpreter = 1 << 4,
    SPRAF_Dynamic = 1 << 5,
    SPRAF_Root = 1 << 6,
    SPRAF_AutoPause = 1 << 16,
    SPRAF_UserDelimited = 1 << 17
} SPCFGRULEATTRIBUTES;

/*****************************************************************************
 * ISpGrammarBuilder interface
 */
#ifndef __ISpGrammarBuilder_INTERFACE_DEFINED__
#define __ISpGrammarBuilder_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpGrammarBuilder;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpGrammarBuilderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpGrammarBuilder *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpGrammarBuilder *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpGrammarBuilder *This);

    /*** ISpGrammarBuilder methods ***/
    HRESULT (STDMETHODCALLTYPE *ResetGrammar)(
        ISpGrammarBuilder *This,
        WORD NewLanguage);

    HRESULT (STDMETHODCALLTYPE *GetRule)(
        ISpGrammarBuilder *This,
        LPCWSTR pszRuleName,
        DWORD dwRuleId,
        DWORD dwAttributes,
        BOOL fCreateIfNotExist,
        SPSTATEHANDLE *phInitialState);

    HRESULT (STDMETHODCALLTYPE *ClearRule)(
        ISpGrammarBuilder *This,
        SPSTATEHANDLE hState);

    HRESULT (STDMETHODCALLTYPE *CreateNewState)(
        ISpGrammarBuilder *This,
        SPSTATEHANDLE hState,
        SPSTATEHANDLE *phState);

    HRESULT (STDMETHODCALLTYPE *AddWordTransition)(
        ISpGrammarBuilder *This,
        SPSTATEHANDLE hFromState,
        SPSTATEHANDLE hToState,
        LPCWSTR psz,
        LPCWSTR pszSeparators,
        SPGRAMMARWORDTYPE eWordType,
        float Weight,
        const SPPROPERTYINFO *pPropInfo);

    HRESULT (STDMETHODCALLTYPE *AddRuleTransition)(
        ISpGrammarBuilder *This,
        SPSTATEHANDLE hFromState,
        SPSTATEHANDLE hToState,
        SPSTATEHANDLE hRule,
        float Weight,
        const SPPROPERTYINFO *pPropInfo);

    HRESULT (STDMETHODCALLTYPE *AddResource)(
        ISpGrammarBuilder *This,
        SPSTATEHANDLE hRuleState,
        LPCWSTR pszResourceName,
        LPCWSTR pszResourceValue);

    HRESULT (STDMETHODCALLTYPE *Commit)(
        ISpGrammarBuilder *This,
        DWORD dwReserved);

    END_INTERFACE
} ISpGrammarBuilderVtbl;

interface ISpGrammarBuilder {
    CONST_VTBL ISpGrammarBuilderVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpGrammarBuilder_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpGrammarBuilder_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpGrammarBuilder_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISpGrammarBuilder methods ***/
#define ISpGrammarBuilder_ResetGrammar(This,NewLanguage) \
    ((This)->lpVtbl->ResetGrammar(This,NewLanguage))
#define ISpGrammarBuilder_GetRule(This,pszRuleName,dwRuleId,dwAttributes,fCreateIfNotExist,phInitialState) \
    ((This)->lpVtbl->GetRule(This,pszRuleName,dwRuleId,dwAttributes,fCreateIfNotExist,phInitialState))
#define ISpGrammarBuilder_ClearRule(This,hState) \
    ((This)->lpVtbl->ClearRule(This,hState))
#define ISpGrammarBuilder_CreateNewState(This,hState,phState) \
    ((This)->lpVtbl->CreateNewState(This,hState,phState))
#define ISpGrammarBuilder_AddWordTransition(This,hFromState,hToState,psz,pszSeparators,eWordType,Weight,pPropInfo) \
    ((This)->lpVtbl->AddWordTransition(This,hFromState,hToState,psz,pszSeparators,eWordType,Weight,pPropInfo))
#define ISpGrammarBuilder_AddRuleTransition(This,hFromState,hToState,hRule,Weight,pPropInfo) \
    ((This)->lpVtbl->AddRuleTransition(This,hFromState,hToState,hRule,Weight,pPropInfo))
#define ISpGrammarBuilder_AddResource(This,hRuleState,pszResourceName,pszResourceValue) \
    ((This)->lpVtbl->AddResource(This,hRuleState,pszResourceName,pszResourceValue))
#define ISpGrammarBuilder_Commit(This,dwReserved) \
    ((This)->lpVtbl->Commit(This,dwReserved))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpGrammarBuilder_INTERFACE_DEFINED__ */

typedef enum SPLOADOPTIONS {
    SPLO_STATIC = 0,
    SPLO_DYNAMIC = 1
} SPLOADOPTIONS;

/*****************************************************************************
 * ISpRecoGrammar interface
 */
#ifndef __ISpRecoGrammar_INTERFACE_DEFINED__
#define __ISpRecoGrammar_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpRecoGrammar;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpRecoGrammarVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpRecoGrammar *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpRecoGrammar *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpRecoGrammar *This);

    /*** ISpGrammarBuilder methods ***/
    HRESULT (STDMETHODCALLTYPE *ResetGrammar)(
        ISpRecoGrammar *This,
        WORD NewLanguage);

    HRESULT (STDMETHODCALLTYPE *GetRule)(
        ISpRecoGrammar *This,
        LPCWSTR pszRuleName,
        DWORD dwRuleId,
        DWORD dwAttributes,
        BOOL fCreateIfNotExist,
        SPSTATEHANDLE *phInitialState);

    HRESULT (STDMETHODCALLTYPE *ClearRule)(
        ISpRecoGrammar *This,
        SPSTATEHANDLE hState);

    HRESULT (STDMETHODCALLTYPE *CreateNewState)(
        ISpRecoGrammar *This,
        SPSTATEHANDLE hState,
        SPSTATEHANDLE *phState);

    HRESULT (STDMETHODCALLTYPE *AddWordTransition)(
        ISpRecoGrammar *This,
        SPSTATEHANDLE hFromState,
        SPSTATEHANDLE hToState,
        LPCWSTR psz,
        LPCWSTR pszSeparators,
        SPGRAMMARWORDTYPE eWordType,
        float Weight,
        const SPPROPERTYINFO *pPropInfo);

    HRESULT (STDMETHODCALLTYPE *AddRuleTransition)(
        ISpRecoGrammar *This,
        SPSTATEHANDLE hFromState,
        SPSTATEHANDLE hToState,
        SPSTATEHANDLE hRule,
        float Weight,
        const SPPROPERTYINFO *pPropInfo);

    HRESULT (STDMETHODCALLTYPE *AddResource)(
        ISpRecoGrammar *This,
        SPSTATEHANDLE hRuleState,
        LPCWSTR pszResourceName,
        LPCWSTR pszResourceValue);

    HRESULT (STDMETHODCALLTYPE *Commit)(
        ISpRecoGrammar *This,
        DWORD dwReserved);

    /*** ISpRecoGrammar methods ***/
    HRESULT (STDMETHODCALLTYPE *GetGrammarId)(
        ISpRecoGrammar *This,
        ULONGLONG *pullGrammarId);

    HRESULT (STDMETHODCALLTYPE *GetRecoContext)(
        ISpRecoGrammar *This,
        ISpRecoContext **ppRecoCtxt);

    HRESULT (STDMETHODCALLTYPE *LoadCmdFromFile)(
        ISpRecoGrammar *This,
        LPCWSTR pszFileName,
        SPLOADOPTIONS Options);

    HRESULT (STDMETHODCALLTYPE *LoadCmdFromObject)(
        ISpRecoGrammar *This,
        REFCLSID rcid,
        LPCWSTR pszGrammarName,
        SPLOADOPTIONS Options);

    HRESULT (STDMETHODCALLTYPE *LoadCmdFromResource)(
        ISpRecoGrammar *This,
        HMODULE hModule,
        LPCWSTR pszResourceName,
        LPCWSTR pszResourceType,
        WORD wLanguage,
        SPLOADOPTIONS Options);

    HRESULT (STDMETHODCALLTYPE *LoadCmdFromMemory)(
        ISpRecoGrammar *This,
        const SPBINARYGRAMMAR *pGrammar,
        SPLOADOPTIONS Options);

    HRESULT (STDMETHODCALLTYPE *LoadCmdFromProprietaryGrammar)(
        ISpRecoGrammar *This,
        REFGUID rguidParam,
        LPCWSTR pszStringParam,
        void *pvDataPrarm,
        ULONG cbDataSize,
        SPLOADOPTIONS Options);

    HRESULT (STDMETHODCALLTYPE *SetRuleState)(
        ISpRecoGrammar *This,
        LPCWSTR pszName,
        void *pReserved,
        SPRULESTATE NewState);

    HRESULT (STDMETHODCALLTYPE *SetRuleIdState)(
        ISpRecoGrammar *This,
        ULONG ulRuleId,
        SPRULESTATE NewState);

    HRESULT (STDMETHODCALLTYPE *LoadDictation)(
        ISpRecoGrammar *This,
        LPCWSTR pszTopicName,
        SPLOADOPTIONS Options);

    HRESULT (STDMETHODCALLTYPE *UnloadDictation)(
        ISpRecoGrammar *This);

    HRESULT (STDMETHODCALLTYPE *SetDictationState)(
        ISpRecoGrammar *This,
        SPRULESTATE NewState);

    HRESULT (STDMETHODCALLTYPE *SetWordSequenceData)(
        ISpRecoGrammar *This,
        const WCHAR *pText,
        ULONG cchText,
        const SPTEXTSELECTIONINFO *pInfo);

    HRESULT (STDMETHODCALLTYPE *SetTextSelection)(
        ISpRecoGrammar *This,
        const SPTEXTSELECTIONINFO *pInfo);

    HRESULT (STDMETHODCALLTYPE *IsPronounceable)(
        ISpRecoGrammar *This,
        LPCWSTR pszWord,
        SPWORDPRONOUNCEABLE *pWordPronounceable);

    HRESULT (STDMETHODCALLTYPE *SetGrammarState)(
        ISpRecoGrammar *This,
        SPGRAMMARSTATE eGrammarState);

    HRESULT (STDMETHODCALLTYPE *SaveCmd)(
        ISpRecoGrammar *This,
        IStream *pStream,
        LPWSTR *ppszCoMemErrorText);

    HRESULT (STDMETHODCALLTYPE *GetGrammarState)(
        ISpRecoGrammar *This,
        SPGRAMMARSTATE *peGrammarState);

    END_INTERFACE
} ISpRecoGrammarVtbl;

interface ISpRecoGrammar {
    CONST_VTBL ISpRecoGrammarVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpRecoGrammar_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpRecoGrammar_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpRecoGrammar_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISpGrammarBuilder methods ***/
#define ISpRecoGrammar_ResetGrammar(This,NewLanguage) \
    ((This)->lpVtbl->ResetGrammar(This,NewLanguage))
#define ISpRecoGrammar_GetRule(This,pszRuleName,dwRuleId,dwAttributes,fCreateIfNotExist,phInitialState) \
    ((This)->lpVtbl->GetRule(This,pszRuleName,dwRuleId,dwAttributes,fCreateIfNotExist,phInitialState))
#define ISpRecoGrammar_ClearRule(This,hState) \
    ((This)->lpVtbl->ClearRule(This,hState))
#define ISpRecoGrammar_CreateNewState(This,hState,phState) \
    ((This)->lpVtbl->CreateNewState(This,hState,phState))
#define ISpRecoGrammar_AddWordTransition(This,hFromState,hToState,psz,pszSeparators,eWordType,Weight,pPropInfo) \
    ((This)->lpVtbl->AddWordTransition(This,hFromState,hToState,psz,pszSeparators,eWordType,Weight,pPropInfo))
#define ISpRecoGrammar_AddRuleTransition(This,hFromState,hToState,hRule,Weight,pPropInfo) \
    ((This)->lpVtbl->AddRuleTransition(This,hFromState,hToState,hRule,Weight,pPropInfo))
#define ISpRecoGrammar_AddResource(This,hRuleState,pszResourceName,pszResourceValue) \
    ((This)->lpVtbl->AddResource(This,hRuleState,pszResourceName,pszResourceValue))
#define ISpRecoGrammar_Commit(This,dwReserved) \
    ((This)->lpVtbl->Commit(This,dwReserved))
/*** ISpRecoGrammar methods ***/
#define ISpRecoGrammar_GetGrammarId(This,pullGrammarId) \
    ((This)->lpVtbl->GetGrammarId(This,pullGrammarId))
#define ISpRecoGrammar_GetRecoContext(This,ppRecoCtxt) \
    ((This)->lpVtbl->GetRecoContext(This,ppRecoCtxt))
#define ISpRecoGrammar_LoadCmdFromFile(This,pszFileName,Options) \
    ((This)->lpVtbl->LoadCmdFromFile(This,pszFileName,Options))
#define ISpRecoGrammar_LoadCmdFromObject(This,rcid,pszGrammarName,Options) \
    ((This)->lpVtbl->LoadCmdFromObject(This,rcid,pszGrammarName,Options))
#define ISpRecoGrammar_LoadCmdFromResource(This,hModule,pszResourceName,pszResourceType,wLanguage,Options) \
    ((This)->lpVtbl->LoadCmdFromResource(This,hModule,pszResourceName,pszResourceType,wLanguage,Options))
#define ISpRecoGrammar_LoadCmdFromMemory(This,pGrammar,Options) \
    ((This)->lpVtbl->LoadCmdFromMemory(This,pGrammar,Options))
#define ISpRecoGrammar_LoadCmdFromProprietaryGrammar(This,rguidParam,pszStringParam,pvDataPrarm,cbDataSize,Options) \
    ((This)->lpVtbl->LoadCmdFromProprietaryGrammar(This,rguidParam,pszStringParam,pvDataPrarm,cbDataSize,Options))
#define ISpRecoGrammar_SetRuleState(This,pszName,pReserved,NewState) \
    ((This)->lpVtbl->SetRuleState(This,pszName,pReserved,NewState))
#define ISpRecoGrammar_SetRuleIdState(This,ulRuleId,NewState) \
    ((This)->lpVtbl->SetRuleIdState(This,ulRuleId,NewState))
#define ISpRecoGrammar_LoadDictation(This,pszTopicName,Options) \
    ((This)->lpVtbl->LoadDictation(This,pszTopicName,Options))
#define ISpRecoGrammar_UnloadDictation(This) \
    ((This)->lpVtbl->UnloadDictation(This))
#define ISpRecoGrammar_SetDictationState(This,NewState) \
    ((This)->lpVtbl->SetDictationState(This,NewState))
#define ISpRecoGrammar_SetWordSequenceData(This,pText,cchText,pInfo) \
    ((This)->lpVtbl->SetWordSequenceData(This,pText,cchText,pInfo))
#define ISpRecoGrammar_SetTextSelection(This,pInfo) \
    ((This)->lpVtbl->SetTextSelection(This,pInfo))
#define ISpRecoGrammar_IsPronounceable(This,pszWord,pWordPronounceable) \
    ((This)->lpVtbl->IsPronounceable(This,pszWord,pWordPronounceable))
#define ISpRecoGrammar_SetGrammarState(This,eGrammarState) \
    ((This)->lpVtbl->SetGrammarState(This,eGrammarState))
#define ISpRecoGrammar_SaveCmd(This,pStream,ppszCoMemErrorText) \
    ((This)->lpVtbl->SaveCmd(This,pStream,ppszCoMemErrorText))
#define ISpRecoGrammar_GetGrammarState(This,peGrammarState) \
    ((This)->lpVtbl->GetGrammarState(This,peGrammarState))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpRecoGrammar_INTERFACE_DEFINED__ */

typedef enum SPMATCHINGMODE {
    AllWords = 0,
    Subsequence = 1,
    OrderedSubset = 3,
    SubsequenceContentRequired = 5,
    OrderedSubsetContentRequired = 7
} SPMATCHINGMODE;

typedef enum PHONETICALPHABET {
    PA_Ipa = 0,
    PA_Ups = 1,
    PA_Sapi = 2
} PHONETICALPHABET;

/*****************************************************************************
 * ISpGrammarBuilder2 interface
 */
#ifndef __ISpGrammarBuilder2_INTERFACE_DEFINED__
#define __ISpGrammarBuilder2_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpGrammarBuilder2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpGrammarBuilder2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpGrammarBuilder2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpGrammarBuilder2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpGrammarBuilder2 *This);

    /*** ISpGrammarBuilder2 methods ***/
    HRESULT (STDMETHODCALLTYPE *AddTextSubset)(
        ISpGrammarBuilder2 *This,
        SPSTATEHANDLE hFromState,
        SPSTATEHANDLE hToState,
        LPCWSTR psz,
        SPMATCHINGMODE eMatchMode);

    HRESULT (STDMETHODCALLTYPE *SetPhoneticAlphabet)(
        ISpGrammarBuilder2 *This,
        PHONETICALPHABET phoneticALphabet);

    END_INTERFACE
} ISpGrammarBuilder2Vtbl;

interface ISpGrammarBuilder2 {
    CONST_VTBL ISpGrammarBuilder2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpGrammarBuilder2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpGrammarBuilder2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpGrammarBuilder2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISpGrammarBuilder2 methods ***/
#define ISpGrammarBuilder2_AddTextSubset(This,hFromState,hToState,psz,eMatchMode) \
    ((This)->lpVtbl->AddTextSubset(This,hFromState,hToState,psz,eMatchMode))
#define ISpGrammarBuilder2_SetPhoneticAlphabet(This,phoneticALphabet) \
    ((This)->lpVtbl->SetPhoneticAlphabet(This,phoneticALphabet))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpGrammarBuilder2_INTERFACE_DEFINED__ */

#define SPRP_NORMAL 0

/*****************************************************************************
 * ISpRecoGrammar2 interface
 */
#ifndef __ISpRecoGrammar2_INTERFACE_DEFINED__
#define __ISpRecoGrammar2_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpRecoGrammar2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpRecoGrammar2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpRecoGrammar2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpRecoGrammar2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpRecoGrammar2 *This);

    /*** ISpRecoGrammar2 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetRules)(
        ISpRecoGrammar2 *This,
        SPRULE **ppCoMemRules,
        UINT *puNumRules);

    HRESULT (STDMETHODCALLTYPE *LoadCmdFromFile2)(
        ISpRecoGrammar2 *This,
        LPCWSTR pszFileName,
        SPLOADOPTIONS Options,
        LPCWSTR pszSharingUri,
        LPCWSTR pszBaseUri);

    HRESULT (STDMETHODCALLTYPE *LoadCmdFromMemory2)(
        ISpRecoGrammar2 *This,
        const SPBINARYGRAMMAR *pGrammar,
        SPLOADOPTIONS Options,
        LPCWSTR pszSharingUri,
        LPCWSTR pszBaseUri);

    HRESULT (STDMETHODCALLTYPE *SetRulePriority)(
        ISpRecoGrammar2 *This,
        LPCWSTR pszRuleName,
        ULONG ulRuleId,
        int nRulePriority);

    HRESULT (STDMETHODCALLTYPE *SetRuleWeight)(
        ISpRecoGrammar2 *This,
        LPCWSTR pszRuleName,
        ULONG ulRuleId,
        float flWeight);

    HRESULT (STDMETHODCALLTYPE *SetDictationWeight)(
        ISpRecoGrammar2 *This,
        float flWeight);

    HRESULT (STDMETHODCALLTYPE *SetGrammarLoader)(
        ISpRecoGrammar2 *This,
        ISpeechResourceLoader *pLoader);

    HRESULT (STDMETHODCALLTYPE *SetSMLSecurityManager)(
        ISpRecoGrammar2 *This,
        IInternetSecurityManager *pSMLSecurityManager);

    END_INTERFACE
} ISpRecoGrammar2Vtbl;

interface ISpRecoGrammar2 {
    CONST_VTBL ISpRecoGrammar2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpRecoGrammar2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpRecoGrammar2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpRecoGrammar2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISpRecoGrammar2 methods ***/
#define ISpRecoGrammar2_GetRules(This,ppCoMemRules,puNumRules) \
    ((This)->lpVtbl->GetRules(This,ppCoMemRules,puNumRules))
#define ISpRecoGrammar2_LoadCmdFromFile2(This,pszFileName,Options,pszSharingUri,pszBaseUri) \
    ((This)->lpVtbl->LoadCmdFromFile2(This,pszFileName,Options,pszSharingUri,pszBaseUri))
#define ISpRecoGrammar2_LoadCmdFromMemory2(This,pGrammar,Options,pszSharingUri,pszBaseUri) \
    ((This)->lpVtbl->LoadCmdFromMemory2(This,pGrammar,Options,pszSharingUri,pszBaseUri))
#define ISpRecoGrammar2_SetRulePriority(This,pszRuleName,ulRuleId,nRulePriority) \
    ((This)->lpVtbl->SetRulePriority(This,pszRuleName,ulRuleId,nRulePriority))
#define ISpRecoGrammar2_SetRuleWeight(This,pszRuleName,ulRuleId,flWeight) \
    ((This)->lpVtbl->SetRuleWeight(This,pszRuleName,ulRuleId,flWeight))
#define ISpRecoGrammar2_SetDictationWeight(This,flWeight) \
    ((This)->lpVtbl->SetDictationWeight(This,flWeight))
#define ISpRecoGrammar2_SetGrammarLoader(This,pLoader) \
    ((This)->lpVtbl->SetGrammarLoader(This,pLoader))
#define ISpRecoGrammar2_SetSMLSecurityManager(This,pSMLSecurityManager) \
    ((This)->lpVtbl->SetSMLSecurityManager(This,pSMLSecurityManager))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpRecoGrammar2_INTERFACE_DEFINED__ */
/*****************************************************************************
 * ISpeechResourceLoader interface
 */
#ifndef __ISpeechResourceLoader_INTERFACE_DEFINED__
#define __ISpeechResourceLoader_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpeechResourceLoader;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpeechResourceLoaderVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpeechResourceLoader *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpeechResourceLoader *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpeechResourceLoader *This);

    /*** IDispatch methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        ISpeechResourceLoader *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        ISpeechResourceLoader *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        ISpeechResourceLoader *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        ISpeechResourceLoader *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    /*** ISpeechResourceLoader methods ***/
    HRESULT (STDMETHODCALLTYPE *LoadResource)(
        ISpeechResourceLoader *This,
        BSTR bstrResourceUri,
        VARIANT_BOOL fAlwaysReload,
        IUnknown **pStream,
        BSTR *pbstrMIMEType,
        VARIANT_BOOL *pfModified,
        BSTR *pbstrRedirectUrl);

    HRESULT (STDMETHODCALLTYPE *GetLocalCopy)(
        ISpeechResourceLoader *This,
        BSTR bstrResourceUri,
        BSTR *pbstrLocalPath,
        BSTR *pbstrMIMEType,
        BSTR *pbstrRedirectUrl);

    HRESULT (STDMETHODCALLTYPE *ReleaseLocalCopy)(
        ISpeechResourceLoader *This,
        BSTR pbstrLocalPath);

    END_INTERFACE
} ISpeechResourceLoaderVtbl;

interface ISpeechResourceLoader {
    CONST_VTBL ISpeechResourceLoaderVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpeechResourceLoader_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpeechResourceLoader_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpeechResourceLoader_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** IDispatch methods ***/
#define ISpeechResourceLoader_GetTypeInfoCount(This,pctinfo) \
    ((This)->lpVtbl->GetTypeInfoCount(This,pctinfo))
#define ISpeechResourceLoader_GetTypeInfo(This,iTInfo,lcid,ppTInfo) \
    ((This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo))
#define ISpeechResourceLoader_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) \
    ((This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId))
#define ISpeechResourceLoader_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) \
    ((This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr))
/*** ISpeechResourceLoader methods ***/
#define ISpeechResourceLoader_LoadResource(This,bstrResourceUri,fAlwaysReload,pStream,pbstrMIMEType,pfModified,pbstrRedirectUrl) \
    ((This)->lpVtbl->LoadResource(This,bstrResourceUri,fAlwaysReload,pStream,pbstrMIMEType,pfModified,pbstrRedirectUrl))
#define ISpeechResourceLoader_GetLocalCopy(This,bstrResourceUri,pbstrLocalPath,pbstrMIMEType,pbstrRedirectUrl) \
    ((This)->lpVtbl->GetLocalCopy(This,bstrResourceUri,pbstrLocalPath,pbstrMIMEType,pbstrRedirectUrl))
#define ISpeechResourceLoader_ReleaseLocalCopy(This,pbstrLocalPath) \
    ((This)->lpVtbl->ReleaseLocalCopy(This,pbstrLocalPath))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpeechResourceLoader_INTERFACE_DEFINED__ */

typedef struct SPRECOCONTEXTSTATUS {
    SPINTERFERENCE eInterference;
    WCHAR szRequestTypeOfUI[ 255 ];
    DWORD dwReserved1;
    DWORD dwReserved2;
} SPRECOCONTEXTSTATUS;

typedef enum SPBOOKMARKOPTIONS {
    SPBO_NONE = 0,
    SPBO_PAUSE = 1 << 0,
    SPBO_AHEAD = 1 << 1,
    SPBO_TIME_UNITS = 1 << 2
} SPBOOKMARKOPTIONS;

typedef enum SPAUDIOOPTIONS {
    SPAO_NONE = 0,
    SPAO_RETAIN_AUDIO = 1 << 0
} SPAUDIOOPTIONS;

/*****************************************************************************
 * ISpRecoContext interface
 */
#ifndef __ISpRecoContext_INTERFACE_DEFINED__
#define __ISpRecoContext_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpRecoContext;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpRecoContextVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpRecoContext *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpRecoContext *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpRecoContext *This);

    /*** ISpNotifySource methods ***/
    HRESULT (STDMETHODCALLTYPE *SetNotifySink)(
        ISpRecoContext *This,
        ISpNotifySink *pNotifySink);

    HRESULT (STDMETHODCALLTYPE *SetNotifyWindowMessage)(
        ISpRecoContext *This,
        HWND hWnd,
        UINT Msg,
        WPARAM wParam,
        LPARAM lParam);

    HRESULT (STDMETHODCALLTYPE *SetNotifyCallbackFunction)(
        ISpRecoContext *This,
        SPNOTIFYCALLBACK *pfnCallback,
        WPARAM wParam,
        LPARAM lParam);

    HRESULT (STDMETHODCALLTYPE *SetNotifyCallbackInterface)(
        ISpRecoContext *This,
        ISpNotifyCallback *pSpCallback,
        WPARAM wParam,
        LPARAM lParam);

    HRESULT (STDMETHODCALLTYPE *SetNotifyWin32Event)(
        ISpRecoContext *This);

    HRESULT (STDMETHODCALLTYPE *WaitForNotifyEvent)(
        ISpRecoContext *This,
        DWORD dwMilliseconds);

    HANDLE (STDMETHODCALLTYPE *GetNotifyEventHandle)(
        ISpRecoContext *This);

    /*** ISpEventSource methods ***/
    HRESULT (STDMETHODCALLTYPE *SetInterest)(
        ISpRecoContext *This,
        ULONGLONG ullEventInterest,
        ULONGLONG ullQueuedInterest);

    HRESULT (STDMETHODCALLTYPE *GetEvents)(
        ISpRecoContext *This,
        ULONG ulCount,
        SPEVENT *pEventArray,
        ULONG *pulFetched);

    HRESULT (STDMETHODCALLTYPE *GetInfo)(
        ISpRecoContext *This,
        SPEVENTSOURCEINFO *pInfo);

    /*** ISpRecoContext methods ***/
    HRESULT (STDMETHODCALLTYPE *GetRecognizer)(
        ISpRecoContext *This,
        ISpRecognizer **ppRecognizer);

    HRESULT (STDMETHODCALLTYPE *CreateGrammar)(
        ISpRecoContext *This,
        ULONGLONG ullGrammarId,
        ISpRecoGrammar **ppGrammar);

    HRESULT (STDMETHODCALLTYPE *GetStatus)(
        ISpRecoContext *This,
        SPRECOCONTEXTSTATUS *pStatus);

    HRESULT (STDMETHODCALLTYPE *GetMaxAlternates)(
        ISpRecoContext *This,
        ULONG *pcAlternates);

    HRESULT (STDMETHODCALLTYPE *SetMaxAlternates)(
        ISpRecoContext *This,
        ULONG cAlternates);

    HRESULT (STDMETHODCALLTYPE *SetAudioOptions)(
        ISpRecoContext *This,
        SPAUDIOOPTIONS Options,
        const GUID *pAudioFormatId,
        const WAVEFORMATEX *pWaveFormatEx);

    HRESULT (STDMETHODCALLTYPE *GetAudioOptions)(
        ISpRecoContext *This,
        SPAUDIOOPTIONS *pOptions,
        GUID *pAudioFormatId,
        WAVEFORMATEX **ppCoMemWFEX);

    HRESULT (STDMETHODCALLTYPE *DeserializeResult)(
        ISpRecoContext *This,
        const SPSERIALIZEDRESULT *pSerializedResult,
        ISpRecoResult **ppResult);

    HRESULT (STDMETHODCALLTYPE *Bookmark)(
        ISpRecoContext *This,
        SPBOOKMARKOPTIONS Options,
        ULONGLONG ullStreamPosition,
        LPARAM lparamEvent);

    HRESULT (STDMETHODCALLTYPE *SetAdaptationData)(
        ISpRecoContext *This,
        LPCWSTR pAdaptationData,
        const ULONG cch);

    HRESULT (STDMETHODCALLTYPE *Pause)(
        ISpRecoContext *This,
        DWORD dwReserved);

    HRESULT (STDMETHODCALLTYPE *Resume)(
        ISpRecoContext *This,
        DWORD dwReserved);

    HRESULT (STDMETHODCALLTYPE *SetVoice)(
        ISpRecoContext *This,
        ISpVoice *pVoice,
        BOOL fAllowFormatChanges);

    HRESULT (STDMETHODCALLTYPE *GetVoice)(
        ISpRecoContext *This,
        ISpVoice **ppVoice);

    HRESULT (STDMETHODCALLTYPE *SetVoicePurgeEvent)(
        ISpRecoContext *This,
        ULONGLONG ullEventInterest);

    HRESULT (STDMETHODCALLTYPE *GetVoicePurgeEvent)(
        ISpRecoContext *This,
        ULONGLONG *pullEventInterest);

    HRESULT (STDMETHODCALLTYPE *SetContextState)(
        ISpRecoContext *This,
        SPCONTEXTSTATE eContextState);

    HRESULT (STDMETHODCALLTYPE *GetContextState)(
        ISpRecoContext *This,
        SPCONTEXTSTATE *peContextState);

    END_INTERFACE
} ISpRecoContextVtbl;

interface ISpRecoContext {
    CONST_VTBL ISpRecoContextVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpRecoContext_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpRecoContext_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpRecoContext_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISpNotifySource methods ***/
#define ISpRecoContext_SetNotifySink(This,pNotifySink) \
    ((This)->lpVtbl->SetNotifySink(This,pNotifySink))
#define ISpRecoContext_SetNotifyWindowMessage(This,hWnd,Msg,wParam,lParam) \
    ((This)->lpVtbl->SetNotifyWindowMessage(This,hWnd,Msg,wParam,lParam))
#define ISpRecoContext_SetNotifyCallbackFunction(This,pfnCallback,wParam,lParam) \
    ((This)->lpVtbl->SetNotifyCallbackFunction(This,pfnCallback,wParam,lParam))
#define ISpRecoContext_SetNotifyCallbackInterface(This,pSpCallback,wParam,lParam) \
    ((This)->lpVtbl->SetNotifyCallbackInterface(This,pSpCallback,wParam,lParam))
#define ISpRecoContext_SetNotifyWin32Event(This) \
    ((This)->lpVtbl->SetNotifyWin32Event(This))
#define ISpRecoContext_WaitForNotifyEvent(This,dwMilliseconds) \
    ((This)->lpVtbl->WaitForNotifyEvent(This,dwMilliseconds))
#define ISpRecoContext_GetNotifyEventHandle(This) \
    ((This)->lpVtbl->GetNotifyEventHandle(This))
/*** ISpEventSource methods ***/
#define ISpRecoContext_SetInterest(This,ullEventInterest,ullQueuedInterest) \
    ((This)->lpVtbl->SetInterest(This,ullEventInterest,ullQueuedInterest))
#define ISpRecoContext_GetEvents(This,ulCount,pEventArray,pulFetched) \
    ((This)->lpVtbl->GetEvents(This,ulCount,pEventArray,pulFetched))
#define ISpRecoContext_GetInfo(This,pInfo) \
    ((This)->lpVtbl->GetInfo(This,pInfo))
/*** ISpRecoContext methods ***/
#define ISpRecoContext_GetRecognizer(This,ppRecognizer) \
    ((This)->lpVtbl->GetRecognizer(This,ppRecognizer))
#define ISpRecoContext_CreateGrammar(This,ullGrammarId,ppGrammar) \
    ((This)->lpVtbl->CreateGrammar(This,ullGrammarId,ppGrammar))
#define ISpRecoContext_GetStatus(This,pStatus) \
    ((This)->lpVtbl->GetStatus(This,pStatus))
#define ISpRecoContext_GetMaxAlternates(This,pcAlternates) \
    ((This)->lpVtbl->GetMaxAlternates(This,pcAlternates))
#define ISpRecoContext_SetMaxAlternates(This,cAlternates) \
    ((This)->lpVtbl->SetMaxAlternates(This,cAlternates))
#define ISpRecoContext_SetAudioOptions(This,Options,pAudioFormatId,pWaveFormatEx) \
    ((This)->lpVtbl->SetAudioOptions(This,Options,pAudioFormatId,pWaveFormatEx))
#define ISpRecoContext_GetAudioOptions(This,pOptions,pAudioFormatId,ppCoMemWFEX) \
    ((This)->lpVtbl->GetAudioOptions(This,pOptions,pAudioFormatId,ppCoMemWFEX))
#define ISpRecoContext_DeserializeResult(This,pSerializedResult,ppResult) \
    ((This)->lpVtbl->DeserializeResult(This,pSerializedResult,ppResult))
#define ISpRecoContext_Bookmark(This,Options,ullStreamPosition,lparamEvent) \
    ((This)->lpVtbl->Bookmark(This,Options,ullStreamPosition,lparamEvent))
#define ISpRecoContext_SetAdaptationData(This,pAdaptationData,cch) \
    ((This)->lpVtbl->SetAdaptationData(This,pAdaptationData,cch))
#define ISpRecoContext_Pause(This,dwReserved) \
    ((This)->lpVtbl->Pause(This,dwReserved))
#define ISpRecoContext_Resume(This,dwReserved) \
    ((This)->lpVtbl->Resume(This,dwReserved))
#define ISpRecoContext_SetVoice(This,pVoice,fAllowFormatChanges) \
    ((This)->lpVtbl->SetVoice(This,pVoice,fAllowFormatChanges))
#define ISpRecoContext_GetVoice(This,ppVoice) \
    ((This)->lpVtbl->GetVoice(This,ppVoice))
#define ISpRecoContext_SetVoicePurgeEvent(This,ullEventInterest) \
    ((This)->lpVtbl->SetVoicePurgeEvent(This,ullEventInterest))
#define ISpRecoContext_GetVoicePurgeEvent(This,pullEventInterest) \
    ((This)->lpVtbl->GetVoicePurgeEvent(This,pullEventInterest))
#define ISpRecoContext_SetContextState(This,eContextState) \
    ((This)->lpVtbl->SetContextState(This,eContextState))
#define ISpRecoContext_GetContextState(This,peContextState) \
    ((This)->lpVtbl->GetContextState(This,peContextState))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpRecoContext_INTERFACE_DEFINED__ */

typedef enum SPGRAMMAROPTIONS {
    SPGO_SAPI = 0x1,
    SPGO_SRGS = 0x2,
    SPGO_UPS = 0x4,
    SPGO_SRGS_MS_SCRIPT = 0x8,
    SPGO_SRGS_W3C_SCRIPT = 0x100,
    SPGO_SRGS_STG_SCRIPT = 0x200,
    SPGO_SRGS_SCRIPT = ((SPGO_SRGS | SPGO_SRGS_MS_SCRIPT) | SPGO_SRGS_W3C_SCRIPT) | SPGO_SRGS_STG_SCRIPT,
    SPGO_FILE = 0x10,
    SPGO_HTTP = 0x20,
    SPGO_RES = 0x40,
    SPGO_OBJECT = 0x80,
    SPGO_DEFAULT = 0x3fb,
    SPGO_ALL = 0x3ff
} SPGRAMMAROPTIONS;

typedef enum SPADAPTATIONSETTINGS {
    SPADS_Default = 0x0,
    SPADS_CurrentRecognizer = 0x1,
    SPADS_RecoProfile = 0x2,
    SPADS_Immediate = 0x4,
    SPADS_Reset = 0x8,
    SPADS_HighVolumeDataSource = 0x10
} SPADAPTATIONSETTINGS;

typedef enum SPADAPTATIONRELEVANCE {
    SPAR_Unknown = 0,
    SPAR_Low = 1,
    SPAR_Medium = 2,
    SPAR_High = 3
} SPADAPTATIONRELEVANCE;

/*****************************************************************************
 * ISpRecoContext2 interface
 */
#ifndef __ISpRecoContext2_INTERFACE_DEFINED__
#define __ISpRecoContext2_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpRecoContext2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpRecoContext2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpRecoContext2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpRecoContext2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpRecoContext2 *This);

    /*** ISpRecoContext2 methods ***/
    HRESULT (STDMETHODCALLTYPE *SetGrammarOptions)(
        ISpRecoContext2 *This,
        DWORD eGrammarOptions);

    HRESULT (STDMETHODCALLTYPE *GetGrammarOptions)(
        ISpRecoContext2 *This,
        DWORD *peGrammarOptions);

    HRESULT (STDMETHODCALLTYPE *SetAdaptationData2)(
        ISpRecoContext2 *This,
        LPCWSTR pAdaptationData,
        const ULONG cch,
        LPCWSTR pTopicName,
        DWORD eAdaptationSettings,
        SPADAPTATIONRELEVANCE eRelevance);

    END_INTERFACE
} ISpRecoContext2Vtbl;

interface ISpRecoContext2 {
    CONST_VTBL ISpRecoContext2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpRecoContext2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpRecoContext2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpRecoContext2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISpRecoContext2 methods ***/
#define ISpRecoContext2_SetGrammarOptions(This,eGrammarOptions) \
    ((This)->lpVtbl->SetGrammarOptions(This,eGrammarOptions))
#define ISpRecoContext2_GetGrammarOptions(This,peGrammarOptions) \
    ((This)->lpVtbl->GetGrammarOptions(This,peGrammarOptions))
#define ISpRecoContext2_SetAdaptationData2(This,pAdaptationData,cch,pTopicName,eAdaptationSettings,eRelevance) \
    ((This)->lpVtbl->SetAdaptationData2(This,pAdaptationData,cch,pTopicName,eAdaptationSettings,eRelevance))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpRecoContext2_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ISpProperties interface
 */
#ifndef __ISpProperties_INTERFACE_DEFINED__
#define __ISpProperties_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpProperties;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpPropertiesVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpProperties *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpProperties *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpProperties *This);

    /*** ISpProperties methods ***/
    HRESULT (STDMETHODCALLTYPE *SetPropertyNum)(
        ISpProperties *This,
        LPCWSTR pName,
        LONG lValue);

    HRESULT (STDMETHODCALLTYPE *GetPropertyNum)(
        ISpProperties *This,
        LPCWSTR pName,
        LONG *plValue);

    HRESULT (STDMETHODCALLTYPE *SetPropertyString)(
        ISpProperties *This,
        LPCWSTR pName,
        LPCWSTR pValue);

    HRESULT (STDMETHODCALLTYPE *GetPropertyString)(
        ISpProperties *This,
        LPCWSTR pName,
        LPWSTR *ppCoMemValue);

    END_INTERFACE
} ISpPropertiesVtbl;

interface ISpProperties {
    CONST_VTBL ISpPropertiesVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpProperties_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpProperties_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpProperties_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISpProperties methods ***/
#define ISpProperties_SetPropertyNum(This,pName,lValue) \
    ((This)->lpVtbl->SetPropertyNum(This,pName,lValue))
#define ISpProperties_GetPropertyNum(This,pName,plValue) \
    ((This)->lpVtbl->GetPropertyNum(This,pName,plValue))
#define ISpProperties_SetPropertyString(This,pName,pValue) \
    ((This)->lpVtbl->SetPropertyString(This,pName,pValue))
#define ISpProperties_GetPropertyString(This,pName,ppCoMemValue) \
    ((This)->lpVtbl->GetPropertyString(This,pName,ppCoMemValue))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpProperties_INTERFACE_DEFINED__ */

#define SP_MAX_LANGIDS  (20)

typedef struct SPRECOGNIZERSTATUS {
    SPAUDIOSTATUS AudioStatus;
    ULONGLONG ullRecognitionStreamPos;
    ULONG ulStreamNumber;
    ULONG ulNumActive;
    CLSID clsidEngine;
    ULONG cLangIDs;
    WORD aLangID[ 20 ];
    ULONGLONG ullRecognitionStreamTime;
} SPRECOGNIZERSTATUS;

typedef enum SPWAVEFORMATTYPE {
    SPWF_INPUT = 0,
    SPWF_SRENGINE = 1
} SPSTREAMFORMATTYPE;

typedef enum SPRECOSTATE {
    SPRST_INACTIVE = 0,
    SPRST_ACTIVE = 1,
    SPRST_ACTIVE_ALWAYS = 2,
    SPRST_INACTIVE_WITH_PURGE = 3,
    SPRST_NUM_STATES = 4
} SPRECOSTATE;

/*****************************************************************************
 * ISpRecognizer interface
 */
#ifndef __ISpRecognizer_INTERFACE_DEFINED__
#define __ISpRecognizer_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpRecognizer;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpRecognizerVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpRecognizer *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpRecognizer *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpRecognizer *This);

    /*** ISpProperties methods ***/
    HRESULT (STDMETHODCALLTYPE *SetPropertyNum)(
        ISpRecognizer *This,
        LPCWSTR pName,
        LONG lValue);

    HRESULT (STDMETHODCALLTYPE *GetPropertyNum)(
        ISpRecognizer *This,
        LPCWSTR pName,
        LONG *plValue);

    HRESULT (STDMETHODCALLTYPE *SetPropertyString)(
        ISpRecognizer *This,
        LPCWSTR pName,
        LPCWSTR pValue);

    HRESULT (STDMETHODCALLTYPE *GetPropertyString)(
        ISpRecognizer *This,
        LPCWSTR pName,
        LPWSTR *ppCoMemValue);

    /*** ISpRecognizer methods ***/
    HRESULT (STDMETHODCALLTYPE *SetRecognizer)(
        ISpRecognizer *This,
        ISpObjectToken *pRecognizer);

    HRESULT (STDMETHODCALLTYPE *GetRecognizer)(
        ISpRecognizer *This,
        ISpObjectToken **ppRecognizer);

    HRESULT (STDMETHODCALLTYPE *SetInput)(
        ISpRecognizer *This,
        IUnknown *pUnkInput,
        BOOL fAllowFormatChanges);

    HRESULT (STDMETHODCALLTYPE *GetInputObjectToken)(
        ISpRecognizer *This,
        ISpObjectToken **ppToken);

    HRESULT (STDMETHODCALLTYPE *GetInputStream)(
        ISpRecognizer *This,
        ISpStreamFormat **ppStream);

    HRESULT (STDMETHODCALLTYPE *CreateRecoContext)(
        ISpRecognizer *This,
        ISpRecoContext **ppNewCtxt);

    HRESULT (STDMETHODCALLTYPE *GetRecoProfile)(
        ISpRecognizer *This,
        ISpObjectToken **ppToken);

    HRESULT (STDMETHODCALLTYPE *SetRecoProfile)(
        ISpRecognizer *This,
        ISpObjectToken *pToken);

    HRESULT (STDMETHODCALLTYPE *IsSharedInstance)(
        ISpRecognizer *This);

    HRESULT (STDMETHODCALLTYPE *GetRecoState)(
        ISpRecognizer *This,
        SPRECOSTATE *pState);

    HRESULT (STDMETHODCALLTYPE *SetRecoState)(
        ISpRecognizer *This,
        SPRECOSTATE NewState);

    HRESULT (STDMETHODCALLTYPE *GetStatus)(
        ISpRecognizer *This,
        SPRECOGNIZERSTATUS *pStatus);

    HRESULT (STDMETHODCALLTYPE *GetFormat)(
        ISpRecognizer *This,
        SPSTREAMFORMATTYPE WaveFormatType,
        GUID *pFormatId,
        WAVEFORMATEX **ppCoMemWFEX);

    HRESULT (STDMETHODCALLTYPE *IsUISupported)(
        ISpRecognizer *This,
        LPCWSTR pszTypeOfUI,
        void *pvExtraData,
        ULONG cbExtraData,
        BOOL *pfSupported);

    HRESULT (STDMETHODCALLTYPE *DisplayUI)(
        ISpRecognizer *This,
        HWND hwndParent,
        LPCWSTR pszTitle,
        LPCWSTR pszTypeOfUI,
        void *pvExtraData,
        ULONG cbExtraData);

    HRESULT (STDMETHODCALLTYPE *EmulateRecognition)(
        ISpRecognizer *This,
        ISpPhrase *pPhrase);

    END_INTERFACE
} ISpRecognizerVtbl;

interface ISpRecognizer {
    CONST_VTBL ISpRecognizerVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpRecognizer_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpRecognizer_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpRecognizer_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISpProperties methods ***/
#define ISpRecognizer_SetPropertyNum(This,pName,lValue) \
    ((This)->lpVtbl->SetPropertyNum(This,pName,lValue))
#define ISpRecognizer_GetPropertyNum(This,pName,plValue) \
    ((This)->lpVtbl->GetPropertyNum(This,pName,plValue))
#define ISpRecognizer_SetPropertyString(This,pName,pValue) \
    ((This)->lpVtbl->SetPropertyString(This,pName,pValue))
#define ISpRecognizer_GetPropertyString(This,pName,ppCoMemValue) \
    ((This)->lpVtbl->GetPropertyString(This,pName,ppCoMemValue))
/*** ISpRecognizer methods ***/
#define ISpRecognizer_SetRecognizer(This,pRecognizer) \
    ((This)->lpVtbl->SetRecognizer(This,pRecognizer))
#define ISpRecognizer_GetRecognizer(This,ppRecognizer) \
    ((This)->lpVtbl->GetRecognizer(This,ppRecognizer))
#define ISpRecognizer_SetInput(This,pUnkInput,fAllowFormatChanges) \
    ((This)->lpVtbl->SetInput(This,pUnkInput,fAllowFormatChanges))
#define ISpRecognizer_GetInputObjectToken(This,ppToken) \
    ((This)->lpVtbl->GetInputObjectToken(This,ppToken))
#define ISpRecognizer_GetInputStream(This,ppStream) \
    ((This)->lpVtbl->GetInputStream(This,ppStream))
#define ISpRecognizer_CreateRecoContext(This,ppNewCtxt) \
    ((This)->lpVtbl->CreateRecoContext(This,ppNewCtxt))
#define ISpRecognizer_GetRecoProfile(This,ppToken) \
    ((This)->lpVtbl->GetRecoProfile(This,ppToken))
#define ISpRecognizer_SetRecoProfile(This,pToken) \
    ((This)->lpVtbl->SetRecoProfile(This,pToken))
#define ISpRecognizer_IsSharedInstance(This) \
    ((This)->lpVtbl->IsSharedInstance(This))
#define ISpRecognizer_GetRecoState(This,pState) \
    ((This)->lpVtbl->GetRecoState(This,pState))
#define ISpRecognizer_SetRecoState(This,NewState) \
    ((This)->lpVtbl->SetRecoState(This,NewState))
#define ISpRecognizer_GetStatus(This,pStatus) \
    ((This)->lpVtbl->GetStatus(This,pStatus))
#define ISpRecognizer_GetFormat(This,WaveFormatType,pFormatId,ppCoMemWFEX) \
    ((This)->lpVtbl->GetFormat(This,WaveFormatType,pFormatId,ppCoMemWFEX))
#define ISpRecognizer_IsUISupported(This,pszTypeOfUI,pvExtraData,cbExtraData,pfSupported) \
    ((This)->lpVtbl->IsUISupported(This,pszTypeOfUI,pvExtraData,cbExtraData,pfSupported))
#define ISpRecognizer_DisplayUI(This,hwndParent,pszTitle,pszTypeOfUI,pvExtraData,cbExtraData) \
    ((This)->lpVtbl->DisplayUI(This,hwndParent,pszTitle,pszTypeOfUI,pvExtraData,cbExtraData))
#define ISpRecognizer_EmulateRecognition(This,pPhrase) \
    ((This)->lpVtbl->EmulateRecognition(This,pPhrase))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpRecognizer_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ISpSerializeState interface
 */
#ifndef __ISpSerializeState_INTERFACE_DEFINED__
#define __ISpSerializeState_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpSerializeState;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpSerializeStateVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpSerializeState *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpSerializeState *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpSerializeState *This);

    /*** ISpSerializeState methods ***/
    HRESULT (STDMETHODCALLTYPE *GetSerializedState)(
        ISpSerializeState *This,
        BYTE **ppbData,
        ULONG *pulSize,
        DWORD dwReserved);

    HRESULT (STDMETHODCALLTYPE *SetSerializedState)(
        ISpSerializeState *This,
        BYTE *pbData,
        ULONG ulSize,
        DWORD dwReserved);

    END_INTERFACE
} ISpSerializeStateVtbl;

interface ISpSerializeState {
    CONST_VTBL ISpSerializeStateVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpSerializeState_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpSerializeState_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpSerializeState_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISpSerializeState methods ***/
#define ISpSerializeState_GetSerializedState(This,ppbData,pulSize,dwReserved) \
    ((This)->lpVtbl->GetSerializedState(This,ppbData,pulSize,dwReserved))
#define ISpSerializeState_SetSerializedState(This,pbData,ulSize,dwReserved) \
    ((This)->lpVtbl->SetSerializedState(This,pbData,ulSize,dwReserved))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpSerializeState_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ISpRecognizer2 interface
 */
#ifndef __ISpRecognizer2_INTERFACE_DEFINED__
#define __ISpRecognizer2_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpRecognizer2;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpRecognizer2Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpRecognizer2 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpRecognizer2 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpRecognizer2 *This);

    /*** ISpRecognizer2 methods ***/
    HRESULT (STDMETHODCALLTYPE *EmulateRecognitionEx)(
        ISpRecognizer2 *This,
        ISpPhrase *pPhrase,
        DWORD dwCompareFlags);

    HRESULT (STDMETHODCALLTYPE *SetTrainingState)(
        ISpRecognizer2 *This,
        BOOL fDoingTraining,
        BOOL fAdaptFromTrainingData);

    HRESULT (STDMETHODCALLTYPE *ResetAcousticModelAdaptation)(
        ISpRecognizer2 *This);

    END_INTERFACE
} ISpRecognizer2Vtbl;

interface ISpRecognizer2 {
    CONST_VTBL ISpRecognizer2Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpRecognizer2_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpRecognizer2_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpRecognizer2_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISpRecognizer2 methods ***/
#define ISpRecognizer2_EmulateRecognitionEx(This,pPhrase,dwCompareFlags) \
    ((This)->lpVtbl->EmulateRecognitionEx(This,pPhrase,dwCompareFlags))
#define ISpRecognizer2_SetTrainingState(This,fDoingTraining,fAdaptFromTrainingData) \
    ((This)->lpVtbl->SetTrainingState(This,fDoingTraining,fAdaptFromTrainingData))
#define ISpRecognizer2_ResetAcousticModelAdaptation(This) \
    ((This)->lpVtbl->ResetAcousticModelAdaptation(This))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpRecognizer2_INTERFACE_DEFINED__ */

typedef enum SPCATEGORYTYPE {
    SPCT_COMMAND = 0,
    SPCT_DICTATION = 1,
    SPCT_SLEEP = 2,
    SPCT_SUB_COMMAND = 3,
    SPCT_SUB_DICTATION = 4
} SPCATEGORYTYPE;

/*****************************************************************************
 * ISpRecoCategory interface
 */
#ifndef __ISpRecoCategory_INTERFACE_DEFINED__
#define __ISpRecoCategory_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpRecoCategory;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpRecoCategoryVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpRecoCategory *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpRecoCategory *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpRecoCategory *This);

    /*** ISpRecoCategory methods ***/
    HRESULT (STDMETHODCALLTYPE *GetType)(
        ISpRecoCategory *This,
        SPCATEGORYTYPE *peCategoryType);

    END_INTERFACE
} ISpRecoCategoryVtbl;

interface ISpRecoCategory {
    CONST_VTBL ISpRecoCategoryVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpRecoCategory_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpRecoCategory_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpRecoCategory_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISpRecoCategory methods ***/
#define ISpRecoCategory_GetType(This,peCategoryType) \
    ((This)->lpVtbl->GetType(This,peCategoryType))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpRecoCategory_INTERFACE_DEFINED__ */

/*****************************************************************************
 * ISpRecognizer3 interface
 */
#ifndef __ISpRecognizer3_INTERFACE_DEFINED__
#define __ISpRecognizer3_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpRecognizer3;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpRecognizer3Vtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpRecognizer3 *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpRecognizer3 *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpRecognizer3 *This);

    /*** ISpRecognizer3 methods ***/
    HRESULT (STDMETHODCALLTYPE *GetCategory)(
        ISpRecognizer3 *This,
        SPCATEGORYTYPE categoryType,
        ISpRecoCategory **ppCategory);

    HRESULT (STDMETHODCALLTYPE *SetActiveCategory)(
        ISpRecognizer3 *This,
        ISpRecoCategory *pCategory);

    HRESULT (STDMETHODCALLTYPE *GetActiveCategory)(
        ISpRecognizer3 *This,
        ISpRecoCategory **ppCategory);

    END_INTERFACE
} ISpRecognizer3Vtbl;

interface ISpRecognizer3 {
    CONST_VTBL ISpRecognizer3Vtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpRecognizer3_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpRecognizer3_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpRecognizer3_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISpRecognizer3 methods ***/
#define ISpRecognizer3_GetCategory(This,categoryType,ppCategory) \
    ((This)->lpVtbl->GetCategory(This,categoryType,ppCategory))
#define ISpRecognizer3_SetActiveCategory(This,pCategory) \
    ((This)->lpVtbl->SetActiveCategory(This,pCategory))
#define ISpRecognizer3_GetActiveCategory(This,ppCategory) \
    ((This)->lpVtbl->GetActiveCategory(This,ppCategory))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpRecognizer3_INTERFACE_DEFINED__ */

typedef struct SPNORMALIZATIONLIST {
    ULONG ulSize;
    WCHAR **ppszzNormalizedList;
} SPNORMALIZATIONLIST;

/*****************************************************************************
 * ISpEnginePronunciation interface
 */
#ifndef __ISpEnginePronunciation_INTERFACE_DEFINED__
#define __ISpEnginePronunciation_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpEnginePronunciation;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpEnginePronunciationVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpEnginePronunciation *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpEnginePronunciation *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpEnginePronunciation *This);

    /*** ISpEnginePronunciation methods ***/
    HRESULT (STDMETHODCALLTYPE *Normalize)(
        ISpEnginePronunciation *This,
        LPCWSTR pszWord,
        LPCWSTR pszLeftContext,
        LPCWSTR pszRightContext,
        WORD LangID,
        SPNORMALIZATIONLIST *pNormalizationList);

    HRESULT (STDMETHODCALLTYPE *GetPronunciations)(
        ISpEnginePronunciation *This,
        LPCWSTR pszWord,
        LPCWSTR pszLeftContext,
        LPCWSTR pszRightContext,
        WORD LangID,
        SPWORDPRONUNCIATIONLIST *pEnginePronunciationList);

    END_INTERFACE
} ISpEnginePronunciationVtbl;

interface ISpEnginePronunciation {
    CONST_VTBL ISpEnginePronunciationVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpEnginePronunciation_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpEnginePronunciation_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpEnginePronunciation_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISpEnginePronunciation methods ***/
#define ISpEnginePronunciation_Normalize(This,pszWord,pszLeftContext,pszRightContext,LangID,pNormalizationList) \
    ((This)->lpVtbl->Normalize(This,pszWord,pszLeftContext,pszRightContext,LangID,pNormalizationList))
#define ISpEnginePronunciation_GetPronunciations(This,pszWord,pszLeftContext,pszRightContext,LangID,pEnginePronunciationList) \
    ((This)->lpVtbl->GetPronunciations(This,pszWord,pszLeftContext,pszRightContext,LangID,pEnginePronunciationList))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpEnginePronunciation_INTERFACE_DEFINED__ */

typedef struct SPDISPLAYTOKEN {
    const WCHAR *pszLexical;
    const WCHAR *pszDisplay;
    BYTE bDisplayAttributes;
} SPDISPLAYTOKEN;

typedef struct SPDISPLAYPHRASE {
    ULONG ulNumTokens;
    SPDISPLAYTOKEN *pTokens;
} SPDISPLAYPHRASE;

/*****************************************************************************
 * ISpDisplayAlternates interface
 */
#ifndef __ISpDisplayAlternates_INTERFACE_DEFINED__
#define __ISpDisplayAlternates_INTERFACE_DEFINED__

EXTERN_C const IID IID_ISpDisplayAlternates;

#if defined(__cplusplus) && !defined(CINTERFACE)
#error no support for C++
#else /* C */
typedef struct ISpDisplayAlternatesVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        ISpDisplayAlternates *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        ISpDisplayAlternates *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        ISpDisplayAlternates *This);

    /*** ISpDisplayAlternates methods ***/
    HRESULT (STDMETHODCALLTYPE *GetDisplayAlternates)(
        ISpDisplayAlternates *This,
        const SPDISPLAYPHRASE *pPhrase,
        ULONG cRequestCount,
        SPDISPLAYPHRASE **ppCoMemPhrases,
        ULONG *pcPhrasesReturned);

    HRESULT (STDMETHODCALLTYPE *SetFullStopTrailSpace)(
        ISpDisplayAlternates *This,
        ULONG ulTrailSpace);

    END_INTERFACE
} ISpDisplayAlternatesVtbl;

interface ISpDisplayAlternates {
    CONST_VTBL ISpDisplayAlternatesVtbl* lpVtbl;
};

#ifdef COBJMACROS
/*** IUnknown methods ***/
#define ISpDisplayAlternates_QueryInterface(This,riid,ppvObject) \
    ((This)->lpVtbl->QueryInterface(This,riid,ppvObject))
#define ISpDisplayAlternates_AddRef(This) \
    ((This)->lpVtbl->AddRef(This))
#define ISpDisplayAlternates_Release(This) \
    ((This)->lpVtbl->Release(This))
/*** ISpDisplayAlternates methods ***/
#define ISpDisplayAlternates_GetDisplayAlternates(This,pPhrase,cRequestCount,ppCoMemPhrases,pcPhrasesReturned) \
    ((This)->lpVtbl->GetDisplayAlternates(This,pPhrase,cRequestCount,ppCoMemPhrases,pcPhrasesReturned))
#define ISpDisplayAlternates_SetFullStopTrailSpace(This,ulTrailSpace) \
    ((This)->lpVtbl->SetFullStopTrailSpace(This,ulTrailSpace))
#endif /* COBJMACROS */

#endif /* C */

#endif /* __ISpDisplayAlternates_INTERFACE_DEFINED__ */

#ifndef __SpeechLib_LIBRARY_DEFINED__
#define __SpeechLib_LIBRARY_DEFINED__


/*****************************************************************************
 * SpNotifyTranslator coclass
 */

EXTERN_C const CLSID CLSID_SpNotifyTranslator;

/*****************************************************************************
 * SpObjectTokenCategory coclass
 */

EXTERN_C const CLSID CLSID_SpObjectTokenCategory;

/*****************************************************************************
 * SpObjectToken coclass
 */

EXTERN_C const CLSID CLSID_SpObjectToken;

/*****************************************************************************
 * SpResourceManager coclass
 */

EXTERN_C const CLSID CLSID_SpResourceManager;

/*****************************************************************************
 * SpStreamFormatConverter coclass
 */

EXTERN_C const CLSID CLSID_SpStreamFormatConverter;

/*****************************************************************************
 * SpMMAudioEnum coclass
 */

EXTERN_C const CLSID CLSID_SpMMAudioEnum;

/*****************************************************************************
 * SpMMAudioIn coclass
 */

EXTERN_C const CLSID CLSID_SpMMAudioIn;

/*****************************************************************************
 * SpMMAudioOut coclass
 */

EXTERN_C const CLSID CLSID_SpMMAudioOut;

/*****************************************************************************
 * SpStream coclass
 */

EXTERN_C const CLSID CLSID_SpStream;

/*****************************************************************************
 * SpVoice coclass
 */

EXTERN_C const CLSID CLSID_SpVoice;

/*****************************************************************************
 * SpSharedRecoContext coclass
 */

EXTERN_C const CLSID CLSID_SpSharedRecoContext;

/*****************************************************************************
 * SpInprocRecognizer coclass
 */

EXTERN_C const CLSID CLSID_SpInprocRecognizer;

/*****************************************************************************
 * SpSharedRecognizer coclass
 */

EXTERN_C const CLSID CLSID_SpSharedRecognizer;

/*****************************************************************************
 * SpLexicon coclass
 */

EXTERN_C const CLSID CLSID_SpLexicon;

/*****************************************************************************
 * SpUnCompressedLexicon coclass
 */

EXTERN_C const CLSID CLSID_SpUnCompressedLexicon;

/*****************************************************************************
 * SpCompressedLexicon coclass
 */

EXTERN_C const CLSID CLSID_SpCompressedLexicon;

/*****************************************************************************
 * SpShortcut coclass
 */

EXTERN_C const CLSID CLSID_SpShortcut;

/*****************************************************************************
 * SpPhoneConverter coclass
 */

EXTERN_C const CLSID CLSID_SpPhoneConverter;

/*****************************************************************************
 * SpPhoneticAlphabetConverter coclass
 */

EXTERN_C const CLSID CLSID_SpPhoneticAlphabetConverter;

/*****************************************************************************
 * SpNullPhoneConverter coclass
 */

EXTERN_C const CLSID CLSID_SpNullPhoneConverter;
#endif /* __SpeechLib_LIBRARY_DEFINED__ */

#elif _SAPI_VER >= 0x053
#include "sapi53.h"
#else // _SAPI_VER < 0x053
#include "sapi51.h"
#endif  // _SAPI_VER >= 0x054

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

/* Begin additional prototypes for all interfaces */

ULONG __RPC_USER HWND_UserSize(ULONG *, ULONG, HWND *);
unsigned char * __RPC_USER HWND_UserMarshal(ULONG *, unsigned char *, HWND *);
unsigned char * __RPC_USER HWND_UserUnmarshal(ULONG *, unsigned char *, HWND *);
void __RPC_USER HWND_UserFree(ULONG *, HWND *);

/* End additional prototypes for all interfaces */

#endif /* __sapi_h__ */
