//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol RCOperationThrottler
@property _Bool suspended;
- (void)tickleWithCompletion:(void (^)(void))arg1;
- (void)tickle;
@end

