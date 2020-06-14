//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BaseBoardUI/NSCopying-Protocol.h>
#import <BaseBoardUI/_UIBasicAnimationFactory-Protocol.h>

@class BSAnimationSettings, NSString;

@interface BSUIAnimationFactory : NSObject <_UIBasicAnimationFactory, NSCopying>
{
    BSAnimationSettings *_settings;
    _Bool _allowsAdditiveAnimations;
}

+ (double)globalSlowDownFactor;
+ (id)factoryWithAnimationAttributes:(id)arg1;
+ (void)addAlongsideAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)animateWithSettings:(id)arg1 options:(unsigned long long)arg2 actions:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)animateWithSettings:(id)arg1 options:(unsigned long long)arg2 actions:(CDUnknownBlockType)arg3;
+ (void)animateWithSettings:(id)arg1 actions:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)animateWithSettings:(id)arg1 actions:(CDUnknownBlockType)arg2;
+ (void)animateWithFactory:(id)arg1 additionalDelay:(double)arg2 options:(unsigned long long)arg3 actions:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)animateWithFactory:(id)arg1 additionalDelay:(double)arg2 options:(unsigned long long)arg3 actions:(CDUnknownBlockType)arg4;
+ (void)animateWithFactory:(id)arg1 additionalDelay:(double)arg2 actions:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)animateWithFactory:(id)arg1 additionalDelay:(double)arg2 actions:(CDUnknownBlockType)arg3;
+ (void)animateWithFactory:(id)arg1 options:(unsigned long long)arg2 actions:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)animateWithFactory:(id)arg1 options:(unsigned long long)arg2 actions:(CDUnknownBlockType)arg3;
+ (void)animateWithFactory:(id)arg1 actions:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)animateWithFactory:(id)arg1 actions:(CDUnknownBlockType)arg2;
+ (id)factoryWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 timingFunction:(id)arg5;
+ (id)factoryWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 timingFunction:(id)arg4;
+ (id)factoryWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4 initialVelocity:(double)arg5;
+ (id)factoryWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3 epsilon:(double)arg4;
+ (id)factoryWithMass:(double)arg1 stiffness:(double)arg2 damping:(double)arg3;
+ (id)factoryWithDuration:(double)arg1 delay:(double)arg2 timingFunction:(id)arg3;
+ (id)factoryWithDuration:(double)arg1 timingFunction:(id)arg2;
+ (id)factoryWithDuration:(double)arg1 delay:(double)arg2;
+ (id)factoryWithDuration:(double)arg1;
+ (id)factoryWithSettings:(id)arg1 timingFunction:(id)arg2;
+ (id)factoryWithSettings:(id)arg1;
@property(nonatomic) _Bool allowsAdditiveAnimations; // @synthesize allowsAdditiveAnimations=_allowsAdditiveAnimations;
@property(readonly, copy, nonatomic) BSAnimationSettings *settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)_shouldAnimateAdditivelyForView:(id)arg1 withKeyPath:(id)arg2;
- (id)_timingFunctionForAnimation;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)applySettingsToCAAnimation:(id)arg1;
@property(readonly, copy, nonatomic) BSAnimationSettings *effectiveSettings;
@property(readonly, nonatomic) double delay;
@property(readonly, nonatomic) double duration;
- (void)_animateWithAdditionalDelay:(double)arg1 options:(unsigned long long)arg2 actions:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)factoryWithTimingFunction:(id)arg1;
- (id)init;
- (id)_initWithSettings:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

