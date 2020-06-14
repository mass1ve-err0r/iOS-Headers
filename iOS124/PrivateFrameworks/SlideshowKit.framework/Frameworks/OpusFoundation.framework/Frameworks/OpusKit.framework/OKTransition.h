//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OpusKit/OFViewControllerAnimatedTransitioning-Protocol.h>
#import <OpusKit/OFViewControllerInteractiveTransitioning-Protocol.h>
#import <OpusKit/OKSettingsSupport-Protocol.h>

@class NSString;

@interface OKTransition : NSObject <OKSettingsSupport, OFViewControllerAnimatedTransitioning, OFViewControllerInteractiveTransitioning>
{
    int _animationCompletionBarrier;
    _Bool _reversed;
    _Bool _isForward;
    double _duration;
    struct CGPoint _currentLocation;
}

+ (void)setupJavascriptContext:(id)arg1;
+ (id)supportedSettings;
@property(readonly) struct CGPoint currentLocation; // @synthesize currentLocation=_currentLocation;
@property(nonatomic) _Bool isForward; // @synthesize isForward=_isForward;
@property(nonatomic) _Bool reversed; // @synthesize reversed=_reversed;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (_Bool)_canComplete;
- (double)transitionDurationWithContext:(id)arg1;
- (void)animateTransitionWithContext:(id)arg1;
- (void)makeCurrentTransitionInteractiveWithContext:(id)arg1 andProgress:(double)arg2;
- (void)endInteractiveTransitionWithContext:(id)arg1 transitionCompleted:(_Bool)arg2;
- (void)updateInteractiveTransitionWithContext:(id)arg1 andProgress:(double)arg2;
- (void)startInteractiveTransitionWithContext:(id)arg1;
@property(readonly) _Bool tracksWithFinger;
- (void)transitionInView:(id)arg1 fromSubview:(id)arg2 toSubview:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_transitionInView:(id)arg1 fromSubview:(id)arg2 toSubview:(id)arg3 wasInteractive:(_Bool)arg4 duration:(double)arg5 doEaseIn:(_Bool)arg6 doEaseOut:(_Bool)arg7 isCompleting:(_Bool)arg8 wasCancelled:(_Bool)arg9 fromProgress:(double)arg10 completionHandler:(CDUnknownBlockType)arg11;
- (struct CGPoint)resolveLocation:(struct CGPoint)arg1;
- (void)setUserSettingObject:(id)arg1 forKey:(id)arg2;
- (id)settingObjectForKey:(id)arg1;
- (void)setSettingReversed:(_Bool)arg1;
- (void)setSettingDuration:(double)arg1;
- (void)dealloc;
- (id)initWithSettings:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

