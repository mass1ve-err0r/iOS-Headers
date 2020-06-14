//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaControls/NSObject-Protocol.h>

@class HMAccessory, HMActionSet, HMHome, HMRoom, HMService, HMServiceGroup, HMTrigger, HMUser, HMZone, NSError;

@protocol HMHomeDelegate <NSObject>

@optional
- (void)home:(HMHome *)arg1 didUpdateHomeHubState:(unsigned long long)arg2;
- (void)home:(HMHome *)arg1 didEncounterError:(NSError *)arg2 forAccessory:(HMAccessory *)arg3;
- (void)home:(HMHome *)arg1 didUnblockAccessory:(HMAccessory *)arg2;
- (void)home:(HMHome *)arg1 didUpdateTrigger:(HMTrigger *)arg2;
- (void)home:(HMHome *)arg1 didUpdateNameForTrigger:(HMTrigger *)arg2;
- (void)home:(HMHome *)arg1 didRemoveTrigger:(HMTrigger *)arg2;
- (void)home:(HMHome *)arg1 didAddTrigger:(HMTrigger *)arg2;
- (void)home:(HMHome *)arg1 didUpdateActionsForActionSet:(HMActionSet *)arg2;
- (void)home:(HMHome *)arg1 didUpdateNameForActionSet:(HMActionSet *)arg2;
- (void)home:(HMHome *)arg1 didRemoveActionSet:(HMActionSet *)arg2;
- (void)home:(HMHome *)arg1 didAddActionSet:(HMActionSet *)arg2;
- (void)home:(HMHome *)arg1 didRemoveService:(HMService *)arg2 fromServiceGroup:(HMServiceGroup *)arg3;
- (void)home:(HMHome *)arg1 didAddService:(HMService *)arg2 toServiceGroup:(HMServiceGroup *)arg3;
- (void)home:(HMHome *)arg1 didUpdateNameForServiceGroup:(HMServiceGroup *)arg2;
- (void)home:(HMHome *)arg1 didRemoveServiceGroup:(HMServiceGroup *)arg2;
- (void)home:(HMHome *)arg1 didAddServiceGroup:(HMServiceGroup *)arg2;
- (void)home:(HMHome *)arg1 didRemoveRoom:(HMRoom *)arg2 fromZone:(HMZone *)arg3;
- (void)home:(HMHome *)arg1 didAddRoom:(HMRoom *)arg2 toZone:(HMZone *)arg3;
- (void)home:(HMHome *)arg1 didUpdateNameForZone:(HMZone *)arg2;
- (void)home:(HMHome *)arg1 didRemoveZone:(HMZone *)arg2;
- (void)home:(HMHome *)arg1 didAddZone:(HMZone *)arg2;
- (void)home:(HMHome *)arg1 didUpdateNameForRoom:(HMRoom *)arg2;
- (void)home:(HMHome *)arg1 didRemoveRoom:(HMRoom *)arg2;
- (void)home:(HMHome *)arg1 didAddRoom:(HMRoom *)arg2;
- (void)home:(HMHome *)arg1 didUpdateRoom:(HMRoom *)arg2 forAccessory:(HMAccessory *)arg3;
- (void)home:(HMHome *)arg1 didRemoveUser:(HMUser *)arg2;
- (void)home:(HMHome *)arg1 didAddUser:(HMUser *)arg2;
- (void)home:(HMHome *)arg1 didRemoveAccessory:(HMAccessory *)arg2;
- (void)home:(HMHome *)arg1 didAddAccessory:(HMAccessory *)arg2;
- (void)homeDidUpdateAccessControlForCurrentUser:(HMHome *)arg1;
- (void)homeDidUpdateName:(HMHome *)arg1;
@end

