//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWDMetricReporter : NSObject
{
}

+ (void)reportStateMachineRecoveryWithSecretType:(long long)arg1 userDidReset:(_Bool)arg2 error:(id)arg3;
+ (void)reportStateMachineRepairCircleAuth;
+ (void)reportStateMachineRepairHSA2AuthWithError:(id)arg1;
+ (void)reportStateMachineCircleJoinWithResult:(id)arg1 error:(id)arg2;
+ (void)reportStateMachineEnableCDPResult:(id)arg1;
+ (void)reportStateMachineLockAssertionWithError:(id)arg1;
+ (void)reportStateMachineCompletionShouldCompleteSignIn:(_Bool)arg1 cloudDataProtectionEnabled:(_Bool)arg2 error:(id)arg3;
+ (void)reportPiggyBackWithSuccess:(_Bool)arg1 error:(id)arg2;

@end

