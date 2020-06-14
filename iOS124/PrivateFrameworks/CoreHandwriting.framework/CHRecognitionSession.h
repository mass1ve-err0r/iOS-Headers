//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreHandwriting/CHRecognitionSessionTaskDelegate-Protocol.h>

@class CHRecognitionSessionResult, NSArray, NSData, NSMutableArray, NSMutableDictionary, NSString;
@protocol CHRecognitionSessionDataSource, CHStrokeProvider, OS_dispatch_queue;

@interface CHRecognitionSession : NSObject <CHRecognitionSessionTaskDelegate>
{
    CHRecognitionSessionResult *_lastRecognitionResult;
    long long _status;
    id <CHStrokeProvider> _latestStrokeProvider;
    _Bool __hasUnprocessedChanges;
    NSArray *_preferredLocales;
    id <CHRecognitionSessionDataSource> _dataSource;
    NSArray *__effectiveLocales;
    NSMutableDictionary *__recognizersByLocaleID;
    unsigned long long __changeCoalescingIndex;
    NSMutableArray *__changeObservers;
    NSMutableArray *__inputDrawingClients;
    NSObject<OS_dispatch_queue> *__tasksWorkQueue;
    NSObject<OS_dispatch_queue> *__sessionQueue;
    NSMutableArray *__activeTasks;
}

+ (_Bool)_isLocaleSupported:(id)arg1;
+ (id)effectiveLocalesFromLocales:(id)arg1;
@property(readonly, retain, nonatomic) NSMutableArray *_activeTasks; // @synthesize _activeTasks=__activeTasks;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *_sessionQueue; // @synthesize _sessionQueue=__sessionQueue;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *_tasksWorkQueue; // @synthesize _tasksWorkQueue=__tasksWorkQueue;
@property(readonly, retain, nonatomic) NSMutableArray *_inputDrawingClients; // @synthesize _inputDrawingClients=__inputDrawingClients;
@property(readonly, retain, nonatomic) NSMutableArray *_changeObservers; // @synthesize _changeObservers=__changeObservers;
@property(nonatomic) unsigned long long _changeCoalescingIndex; // @synthesize _changeCoalescingIndex=__changeCoalescingIndex;
@property(readonly, retain, nonatomic) NSMutableDictionary *_recognizersByLocaleID; // @synthesize _recognizersByLocaleID=__recognizersByLocaleID;
@property(nonatomic, setter=_setHasUnprocessedChanges:) _Bool _hasUnprocessedChanges; // @synthesize _hasUnprocessedChanges=__hasUnprocessedChanges;
@property(copy, nonatomic, setter=_setEffectiveLocales:) NSArray *_effectiveLocales; // @synthesize _effectiveLocales=__effectiveLocales;
@property(nonatomic) id <CHRecognitionSessionDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(copy, nonatomic) NSArray *preferredLocales; // @synthesize preferredLocales=_preferredLocales;
- (_Bool)loadSessionData:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSData *sessionData;
- (void)_cleanupCachedRecognizers;
- (id)recognizerForLocale:(id)arg1;
- (void)_processPendingStrokeChangesIfAvailable;
- (void)_scheduleProcessStrokeProviderChangesImmediately:(_Bool)arg1;
- (double)_preferredCoalescingInterval;
- (_Bool)_isReadyToProcessChanges;
- (void)rebuildRecognitionResults;
- (void)_cancelOngoingRequests;
- (void)cancelOngoingRequests;
- (void)setNeedsRecognitionUpdate;
- (id)indexableContent;
- (_Bool)_hasPendingRecognitionTasks;
- (void)_notifyObserversWithBlock:(CDUnknownBlockType)arg1;
@property(nonatomic, setter=_setStatus:) long long status;
- (void)_updateRecognitionSessionStatus;
@property(retain, setter=_setLatestStrokeProvider:) id <CHStrokeProvider> latestStrokeProvider;
@property(retain, setter=_setLastRecognitionResult:) CHRecognitionSessionResult *lastRecognitionResult;
@property(copy, nonatomic) NSArray *locales;
- (void)dealloc;
- (id)init;
- (void)unregisterInputDrawingClient:(id)arg1;
- (void)registerInputDrawingClient:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (id)lastRecognitionResultWaitingForPendingTasks;
- (void)waitForPendingRecognitionTasks;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

