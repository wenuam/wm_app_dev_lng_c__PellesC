#ifndef _HTTP_H
#define _HTTP_H

#if __POCC__ >= 500
#pragma once
#endif

/* HTTP API definitions */

#if __POCC__ >= 290
#pragma warn(push)
#pragma warn(disable:2198)  /* Nameless field is not standard */
#endif

#include <winapifamily.h>

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#if _WIN32_WINNT >= 0x0501

#include <winsock2.h>
#include <ws2tcpip.h>

#define HTTP_INITIALIZE_SERVER  0x00000001
#define HTTP_INITIALIZE_CONFIG  0x00000002
#define HTTP_DEMAND_CBT         0x00000004

#if _WIN32_WINNT >= 0x0600

typedef enum _HTTP_SERVER_PROPERTY {
    HttpServerAuthenticationProperty = 0,
    HttpServerLoggingProperty = 1,
    HttpServerQosProperty = 2,
    HttpServerTimeoutsProperty = 3,
    HttpServerQueueLengthProperty = 4,
    HttpServerStateProperty = 5,
    HttpServer503VerbosityProperty = 6,
    HttpServerBindingProperty = 7,
    HttpServerExtendedAuthenticationProperty = 8,
    HttpServerListenEndpointProperty = 9,
    HttpServerChannelBindProperty = 10,
    HttpServerProtectionLevelProperty = 11,
    HttpServerDelegationProperty = 16,
} HTTP_SERVER_PROPERTY, *PHTTP_SERVER_PROPERTY;

#define HTTP_MAX_SERVER_QUEUE_LENGTH  0x7FFFFFFF
#define HTTP_MIN_SERVER_QUEUE_LENGTH  1

typedef struct _HTTP_PROPERTY_FLAGS {
    ULONG Present:1;
} HTTP_PROPERTY_FLAGS, *PHTTP_PROPERTY_FLAGS;

typedef enum _HTTP_ENABLED_STATE {
    HttpEnabledStateActive,
    HttpEnabledStateInactive,
} HTTP_ENABLED_STATE, *PHTTP_ENABLED_STATE;

typedef struct _HTTP_STATE_INFO {
    HTTP_PROPERTY_FLAGS Flags;
    HTTP_ENABLED_STATE State;
} HTTP_STATE_INFO, *PHTTP_STATE_INFO;

typedef enum _HTTP_503_RESPONSE_VERBOSITY {
    Http503ResponseVerbosityBasic,
    Http503ResponseVerbosityLimited,
    Http503ResponseVerbosityFull
} HTTP_503_RESPONSE_VERBOSITY, *PHTTP_503_RESPONSE_VERBOSITY;

typedef enum _HTTP_QOS_SETTING_TYPE {
    HttpQosSettingTypeBandwidth,
    HttpQosSettingTypeConnectionLimit,
    HttpQosSettingTypeFlowRate
} HTTP_QOS_SETTING_TYPE, *PHTTP_QOS_SETTING_TYPE;

typedef struct _HTTP_QOS_SETTING_INFO {
    HTTP_QOS_SETTING_TYPE QosType;
    PVOID QosSetting;
} HTTP_QOS_SETTING_INFO, *PHTTP_QOS_SETTING_INFO;

typedef struct _HTTP_CONNECTION_LIMIT_INFO {
    HTTP_PROPERTY_FLAGS Flags;
    ULONG MaxConnections;
} HTTP_CONNECTION_LIMIT_INFO, *PHTTP_CONNECTION_LIMIT_INFO;

typedef struct _HTTP_BANDWIDTH_LIMIT_INFO {
    HTTP_PROPERTY_FLAGS Flags;
    ULONG MaxBandwidth;
} HTTP_BANDWIDTH_LIMIT_INFO, *PHTTP_BANDWIDTH_LIMIT_INFO;

typedef struct _HTTP_FLOWRATE_INFO {
    HTTP_PROPERTY_FLAGS Flags;
    ULONG MaxBandwidth;
    ULONG MaxPeakBandwidth;
    ULONG BurstSize;
} HTTP_FLOWRATE_INFO, *PHTTP_FLOWRATE_INFO;

#define HTTP_MIN_ALLOWED_BANDWIDTH_THROTTLING_RATE  ((ULONG)1024)

#define HTTP_LIMIT_INFINITE  ((ULONG)-1)

typedef enum _HTTP_SERVICE_CONFIG_TIMEOUT_KEY {
    IdleConnectionTimeout = 0,
    HeaderWaitTimeout
} HTTP_SERVICE_CONFIG_TIMEOUT_KEY, *PHTTP_SERVICE_CONFIG_TIMEOUT_KEY;

typedef USHORT HTTP_SERVICE_CONFIG_TIMEOUT_PARAM, *PHTTP_SERVICE_CONFIG_TIMEOUT_PARAM;

typedef struct _HTTP_SERVICE_CONFIG_TIMEOUT_SET {
    HTTP_SERVICE_CONFIG_TIMEOUT_KEY KeyDesc;
    HTTP_SERVICE_CONFIG_TIMEOUT_PARAM ParamDesc;
} HTTP_SERVICE_CONFIG_TIMEOUT_SET, *PHTTP_SERVICE_CONFIG_TIMEOUT_SET;

typedef struct _HTTP_TIMEOUT_LIMIT_INFO {
    HTTP_PROPERTY_FLAGS Flags;
    USHORT EntityBody;
    USHORT DrainEntityBody;
    USHORT RequestQueue;
    USHORT IdleConnection;
    USHORT HeaderWait;
    ULONG MinSendRate;
} HTTP_TIMEOUT_LIMIT_INFO, *PHTTP_TIMEOUT_LIMIT_INFO;

typedef enum _HTTP_SERVICE_CONFIG_SETTING_KEY {
    HttpNone = 0,
    HttpTlsThrottle
} HTTP_SERVICE_CONFIG_SETTING_KEY, *PHTTP_SERVICE_CONFIG_SETTING_KEY;

typedef ULONG HTTP_SERVICE_CONFIG_SETTING_PARAM, *PHTTP_SERVICE_CONFIG_SETTING_PARAM;

typedef struct _HTTP_SERVICE_CONFIG_SETTING_SET {
    HTTP_SERVICE_CONFIG_SETTING_KEY KeyDesc;
    HTTP_SERVICE_CONFIG_SETTING_PARAM ParamDesc;
} HTTP_SERVICE_CONFIG_SETTING_SET, *PHTTP_SERVICE_CONFIG_SETTING_SET;

typedef struct _HTTP_LISTEN_ENDPOINT_INFO {
    HTTP_PROPERTY_FLAGS Flags;
    BOOLEAN EnableSharing;
} HTTP_LISTEN_ENDPOINT_INFO, *PHTTP_LISTEN_ENDPOINT_INFO;

typedef struct _HTTP_SERVER_AUTHENTICATION_DIGEST_PARAMS {
    USHORT DomainNameLength;
    PWSTR DomainName;
    USHORT RealmLength;
    PWSTR Realm;
} HTTP_SERVER_AUTHENTICATION_DIGEST_PARAMS, *PHTTP_SERVER_AUTHENTICATION_DIGEST_PARAMS;

typedef struct _HTTP_SERVER_AUTHENTICATION_BASIC_PARAMS {
    USHORT RealmLength;
    PWSTR Realm;
} HTTP_SERVER_AUTHENTICATION_BASIC_PARAMS, *PHTTP_SERVER_AUTHENTICATION_BASIC_PARAMS;

#define HTTP_AUTH_ENABLE_BASIC          (0x00000001)
#define HTTP_AUTH_ENABLE_DIGEST         (0x00000002)
#define HTTP_AUTH_ENABLE_NTLM           (0x00000004)
#define HTTP_AUTH_ENABLE_NEGOTIATE      (0x00000008)
#define HTTP_AUTH_ENABLE_KERBEROS       (0x00000010)

#define HTTP_AUTH_ENABLE_ALL             \
            (HTTP_AUTH_ENABLE_BASIC     |\
             HTTP_AUTH_ENABLE_DIGEST    |\
             HTTP_AUTH_ENABLE_NTLM      |\
             HTTP_AUTH_ENABLE_NEGOTIATE |\
             HTTP_AUTH_ENABLE_KERBEROS)

C_ASSERT(HTTP_AUTH_ENABLE_NEGOTIATE > HTTP_AUTH_ENABLE_NTLM);
C_ASSERT(HTTP_AUTH_ENABLE_NTLM > HTTP_AUTH_ENABLE_DIGEST);
C_ASSERT(HTTP_AUTH_ENABLE_DIGEST > HTTP_AUTH_ENABLE_BASIC);

#define HTTP_AUTH_EX_FLAG_ENABLE_KERBEROS_CREDENTIAL_CACHING  (0x01)
#define HTTP_AUTH_EX_FLAG_CAPTURE_CREDENTIAL                  (0x02)

typedef struct _HTTP_SERVER_AUTHENTICATION_INFO {
    HTTP_PROPERTY_FLAGS Flags;
    ULONG AuthSchemes;
    BOOLEAN ReceiveMutualAuth;
    BOOLEAN ReceiveContextHandle;
    BOOLEAN DisableNTLMCredentialCaching;
    UCHAR ExFlags;
    HTTP_SERVER_AUTHENTICATION_DIGEST_PARAMS DigestParams;
    HTTP_SERVER_AUTHENTICATION_BASIC_PARAMS BasicParams;
} HTTP_SERVER_AUTHENTICATION_INFO, *PHTTP_SERVER_AUTHENTICATION_INFO;

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)

typedef enum _HTTP_SERVICE_BINDING_TYPE {
    HttpServiceBindingTypeNone = 0,
    HttpServiceBindingTypeW,
    HttpServiceBindingTypeA
} HTTP_SERVICE_BINDING_TYPE;

typedef struct _HTTP_SERVICE_BINDING_BASE {
    HTTP_SERVICE_BINDING_TYPE Type;
} HTTP_SERVICE_BINDING_BASE, *PHTTP_SERVICE_BINDING_BASE;

typedef struct _HTTP_SERVICE_BINDING_A {
    HTTP_SERVICE_BINDING_BASE Base;
    PCHAR Buffer;
    ULONG BufferSize;
} HTTP_SERVICE_BINDING_A, *PHTTP_SERVICE_BINDING_A;

typedef struct _HTTP_SERVICE_BINDING_W {
    HTTP_SERVICE_BINDING_BASE Base;
    PWCHAR Buffer;
    ULONG BufferSize;
} HTTP_SERVICE_BINDING_W, *PHTTP_SERVICE_BINDING_W;

typedef enum _HTTP_AUTHENTICATION_HARDENING_LEVELS {
    HttpAuthenticationHardeningLegacy = 0,
    HttpAuthenticationHardeningMedium,
    HttpAuthenticationHardeningStrict
} HTTP_AUTHENTICATION_HARDENING_LEVELS;

