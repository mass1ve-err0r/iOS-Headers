//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBViewControllerInteractiveTransitioning-Protocol.h"

@class NSString;
@protocol SBViewControllerContextTransitioning, UIViewControllerAnimatedTransitioning;

@interface SBSpotlightTransitionInteractor : NSObject <SBViewControllerInteractiveTransitioning>
{
    id <SBViewControllerContextTransitioning> _transitionContext;
    id <UIViewControllerAnimatedTransitioning> _animator;
    double _completionSpeed;
    long long _completionCurve;
}

@property(nonatomic) long long completionCurve; // @synthesize completionCurve=_completionCurve;
@property(nonatomic) double completionSpeed; // @synthesize completionSpeed=_completionSpeed;
- (void).cxx_destruct;
- (void)startInteractiveTransition:(id)arg1;
- (void)cancelTransition;
- (void)finishInteractiveTransition;
- (void)updateTransition:(double)arg1;
- (id)initWithAnimator:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsInteractiveStart;

@end

