//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVMLKit/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSString;

@interface _TVNavigationZoomAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
}

- (void)_beginZoomAnimationFromViewController:(id)arg1 toViewController:(id)arg2 containerView:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

