//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CABasicAnimation.h>

@interface CASpringAnimation : CABasicAnimation
{
}

+ (id)defaultValueForKey:(id)arg1;
@property double initialVelocity;
@property double damping;
@property double stiffness;
@property double mass;
@property(readonly) double settlingDuration;
- (double)_timeFunction:(double)arg1;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (struct Animation *)_copyRenderAnimationForLayer:(id)arg1;
- (_Bool)_setCARenderAnimation:(struct Animation *)arg1 layer:(id)arg2;
- (float)_solveForInput:(float)arg1;
- (double)durationForEpsilon:(double)arg1;
@property double velocity;

@end

