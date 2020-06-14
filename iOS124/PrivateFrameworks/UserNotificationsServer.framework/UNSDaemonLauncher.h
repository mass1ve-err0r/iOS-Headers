//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsServer/UNUserNotificationCenterDelegateServiceProtocol-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface UNSDaemonLauncher : NSObject <UNUserNotificationCenterDelegateServiceProtocol>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    NSMutableDictionary *_connectionByBundleIdentifier;
}

- (void).cxx_destruct;
- (void)_queue_invalidatedConnectionForBundleIdentifier:(id)arg1;
- (void)_queue_interruptedConnectionForBundleIdentifier:(id)arg1;
- (id)_queue_ensureConnectionForBundleIdentifier:(id)arg1;
- (void)didReceiveNotificationResponse:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

