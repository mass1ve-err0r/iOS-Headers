//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBackingStoreModelBackedObjectProtocol-Protocol.h>
#import <HomeKitDaemon/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDDeviceCapabilitiesModel, NSString, NSUUID;

@interface HMDDeviceCapabilities : HMFObject <HMDBackingStoreObjectProtocol, HMDBackingStoreModelBackedObjectProtocol, NSCopying, NSSecureCoding>
{
    HMDDeviceCapabilitiesModel *_objectModel;
}

+ (id)deviceCapabilitiesModelIdentifierWithParentIdentifier:(id)arg1;
+ (_Bool)supportsSecureCoding;
+ (id)deviceCapabilities;
+ (_Bool)supportsSyncingToSharedUsers;
+ (_Bool)supportsAddingAccessory;
+ (_Bool)supportsReceivingRemoteCameraStream;
+ (_Bool)supportsDismissUserNotificationAndDialog;
+ (_Bool)supportsUserNotifications;
+ (_Bool)supportsCameraSnapshotRequestViaRelay;
+ (_Bool)supportsTargetControllerAutoConfigure;
+ (_Bool)supportsRemoteAccess;
+ (_Bool)isAppleMediaAccessory;
+ (_Bool)supportsCustomerReset;
+ (_Bool)supportsDeviceLock;
+ (_Bool)supportsSymptomsHandler;
+ (_Bool)supportsIntentDonation;
+ (_Bool)supportsHomeApp;
+ (_Bool)supportsLocalization;
@property(retain, nonatomic) HMDDeviceCapabilitiesModel *objectModel; // @synthesize objectModel=_objectModel;
- (void).cxx_destruct;
- (id)modelBackedObjects;
- (id)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)modelCopyWithChangeType:(unsigned long long)arg1 uuid:(id)arg2 parentUUID:(id)arg3;
@property(retain, nonatomic) NSUUID *modelParentIdentifier;
@property(readonly, nonatomic) NSUUID *modelIdentifier;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) _Bool supportsTargetControl;
@property(readonly, nonatomic) _Bool supportsHomeInvitation;
@property(readonly, nonatomic, getter=isRemoteGatewayCapable) _Bool remoteGatewayCapable;
@property(readonly, nonatomic, getter=isResidentCapable) _Bool residentCapable;
@property(readonly, nonatomic) _Bool supportsAssistantAccessControl;
@property(readonly, nonatomic) _Bool supportsWholeHouseAudio;
@property(readonly, nonatomic) _Bool supportsCloudDataSync;
@property(readonly, nonatomic) _Bool supportsStandaloneMode;
@property(readonly, nonatomic) _Bool supportsKeyTransferServer;
@property(readonly, nonatomic) _Bool supportsKeyTransferClient;
@property(readonly, nonatomic) _Bool supportsDeviceSetup;
@property(readonly, nonatomic) _Bool supportsKeychainSync;
- (id)attributeDescriptions;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithObjectModel:(id)arg1;
- (id)initWithProductInfo:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

