//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCH3DSceneObject : NSObject
{
}

+ (void)setSelectionPath:(id)arg1 selectionMode:(int)arg2 forScene:(id)arg3;
+ (double)textRotationForChartInfo:(id)arg1;
+ (id)sceneObject;
+ (id)renderCacheKey;
- (float)shadowCameraDepthLimitAdjustmentFactorForScene:(id)arg1;
- (id)renderInfoForSelectionPath:(id)arg1 info:(id)arg2;
- (_Bool)canEditTextForSelectionPath:(id)arg1 forInfo:(id)arg2;
- (_Bool)canRenderSelectionPath:(id)arg1 forInfo:(id)arg2;
- (id)convertSelectionPathTo3D:(id)arg1 path:(id)arg2;
- (id)selectionPathForInfo:(id)arg1 scene:(id)arg2 pickedPoint:(id)arg3;
- (void)statePreservedPostrender:(id)arg1;
- (void)statePreservedPrerender:(id)arg1;
- (void)statePreservedRender:(id)arg1;
- (void)statePreservedGetSceneObjectElementsBounds:(id)arg1;
- (void)statePreservedGetSelectionKnobsPositions:(id)arg1;
- (void)statePreservedPrimeRenderCaches:(id)arg1;
- (void)statePreservedRayPick:(id)arg1;
- (void)postGetBounds:(id)arg1;
- (void)getSelectionKnobsPositions:(id)arg1;
- (void)primeRenderCaches:(id)arg1;
- (void)getSceneObjectElementsBounds:(id)arg1;
- (void)rayPick:(id)arg1;
- (void)getBounds:(id)arg1;
- (void)postrender:(id)arg1;
- (void)render:(id)arg1;
- (void)prerender:(id)arg1;
- (Class)chartBoundsLayoutSceneDelegateClass;
- (struct EdgeDetectionParameters)edgeDetectionParameters;

@end

