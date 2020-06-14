//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSTimer;

@interface _UIFeedbackEngine : NSObject
{
    NSMutableDictionary *_completionBlocks;
    NSTimer *_suspensionTimer;
    _Bool _enabled;
    _Bool _suspended;
    long long _prewarmCount;
    long long _state;
    unsigned long long _numberOfClients;
    unsigned long long _backgroundTaskIdentifier;
    long long _suspensionState;
}

+ (_Bool)_supportsPlayingFeedback:(id)arg1;
+ (id)engineForFeedback:(id)arg1;
+ (id)sharedEngine;
@property(readonly, nonatomic, getter=_suspensionState) long long suspensionState; // @synthesize suspensionState=_suspensionState;
@property(nonatomic, getter=_backgroundTaskIdentifier, setter=_setBackgroundTaskIdentifier:) unsigned long long backgroundTaskIdentifier; // @synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier;
@property(nonatomic, getter=_isSuspended, setter=_setSuspended:) _Bool suspended; // @synthesize suspended=_suspended;
@property(readonly, nonatomic) unsigned long long numberOfClients; // @synthesize numberOfClients=_numberOfClients;
@property(nonatomic, getter=_state, setter=_setState:) long long state; // @synthesize state=_state;
@property(nonatomic, getter=isEnabled, setter=_setEnabled:) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) long long prewarmCount; // @synthesize prewarmCount=_prewarmCount;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *_stats_key;
- (void)_teardownBackgroundTask;
- (void)_setupBackgroundTask;
- (void)_removeViewControllerWillDisconnect:(id)arg1;
- (void)_hostWillEnterForeground:(id)arg1;
- (void)_hostDidEnterBackground:(id)arg1;
- (void)_applicationDidResume:(id)arg1;
- (void)_applicationWillSuspend:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_suspendEngineNow;
- (void)_applicationWillResignActive:(id)arg1;
- (void)runWhenReady:(CDUnknownBlockType)arg1;
- (void)_willCancelFeedback:(id)arg1;
- (void)_willPlayFeedback:(id)arg1 atTime:(double)arg2;
- (void)_dequeueReusableFeedbackPlayerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)_canPlayFeedback:(id)arg1;
@property(readonly, nonatomic) double currentTime;
- (_Bool)_cooldownUnderlyingPlayerIfPossible;
- (void)_prewarmUnderlyingPlayerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_cooldownEngineIfPossible;
- (void)_cooldown;
- (void)_prewarmEngine;
- (void)_prewarmWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_stopWarmingFeedbacks:(id)arg1;
- (void)_startWarmingFeedbacks:(id)arg1;
- (_Bool)_teardownUnderlyingPlayerIfPossible;
- (void)_activateUnderlyingPlayerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_deactivateEngineIfPossible;
- (void)_deactivate;
- (void)_activateEngine;
- (void)_activateWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_serviceBlocksForState:(long long)arg1 withSuccess:(_Bool)arg2;
- (void)_performAtState:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)_updateSuspension;
- (id)description;
- (id)init;
- (void)_stats_outOfChannels;
- (void)_stats_stateDidChangeFrom:(long long)arg1 to:(long long)arg2;
- (id)_outOfChannelsCountStatistics;
- (id)_prewarmDurationStatistics;
- (id)_prewarmCountStatistics;
- (id)_activationDurationStatistics;
- (id)_activationCountStatistics;
- (id)_statsSuffix;

@end

