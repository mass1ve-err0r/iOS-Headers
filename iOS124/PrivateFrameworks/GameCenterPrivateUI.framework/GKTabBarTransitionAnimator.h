//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameCenterPrivateUI/UIViewControllerAnimatorTransitioning-Protocol.h>

@class NSString, _GKBubbleFlowTransitionInfo;

@interface GKTabBarTransitionAnimator : NSObject <UIViewControllerAnimatorTransitioning>
{
    _GKBubbleFlowTransitionInfo *_transitionInfo;
}

@property(retain, nonatomic) _GKBubbleFlowTransitionInfo *transitionInfo; // @synthesize transitionInfo=_transitionInfo;
- (void)animationEnded:(_Bool)arg1;
- (void)_animateTransitionInTwoParts:(id)arg1;
- (void)_animateTransition:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)dealloc;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

