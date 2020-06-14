//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNScheduler-Protocol.h>

@class CNQueue, NSString;

@interface CNVirtualScheduler : NSObject <CNScheduler>
{
    unsigned long long _clock;
    unsigned long long _nextSchedulableTick;
    unsigned long long _stopTime;
    CNQueue *_queue;
    _Bool _isStarted;
    _Bool _isPerforming;
}

+ (unsigned long long)timeWithDelay:(double)arg1 fromClock:(unsigned long long)arg2;
+ (id)providerWithScheduler:(id)arg1;
@property(readonly, nonatomic) _Bool isPerforming; // @synthesize isPerforming=_isPerforming;
@property(readonly, nonatomic) _Bool isStarted; // @synthesize isStarted=_isStarted;
@property(readonly, nonatomic) CNQueue *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) unsigned long long stopTime; // @synthesize stopTime=_stopTime;
@property(readonly, nonatomic) unsigned long long nextSchedulableTick; // @synthesize nextSchedulableTick=_nextSchedulableTick;
@property(readonly) unsigned long long clock; // @synthesize clock=_clock;
- (void).cxx_destruct;
- (_Bool)hasJobsScheduled;
- (void)stop;
- (_Bool)_performJobs;
- (void)advanceTo:(unsigned long long)arg1;
- (void)advanceBy:(unsigned long long)arg1;
- (void)start;
- (unsigned long long)_nextSchedulableTick;
- (id)_scheduleBlock:(CDUnknownBlockType)arg1 atTime:(unsigned long long)arg2;
@property(readonly) double timestamp;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2 qualityOfService:(unsigned long long)arg3;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

