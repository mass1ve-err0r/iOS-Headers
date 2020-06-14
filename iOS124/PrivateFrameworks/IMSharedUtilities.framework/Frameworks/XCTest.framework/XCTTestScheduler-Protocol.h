//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSObject, NSSet;
@protocol OS_dispatch_queue, XCTTestSchedulerDelegate, XCTTestSchedulerWorker;

@protocol XCTTestScheduler
@property(retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property __weak id <XCTTestSchedulerDelegate> delegate;
@property(retain) NSObject<OS_dispatch_queue> *workerQueue;
- (void)startWithTestIdentifiersToRun:(NSSet *)arg1 testIdentifiersToSkip:(NSSet *)arg2;
- (void)workerDidBecomeAvailable:(id <XCTTestSchedulerWorker>)arg1;
@end

