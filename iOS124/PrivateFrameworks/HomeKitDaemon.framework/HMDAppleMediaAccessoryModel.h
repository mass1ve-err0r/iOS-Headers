//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDMediaAccessoryModel.h>

@class HMDDevice, HMFPairingIdentity, HMFSoftwareVersion, HMFWiFiNetworkInfo, NSData, NSString;

@interface HMDAppleMediaAccessoryModel : HMDMediaAccessoryModel
{
}

+ (id)properties;

// Remaining properties
@property(retain, nonatomic) NSString *appleMediaAccessoryChangeTag; // @dynamic appleMediaAccessoryChangeTag;
@property(retain, nonatomic) HMDDevice *device; // @dynamic device;
@property(retain, nonatomic) NSString *deviceUUID; // @dynamic deviceUUID;
@property(retain, nonatomic) NSData *loggedInAccount; // @dynamic loggedInAccount;
@property(retain, nonatomic) HMFPairingIdentity *pairingIdentity; // @dynamic pairingIdentity;
@property(retain, nonatomic) HMFSoftwareVersion *softwareVersion; // @dynamic softwareVersion;
@property(retain, nonatomic) NSData *symptoms; // @dynamic symptoms;
@property(retain, nonatomic) HMFWiFiNetworkInfo *wifiNetworkInfo; // @dynamic wifiNetworkInfo;

@end

