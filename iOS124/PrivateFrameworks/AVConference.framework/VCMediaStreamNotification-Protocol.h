//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/NSObject-Protocol.h>

@class VCMasterKeyIndex, VCMediaStream;

@protocol VCMediaStreamNotification <NSObject>
- (void)mediaStream:(VCMediaStream *)arg1 didReceiveNewMasterKeyIndex:(VCMasterKeyIndex *)arg2;
- (void)didReceiveRTCPPackets:(struct _RTCPPacketList *)arg1;
@end

