//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUI/UNNotificationContentExtension-Protocol.h>

@class UIView, UNNotification;
@protocol _UNNotificationContentExtensionLegacyDelegate;

@protocol _UNNotificationContentExtensionLegacy <UNNotificationContentExtension>
@property(nonatomic) __weak id <_UNNotificationContentExtensionLegacyDelegate> legacyDelegate;

@optional
- (UIView *)audioAccessoryViewForNotification:(UNNotification *)arg1;
@end

