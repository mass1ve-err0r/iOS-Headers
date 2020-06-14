//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDateInterval;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface REUpNextTimer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSDate *_lastFireDate;
    NSDateInterval *_fireInterval;
    double _rate;
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_source> *_dispatch_timer;
}

+ (id)timerWithFireInterval:(id)arg1 atRate:(double)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;
+ (id)timerWithFireDate:(id)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
+ (id)timerWithInterval:(double)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
@property(retain) NSObject<OS_dispatch_source> *dispatch_timer; // @synthesize dispatch_timer=_dispatch_timer;
@property(readonly, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, nonatomic) double rate; // @synthesize rate=_rate;
@property(readonly, nonatomic) NSDateInterval *fireInterval; // @synthesize fireInterval=_fireInterval;
- (void).cxx_destruct;
- (void)invalidate;
@property(readonly, getter=isValid) _Bool valid;
- (void)_rescheduleTimer;
- (void)_handleTimer;
- (void)_scheduleTimerWithInterval:(id)arg1 rate:(double)arg2;
- (_Bool)_isNowRepeatingTimerWithCurrentDate:(id)arg1;
- (void)dealloc;
- (id)initWithDateInterval:(id)arg1 rate:(double)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;

@end

