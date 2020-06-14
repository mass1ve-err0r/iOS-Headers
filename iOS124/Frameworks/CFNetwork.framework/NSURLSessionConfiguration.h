//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSCopying-Protocol.h>
#import <CFNetwork/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDictionary, NSHTTPCookieStorage, NSSet, NSString, NSURL, NSURLCache, NSURLCredentialStorage;
@protocol NSURLSessionAppleIDContext;

@interface NSURLSessionConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    _Bool __allowsWCA;
}

+ (_Bool)supportsSecureCoding;
+ (id)backgroundSessionConfiguration:(id)arg1;
+ (id)_proxySessionConfigurationWithIdentifier:(id)arg1;
+ (id)AVBackgroundSessionConfigurationWithIdentifier:(id)arg1;
+ (id)_AVBackgroundSessionConfigurationWithIdentifier:(id)arg1;
+ (id)backgroundSessionConfigurationWithIdentifier:(id)arg1;
+ (id)ephemeralSessionConfiguration;
+ (id)sessionConfigurationForSharedSession;
+ (id)defaultSessionConfiguration;
+ (id)_defaultProtocolClasses;
@property _Bool _allowsWCA; // @synthesize _allowsWCA=__allowsWCA;
- (struct _CFHSTSPolicy *)copyHSTSPolicy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct OpaqueCFHTTPCookieStorage *)_copyCFCookieStorage;
- (struct HTTPConnectionCacheLimits)getConnectionCacheLimits;
- (void *)_copyAttribute:(struct __CFString *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDisposition:(id)arg1;

// Remaining properties
@property(copy) NSDictionary *HTTPAdditionalHeaders; // @dynamic HTTPAdditionalHeaders;
@property unsigned long long HTTPCookieAcceptPolicy; // @dynamic HTTPCookieAcceptPolicy;
@property(retain) NSHTTPCookieStorage *HTTPCookieStorage; // @dynamic HTTPCookieStorage;
@property long long HTTPMaximumConnectionsPerHost; // @dynamic HTTPMaximumConnectionsPerHost;
@property _Bool HTTPShouldSetCookies; // @dynamic HTTPShouldSetCookies;
@property _Bool HTTPShouldUsePipelining; // @dynamic HTTPShouldUsePipelining;
@property int TLSMaximumSupportedProtocol; // @dynamic TLSMaximumSupportedProtocol;
@property int TLSMinimumSupportedProtocol; // @dynamic TLSMinimumSupportedProtocol;
@property(retain) NSURLCache *URLCache; // @dynamic URLCache;
@property(retain) NSURLCredentialStorage *URLCredentialStorage; // @dynamic URLCredentialStorage;
@property(copy) NSString *_CTDataConnectionServiceType; // @dynamic _CTDataConnectionServiceType;
@property long long _IDSMessageTimeout; // @dynamic _IDSMessageTimeout;
@property unsigned long long _TCPAdaptiveReadTimeout; // @dynamic _TCPAdaptiveReadTimeout;
@property unsigned long long _TCPAdaptiveWriteTimeout; // @dynamic _TCPAdaptiveWriteTimeout;
@property _Bool _allowTCPIOConnectionStreamTask; // @dynamic _allowTCPIOConnectionStreamTask;
@property _Bool _allowsExpensiveAccess; // @dynamic _allowsExpensiveAccess;
@property _Bool _allowsIndefiniteConnections; // @dynamic _allowsIndefiniteConnections;
@property _Bool _allowsMultipathTCP; // @dynamic _allowsMultipathTCP;
@property _Bool _allowsPowerNapScheduling; // @dynamic _allowsPowerNapScheduling;
@property _Bool _allowsResponseMonitoringDuringBodyTranmission; // @dynamic _allowsResponseMonitoringDuringBodyTranmission;
@property _Bool _allowsRetryForBackgroundDataTasks; // @dynamic _allowsRetryForBackgroundDataTasks;
@property _Bool _allowsTCPFastOpen; // @dynamic _allowsTCPFastOpen;
@property _Bool _allowsTLSSessionResumption; // @dynamic _allowsTLSSessionResumption;
@property _Bool _allowsTLSSessionTickets; // @dynamic _allowsTLSSessionTickets;
@property _Bool _alwaysPerformDefaultTrustEvaluation; // @dynamic _alwaysPerformDefaultTrustEvaluation;
@property(copy) id <NSURLSessionAppleIDContext> _appleIDContext; // @dynamic _appleIDContext;
@property(copy) NSData *_atsContext; // @dynamic _atsContext;
@property(copy) NSSet *_authenticatorStatusCodes; // @dynamic _authenticatorStatusCodes;
@property _Bool _clientIsNotExplicitlyDiscretionary; // @dynamic _clientIsNotExplicitlyDiscretionary;
@property _Bool _collectsTimingData; // @dynamic _collectsTimingData;
@property(copy) NSString *_companionAppBundleIdentifier; // @dynamic _companionAppBundleIdentifier;
@property double _connectionCacheCellPurgeTimeout; // @dynamic _connectionCacheCellPurgeTimeout;
@property double _connectionCachePurgeTimeout; // @dynamic _connectionCachePurgeTimeout;
@property(copy) NSString *_connectionPoolName; // @dynamic _connectionPoolName;
@property(copy) NSArray *_contentDispHeadEncFallback; // @dynamic _contentDispHeadEncFallback;
@property unsigned long long _customReadBufferSize; // @dynamic _customReadBufferSize;
@property double _customReadBufferTimeout; // @dynamic _customReadBufferTimeout;
@property(copy) NSURL *_directoryForDownloadedFiles; // @dynamic _directoryForDownloadedFiles;
@property _Bool _disablesOutOfProcessDirectWiFiUsage; // @dynamic _disablesOutOfProcessDirectWiFiUsage;
@property _Bool _disablesUseOfProxySession; // @dynamic _disablesUseOfProxySession;
@property _Bool _disallowsSPDY; // @dynamic _disallowsSPDY;
@property _Bool _duetPreauthorized; // @dynamic _duetPreauthorized;
@property long long _expiredDNSBehavior; // @dynamic _expiredDNSBehavior;
@property unsigned long long _forcedNetworkServiceType; // @dynamic _forcedNetworkServiceType;
@property _Bool _forcesNewConnections; // @dynamic _forcesNewConnections;
@property _Bool _ignoreDidReceiveResponseDisposition; // @dynamic _ignoreDidReceiveResponseDisposition;
@property _Bool _infersDiscretionaryFromOriginatingClient; // @dynamic _infersDiscretionaryFromOriginatingClient;
@property(copy) NSString *_ledBellyServiceIdentifier; // @dynamic _ledBellyServiceIdentifier;
@property double _longLivedConnectionCacheCellPurgeTimeout; // @dynamic _longLivedConnectionCacheCellPurgeTimeout;
@property double _longLivedConnectionCachePurgeTimeout; // @dynamic _longLivedConnectionCachePurgeTimeout;
@property _Bool _onBehalfOfPairedDevice; // @dynamic _onBehalfOfPairedDevice;
@property(copy) NSDictionary *_overriddenDelegateOptions; // @dynamic _overriddenDelegateOptions;
@property _Bool _overridesBackgroundSessionAutoRedirect; // @dynamic _overridesBackgroundSessionAutoRedirect;
@property _Bool _performsEVCertCheck; // @dynamic _performsEVCertCheck;
@property(retain) NSHTTPCookieStorage *_phskip_cookieStorage; // @dynamic _phskip_cookieStorage;
@property _Bool _phskip_cookieStorageSet; // @dynamic _phskip_cookieStorageSet;
@property(retain) NSURLCredentialStorage *_phskip_credStorage; // @dynamic _phskip_credStorage;
@property _Bool _phskip_credStorageSet; // @dynamic _phskip_credStorageSet;
@property(retain) struct _CFHSTSPolicy *_phskip_hstsStorage; // @dynamic _phskip_hstsStorage;
@property _Bool _phskip_hstsStorageSet; // @dynamic _phskip_hstsStorageSet;
@property(retain) NSURLCache *_phskip_urlCache; // @dynamic _phskip_urlCache;
@property _Bool _phskip_urlCacheSet; // @dynamic _phskip_urlCacheSet;
@property _Bool _prefersInfraWiFi; // @dynamic _prefersInfraWiFi;
@property _Bool _preventsDirectWiFiAccess; // @dynamic _preventsDirectWiFiAccess;
@property _Bool _preventsIdleSleep; // @dynamic _preventsIdleSleep;
@property _Bool _preventsIdleSleepOnceConnected; // @dynamic _preventsIdleSleepOnceConnected;
@property _Bool _preventsSystemHTTPProxyAuthentication; // @dynamic _preventsSystemHTTPProxyAuthentication;
@property(getter=_isProxySession) _Bool _proxySession; // @dynamic _proxySession;
@property _Bool _requiresClientToOpenFiles; // @dynamic _requiresClientToOpenFiles;
@property _Bool _requiresPowerPluggedIn; // @dynamic _requiresPowerPluggedIn;
@property _Bool _requiresSecureHTTPSProxyConnection; // @dynamic _requiresSecureHTTPSProxyConnection;
@property _Bool _requiresSustainedDataDelivery; // @dynamic _requiresSustainedDataDelivery;
@property _Bool _respectsAllowsCellularAccessForDiscretionaryTasks; // @dynamic _respectsAllowsCellularAccessForDiscretionaryTasks;
@property _Bool _sessionSendsLaunchOnDemandEvents; // @dynamic _sessionSendsLaunchOnDemandEvents;
@property _Bool _shouldPreserveBackgroundSessionDisposition; // @dynamic _shouldPreserveBackgroundSessionDisposition;
@property _Bool _shouldSkipPreferredClientCertificateLookup; // @dynamic _shouldSkipPreferredClientCertificateLookup;
@property(copy) NSDictionary *_socketStreamProperties; // @dynamic _socketStreamProperties;
@property(copy) NSData *_sourceApplicationAuditTokenData; // @dynamic _sourceApplicationAuditTokenData;
@property(copy) NSString *_sourceApplicationBundleIdentifier; // @dynamic _sourceApplicationBundleIdentifier;
@property(copy) NSString *_sourceApplicationSecondaryIdentifier; // @dynamic _sourceApplicationSecondaryIdentifier;
@property _Bool _supportsAVAssetDownloads; // @dynamic _supportsAVAssetDownloads;
@property(copy) NSSet *_suppressedAutoAddedHTTPHeaders; // @dynamic _suppressedAutoAddedHTTPHeaders;
@property(copy) NSString *_tcpConnectionPoolName; // @dynamic _tcpConnectionPoolName;
@property long long _timingDataOptions; // @dynamic _timingDataOptions;
@property(copy) NSString *_tlsCachePrefix; // @dynamic _tlsCachePrefix;
@property(copy) NSString *_tlsTrustPinningPolicyName; // @dynamic _tlsTrustPinningPolicyName;
@property _Bool _usePipeliningHeuristics; // @dynamic _usePipeliningHeuristics;
@property(copy) NSString *_watchAppBundleIdentifier; // @dynamic _watchAppBundleIdentifier;
@property(copy) NSString *_watchExtensionBundleIdentifier; // @dynamic _watchExtensionBundleIdentifier;
@property _Bool allowsCellularAccess; // @dynamic allowsCellularAccess;
@property(getter=isBackgroundSession) _Bool backgroundSession; // @dynamic backgroundSession;
@property(copy) NSDictionary *connectionProxyDictionary; // @dynamic connectionProxyDictionary;
@property(getter=isDiscretionary) _Bool discretionary; // @dynamic discretionary;
@property NSString *disposition; // @dynamic disposition;
@property(copy) NSString *identifier; // @dynamic identifier;
@property long long minimumFastLanePriority; // @dynamic minimumFastLanePriority;
@property long long multipathServiceType; // @dynamic multipathServiceType;
@property unsigned long long networkServiceType; // @dynamic networkServiceType;
@property long long numFastLanes; // @dynamic numFastLanes;
@property long long numPriorityLevels; // @dynamic numPriorityLevels;
@property long long pipeliningHighWatermark; // @dynamic pipeliningHighWatermark;
@property long long pipeliningLowWatermark; // @dynamic pipeliningLowWatermark;
@property(copy) NSArray *protocolClasses; // @dynamic protocolClasses;
@property unsigned long long requestCachePolicy; // @dynamic requestCachePolicy;
@property _Bool sessionSendsLaunchEvents; // @dynamic sessionSendsLaunchEvents;
@property(copy) NSString *sharedContainerIdentifier; // @dynamic sharedContainerIdentifier;
@property _Bool shouldUseExtendedBackgroundIdleMode; // @dynamic shouldUseExtendedBackgroundIdleMode;
@property _Bool skip_download_unlink; // @dynamic skip_download_unlink;
@property double timeoutIntervalForRequest; // @dynamic timeoutIntervalForRequest;
@property double timeoutIntervalForResource; // @dynamic timeoutIntervalForResource;
@property _Bool waitsForConnectivity; // @dynamic waitsForConnectivity;

@end

