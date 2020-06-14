//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSFuture-Protocol.h>

@class NSConditionLock, NSError, NSMutableArray, NSString;

@interface BSFuture : NSObject <BSFuture>
{
    NSConditionLock *_stateLock;
    id _result;
    NSError *_error;
    NSMutableArray *_completionBlocks;
}

- (void).cxx_destruct;
- (void)_flushCompletionBlocks;
- (void)_addCompletionBlock:(CDUnknownBlockType)arg1;
- (void)addFailureBlock:(CDUnknownBlockType)arg1;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1;
- (_Bool)_nts_isFinished;
- (_Bool)finishWithError:(id)arg1;
- (_Bool)finishWithResult:(id)arg1;
- (_Bool)finishWithResult:(id)arg1 error:(id)arg2;
- (void)didCancel;
- (_Bool)cancel;
@property(readonly, getter=isCancelled) _Bool cancelled;
@property(readonly, getter=isFinished) _Bool finished;
- (id)resultBeforeDate:(id)arg1 error:(id *)arg2;
- (id)result:(id *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

