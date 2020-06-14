//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTMetricsKit, NSDictionary, NSHashTable, NSString, VUIMetricsPageEventData;
@protocol OS_dispatch_queue;

@interface VUIMetricsController : NSObject
{
    _Bool _isInternalBuild;
    _Bool _isAppJustLaunched;
    _Bool _isAppJustDeepLinkOpened;
    _Bool _isGDPRConsented;
    _Bool _shouldPostAppLaunchData;
    NSDictionary *_baseFields;
    NSString *_currentTabIdentifier;
    NSString *_exitEventDestinationUrl;
    VUIMetricsPageEventData *_lastRecordedPageEventData;
    MTMetricsKit *_activeMetricsKit;
    MTMetricsKit *_metricsKitMain;
    MTMetricsKit *_loggerKit;
    MTMetricsKit *_metricsKitUnidentified;
    MTMetricsKit *_perfMetricsKit;
    NSObject<OS_dispatch_queue> *_metricsDataDispatchSQ;
    NSHashTable *_savedRecentEvents;
}

+ (id)sharedInstance;
+ (id)_baseToVPAFMapping;
@property(retain, nonatomic) NSHashTable *savedRecentEvents; // @synthesize savedRecentEvents=_savedRecentEvents;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *metricsDataDispatchSQ; // @synthesize metricsDataDispatchSQ=_metricsDataDispatchSQ;
@property(retain, nonatomic) MTMetricsKit *perfMetricsKit; // @synthesize perfMetricsKit=_perfMetricsKit;
@property(retain, nonatomic) MTMetricsKit *metricsKitUnidentified; // @synthesize metricsKitUnidentified=_metricsKitUnidentified;
@property(retain, nonatomic) MTMetricsKit *loggerKit; // @synthesize loggerKit=_loggerKit;
@property(retain, nonatomic) MTMetricsKit *metricsKitMain; // @synthesize metricsKitMain=_metricsKitMain;
@property(retain, nonatomic) MTMetricsKit *activeMetricsKit; // @synthesize activeMetricsKit=_activeMetricsKit;
@property(retain, nonatomic) VUIMetricsPageEventData *lastRecordedPageEventData; // @synthesize lastRecordedPageEventData=_lastRecordedPageEventData;
@property(retain, nonatomic) NSString *exitEventDestinationUrl; // @synthesize exitEventDestinationUrl=_exitEventDestinationUrl;
@property(readonly, copy, nonatomic) NSString *currentTabIdentifier; // @synthesize currentTabIdentifier=_currentTabIdentifier;
@property(copy, nonatomic) NSDictionary *baseFields; // @synthesize baseFields=_baseFields;
@property(nonatomic) _Bool shouldPostAppLaunchData; // @synthesize shouldPostAppLaunchData=_shouldPostAppLaunchData;
- (void).cxx_destruct;
- (id)getRecentEventsForDebuggerUI;
- (void)_saveRecentEvents:(id)arg1;
- (void)_handleWLKAppLibChange:(id)arg1;
- (void)_handleWLKSettingsDidChange:(id)arg1;
- (void)_handleServerConfigChange:(id)arg1;
- (void)_handleTabBarChange:(id)arg1;
- (void)_updateBaseFieldsWithData:(id)arg1;
- (void)flushMetrics;
- (void)updateGDPRConsentStatus;
- (void)registerForBaseFieldChanges;
- (id)_createDataAddingBaseAndPageFieldsToEventData:(id)arg1;
- (void)_initializeBaseFields;
- (void)jsDelegateRecordLogEvent:(id)arg1;
- (void)jsDelegateRecordPerfEvent:(id)arg1;
- (void)_flushUnreportedEvents:(id)arg1;
- (void)_recordEvent:(id)arg1 withEventData:(id)arg2;
- (void)jsDelegateRecordEvent:(id)arg1;
- (void)recordMedia:(id)arg1;
- (void)recordClick:(id)arg1;
- (void)recordPage:(id)arg1;
- (void)_flushMetricsOnExit;
- (void)_recordExit:(id)arg1;
- (void)recordAppWillBackground;
- (void)recordAppWillTerminate;
- (void)_recordEnter:(id)arg1;
- (void)recordOpenUrlLaunchWithExtURL:(id)arg1 andOptions:(id)arg2;
- (void)recordAppBecameActive;
- (void)recordAppLaunched;
- (id)_createMetricsKitForTopic:(id)arg1;
- (void)setupMetricsController;
- (id)init;
@property(readonly, copy, nonatomic) NSDictionary *iTunesVPAF;
@property(readonly, copy, nonatomic) NSDictionary *baseFieldsForVPAF;

@end
