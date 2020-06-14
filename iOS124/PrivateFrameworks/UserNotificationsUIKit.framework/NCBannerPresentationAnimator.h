//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsUIKit/NCViewControllerAnimatedTransitioning-Protocol.h>

@class NSString, UIGestureRecognizer;
@protocol NCBannerPresentationAnimatorDelegate;

@interface NCBannerPresentationAnimator : NSObject <NCViewControllerAnimatedTransitioning>
{
    _Bool _presenting;
    id <NCBannerPresentationAnimatorDelegate> _transitionAnimatorDelegate;
    UIGestureRecognizer *_activeGesture;
}

@property(retain, nonatomic) UIGestureRecognizer *activeGesture; // @synthesize activeGesture=_activeGesture;
@property(nonatomic, getter=isPresenting) _Bool presenting; // @synthesize presenting=_presenting;
@property(nonatomic) __weak id <NCBannerPresentationAnimatorDelegate> transitionAnimatorDelegate; // @synthesize transitionAnimatorDelegate=_transitionAnimatorDelegate;
- (void).cxx_destruct;
- (void)_animateDismissalOfViewController:(id)arg1 withContext:(id)arg2;
- (void)_animatePresentationOfViewController:(id)arg1 withContext:(id)arg2;
- (double)transitionDuration:(id)arg1;
- (void)animationEnded:(_Bool)arg1;
- (void)animateTransition:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

