//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesShared/ICDocCamImageQuad-Protocol.h>

@class NSString;

@interface ICDocCamImageQuad : NSObject <ICDocCamImageQuad>
{
    struct CGPoint _topLeft;
    struct CGPoint _topRight;
    struct CGPoint _bottomLeft;
    struct CGPoint _bottomRight;
    struct CGRect _boundingBox;
}

+ (id)quadFromCGRect:(struct CGRect)arg1;
+ (id)quadFromVNRectangle:(id)arg1;
@property(nonatomic) struct CGRect boundingBox; // @synthesize boundingBox=_boundingBox;
@property(nonatomic) struct CGPoint bottomRight; // @synthesize bottomRight=_bottomRight;
@property(nonatomic) struct CGPoint bottomLeft; // @synthesize bottomLeft=_bottomLeft;
@property(nonatomic) struct CGPoint topRight; // @synthesize topRight=_topRight;
@property(nonatomic) struct CGPoint topLeft; // @synthesize topLeft=_topLeft;
- (void)addPointToQuadPoints:(struct CGPoint)arg1;
- (struct CGPoint)pointRotatedClockwiseAroundOrigin:(struct CGPoint)arg1;
- (void)rotatePointsClockwise;
- (void)rotatePointsByOrientation:(long long)arg1;
- (void)rotatePointsRemovingOrientation:(long long)arg1;
- (void)removeOrientation:(long long)arg1 boundingBox:(struct CGRect)arg2;
- (void)applyOrientation:(long long)arg1 boundingBox:(struct CGRect)arg2;
@property(readonly, nonatomic) _Bool isConvex;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)flippedQuadFromSourceFrame:(struct CGRect)arg1;
- (id)intersectionOfLineFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2 withLineFrom:(struct CGPoint)arg3 to:(struct CGPoint)arg4;
@property(readonly, nonatomic) _Bool containsIntersectingLines;
@property(readonly, nonatomic) _Bool containsPointsLessThanDistanceThreshold;
@property(readonly, nonatomic) _Bool containsAngleOutOfValidThreshold;
@property(readonly, nonatomic) _Bool containsPointOutsideOfExtendedImageBounds;
@property(readonly, nonatomic) double mininumAllowedDistanceBetweenPoints;
@property(readonly, nonatomic) _Bool isValid;
- (void)orientIfNecessary;
- (void)clampQuadToRect:(struct CGRect)arg1;
- (void)flipPointsWithSourceFrame:(struct CGRect)arg1;
- (struct CGSize)perspectiveCorrectedSize;
@property(readonly, nonatomic) struct CGRect bounds;
- (id)imageQuadByScalingBy:(struct CGSize)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithBottomLeft:(struct CGPoint)arg1 bottomRight:(struct CGPoint)arg2 topLeft:(struct CGPoint)arg3 topRight:(struct CGPoint)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

