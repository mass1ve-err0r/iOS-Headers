//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsServer/NSObject-Protocol.h>

@class NSString, UNNotificationResponse;

@protocol UNUserNotificationCenterDelegateServiceProtocol <NSObject>
- (void)didReceiveNotificationResponse:(UNNotificationResponse *)arg1 forBundleIdentifier:(NSString *)arg2 withCompletionHandler:(void (^)(_Bool))arg3;
@end

