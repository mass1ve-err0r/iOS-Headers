//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserActivity/NSObject-Protocol.h>

@class NSInputStream, NSOutputStream, SFCompanionAdvertiser;

@protocol SFCompanionAdvertiserDelegate <NSObject>

@optional
- (void)advertiser:(SFCompanionAdvertiser *)arg1 didReceiveInputStream:(NSInputStream *)arg2 outputStream:(NSOutputStream *)arg3;
@end

