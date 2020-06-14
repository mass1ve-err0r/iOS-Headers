//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoMailKitServer/NNMKSyncStateManager-Protocol.h>
#import <NanoMailKitServer/PSYSyncCoordinatorDelegate-Protocol.h>

@class BLTPingSubscriber, NSString, PSYSyncCoordinator;
@protocol NNMKSyncStateManagerDelegate;

@interface NNMKSyncStateManager : NSObject <PSYSyncCoordinatorDelegate, NNMKSyncStateManager>
{
    id <NNMKSyncStateManagerDelegate> delegate;
    BLTPingSubscriber *_notificationsPingSubscriber;
    PSYSyncCoordinator *_initialSyncCoordinator;
}

@property(retain, nonatomic) PSYSyncCoordinator *initialSyncCoordinator; // @synthesize initialSyncCoordinator=_initialSyncCoordinator;
@property(retain, nonatomic) BLTPingSubscriber *notificationsPingSubscriber; // @synthesize notificationsPingSubscriber=_notificationsPingSubscriber;
@property(nonatomic) __weak id <NNMKSyncStateManagerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (_Bool)pairedDeviceSupportsStandaloneMode;
- (_Bool)pairedDeviceSupportsMultipleMailboxes;
- (id)_pairedNanoRegistryDevice;
- (id)_bbSubsectionIdsForMessage:(id)arg1;
- (void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2;
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;
- (_Bool)pairedDeviceSupportsMailContentProtectedChannel;
- (void)_handlePairedDeviceChangedNotification:(id)arg1;
- (void)_handleDidUnpairNotification:(id)arg1;
- (_Bool)willPresentNotificationForMessage:(id)arg1;
- (id)pairedDeviceScreenScale;
- (id)pairedDeviceScreenSize;
- (id)pairingStorePath;
- (_Bool)isInitialSyncRestricted;
- (void)reportInitialSyncDidFailWithError:(id)arg1;
- (void)reportInitialSyncDidComplete;
- (void)reportInitialSyncDidCompleteSending;
- (void)reportInitialSyncProgress:(double)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

