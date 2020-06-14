//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileTimer/NSObject-Protocol.h>

@class INSearchForTimersIntent;

@protocol INSearchForTimersIntentHandling <NSObject>
- (void)handleSearchForTimers:(INSearchForTimersIntent *)arg1 completion:(void (^)(INSearchForTimersIntentResponse *))arg2;

@optional
- (void)resolveStateForSearchForTimers:(INSearchForTimersIntent *)arg1 withCompletion:(void (^)(INTimerStateResolutionResult *))arg2;
- (void)resolveDurationForSearchForTimers:(INSearchForTimersIntent *)arg1 withCompletion:(void (^)(INTimeIntervalResolutionResult *))arg2;
- (void)resolveLabelForSearchForTimers:(INSearchForTimersIntent *)arg1 withCompletion:(void (^)(INSpeakableStringResolutionResult *))arg2;
- (void)confirmSearchForTimers:(INSearchForTimersIntent *)arg1 completion:(void (^)(INSearchForTimersIntentResponse *))arg2;
@end

