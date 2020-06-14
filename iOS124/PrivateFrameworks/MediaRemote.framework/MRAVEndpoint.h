//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MRAVOutputDevice, MRExternalDevice, NSArray, NSDictionary, NSMutableArray, NSOperationQueue, NSString, NSTimer, _MRAVEndpointDescriptorProtobuf;

__attribute__((visibility("hidden")))
@interface MRAVEndpoint : NSObject
{
    NSMutableArray *_pendingConnectionHandlers;
    NSOperationQueue *_connectionHandlerOperationQueue;
    _Bool _registeredForConnectionStateDidChangeNotifications;
    NSTimer *_connectionTimeoutTimer;
    _Bool _outputDevicesDidChangeNotificationScheduled;
    _Bool _proxyGroupPlayer;
    long long _connectionType;
    NSString *_localizedName;
    NSString *_uniqueIdentifier;
}

+ (void)_modifyOutputDevices:(id)arg1 inGroup:(id)arg2 queue:(id)arg3 modifyDevices:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)_notificationSerialQueue;
+ (id)sharedLocalEndpointForRoutingContextWithUID:(id)arg1;
@property(retain, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(retain, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(nonatomic, getter=isProxyGroupPlayer) _Bool proxyGroupPlayer; // @synthesize proxyGroupPlayer=_proxyGroupPlayer;
@property(readonly, nonatomic) long long connectionType; // @synthesize connectionType=_connectionType;
- (void).cxx_destruct;
- (void)_callAllCompletionHandlersWithError:(id)arg1;
- (void)_externalDeviceConnectionStateDidChangeNotification:(id)arg1;
- (void)_requestSharedAudioPresentationOutputContextModificationWithAddingDevices:(id)arg1 removingDevices:(id)arg2 settingDevices:(id)arg3 replyQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)effectivelyEqual:(id)arg1;
- (id)outputDeviceUIDsMatchingPredicate:(CDUnknownBlockType)arg1;
- (id)outputDevicesMatchingPredicate:(CDUnknownBlockType)arg1;
- (void)removeOutputDeviceFromParentGroup:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)scheduleEndpointOutputDevicesDidChangeNotification;
- (void)volumeControlCapabilitiesForOutputDevice:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setOutputDeviceVolume:(float)arg1 outputDevice:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setOutputDevices:(id)arg1 withReplyQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeOutputDevices:(id)arg1 withReplyQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addOutputDevices:(id)arg1 withReplyQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)containsOutputDevice:(id)arg1;
- (void)connectToExternalDeviceWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isLocalEndpoint) _Bool localEndpoint;
@property(readonly, nonatomic) NSDictionary *jsonEncodableDictionaryRepresentation;
@property(readonly, nonatomic) NSString *shortDescription;
- (_Bool)isVolumeControlAvailable;
@property(readonly, nonatomic) _Bool canModifyGroupMembership;
@property(readonly, nonatomic) NSString *debugName;
@property(readonly, nonatomic) MRAVOutputDevice *designatedGroupLeader;
@property(readonly, nonatomic) MRExternalDevice *externalDevice;
@property(readonly, nonatomic) unsigned long long logicalOutputDeviceCount;
@property(readonly, nonatomic) NSArray *outputDeviceUIDs;
@property(readonly, nonatomic) NSArray *outputDevices;
@property(readonly, nonatomic) _MRAVEndpointDescriptorProtobuf *descriptor;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)_init;

@end