#define HTTP_CHANNEL_BIND_PROXY 0x1
#define HTTP_CHANNEL_BIND_PROXY_COHOSTING 0x20

#define HTTP_CHANNEL_BIND_NO_SERVICE_NAME_CHECK 0x2
#define HTTP_CHANNEL_BIND_DOTLESS_SERVICE 0x4

#define HTTP_CHANNEL_BIND_SECURE_CHANNEL_TOKEN 0x8
#define HTTP_CHANNEL_BIND_CLIENT_SERVICE 0x10

typedef struct _HTTP_CHANNEL_BIND_INFO {
    HTTP_AUTHENTICATION_HARDENING_LEVELS Hardening;
    ULONG Flags;
    PHTTP_SERVICE_BINDING_BASE * ServiceNames;
    ULONG NumberOfServiceNames;
} HTTP_CHANNEL_BIND_INFO, *PHTTP_CHANNEL_BIND_INFO;

typedef struct _HTTP_REQUEST_CHANNEL_BIND_STATUS {
    PHTTP_SERVICE_BINDING_BASE ServiceName;
    PUCHAR ChannelToken;
    ULONG ChannelTokenSize;
    ULONG Flags;
} HTTP_REQUEST_CHANNEL_BIND_STATUS, *PHTTP_REQUEST_CHANNEL_BIND_STATUS;

#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WIN7) */

typedef struct _HTTP_REQUEST_TOKEN_BINDING_INFO {
    PUCHAR TokenBinding;
    ULONG TokenBindingSize;
    PUCHAR EKM;
    ULONG EKMSize;
    UCHAR KeyType;
} HTTP_REQUEST_TOKEN_BINDING_INFO, *PHTTP_REQUEST_TOKEN_BINDING_INFO;

#define HTTP_LOG_FIELD_DATE                 0x00000001
#define HTTP_LOG_FIELD_TIME                 0x00000002
#define HTTP_LOG_FIELD_CLIENT_IP            0x00000004
#define HTTP_LOG_FIELD_USER_NAME            0x00000008
#define HTTP_LOG_FIELD_SITE_NAME            0x00000010
#define HTTP_LOG_FIELD_COMPUTER_NAME        0x00000020
#define HTTP_LOG_FIELD_SERVER_IP            0x00000040
#define HTTP_LOG_FIELD_METHOD               0x00000080
#define HTTP_LOG_FIELD_URI_STEM             0x00000100
#define HTTP_LOG_FIELD_URI_QUERY            0x00000200
#define HTTP_LOG_FIELD_STATUS               0x00000400
#define HTTP_LOG_FIELD_WIN32_STATUS         0x00000800
#define HTTP_LOG_FIELD_BYTES_SENT           0x00001000
#define HTTP_LOG_FIELD_BYTES_RECV           0x00002000
#define HTTP_LOG_FIELD_TIME_TAKEN           0x00004000
#define HTTP_LOG_FIELD_SERVER_PORT          0x00008000
#define HTTP_LOG_FIELD_USER_AGENT           0x00010000
#define HTTP_LOG_FIELD_COOKIE               0x00020000
#define HTTP_LOG_FIELD_REFERER              0x00040000
#define HTTP_LOG_FIELD_VERSION              0x00080000
#define HTTP_LOG_FIELD_HOST                 0x00100000
#define HTTP_LOG_FIELD_SUB_STATUS           0x00200000
#define HTTP_LOG_FIELD_STREAM_ID            0x08000000
#define HTTP_LOG_FIELD_STREAM_ID_EX         0x10000000
#define HTTP_LOG_FIELD_TRANSPORT_TYPE       0x20000000

#define HTTP_LOG_FIELD_CLIENT_PORT          0x00400000
#define HTTP_LOG_FIELD_URI                  0x00800000
#define HTTP_LOG_FIELD_SITE_ID              0x01000000
#define HTTP_LOG_FIELD_REASON               0x02000000
#define HTTP_LOG_FIELD_QUEUE_NAME           0x04000000
#define HTTP_LOG_FIELD_CORRELATION_ID       0x40000000
#define HTTP_LOG_FIELD_FAULT_CODE           0x80000000

typedef enum _HTTP_LOGGING_TYPE {
    HttpLoggingTypeW3C,
    HttpLoggingTypeIIS,
    HttpLoggingTypeNCSA,
    HttpLoggingTypeRaw
} HTTP_LOGGING_TYPE, *PHTTP_LOGGING_TYPE;

typedef enum _HTTP_LOGGING_ROLLOVER_TYPE {
    HttpLoggingRolloverSize,
    HttpLoggingRolloverDaily,
    HttpLoggingRolloverWeekly,
    HttpLoggingRolloverMonthly,
    HttpLoggingRolloverHourly
} HTTP_LOGGING_ROLLOVER_TYPE, *PHTTP_LOGGING_ROLLOVER_TYPE;

#define HTTP_MIN_ALLOWED_LOG_FILE_ROLLOVER_SIZE ((ULONG)(1 * 1024 * 1024))

#define HTTP_LOGGING_FLAG_LOCAL_TIME_ROLLOVER         (0x00000001)
#define HTTP_LOGGING_FLAG_USE_UTF8_CONVERSION         (0x00000002)
#define HTTP_LOGGING_FLAG_LOG_ERRORS_ONLY             (0x00000004)
#define HTTP_LOGGING_FLAG_LOG_SUCCESS_ONLY            (0x00000008)

typedef struct _HTTP_LOGGING_INFO {
    HTTP_PROPERTY_FLAGS Flags;
    ULONG LoggingFlags;
    PCWSTR SoftwareName;
    USHORT SoftwareNameLength;
    USHORT DirectoryNameLength;
    PCWSTR DirectoryName;
    HTTP_LOGGING_TYPE Format;
    ULONG Fields;
    PVOID pExtFields;
    USHORT NumOfExtFields;
    USHORT MaxRecordSize;
    HTTP_LOGGING_ROLLOVER_TYPE RolloverType;
    ULONG RolloverSize;
    PSECURITY_DESCRIPTOR pSecurityDescriptor;
} HTTP_LOGGING_INFO, *PHTTP_LOGGING_INFO;

typedef struct _HTTP_BINDING_INFO {
    HTTP_PROPERTY_FLAGS Flags;
    HANDLE RequestQueueHandle;
} HTTP_BINDING_INFO, *PHTTP_BINDING_INFO;

#endif /* _WIN32_WINNT >= 0x0600 */

#if _WIN32_WINNT >= _WIN32_WINNT_WIN7

typedef enum _HTTP_PROTECTION_LEVEL_TYPE {
    HttpProtectionLevelUnrestricted,
    HttpProtectionLevelEdgeRestricted,
    HttpProtectionLevelRestricted
} HTTP_PROTECTION_LEVEL_TYPE, *PHTTP_PROTECTION_LEVEL_TYPE;

typedef struct _HTTP_PROTECTION_LEVEL_INFO {
    HTTP_PROPERTY_FLAGS Flags;
    HTTP_PROTECTION_LEVEL_TYPE Level;
} HTTP_PROTECTION_LEVEL_INFO, *PHTTP_PROTECTION_LEVEL_INFO;

#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN7 */

#if _WIN32_WINNT >= 0x0600
#define HTTP_CREATE_REQUEST_QUEUE_FLAG_OPEN_EXISTING       (0x00000001)
#define HTTP_CREATE_REQUEST_QUEUE_FLAG_CONTROLLER          (0x00000002)
#define HTTP_CREATE_REQUEST_QUEUE_FLAG_DELEGATION          (0x00000008)
#endif /* _WIN32_WINNT >= 0x0600 */

#define HTTP_RECEIVE_REQUEST_FLAG_COPY_BODY         0x00000001
#define HTTP_RECEIVE_REQUEST_FLAG_FLUSH_BODY        0x00000002

#if _WIN32_WINNT >= 0x0600
#define HTTP_RECEIVE_REQUEST_ENTITY_BODY_FLAG_FILL_BUFFER   0x00000001
#endif /* _WIN32_WINNT >= 0x0600 */

#define HTTP_SEND_RESPONSE_FLAG_DISCONNECT          0x00000001
#define HTTP_SEND_RESPONSE_FLAG_MORE_DATA           0x00000002
#define HTTP_SEND_RESPONSE_FLAG_BUFFER_DATA         0x00000004
#define HTTP_SEND_RESPONSE_FLAG_ENABLE_NAGLING      0x00000008
#define HTTP_SEND_RESPONSE_FLAG_PROCESS_RANGES      0x00000020
#define HTTP_SEND_RESPONSE_FLAG_OPAQUE              0x00000040
#define HTTP_SEND_RESPONSE_FLAG_GOAWAY              0x00000100

#define HTTP_FLUSH_RESPONSE_FLAG_RECURSIVE          0x00000001

typedef ULONGLONG HTTP_OPAQUE_ID, *PHTTP_OPAQUE_ID;

typedef HTTP_OPAQUE_ID HTTP_REQUEST_ID, *PHTTP_REQUEST_ID;
typedef HTTP_OPAQUE_ID HTTP_CONNECTION_ID, *PHTTP_CONNECTION_ID;
typedef HTTP_OPAQUE_ID HTTP_RAW_CONNECTION_ID, *PHTTP_RAW_CONNECTION_ID;

#if _WIN32_WINNT >= 0x0600

typedef HTTP_OPAQUE_ID HTTP_URL_GROUP_ID, *PHTTP_URL_GROUP_ID;
typedef HTTP_OPAQUE_ID HTTP_SERVER_SESSION_ID, *PHTTP_SERVER_SESSION_ID;

typedef HTTP_OPAQUE_ID HTTP_CLIENT_REQUEST_ID, *PHTTP_CLIENT_REQUEST_ID;
typedef HTTP_OPAQUE_ID HTTP_CLIENT_CONNECTION_ID, *PHTTP_CLIENT_CONNECTION_ID;
typedef HTTP_OPAQUE_ID HTTP_CLIENT_STREAM_ID, *PHTTP_CLIENT_STREAM_ID;

#endif /* _WIN32_WINNT >= 0x0600 */

#define HTTP_NULL_ID            (0ui64)
#define HTTP_IS_NULL_ID(pid)    (HTTP_NULL_ID == *(pid))
#define HTTP_SET_NULL_ID(pid)   (*(pid) = HTTP_NULL_ID)

#define HTTP_BYTE_RANGE_TO_EOF ((ULONGLONG)-1)

typedef struct _HTTP_BYTE_RANGE {
    ULARGE_INTEGER StartingOffset;
    ULARGE_INTEGER Length;
} HTTP_BYTE_RANGE, *PHTTP_BYTE_RANGE;

