//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/NSObject-Protocol.h>

@class AVOutputContext, AVOutputContextCommunicationChannel, NSData;

@protocol AVOutputContextCommunicationChannelDelegate <NSObject>

@optional
- (void)outputContext:(AVOutputContext *)arg1 didCloseCommunicationChannel:(AVOutputContextCommunicationChannel *)arg2;
- (void)outputContext:(AVOutputContext *)arg1 didReceiveData:(NSData *)arg2 fromCommunicationChannel:(AVOutputContextCommunicationChannel *)arg3;
- (void)outputContextOutgoingCommunicationChannelDidBecomeAvailable:(AVOutputContext *)arg1;
@end

