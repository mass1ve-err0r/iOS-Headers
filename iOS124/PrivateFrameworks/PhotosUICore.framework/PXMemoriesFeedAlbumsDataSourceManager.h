//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSourceManager.h>

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSString, PHFetchResult, PHPhotoLibrary;

@interface PXMemoriesFeedAlbumsDataSourceManager : PXSectionedDataSourceManager <PXPhotoLibraryUIChangeObserver>
{
    PHFetchResult *_albumsFetchResult;
    PHPhotoLibrary *_photoLibrary;
    NSMutableArray *_entries;
    NSArray *_orderedIdentifiers;
    NSDictionary *_groupsByIdentifier;
}

- (void).cxx_destruct;
- (id)_groupIdentifierForAssetCollection:(id)arg1;
- (void)_getGroupedCollectionsFromEnumerable:(id)arg1 groupedCollections:(id *)arg2 orderedIdentifiers:(id *)arg3;
- (id)_entriesFromAssetCollections:(id)arg1 orderedIdentifiers:(id)arg2;
- (void)_handleNonIncrementalFetchResultChange:(id)arg1;
- (void)_handleIncrementalFetchResultChange:(id)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

