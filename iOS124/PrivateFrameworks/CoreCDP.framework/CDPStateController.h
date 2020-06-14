//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreCDP/CDPController.h>

@interface CDPStateController : CDPController
{
}

- (void)handleURLActionWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleURLActionWithInfo:(id)arg1;
- (id)generateRandomRecoveryKey:(id *)arg1;
- (_Bool)deleteRecoveryKeyWithError:(id *)arg1;
- (void)deleteRecoveryKey:(CDUnknownBlockType)arg1;
- (void)generateNewRecoveryKey:(CDUnknownBlockType)arg1;
- (_Bool)shouldPerformRepair:(id *)arg1;
- (void)finishOfflineLocalSecretChangeWithCompletion:(CDUnknownBlockType)arg1;
- (void)localSecretChangedTo:(id)arg1 secretType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)recoverWithSquirrel:(CDUnknownBlockType)arg1;
- (void)recoverAndSynchronizeWithSquirrel:(CDUnknownBlockType)arg1;
- (void)startCircleApplicationApprovalServer:(CDUnknownBlockType)arg1;
- (void)repairCloudDataProtectionStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleCloudDataProtectionStateWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isManateeAvailable:(id *)arg1;

@end

