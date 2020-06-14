//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDaemonConnection-Protocol.h>

@class HMDApplicationRegistry, HMDProcessInfo, HMDXPCRequestTracker, HMFMessageDispatcher, NSDictionary, NSObject, NSSet, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface HMDConnectionProxy : HMFObject <HMDaemonConnection>
{
    _Bool _entitledForAPIAccess;
    _Bool _entitledForBackgroundMode;
    _Bool _activated;
    NSXPCConnection *_xpcConnection;
    HMDProcessInfo *_processInfo;
    unsigned long long _entitlements;
    NSString *_clientName;
    HMFMessageDispatcher *_recvDispatcher;
    HMDXPCRequestTracker *_requestTracker;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSDictionary *_privateAccessEntitlement;
    HMDApplicationRegistry *_appRegistry;
}

+ (unsigned long long)entitlementsForConnection:(id)arg1;
@property(nonatomic) __weak HMDApplicationRegistry *appRegistry; // @synthesize appRegistry=_appRegistry;
@property(retain, nonatomic) NSDictionary *privateAccessEntitlement; // @synthesize privateAccessEntitlement=_privateAccessEntitlement;
@property(nonatomic) _Bool activated; // @synthesize activated=_activated;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) HMDXPCRequestTracker *requestTracker; // @synthesize requestTracker=_requestTracker;
@property(retain, nonatomic) HMFMessageDispatcher *recvDispatcher; // @synthesize recvDispatcher=_recvDispatcher;
@property(retain, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(readonly, nonatomic, getter=isEntitledForBackgroundMode) _Bool entitledForBackgroundMode; // @synthesize entitledForBackgroundMode=_entitledForBackgroundMode;
@property(readonly, nonatomic, getter=isEntitledForAPIAccess) _Bool entitledForAPIAccess; // @synthesize entitledForAPIAccess=_entitledForAPIAccess;
@property(readonly) unsigned long long entitlements; // @synthesize entitlements=_entitlements;
@property(nonatomic) __weak HMDProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
@property(nonatomic) __weak NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void).cxx_destruct;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4;
- (void)recheckinWithName:(id)arg1;
- (void)checkinWithName:(id)arg1 handleMessageWithName:(id)arg2 messageIdentifier:(id)arg3 messagePayload:(id)arg4 target:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;
- (void)_notifyOfNewIncomingClientMessage;
- (_Bool)shouldSendResponseForMessageIdentifier:(id)arg1;
@property(readonly, nonatomic) NSSet *activeRequests;
- (void)deactivate;
- (void)activate;
@property(readonly, nonatomic) id remoteProxy;
- (id)_extractBundleIdentifier;
- (id)extractTeamIdentifier;
@property(readonly, nonatomic) NSString *effectiveLocationBundleIdentifier;
@property(readonly, nonatomic) NSString *teamIdentifier;
@property(readonly, nonatomic) NSString *companionAppBundleIdentifier;
@property(readonly, nonatomic) NSString *applicationBundleIdentifier;
@property(readonly, nonatomic) int clientPid;
@property(readonly, nonatomic) NSString *name;
- (id)_displayName;
@property(readonly, copy) NSString *description;
- (void)dealloc;
@property(readonly, nonatomic, getter=isAuthorizedForLocationAccess) _Bool authorizedForLocationAccess;
@property(readonly, getter=isEntitledForSPIAccess) _Bool entitledForSPIAccess;
@property(readonly, nonatomic, getter=isAuthorizedForMicrophoneAccess) _Bool authorizedForMicrophoneAccess;
@property(readonly, nonatomic, getter=isAuthorizedForHomeDataAccess) _Bool authorizedForHomeDataAccess;
- (id)initWithConnection:(id)arg1 queue:(id)arg2 activeMessageTracker:(id)arg3 recvDispatcher:(id)arg4 appRegistry:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

