//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSArray, NSDate, NSDateInterval, NSDictionary, NSObject, NSSet, NSString, PLXPCTransaction;
@protocol NSCopying, PLMomentAnalysisTransaction, PLMomentAssetData, PLMomentData, PLMomentListData;

@protocol PLMomentGenerationDataManagement <NSObject>
- (void)runPeriodicMaintenanceTasks:(unsigned long long)arg1 withTransaction:(PLXPCTransaction *)arg2;
- (NSArray *)allAssetIDsNeedingLocationShiftWithError:(id *)arg1;
- (void)invalidateShiftedLocationForAllAssetsInMoments;
- (NSDictionary *)locationCoordinatesForAssetIDs:(NSArray *)arg1;
- (void)invalidateLocationsOfInterest;
- (NSArray *)locationsOfInterest;
- (_Bool)needsLocationsOfInterestProcessing;
- (_Bool)hasLocationsOfInterestInformation;
- (NSDictionary *)homeAddressDictionary;
- (_Bool)isNetworkReachable;
- (void)stopObservingNetworkReachabilityChanges;
- (void)beginObservingNetworkReachabilityChangesWithBlock:(void (^)(_Bool))arg1;
- (void)resetOnFailure;
- (_Bool)save:(id *)arg1;
- (_Bool)hasChanges;
- (id <PLMomentData>)insertNewMoment;
- (id <PLMomentListData>)insertNewMomentListForGranularityLevel:(short)arg1;
- (Class)momentAssetDataClass;
- (Class)momentDataClass;
- (Class)momentListDataClassForGranularityLevel:(short)arg1;
- (NSArray *)allAssetIDsToBeIncludedInMomentsWithError:(id *)arg1;
- (NSArray *)allAssetsToBeIncludedInMomentsWithError:(id *)arg1;
- (NSArray *)momentsWithinDateInterval:(NSDateInterval *)arg1;
- (NSArray *)orphanedAssetIDsWithError:(id *)arg1;
- (NSArray *)allMomentListsWithInvalidReverseLocationDataForLevel:(short)arg1;
- (NSArray *)allMomentListsForLevel:(short)arg1;
- (NSArray *)allMomentsWithInvalidReverseLocationData;
- (NSArray *)allMomentsWithError:(id *)arg1;
- (id <PLMomentListData>)findOrCreateYearMomentListForYear:(long long)arg1;
- (id <PLMomentListData>)yearMomentListForYear:(long long)arg1 wantsEarliest:(_Bool)arg2;
- (id <PLMomentListData>)momentListContainingDate:(NSDate *)arg1 forLevel:(short)arg2 wantsEarliest:(_Bool)arg3;
- (NSArray *)momentsBetweenDate:(NSDate *)arg1 andDate:(NSDate *)arg2 sorted:(_Bool)arg3;
- (NSArray *)momentsSinceDate:(NSDate *)arg1;
- (NSArray *)momentsForAssetsWithUniqueIDs:(NSArray *)arg1 error:(id *)arg2;
- (id <PLMomentListData>)momentListWithUniqueID:(NSObject<NSCopying> *)arg1 forLevel:(short)arg2 error:(id *)arg3;
- (void)enumerateAssetsWithIDs:(NSArray *)arg1 usingBlock:(void (^)(id <PLMomentAssetData>, unsigned long long, _Bool *))arg2;
- (id <PLMomentData>)momentWithUniqueID:(NSObject<NSCopying> *)arg1 error:(id *)arg2;
- (NSArray *)assetsWithUniqueIDs:(NSArray *)arg1 error:(id *)arg2;
- (id <PLMomentAssetData>)assetWithUniqueID:(NSObject<NSCopying> *)arg1 error:(id *)arg2;
- (_Bool)saveAnalysisMetadata:(NSDictionary *)arg1;
- (NSDictionary *)analysisMetadata;
- (_Bool)saveServerVersionInfo:(NSDictionary *)arg1;
- (NSDictionary *)serverVersionInfo;
- (void)setMomentAnalysisNeeded:(_Bool)arg1;
- (_Bool)isMomentAnalysisNeeded;
- (_Bool)isMomentsSupportedOnPlatform;
- (void)performDataTransaction:(void (^)(void))arg1 synchronously:(_Bool)arg2 priority:(long long)arg3 completionHandler:(void (^)(void))arg4;
- (void)performBlock:(void (^)(void))arg1 synchronously:(_Bool)arg2 priority:(long long)arg3 completionHandler:(void (^)(void))arg4;
- (void)performDataTransaction:(void (^)(void))arg1 synchronously:(_Bool)arg2 completionHandler:(void (^)(void))arg3;
- (void)performBlock:(void (^)(void))arg1 synchronously:(_Bool)arg2 completionHandler:(void (^)(void))arg3;

@optional
@property(nonatomic) _Bool simulatesTimeout;
- (NSString *)replayLogPath;
- (_Bool)wantsMomentReplayLogging;
- (NSSet *)deletedObjects;
- (NSSet *)updatedObjects;
- (NSSet *)insertedObjects;
- (unsigned long long)hardGenerationBatchSizeLimit;
- (id <PLMomentAnalysisTransaction>)momentAnalysisTransactionWithName:(const char *)arg1;
- (void)analysisCompletedWithSuccess:(_Bool)arg1;
- (void)pendingChangesUpdated:(unsigned long long)arg1;
@end

