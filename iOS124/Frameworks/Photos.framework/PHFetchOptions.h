//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/NSCopying-Protocol.h>

@class NSArray, NSMutableSet, NSNumber, NSPredicate, NSSet, NSString, PHPhotoLibrary;

@interface PHFetchOptions : NSObject <NSCopying>
{
    NSNumber *_includeHiddenAssetsNumber;
    NSNumber *_includeAllBurstAssetsNumber;
    NSNumber *_includeAssetSourceTypesNumber;
    NSNumber *_fetchLimitNumber;
    NSNumber *_fetchOffsetNumber;
    NSNumber *_curationTypeNumber;
    NSNumber *_wantsIncrementalChangeDetailsNumber;
    NSNumber *_chunkSizeForFetchNumber;
    NSNumber *_cacheSizeForFetchNumber;
    NSNumber *_reverseSortOrderNumber;
    NSNumber *_includeDuplicateAssetsNumber;
    NSNumber *_includePendingMemoriesNumber;
    NSNumber *_includeRejectedMemoriesNumber;
    NSNumber *_personContextNumber;
    NSNumber *_includeTrashedAssetsNumber;
    NSNumber *_includeTrashedMomentSharesNumber;
    NSNumber *_includeExpiredMomentSharesNumber;
    NSNumber *_includeFavoriteMemoriesCollectionListNumber;
    NSNumber *_includePlacesSmartAlbumNumber;
    NSNumber *_excludeMontageAssetsNumber;
    NSNumber *_minimumVerifiedFaceCountNumber;
    NSNumber *_minimumUnverifiedFaceCountNumber;
    NSNumber *_includeNonvisibleFacesNumber;
    NSNumber *_includeOnlyPersonsWithVisibleKeyFacesNumber;
    NSNumber *_includeOnlyFacesNeedingFaceCropNumber;
    NSNumber *_includeOnlyFacesWithFaceprintsNumber;
    NSNumber *_includeOnlyFacesInFaceGroupsNumber;
    NSNumber *_isExclusivePredicateNumber;
    NSMutableSet *_propertySets;
    NSNumber *_shouldPrefetchCountNumber;
    NSNumber *_sharingStreamNumber;
    NSPredicate *_predicate;
    NSArray *_sortDescriptors;
    NSArray *_customObjectIDSortOrder;
    NSString *_transientIdentifier;
    NSPredicate *_internalPredicate;
    NSArray *_internalSortDescriptors;
    NSPredicate *_internalInclusionPredicate;
    NSSet *_verifiedPersonTypes;
    PHPhotoLibrary *_photoLibrary;
}

+ (id)effectivePhotoLibraryForFetchOptions:(id)arg1;
+ (id)fetchOptionsWithInclusiveDefaults;
@property(retain, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(copy, nonatomic) NSSet *verifiedPersonTypes; // @synthesize verifiedPersonTypes=_verifiedPersonTypes;
@property(retain, nonatomic) NSPredicate *internalInclusionPredicate; // @synthesize internalInclusionPredicate=_internalInclusionPredicate;
@property(retain, nonatomic) NSArray *internalSortDescriptors; // @synthesize internalSortDescriptors=_internalSortDescriptors;
@property(retain, nonatomic) NSPredicate *internalPredicate; // @synthesize internalPredicate=_internalPredicate;
@property(retain, nonatomic) NSString *transientIdentifier; // @synthesize transientIdentifier=_transientIdentifier;
@property(retain, nonatomic) NSArray *customObjectIDSortOrder; // @synthesize customObjectIDSortOrder=_customObjectIDSortOrder;
@property(retain, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (void).cxx_destruct;
- (id)description;
@property(nonatomic) unsigned long long sharingStream;
@property(nonatomic) _Bool isExclusivePredicate;
@property(nonatomic) _Bool shouldPrefetchCount;
@property(nonatomic) _Bool includeOnlyFacesInFaceGroups;
@property(nonatomic) _Bool includeOnlyFacesWithFaceprints;
@property(nonatomic) _Bool includeOnlyFacesNeedingFaceCrop;
@property(nonatomic) _Bool includeOnlyPersonsWithVisibleKeyFaces;
@property(nonatomic) _Bool includeNonvisibleFaces;
@property(nonatomic) unsigned long long minimumUnverifiedFaceCount;
@property(nonatomic) unsigned long long minimumVerifiedFaceCount;
@property(nonatomic) _Bool excludeMontageAssets;
@property(nonatomic) _Bool includePlacesSmartAlbum;
@property(nonatomic) _Bool includeFavoriteMemoriesCollectionList;
@property(nonatomic) _Bool includeExpiredMomentShares;
@property(nonatomic) _Bool includeTrashedMomentShares;
@property(nonatomic) _Bool includeTrashedAssets;
@property(nonatomic) long long personContext;
@property(nonatomic) long long curationType;
@property(nonatomic) _Bool includeRejectedMemories;
@property(nonatomic) _Bool includePendingMemories;
@property(nonatomic) _Bool includeDuplicateAssets;
@property(nonatomic) _Bool reverseSortOrder;
@property(nonatomic) long long cacheSizeForFetch;
@property(nonatomic) long long chunkSizeForFetch;
@property(nonatomic) _Bool wantsIncrementalChangeDetails;
@property(nonatomic) unsigned long long fetchOffset;
@property(nonatomic) unsigned long long fetchLimit;
@property(nonatomic) unsigned long long includeAssetSourceTypes;
@property(nonatomic) _Bool includeAllBurstAssets;
@property(nonatomic) _Bool includeHiddenAssets;
@property(readonly, nonatomic) NSSet *fetchPropertySetsAsSet;
- (void)addFetchPropertySets:(id)arg1;
@property(retain, nonatomic) NSArray *fetchPropertySets;
- (void)mergeWithFetchOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

