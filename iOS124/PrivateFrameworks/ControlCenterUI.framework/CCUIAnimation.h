//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ControlCenterUI/NSCopying-Protocol.h>

@protocol CCUIAnimationParameters;

@interface CCUIAnimation : NSObject <NSCopying>
{
    id <CCUIAnimationParameters> _parameters;
    double _delay;
    double _speed;
    CDUnknownBlockType _animations;
}

+ (id)animationWithParameters:(id)arg1 delay:(double)arg2 speed:(double)arg3 animations:(CDUnknownBlockType)arg4;
+ (id)animationWithParameters:(id)arg1 delay:(double)arg2 animations:(CDUnknownBlockType)arg3;
+ (id)animationWithParameters:(id)arg1 animations:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) CDUnknownBlockType animations; // @synthesize animations=_animations;
@property(readonly, nonatomic) double speed; // @synthesize speed=_speed;
@property(readonly, nonatomic) double delay; // @synthesize delay=_delay;
@property(readonly, copy, nonatomic) id <CCUIAnimationParameters> parameters; // @synthesize parameters=_parameters;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithParameters:(id)arg1 delay:(double)arg2 speed:(double)arg3 animations:(CDUnknownBlockType)arg4;

@end

