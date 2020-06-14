//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDP/CDPAuthProviderInternal-Protocol.h>

@class NSString;
@protocol CDPAuthProvider;

@interface CDPAuthProviderProxy : NSObject <CDPAuthProviderInternal>
{
    id <CDPAuthProvider> _authProvider;
}

+ (id)proxyWithAuthProvider:(id)arg1;
- (void).cxx_destruct;
- (void)cdpContext:(id)arg1 verifyMasterKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cdpContext:(id)arg1 performSilentRecoveryTokenRenewal:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

