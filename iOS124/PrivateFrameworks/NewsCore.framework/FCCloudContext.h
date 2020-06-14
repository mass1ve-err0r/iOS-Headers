//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCAssetKeyManagerDelegate-Protocol.h>
#import <NewsCore/FCBundleSubscriptionChangeObserver-Protocol.h>
#import <NewsCore/FCCKDatabaseEncryptionDelegate-Protocol.h>
#import <NewsCore/FCCacheFlushing-Protocol.h>
#import <NewsCore/FCContentContext-Protocol.h>
#import <NewsCore/FCPrivateDataContext-Protocol.h>
#import <NewsCore/FCTestingContext-Protocol.h>

@class FCAccessChecker, FCArticleController, FCAssetManager, FCClientEndpointConnection, FCCommandQueue, FCFeedManager, FCFlintResourceManager, FCIssueReadingHistory, FCNetworkBehaviorMonitor, FCNotificationController, FCNotificationsEndpointConnection, FCPersonalizationData, FCPrivateChannelMembershipController, FCPurchaseController, FCReadingHistory, FCReadingList, FCSubscriptionController, FCSubscriptionList, FCTagController, FCTagSettings, FCTranslationManager, FCUserInfo, NSString, NSURL;
@protocol FCAppActivityMonitor, FCBackgroundTaskable, FCBundleSubscriptionManagerType, FCContentContext, FCContentContextInternal, FCCoreConfigurationManager, FCCurrentIssuesChecker, FCFeedPersonalizing, FCFlintHelper, FCForYouMagazineFeedManaging, FCNewsAppConfigurationManager, FCPPTContext, FCPaidAccessCheckerType, FCPrivateDataContext, FCPrivateDataContextInternal, FCPurchaseManagerType, FCPushNotificationHandling, FCWebArchiveSource;

@interface FCCloudContext : NSObject <FCTestingContext, FCCKDatabaseEncryptionDelegate, FCAssetKeyManagerDelegate, FCBundleSubscriptionChangeObserver, FCContentContext, FCPrivateDataContext, FCCacheFlushing>
{
    _Bool _deviceIsiPad;
    FCSubscriptionController *_subscriptionController;
    FCFeedManager *_feedManager;
    FCNetworkBehaviorMonitor *_networkBehaviorMonitor;
    id <FCAppActivityMonitor> _appActivityMonitor;
    FCClientEndpointConnection *_endpointConnection;
    FCCommandQueue *_endpointCommandQueue;
    FCNotificationsEndpointConnection *_notificationsEndpointConnection;
    FCCommandQueue *_notificationsEndpointCommandQueue;
    FCNotificationController *_notificationController;
    FCPurchaseController *_purchaseController;
    id <FCPurchaseManagerType> _purchaseManager;
    id <FCBundleSubscriptionManagerType> _bundleSubscriptionManager;
    FCTranslationManager *_translationManager;
    id <FCCurrentIssuesChecker> _currentIssuesChecker;
    id <FCPaidAccessCheckerType> _paidAccessChecker;
    FCAccessChecker *_issueAccessChecker;
    FCAccessChecker *_articleAccessChecker;
    id <FCFlintHelper> _flintHelper;
    id <FCBackgroundTaskable> _backgroundTaskable;
    id <FCForYouMagazineFeedManaging> _forYouMagazineFeedManager;
    id <FCPPTContext> _pptContext;
    id <FCContentContext> _contentContext;
    id <FCPrivateDataContext> _privateDataContext;
    long long _options;
}

