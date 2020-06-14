//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CLSQueryProtocol, OS_dispatch_queue, OS_dispatch_source;

@interface CLSQueueBasedGeoMapQueryHelper : NSObject
{
    _Bool _simulatesTimeout;
    _Bool _alreadyLaunched;
    _Bool _didFinishQuery;
    id <CLSQueryProtocol> _query;
    CDUnknownBlockType _cancellerBlock;
    CDUnknownBlockType _completionBlock;
    double _timeoutInterval;
    double _numberOfRetries;
    double _internalProgressTimeInterval;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_timerQueue;
    unsigned long long _retryLevel;
    double _nextRetryTime;
}

@property(nonatomic) _Bool didFinishQuery; // @synthesize didFinishQuery=_didFinishQuery;
@property(nonatomic) _Bool alreadyLaunched; // @synthesize alreadyLaunched=_alreadyLaunched;
@property(nonatomic) double nextRetryTime; // @synthesize nextRetryTime=_nextRetryTime;
@property(nonatomic) unsigned long long retryLevel; // @synthesize retryLevel=_retryLevel;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *timerQueue; // @synthesize timerQueue=_timerQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(nonatomic) double internalProgressTimeInterval; // @synthesize internalProgressTimeInterval=_internalProgressTimeInterval;
@property(nonatomic) double numberOfRetries; // @synthesize numberOfRetries=_numberOfRetries;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(nonatomic, getter=isSimulatingTimeout) _Bool simulatesTimeout; // @synthesize simulatesTimeout=_simulatesTimeout;
@property(readonly, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) CDUnknownBlockType cancellerBlock; // @synthesize cancellerBlock=_cancellerBlock;
@property(readonly, nonatomic) id <CLSQueryProtocol> query; // @synthesize query=_query;
- (void).cxx_destruct;
- (void)cancel;
- (void)_cancel;
- (void)_handleError:(id)arg1;
- (void)_heartBeat;
- (void)_startQuery;
- (void)_handleQueryResultsForQuery:(id)arg1 error:(id)arg2;
- (void)launchQueryWithCancellerBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithQueryObject:(id)arg1;

@end

