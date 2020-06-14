//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

#import <PhotoLibraryServices/PLCloudDeletable-Protocol.h>
#import <PhotoLibraryServices/PLSearchableAssetCollection-Protocol.h>

@class NSData, NSDate, NSDictionary, NSSet, NSString, PLManagedAsset;

@interface PLMemory : PLManagedObject <PLSearchableAssetCollection, PLCloudDeletable>
{
    _Bool _needsPersistenceUpdate;
}

+ (void)deleteMemoriesWithObjectIDs:(id)arg1 inPhotoLibrary:(id)arg2;
+ (void)deletePendingMemoriesCreatedBefore:(id)arg1 inPhotoLibrary:(id)arg2;
+ (void)resetCloudStateInPhotoLibrary:(id)arg1 hardReset:(_Bool)arg2;
+ (id)_memoriesMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(long long)arg3 inManagedObjectContext:(id)arg4;
+ (id)memoriesWithUUIDs:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)memoryWithUUID:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)memoriesToPrefetchInPhotoLibrary:(id)arg1;
+ (_Bool)_shouldPrefetchMemoryMovieCuratedAssetsInPhotoLibrary:(id)arg1;
+ (id)memoriesToUploadInPhotoLibrary:(id)arg1 limit:(long long)arg2;
+ (id)cloudUUIDKeyForDeletion;
+ (long long)cloudDeletionTypeForTombstone:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertIntoPhotoLibrary:(id)arg1 withUUID:(id)arg2 title:(id)arg3 subtitle:(id)arg4 creationDate:(id)arg5;
+ (_Bool)indexTitleForMemoryCategory:(unsigned long long)arg1;
+ (id)baseSearchIndexPredicate;
@property(nonatomic) _Bool needsPersistenceUpdate; // @synthesize needsPersistenceUpdate=_needsPersistenceUpdate;
- (void)removePersistedFileSystemData;
- (void)persistMetadataToFileSystem;
- (_Bool)isValidForPersistence;
- (id)cplMemoryChange;
- (id)cplFullRecord;
@property(retain, nonatomic) PLManagedAsset *keyAsset; // @dynamic keyAsset;
- (id)calculateKeyAsset;
- (void)updateWithCPLMemoryChange:(id)arg1 inPhotoLibrary:(id)arg2;
@property(readonly, copy) NSString *cloudUUIDForDeletion;
@property(readonly) long long cloudDeletionType;
- (void)prepareForDeletion;
- (void)didSave;
- (void)delete;
- (void)willSave;
- (_Bool)isSyncableChange;
- (_Bool)supportsCloudUpload;
- (id)assetUUIDsForPreviewWithCount:(unsigned long long)arg1;
- (unsigned long long)searchIndexCategory;
- (id)searchIndexContents;
@property(readonly, nonatomic) NSDate *keyAssetCreationDate;
@property(readonly, nonatomic) NSString *keyAssetUUID;
@property(readonly, nonatomic) NSDate *searchableEndDate;
@property(readonly, nonatomic) NSDate *searchableStartDate;
@property(readonly, nonatomic) unsigned long long numberOfAssets;

// Remaining properties
@property(retain, nonatomic) NSData *assetListPredicate; // @dynamic assetListPredicate;
@property(retain, nonatomic) NSData *blacklistedFeature; // @dynamic blacklistedFeature;
@property(nonatomic) short category; // @dynamic category;
@property(nonatomic) short cloudDeleteState; // @dynamic cloudDeleteState;
@property(nonatomic) short cloudLocalState; // @dynamic cloudLocalState;
@property(retain, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(retain, nonatomic) NSSet *curatedAssets; // @dynamic curatedAssets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSSet *extendedCuratedAssets; // @dynamic extendedCuratedAssets;
@property(nonatomic) _Bool favorite; // @dynamic favorite;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSDate *lastMoviePlayedDate; // @dynamic lastMoviePlayedDate;
@property(retain, nonatomic) NSDate *lastViewedDate; // @dynamic lastViewedDate;
@property(retain, nonatomic) NSDictionary *movieAssetState; // @dynamic movieAssetState;
@property(retain, nonatomic) NSSet *movieCuratedAssets; // @dynamic movieCuratedAssets;
@property(retain, nonatomic) NSData *movieData; // @dynamic movieData;
@property(nonatomic) short notificationState; // @dynamic notificationState;
@property(nonatomic) _Bool pending; // @dynamic pending;
@property(nonatomic) long long pendingPlayCount; // @dynamic pendingPlayCount;
@property(nonatomic) long long pendingShareCount; // @dynamic pendingShareCount;
@property(nonatomic) long long pendingViewCount; // @dynamic pendingViewCount;
@property(retain, nonatomic) NSData *photosGraphData; // @dynamic photosGraphData;
@property(nonatomic) long long photosGraphVersion; // @dynamic photosGraphVersion;
@property(nonatomic) long long playCount; // @dynamic playCount;
@property(nonatomic) _Bool rejected; // @dynamic rejected;
@property(retain, nonatomic) NSSet *representativeAssets; // @dynamic representativeAssets;
@property(nonatomic) double score; // @dynamic score;
@property(nonatomic) long long shareCount; // @dynamic shareCount;
@property(nonatomic) short subcategory; // @dynamic subcategory;
@property(retain, nonatomic) NSString *subtitle; // @dynamic subtitle;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(nonatomic) _Bool userCreated; // @dynamic userCreated;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;
@property(nonatomic) long long viewCount; // @dynamic viewCount;

@end

