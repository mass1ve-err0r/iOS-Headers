//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AutoCropper : NSObject
{
    _Bool shouldFavorBottom;
    _Bool shouldFavorTop;
    struct CGSize originalImageSize;
}

@property(nonatomic) struct CGSize originalImageSize; // @synthesize originalImageSize;
@property(nonatomic) _Bool shouldFavorBottom; // @synthesize shouldFavorBottom;
@property(nonatomic) _Bool shouldFavorTop; // @synthesize shouldFavorTop;
- (struct CGRect)computeClippingWithinSize:(struct CGSize)arg1 forMultipleRects:(id)arg2;
- (struct CGRect)computeClippingWithinSize:(struct CGSize)arg1 forImportantRect:(struct CGRect)arg2 andType:(int)arg3 restrictRect:(struct CGRect)arg4;
- (int)determineBestPositionWithinSize:(struct CGSize)arg1 forImportantRect:(struct CGRect)arg2 restrictRect:(struct CGRect)arg3;
- (struct CGRect)computeClippingWithinSize:(struct CGSize)arg1 andImportantRects:(id)arg2;
- (id)clusterRects:(id)arg1;
- (struct CGRect)rectContainingRect:(struct CGRect)arg1 andOtherRect:(struct CGRect)arg2;
- (struct CGRect)rectWithSize:(struct CGSize)arg1 andPoint:(struct CGPoint)arg2 inPosition:(int)arg3 fromOriginalSize:(struct CGSize)arg4;
- (struct CGRect)scaleRect:(struct CGRect)arg1 toFitSize:(struct CGSize)arg2 withAnchorPoint:(struct CGPoint)arg3;
- (int)getRatioOfSize:(struct CGSize)arg1;
- (struct CGRect)computeClippingWithinSize:(struct CGSize)arg1 andImportantRect:(struct CGRect)arg2;
- (struct CGRect)expandRect:(struct CGRect)arg1 toContainRect:(struct CGRect)arg2;
- (struct CGRect)scaleRect:(struct CGRect)arg1 byScale:(double)arg2;
- (id)init;

@end

