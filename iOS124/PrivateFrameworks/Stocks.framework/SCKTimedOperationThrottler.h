//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Stocks/SCKOperationThrottler-Protocol.h>
#import <Stocks/SCKOperationThrottlerDelegate-Protocol.h>

@class NSString, SCKOperationThrottler;
@protocol SCKOperationThrottlerDelegate;

@interface SCKTimedOperationThrottler : NSObject <SCKOperationThrottlerDelegate, SCKOperationThrottler>
{
    double _cooldownTime;
    SCKOperationThrottler *_operationThrottler;
    id <SCKOperationThrottlerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCKOperationThrottlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SCKOperationThrottler *operationThrottler; // @synthesize operationThrottler=_operationThrottler;
@property double cooldownTime; // @synthesize cooldownTime=_cooldownTime;
- (void).cxx_destruct;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(CDUnknownBlockType)arg2;
@property _Bool suspended;
- (void)tickleWithCompletion:(CDUnknownBlockType)arg1;
- (void)tickle;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

