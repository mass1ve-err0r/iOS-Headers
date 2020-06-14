//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/NSObject-Protocol.h>

@class CKAcceptSharesOperationInfo, CKAggregateZonePCSOperationInfo, CKArchiveRecordsOperationInfo, CKCodeFunctionInvokeOperationInfo, CKCompleteParticipantVettingOperationInfo, CKContainerSetupInfo, CKDPResponseOperationResult, CKDatabaseOperationInfo, CKDiscoverUserIdentitiesOperationInfo, CKEventMetricInfo, CKFetchArchivedRecordsOperationInfo, CKFetchDatabaseChangesOperationInfo, CKFetchNotificationChangesOperationInfo, CKFetchRecordVersionsOperationInfo, CKFetchRecordZoneChangesOperationInfo, CKFetchRecordZonesOperationInfo, CKFetchRecordsOperationInfo, CKFetchShareMetadataOperationInfo, CKFetchShareParticipantKeyOperationInfo, CKFetchShareParticipantsOperationInfo, CKFetchSubscriptionsOperationInfo, CKFetchWebAuthTokenOperationInfo, CKInitiateParticipantVettingOperationInfo, CKMarkNotificationsReadOperationInfo, CKModifyBadgeOperationInfo, CKModifyRecordAccessOperationInfo, CKModifyRecordZonesOperationInfo, CKModifyRecordsOperationInfo, CKModifySubscriptionsOperationInfo, CKModifyWebSharingOperationInfo, CKOperationInfo, CKPublishAssetsOperationInfo, CKQueryOperationInfo, CKRecordID, CKRecordZoneID, CKRepairZonePCSOperationInfo, CKShare, NSArray, NSError, NSFileHandle, NSString;

