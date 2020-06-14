//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UINavigationBarTransitionContext.h>

__attribute__((visibility("hidden")))
@interface _UINavigationBarTransitionContextPop : _UINavigationBarTransitionContext
{
    struct CGRect _endingNewTitleViewFrame;
    struct CGRect _endingNewBackButtonFrame;
    struct CGSize _titleTransitionDistance;
    double _titleTransitionAdjustment;
}

- (void)complete;
- (void)cancel;
- (void)_finishWithFinalLayout:(id)arg1 finalLargeTitleLayout:(id)arg2 invalidLayout:(id)arg3 invalidLargeTitleLayout:(id)arg4;
- (void)animate;
- (void)_animateLargeTitleView;
- (void)_animateContentView;
- (void)_animateScaleTransition;
- (void)prepare;
- (void)_prepareLargeTitleView;
- (void)_prepareContentView;
- (void)_prepareScaleTransition;
- (id)viewUsingEaseInCurve;
- (int)transition;

@end

