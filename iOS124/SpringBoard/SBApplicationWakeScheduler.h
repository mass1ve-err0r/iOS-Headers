//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSInvalidatable-Protocol.h"

@class BKSProcessAssertion, NSDate, NSString, NSTimer, PCPersistentTimer, SBApplication;
@protocol SBApplicationWakeSchedulerDelegate;

@interface SBApplicationWakeScheduler : NSObject <BSInvalidatable>
{
    id <SBApplicationWakeSchedulerDelegate> _delegate;
    SBApplication *_application;
    NSString *_identifier;
    double _resumeDuration;
    unsigned int _resumeReason;
    NSString *_defaultDescription;
    BKSProcessAssertion *_wakeProcessAssertion;
    NSTimer *_wakeSuspendTimer;
    PCPersistentTimer *_wakeTimer;
    _Bool _scheduled;
    _Bool _invalidated;
    NSDate *_scheduledDate;
}

@property(readonly, nonatomic, getter=_wakeProcessAssertion) BKSProcessAssertion *wakeProcessAssertion; // @synthesize wakeProcessAssertion=_wakeProcessAssertion;
@property(readonly, nonatomic, getter=_wakeTimer) PCPersistentTimer *wakeTimer; // @synthesize wakeTimer=_wakeTimer;
@property(readonly, nonatomic, getter=_wakeSuspendTimer) NSTimer *wakeSuspendTimer; // @synthesize wakeSuspendTimer=_wakeSuspendTimer;
@property(nonatomic, setter=_setApplication:) __weak SBApplication *application; // @synthesize application=_application;
@property(nonatomic) __weak id <SBApplicationWakeSchedulerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_applicationProcessStateDidChange:(id)arg1;
- (void)_endResumingAssertion;
- (void)_suspendForWakeTimerFired:(id)arg1;
- (void)_resumeForWakeWithReason:(id)arg1;
- (void)_wakeTimerDidFire;
- (_Bool)_scheduleForDate:(id)arg1;
- (void)_invalidateScheduledWakeTimer;
- (id)_createProcessAssertionForApplication:(id)arg1 name:(id)arg2;
- (void)invalidate;
- (void)endResumeIfAwoken;
- (void)unschedule;
- (void)scheduleForDate:(id)arg1;
- (void)resumeImmediatelyWithReason:(id)arg1;
@property(readonly, nonatomic) NSDate *scheduledDate; // @synthesize scheduledDate=_scheduledDate;
- (void)dealloc;
- (id)_initWithIdentifier:(id)arg1 taskResumptionReason:(unsigned int)arg2 resumeDuration:(double)arg3 defaultDescription:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

