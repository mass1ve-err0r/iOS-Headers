//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIWindowAnimationController.h>

__attribute__((visibility("hidden")))
@interface _UIWindowRotationAnimationController : _UIWindowAnimationController
{
    _Bool _skipCallbacks;
    _Bool _updateStatusBarIfNecessary;
    CDUnknownBlockType _animations;
    double _duration;
}

@property(nonatomic) _Bool updateStatusBarIfNecessary; // @synthesize updateStatusBarIfNecessary=_updateStatusBarIfNecessary;
@property(nonatomic) _Bool skipCallbacks; // @synthesize skipCallbacks=_skipCallbacks;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) CDUnknownBlockType animations; // @synthesize animations=_animations;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)dealloc;

@end

