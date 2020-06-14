//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface BKSWorkspace : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_listenerConnection;
    NSMutableSet *_hostConnections;
    NSMutableSet *_clientConnections;
}

+ (id)sharedConnection;
+ (id)sharedQueue;
+ (id)sharedInstance;
- (void)_queue_handleConnectToHostMessage:(id)arg1;
- (void)_queue_handleServerMessage:(id)arg1;
- (void)_queue_handleClientMessage:(id)arg1;
- (id)init;

@end

