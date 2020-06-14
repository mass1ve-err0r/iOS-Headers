//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKContainer, ICSelectorDelayer, NSDate, NSDictionary, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSTimer;
@protocol ICCloudContextDelegate, OS_dispatch_queue;

@interface ICCloudContext : NSObject
{
    _Bool _fetchOperationsPending;
    _Bool _needsToUpdateSubscriptions;
    _Bool _disabled;
    _Bool _disabledInternal;
    _Bool _needsToProcessAllObjects;
    _Bool _didAddObservers;
    _Bool _fetchingEnabled;
    _Bool _syncDisabledByServer;
    _Bool _didCheckForLongLivedOperations;
    id <ICCloudContextDelegate> _cloudContextDelegate;
    NSDate *_lastSyncDate;
    long long _qualityOfService;
    unsigned long long _discretionaryNetworkBehavior;
    CKContainer *_container;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_processingQueue;
    NSMutableSet *_objectIDsToRetry;
    NSTimer *_retryTimer;
    NSMutableDictionary *_retryCountsByOperationType;
    NSMutableSet *_objectIDsToProcess;
    ICSelectorDelayer *_processingSelectorDelayer;
    ICSelectorDelayer *_pollingSelectorDelayer;
    NSMutableSet *_zoneIDsNeedingFetchChanges;
    NSMutableSet *_zoneIDsFetchingChanges;
    NSMutableSet *_zoneIDsNeedingToBeSaved;
    NSMutableSet *_subscribedSubscriptionIDs;
}

