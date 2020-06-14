//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPResponse.h>

@class MPCMediaRemoteController, MPCPlayerPath, MPCPlayerResponseTracklist, UIView;
@protocol MPCPlayerResponseBuilder, MPCVideoView;

@interface MPCPlayerResponse : MPResponse
{
    MPCPlayerResponseTracklist *_tracklist;
    long long _state;
    MPCMediaRemoteController *_controller;
    MPCPlayerPath *_playerPath;
    UIView<MPCVideoView> *_videoView;
}

+ (id)builderProtocol;
@property(retain, nonatomic) UIView<MPCVideoView> *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) MPCPlayerPath *playerPath; // @synthesize playerPath=_playerPath;
@property(readonly, nonatomic) MPCMediaRemoteController *controller; // @synthesize controller=_controller;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) MPCPlayerResponseTracklist *tracklist; // @synthesize tracklist=_tracklist;
- (void).cxx_destruct;
- (id)_commandRequestForMediaRemoteCommand:(unsigned int)arg1;
- (id)stop;
- (id)play;
- (id)pause;
- (id)description;
- (id)initWithRequest:(id)arg1 middleware:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) id <MPCPlayerResponseBuilder> builder; // @dynamic builder;

@end