@protocol CKXPCDaemon <NSObject>
- (void)tossConfigWithSetupInfo:(CKContainerSetupInfo *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)repairZonePCSWithOperationInfo:(CKRepairZonePCSOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)getRecordPCSDiagnosticsForZonesWithSetupInfo:(CKContainerSetupInfo *)arg1 completionHandler:(void (^)(NSArray *))arg2;
- (void)getPCSDiagnosticsForZonesWithSetupInfo:(CKContainerSetupInfo *)arg1 completionHandler:(void (^)(CKPCSDiagnosticInformation *))arg2;
- (void)submitClientEventMetric:(CKEventMetricInfo *)arg1 withSetupInfo:(CKContainerSetupInfo *)arg2;
- (void)triggerAutoBugCaptureSnapshot;
- (void)flushOperationMetricsToPowerLog;
- (void)dataclassEnabled:(NSString *)arg1 withSetupInfo:(CKContainerSetupInfo *)arg2 completionHandler:(void (^)(NSString *, _Bool, NSError *))arg3;
- (void)updatePushTokens;
- (void)clearPILSCacheForLookupInfos:(NSArray *)arg1;
- (void)clearContextFromMetadataCache;
- (void)wipeAllCachesAndDie;
- (void)statusGroupsForApplicationPermission:(unsigned long long)arg1 setupInfo:(CKContainerSetupInfo *)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)resetAllApplicationPermissionsWithSetupInfo:(CKContainerSetupInfo *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)setApplicationPermission:(unsigned long long)arg1 enabled:(_Bool)arg2 setupInfo:(CKContainerSetupInfo *)arg3 completionHandler:(void (^)(long long, NSError *))arg4;
- (void)accountChangedWithID:(NSString *)arg1;
- (void)accountsWillDeleteAccount:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)accountsDidRevokeAccessToBundleID:(NSString *)arg1 containerIdentifiers:(NSArray *)arg2;
- (void)accountsDidGrantAccessToBundleID:(NSString *)arg1 containerIdentifiers:(NSArray *)arg2;
- (void)getBehaviorOptionForKey:(NSString *)arg1 isContainerOption:(_Bool)arg2 completionHandler:(void (^)(id))arg3;
- (void)clearPCSCachesForKnownContextsWithSetupInfo:(CKContainerSetupInfo *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)getOutstandingOperationCountWithSetupInfo:(CKContainerSetupInfo *)arg1 completionHandler:(void (^)(unsigned long long, NSError *))arg2;
- (void)wipeAllCachedLongLivedProxiesWithSetupInfo:(CKContainerSetupInfo *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)clearCachesForZoneWithSetupInfo:(CKContainerSetupInfo *)arg1 zoneID:(CKRecordZoneID *)arg2 databaseScope:(long long)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)clearCachesForRecordWithSetupInfo:(CKContainerSetupInfo *)arg1 recordID:(CKRecordID *)arg2 databaseScope:(long long)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)clearCachesWithSetupInfo:(CKContainerSetupInfo *)arg1 options:(unsigned long long)arg2 databaseScope:(long long)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)clearAuthTokensWithSetupInfo:(CKContainerSetupInfo *)arg1 recordID:(CKRecordID *)arg2 databaseScope:(long long)arg3;
- (void)clearRecordCacheWithSetupInfo:(CKContainerSetupInfo *)arg1 databaseScope:(long long)arg2;
- (void)showAssetCacheWithSetupInfo:(CKContainerSetupInfo *)arg1 databaseScope:(long long)arg2;
- (void)clearAssetCacheWithSetupInfo:(CKContainerSetupInfo *)arg1 databaseScope:(long long)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)setFakeResponseOperationResult:(CKDPResponseOperationResult *)arg1 forNextRequestOfClassName:(NSString *)arg2 forItemID:(id)arg3 withLifetime:(int)arg4 setupInfo:(CKContainerSetupInfo *)arg5;
- (void)setFakeError:(NSError *)arg1 forNextRequestOfClassName:(NSString *)arg2 setupInfo:(CKContainerSetupInfo *)arg3;
- (void)dumpDaemonStatusReportToFileHandle:(NSFileHandle *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)dumpAllClientsStatusReportToFileHandle:(NSFileHandle *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)performAggregateZonePCSOperation:(CKAggregateZonePCSOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)currentUserBoundaryKeyWithSetupInfo:(CKContainerSetupInfo *)arg1 completionHandler:(void (^)(NSData *, NSError *))arg2;
- (void)displayInfoOnAccountWithSetupInfo:(CKContainerSetupInfo *)arg1 completionHandler:(void (^)(NSPersonNameComponents *, NSString *, NSString *, NSError *))arg2;
- (void)currentDeviceIDWithSetupInfo:(CKContainerSetupInfo *)arg1 completionHandler:(void (^)(NSString *, NSError *))arg2;
- (void)serverEnvironmentWithSetupInfo:(CKContainerSetupInfo *)arg1 completionHandler:(void (^)(long long, NSError *))arg2;
- (void)serverPreferredPushEnvironmentWithSetupInfo:(CKContainerSetupInfo *)arg1 completionHandler:(void (^)(NSString *, NSError *))arg2;
- (void)fetchAllLongLivedOperationIDsWithSetupInfo:(CKContainerSetupInfo *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)fetchLongLivedOperationsWithIDs:(NSArray *)arg1 setupInfo:(CKContainerSetupInfo *)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;
- (void)performCodeFunctionInvokeOperation:(CKCodeFunctionInvokeOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performFetchWhitelistedBundleIDsOperation:(CKOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performFetchWebAuthTokenOperation:(CKFetchWebAuthTokenOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performFetchUserQuotaOperation:(CKDatabaseOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performInitiateParticipantVettingOperation:(CKInitiateParticipantVettingOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)decryptPersonalInfoOnShare:(CKShare *)arg1 setupInfo:(CKContainerSetupInfo *)arg2 completionHandler:(void (^)(CKShare *, NSError *))arg3;
- (void)performFetchShareParticipantKeyOperation:(CKFetchShareParticipantKeyOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performFetchShareMetadataOperation:(CKFetchShareMetadataOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performCompleteParticipantVettingOperation:(CKCompleteParticipantVettingOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performAcceptSharesOperation:(CKAcceptSharesOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performMarkNotificationsReadOperation:(CKMarkNotificationsReadOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performFetchNotificationChangesOperation:(CKFetchNotificationChangesOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performModifyBadgeOperation:(CKModifyBadgeOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performFetchDatabaseChangesOperation:(CKFetchDatabaseChangesOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performFetchRecordZonesOperation:(CKFetchRecordZonesOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performModifyRecordZonesOperation:(CKModifyRecordZonesOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performFetchSubscriptionsOperation:(CKFetchSubscriptionsOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performModifySubscriptionsOperation:(CKModifySubscriptionsOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performQueryOperation:(CKQueryOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performModifyRecordAccessOperation:(CKModifyRecordAccessOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)getNewWebSharingIdentityDataWithSetupInfo:(CKContainerSetupInfo *)arg1 completionHandler:(void (^)(NSData *, NSError *))arg2;
- (void)getNewWebSharingIdentityWithSetupInfo:(CKContainerSetupInfo *)arg1 completionHandler:(void (^)(CKEncryptedData *, NSError *))arg2;
- (void)performModifyWebSharingOperation:(CKModifyWebSharingOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performPublishAssetsOperation:(CKPublishAssetsOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performArchiveRecordsOperation:(CKArchiveRecordsOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performFetchArchivedRecordsOperation:(CKFetchArchivedRecordsOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performFetchRecordVersionsOperation:(CKFetchRecordVersionsOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performFetchRecordZoneChangesOperation:(CKFetchRecordZoneChangesOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performFetchRecordChangesOperation:(CKFetchRecordZoneChangesOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performModifyRecordsOperation:(CKModifyRecordsOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performFetchRecordsOperation:(CKFetchRecordsOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performFetchShareParticipantsOperation:(CKFetchShareParticipantsOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performDiscoverAllIdentitiesOperation:(CKDiscoverUserIdentitiesOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)performDiscoverUserIdentitiesOperation:(CKDiscoverUserIdentitiesOperationInfo *)arg1 withBlock:(void (^)(void))arg2;
- (void)getSandboxExtensionsWithSetupInfo:(CKContainerSetupInfo *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)requestApplicationPermission:(unsigned long long)arg1 setupInfo:(CKContainerSetupInfo *)arg2 completionHandler:(void (^)(long long, NSError *))arg3;
- (void)statusForApplicationPermission:(unsigned long long)arg1 setupInfo:(CKContainerSetupInfo *)arg2 completionHandler:(void (^)(long long, NSError *))arg3;
- (void)importantUserIDsWithSetupInfo:(CKContainerSetupInfo *)arg1 completionHandler:(void (^)(NSString *, NSString *, NSError *))arg2;
- (void)accountInfoWithSetupInfo:(CKContainerSetupInfo *)arg1 completionHandler:(void (^)(CKAccountInfo *, NSError *))arg2;
- (void)accountStatusWithSetupInfo:(CKContainerSetupInfo *)arg1 completionHandler:(void (^)(long long, NSError *))arg2;
- (void)cancelOperationWithIdentifier:(NSString *)arg1;
@end

