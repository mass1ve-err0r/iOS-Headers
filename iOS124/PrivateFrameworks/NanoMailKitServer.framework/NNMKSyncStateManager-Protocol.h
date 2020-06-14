//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoMailKitServer/NSObject-Protocol.h>

@class NNMKMessage, NSError, NSNumber, NSString, NSValue;
@protocol NNMKSyncStateManagerDelegate;

@protocol NNMKSyncStateManager <NSObject>
@property(nonatomic) __weak id <NNMKSyncStateManagerDelegate> delegate;
- (_Bool)pairedDeviceSupportsStandaloneMode;
- (_Bool)pairedDeviceSupportsMultipleMailboxes;
- (_Bool)willPresentNotificationForMessage:(NNMKMessage *)arg1;
- (_Bool)pairedDeviceSupportsMailContentProtectedChannel;
- (NSNumber *)pairedDeviceScreenScale;
- (NSValue *)pairedDeviceScreenSize;
- (NSString *)pairingStorePath;
- (_Bool)isInitialSyncRestricted;
- (void)reportInitialSyncDidFailWithError:(NSError *)arg1;
- (void)reportInitialSyncDidComplete;
- (void)reportInitialSyncDidCompleteSending;
- (void)reportInitialSyncProgress:(double)arg1;
@end

