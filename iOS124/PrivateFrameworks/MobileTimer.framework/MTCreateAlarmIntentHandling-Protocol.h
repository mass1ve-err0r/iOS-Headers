//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileTimer/NSObject-Protocol.h>

@class MTCreateAlarmIntent;

@protocol MTCreateAlarmIntentHandling <NSObject>
- (void)handleMTCreateAlarm:(MTCreateAlarmIntent *)arg1 completion:(void (^)(MTCreateAlarmIntentResponse *))arg2;

@optional
- (void)confirmMTCreateAlarm:(MTCreateAlarmIntent *)arg1 completion:(void (^)(MTCreateAlarmIntentResponse *))arg2;
@end

