//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSError, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVOperation : NSOperation
{
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    long long _status;
    NSError *_error;
}

+ (void)initialize;
+ (long long)statusOfOperations:(id)arg1 error:(id *)arg2;
- (void)markAsCancelled;
- (void)markAsFailedWithError:(id)arg1;
- (void)markAsCompleted;
- (void)didEnterTerminalState;
- (_Bool)_setStatus:(long long)arg1 error:(id)arg2 resultingStatus:(long long *)arg3 failureReason:(id *)arg4;
- (_Bool)isReady;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)evaluateDependenciesAndMarkAsExecuting;
@property(readonly) NSError *error;
@property(readonly) long long status;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