+ (void)deleteAllServerChangeTokens;
+ (_Bool)shouldIgnoreErrorForBackoffTimer:(id)arg1;
+ (id)errorCodesToIgnoreForBackoffTimer;
+ (id)zoneIDsFromZoneInfos:(id)arg1;
+ (id)zoneInfosFromZoneIDs:(id)arg1;
+ (_Bool)isZoneOptions:(id)arg1 subsetOfZoneOptions:(id)arg2;
+ (id)errorsFromError:(id)arg1;
+ (id)deduplicatedRecordsForCloudObjects:(id)arg1;
+ (id)objectsByDatabaseScope:(id)arg1;
+ (id)sortedRecords:(id)arg1;
+ (id)errorFromOperations:(id)arg1;
+ (id)errorFromErrors:(id)arg1;
+ (id)errorForDisabledCloudSyncing;
+ (id)metadataZoneID;
+ (id)notesZoneID;
+ (id)newNotesContainer;
+ (id)sharedContext;
@property(nonatomic) _Bool didCheckForLongLivedOperations; // @synthesize didCheckForLongLivedOperations=_didCheckForLongLivedOperations;
@property(retain) NSMutableSet *subscribedSubscriptionIDs; // @synthesize subscribedSubscriptionIDs=_subscribedSubscriptionIDs;
@property(retain, nonatomic) NSMutableSet *zoneIDsNeedingToBeSaved; // @synthesize zoneIDsNeedingToBeSaved=_zoneIDsNeedingToBeSaved;
@property(retain, nonatomic) NSMutableSet *zoneIDsFetchingChanges; // @synthesize zoneIDsFetchingChanges=_zoneIDsFetchingChanges;
@property(retain, nonatomic) NSMutableSet *zoneIDsNeedingFetchChanges; // @synthesize zoneIDsNeedingFetchChanges=_zoneIDsNeedingFetchChanges;
@property(nonatomic) _Bool syncDisabledByServer; // @synthesize syncDisabledByServer=_syncDisabledByServer;
@property(nonatomic, getter=isFetchingEnabled) _Bool fetchingEnabled; // @synthesize fetchingEnabled=_fetchingEnabled;
@property(nonatomic) _Bool didAddObservers; // @synthesize didAddObservers=_didAddObservers;
@property(retain) ICSelectorDelayer *pollingSelectorDelayer; // @synthesize pollingSelectorDelayer=_pollingSelectorDelayer;
@property(retain) ICSelectorDelayer *processingSelectorDelayer; // @synthesize processingSelectorDelayer=_processingSelectorDelayer;
@property(retain, nonatomic) NSMutableSet *objectIDsToProcess; // @synthesize objectIDsToProcess=_objectIDsToProcess;
@property(nonatomic) _Bool needsToProcessAllObjects; // @synthesize needsToProcessAllObjects=_needsToProcessAllObjects;
@property(getter=isDisabledInternal) _Bool disabledInternal; // @synthesize disabledInternal=_disabledInternal;
@property(retain, nonatomic) NSMutableDictionary *retryCountsByOperationType; // @synthesize retryCountsByOperationType=_retryCountsByOperationType;
@property(retain) NSTimer *retryTimer; // @synthesize retryTimer=_retryTimer;
@property(retain, nonatomic) NSMutableSet *objectIDsToRetry; // @synthesize objectIDsToRetry=_objectIDsToRetry;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) CKContainer *container; // @synthesize container=_container;
@property(getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) unsigned long long discretionaryNetworkBehavior; // @synthesize discretionaryNetworkBehavior=_discretionaryNetworkBehavior;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property _Bool needsToUpdateSubscriptions; // @synthesize needsToUpdateSubscriptions=_needsToUpdateSubscriptions;
@property(retain) NSDate *lastSyncDate; // @synthesize lastSyncDate=_lastSyncDate;
@property(readonly, nonatomic) _Bool fetchOperationsPending; // @synthesize fetchOperationsPending=_fetchOperationsPending;
@property(nonatomic) __weak id <ICCloudContextDelegate> cloudContextDelegate; // @synthesize cloudContextDelegate=_cloudContextDelegate;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)serverChangeTokenForChangedZonesInDatabase:(id)arg1;
- (void)deleteServerChangeTokenForChangedZonesInDatabase:(id)arg1;
- (void)saveServerChangeToken:(id)arg1 forChangedZonesInDatabase:(id)arg2;
- (void)deleteServerChangeTokenForRecordZoneID:(id)arg1 databaseScope:(long long)arg2;
- (id)serverChangeTokenForRecordZoneID:(id)arg1 databaseScope:(long long)arg2;
- (void)saveServerChangeToken:(id)arg1 forRecordZoneID:(id)arg2 databaseScope:(long long)arg3;
- (void)retryOperationsIfNecessary;
- (void)startRetryTimerIfNecessaryWithError:(id)arg1;
- (void)incrementOrClearRetryCountForOperationType:(id)arg1 error:(id)arg2;
- (void)clearRetryCountForOperationType:(id)arg1;
- (void)incrementRetryCountForOperationType:(id)arg1;
- (void)checkForLongLivedOperations;
- (void)updateCloudContextState;
- (_Bool)isInForeground;
- (void)clearSubscribedSubscriptionIDs;
- (void)saveSubscriptionsForDatabase:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchSubscriptionsForDatabase:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateSubscriptionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)subscriptionForDatabase:(id)arg1;
- (void)clearZoneFetchState;
- (void)saveZoneFetchState;
- (void)loadZoneFetchState;
- (void)fetchDatabaseChangesOperation:(id)arg1 finishedWithServerChangeToken:(id)arg2 error:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)fetchDatabaseChangesOperation:(id)arg1 changeTokenUpdated:(id)arg2;
- (void)fetchDatabaseChangesOperation:(id)arg1 recordZoneWithIDWasDeleted:(id)arg2;
- (void)fetchDatabaseChangesOperation:(id)arg1 recordZoneWithIDChanged:(id)arg2;
- (id)operationToFetchDatabaseChangesForDatabase:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchDatabaseChangesForDatabases:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchDatabaseChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)firePollingSyncRequest;
- (void)syncIfNecessary;
- (void)fetchRecordZoneChangesOperation:(id)arg1 zoneID:(id)arg2 changeTokenUpdated:(id)arg3;
- (void)fetchRecordZoneChangesOperation:(id)arg1 recordWasDeletedWithRecordID:(id)arg2 recordType:(id)arg3 context:(id)arg4;
- (void)fetchRecordZoneChangesOperation:(id)arg1 recordChanged:(id)arg2 context:(id)arg3;
- (void)fetchRecordZoneChangesOperationDidComplete:(id)arg1 error:(id)arg2;
- (void)fetchRecordZoneChangesOperation:(id)arg1 completedFetchForZoneID:(id)arg2 serverChangeToken:(id)arg3 error:(id)arg4;
- (id)newOperationToFetchRecordZoneChangesWithZoneOptions:(id)arg1 database:(id)arg2;
- (id)operationToFetchRecordZoneChangesForZoneIDs:(id)arg1 database:(id)arg2;
- (id)operationsToFetchRecordZoneChangesForZoneIDs:(id)arg1;
- (void)addOperationsToFetchRecordZoneChangesForZoneIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchRecordZoneChangesForZoneIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchRecordZoneChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)handleNotification:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_processCloudObjects:(id)arg1 operationQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)processObjectIDs:(id)arg1 operationQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)retryProcessingCloudObjects;
- (void)processAllCloudObjectsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)processPendingCloudObjectsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)processPendingCloudObjects;
- (void)addOperationToProcessObjectsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)contextDidSave:(id)arg1;
- (id)operationToSaveZonesForZoneIDs:(id)arg1;
- (id)operationToSaveZonesIfNecessary;
- (void)addDependenciesForModifyRecordsOperation:(id)arg1;
- (void)recursiveCancelDependentOperations:(id)arg1;
- (_Bool)partialError:(id)arg1 containsErrorCode:(long long)arg2;
- (void)handleGenericPartialFailuresForError:(id)arg1 operation:(id)arg2;
- (void)modifyRecordsOperation:(id)arg1 didCompleteWithSavedRecords:(id)arg2 deletedRecordIDs:(id)arg3 rootRecordIDsByShareID:(id)arg4 error:(id)arg5;
- (void)modifyRecordsOperation:(id)arg1 perDeleteRecordIDCompletion:(id)arg2 rootRecordIDsByShareID:(id)arg3 error:(id)arg4;
- (void)modifyRecordsOperation:(id)arg1 perSaveRecordCompletion:(id)arg2 error:(id)arg3;
- (void)addCallbackBlocksToModifyRecordsOperation:(id)arg1 rootRecordIDsByShareID:(id)arg2;
- (id)operationToModifyRecordsToSave:(id)arg1 delete:(id)arg2 rootRecordIDsByShareID:(id)arg3 database:(id)arg4;
- (id)operationsToModifyRecordsToSave:(id)arg1 delete:(id)arg2 rootRecordIDsByShareID:(id)arg3 database:(id)arg4;
- (id)operationsToModifyRecordsForCloudObjectsToSave:(id)arg1 delete:(id)arg2 deleteShares:(id)arg3 saveUserSpecificRecords:(id)arg4 addDependencies:(_Bool)arg5;
- (void)_addModifyRecordsOperationsWithCloudObjectsToSave:(id)arg1 delete:(id)arg2 waitForDependencies:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)addModifyRecordsOperationsWithCloudObjectsToSave:(id)arg1 delete:(id)arg2 waitForDependencies:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)deleteCloudObjects:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)pushCloudObjects:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)didFetchShare:(id)arg1 context:(id)arg2;
- (void)fetchOperation:(id)arg1 didCompleteWithRecordsByRecordID:(id)arg2 error:(id)arg3;
- (void)fetchOperation:(id)arg1 fetchedRecord:(id)arg2 recordID:(id)arg3 error:(id)arg4;
- (void)fetchOperation:(id)arg1 progressWithRecordID:(id)arg2 progress:(double)arg3;
- (id)operationToFetchRecordIDs:(id)arg1 database:(id)arg2 qualityOfService:(long long)arg3;
- (id)operationsToFetchRecordIDs:(id)arg1 database:(id)arg2 qualityOfService:(long long)arg3;
- (id)operationsToFetchRecordIDs:(id)arg1 qualityOfService:(long long)arg2;
- (void)addFetchOperationsForRecordIDs:(id)arg1 qualityOfService:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchRecordIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchCloudObjects:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)newPlaceholderObjectForRecordID:(id)arg1 recordType:(id)arg2 context:(id)arg3;
- (id)newCloudObjectForRecord:(id)arg1 context:(id)arg2;
- (id)existingCloudObjectForUserSpecificRecordID:(id)arg1 createPlaceholderIfNecessary:(_Bool)arg2 context:(id)arg3;
- (id)existingCloudObjectForRecordID:(id)arg1 recordType:(id)arg2 context:(id)arg3;
- (id)existingCloudObjectForRecord:(id)arg1 context:(id)arg2;
- (void)fetchUserRecordWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateAccountStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) long long accountStatus;
- (void)finishOperationsForRecordID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)canRetryImmediatelyAfterError:(id)arg1;
- (double)timeIntervalToRetryAfterFromError:(id)arg1;
- (_Bool)isInternetReachable;
- (_Bool)isFetchingAllRecordZones;
- (void)deleteRecordZonesWithZoneIDs:(id)arg1 markZonesAsUserPurged:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)clearPendingActivity;
- (void)cancelEverythingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_syncWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)syncWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)allCloudObjectsInContext:(id)arg1;
- (void)receivedZoneNotFound:(id)arg1 operation:(id)arg2;
- (id)allZoneIDs;
- (void)addStateHandler;
- (void)printOperationQueue;
- (_Bool)hasPendingOperations;
- (void)cloudKitAccountChanged:(id)arg1;
- (void)reachabilityChanged:(id)arg1;
@property(readonly, nonatomic) NSDictionary *cloudObjectClassesByRecordType;
- (void)updateSelectorDelayers;
- (void)updateConfiguration;
- (void)disableCloudSyncingIfCurrentVersionNotSuppported;
- (_Bool)isCloudKitAccountAvailable;
- (_Bool)isReadyToSync;
- (id)readinessLoggingDescription;
- (void)dealloc;
- (id)init;

@end

