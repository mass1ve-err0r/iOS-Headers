//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXComponentAnimationHandler.h>

#import <Silex/CAAnimationDelegate-Protocol.h>

@class NSString;

@interface SXMoveInComponentAnimationHandler : SXComponentAnimationHandler <CAAnimationDelegate>
{
    double _startXOffset;
}

@property(nonatomic) double startXOffset; // @synthesize startXOffset=_startXOffset;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)finishAnimation;
- (void)startAnimation;
- (void)updateAnimationWithFactor:(double)arg1;
- (void)prepareAnimation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

