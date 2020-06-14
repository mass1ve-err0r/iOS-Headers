//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRCXPCClient.h>

#import <CloudDocsDaemon/BRTokenProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BRCXPCTokenClient : BRCXPCClient <BRTokenProtocol>
{
}

- (void)getPrimaryiCloudAccountStatus:(CDUnknownBlockType)arg1;
- (void)currentAccountCopyTokenWithBundleID:(id)arg1 version:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)prepareFileProvidersWithReply:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

