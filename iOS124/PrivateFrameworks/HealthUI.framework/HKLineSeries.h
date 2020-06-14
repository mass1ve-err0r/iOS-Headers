//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKGraphSeries.h>

@class NSArray, UIImage;

@interface HKLineSeries : HKGraphSeries
{
    _Bool _flatLastValue;
    _Bool _extendLastValue;
    NSArray *_unhighlightedPresentationStyles;
    NSArray *_highlightedPresentationStyles;
    NSArray *_selectedPresentationStyles;
    UIImage *_selectedPointMarkerImage;
}

@property(nonatomic) _Bool extendLastValue; // @synthesize extendLastValue=_extendLastValue;
@property(nonatomic) _Bool flatLastValue; // @synthesize flatLastValue=_flatLastValue;
@property(retain, nonatomic) UIImage *selectedPointMarkerImage; // @synthesize selectedPointMarkerImage=_selectedPointMarkerImage;
@property(retain, nonatomic) NSArray *selectedPresentationStyles; // @synthesize selectedPresentationStyles=_selectedPresentationStyles;
@property(retain, nonatomic) NSArray *highlightedPresentationStyles; // @synthesize highlightedPresentationStyles=_highlightedPresentationStyles;
@property(retain, nonatomic) NSArray *unhighlightedPresentationStyles; // @synthesize unhighlightedPresentationStyles=_unhighlightedPresentationStyles;
- (void).cxx_destruct;
- (_Bool)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (_Bool)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (_Bool)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect)arg1 blockCoordinate:(id)arg2;
- (double)yAxisDifferenceToPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)xAxisDistanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (double)distanceFromPoint:(struct CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect)arg3;
- (_Bool)supportsMultiTouchSelection;
- (id)coordinatesForBlock:(id)arg1 blockPath:(CDStruct_6ca94699)arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (void)_renderPointLabelInContext:(struct CGContext *)arg1 renderingData:(CDStruct_d6e4b0bd)arg2 numberFormatter:(id)arg3 labelAttributes:(id)arg4;
- (void)_renderPointLabelsInContext:(struct CGContext *)arg1 blockCoordinates:(id)arg2 axisRect:(struct CGRect)arg3 pointTransform:(struct CGAffineTransform)arg4 presentationStyle:(id)arg5 zoomLevelConfiguration:(id)arg6;
- (void)_renderPointMarkersInContext:(struct CGContext *)arg1 blockCoordinates:(id)arg2 pointTransform:(struct CGAffineTransform)arg3 pointMarkerImage:(id)arg4;
- (void)_renderLineEndCapsInContext:(struct CGContext *)arg1 endCaps:(id)arg2 endCapImage:(id)arg3;
- (void)_updateSecondaryRenderContextWithBlockCoordinates:(id)arg1 secondaryRenderContext:(id)arg2 pointTransform:(struct CGAffineTransform)arg3 zoomLevelConfiguration:(id)arg4 axisRect:(struct CGRect)arg5;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform)arg4 renderContext:(struct CGContext *)arg5 secondaryRenderContext:(id)arg6;
- (void)_enumerateSinePathsFromBlockCoordinates:(id)arg1 transfrom:(struct CGAffineTransform)arg2 zoomLevelConfiguration:(id)arg3 presentationStyle:(id)arg4 axisRect:(struct CGRect)arg5 handler:(CDUnknownBlockType)arg6;
- (void)_enumerateSawToothPathsFromBlockCoordinates:(id)arg1 transform:(struct CGAffineTransform)arg2 zoomLevelConfiguration:(id)arg3 presentationStyle:(id)arg4 axisRect:(struct CGRect)arg5 handler:(CDUnknownBlockType)arg6;
- (void)_addAxisAnnotationForValue:(double)arg1;
- (void)_enumeratePathsFromBlockCoordinates:(id)arg1 axisRect:(struct CGRect)arg2 zoomLevelConfiguration:(id)arg3 transform:(struct CGAffineTransform)arg4 presentationStyle:(id)arg5 handler:(CDUnknownBlockType)arg6;
- (void)_enumerateCoordinateListByRemovingOffscreenPoints:(id)arg1 withTransform:(struct CGAffineTransform)arg2 presentationStyle:(id)arg3 zoomLevelConfiguration:(id)arg4 axisRect:(struct CGRect)arg5 block:(CDUnknownBlockType)arg6;
- (void)_enumerateCoordinateList:(id)arg1 withTransform:(struct CGAffineTransform)arg2 presentationStyle:(id)arg3 zoomLevelConfiguration:(id)arg4 axisRect:(struct CGRect)arg5 block:(CDUnknownBlockType)arg6;
- (void)_enumerateCoordinateList:(id)arg1 withTransform:(struct CGAffineTransform)arg2 weightedAverageWidth:(double)arg3 block:(CDUnknownBlockType)arg4;
- (id)_currentPresentationStyles;
- (id)init;

@end

