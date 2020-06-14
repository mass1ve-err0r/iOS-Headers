//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDAccessoryTransaction.h>

@class HMFConnectivityInfo, NSArray, NSData, NSDate, NSNumber, NSString;

@interface HMDHAPAccessoryTransaction : HMDAccessoryTransaction
{
}

+ (id)properties;
- (id)dependentUUIDs;

// Remaining properties
@property(retain, nonatomic) NSNumber *accessoryFlags; // @dynamic accessoryFlags;
@property(retain, nonatomic) NSData *accessorySetupHash; // @dynamic accessorySetupHash;
@property(retain, nonatomic) NSString *bridgeUUID; // @dynamic bridgeUUID;
@property(retain, nonatomic) NSData *broadcastKey; // @dynamic broadcastKey;
@property(retain, nonatomic) NSNumber *certificationStatus; // @dynamic certificationStatus;
@property(retain, nonatomic) HMFConnectivityInfo *connectivityInfo; // @dynamic connectivityInfo;
@property(retain, nonatomic) NSNumber *hardwareSupport; // @dynamic hardwareSupport;
@property(retain, nonatomic) NSNumber *keyUpdatedStateNumber; // @dynamic keyUpdatedStateNumber;
@property(retain, nonatomic) NSDate *keyUpdatedTime; // @dynamic keyUpdatedTime;
@property(retain, nonatomic) NSString *pairingUsername; // @dynamic pairingUsername;
@property(retain, nonatomic) NSData *publicKey; // @dynamic publicKey;
@property(retain, nonatomic) NSData *relayAccessToken; // @dynamic relayAccessToken;
@property(retain, nonatomic) NSString *relayIdentifier; // @dynamic relayIdentifier;
@property(retain, nonatomic) NSNumber *relayState; // @dynamic relayState;
@property(retain, nonatomic) NSNumber *supportsRelay; // @dynamic supportsRelay;
@property(retain, nonatomic) NSArray *targetUUIDs; // @dynamic targetUUIDs;
@property(retain, nonatomic) NSArray *transportInformation; // @dynamic transportInformation;
@property(retain, nonatomic) NSString *uniqueIdentifier; // @dynamic uniqueIdentifier;

@end