#ifdef HTTP_VERSION
#undef HTTP_VERSION
#endif /* HTTP_VERSION */

typedef struct _HTTP_VERSION {
    USHORT MajorVersion;
    USHORT MinorVersion;
} HTTP_VERSION, *PHTTP_VERSION;

#define HTTP_VERSION_UNKNOWN    { 0, 0 }
#define HTTP_VERSION_0_9        { 0, 9 }
#define HTTP_VERSION_1_0        { 1, 0 }
#define HTTP_VERSION_1_1        { 1, 1 }
#define HTTP_VERSION_2_0        { 2, 0 }
#define HTTP_VERSION_3_0        { 3, 0 }

#define HTTP_SET_VERSION(version, major, minor) \
do { \
    (version).MajorVersion = (major); \
    (version).MinorVersion = (minor); \
} while(0)

#define HTTP_EQUAL_VERSION(version, major, minor) \
    ((version).MajorVersion == (major) && \
     (version).MinorVersion == (minor))

#define HTTP_GREATER_VERSION(version, major, minor) \
    ((version).MajorVersion > (major) ||  \
     ((version).MajorVersion == (major) && \
      (version).MinorVersion > (minor)))

#define HTTP_LESS_VERSION(version, major, minor) \
    ((version).MajorVersion < (major) ||  \
     ((version).MajorVersion == (major) && \
      (version).MinorVersion < (minor)))

#define HTTP_NOT_EQUAL_VERSION(version, major, minor) \
    (!HTTP_EQUAL_VERSION(version, major, minor))

#define HTTP_GREATER_EQUAL_VERSION(version, major, minor) \
    (!HTTP_LESS_VERSION(version, major, minor))

#define HTTP_LESS_EQUAL_VERSION(version, major, minor) \
    (!HTTP_GREATER_VERSION(version, major, minor))

typedef enum _HTTP_URI_SCHEME {
    HttpSchemeHttp,
    HttpSchemeHttps,
    HttpSchemeMaximum
} HTTP_SCHEME, *PHTTP_URI_SCHEME;

typedef enum _HTTP_VERB {
    HttpVerbUnparsed,
    HttpVerbUnknown,
    HttpVerbInvalid,
    HttpVerbOPTIONS,
    HttpVerbGET,
    HttpVerbHEAD,
    HttpVerbPOST,
    HttpVerbPUT,
    HttpVerbDELETE,
    HttpVerbTRACE,
    HttpVerbCONNECT,
    HttpVerbTRACK,
    HttpVerbMOVE,
    HttpVerbCOPY,
    HttpVerbPROPFIND,
    HttpVerbPROPPATCH,
    HttpVerbMKCOL,
    HttpVerbLOCK,
    HttpVerbUNLOCK,
    HttpVerbSEARCH,
    HttpVerbMaximum
} HTTP_VERB, *PHTTP_VERB;

typedef enum _HTTP_HEADER_ID {
    HttpHeaderCacheControl = 0,
    HttpHeaderConnection = 1,
    HttpHeaderDate = 2,
    HttpHeaderKeepAlive = 3,
    HttpHeaderPragma = 4,
    HttpHeaderTrailer = 5,
    HttpHeaderTransferEncoding = 6,
    HttpHeaderUpgrade = 7,
    HttpHeaderVia = 8,
    HttpHeaderWarning = 9,
    HttpHeaderAllow = 10,
    HttpHeaderContentLength = 11,
    HttpHeaderContentType = 12,
    HttpHeaderContentEncoding = 13,
    HttpHeaderContentLanguage = 14,
    HttpHeaderContentLocation = 15,
    HttpHeaderContentMd5 = 16,
    HttpHeaderContentRange = 17,
    HttpHeaderExpires = 18,
    HttpHeaderLastModified = 19,
    HttpHeaderAccept = 20,
    HttpHeaderAcceptCharset = 21,
    HttpHeaderAcceptEncoding = 22,
    HttpHeaderAcceptLanguage = 23,
    HttpHeaderAuthorization = 24,
    HttpHeaderCookie = 25,
    HttpHeaderExpect = 26,
    HttpHeaderFrom = 27,
    HttpHeaderHost = 28,
    HttpHeaderIfMatch = 29,
    HttpHeaderIfModifiedSince = 30,
    HttpHeaderIfNoneMatch = 31,
    HttpHeaderIfRange = 32,
    HttpHeaderIfUnmodifiedSince = 33,
    HttpHeaderMaxForwards = 34,
    HttpHeaderProxyAuthorization = 35,
    HttpHeaderReferer = 36,
    HttpHeaderRange = 37,
    HttpHeaderTe = 38,
    HttpHeaderTranslate = 39,
    HttpHeaderUserAgent = 40,
    HttpHeaderRequestMaximum = 41,
    HttpHeaderAcceptRanges = 20,
    HttpHeaderAge = 21,
    HttpHeaderEtag = 22,
    HttpHeaderLocation = 23,
    HttpHeaderProxyAuthenticate = 24,
    HttpHeaderRetryAfter = 25,
    HttpHeaderServer = 26,
    HttpHeaderSetCookie = 27,
    HttpHeaderVary = 28,
    HttpHeaderWwwAuthenticate = 29,
    HttpHeaderResponseMaximum = 30,
    HttpHeaderMaximum = 41
} HTTP_HEADER_ID, *PHTTP_HEADER_ID;

typedef struct _HTTP_KNOWN_HEADER {
    USHORT RawValueLength;
    PCSTR pRawValue;
} HTTP_KNOWN_HEADER, *PHTTP_KNOWN_HEADER;

typedef struct _HTTP_UNKNOWN_HEADER {
    USHORT NameLength;
    USHORT RawValueLength;
    PCSTR pName;
    PCSTR pRawValue;
} HTTP_UNKNOWN_HEADER, *PHTTP_UNKNOWN_HEADER;

#if _WIN32_WINNT >= 0x0600

typedef enum _HTTP_LOG_DATA_TYPE {
    HttpLogDataTypeFields = 0
} HTTP_LOG_DATA_TYPE, *PHTTP_LOG_DATA_TYPE;

typedef struct _HTTP_LOG_DATA {
    HTTP_LOG_DATA_TYPE Type;
} HTTP_LOG_DATA, *PHTTP_LOG_DATA;

typedef struct _HTTP_LOG_FIELDS_DATA {
    HTTP_LOG_DATA Base;
    USHORT UserNameLength;
    USHORT UriStemLength;
    USHORT ClientIpLength;
    USHORT ServerNameLength;
    USHORT ServiceNameLength;
    USHORT ServerIpLength;
    USHORT MethodLength;
    USHORT UriQueryLength;
    USHORT HostLength;
    USHORT UserAgentLength;
    USHORT CookieLength;
    USHORT ReferrerLength;
    PWCHAR UserName;
    PWCHAR UriStem;
    PCHAR ClientIp;
    PCHAR ServerName;
    PCHAR ServiceName;
    PCHAR ServerIp;
    PCHAR Method;
    PCHAR UriQuery;
    PCHAR Host;
    PCHAR UserAgent;
    PCHAR Cookie;
    PCHAR Referrer;
    USHORT ServerPort;
    USHORT ProtocolStatus;
    ULONG Win32Status;
    HTTP_VERB MethodNum;
    USHORT SubStatus;
} HTTP_LOG_FIELDS_DATA, *PHTTP_LOG_FIELDS_DATA;

#endif /* _WIN32_WINNT >= 0x0600 */

typedef enum _HTTP_DATA_CHUNK_TYPE {
    HttpDataChunkFromMemory,
    HttpDataChunkFromFileHandle,
    HttpDataChunkFromFragmentCache,
    HttpDataChunkFromFragmentCacheEx,
    HttpDataChunkTrailers,
    HttpDataChunkMaximum
} HTTP_DATA_CHUNK_TYPE, *PHTTP_DATA_CHUNK_TYPE;

typedef struct _HTTP_DATA_CHUNK {
    HTTP_DATA_CHUNK_TYPE DataChunkType;
    union {
        struct {
            PVOID pBuffer;
            ULONG BufferLength;
        } FromMemory;
        struct {
            HTTP_BYTE_RANGE ByteRange;
            HANDLE FileHandle;
        } FromFileHandle;
        struct {
            USHORT FragmentNameLength;
            PCWSTR pFragmentName;
        } FromFragmentCache;
        struct {
            HTTP_BYTE_RANGE ByteRange;
            PCWSTR pFragmentName;
        } FromFragmentCacheEx;
        struct {
            USHORT TrailerCount;
            PHTTP_UNKNOWN_HEADER pTrailers;
        } Trailers;
    };
} HTTP_DATA_CHUNK, *PHTTP_DATA_CHUNK;

C_ASSERT(TYPE_ALIGNMENT(HTTP_DATA_CHUNK) == sizeof(ULONGLONG));

typedef struct _HTTP_REQUEST_HEADERS {
    USHORT UnknownHeaderCount;
    PHTTP_UNKNOWN_HEADER pUnknownHeaders;
    USHORT TrailerCount;
    PHTTP_UNKNOWN_HEADER pTrailers;
    HTTP_KNOWN_HEADER KnownHeaders[HttpHeaderRequestMaximum];
} HTTP_REQUEST_HEADERS, *PHTTP_REQUEST_HEADERS;

typedef struct _HTTP_RESPONSE_HEADERS {
    USHORT UnknownHeaderCount;
    PHTTP_UNKNOWN_HEADER pUnknownHeaders;
    USHORT TrailerCount;
    PHTTP_UNKNOWN_HEADER pTrailers;
    HTTP_KNOWN_HEADER KnownHeaders[HttpHeaderResponseMaximum];
} HTTP_RESPONSE_HEADERS, *PHTTP_RESPONSE_HEADERS;

typedef enum _HTTP_DELEGATE_REQUEST_PROPERTY_ID {
    DelegateRequestReservedProperty,
    DelegateRequestDelegateUrlProperty,
} HTTP_DELEGATE_REQUEST_PROPERTY_ID, *PHTTP_DELEGATE_REQUEST_PROPERTY_ID;

typedef struct _HTTP_DELEGATE_REQUEST_PROPERTY_INFO {
    HTTP_DELEGATE_REQUEST_PROPERTY_ID PropertyId;
    ULONG PropertyInfoLength;
    PVOID PropertyInfo;
} HTTP_DELEGATE_REQUEST_PROPERTY_INFO, *PHTTP_DELEGATE_REQUEST_PROPERTY_INFO;

typedef enum _HTTP_CREATE_REQUEST_QUEUE_PROPERTY_ID {
    CreateRequestQueueExternalIdProperty = 1,
    CreateRequestQueueMax
} HTTP_CREATE_REQUEST_QUEUE_PROPERTY_ID, *PHTTP_CREATE_REQUEST_QUEUE_PROPERTY_ID;

