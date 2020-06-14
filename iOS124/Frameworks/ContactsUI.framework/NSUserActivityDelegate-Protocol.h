//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/NSObject-Protocol.h>

@class NSInputStream, NSOutputStream, NSUserActivity;

@protocol NSUserActivityDelegate <NSObject>

@optional
- (void)userActivity:(NSUserActivity *)arg1 didReceiveInputStream:(NSInputStream *)arg2 outputStream:(NSOutputStream *)arg3;
- (void)userActivityWasContinued:(NSUserActivity *)arg1;
- (void)userActivityWillSave:(NSUserActivity *)arg1;
@end

