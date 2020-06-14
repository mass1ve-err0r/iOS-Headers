//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CAShapeLayer.h>

@interface TKVibrationRecorderRippleRingLayer : CAShapeLayer
{
    double _creationTimestamp;
    double _ringSpeed;
    struct CGPoint _normalizedRingLocation;
}

@property(readonly, nonatomic) double ringSpeed; // @synthesize ringSpeed=_ringSpeed;
@property(readonly, nonatomic) struct CGPoint normalizedRingLocation; // @synthesize normalizedRingLocation=_normalizedRingLocation;
- (void)reset;
- (void)configureWithTimeIntervalSinceCreation:(double)arg1 normalizedRingLocation:(struct CGPoint)arg2 ringSpeed:(double)arg3;
- (double)timeIntervalSinceCreation;
- (id)init;

@end

