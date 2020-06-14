//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXComponentAnimationHandler.h>

#import <Silex/CAAnimationDelegate-Protocol.h>

@class NSString;

@interface SXScaleAndFadeComponentAnimationHandler : SXComponentAnimationHandler <CAAnimationDelegate>
{
    double _initialAlpha;
    double _initialScale;
}

@property(nonatomic) double initialScale; // @synthesize initialScale=_initialScale;
@property(nonatomic) double initialAlpha; // @synthesize initialAlpha=_initialAlpha;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)finishAnimation;
- (void)updateAnimationWithFactor:(double)arg1;
- (void)startAnimation;
- (void)prepareAnimation;
- (id)initWithComponent:(id)arg1 withAnimation:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
