//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSData, NSDictionary, NSSet, NSString;

@protocol PLPhotoAnalysisGraphServiceProtocol

@optional
- (void)requestSharingSuggestionsFromMessageStrings:(NSArray *)arg1 participantPHIdentifiers:(NSSet *)arg2 options:(NSDictionary *)arg3 context:(NSDictionary *)arg4 reply:(void (^)(NSArray *, NSError *))arg5;
- (void)requestHighlightDebugInformationForHighlightWithLocalIdentifier:(NSString *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)requestHighlightEnrichmentWithOptions:(NSArray *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSError *))arg3;
- (void)requestSuggestedContributionsForAssetsMetadata:(NSArray *)arg1 options:(NSDictionary *)arg2 context:(NSDictionary *)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)requestSuggestedRecipientsForMomentIdentifiers:(NSArray *)arg1 options:(NSDictionary *)arg2 context:(NSDictionary *)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)requestSharingSuggestionsFromMomentLocalIdentifiers:(NSArray *)arg1 options:(NSDictionary *)arg2 context:(NSDictionary *)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)requestSuggestedContactIdentifiersForPersonLocalIdentifier:(NSString *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)requestInferredContactIdentifierForPersonLocalIdentifier:(NSString *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSString *, NSError *))arg3;
- (void)requestInferredContactIdentifierByPersonLocalIdentifierForPersonLocalIdentifiers:(NSArray *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)requestSnapshotServiceForPeopleCurationResultsWithGraphOptions:(NSDictionary *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSString *, NSError *))arg3;
- (void)requestSnapshotServiceForRelatedResultsWithGraphOptions:(NSDictionary *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSString *, NSError *))arg3;
- (void)requestTitleForPersonIdentifiers:(NSArray *)arg1 format:(long long)arg2 context:(NSDictionary *)arg3 reply:(void (^)(NSString *, NSString *, NSError *))arg4;
- (void)requestTitleForAssetCollectionWithLocalIdentifier:(NSString *)arg1 format:(long long)arg2 context:(NSDictionary *)arg3 reply:(void (^)(NSString *, NSString *, NSError *))arg4;
- (void)requestTitleForCollectionMomentListWithLocalIdentifier:(NSString *)arg1 format:(long long)arg2 context:(NSDictionary *)arg3 reply:(void (^)(NSString *, NSString *, NSError *))arg4;
- (void)requestTitleForMemoryWithLocalIdentifier:(NSString *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSString *, NSString *, NSError *))arg3;
- (void)requestSetDefaultsObject:(id)arg1 forKey:(NSString *)arg2 context:(NSDictionary *)arg3 reply:(void (^)(NSError *))arg4;
- (void)requestDefaultsObjectForKey:(NSString *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(id, NSError *))arg3;
- (void)generateMemoriesRelatedDiagnosticsLogsWithContext:(NSDictionary *)arg1 reply:(void (^)(NSString *, NSError *))arg2;
- (void)requestPerformUpdatesForMomentLocalIdentifiersToInsert:(NSArray *)arg1 momentLocalIdentifiersToDelete:(NSArray *)arg2 momentLocalIdentifiersToReload:(NSArray *)arg3 context:(NSDictionary *)arg4 reply:(void (^)(_Bool))arg5;
- (void)requestWriteAdditionalDataToSnapshotResults:(NSData *)arg1 forFilenameKey:(NSString *)arg2 context:(NSDictionary *)arg3 reply:(void (^)(NSString *, NSError *))arg4;
- (void)requestMetadataSnapshotFolderCreationWithContext:(NSDictionary *)arg1 reply:(void (^)(NSString *, NSError *))arg2;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenMomentForLocalIdentifier:(NSString *)arg1 andRelatedResultsForLocalIdentifiers:(NSArray *)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 additionalSnapshotSummaryInfo:(NSDictionary *)arg5 context:(NSDictionary *)arg6 reply:(void (^)(NSString *, NSError *))arg7;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenAssetForLocalIdentifier:(NSString *)arg1 andRelatedResultsForLocalIdentifiers:(NSArray *)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 context:(NSDictionary *)arg5 reply:(void (^)(NSString *, NSError *))arg6;
- (void)requestSnapshotServiceForRelatedWithAssetLocalIdentifier:(NSString *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSString *, NSError *))arg3;
- (void)requestSnapshotServiceForRelatedWithMomentLocalIdentifier:(NSString *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSString *, NSError *))arg3;
- (void)requestInvalidateServicePersistentCachesWithContext:(NSDictionary *)arg1 reply:(void (^)(NSError *))arg2;
- (void)requestInvalidateServiceTransientCachesWithContext:(NSDictionary *)arg1 reply:(void (^)(NSError *))arg2;
- (void)requestExportGraphServiceForPurpose:(NSString *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSString *, NSError *))arg3;
- (void)requestGraphRebuildFractionCompletedWithContext:(NSDictionary *)arg1 reply:(void (^)(NSNumber *, NSError *))arg2;
- (void)requestHighlightEstimatesWithContext:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *, NSString *, NSError *))arg2;
- (void)requestGraphServiceStatisticsWithOptions:(NSDictionary *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSString *, NSError *))arg3;
- (void)requestGraphServicePerformsQueryWithContext:(NSDictionary *)arg1 query:(NSString *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)requestGraphServiceStatusWithContext:(NSDictionary *)arg1 reply:(void (^)(NSString *, NSError *))arg2;
- (void)requestTransientMemoryPropertiesWithOptions:(NSDictionary *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)requestTransientMemoriesWithOptions:(NSDictionary *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)requestMemoryTreeDebugInformationWithOptions:(NSDictionary *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)requestMemoryDebugInformationForMemoryWithLocalIdentifier:(NSString *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)requestCurationDebugInformationForAssetCollectionWithLocalIdentifier:(NSString *)arg1 precision:(unsigned long long)arg2 context:(NSDictionary *)arg3 reply:(void (^)(NSDictionary *, NSError *))arg4;
- (void)requestSharingMessageSuggestionDebugInformationForAssetCollectionLocalIdentifier:(NSString *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)requestSharingSuggestionDebugInformationForAssetCollectionLocalIdentifier:(NSString *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)requestCurationDebugInformationForAsset:(NSString *)arg1 precision:(unsigned long long)arg2 context:(NSDictionary *)arg3 reply:(void (^)(NSDictionary *, NSError *))arg4;
- (void)requestRelatedDebugInformationBetweenAssetForLocalIdentifier:(NSString *)arg1 andRelatedAssetCollectionForLocalIdentifier:(NSString *)arg2 options:(NSDictionary *)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 context:(NSDictionary *)arg6 reply:(void (^)(NSDictionary *, NSError *))arg7;
- (void)requestRelatedDebugInformationBetweenReferenceAssetCollectionForLocalIdentifier:(NSString *)arg1 andRelatedAssetCollectionForLocalIdentifier:(NSString *)arg2 options:(NSDictionary *)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 context:(NSDictionary *)arg6 reply:(void (^)(NSDictionary *, NSError *))arg7;
- (void)requestSearchInformationForTripUUIDs:(NSArray *)arg1 withOptions:(NSDictionary *)arg2 context:(NSDictionary *)arg3 reply:(void (^)(NSDictionary *, NSError *))arg4;
- (void)requestAssetSearchKeywordsForAssetCollectionUUIDs:(NSArray *)arg1 ofType:(unsigned long long)arg2 withOptions:(NSDictionary *)arg3 context:(NSDictionary *)arg4 reply:(void (^)(NSDictionary *, NSError *))arg5;
- (void)requestSearchIndexKeywordsForAssetCollectionUUIDs:(NSArray *)arg1 ofType:(unsigned long long)arg2 withOptions:(NSDictionary *)arg3 context:(NSDictionary *)arg4 reply:(void (^)(NSDictionary *, NSError *))arg5;
- (void)requestLocalizedSceneAncestryInformationWithContext:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)requestGraphSearchMetadataWithOptions:(NSDictionary *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)requestSynonymsDictionariesWithContext:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)requestZeroKeywordsWithOptions:(NSDictionary *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)notifyWhenGraphReadyWithCoalescingIdentifier:(NSString *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)invalidateGraphWithContext:(NSDictionary *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)rebuildGraphWithContext:(NSDictionary *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)requestAssetsForPersonIdentifiers:(NSArray *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)requestRelatedMomentsForPersonIdentifiers:(NSArray *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)requestSocialGroupsForPersonIdentifiers:(NSArray *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)requestAllSocialGroupsForPersonIdentifier:(NSString *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)requestSortedArrayOfPersonIdentifiers:(NSArray *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;
- (void)simulateMemoriesNotificationWithOptions:(NSDictionary *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)generateSuggestionsWithOptions:(NSDictionary *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)generateMemoriesWithOptions:(NSDictionary *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)requestRepresentativeAssetsForAssetCollectionWithLocalIdentifier:(NSString *)arg1 options:(NSDictionary *)arg2 context:(NSDictionary *)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)requestCuratedAssetsForAssetCollectionWithLocalIdentifier:(NSString *)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 options:(NSDictionary *)arg4 context:(NSDictionary *)arg5 reply:(void (^)(NSArray *, NSError *))arg6;
- (void)requestCuratedAssetForAssetCollectionWithLocalIdentifier:(NSString *)arg1 referenceAssetLocalIdentifier:(NSString *)arg2 precision:(unsigned long long)arg3 options:(NSDictionary *)arg4 context:(NSDictionary *)arg5 reply:(void (^)(NSDictionary *, NSError *))arg6;
- (void)requestAssetCollectionsRelatedToPersonIdentifiers:(NSArray *)arg1 options:(NSDictionary *)arg2 context:(NSDictionary *)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)requestAssetCollectionsRelatedToAssetCollectionWithLocalIdentifier:(NSString *)arg1 options:(NSDictionary *)arg2 context:(NSDictionary *)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)requestAssetCollectionsRelatedToMomentWithLocalIdentifier:(NSString *)arg1 options:(NSDictionary *)arg2 context:(NSDictionary *)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)requestAssetCollectionsRelatedToAssetWithLocalIdentifier:(NSString *)arg1 options:(NSDictionary *)arg2 context:(NSDictionary *)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)unloadGraphWithContext:(NSDictionary *)arg1 reply:(void (^)(NSError *))arg2;
- (void)loadGraphWithContext:(NSDictionary *)arg1 reply:(void (^)(NSError *))arg2;
- (void)pingGraphWorkerWithOptions:(NSDictionary *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSError *))arg3;
@end

