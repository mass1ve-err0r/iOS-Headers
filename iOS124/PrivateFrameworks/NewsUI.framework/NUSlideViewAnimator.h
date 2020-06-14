//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMediaTimingFunction, NUAnimationFactory;

@interface NUSlideViewAnimator : NSObject
{
    _Bool _animating;
    double _duration;
    CAMediaTimingFunction *_mediaTimingFunction;
    double _translateBoundsPadding;
    NUAnimationFactory *_animationFactory;
    struct CGRect _bounds;
}

@property(retain, nonatomic) NUAnimationFactory *animationFactory; // @synthesize animationFactory=_animationFactory;
@property(nonatomic) double translateBoundsPadding; // @synthesize translateBoundsPadding=_translateBoundsPadding;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(retain, nonatomic) CAMediaTimingFunction *mediaTimingFunction; // @synthesize mediaTimingFunction=_mediaTimingFunction;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
- (void).cxx_destruct;
- (unsigned long long)animationOptionsForAnimationFactory:(id)arg1;
- (struct CGAffineTransform)toViewTransformForDirection:(unsigned long long)arg1;
- (struct CGAffineTransform)fromViewTransformForDirection:(unsigned long long)arg1;
- (void)translateFromView:(id)arg1 toView:(id)arg2 direction:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithBounds:(struct CGRect)arg1;

@end

