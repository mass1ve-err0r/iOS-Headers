//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/NSObject-Protocol.h>

@class AVOutputDevice, NSArray, NSData, NSDictionary, NSNumber, NSString;

@protocol AVOutputDeviceImpl <NSObject>
@property(readonly, nonatomic) _Bool presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
@property(readonly, nonatomic) _Bool canFetchMediaDataFromSender;
@property(readonly, nonatomic) _Bool canPlayEncryptedProgressiveDownloadAssets;
@property(readonly, nonatomic) _Bool canRelayCommunicationChannel;
@property(readonly, nonatomic) _Bool canCommunicateWithAllLogicalDeviceMembers;
@property(readonly, nonatomic) _Bool isLogicalDeviceLeader;
@property(readonly, nonatomic) NSString *logicalDeviceID;
@property(readonly, nonatomic) _Bool groupContainsGroupLeader;
@property(readonly, nonatomic) _Bool participatesInGroupPlayback;
@property(readonly, nonatomic) _Bool isGroupLeader;
@property(readonly, nonatomic) _Bool canBeGroupLeader;
@property(readonly, copy, nonatomic) NSString *groupID;
@property(readonly, nonatomic) _Bool canBeGrouped;
@property(readonly) _Bool canSetVolume;
@property(readonly) float volume;
@property(readonly, nonatomic) _Bool supportsBufferedAirPlay;
@property(readonly, nonatomic) _Bool canAccessiCloudMusicLibrary;
@property(readonly, nonatomic) _Bool canAccessAppleMusic;
@property(readonly, nonatomic) _Bool canAccessRemoteAssets;
@property(readonly, nonatomic) _Bool onlyAllowsConnectionsFromPeersInHomeGroup;
@property(readonly, nonatomic) _Bool automaticallyAllowsConnectionsFromPeersInHomeGroup;
@property(readonly, nonatomic) _Bool requiresAuthorization;
@property(readonly, nonatomic) unsigned long long deviceFeatures;
@property(readonly, copy, nonatomic) NSArray *connectedPairedDevices;
@property(readonly, nonatomic, getter=isInUseByPairedDevice) _Bool inUseByPairedDevice;
@property(readonly, nonatomic) NSDictionary *airPlayProperties;
@property(readonly, nonatomic) NSNumber *rightBatteryLevel;
@property(readonly, nonatomic) NSNumber *leftBatteryLevel;
@property(readonly, nonatomic) NSNumber *caseBatteryLevel;
@property(readonly, nonatomic) NSNumber *batteryLevel;
@property(readonly, copy, nonatomic) NSData *identifyingMACAddress;
@property(readonly, nonatomic) NSString *firmwareVersion;
@property(readonly, nonatomic) NSString *serialNumber;
@property(readonly, copy, nonatomic) NSString *modelID;
@property(readonly, nonatomic) NSString *manufacturer;
@property(readonly, nonatomic) long long deviceSubType;
@property(readonly, nonatomic) long long deviceType;
@property(readonly, copy, nonatomic) NSString *ID;
@property(readonly, copy, nonatomic) NSString *name;
@property __weak AVOutputDevice *parentOutputDevice;
- (void)configureUsingBlock:(void (^)(id <AVOutputDeviceConfigurationModification>))arg1 options:(NSDictionary *)arg2 completionHandler:(void (^)(int, id <AVOutputDeviceConfigurationRetrieval>, NSString *, NSError *))arg3;
- (void)setVolume:(float)arg1;
- (void)setSecondDisplayEnabled:(_Bool)arg1;
@end

