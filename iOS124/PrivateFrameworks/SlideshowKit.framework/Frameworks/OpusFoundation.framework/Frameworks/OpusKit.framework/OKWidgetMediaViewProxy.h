//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/OKWidgetView.h>

#import <OpusKit/OKVideoControllerDelegate-Protocol.h>
#import <OpusKit/OKViewControllerAudioSupport-Protocol.h>
#import <OpusKit/OKWidgetEditable-Protocol.h>
#import <OpusKit/OKWidgetMediaViewProxyExports-Protocol.h>
#import <OpusKit/UIGestureRecognizerDelegate-Protocol.h>

@class AVAsset, NSString, NSURL, OFUIButton, OFUIView, OKAudioDucker, OKVideoPlayerController, OKWidgetMediaVideoPlayerView, UIImageView;

@interface OKWidgetMediaViewProxy : OKWidgetView <OKViewControllerAudioSupport, OKVideoControllerDelegate, OKWidgetEditable, OKWidgetMediaViewProxyExports, UIGestureRecognizerDelegate>
{
    OFUIButton *_videoPlayButton;
    UIImageView *_thumbnailView;
    struct UIEdgeInsets _mediaEdgeInsets;
    NSURL *_videoURL;
    OKWidgetMediaVideoPlayerView *_videoPlayerView;
    OKVideoPlayerController *_videoPlayerController;
    AVAsset *_videoAsset;
    _Bool _disablePlayButton;
    float _rate;
    double _seekToTime;
    NSString *_didFinishPlayingActionScript;
    OKAudioDucker *_audioDucker;
    _Bool _isVideoAssetLoaded;
    _Bool _autoplay;
    _Bool _loop;
    _Bool _didPlayInteractively;
    _Bool _shouldPlayVideoWhenAvailable;
    _Bool _readyForDisplayAndPlay;
    float _requiredDuckLevel;
    float _volume;
    NSString *_audioTrackID;
    struct CGPoint _offset;
    struct CGPoint _originalOffsetWhilePanning;
    double _scale;
    _Bool _editable;
    _Bool _isEditingPanning;
    _Bool _shouldFitRegionOfInterest;
    _Bool _needsReloadThumbnail;
    OFUIView *_faceRect;
    double _reloadThumbnailContentProgress;
}

+ (void)setupJavascriptContext:(id)arg1;
+ (_Bool)shouldDrawRegionOfInterest;
+ (id)supportedSettings;
@property(nonatomic) _Bool shouldPlayVideoWhenAvailable; // @synthesize shouldPlayVideoWhenAvailable=_shouldPlayVideoWhenAvailable;
- (void)videoPlayerController:(id)arg1 bufferingStateDidChange:(unsigned long long)arg2;
- (void)hideThumbnailAndPlayVideo;
- (void)videoPlayerController:(id)arg1 didStartPlayingItem:(id)arg2;
- (void)videoPlayerController:(id)arg1 didFinishPlayingItem:(id)arg2;
- (void)videoBecomesReady;
- (void)videoPlayerController:(id)arg1 didFailToPlayItem:(id)arg2;
- (void)showVideoActivityIndicator:(_Bool)arg1;
- (void)networkStatusDidChange:(long long)arg1;
- (double)_localReadyProgress;
- (_Bool)supportsReadiness;
- (void)setPlaybackAudioVolume:(double)arg1;
- (double)requiredDuckLevel;
- (void)endDucking;
- (void)beginFadingWithDuration:(double)arg1;
- (void)beginDuckingToLevel:(double)arg1 fadeDuration:(double)arg2;
- (_Bool)endAllEditing:(_Bool)arg1;
- (void)updateOffset;
- (id)_contentViewToFocus;
- (void)_stopAudioDucking;
- (void)_beginAudioDucking;
- (void)_hideVideoButton;
- (void)_showVideoButtonWithDelay;
- (void)_showVideoButton;
- (void)play;
- (double)remainingPlayDuration;
- (void)seekToTime:(double)arg1;
- (double)currentTime;
- (double)duration;
- (void)pauseVideo:(id)arg1;
- (void)playVideo:(id)arg1;
- (void)setVideoAsset:(id)arg1;
- (void)setVideoURL:(id)arg1;
- (void)_cleanupVideo;
- (void)_setupVideo;
- (void)_setupVideoPlayButton;
- (void)resetVideo;
- (void)instantResume;
- (void)instantPause;
- (void)prepareForRefresh;
- (void)prepareForReload;
- (_Bool)prepareForUnload:(_Bool)arg1;
- (_Bool)prepareForWarmup:(_Bool)arg1;
- (_Bool)prepareForDisplay:(_Bool)arg1;
- (float)contentAspectRatio;
- (void)setAntialiasing:(_Bool)arg1;
- (void)_unloadThumbnailContent;
- (void)_reloadThumbnailContent;
- (void)_reloadThumbnailContent:(_Bool)arg1 loadVideo:(_Bool)arg2;
- (void)_cancelThumbnailOperations;
- (void)setSettingDidFinishPlayingActionScript:(id)arg1;
- (void)setSettingAudioVolume:(float)arg1;
- (void)setSettingAudioRequiredDuckLevel:(float)arg1;
- (id)layoutSettingsKeys;
- (void)setSettingDisablePlayButton:(_Bool)arg1;
- (void)setSettingEditable:(_Bool)arg1;
- (_Bool)settingEditable;
- (void)setSettingScale:(double)arg1;
- (double)settingScale;
- (_Bool)settingShouldFitRegionOfInterest;
- (void)setSettingShouldFitRegionOfInterest:(_Bool)arg1;
- (void)calculateOffsetForRegionOfInterest;
- (void)drawRegionOfInterestContainerBounds;
- (void)setSettingOffset:(struct CGPoint)arg1;
- (struct CGPoint)settingOffset;
- (void)_setVideoContentMode:(long long)arg1;
- (void)setSettingContentMode:(long long)arg1;
- (long long)settingContentMode;
- (void)setSettingSeekToTime:(double)arg1;
- (double)settingSeekToTime;
- (void)setSettingLoop:(_Bool)arg1;
- (_Bool)settingLoop;
- (void)setSettingAutoplay:(_Bool)arg1;
- (_Bool)settingsAutoplay;
- (void)setSettingMediaEdgeInsets:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)settingMediaEdgeInsets;
- (void)setSettingUrl:(id)arg1;
- (id)settingUrl;
- (id)valueForUndefinedKey:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)settingObjectForKey:(id)arg1;
- (void)layoutSubviews;
- (struct CGRect)thumbnailRect;
- (_Bool)canPerformAction:(id)arg1;
- (void)dealloc;
- (id)initWithWidget:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

