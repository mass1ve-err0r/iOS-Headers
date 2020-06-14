//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIBoundingPath.h>

@class _UIBoundingPathBitmap;

__attribute__((visibility("hidden")))
@interface _UIBezierBoundingPath : _UIBoundingPath
{
    double _scale;
    long long _orientation;
    _UIBoundingPathBitmap *_bitmap;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (struct CGRect)_largestInscribedRectInBoundingPathAndRect:(struct CGRect)arg1 withCenter:(struct CGPoint)arg2 aspectRatio:(double)arg3;
- (struct CGRect)_largestInscribedPortraitPixelRectInBoundingPathWithPortraitPixelRect:(struct CGRect)arg1 portraitAspectRatio:(double)arg2;
- (struct CGRect)_inscribedRectInBoundingPathAndRect:(struct CGRect)arg1 byInsettingRect:(struct CGRect)arg2 onEdges:(unsigned long long)arg3 withOptions:(unsigned long long)arg4;
- (struct _UIIntegralRect)_rectByVerticallyInsettingPortraitPixelRect:(struct _UIIntegralRect)arg1 onPortraitEdges:(unsigned long long)arg2 performCompleteTest:(_Bool)arg3;
- (struct _UIIntegralRect)_rectByHorizontallyInsettingPortraitPixelRect:(struct _UIIntegralRect)arg1 onPortraitEdges:(unsigned long long)arg2 performCompleteTest:(_Bool)arg3;
- (_Bool)isNonRectangular;
- (void)setCoordinateSpace:(id)arg1;
- (_Bool)validateForCoordinateSpace;
- (_Bool)_validateBitmap:(id)arg1 withOrientation:(long long)arg2 scale:(double)arg3 forCoordinateSpace:(id)arg4;
- (id)boundingPathForCoordinateSpace:(id)arg1;
- (id)initWithCoordinateSpace:(id)arg1 orientation:(long long)arg2 scale:(double)arg3 boundingPathBitmap:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

