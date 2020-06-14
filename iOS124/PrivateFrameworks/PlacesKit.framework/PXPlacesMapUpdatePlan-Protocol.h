//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PlacesKit/PXPlacesMapPipelineComponent-Protocol.h>

@protocol MKAnnotation, PXPlacesMapLayoutItem, PXPlacesMapLayoutResult, PXPlacesMapUpdatePlanResult;

@protocol PXPlacesMapUpdatePlan <PXPlacesMapPipelineComponent>
- (void)reset;
- (id <MKAnnotation>)annotationForLayoutItem:(id <PXPlacesMapLayoutItem>)arg1;
- (id <PXPlacesMapUpdatePlanResult>)removalPlanResult;
- (id <PXPlacesMapUpdatePlanResult>)resultForNewLayoutResult:(id <PXPlacesMapLayoutResult>)arg1;
@end

