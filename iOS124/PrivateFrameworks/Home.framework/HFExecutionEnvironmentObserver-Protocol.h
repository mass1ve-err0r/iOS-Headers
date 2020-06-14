//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/NSObject-Protocol.h>

@class HFExecutionEnvironment;

@protocol HFExecutionEnvironmentObserver <NSObject>

@optional
- (void)executionEnvironmentDidBecomeScreenLocked:(HFExecutionEnvironment *)arg1;
- (void)executionEnvironmentDidBecomeOccluded:(HFExecutionEnvironment *)arg1;
- (void)executionEnvironmentDidBecomeVisible:(HFExecutionEnvironment *)arg1;
- (void)executionEnvironmentDidEnterBackground:(HFExecutionEnvironment *)arg1;
- (void)executionEnvironmentWillResignActive:(HFExecutionEnvironment *)arg1;
- (void)executionEnvironmentDidBecomeActive:(HFExecutionEnvironment *)arg1;
- (void)executionEnvironmentWillEnterForeground:(HFExecutionEnvironment *)arg1;
- (void)executionEnvironmentRunningStateDidChange:(HFExecutionEnvironment *)arg1;
@end

