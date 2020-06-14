//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI/FCCacheFlushing-Protocol.h>
#import <NewsUI/NSObject-Protocol.h>

@class FCArticleController, FCAssetManager, FCFlintResourceManager, FCJSONRecordSourceSchema, FCNetworkBehaviorMonitor, FCTagController, NSArray, NSString, NSURL;
@protocol FCBackgroundTaskable, FCContentContextInternal, FCCoreConfigurationManager, FCCoreConfigurationManager><FCNewsAppConfigurationManager, FCJSONRecordSourceType, FCJSONRecordTreeSourceType, FCMagazinesConfigurationManager, FCNewsAppConfigurationManager, FCPPTContext, FCWebArchiveSource;

@protocol FCContentContext <NSObject, FCCacheFlushing>
@property(readonly, copy, nonatomic) NSString *contentEnvironmentToken;
@property(readonly, nonatomic) id <FCPPTContext> pptContext;
@property(readonly, nonatomic) long long preferredMediaQuality;
@property(readonly, nonatomic) __weak id <FCBackgroundTaskable> backgroundTaskable;
@property(readonly, nonatomic) id <FCContentContextInternal> internalContentContext;
@property(readonly, nonatomic) NSURL *webArchiveCacheDirectoryURL;
@property(readonly, nonatomic) NSURL *assetCacheDirectoryURL;
@property(readonly, copy, nonatomic) NSString *contentDirectory;
@property(retain, nonatomic) id <FCWebArchiveSource> webArchiveSource;
@property(readonly, nonatomic) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property(readonly, nonatomic) FCFlintResourceManager *flintResourceManager;
@property(readonly, nonatomic) FCTagController *tagController;
@property(readonly, nonatomic) FCArticleController *articleController;
@property(readonly, nonatomic) FCAssetManager *assetManager;
@property(readonly, nonatomic) id <FCNewsAppConfigurationManager> appConfigurationManager;
@property(readonly, nonatomic) id <FCCoreConfigurationManager> configurationManager;
@property(readonly, copy, nonatomic) NSString *supportedContentStoreFrontID;
@property(readonly, copy, nonatomic) NSString *contentStoreFrontID;
- (id <FCJSONRecordTreeSourceType>)recordTreeSourceWithRecordSources:(NSArray *)arg1;
- (id <FCJSONRecordSourceType>)recordSourceWithSchema:(FCJSONRecordSourceSchema *)arg1;
- (void)ppt_overrideFeedEndpoint:(long long)arg1;
- (id <FCMagazinesConfigurationManager>)magazinesConfigurationManager;
- (id <FCCoreConfigurationManager><FCNewsAppConfigurationManager>)news_core_ConfigurationManager;
@end

