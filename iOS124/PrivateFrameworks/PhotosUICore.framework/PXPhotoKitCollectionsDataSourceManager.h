//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXCollectionsDataSourceManager.h>

#import <PhotosUICore/PXCollectionFetchOperationDelegate-Protocol.h>
#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSArray, NSMutableDictionary, NSMutableSet, NSObject, NSOperationQueue, NSString, PHCollectionList, PHFetchResult, PHPhotoLibrary, PXPhotoKitCollectionsDataSource, PXPhotoKitCollectionsDataSourceManagerConfiguration;
@protocol OS_os_log;

@interface PXPhotoKitCollectionsDataSourceManager : PXCollectionsDataSourceManager <PXCollectionFetchOperationDelegate, PXPhotoLibraryUIChangeObserver>
{
    PHCollectionList *_collectionList;
    PHFetchResult *_collectionsFetchResult;
    PHPhotoLibrary *_photoLibrary;
    NSMutableDictionary *_subCollectionFetchResultsCache;
    NSMutableDictionary *_subCollectionKeyAssetFetchResultsCache;
    NSMutableDictionary *_collectionIndexPathByCollection;
    NSOperationQueue *_subCollectionFetchOperationQueue;
    NSOperationQueue *_subCollectionKeyAssetsFetchOperationQueue;
    _Bool _performedBackgroundFetching;
    _Bool _needsBackgroundFetching;
    _Bool _initiatedBackgroundFetching;
    _Bool _resumedBackgroundFetching;
    _Bool _publishChangesScheduledOnRunLoop;
    NSMutableDictionary *_fetchResultsByPendingChangedCollections;
    NSMutableSet *_changedSubCollections;
    _Bool _isPhotoLibraryEmpty;
    NSMutableDictionary *__subCollectionActiveCountFetchOperations;
    NSMutableDictionary *__subCollectionActiveKeyAssetsFetchOperations;
    NSArray *__collectionListBySection;
    NSArray *__collectionsFetchResultBySection;
    NSArray *__virtualCollections;
    PXPhotoKitCollectionsDataSourceManagerConfiguration *_configuration;
}

@property(readonly, nonatomic) PHFetchResult *collectionsFetchResult; // @synthesize collectionsFetchResult=_collectionsFetchResult;
@property(readonly, nonatomic) PHCollectionList *collectionList; // @synthesize collectionList=_collectionList;
@property(readonly) PXPhotoKitCollectionsDataSourceManagerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NSArray *_virtualCollections; // @synthesize _virtualCollections=__virtualCollections;
@property(retain, nonatomic, setter=_setCollectionsFetchResultBySection:) NSArray *_collectionsFetchResultBySection; // @synthesize _collectionsFetchResultBySection=__collectionsFetchResultBySection;
@property(retain, nonatomic, setter=_setCollectionListBySection:) NSArray *_collectionListBySection; // @synthesize _collectionListBySection=__collectionListBySection;
@property(readonly, nonatomic) NSMutableDictionary *_subCollectionActiveKeyAssetsFetchOperations; // @synthesize _subCollectionActiveKeyAssetsFetchOperations=__subCollectionActiveKeyAssetsFetchOperations;
@property(readonly, nonatomic) NSMutableDictionary *_subCollectionActiveCountFetchOperations; // @synthesize _subCollectionActiveCountFetchOperations=__subCollectionActiveCountFetchOperations;
- (void).cxx_destruct;
@property(readonly) NSObject<OS_os_log> *dataSourceManagerLog;
@property(readonly, nonatomic) long long numberOfPendingKeyAssetFetches;
- (void)waitUntilBackgroundFetchingFinishedWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)stopCoalescingAndPublishFetchResultChanges;
- (void)startCoalescingFetchResultChanges;
- (_Bool)canReorderCollection:(id)arg1;
- (_Bool)canRenameCollection:(id)arg1;
- (_Bool)canDeleteCollection:(id)arg1;
- (_Bool)canEditAlbums;
- (_Bool)containsAnyAssets:(id)arg1;
- (_Bool)_isImportsAssetCollection:(id)arg1;
- (_Bool)_isPlacesAlbumAssetCollection:(id)arg1;
- (_Bool)_needsFetchResultForCollection:(id)arg1;
- (_Bool)_needsKeyAssetsFetchResultForCollection:(id)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (id)_subitemChangeDetailsByItemBySection;
- (id)_changedSubCollectionIndexesBySections;
- (_Bool)_updateCachedSubCollectionFetchResultsForChange:(id)arg1 fetchResultChangeDetails:(id)arg2;
- (id)uncachedKeyAssetFetchResultForSubCollection:(id)arg1;
- (id)_cachedKeyAssetFetchResultForSubCollection:(id)arg1;
- (_Bool)isCachedFetchResultOutdatedForCollection:(id)arg1;
- (id)uncachedFetchResultForSubCollection:(id)arg1;
- (id)fetchResultForSubCollection:(id)arg1;
- (_Bool)hasAssetsFetchResultForCollection:(id)arg1;
- (id)assetsFetchResultForCollection:(id)arg1;
- (id)keyAssetsFetchResultForCollection:(id)arg1;
- (void)_endSignpostForFetchOperation:(id)arg1;
- (void)collectionFetchOperationDidCancel:(id)arg1;
- (void)collectionFetchOperationDidComplete:(id)arg1;
- (void)collectionFetchOperationDidBegin:(id)arg1;
- (void)_publishPendingCollectionChanges;
- (void)_updateDataSourceForChangeOnCollection:(id)arg1 withFetchResult:(id)arg2;
- (void)_updateKeyAssetsCacheForCollection:(id)arg1 withFetchResult:(id)arg2 otherFetchResultsByAssetCollection:(id)arg3;
- (void)_fetchKeyAssetsForCollection:(id)arg1;
- (void)_resumeKeyAssetsFetchOperations;
- (void)_updateVisibleCountsForCollection:(id)arg1 withWithFetchResult:(id)arg2;
- (void)_fetchAndUpdateCountsForCollection:(id)arg1;
- (void)_resumeFetchOperations;
- (void)resumeBackgroundFetchingIfNeeded;
- (void)_initiateBackgroundFetchingIfNeededForCollection:(id)arg1;
- (void)initiateBackgroundFetchingIfNeeded;
- (void)_recursivelyCollectCollectionsIn:(id)arg1 fetchResult:(id)arg2;
- (void)_recursivelyEnumerateAssetCollectionsInFetchResult:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)indexPathForCollection:(id)arg1;
- (_Bool)_containsAnyAlbumsWithAssets:(id)arg1;
- (_Bool)_containsAnyAssets:(id)arg1;
- (long long)estimatedCountForAssetCollection:(id)arg1;
- (void)_enumerateAllPhotoKitCollectionsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_updateCollectionIndexMappingForFilteredFetchResults;
- (_Bool)_shouldIncludeCollection:(id)arg1;
- (struct PXTwoTuple *)_filterFetchResult:(id)arg1;
- (struct PXTwoTuple *)_getSectionedCollectionListAndFetchResultsFromFetchResult:(id)arg1;
- (_Bool)_isEmpty;
- (unsigned long long)_fixedOrderPriorityForVirtualCollection:(id)arg1;
- (id)createInitialDataSource;
- (void)_updateFilteredCollectionsFetchResults;
- (id)_newDataSource;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) PXPhotoKitCollectionsDataSource *dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