typedef struct _HTTP_CREATE_REQUEST_QUEUE_PROPERTY_INFO {
    HTTP_CREATE_REQUEST_QUEUE_PROPERTY_ID PropertyId;
    ULONG PropertyInfoLength;
    PVOID PropertyInfo;
} HTTP_CREATE_REQUEST_QUEUE_PROPERTY_INFO, *PHTTP_CREATE_REQUEST_QUEUE_PROPERTY_INFO;

typedef struct _HTTP_TRANSPORT_ADDRESS {
    PSOCKADDR pRemoteAddress;
    PSOCKADDR pLocalAddress;
} HTTP_TRANSPORT_ADDRESS, *PHTTP_TRANSPORT_ADDRESS;

typedef struct _HTTP_COOKED_URL {
    USHORT FullUrlLength;
    USHORT HostLength;
    USHORT AbsPathLength;
    USHORT QueryStringLength;
    PCWSTR pFullUrl;
    PCWSTR pHost;
    PCWSTR pAbsPath;
    PCWSTR pQueryString;
} HTTP_COOKED_URL, *PHTTP_COOKED_URL;

typedef ULONGLONG HTTP_URL_CONTEXT;

#if _WIN32_WINNT >= 0x0600

#define HTTP_URL_FLAG_REMOVE_ALL  0x00000001

typedef enum _HTTP_AUTH_STATUS {
    HttpAuthStatusSuccess,
    HttpAuthStatusNotAuthenticated,
    HttpAuthStatusFailure
} HTTP_AUTH_STATUS, *PHTTP_AUTH_STATUS;

typedef enum _HTTP_REQUEST_AUTH_TYPE {
    HttpRequestAuthTypeNone = 0,
    HttpRequestAuthTypeBasic,
    HttpRequestAuthTypeDigest,
    HttpRequestAuthTypeNTLM,
    HttpRequestAuthTypeNegotiate,
    HttpRequestAuthTypeKerberos
} HTTP_REQUEST_AUTH_TYPE, *PHTTP_REQUEST_AUTH_TYPE;

#endif /* _WIN32_WINNT >= 0x0600 */

typedef struct _HTTP_SSL_CLIENT_CERT_INFO {
    ULONG CertFlags;
    ULONG CertEncodedSize;
    PUCHAR pCertEncoded;
    HANDLE Token;
    BOOLEAN CertDeniedByMapper;
} HTTP_SSL_CLIENT_CERT_INFO, *PHTTP_SSL_CLIENT_CERT_INFO;

#if _WIN32_WINNT >= _WIN32_WINNT_WIN7
#define HTTP_RECEIVE_SECURE_CHANNEL_TOKEN  0x1
#define HTTP_RECEIVE_FULL_CHAIN  0x2
#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN7 */

typedef struct _HTTP_SSL_INFO {
    USHORT ServerCertKeySize;
    USHORT ConnectionKeySize;
    ULONG ServerCertIssuerSize;
    ULONG ServerCertSubjectSize;
    PCSTR pServerCertIssuer;
    PCSTR pServerCertSubject;
    PHTTP_SSL_CLIENT_CERT_INFO pClientCertInfo;
    ULONG SslClientCertNegotiated;
} HTTP_SSL_INFO, *PHTTP_SSL_INFO;

typedef struct _HTTP_SSL_PROTOCOL_INFO {
    ULONG Protocol;
    ULONG CipherType;
    ULONG CipherStrength;
    ULONG HashType;
    ULONG HashStrength;
    ULONG KeyExchangeType;
    ULONG KeyExchangeStrength;
} HTTP_SSL_PROTOCOL_INFO, *PHTTP_SSL_PROTOCOL_INFO;

typedef enum _HTTP_REQUEST_SIZING_TYPE {
    HttpRequestSizingTypeTlsHandshakeLeg1ClientData,
    HttpRequestSizingTypeTlsHandshakeLeg1ServerData,
    HttpRequestSizingTypeTlsHandshakeLeg2ClientData,
    HttpRequestSizingTypeTlsHandshakeLeg2ServerData,
    HttpRequestSizingTypeHeaders,
    HttpRequestSizingTypeMax
} HTTP_REQUEST_SIZING_TYPE, *PHTTP_REQUEST_SIZING_TYPE;

#define HTTP_REQUEST_SIZING_INFO_FLAG_TCP_FAST_OPEN          0x00000001
#define HTTP_REQUEST_SIZING_INFO_FLAG_TLS_SESSION_RESUMPTION 0x00000002
#define HTTP_REQUEST_SIZING_INFO_FLAG_TLS_FALSE_START        0x00000004
#define HTTP_REQUEST_SIZING_INFO_FLAG_FIRST_REQUEST          0x00000008

typedef struct _HTTP_REQUEST_SIZING_INFO {
    ULONGLONG Flags;
    ULONG RequestIndex;
    ULONG RequestSizingCount;
    ULONGLONG RequestSizing[HttpRequestSizingTypeMax];
} HTTP_REQUEST_SIZING_INFO, *PHTTP_REQUEST_SIZING_INFO;

typedef enum _HTTP_REQUEST_TIMING_TYPE {
    HttpRequestTimingTypeConnectionStart,
    HttpRequestTimingTypeDataStart,
    HttpRequestTimingTypeTlsCertificateLoadStart,
    HttpRequestTimingTypeTlsCertificateLoadEnd,
    HttpRequestTimingTypeTlsHandshakeLeg1Start,
    HttpRequestTimingTypeTlsHandshakeLeg1End,
    HttpRequestTimingTypeTlsHandshakeLeg2Start,
    HttpRequestTimingTypeTlsHandshakeLeg2End,
    HttpRequestTimingTypeTlsAttributesQueryStart,
    HttpRequestTimingTypeTlsAttributesQueryEnd,
    HttpRequestTimingTypeTlsClientCertQueryStart,
    HttpRequestTimingTypeTlsClientCertQueryEnd,
    HttpRequestTimingTypeHttp2StreamStart,
    HttpRequestTimingTypeHttp2HeaderDecodeStart,
    HttpRequestTimingTypeHttp2HeaderDecodeEnd,
    HttpRequestTimingTypeRequestHeaderParseStart,
    HttpRequestTimingTypeRequestHeaderParseEnd,
    HttpRequestTimingTypeRequestRoutingStart,
    HttpRequestTimingTypeRequestRoutingEnd,
    HttpRequestTimingTypeRequestQueuedForInspection,
    HttpRequestTimingTypeRequestDeliveredForInspection,
    HttpRequestTimingTypeRequestReturnedAfterInspection,
    HttpRequestTimingTypeRequestQueuedForDelegation,
    HttpRequestTimingTypeRequestDeliveredForDelegation,
    HttpRequestTimingTypeRequestReturnedAfterDelegation,
    HttpRequestTimingTypeRequestQueuedForIO,
    HttpRequestTimingTypeRequestDeliveredForIO,
    HttpRequestTimingTypeHttp3StreamStart,
    HttpRequestTimingTypeHttp3HeaderDecodeStart,
    HttpRequestTimingTypeHttp3HeaderDecodeEnd,
    HttpRequestTimingTypeMax
} HTTP_REQUEST_TIMING_TYPE, *PHTTP_REQUEST_TIMING_TYPE;

typedef struct _HTTP_REQUEST_TIMING_INFO {
    ULONG RequestTimingCount;
    ULONGLONG RequestTiming[HttpRequestTimingTypeMax];
} HTTP_REQUEST_TIMING_INFO, *PHTTP_REQUEST_TIMING_INFO;

#if _WIN32_WINNT >= 0x0600

typedef enum _HTTP_REQUEST_INFO_TYPE {
    HttpRequestInfoTypeAuth,
    HttpRequestInfoTypeChannelBind,
    HttpRequestInfoTypeSslProtocol,
    HttpRequestInfoTypeSslTokenBindingDraft,
    HttpRequestInfoTypeSslTokenBinding,
    HttpRequestInfoTypeRequestTiming,
    HttpRequestInfoTypeTcpInfoV0,
    HttpRequestInfoTypeRequestSizing,
    HttpRequestInfoTypeQuicStats,
    HttpRequestInfoTypeTcpInfoV1
} HTTP_REQUEST_INFO_TYPE, *PHTTP_REQUEST_INFO_TYPE;

typedef struct _HTTP_REQUEST_INFO {
    HTTP_REQUEST_INFO_TYPE InfoType;
    ULONG InfoLength;
    PVOID pInfo;
} HTTP_REQUEST_INFO, *PHTTP_REQUEST_INFO;

#ifndef __SECSTATUS_DEFINED__
typedef LONG SECURITY_STATUS;
#define __SECSTATUS_DEFINED__
#endif /* __SECSTATUS_DEFINED__ */

#define HTTP_REQUEST_AUTH_FLAG_TOKEN_FOR_CACHED_CRED (0x00000001)

typedef struct _HTTP_REQUEST_AUTH_INFO {
    HTTP_AUTH_STATUS AuthStatus;
    SECURITY_STATUS SecStatus;
    ULONG Flags;
    HTTP_REQUEST_AUTH_TYPE AuthType;
    HANDLE AccessToken;
    ULONG ContextAttributes;
    ULONG PackedContextLength;
    ULONG PackedContextType;
    PVOID PackedContext;
    ULONG MutualAuthDataLength;
    PCHAR pMutualAuthData;
    USHORT PackageNameLength;
    PWSTR pPackageName;
} HTTP_REQUEST_AUTH_INFO, *PHTTP_REQUEST_AUTH_INFO;

#endif /* _WIN32_WINNT >= 0x0600 */

typedef struct _HTTP_REQUEST_V1 {
    ULONG Flags;
    HTTP_CONNECTION_ID ConnectionId;
    HTTP_REQUEST_ID RequestId;
    HTTP_URL_CONTEXT UrlContext;
    HTTP_VERSION Version;
    HTTP_VERB Verb;
    USHORT UnknownVerbLength;
    USHORT RawUrlLength;
    PCSTR pUnknownVerb;
    PCSTR pRawUrl;
    HTTP_COOKED_URL CookedUrl;
    HTTP_TRANSPORT_ADDRESS Address;
    HTTP_REQUEST_HEADERS Headers;
    ULONGLONG BytesReceived;
    USHORT EntityChunkCount;
    PHTTP_DATA_CHUNK pEntityChunks;
    HTTP_RAW_CONNECTION_ID RawConnectionId;
    PHTTP_SSL_INFO pSslInfo;
} HTTP_REQUEST_V1, *PHTTP_REQUEST_V1;

#if _WIN32_WINNT >= 0x0600

