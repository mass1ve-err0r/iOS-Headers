//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PlacesKit/PXPlacesMapLayout.h>

@class NSMapTable;
@protocol PXPlacesMapLayoutResult;

@interface PXPlacesMapAdaptiveClusterLayout : PXPlacesMapLayout
{
    _Bool _requestLayoutCancel;
    double _horizontalClusteringDistancePixels;
    double _verticalClusteringDistancePixels;
    id <PXPlacesMapLayoutResult> _currentMapLayoutResult;
    NSMapTable *_geotaggableToLayoutItemTable;
}

@property(retain) NSMapTable *geotaggableToLayoutItemTable; // @synthesize geotaggableToLayoutItemTable=_geotaggableToLayoutItemTable;
@property(retain, nonatomic) id <PXPlacesMapLayoutResult> currentMapLayoutResult; // @synthesize currentMapLayoutResult=_currentMapLayoutResult;
@property(nonatomic) double verticalClusteringDistancePixels; // @synthesize verticalClusteringDistancePixels=_verticalClusteringDistancePixels;
@property(nonatomic) double horizontalClusteringDistancePixels; // @synthesize horizontalClusteringDistancePixels=_horizontalClusteringDistancePixels;
- (void).cxx_destruct;
- (void)reset;
- (id)_clusterGeotaggables:(id)arg1 usingHorizontalClusteringDistance:(double)arg2 verticalClusteringDistance:(double)arg3 mapScale:(double)arg4 dataSource:(id)arg5 primaryLayoutGeotaggables:(id)arg6;
- (id)_clusterGeotaggables:(id)arg1 forViewPort:(id)arg2;
- (id)layoutForViewPort:(id)arg1 andDataSourceChange:(id)arg2;
- (id)layoutItemForGeotaggable:(id)arg1;

@end

