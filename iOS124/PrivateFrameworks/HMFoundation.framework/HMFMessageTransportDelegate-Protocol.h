//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/NSObject-Protocol.h>

@class HMFMessage, HMFMessageTransport;

@protocol HMFMessageTransportDelegate <NSObject>
- (void)messageTransport:(HMFMessageTransport *)arg1 didReceiveMessage:(HMFMessage *)arg2;
@end

