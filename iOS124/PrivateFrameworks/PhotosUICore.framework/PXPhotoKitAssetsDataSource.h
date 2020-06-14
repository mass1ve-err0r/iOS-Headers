//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXAssetsDataSource.h>

@class NSMutableDictionary, PXPhotosDataSource, PXPhotosDataSourceChange;

@interface PXPhotoKitAssetsDataSource : PXAssetsDataSource
{
    NSMutableDictionary *_layoutItemByAssetCache;
    PXPhotosDataSource *_photosDataSource;
    PXPhotosDataSourceChange *_change;
}

+ (id)dataSourceWithAsset:(id)arg1;
@property(readonly, nonatomic) PXPhotosDataSourceChange *change; // @synthesize change=_change;
@property(readonly, nonatomic) PXPhotosDataSource *photosDataSource; // @synthesize photosDataSource=_photosDataSource;
- (void).cxx_destruct;
- (id)inputForItem:(id)arg1;
- (void)prefetchIndexPaths:(id)arg1;
- (_Bool)couldObjectReferenceAppear:(id)arg1;
- (_Bool)containsMultipleItems;
- (_Bool)containsAnyItems;
- (id)startingAssetReference;
- (_Bool)hasCurationForAssetCollection:(id)arg1;
- (id)keyAssetsForAssetCollectionAtSectionIndexPath:(struct PXSimpleIndexPath)arg1;
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;
- (id)objectsInIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)description;
- (unsigned long long)identifier;
- (id)initWithImmutablePhotosDataSource:(id)arg1 withChange:(id)arg2;
- (id)photosGraphSuggestedContributions;
- (_Bool)isAssetAtIndexPathPartOfCuratedSet:(struct PXSimpleIndexPath)arg1;

@end

