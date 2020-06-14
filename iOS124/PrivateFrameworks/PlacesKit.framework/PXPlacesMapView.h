//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKMapView.h>

@interface PXPlacesMapView : MKMapView
{
    double _currentScale;
}

+ (id)mapViewWithMarkedLocation:(id)arg1 regionRadius:(double)arg2 frame:(struct CGRect)arg3;
+ (CDStruct_02837cd9)canonicalMapRect:(CDStruct_02837cd9)arg1;
+ (CDStruct_02837cd9)mapRectForNearbyQueriesFromRect:(CDStruct_02837cd9)arg1 atScale:(double)arg2 targetViewSize:(struct CGSize)arg3;
+ (CDStruct_02837cd9)MKMapRectForCoordinateRegion:(CDStruct_26e8d939)arg1;
- (void)ppt_performPlacesZoomTest:(id)arg1 iterations:(long long)arg2 delay:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)ppt_performPlacesScrollTest:(id)arg1 iterations:(long long)arg2 screenDelta:(long long)arg3 delay:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (CDUnknownBlockType)ppt_visibleMapRectBlockForQueue:(id)arg1 delay:(double)arg2;
- (CDStruct_02837cd9)ppt_cityMapRect;
- (void)deselectAllAnnotationsAnimated:(_Bool)arg1;
- (double)zoomLevel;
- (id)currentViewPortWithThumbnailOverscan;
- (double)_radiansFromDegrees:(double)arg1;
- (double)_sampleMapDistanceFromViewPoint:(struct CGPoint)arg1 toViewPoint:(struct CGPoint)arg2;
- (id)currentViewPort;
@property double pitch;
@property unsigned long long pkMapType;
- (void)_commonInit;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

