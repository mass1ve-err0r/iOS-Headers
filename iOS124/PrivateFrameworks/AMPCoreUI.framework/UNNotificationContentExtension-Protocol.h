//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AMPCoreUI/NSObject-Protocol.h>

@class UIColor, UNNotification, UNNotificationResponse;

@protocol UNNotificationContentExtension <NSObject>
- (void)didReceiveNotification:(UNNotification *)arg1;

@optional
@property(readonly, copy, nonatomic) UIColor *mediaPlayPauseButtonTintColor;
@property(readonly, nonatomic) struct CGRect mediaPlayPauseButtonFrame;
@property(readonly, nonatomic) unsigned long long mediaPlayPauseButtonType;
- (void)mediaPause;
- (void)mediaPlay;
- (void)didReceiveNotificationResponse:(UNNotificationResponse *)arg1 completionHandler:(void (^)(unsigned long long))arg2;
@end