typedef struct _HTTP_REQUEST_V2 {
    struct _HTTP_REQUEST_V1;
    USHORT RequestInfoCount;
    PHTTP_REQUEST_INFO pRequestInfo;
} HTTP_REQUEST_V2, *PHTTP_REQUEST_V2;

typedef HTTP_REQUEST_V2 HTTP_REQUEST;

#else /* _WIN32_WINNT < 0x0600 */

typedef HTTP_REQUEST_V1 HTTP_REQUEST;

#endif /* _WIN32_WINNT < 0x0600 */

typedef HTTP_REQUEST * PHTTP_REQUEST;

#define HTTP_REQUEST_FLAG_MORE_ENTITY_BODY_EXISTS   0x00000001
#define HTTP_REQUEST_FLAG_IP_ROUTED                 0x00000002
#define HTTP_REQUEST_FLAG_HTTP2                     0x00000004
#define HTTP_REQUEST_FLAG_HTTP3                     0x00000008

typedef struct _HTTP_RESPONSE_V1 {
    ULONG Flags;
    HTTP_VERSION Version;
    USHORT StatusCode;
    USHORT ReasonLength;
    PCSTR pReason;
    HTTP_RESPONSE_HEADERS Headers;
    USHORT EntityChunkCount;
    PHTTP_DATA_CHUNK pEntityChunks;
} HTTP_RESPONSE_V1, *PHTTP_RESPONSE_V1;

#if _WIN32_WINNT >= 0x0600

#define HTTP_RESPONSE_FLAG_MULTIPLE_ENCODINGS_AVAILABLE 0x00000001
#define HTTP_RESPONSE_FLAG_MORE_ENTITY_BODY_EXISTS   0x00000002

typedef enum _HTTP_RESPONSE_INFO_TYPE {
    HttpResponseInfoTypeMultipleKnownHeaders,
    HttpResponseInfoTypeAuthenticationProperty,
    HttpResponseInfoTypeQoSProperty,
    HttpResponseInfoTypeChannelBind
} HTTP_RESPONSE_INFO_TYPE, PHTTP_RESPONSE_INFO_TYPE;

typedef struct _HTTP_RESPONSE_INFO {
    HTTP_RESPONSE_INFO_TYPE Type;
    ULONG Length;
    PVOID pInfo;
} HTTP_RESPONSE_INFO, *PHTTP_RESPONSE_INFO;

#define HTTP_RESPONSE_INFO_FLAGS_PRESERVE_ORDER         0x00000001

typedef struct _HTTP_MULTIPLE_KNOWN_HEADERS {
    HTTP_HEADER_ID HeaderId;
    ULONG Flags;
    USHORT KnownHeaderCount;
    PHTTP_KNOWN_HEADER KnownHeaders;
} HTTP_MULTIPLE_KNOWN_HEADERS, *PHTTP_MULTIPLE_KNOWN_HEADERS;

typedef struct _HTTP_RESPONSE_V2 {
    struct _HTTP_RESPONSE_V1;
    USHORT ResponseInfoCount;
    PHTTP_RESPONSE_INFO pResponseInfo;
} HTTP_RESPONSE_V2, *PHTTP_RESPONSE_V2;

typedef HTTP_RESPONSE_V2 HTTP_RESPONSE;

#else /* _WIN32_WINNT < 0x0600 */

typedef HTTP_RESPONSE_V1 HTTP_RESPONSE;

#endif /* _WIN32_WINNT < 0x0600 */

typedef HTTP_RESPONSE *PHTTP_RESPONSE;

typedef struct _HTTPAPI_VERSION {
    USHORT HttpApiMajorVersion;
    USHORT HttpApiMinorVersion;
} HTTPAPI_VERSION, *PHTTPAPI_VERSION;

#if _WIN32_WINNT >= 0x0600
#define HTTPAPI_VERSION_2  { 2, 0 }
#endif /* _WIN32_WINNT >= 0x0600 */

#define HTTPAPI_VERSION_1  { 1, 0 }

#define HTTPAPI_EQUAL_VERSION(version, major, minor) \
    ((version).HttpApiMajorVersion == (major) && \
     (version).HttpApiMinorVersion == (minor))

#define HTTPAPI_GREATER_VERSION(version, major, minor) \
    ((version).HttpApiMajorVersion > (major) || \
     ((version).HttpApiMajorVersion == (major) && \
      (version).HttpApiMinorVersion > (minor)))

#define HTTPAPI_LESS_VERSION(version, major, minor) \
    ((version).HttpApiMajorVersion < (major) || \
     ((version).HttpApiMajorVersion == (major) && \
      (version).HttpApiMinorVersion < (minor)))

#define HTTPAPI_VERSION_GREATER_OR_EQUAL( version, major, minor) \
    (!HTTPAPI_LESS_VERSION(version, major, minor))

typedef enum _HTTP_CACHE_POLICY_TYPE {
    HttpCachePolicyNocache,
    HttpCachePolicyUserInvalidates,
    HttpCachePolicyTimeToLive,
    HttpCachePolicyMaximum
} HTTP_CACHE_POLICY_TYPE, *PHTTP_CACHE_POLICY_TYPE;

typedef struct _HTTP_CACHE_POLICY {
    HTTP_CACHE_POLICY_TYPE Policy;
    ULONG SecondsToLive;
} HTTP_CACHE_POLICY, *PHTTP_CACHE_POLICY;

typedef enum _HTTP_SERVICE_CONFIG_ID {
    HttpServiceConfigIPListenList,
    HttpServiceConfigSSLCertInfo,
    HttpServiceConfigUrlAclInfo,
    HttpServiceConfigTimeout,
    HttpServiceConfigCache,
#if _WIN32_WINNT >= _WIN32_WINNT_WIN8
    HttpServiceConfigSslSniCertInfo,
    HttpServiceConfigSslCcsCertInfo,
#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN8 */
#if _WIN32_WINNT >= _WIN32_WINNT_WIN10
    HttpServiceConfigSetting,
#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN10 */
    HttpServiceConfigSslCertInfoEx,
    HttpServiceConfigSslSniCertInfoEx,
    HttpServiceConfigSslCcsCertInfoEx,
    HttpServiceConfigSslScopedCcsCertInfo,
    HttpServiceConfigSslScopedCcsCertInfoEx,
    HttpServiceConfigMax
} HTTP_SERVICE_CONFIG_ID, *PHTTP_SERVICE_CONFIG_ID;

typedef enum _HTTP_SERVICE_CONFIG_QUERY_TYPE {
    HttpServiceConfigQueryExact,
    HttpServiceConfigQueryNext,
    HttpServiceConfigQueryMax
} HTTP_SERVICE_CONFIG_QUERY_TYPE, *PHTTP_SERVICE_CONFIG_QUERY_TYPE;

typedef struct _HTTP_SERVICE_CONFIG_SSL_KEY {
    PSOCKADDR pIpPort;
} HTTP_SERVICE_CONFIG_SSL_KEY, *PHTTP_SERVICE_CONFIG_SSL_KEY;

typedef struct _HTTP_SERVICE_CONFIG_SSL_KEY_EX {
    SOCKADDR_STORAGE IpPort;
} HTTP_SERVICE_CONFIG_SSL_KEY_EX, *PHTTP_SERVICE_CONFIG_SSL_KEY_EX;

#if _WIN32_WINNT >= _WIN32_WINNT_WIN8

typedef struct _HTTP_SERVICE_CONFIG_SSL_SNI_KEY {
    SOCKADDR_STORAGE IpPort;
    PWSTR Host;
} HTTP_SERVICE_CONFIG_SSL_SNI_KEY, *PHTTP_SERVICE_CONFIG_SSL_SNI_KEY;

typedef struct _HTTP_SERVICE_CONFIG_SSL_CCS_KEY {
    SOCKADDR_STORAGE LocalAddress;
} HTTP_SERVICE_CONFIG_SSL_CCS_KEY, *PHTTP_SERVICE_CONFIG_SSL_CCS_KEY;

#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN8 */

typedef struct _HTTP_SERVICE_CONFIG_SSL_PARAM {
    ULONG SslHashLength;
    PVOID pSslHash;
    GUID AppId;
    PWSTR pSslCertStoreName;
    DWORD DefaultCertCheckMode;
    DWORD DefaultRevocationFreshnessTime;
    DWORD DefaultRevocationUrlRetrievalTimeout;
    PWSTR pDefaultSslCtlIdentifier;
    PWSTR pDefaultSslCtlStoreName;
    DWORD DefaultFlags;
} HTTP_SERVICE_CONFIG_SSL_PARAM, *PHTTP_SERVICE_CONFIG_SSL_PARAM;

typedef enum _HTTP_SSL_SERVICE_CONFIG_EX_PARAM_TYPE {
    ExParamTypeHttp2Window,
    ExParamTypeHttp2SettingsLimits,
    ExParamTypeHttpPerformance,
    ExParamTypeTlsRestrictions,
    ExParamTypeErrorHeaders,
    ExParamTypeTlsSessionTicketKeys,
    ExParamTypeMax
} HTTP_SSL_SERVICE_CONFIG_EX_PARAM_TYPE, *PHTTP_SSL_SERVICE_CONFIG_EX_PARAM_TYPE;

typedef struct _HTTP2_WINDOW_SIZE_PARAM {
    DWORD Http2ReceiveWindowSize;
} HTTP2_WINDOW_SIZE_PARAM, *PHTTP2_WINDOW_SIZE_PARAM;

typedef struct _HTTP2_SETTINGS_LIMITS_PARAM {
    DWORD Http2MaxSettingsPerFrame;
    DWORD Http2MaxSettingsPerMinute;
} HTTP2_SETTINGS_LIMITS_PARAM, *PHTTP2_SETTINGS_LIMITS_PARAM;

typedef enum _HTTP_PERFORMANCE_PARAM_TYPE {
    PerformanceParamSendBufferingFlags,
    PerformanceParamAggressiveICW,
    PerformanceParamMaxSendBufferSize,
    PerformanceParamMaxConcurrentClientStreams,
    PerformanceParamMaxReceiveBufferSize,
    PerformanceParamDecryptOnSspiThread,
    PerformanceParamMax,
} HTTP_PERFORMANCE_PARAM_TYPE, *PHTTP_PERFORMANCE_PARAM_TYPE;

typedef struct _HTTP_PERFORMANCE_PARAM {
    HTTP_PERFORMANCE_PARAM_TYPE Type;
    ULONG BufferSize;
    PVOID Buffer;
} HTTP_PERFORMANCE_PARAM, *PHTTP_PERFORMANCE_PARAM;

typedef struct _HTTP_TLS_RESTRICTIONS_PARAM {
    ULONG RestrictionCount;
    PVOID TlsRestrictions;
} HTTP_TLS_RESTRICTIONS_PARAM, *PHTTP_TLS_RESTRICTIONS_PARAM;

