//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccountNotification/NSObject-Protocol.h>

@class ANAccountNotification;

@protocol ANClientCallbackProtocol <NSObject>
- (void)notificationWasCleared:(ANAccountNotification *)arg1;
- (void)notificationWasDismissed:(ANAccountNotification *)arg1;
- (void)notificationWasActivated:(ANAccountNotification *)arg1;
@end

