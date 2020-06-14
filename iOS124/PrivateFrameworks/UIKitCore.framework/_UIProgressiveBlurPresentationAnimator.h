//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSString;

@interface _UIProgressiveBlurPresentationAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _presenting;
}

+ (id)transformAnimationFactory;
+ (id)alphaAnimationFactory;
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initForPresenting:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
