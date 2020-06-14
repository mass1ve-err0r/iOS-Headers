//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/NSObject-Protocol.h>

@class HAPBTLEControlOutputStream, HAPBTLEControlPacket, NSError;

@protocol HAPBTLEControlOutputStreamDelegate <NSObject>
- (void)controlOutputStreamDidComplete:(HAPBTLEControlOutputStream *)arg1;
- (void)controlOutputStream:(HAPBTLEControlOutputStream *)arg1 didCloseWithError:(NSError *)arg2;
- (void)controlOutputStreamDidOpen:(HAPBTLEControlOutputStream *)arg1;
- (void)controlOutputStream:(HAPBTLEControlOutputStream *)arg1 didReceiveRequestToSendControlPacket:(HAPBTLEControlPacket *)arg2 completionHandler:(void (^)(NSError *))arg3;
@end

