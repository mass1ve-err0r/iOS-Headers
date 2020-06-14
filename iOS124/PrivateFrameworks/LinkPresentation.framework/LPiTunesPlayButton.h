//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/LPPlayButton.h>

#import <LinkPresentation/MPUNowPlayingDelegate-Protocol.h>

@class LPStatisticsTimingToken, LPiTunesPlaybackInformation, MPUNowPlayingController, NSString;

__attribute__((visibility("hidden")))
@interface LPiTunesPlayButton : LPPlayButton <MPUNowPlayingDelegate>
{
    LPiTunesPlaybackInformation *_playbackInformation;
    MPUNowPlayingController *_nowPlayingController;
    LPStatisticsTimingToken *_playbackStartTimingToken;
}

- (void).cxx_destruct;
- (void)nowPlayingController:(id)arg1 nowPlayingInfoDidChange:(id)arg2;
- (void)nowPlayingController:(id)arg1 playbackStateDidChange:(_Bool)arg2;
- (void)nowPlayingController:(id)arg1 elapsedTimeDidChange:(double)arg2;
- (void)updateProgressForCurrentlyActiveTrackAnimated:(_Bool)arg1;
- (_Bool)matchesNowPlayingItem;
- (void)buttonPressed:(id)arg1;
- (void)startPlaying;
- (id)mediaPlaybackApplicationID;
- (struct _MRSystemAppPlaybackQueue *)createPlaybackQueue;
- (void)willMoveToWindow:(id)arg1;
- (void)didMoveToWindow;
- (void)stopListeningForPlayback;
- (void)startListeningForPlayback;
- (void)updatePlayState;
- (id)initWithPlaybackInformation:(id)arg1 style:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

