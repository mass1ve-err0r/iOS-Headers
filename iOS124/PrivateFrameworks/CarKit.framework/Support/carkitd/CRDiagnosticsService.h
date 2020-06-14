//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CARSessionObserving-Protocol.h"

@class AFAccount, CARSessionStatus, CLLocationManager, CRFileRadarAlert, CRInitiateLogsAlert, NSArray, NSString, NSURL;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface CRDiagnosticsService : NSObject <CARSessionObserving>
{
    _Bool _dictationComplete;
    _Bool _sysdiagnoseInFlight;
    _Bool _remoteLogsInFlight;
    unsigned int _sleepInterval;
    NSArray *_triggeredInfoWhileCollecting;
    NSArray *_pendingDiagnosticsData;
    NSObject<OS_dispatch_queue> *_diagnosticsSerialQueue;
    NSURL *_collectedDiagnosticsRadarURL;
    CRFileRadarAlert *_fileRadarAlert;
    CRInitiateLogsAlert *_initiateLogsAlert;
    NSString *_transcription;
    CARSessionStatus *_session;
    NSString *_additionalDescription;
    NSString *_frontMostBundleID;
    NSString *_overlayBundleID;
    AFAccount *_siriInfo;
    CLLocationManager *_locationManager;
    NSObject<OS_os_transaction> *_idleExitTransaction;
    CDUnknownBlockType _diagnosticsCompletionBlock;
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType diagnosticsCompletionBlock; // @synthesize diagnosticsCompletionBlock=_diagnosticsCompletionBlock;
@property(retain, nonatomic) NSObject<OS_os_transaction> *idleExitTransaction; // @synthesize idleExitTransaction=_idleExitTransaction;
@property(nonatomic) unsigned int sleepInterval; // @synthesize sleepInterval=_sleepInterval;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) AFAccount *siriInfo; // @synthesize siriInfo=_siriInfo;
@property(retain, nonatomic) NSString *overlayBundleID; // @synthesize overlayBundleID=_overlayBundleID;
@property(retain, nonatomic) NSString *frontMostBundleID; // @synthesize frontMostBundleID=_frontMostBundleID;
@property(retain, nonatomic) NSString *additionalDescription; // @synthesize additionalDescription=_additionalDescription;
@property(retain, nonatomic) CARSessionStatus *session; // @synthesize session=_session;
@property(retain, nonatomic) NSString *transcription; // @synthesize transcription=_transcription;
@property(retain, nonatomic) CRInitiateLogsAlert *initiateLogsAlert; // @synthesize initiateLogsAlert=_initiateLogsAlert;
@property(retain, nonatomic) CRFileRadarAlert *fileRadarAlert; // @synthesize fileRadarAlert=_fileRadarAlert;
@property(retain, nonatomic) NSURL *collectedDiagnosticsRadarURL; // @synthesize collectedDiagnosticsRadarURL=_collectedDiagnosticsRadarURL;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *diagnosticsSerialQueue; // @synthesize diagnosticsSerialQueue=_diagnosticsSerialQueue;
@property(retain, nonatomic) NSArray *pendingDiagnosticsData; // @synthesize pendingDiagnosticsData=_pendingDiagnosticsData;
@property(retain, nonatomic) NSArray *triggeredInfoWhileCollecting; // @synthesize triggeredInfoWhileCollecting=_triggeredInfoWhileCollecting;
@property(nonatomic) _Bool remoteLogsInFlight; // @synthesize remoteLogsInFlight=_remoteLogsInFlight;
@property(nonatomic) _Bool sysdiagnoseInFlight; // @synthesize sysdiagnoseInFlight=_sysdiagnoseInFlight;
@property(nonatomic) _Bool dictationComplete; // @synthesize dictationComplete=_dictationComplete;
- (void).cxx_destruct;
- (void)sessionDidDisconnect:(id)arg1;
- (void)sessionDidConnect:(id)arg1;
- (void)_endIdleExitTransaction;
- (void)_beginIdleExitTransaction;
- (id)radarURLFromAttachmentsForData:(id)arg1;
- (id)_screenshotPathsForData:(id)arg1;
- (id)_extensionIdentifiersForDiagnosticsData:(id)arg1;
- (id)_collectCarConfiguration;
- (void)_presentFileRadarAlert;
- (void)_presentDiagnosticsInFlightAlert;
- (void)_presentCarAlertWithTitle:(id)arg1 dismissTime:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performVibrate;
- (void)_disableStatusBarColor;
- (void)_enableStatusBarColor;
- (void)_stopDictation;
- (void)_beginDictation;
- (void)_completeDictation;
- (void)_presentDictationBanner;
- (void)_processRemoteLogs:(id)arg1;
- (void)_processSysdiagnose:(id)arg1;
- (void)_remoteLogsForTimestamp:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_sysdiagnoseWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool shouldTriggerSysdiagnose;
- (_Bool)_alwaysTakeSysdiagnoseEnabled;
- (_Bool)_mapsActive;
- (id)_formattedLastLocation;
- (void)_completeLogging;
- (void)collectDiagnosticsWithDeviceScreenshotURL:(id)arg1 carScreenshotURL:(id)arg2 attachmentURLs:(id)arg3 accessoryDescription:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_init;
- (id)initWithSession:(id)arg1 locationManager:(id)arg2 layoutMonitor:(id)arg3 sleepInterval:(unsigned int)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

