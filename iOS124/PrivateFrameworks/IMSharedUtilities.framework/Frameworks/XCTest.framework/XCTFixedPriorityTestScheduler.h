//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTest/XCTTestScheduler-Protocol.h>

@class NSMutableArray, NSMutableSet, NSSet;
@protocol OS_dispatch_queue, XCTTestSchedulerDelegate;

@interface XCTFixedPriorityTestScheduler : NSObject <XCTTestScheduler>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSMutableArray *_undispatchedTestIdentifierGroups;
    NSSet *_testIdentifiersToSkip;
    NSMutableSet *_inFlightWorkers;
    CDUnknownBlockType _prioritizer;
    _Bool _hasStarted;
    NSMutableSet *_queuedWorkers;
    id <XCTTestSchedulerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

+ (CDUnknownBlockType)classBasedLPTPrioritizerForClassTimes:(id)arg1 fallbackExecutionOrdering:(long long)arg2;
@property(retain) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property __weak id <XCTTestSchedulerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSMutableSet *queuedWorkers; // @synthesize queuedWorkers=_queuedWorkers;
@property _Bool hasStarted; // @synthesize hasStarted=_hasStarted;
@property(readonly) CDUnknownBlockType prioritizer; // @synthesize prioritizer=_prioritizer;
@property(readonly) NSMutableSet *inFlightWorkers; // @synthesize inFlightWorkers=_inFlightWorkers;
@property(retain) NSSet *testIdentifiersToSkip; // @synthesize testIdentifiersToSkip=_testIdentifiersToSkip;
@property(retain) NSMutableArray *undispatchedTestIdentifierGroups; // @synthesize undispatchedTestIdentifierGroups=_undispatchedTestIdentifierGroups;
@property(retain) NSObject<OS_dispatch_queue> *workerQueue; // @synthesize workerQueue=_workerQueue;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)startWithTestIdentifiersToRun:(id)arg1 testIdentifiersToSkip:(id)arg2;
- (void)workerDidBecomeAvailable:(id)arg1;
- (void)_queue_dispatchWorkToWorker:(id)arg1;
- (id)_queue_nextBatchOfWork;
- (id)initWithPrioritizer:(CDUnknownBlockType)arg1;

@end

