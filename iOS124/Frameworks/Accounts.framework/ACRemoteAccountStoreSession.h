//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Accounts/NSXPCProxyCreating-Protocol.h>

@class NSString, NSXPCConnection;

@interface ACRemoteAccountStoreSession : NSObject <NSXPCProxyCreating>
{
    NSXPCConnection *_connection;
    struct os_unfair_lock_s _connectionLock;
    _Bool _hasConfiguredRemoteAccountStore;
    _Bool _xpcConnectionHasBeenInvalidated;
    _Bool _notificationsEnabled;
    NSString *_spoofedBundleID;
}

@property(nonatomic) _Bool notificationsEnabled; // @synthesize notificationsEnabled=_notificationsEnabled;
@property(copy, nonatomic) NSString *spoofedBundleID; // @synthesize spoofedBundleID=_spoofedBundleID;
- (void).cxx_destruct;
- (void)disconnect;
- (void)connect;
- (void)_configureRemoteAccountStoreIfNecessary;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxy;
- (void)_setConnectionInvalidated;
- (void)_setConnectionInterrupted;
- (id)_connection;
- (void)_configureConnection;
- (id)initWithXPCConnection:(id)arg1;

@end

