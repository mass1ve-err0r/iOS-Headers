//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class _MRNowPlayingPlayerPathProtobuf, _MRPlaybackQueueRequestProtobuf;

@interface MRPlaybackQueueRequestMessage : MRProtocolMessage
{
}

- (unsigned long long)type;
@property(readonly, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property(readonly, nonatomic) _MRPlaybackQueueRequestProtobuf *request;
- (id)initWithRequest:(id)arg1 forPlayerPath:(id)arg2;

@end

