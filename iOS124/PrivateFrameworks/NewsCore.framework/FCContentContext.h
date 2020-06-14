//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCContentContext-Protocol.h>
#import <NewsCore/FCCoreConfigurationObserving-Protocol.h>
#import <NewsCore/FCNetworkReachabilityRequirementObserving-Protocol.h>

@class FCArticleController, FCAssetManager, FCContentContextInternal, FCContextConfiguration, FCFlintResourceManager, FCNetworkBehaviorMonitor, FCTagController, NSString, NSURL;
@protocol FCAssetKeyCacheType, FCAssetKeyManagerType, FCAssetKeyServiceType, FCBackgroundTaskable, FCCoreConfigurationManager, FCNetworkReachabilityRequirement, FCNewsAppConfigurationManager, FCPPTContext, FCWebArchiveSource;

@interface FCContentContext : NSObject <FCNetworkReachabilityRequirementObserving, FCCoreConfigurationObserving, FCContentContext>
{
    id <FCCoreConfigurationManager> _configurationManager;
    FCArticleController *_articleController;
    FCAssetManager *_assetManager;
    FCFlintResourceManager *_flintResourceManager;
    FCTagController *_tagController;
    FCNetworkBehaviorMonitor *_networkBehaviorMonitor;
    id <FCPPTContext> _pptContext;
    id <FCBackgroundTaskable> _backgroundTaskable;
    id <FCWebArchiveSource> _webArchiveSource;
    long long _preferredMediaQuality;
    FCContextConfiguration *_contextConfiguration;
    NSString *_contentDirectory;
    NSURL *_assetCacheDirectoryURL;
    NSURL *_webArchiveCacheDirectoryURL;
    FCContentContextInternal *_internalContentContext;
    id <FCAssetKeyServiceType> _assetKeyService;
    id <FCAssetKeyCacheType> _assetKeyCache;
    id <FCAssetKeyManagerType> _assetKeyManager;
    id <FCNetworkReachabilityRequirement> _supportedCountryNetworkReachabilityRequirement;
}

+ (void)initialize;
@property(retain, nonatomic) id <FCNetworkReachabilityRequirement> supportedCountryNetworkReachabilityRequirement; // @synthesize supportedCountryNetworkReachabilityRequirement=_supportedCountryNetworkReachabilityRequirement;
@property(retain, nonatomic) id <FCAssetKeyManagerType> assetKeyManager; // @synthesize assetKeyManager=_assetKeyManager;
@property(retain, nonatomic) id <FCAssetKeyCacheType> assetKeyCache; // @synthesize assetKeyCache=_assetKeyCache;
@property(retain, nonatomic) id <FCAssetKeyServiceType> assetKeyService; // @synthesize assetKeyService=_assetKeyService;
@property(retain, nonatomic) FCContentContextInternal *internalContentContext; // @synthesize internalContentContext=_internalContentContext;
@property(retain, nonatomic) NSURL *webArchiveCacheDirectoryURL; // @synthesize webArchiveCacheDirectoryURL=_webArchiveCacheDirectoryURL;
@property(retain, nonatomic) NSURL *assetCacheDirectoryURL; // @synthesize assetCacheDirectoryURL=_assetCacheDirectoryURL;
@property(copy, nonatomic) NSString *contentDirectory; // @synthesize contentDirectory=_contentDirectory;
@property(copy, nonatomic) FCContextConfiguration *contextConfiguration; // @synthesize contextConfiguration=_contextConfiguration;
@property(readonly, nonatomic) long long preferredMediaQuality; // @synthesize preferredMediaQuality=_preferredMediaQuality;
@property(readonly, nonatomic) __weak id <FCBackgroundTaskable> backgroundTaskable; // @synthesize backgroundTaskable=_backgroundTaskable;
@property(readonly, nonatomic) id <FCPPTContext> pptContext; // @synthesize pptContext=_pptContext;
@property(readonly, nonatomic) FCNetworkBehaviorMonitor *networkBehaviorMonitor; // @synthesize networkBehaviorMonitor=_networkBehaviorMonitor;
- (void).cxx_destruct;
- (void)configurationManager:(id)arg1 configurationDidChange:(id)arg2;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1;
- (void)ppt_overrideFeedEndpoint:(long long)arg1;
- (id)recordTreeSourceWithRecordSources:(id)arg1;
- (id)recordSourceWithSchema:(id)arg1;
@property(readonly, copy, nonatomic) NSString *contentEnvironmentToken;
- (id)webArchiveSourceAllowingNil;
@property(retain, nonatomic) id <FCWebArchiveSource> webArchiveSource; // @synthesize webArchiveSource=_webArchiveSource;
@property(readonly, nonatomic) FCFlintResourceManager *flintResourceManager; // @synthesize flintResourceManager=_flintResourceManager;
@property(readonly, nonatomic) FCTagController *tagController; // @synthesize tagController=_tagController;
@property(readonly, nonatomic) FCArticleController *articleController; // @synthesize articleController=_articleController;
@property(readonly, nonatomic) FCAssetManager *assetManager; // @synthesize assetManager=_assetManager;
- (id)magazinesConfigurationManager;
- (id)news_core_ConfigurationManager;
@property(readonly, nonatomic) id <FCNewsAppConfigurationManager> appConfigurationManager;
@property(readonly, nonatomic) id <FCCoreConfigurationManager> configurationManager; // @synthesize configurationManager=_configurationManager;
@property(readonly, copy, nonatomic) NSString *supportedContentStoreFrontID;
@property(readonly, copy, nonatomic) NSString *contentStoreFrontID;
- (void)_updateReachabilityGivenRequirements;
- (void)networkReachabilityRequirementDidBecomeDirty:(id)arg1;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 configurationManager:(id)arg2 contentDatabase:(id)arg3 contentHostDirectory:(id)arg4 networkBehaviorMonitor:(id)arg5 setupCustomURLProtocols:(_Bool)arg6 desiredHeadlineFieldOptions:(unsigned long long)arg7 feedUsage:(long long)arg8 assetKeyManagerDelegate:(id)arg9 appActivityMonitor:(id)arg10 backgroundTaskable:(id)arg11 preferredMediaQuality:(long long)arg12 pptContext:(id)arg13;
- (id)initWithConfiguration:(id)arg1 configurationManager:(id)arg2 contentHostDirectory:(id)arg3 networkBehaviorMonitor:(id)arg4 desiredHeadlineFieldOptions:(unsigned long long)arg5 feedUsage:(long long)arg6 assetKeyManagerDelegate:(id)arg7 appActivityMonitor:(id)arg8 backgroundTaskable:(id)arg9 preferredMediaQuality:(long long)arg10 pptContext:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