typedef struct _HTTP_ERROR_HEADERS_PARAM {
    USHORT StatusCode;
    USHORT HeaderCount;
    PHTTP_UNKNOWN_HEADER Headers;
} HTTP_ERROR_HEADERS_PARAM, *PHTTP_ERROR_HEADERS_PARAM;

typedef struct _HTTP_TLS_SESSION_TICKET_KEYS_PARAM {
    ULONG SessionTicketKeyCount;
    PVOID SessionTicketKeys;
} HTTP_TLS_SESSION_TICKET_KEYS_PARAM, *PHTTP_TLS_SESSION_TICKET_KEYS_PARAM;

typedef struct _HTTP_SERVICE_CONFIG_SSL_PARAM_EX {
    HTTP_SSL_SERVICE_CONFIG_EX_PARAM_TYPE ParamType;
    ULONGLONG Flags;
    union {
        HTTP2_WINDOW_SIZE_PARAM Http2WindowSizeParam;
        HTTP2_SETTINGS_LIMITS_PARAM Http2SettingsLimitsParam;
        HTTP_PERFORMANCE_PARAM HttpPerformanceParam;
        HTTP_TLS_RESTRICTIONS_PARAM HttpTlsRestrictionsParam;
        HTTP_ERROR_HEADERS_PARAM HttpErrorHeadersParam;
        HTTP_TLS_SESSION_TICKET_KEYS_PARAM HttpTlsSessionTicketKeysParam;
    };
} HTTP_SERVICE_CONFIG_SSL_PARAM_EX, *PHTTP_SERVICE_CONFIG_SSL_PARAM_EX;

#define HTTP_SERVICE_CONFIG_SSL_FLAG_USE_DS_MAPPER              0x00000001
#define HTTP_SERVICE_CONFIG_SSL_FLAG_NEGOTIATE_CLIENT_CERT      0x00000002
#if _WIN32_WINNT < 0x0600
#define HTTP_SERVICE_CONFIG_SSL_FLAG_NO_RAW_FILTER              0x00000004
#endif /*  _WIN32_WINNT < 0x0600 */
#define HTTP_SERVICE_CONFIG_SSL_FLAG_REJECT                     0x00000008

#define HTTP_SERVICE_CONFIG_SSL_FLAG_DISABLE_HTTP2              0x00000010
#define HTTP_SERVICE_CONFIG_SSL_FLAG_DISABLE_QUIC               0x00000020
#define HTTP_SERVICE_CONFIG_SSL_FLAG_DISABLE_TLS13              0x00000040

#define HTTP_SERVICE_CONFIG_SSL_FLAG_DISABLE_OCSP_STAPLING      0x00000080
#define HTTP_SERVICE_CONFIG_SSL_FLAG_ENABLE_TOKEN_BINDING       0x00000100
#define HTTP_SERVICE_CONFIG_SSL_FLAG_LOG_EXTENDED_EVENTS        0x00000200
#define HTTP_SERVICE_CONFIG_SSL_FLAG_DISABLE_LEGACY_TLS         0x00000400
#define HTTP_SERVICE_CONFIG_SSL_FLAG_ENABLE_SESSION_TICKET      0x00000800
#define HTTP_SERVICE_CONFIG_SSL_FLAG_DISABLE_TLS12              0x00001000
#define HTTP_SERVICE_CONFIG_SSL_FLAG_ENABLE_CLIENT_CORRELATION  0x00002000
#define HTTP_SERVICE_CONFIG_SSL_FLAG_DISABLE_SESSION_ID         0x00004000

typedef struct _HTTP_SERVICE_CONFIG_SSL_SET {
    HTTP_SERVICE_CONFIG_SSL_KEY KeyDesc;
    HTTP_SERVICE_CONFIG_SSL_PARAM ParamDesc;
} HTTP_SERVICE_CONFIG_SSL_SET, *PHTTP_SERVICE_CONFIG_SSL_SET;

#if _WIN32_WINNT >= _WIN32_WINNT_WIN8

typedef struct _HTTP_SERVICE_CONFIG_SSL_SNI_SET {
    HTTP_SERVICE_CONFIG_SSL_SNI_KEY KeyDesc;
    HTTP_SERVICE_CONFIG_SSL_PARAM ParamDesc;
} HTTP_SERVICE_CONFIG_SSL_SNI_SET, *PHTTP_SERVICE_CONFIG_SSL_SNI_SET;

typedef struct _HTTP_SERVICE_CONFIG_SSL_CCS_SET {
    HTTP_SERVICE_CONFIG_SSL_CCS_KEY KeyDesc;
    HTTP_SERVICE_CONFIG_SSL_PARAM ParamDesc;
} HTTP_SERVICE_CONFIG_SSL_CCS_SET, *PHTTP_SERVICE_CONFIG_SSL_CCS_SET;

typedef struct _HTTP_SERVICE_CONFIG_SSL_SET_EX {
    HTTP_SERVICE_CONFIG_SSL_KEY_EX KeyDesc;
    HTTP_SERVICE_CONFIG_SSL_PARAM_EX ParamDesc;
} HTTP_SERVICE_CONFIG_SSL_SET_EX, *PHTTP_SERVICE_CONFIG_SSL_SET_EX;

typedef struct _HTTP_SERVICE_CONFIG_SSL_SNI_SET_EX {
    HTTP_SERVICE_CONFIG_SSL_SNI_KEY KeyDesc;
    HTTP_SERVICE_CONFIG_SSL_PARAM_EX ParamDesc;
} HTTP_SERVICE_CONFIG_SSL_SNI_SET_EX, *PHTTP_SERVICE_CONFIG_SSL_SNI_SET_EX;

typedef struct _HTTP_SERVICE_CONFIG_SSL_CCS_SET_EX {
    HTTP_SERVICE_CONFIG_SSL_CCS_KEY KeyDesc;
    HTTP_SERVICE_CONFIG_SSL_PARAM_EX ParamDesc;
} HTTP_SERVICE_CONFIG_SSL_CCS_SET_EX, *PHTTP_SERVICE_CONFIG_SSL_CCS_SET_EX;

#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN8 */

typedef struct _HTTP_SERVICE_CONFIG_SSL_QUERY {
    HTTP_SERVICE_CONFIG_QUERY_TYPE QueryDesc;
    HTTP_SERVICE_CONFIG_SSL_KEY KeyDesc;
    DWORD dwToken;
} HTTP_SERVICE_CONFIG_SSL_QUERY, *PHTTP_SERVICE_CONFIG_SSL_QUERY;

#if _WIN32_WINNT >= _WIN32_WINNT_WIN8

typedef struct _HTTP_SERVICE_CONFIG_SSL_SNI_QUERY {
    HTTP_SERVICE_CONFIG_QUERY_TYPE QueryDesc;
    HTTP_SERVICE_CONFIG_SSL_SNI_KEY KeyDesc;
    DWORD dwToken;
} HTTP_SERVICE_CONFIG_SSL_SNI_QUERY, *PHTTP_SERVICE_CONFIG_SSL_SNI_QUERY;

typedef struct _HTTP_SERVICE_CONFIG_SSL_CCS_QUERY {
    HTTP_SERVICE_CONFIG_QUERY_TYPE QueryDesc;
    HTTP_SERVICE_CONFIG_SSL_CCS_KEY KeyDesc;
    DWORD dwToken;
} HTTP_SERVICE_CONFIG_SSL_CCS_QUERY, *PHTTP_SERVICE_CONFIG_SSL_CCS_QUERY;

typedef struct _HTTP_SERVICE_CONFIG_SSL_QUERY_EX {
    HTTP_SERVICE_CONFIG_QUERY_TYPE QueryDesc;
    HTTP_SERVICE_CONFIG_SSL_KEY_EX KeyDesc;
    DWORD dwToken;
    HTTP_SSL_SERVICE_CONFIG_EX_PARAM_TYPE ParamType;
} HTTP_SERVICE_CONFIG_SSL_QUERY_EX, *PHTTP_SERVICE_CONFIG_SSL_QUERY_EX;

typedef struct _HTTP_SERVICE_CONFIG_SSL_SNI_QUERY_EX {
    HTTP_SERVICE_CONFIG_QUERY_TYPE QueryDesc;
    HTTP_SERVICE_CONFIG_SSL_SNI_KEY KeyDesc;
    DWORD dwToken;
    HTTP_SSL_SERVICE_CONFIG_EX_PARAM_TYPE ParamType;
} HTTP_SERVICE_CONFIG_SSL_SNI_QUERY_EX, *PHTTP_SERVICE_CONFIG_SSL_SNI_QUERY_EX;

typedef struct _HTTP_SERVICE_CONFIG_SSL_CCS_QUERY_EX {
    HTTP_SERVICE_CONFIG_QUERY_TYPE QueryDesc;
    HTTP_SERVICE_CONFIG_SSL_CCS_KEY KeyDesc;
    DWORD dwToken;
    HTTP_SSL_SERVICE_CONFIG_EX_PARAM_TYPE ParamType;
} HTTP_SERVICE_CONFIG_SSL_CCS_QUERY_EX, *PHTTP_SERVICE_CONFIG_SSL_CCS_QUERY_EX;

#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN8 */

typedef struct _HTTP_SERVICE_CONFIG_IP_LISTEN_PARAM {
    USHORT AddrLength;
    PSOCKADDR pAddress;
} HTTP_SERVICE_CONFIG_IP_LISTEN_PARAM, *PHTTP_SERVICE_CONFIG_IP_LISTEN_PARAM;

typedef struct _HTTP_SERVICE_CONFIG_IP_LISTEN_QUERY {
    ULONG AddrCount;
    SOCKADDR_STORAGE AddrList[ANYSIZE_ARRAY];
} HTTP_SERVICE_CONFIG_IP_LISTEN_QUERY, *PHTTP_SERVICE_CONFIG_IP_LISTEN_QUERY;

typedef struct _HTTP_SERVICE_CONFIG_URLACL_KEY {
    PWSTR pUrlPrefix;

} HTTP_SERVICE_CONFIG_URLACL_KEY, *PHTTP_SERVICE_CONFIG_URLACL_KEY;

typedef struct _HTTP_SERVICE_CONFIG_URLACL_PARAM {
    PWSTR pStringSecurityDescriptor;
} HTTP_SERVICE_CONFIG_URLACL_PARAM, *PHTTP_SERVICE_CONFIG_URLACL_PARAM;

typedef struct _HTTP_SERVICE_CONFIG_URLACL_SET {
    HTTP_SERVICE_CONFIG_URLACL_KEY KeyDesc;
    HTTP_SERVICE_CONFIG_URLACL_PARAM ParamDesc;
} HTTP_SERVICE_CONFIG_URLACL_SET, *PHTTP_SERVICE_CONFIG_URLACL_SET;

