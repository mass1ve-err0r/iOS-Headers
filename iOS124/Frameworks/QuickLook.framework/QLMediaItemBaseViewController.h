//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/QLScrollableContentItemViewController.h>

#import <QuickLook/QLToolbarButtonAction-Protocol.h>

@class AVAsset, AVPlayer, AVPlayerLayer, NSError, NSObject, NSString, UIView;

__attribute__((visibility("hidden")))
@interface QLMediaItemBaseViewController : QLScrollableContentItemViewController <QLToolbarButtonAction>
{
    NSObject *_playbackTimeObserver;
    _Bool _playing;
    _Bool _mediaWasPausedOnResignActive;
    CDUnknownBlockType _previewItemLoadingBlock;
    struct CGSize _imageSize;
    _Bool _playable;
    _Bool _visualTracksEnabled;
    _Bool _isFullScreen;
    _Bool _isVisible;
    AVPlayer *_player;
    UIView *_playerView;
    AVPlayerLayer *_playerLayer;
    NSError *_error;
    double _elapsedTime;
    double _remainingTime;
    long long _playingStatus;
    double _mediaVolume;
    AVAsset *_mediaAsset;
    double _mediaDuration;
}

+ (_Bool)shouldBeRemoteForContentType:(id)arg1;
+ (id)supportedContentTypes;
+ (Class)transformerClass;
@property(nonatomic) double mediaDuration; // @synthesize mediaDuration=_mediaDuration;
@property(readonly, nonatomic) _Bool isVisible; // @synthesize isVisible=_isVisible;
@property(readonly, nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(readonly, nonatomic) AVAsset *mediaAsset; // @synthesize mediaAsset=_mediaAsset;
@property(readonly, nonatomic) double mediaVolume; // @synthesize mediaVolume=_mediaVolume;
@property(readonly, nonatomic) _Bool visualTracksEnabled; // @synthesize visualTracksEnabled=_visualTracksEnabled;
@property(readonly, nonatomic) _Bool playable; // @synthesize playable=_playable;
@property(readonly, nonatomic) long long playingStatus; // @synthesize playingStatus=_playingStatus;
@property(nonatomic) double remainingTime; // @synthesize remainingTime=_remainingTime;
@property(nonatomic) double elapsedTime; // @synthesize elapsedTime=_elapsedTime;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(readonly, nonatomic) UIView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)buttonPressedWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)registeredKeyCommands;
- (void)setupPlayerWithMediaAsset:(id)arg1;
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;
- (void)didChangePlayingStatus;
- (void)didReachEndOfMedia;
- (void)observePlayingTime:(CDStruct_198678f7)arg1;
- (void)hostApplicationDidBecomeActive;
- (void)hostApplicationDidEnterBackground:(id)arg1;
- (void)setMediaVolume:(double)arg1;
@property(nonatomic) double currentPlaybackHeadPosition;
- (void)resetToBeginning;
- (void)togglePlayback;
- (void)stop;
- (void)pause;
- (void)play;
@property(readonly, nonatomic) _Bool endOfMediaReached;
- (struct CGSize)imageSize;
- (id)toolbarButtonsForTraitCollection:(id)arg1;
- (void)_updatePlayingStatus;
- (void)_updateExternalPlayback;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)previewBecameFullScreen:(_Bool)arg1 animated:(_Bool)arg2;
- (void)previewDidDisappear:(_Bool)arg1;
- (void)previewDidAppear:(_Bool)arg1;
- (void)previewIsAppearingWithProgress:(double)arg1;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

