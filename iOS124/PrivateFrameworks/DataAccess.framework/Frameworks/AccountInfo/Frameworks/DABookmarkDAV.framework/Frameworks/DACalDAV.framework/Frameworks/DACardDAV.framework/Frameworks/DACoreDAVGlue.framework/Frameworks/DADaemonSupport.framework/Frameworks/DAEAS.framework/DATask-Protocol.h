//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/NSObject-Protocol.h>

@class DATaskManager, NSError;

@protocol DATask <NSObject>
- (void)cancelTaskWithReason:(int)arg1 underlyingError:(NSError *)arg2;
- (void)finishWithError:(NSError *)arg1;
- (void)performTask;

@optional
- (_Bool)shouldForceNetworking;
- (void)setTaskManager:(DATaskManager *)arg1;
- (_Bool)shouldHoldPowerAssertion;
- (void)requestCancelTaskWithReason:(int)arg1;
- (void)startModal;
@end

