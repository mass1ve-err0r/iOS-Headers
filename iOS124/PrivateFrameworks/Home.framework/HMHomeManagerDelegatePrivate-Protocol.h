//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HMHomeManagerDelegate-Protocol.h>

@class HMHomeManager, NSArray;

@protocol HMHomeManagerDelegatePrivate <HMHomeManagerDelegate>

@optional
- (void)homeManagerDidEndBatchNotifications:(HMHomeManager *)arg1;
- (void)homeManagerWillStartBatchNotifications:(HMHomeManager *)arg1;
- (void)homeManager:(HMHomeManager *)arg1 residentProvisioningStatusChanged:(unsigned long long)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateThisDeviceIsResidentCapable:(_Bool)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateAccessAllowedWhenLocked:(_Bool)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateResidentEnabledForThisDevice:(_Bool)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateStatus:(unsigned long long)arg2;
- (void)homeManagerDidUpdateDataSyncState:(HMHomeManager *)arg1;
- (void)homeManagerDidUpdateDataSyncInProgress:(HMHomeManager *)arg1;
- (void)homeManagerDidUpdateCurrentHome:(HMHomeManager *)arg1;
- (void)homeManagerDidUpdateApplicationData:(HMHomeManager *)arg1;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateStateForIncomingInvitations:(NSArray *)arg2;
@end

