//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityAchievements/ACHAwardingScheduler-Protocol.h>
#import <ActivityAchievements/ACHTemplateStoreObserving-Protocol.h>
#import <ActivityAchievements/HDDiagnosticObject-Protocol.h>
#import <ActivityAchievements/HDHealthDaemonReadyObserver-Protocol.h>
#import <ActivityAchievements/HDPeriodicActivityDelegate-Protocol.h>

@class ACHDataStore, ACHEarnedInstanceAwardingEngine, ACHEarnedInstanceStore, ACHTemplateStore, HDKeyValueDomain, HDMaintenanceOperation, HDPeriodicActivity, HDProfile, NSCalendar, NSDate, NSMutableArray, NSNumber, NSString, _HKDelayedOperation;
@protocol OS_dispatch_queue;

@interface ACHCompanionAwardingScheduler : NSObject <HDPeriodicActivityDelegate, HDHealthDaemonReadyObserver, HDDiagnosticObject, ACHTemplateStoreObserving, ACHAwardingScheduler>
{
    _Bool _shouldRetryEarnedInstanceDeletion;
    NSDate *_lastSuccessfulRunDate;
    HDProfile *_profile;
    ACHDataStore *_dataStore;
    ACHEarnedInstanceStore *_earnedInstanceStore;
    ACHTemplateStore *_templateStore;
    ACHEarnedInstanceAwardingEngine *_awardingEngine;
    HDPeriodicActivity *_scheduler;
    NSCalendar *_calendar;
    NSObject<OS_dispatch_queue> *_queue;
    NSNumber *_forceActivityAppInstalled;
    _HKDelayedOperation *_operation;
    NSMutableArray *_awardEvaluationCompletionBlocks;
    NSObject<OS_dispatch_queue> *_awardingEvaluationQueue;
    NSNumber *_coalescingDelayOverride;
    HDKeyValueDomain *_localKeyValueDomain;
    HDMaintenanceOperation *_maintenanceOperation;
}

@property(retain, nonatomic) HDMaintenanceOperation *maintenanceOperation; // @synthesize maintenanceOperation=_maintenanceOperation;
@property(retain, nonatomic) HDKeyValueDomain *localKeyValueDomain; // @synthesize localKeyValueDomain=_localKeyValueDomain;
@property(retain, nonatomic) NSNumber *coalescingDelayOverride; // @synthesize coalescingDelayOverride=_coalescingDelayOverride;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *awardingEvaluationQueue; // @synthesize awardingEvaluationQueue=_awardingEvaluationQueue;
@property(retain, nonatomic) NSMutableArray *awardEvaluationCompletionBlocks; // @synthesize awardEvaluationCompletionBlocks=_awardEvaluationCompletionBlocks;
@property(retain, nonatomic) _HKDelayedOperation *operation; // @synthesize operation=_operation;
@property(retain, nonatomic) NSNumber *forceActivityAppInstalled; // @synthesize forceActivityAppInstalled=_forceActivityAppInstalled;
@property(nonatomic) _Bool shouldRetryEarnedInstanceDeletion; // @synthesize shouldRetryEarnedInstanceDeletion=_shouldRetryEarnedInstanceDeletion;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain, nonatomic) HDPeriodicActivity *scheduler; // @synthesize scheduler=_scheduler;
@property(retain, nonatomic) ACHEarnedInstanceAwardingEngine *awardingEngine; // @synthesize awardingEngine=_awardingEngine;
@property(retain, nonatomic) ACHTemplateStore *templateStore; // @synthesize templateStore=_templateStore;
@property(retain, nonatomic) ACHEarnedInstanceStore *earnedInstanceStore; // @synthesize earnedInstanceStore=_earnedInstanceStore;
@property(retain, nonatomic) ACHDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(retain, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
@property(retain, nonatomic) NSDate *lastSuccessfulRunDate; // @synthesize lastSuccessfulRunDate=_lastSuccessfulRunDate;
- (void).cxx_destruct;
- (void)_queue_callAwardingCompletionsWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)_queue_addAwardingCompletion:(CDUnknownBlockType)arg1;
- (void)addAwardingCompletion:(CDUnknownBlockType)arg1;
- (void)overrideCoalescingDelay:(double)arg1;
- (void)shouldForceActivityAppInstalled:(_Bool)arg1;
- (_Bool)_shouldRunImmediatelyOnTemplateLoad;
- (_Bool)_didRunToday;
- (void)_queue_performCleanupTasks;
- (void)_queue_requestAwardingEvaluation;
- (void)_queue_removeMaintenanceOperation;
- (void)scheduleMaintenanceTaskForAwardingWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestAwardingEvaluationWithCompletion:(CDUnknownBlockType)arg1;
- (id)diagnosticDescription;
- (_Bool)periodicActivityRequiresProtectedData:(id)arg1;
- (void)performPeriodicActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (void)templateStore:(id)arg1 didRemoveTemplates:(id)arg2;
- (void)templateStore:(id)arg1 didAddNewTemplates:(id)arg2;
- (void)templateStoreDidFinishInitialFetch:(id)arg1;
- (void)daemonReady:(id)arg1;
- (void)_queue_removeAllEarnedInstances;
- (void)_applicationsUninstalled:(id)arg1;
- (void)_applicationsInstalled:(id)arg1;
- (_Bool)_userInfoContainsCompanionActivityBundleID:(id)arg1;
- (void)_systemTimeZoneDidChange:(id)arg1;
- (void)clearLastSuccessfulRunDate;
- (void)setlastSuccessfulRunDate:(id)arg1;
- (id)initWithProfile:(id)arg1 dataStore:(id)arg2 earnedInstanceStore:(id)arg3 templateStore:(id)arg4 awardingEngine:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