typedef struct _HTTP_SERVICE_CONFIG_URLACL_QUERY {
    HTTP_SERVICE_CONFIG_QUERY_TYPE QueryDesc;
    HTTP_SERVICE_CONFIG_URLACL_KEY KeyDesc;
    DWORD dwToken;
} HTTP_SERVICE_CONFIG_URLACL_QUERY, *PHTTP_SERVICE_CONFIG_URLACL_QUERY;

typedef enum _HTTP_SERVICE_CONFIG_CACHE_KEY {
    MaxCacheResponseSize = 0,
    CacheRangeChunkSize
} HTTP_SERVICE_CONFIG_CACHE_KEY, *PHTTP_SERVICE_CONFIG_CACHE_KEY;

typedef ULONG HTTP_SERVICE_CONFIG_CACHE_PARAM,
*PHTTP_SERVICE_CONFIG_CACHE_PARAM;

typedef struct {
    HTTP_SERVICE_CONFIG_CACHE_KEY KeyDesc;
    HTTP_SERVICE_CONFIG_CACHE_PARAM ParamDesc;
} HTTP_SERVICE_CONFIG_CACHE_SET, *PHTTP_SERVICE_CONFIG_CACHE_SET;

typedef enum _HTTP_REQUEST_PROPERTY {
    HttpRequestPropertyIsb,
    HttpRequestPropertyTcpInfoV0,
    HttpRequestPropertyQuicStats,
    HttpRequestPropertyTcpInfoV1,
    HttpRequestPropertySni,
    HttpRequestPropertyStreamError,
    HttpRequestPropertyWskApiTimings,
    HttpRequestPropertyQuicApiTimings
} HTTP_REQUEST_PROPERTY, *PHTTP_REQUEST_PROPERTY;

typedef struct _HTTP_QUERY_REQUEST_QUALIFIER_TCP {
    ULONGLONG Freshness;
} HTTP_QUERY_REQUEST_QUALIFIER_TCP, *PHTTP_QUERY_REQUEST_QUALIFIER_TCP;

typedef struct _HTTP_QUERY_REQUEST_QUALIFIER_QUIC {
    ULONGLONG Freshness;
} HTTP_QUERY_REQUEST_QUALIFIER_QUIC, *PHTTP_QUERY_REQUEST_QUALIFIER_QUIC;

#define HTTP_REQUEST_PROPERTY_SNI_HOST_MAX_LENGTH 255

#define HTTP_REQUEST_PROPERTY_SNI_FLAG_SNI_USED 0x00000001
#define HTTP_REQUEST_PROPERTY_SNI_FLAG_NO_SNI   0x00000002

typedef struct _HTTP_REQUEST_PROPERTY_SNI {
    WCHAR Hostname[HTTP_REQUEST_PROPERTY_SNI_HOST_MAX_LENGTH + 1];
    ULONG Flags;
} HTTP_REQUEST_PROPERTY_SNI, *PHTTP_REQUEST_PROPERTY_SNI;

typedef struct _HTTP_REQUEST_PROPERTY_STREAM_ERROR {
    ULONG ErrorCode;
} HTTP_REQUEST_PROPERTY_STREAM_ERROR, *PHTTP_REQUEST_PROPERTY_STREAM_ERROR;

typedef struct _HTTP_WSK_API_TIMINGS {
    ULONGLONG ConnectCount;
    ULONGLONG ConnectSum;
    ULONGLONG DisconnectCount;
    ULONGLONG DisconnectSum;
    ULONGLONG SendCount;
    ULONGLONG SendSum;
    ULONGLONG ReceiveCount;
    ULONGLONG ReceiveSum;
    ULONGLONG ReleaseCount;
    ULONGLONG ReleaseSum;
    ULONGLONG ControlSocketCount;
    ULONGLONG ControlSocketSum;
} HTTP_WSK_API_TIMINGS, *PHTTP_WSK_API_TIMINGS;

typedef struct _HTTP_QUIC_STREAM_API_TIMINGS {
    ULONGLONG OpenCount;
    ULONGLONG OpenSum;
    ULONGLONG CloseCount;
    ULONGLONG CloseSum;
    ULONGLONG StartCount;
    ULONGLONG StartSum;
    ULONGLONG ShutdownCount;
    ULONGLONG ShutdownSum;
    ULONGLONG SendCount;
    ULONGLONG SendSum;
    ULONGLONG ReceiveSetEnabledCount;
    ULONGLONG ReceiveSetEnabledSum;
    ULONGLONG GetParamCount;
    ULONGLONG GetParamSum;
    ULONGLONG SetParamCount;
    ULONGLONG SetParamSum;
    ULONGLONG SetCallbackHandlerCount;
    ULONGLONG SetCallbackHandlerSum;
} HTTP_QUIC_STREAM_API_TIMINGS, *PHTTP_QUIC_STREAM_API_TIMINGS;

typedef struct _HTTP_QUIC_CONNECTION_API_TIMINGS {
    ULONGLONG OpenTime;
    ULONGLONG CloseTime;
    ULONGLONG StartTime;
    ULONGLONG ShutdownTime;
    ULONGLONG SecConfigCreateTime;
    ULONGLONG SecConfigDeleteTime;
    ULONGLONG GetParamCount;
    ULONGLONG GetParamSum;
    ULONGLONG SetParamCount;
    ULONGLONG SetParamSum;
    ULONGLONG SetCallbackHandlerCount;
    ULONGLONG SetCallbackHandlerSum;
    HTTP_QUIC_STREAM_API_TIMINGS ControlStreamTimings;
} HTTP_QUIC_CONNECTION_API_TIMINGS, *PHTTP_QUIC_CONNECTION_API_TIMINGS;

typedef struct _HTTP_QUIC_API_TIMINGS {
    HTTP_QUIC_CONNECTION_API_TIMINGS ConnectionTimings;
    HTTP_QUIC_STREAM_API_TIMINGS StreamTimings;
} HTTP_QUIC_API_TIMINGS, *PHTTP_QUIC_API_TIMINGS;

typedef struct _HTTP_QUIC_STREAM_REQUEST_STATS {
    ULONGLONG StreamWaitStart;
    ULONGLONG StreamWaitEnd;
    ULONGLONG RequestHeadersCompressionStart;
    ULONGLONG RequestHeadersCompressionEnd;
    ULONGLONG ResponseHeadersDecompressionStart;
    ULONGLONG ResponseHeadersDecompressionEnd;
    ULONGLONG RequestHeadersCompressedSize;
    ULONGLONG ResponseHeadersCompressedSize;
} HTTP_QUIC_STREAM_REQUEST_STATS, *PHTTP_QUIC_STREAM_REQUEST_STATS;

#define HTTP_QUIC_KEEPALIVE_TIMEOUT_DISABLED ((ULONG)-1)

typedef enum _HTTP_FEATURE_ID {
    HttpFeatureUnknown = 0,
    HttpFeatureResponseTrailers = 1,
    HttpFeatureApiTimings = 2,
    HttpFeatureDelegateEx = 3,
    HttpFeatureHttp3 = 4,
    HttpFeatureLast = 5,
    HttpFeaturemax = 0xFFFFFFFF,
} HTTP_FEATURE_ID, *PHTTP_FEATURE_ID;

#ifndef HTTPAPI_LINKAGE
#define HTTPAPI_LINKAGE  DECLSPEC_IMPORT
#endif /* !HTTPAPI_LINKAGE */

HTTPAPI_LINKAGE ULONG WINAPI HttpInitialize(
    HTTPAPI_VERSION Version,
    ULONG Flags,
    PVOID pReserved
);

HTTPAPI_LINKAGE ULONG WINAPI HttpTerminate(
    ULONG Flags,
    PVOID pReserved
);

HTTPAPI_LINKAGE ULONG WINAPI HttpCreateHttpHandle(
    PHANDLE RequestQueueHandle,
    ULONG Reserved
);

#if _WIN32_WINNT >= 0x0600

HTTPAPI_LINKAGE ULONG WINAPI HttpCreateRequestQueue(
    HTTPAPI_VERSION Version,
    PCWSTR Name,
    PSECURITY_ATTRIBUTES SecurityAttributes,
    ULONG Flags,
    PHANDLE RequestQueueHandle
);

HTTPAPI_LINKAGE ULONG WINAPI HttpCloseRequestQueue(
    HANDLE RequestQueueHandle
);

HTTPAPI_LINKAGE ULONG WINAPI HttpSetRequestQueueProperty(
    HANDLE RequestQueueHandle,
    HTTP_SERVER_PROPERTY Property,
    PVOID PropertyInformation,
    ULONG PropertyInformationLength,
    ULONG Reserved1,
    PVOID Reserved2
);

HTTPAPI_LINKAGE ULONG WINAPI HttpQueryRequestQueueProperty(
    HANDLE RequestQueueHandle,
    HTTP_SERVER_PROPERTY Property,
    PVOID PropertyInformation,
    ULONG PropertyInformationLength,
    ULONG Reserved1,
    PULONG ReturnLength,
    PVOID Reserved2
);

HTTPAPI_LINKAGE ULONG WINAPI HttpSetRequestProperty(
    HANDLE RequestQueueHandle,
    HTTP_OPAQUE_ID Id,
    HTTP_REQUEST_PROPERTY PropertyId,
    PVOID Input,
    ULONG InputPropertySize,
    LPOVERLAPPED Overlapped
);

HTTPAPI_LINKAGE ULONG WINAPI HttpShutdownRequestQueue(
    HANDLE RequestQueueHandle
);

#endif /* _WIN32_WINNT >= 0x0600 */

HTTPAPI_LINKAGE ULONG WINAPI HttpReceiveClientCertificate(
    HANDLE RequestQueueHandle,
    HTTP_CONNECTION_ID ConnectionId,
    ULONG Flags,
    PHTTP_SSL_CLIENT_CERT_INFO SslClientCertInfo,
    ULONG SslClientCertInfoSize,
    PULONG BytesReceived,
    LPOVERLAPPED Overlapped
);

#if _WIN32_WINNT >= 0x0600

HTTPAPI_LINKAGE ULONG WINAPI HttpCreateServerSession(
    HTTPAPI_VERSION Version,
    PHTTP_SERVER_SESSION_ID ServerSessionId,
    ULONG Reserved
);

HTTPAPI_LINKAGE ULONG WINAPI HttpCloseServerSession(
    HTTP_SERVER_SESSION_ID ServerSessionId
);

HTTPAPI_LINKAGE ULONG WINAPI HttpQueryServerSessionProperty(
    HTTP_SERVER_SESSION_ID ServerSessionId,
    HTTP_SERVER_PROPERTY Property,
    PVOID PropertyInformation,
    ULONG PropertyInformationLength,
    PULONG ReturnLength
);

