//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class _MRSetStateMessageProtobuf;

@interface MRSetStateMessage : MRProtocolMessage
{
}

- (unsigned long long)type;
@property(readonly, nonatomic) _MRSetStateMessageProtobuf *state;
- (id)initWithNowPlayingState:(id)arg1;

@end

