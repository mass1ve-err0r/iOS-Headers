//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSXPCConnection, NSXPCListenerEndpoint;

@interface FLDaemon : NSObject
{
    NSXPCConnection *_conn;
    NSLock *_connLock;
    NSXPCListenerEndpoint *_daemonXPCEndpoint;
}

+ (id)sharedInstance;
+ (id)daemonWithErrorHandler:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSXPCListenerEndpoint *daemonXPCEndpoint; // @synthesize daemonXPCEndpoint=_daemonXPCEndpoint;
- (void).cxx_destruct;
- (id)synchronousDaemonWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)daemonWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)invalidateConnection;
- (id)remoteObjectInterface;
- (id)connection;
- (id)init;

@end