HTTPAPI_LINKAGE ULONG WINAPI HttpSetServerSessionProperty(
    HTTP_SERVER_SESSION_ID ServerSessionId,
    HTTP_SERVER_PROPERTY Property,
    PVOID PropertyInformation,
    ULONG PropertyInformationLength
);

#endif /* _WIN32_WINNT >= 0x0600 */

HTTPAPI_LINKAGE ULONG WINAPI HttpAddUrl(
    HANDLE RequestQueueHandle,
    PCWSTR FullyQualifiedUrl,
    PVOID Reserved
);

HTTPAPI_LINKAGE ULONG WINAPI HttpRemoveUrl(
    HANDLE RequestQueueHandle,
    PCWSTR FullyQualifiedUrl
);

#if _WIN32_WINNT >= 0x0600

HTTPAPI_LINKAGE ULONG WINAPI HttpCreateUrlGroup(
    HTTP_SERVER_SESSION_ID ServerSessionId,
    PHTTP_URL_GROUP_ID pUrlGroupId,
    ULONG Reserved
);

HTTPAPI_LINKAGE ULONG WINAPI HttpCloseUrlGroup(
    HTTP_URL_GROUP_ID UrlGroupId
);

HTTPAPI_LINKAGE ULONG WINAPI HttpAddUrlToUrlGroup(
    HTTP_URL_GROUP_ID UrlGroupId,
    PCWSTR pFullyQualifiedUrl,
    HTTP_URL_CONTEXT UrlContext,
    ULONG Reserved
);

HTTPAPI_LINKAGE ULONG WINAPI HttpRemoveUrlFromUrlGroup(
    HTTP_URL_GROUP_ID UrlGroupId,
    PCWSTR pFullyQualifiedUrl,
    ULONG Flags
);

HTTPAPI_LINKAGE ULONG WINAPI HttpSetUrlGroupProperty(
    HTTP_URL_GROUP_ID UrlGroupId,
    HTTP_SERVER_PROPERTY Property,
    PVOID PropertyInformation,
    ULONG PropertyInformationLength
);

HTTPAPI_LINKAGE ULONG WINAPI HttpQueryUrlGroupProperty(
    HTTP_URL_GROUP_ID UrlGroupId,
    HTTP_SERVER_PROPERTY Property,
    PVOID PropertyInformation,
    ULONG PropertyInformationLength,
    PULONG ReturnLength
);

#endif /* _WIN32_WINNT >= 0x0600 */

#if _WIN32_WINNT >= _WIN32_WINNT_WIN8

HTTPAPI_LINKAGE ULONG WINAPI HttpPrepareUrl(
    PVOID Reserved,
    ULONG Flags,
    PCWSTR Url,
    PWSTR *PreparedUrl
);

#endif /* _WIN32_WINNT >= _WIN32_WINNT_WIN8 */

HTTPAPI_LINKAGE ULONG WINAPI HttpReceiveHttpRequest(
    HANDLE RequestQueueHandle,
    HTTP_REQUEST_ID RequestId,
    ULONG Flags,
    PHTTP_REQUEST RequestBuffer,
    ULONG RequestBufferLength,
    PULONG BytesReturned,
    LPOVERLAPPED Overlapped
);

HTTPAPI_LINKAGE ULONG WINAPI HttpReceiveRequestEntityBody(
    HANDLE RequestQueueHandle,
    HTTP_REQUEST_ID RequestId,
    ULONG Flags,
    PVOID EntityBuffer,
    ULONG EntityBufferLength,
    PULONG BytesReturned,
    LPOVERLAPPED Overlapped
);

#if _WIN32_WINNT >= 0x0600

HTTPAPI_LINKAGE ULONG WINAPI HttpSendHttpResponse(
    HANDLE RequestQueueHandle,
    HTTP_REQUEST_ID RequestId,
    ULONG Flags,
    PHTTP_RESPONSE HttpResponse,
    PHTTP_CACHE_POLICY CachePolicy,
    PULONG BytesSent,
    PVOID Reserved1,
    ULONG Reserved2,
    LPOVERLAPPED Overlapped,
    PHTTP_LOG_DATA LogData
);

#else /* _WIN32_WINNT < 0x0600 */

HTTPAPI_LINKAGE ULONG WINAPI HttpSendHttpResponse(
    HANDLE ReqQueueHandle,
    HTTP_REQUEST_ID RequestId,
    ULONG Flags,
    PHTTP_RESPONSE pHttpResponse,
    PVOID pReserved1,
    PULONG pBytesSent,
    PVOID pReserved2,
    ULONG Reserved3,
    LPOVERLAPPED pOverlapped,
    PVOID pReserved4
);

#endif /* _WIN32_WINNT < 0x0600 */

#if _WIN32_WINNT >= 0x0600

HTTPAPI_LINKAGE ULONG WINAPI HttpSendResponseEntityBody(
    HANDLE RequestQueueHandle,
    HTTP_REQUEST_ID RequestId,
    ULONG Flags,
    USHORT EntityChunkCount,
    PHTTP_DATA_CHUNK EntityChunks,
    PULONG BytesSent,
    PVOID Reserved1,
    ULONG Reserved2,
    LPOVERLAPPED Overlapped,
    PHTTP_LOG_DATA LogData
);

#else /* _WIN32_WINNT < 0x0600 */

HTTPAPI_LINKAGE ULONG WINAPI HttpSendResponseEntityBody(
    HANDLE ReqQueueHandle,
    HTTP_REQUEST_ID RequestId,
    ULONG Flags,
    USHORT EntityChunkCount,
    PHTTP_DATA_CHUNK pEntityChunks,
    PULONG pBytesSent,
    PVOID pReserved1,
    ULONG Reserved2,
    LPOVERLAPPED pOverlapped,
    PVOID pReserved3
);

#endif /* _WIN32_WINNT < 0x0600 */

HTTPAPI_LINKAGE ULONG WINAPI HttpDeclarePush(
    HANDLE RequestQueueHandle,
    HTTP_REQUEST_ID RequestId,
    HTTP_VERB Verb,
    PCWSTR Path,
    PCSTR Query,
    PHTTP_REQUEST_HEADERS Headers
);

HTTPAPI_LINKAGE ULONG WINAPI HttpWaitForDisconnect(
    HANDLE RequestQueueHandle,
    HTTP_CONNECTION_ID ConnectionId,
    LPOVERLAPPED Overlapped
);

#if _WIN32_WINNT >= 0x0600

HTTPAPI_LINKAGE ULONG WINAPI HttpWaitForDisconnectEx(
    HANDLE RequestQueueHandle,
    HTTP_CONNECTION_ID ConnectionId,
    ULONG Reserved,
    LPOVERLAPPED Overlapped
);

HTTPAPI_LINKAGE ULONG WINAPI HttpCancelHttpRequest(
    HANDLE RequestQueueHandle,
    HTTP_REQUEST_ID RequestId,
    LPOVERLAPPED Overlapped
);

HTTPAPI_LINKAGE ULONG WINAPI HttpWaitForDemandStart(
    HANDLE RequestQueueHandle,
    LPOVERLAPPED Overlapped
);

BOOL WINAPI HttpIsFeatureSupported(
    HTTP_FEATURE_ID FeatureId
);

HTTPAPI_LINKAGE ULONG WINAPI HttpDelegateRequestEx(
    HANDLE RequestQueueHandle,
    HANDLE DelegateQueueHandle,
    HTTP_REQUEST_ID RequestId,
    HTTP_URL_GROUP_ID DelegateUrlGroupId,
    ULONG PropertyInfoSetSize,
    PHTTP_DELEGATE_REQUEST_PROPERTY_INFO PropertyInfoSet
);

HTTPAPI_LINKAGE ULONG WINAPI HttpFindUrlGroupId(
    PCWSTR FullyQualifiedUrl,
    HANDLE RequestQueueHandle,
    PHTTP_URL_GROUP_ID UrlGroupId
);

#endif /* _WIN32_WINNT >= 0x0600 */

HTTPAPI_LINKAGE ULONG WINAPI HttpFlushResponseCache(
    HANDLE RequestQueueHandle,
    PCWSTR UrlPrefix,
    ULONG Flags,
    LPOVERLAPPED Overlapped
);

HTTPAPI_LINKAGE ULONG WINAPI HttpAddFragmentToCache(
    HANDLE RequestQueueHandle,
    PCWSTR UrlPrefix,
    PHTTP_DATA_CHUNK DataChunk,
    PHTTP_CACHE_POLICY CachePolicy,
    LPOVERLAPPED Overlapped
);

HTTPAPI_LINKAGE ULONG WINAPI HttpReadFragmentFromCache(
    HANDLE RequestQueueHandle,
    PCWSTR UrlPrefix,
    PHTTP_BYTE_RANGE ByteRange,
    PVOID Buffer,
    ULONG BufferLength,
    PULONG BytesRead,
    LPOVERLAPPED Overlapped
);

HTTPAPI_LINKAGE ULONG WINAPI HttpSetServiceConfiguration(
    HANDLE ServiceHandle,
    HTTP_SERVICE_CONFIG_ID ConfigId,
    PVOID pConfigInformation,
    ULONG ConfigInformationLength,
    LPOVERLAPPED pOverlapped
);

HTTPAPI_LINKAGE ULONG WINAPI HttpUpdateServiceConfiguration(
    HANDLE Handle,
    HTTP_SERVICE_CONFIG_ID ConfigId,
    PVOID ConfigInfo,
    ULONG ConfigInfoLength,
    LPOVERLAPPED Overlapped
);

HTTPAPI_LINKAGE ULONG WINAPI HttpDeleteServiceConfiguration(
    HANDLE ServiceHandle,
    HTTP_SERVICE_CONFIG_ID ConfigId,
    PVOID pConfigInformation,
    ULONG ConfigInformationLength,
    LPOVERLAPPED pOverlapped
);

HTTPAPI_LINKAGE ULONG WINAPI HttpQueryServiceConfiguration(
    HANDLE ServiceHandle,
    HTTP_SERVICE_CONFIG_ID ConfigId,
    PVOID pInput,
    ULONG InputLength,
    PVOID pOutput,
    ULONG OutputLength,
    PULONG pReturnLength,
    LPOVERLAPPED pOverlapped
);

ULONG WINAPI HttpGetExtension(
    HTTPAPI_VERSION Version,
    ULONG Extension,
    PVOID Buffer,
    ULONG BufferSize
);

#endif /* _WIN32_WINNT >= 0x0501 */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */

#if __POCC__ >= 290
#pragma warn(pop)
#endif

#endif /* _HTTP_H */
