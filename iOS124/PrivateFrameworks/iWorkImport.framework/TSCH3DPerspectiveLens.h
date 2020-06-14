//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DLens.h>

__attribute__((visibility("hidden")))
@interface TSCH3DPerspectiveLens : TSCH3DLens
{
    float mFOV;
    float mAspect;
}

@property(nonatomic) float aspect; // @synthesize aspect=mAspect;
@property(nonatomic) float fov; // @synthesize fov=mFOV;
- (void)calculateCullingPlanes:(vector_5e6a89be *)arg1;
- (id)shiftedByPercentage:(tvec2_84d5962d *)arg1;
- (id)narrowedByNormalizedBounds:(box_80622335 *)arg1;
- (id)asFrustumLens;
- (tmat4x4_3074befe)matrix;
- (id)frustumRectAtDistance:(float)arg1;
- (id)frustumRect;
@property(readonly, nonatomic) float height;
@property(readonly, nonatomic) float width;
- (id)matrixDescription;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

