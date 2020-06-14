//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKGraphSeries.h>

@class UIImage;

@interface HKMedicalRecordChartSeries : HKGraphSeries
{
    UIImage *_outOfRangeUnselectedMarker;
    UIImage *_outOfRangeSelectedMarker;
    UIImage *_withinRangeUnselectedMarker;
    UIImage *_withinRangeSelectedMarker;
}

@property(retain, nonatomic) UIImage *withinRangeSelectedMarker; // @synthesize withinRangeSelectedMarker=_withinRangeSelectedMarker;
@property(retain, nonatomic) UIImage *withinRangeUnselectedMarker; // @synthesize withinRangeUnselectedMarker=_withinRangeUnselectedMarker;
@property(retain, nonatomic) UIImage *outOfRangeSelectedMarker; // @synthesize outOfRangeSelectedMarker=_outOfRangeSelectedMarker;
@property(retain, nonatomic) UIImage *outOfRangeUnselectedMarker; // @synthesize outOfRangeUnselectedMarker=_outOfRangeUnselectedMarker;
- (void).cxx_destruct;
- (_Bool)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (_Bool)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (_Bool)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect)arg1 blockCoordinate:(id)arg2;
- (double)yAxisDifferenceToPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)xAxisDistanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)distanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (id)coordinatesForBlock:(id)arg1 blockPath:(CDStruct_6ca94699)arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (void)_renderPointMarkersInContext:(struct CGContext *)arg1 blockCoordinates:(id)arg2 pointTransform:(struct CGAffineTransform)arg3;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform)arg4 renderContext:(struct CGContext *)arg5 secondaryRenderContext:(id)arg6;
- (_Bool)supportsMultiTouchSelection;

@end

