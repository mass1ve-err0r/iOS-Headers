//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVOutputDeviceAuthorizedPeerInternal, NSData, NSString;

@interface AVOutputDeviceAuthorizedPeer : NSObject
{
    AVOutputDeviceAuthorizedPeerInternal *_ivars;
}

@property(readonly, nonatomic) _Bool hasAdministratorPrivileges;
@property(readonly, nonatomic) NSData *publicKey;
@property(readonly, nonatomic) NSString *peerID;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithID:(id)arg1 publicKey:(id)arg2 hasAdministratorPrivileges:(_Bool)arg3;
- (id)init;

@end