+ (id)testingContextWithDesiredHeadlineFieldOptions:(unsigned long long)arg1;
+ (id)testingContext;
+ (void)initialize;
@property(nonatomic) long long options; // @synthesize options=_options;
@property(retain, nonatomic) id <FCPrivateDataContext> privateDataContext; // @synthesize privateDataContext=_privateDataContext;
@property(retain, nonatomic) id <FCContentContext> contentContext; // @synthesize contentContext=_contentContext;
@property(readonly, nonatomic) id <FCPPTContext> pptContext; // @synthesize pptContext=_pptContext;
@property(readonly, nonatomic) _Bool deviceIsiPad; // @synthesize deviceIsiPad=_deviceIsiPad;
@property(nonatomic) __weak id <FCForYouMagazineFeedManaging> forYouMagazineFeedManager; // @synthesize forYouMagazineFeedManager=_forYouMagazineFeedManager;
@property(nonatomic) __weak id <FCBackgroundTaskable> backgroundTaskable; // @synthesize backgroundTaskable=_backgroundTaskable;
@property(nonatomic) __weak id <FCFlintHelper> flintHelper; // @synthesize flintHelper=_flintHelper;
@property(retain, nonatomic) FCAccessChecker *articleAccessChecker; // @synthesize articleAccessChecker=_articleAccessChecker;
@property(retain, nonatomic) FCAccessChecker *issueAccessChecker; // @synthesize issueAccessChecker=_issueAccessChecker;
@property(retain, nonatomic) id <FCPaidAccessCheckerType> paidAccessChecker; // @synthesize paidAccessChecker=_paidAccessChecker;
@property(retain, nonatomic) id <FCCurrentIssuesChecker> currentIssuesChecker; // @synthesize currentIssuesChecker=_currentIssuesChecker;
@property(retain, nonatomic) FCTranslationManager *translationManager; // @synthesize translationManager=_translationManager;
@property(readonly, nonatomic) id <FCBundleSubscriptionManagerType> bundleSubscriptionManager; // @synthesize bundleSubscriptionManager=_bundleSubscriptionManager;
@property(readonly, nonatomic) id <FCPurchaseManagerType> purchaseManager; // @synthesize purchaseManager=_purchaseManager;
@property(readonly, nonatomic) FCPurchaseController *purchaseController; // @synthesize purchaseController=_purchaseController;
@property(readonly, nonatomic) FCNotificationController *notificationController; // @synthesize notificationController=_notificationController;
@property(retain, nonatomic) id <FCAppActivityMonitor> appActivityMonitor; // @synthesize appActivityMonitor=_appActivityMonitor;
- (void).cxx_destruct;
- (void)_purchaseControllerDidAddALaCarteSubscription;
- (void)bundleSubscriptionDidSubscribe:(id)arg1;
- (_Bool)shouldAssetKeyManagerSimulateUnauthorizedAssetKeys:(id)arg1;
- (void)fetchOriginalDataShouldBeDeletedAfterMigrationForDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchPrivateDataEncryptionMigrationIsDesiredForDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchPrivateDataEncryptionIsAllowedForDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)insertTestArticlesWithCount:(unsigned long long)arg1;
- (id)insertTestArticle;
@property(readonly, nonatomic) id <FCPushNotificationHandling> privatePushNotificationHandler;
@property(readonly, copy, nonatomic) NSString *privateDataDirectory;
@property(readonly, nonatomic) id <FCPrivateDataContextInternal> internalPrivateDataContext;
- (id)privateStoreWithName:(id)arg1 version:(unsigned long long)arg2 options:(unsigned long long)arg3;
@property(readonly, nonatomic, getter=isPrivateDataSyncingEnabled) _Bool privateDataSyncingEnabled;
@property(readonly, nonatomic) FCTagSettings *tagSettings;
@property(readonly, nonatomic) FCUserInfo *userInfo;
@property(readonly, nonatomic) FCSubscriptionList *subscriptionList;
@property(readonly, nonatomic) FCReadingList *readingList;
@property(readonly, nonatomic) FCReadingHistory *readingHistory;
@property(readonly, nonatomic) FCPrivateChannelMembershipController *privateChannelMembershipController;
@property(readonly, nonatomic) FCPersonalizationData *personalizationData;
@property(readonly, nonatomic) FCIssueReadingHistory *issueReadingHistory;
@property(readonly, nonatomic) long long preferredMediaQuality;
- (id)recordTreeSourceWithRecordSources:(id)arg1;
- (id)recordSourceWithSchema:(id)arg1;
@property(retain, nonatomic) id <FCWebArchiveSource> webArchiveSource;
@property(readonly, nonatomic) NSURL *webArchiveCacheDirectoryURL;
@property(readonly, nonatomic) NSURL *assetCacheDirectoryURL;
@property(readonly, copy, nonatomic) NSString *contentDirectory;
@property(readonly, copy, nonatomic) NSString *supportedContentStoreFrontID;
@property(readonly, copy, nonatomic) NSString *contentStoreFrontID;
@property(readonly, nonatomic) id <FCContentContextInternal> internalContentContext;
- (id)magazinesConfigurationManager;
- (id)news_core_ConfigurationManager;
@property(readonly, nonatomic) id <FCNewsAppConfigurationManager> appConfigurationManager;
@property(readonly, nonatomic) id <FCCoreConfigurationManager> configurationManager;
@property(readonly, nonatomic) FCFlintResourceManager *flintResourceManager;
@property(readonly, nonatomic) FCTagController *tagController;
@property(readonly, nonatomic) FCArticleController *articleController;
@property(readonly, nonatomic) FCAssetManager *assetManager;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) NSString *contentEnvironmentToken;
- (void)ppt_overrideFeedEndpoint:(long long)arg1;
@property(readonly, nonatomic) _Bool isPrivateDatabaseTemporarilySuspended;
@property(readonly, nonatomic) _Bool isPrivateDatabaseOnline;
@property(readonly, nonatomic) _Bool isPrivateDatabaseStartingUp;
@property(readonly, nonatomic) _Bool isPrivateDataEncryptionEnabled;
@property(readonly, nonatomic) FCCommandQueue *notificationsEndpointCommandQueue; // @synthesize notificationsEndpointCommandQueue=_notificationsEndpointCommandQueue;
@property(readonly, nonatomic) FCNotificationsEndpointConnection *notificationsEndpointConnection; // @synthesize notificationsEndpointConnection=_notificationsEndpointConnection;
@property(readonly, nonatomic) FCCommandQueue *endpointCommandQueue; // @synthesize endpointCommandQueue=_endpointCommandQueue;
@property(readonly, nonatomic) FCClientEndpointConnection *endpointConnection; // @synthesize endpointConnection=_endpointConnection;
@property(readonly, nonatomic) FCNetworkBehaviorMonitor *networkBehaviorMonitor; // @synthesize networkBehaviorMonitor=_networkBehaviorMonitor;
@property(readonly, nonatomic) id <FCFeedPersonalizing> feedPersonalizer;
@property(readonly, nonatomic) FCFeedManager *feedManager; // @synthesize feedManager=_feedManager;
- (id)notificationsController;
@property(readonly, nonatomic) FCSubscriptionController *subscriptionController; // @synthesize subscriptionController=_subscriptionController;
- (id)initWithContentContext:(id)arg1 privateDataContext:(id)arg2 networkBehaviorMonitor:(id)arg3 options:(long long)arg4;
- (id)initForTestingWithDesiredHeadlineFieldOptions:(unsigned long long)arg1;
- (id)initForTesting;
- (id)initWithConfiguration:(id)arg1 configurationManager:(id)arg2 contentHostDirectory:(id)arg3 privateDataHostDirectory:(id)arg4 privateDataActionProvider:(id)arg5 networkBehaviorMonitor:(id)arg6 appActivityMonitor:(id)arg7 desiredHeadlineFieldOptions:(unsigned long long)arg8 feedUsage:(long long)arg9 deviceIsiPad:(_Bool)arg10 backgroundTaskable:(id)arg11 privateDataSyncAvailability:(id)arg12 pptContext:(id)arg13 options:(long long)arg14;
- (id)initWithConfiguration:(id)arg1 configurationManager:(id)arg2 contentHostDirectory:(id)arg3 privateDataHostDirectory:(id)arg4 privateDataActionProvider:(id)arg5 networkBehaviorMonitor:(id)arg6 appActivityMonitor:(id)arg7 desiredHeadlineFieldOptions:(unsigned long long)arg8 feedUsage:(long long)arg9 lockStoreFrontIfNeeded:(_Bool)arg10 deviceIsiPad:(_Bool)arg11 backgroundTaskable:(id)arg12 privateDataSyncAvailability:(id)arg13 pptContext:(id)arg14;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

