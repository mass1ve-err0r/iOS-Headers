//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSCloudKitThrottlerDataStore-Protocol.h>

@class NSMutableDictionary, NSString, WBSCloudHistoryConfiguration, WBSCloudHistoryPushAgentProxy, WBSCloudKitThrottler, WBSHistory, WBSOneShotTimer;
@protocol NSObject, OS_dispatch_queue, WBSCloudHistoryDataStore;

@interface WBSCloudHistory : NSObject <WBSCloudKitThrottlerDataStore>
{
    NSObject<OS_dispatch_queue> *_cloudHistoryQueue;
    WBSHistory *_history;
    _Bool _cloudHistoryEnabled;
    _Bool _saveChangesWhenHistoryLoads;
    _Bool _fetchChangesWhenHistoryLoads;
    id <NSObject> _historyWasLoadedObserver;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>> _saveOperationSuddenTerminationDisabler;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>> _fetchOperationSuddenTerminationDisabler;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>> _replayLongLivedSaveOperationSuddenTerminationDisabler;
    _Bool _replayLongLivedSaveOperationHasBeenPerformed;
    WBSCloudHistoryConfiguration *_configuration;
    id <WBSCloudHistoryDataStore> _store;
    WBSCloudKitThrottler *_saveChangesThrottler;
    WBSCloudKitThrottler *_fetchChangesThrottler;
    WBSCloudKitThrottler *_syncCircleSizeRetrievalThrottler;
    WBSOneShotTimer *_serverBackoffTimer;
    _Bool _saveChangesWhenBackoffTimerFires;
    _Bool _fetchChangesWhenBackoffTimerFires;
    WBSCloudHistoryPushAgentProxy *_pushAgent;
    WBSOneShotTimer *_pushNotificationFetchTimer;
    unsigned long long _numberOfDevicesInSyncCircle;
    NSMutableDictionary *_syncCircleSizeRetrievalCompletionHandlersByOperation;
    CDUnknownBlockType _fetchCompletionHandler;
    CDUnknownBlockType _saveCompletionHandler;
    _Bool _removedHistoryItemsArePendingSave;
}

@property(nonatomic) unsigned long long numberOfDevicesInSyncCircle; // @synthesize numberOfDevicesInSyncCircle=_numberOfDevicesInSyncCircle;
@property(nonatomic) _Bool removedHistoryItemsArePendingSave; // @synthesize removedHistoryItemsArePendingSave=_removedHistoryItemsArePendingSave;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)resetForAccountChange;
- (void)_resetCloudHistoryDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_setCachedNumberOfDevicesInSyncCircle:(unsigned long long)arg1;
- (unsigned long long)_cachedNumberOfDevicesInSyncCircle;
- (void)_updateThrottlerPolicies;
- (void)_updateDeviceCountInResponseToPushNotification;
- (id)_currentSyncCircleSizeRetrievalThrottlerPolicyString;
- (id)_currentFetchChangesThrottlerPolicyString;
- (id)_currentSaveChangesThrottlerPolicyString;
- (void)setRecordOfPastOperations:(id)arg1 forThrottler:(id)arg2;
- (id)recordOfPastOperationsForThrottler:(id)arg1;
- (void)_cloudHistoryConfigurationChanged:(id)arg1;
- (void)_serverBackoffTimerFired:(id)arg1;
- (void)_backOffWithInterval:(double)arg1;
- (double)_backoffTimeIntervalFromError:(id)arg1;
- (long long)_resultFromError:(id)arg1;
- (long long)_estimatedPriorityForPotentialSaveAttempt;
- (long long)_priorityForSaveWithVisits:(id)arg1 tombstones:(id)arg2 bypassingThrottler:(_Bool)arg3;
- (void)_historyItemsWereRemoved:(id)arg1;
- (void)_performBlockAsynchronouslyOnCloudHistoryQueueAfterHistoryHasLoaded:(CDUnknownBlockType)arg1;
- (void)_historyWasLoaded:(id)arg1;
- (void)_registerForHistoryWasLoadedNotificationIfNecessary;
- (void)_fetchChangesWhenHistoryLoads;
- (void)_saveChangesWhenHistoryLoads;
- (void)_determineNumberOfDevicesInSyncCircleForOperation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_fetchChangesInResponseToPushNotification:(id)arg1;
- (void)_processPendingPushNotifications;
- (void)_pushNotificationReceived:(id)arg1;
- (void)_setPushNotificationAreInitialized:(_Bool)arg1;
- (void)_pushNotificationsAreInitializedWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_initializePushNotificationSupport;
- (void)_removePersistedLongLivedSaveOperationDictionary;
- (void)_persistLongLivedSaveOperationDictionaryWithOperationID:(id)arg1 databaseGeneration:(long long)arg2;
- (void)_persistedLongLivedSaveOperationID:(id *)arg1 databaseGeneration:(long long *)arg2;
- (void)_updateHistoryAfterSuccessfulPersistedLongLivedSaveOperationWithGeneration:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_replayPersistedLongLivedSaveOperationIfNecessary;
- (void)_pruneTombstonesThatCanNoLongerMatchVisitsFetchedFromCloud;
- (void)_fetchAndMergeChangesWithServerChangeTokenData:(id)arg1 withPriority:(long long)arg2;
- (void)_setServerChangeToken:(id)arg1;
- (void)_getServerChangeTokenDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)_callAndResetFetchCompletionHandlerWithError:(id)arg1;
- (void)_registerFetchCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchAndMergeChangesBypassingThrottler:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchAndMergeChangesBypassingThrottler;
- (void)fetchAndMergeChanges;
- (id)dateOfNextPermittedSaveChangesAttempt;
- (void)_postSaveChangesAttemptCompletedNotificationWithAllPendingDataSaved:(_Bool)arg1;
- (void)_saveVisits:(id)arg1 tombstones:(id)arg2 toCloudHistoryBypassingThrottler:(_Bool)arg3 longLivedOperationPersistenceCompletion:(CDUnknownBlockType)arg4 withCallback:(CDUnknownBlockType)arg5;
- (void)getVisitsAndTombstonesNeedingSyncWithVisitSyncWindow:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_callAndResetSaveCompletionHandlerWithError:(id)arg1;
- (void)_registerSaveCompletionHandler:(CDUnknownBlockType)arg1;
- (void)saveChangesBypassingThrottler:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveChangesToCloudHistoryStoreBypassingThrottler;
- (void)saveChangesToCloudHistoryStore;
@property(nonatomic, getter=isCloudHistoryEnabled) _Bool cloudHistoryEnabled;
- (void)dealloc;
- (id)initWithHistory:(id)arg1 configuration:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)initWithHistory:(id)arg1 configuration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

