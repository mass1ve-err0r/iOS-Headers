//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConversationKit/_TtC15ConversationKit22ConversationController.h>

#import <ConversationKit/AVCRemoteVideoClientDelegate-Protocol.h>

@interface _TtC15ConversationKit22ConversationController (ConversationKit1) <AVCRemoteVideoClientDelegate>
- (void)remoteVideoClient:(id)arg1 remoteVideoAttributesDidChange:(id)arg2;
- (void)remoteVideoClient:(id)arg1 videoDidDegrade:(_Bool)arg2;
- (void)remoteVideoClient:(id)arg1 remoteVideoDidPause:(_Bool)arg2;
- (void)remoteVideoClient:(id)arg1 videoDidSuspend:(_Bool)arg2;
- (void)remoteVideoClientDidReceiveFirstFrame:(id)arg1;
@end

