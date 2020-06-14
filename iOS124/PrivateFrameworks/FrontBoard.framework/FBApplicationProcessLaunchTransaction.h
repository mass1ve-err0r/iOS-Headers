//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoard/FBTransaction.h>

@class FBApplicationProcess, FBProcessExecutionContext, FBProcessManager, FBWaitForProcessDeathTransaction, NSString;

@interface FBApplicationProcessLaunchTransaction : FBTransaction
{
    FBProcessManager *_processManager;
    NSString *_bundleID;
    FBApplicationProcess *_process;
    CDUnknownBlockType _executionContextProvider;
    FBWaitForProcessDeathTransaction *_deathTransaction;
    FBProcessExecutionContext *_executionContext;
    int _interruptedOrComplete;
    _Bool _failedLaunch;
    _Bool _exited;
}

@property(readonly, nonatomic) _Bool exited; // @synthesize exited=_exited;
@property(readonly, nonatomic) _Bool failedLaunch; // @synthesize failedLaunch=_failedLaunch;
@property(readonly, nonatomic) FBApplicationProcess *process; // @synthesize process=_process;
- (void).cxx_destruct;
- (void)_queue_finishProcessLaunch:(_Bool)arg1;
- (void)_queue_processWillLaunch:(id)arg1;
- (void)_queue_launchProcess:(id)arg1;
- (void)_queue_noteExited;
- (id)_customizedDescriptionProperties;
- (_Bool)_shouldFailForChildTransaction:(id)arg1;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_didComplete;
- (void)_willComplete;
- (void)_willInterruptWithReason:(id)arg1;
- (_Bool)_canBeInterrupted;
- (void)_begin;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithApplicationBundleID:(id)arg1 executionContextProvider:(CDUnknownBlockType)arg2;
- (id)initWithApplicationProcess:(id)arg1;

@end

