//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDNanoSyncStore, NSCalendar, NSDate, NSMutableArray, NSUUID, _HKExpiringCompletionTimer;

@interface HDNanoSyncRestoreSession : NSObject
{
    _Bool _finished;
    NSUUID *_sessionUUID;
    NSDate *_startDate;
    NSCalendar *_calendar;
    HDNanoSyncStore *_nanoSyncStore;
    long long _sequenceNumber;
    NSMutableArray *_completionHandlers;
    _HKExpiringCompletionTimer *_timer;
}

@property(retain, nonatomic) _HKExpiringCompletionTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(nonatomic) long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(readonly, nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(readonly, nonatomic) HDNanoSyncStore *nanoSyncStore; // @synthesize nanoSyncStore=_nanoSyncStore;
@property(readonly, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) NSUUID *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
- (void).cxx_destruct;
- (void)scheduleTimeoutWithInterval:(double)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_finishWithError:(id)arg1;
- (void)finishWithError:(id)arg1;
- (void)dealloc;
- (id)initWithSyncStore:(id)arg1 sessionUUID:(id)arg2;

@end

