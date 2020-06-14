//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDRemoteLoginBase.h>

#import <HomeKitDaemon/HMDRemoteLoginReceiverAuthenticationDelegate-Protocol.h>

@class HMDRemoteLoginReceiverSession, NSString;

@interface HMDRemoteLoginReceiver : HMDRemoteLoginBase <HMDRemoteLoginReceiverAuthenticationDelegate>
{
    HMDRemoteLoginReceiverSession *_loginSession;
}

+ (id)logCategory;
@property(retain, nonatomic) HMDRemoteLoginReceiverSession *loginSession; // @synthesize loginSession=_loginSession;
- (void).cxx_destruct;
- (void)didCompleteAuthentication:(id)arg1 response:(id)arg2;
- (void)_callCompletion:(id)arg1;
- (void)_auditLoggedInAccountFor:(id)arg1;
- (void)auditLoggedInAccountFor:(id)arg1;
- (void)auditLoggedInAccount;
- (void)_handleSignoutRequest:(id)arg1;
- (void)_authenticate:(id)arg1 message:(id)arg2;
- (void)_handleProxyAuthenticationRequest:(id)arg1;
- (void)_handleProxyDeviceRequest:(id)arg1;
- (void)_handleCompanionAuthenticationRequest:(id)arg1;
- (void)registerForMessages;
- (void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

