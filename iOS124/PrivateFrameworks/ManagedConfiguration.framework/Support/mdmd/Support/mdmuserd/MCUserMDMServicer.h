//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MCUserMDMXPCProtocol-Protocol.h"

@class NSString, NSXPCConnection;

@interface MCUserMDMServicer : NSObject <MCUserMDMXPCProtocol>
{
    NSXPCConnection *_xpcConnection;
}

@property(nonatomic) __weak NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void).cxx_destruct;
- (void)getAssertionDescriptionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)processUserRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)userPushTokenWithCompletion:(CDUnknownBlockType)arg1;
- (void)simulatePushWithCompletion:(CDUnknownBlockType)arg1;
- (void)scheduleTokenUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (id)lacksEntitlementError:(id)arg1;
- (_Bool)remoteProcessHasEntitlement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

