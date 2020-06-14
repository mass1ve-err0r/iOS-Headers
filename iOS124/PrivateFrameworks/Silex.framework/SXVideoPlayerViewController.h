//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Silex/AVPlayerViewControllerDelegatePrivate-Protocol.h>
#import <Silex/AVPlayerViewControllerDelegate_WebKitOnly-Protocol.h>
#import <Silex/SXAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate-Protocol.h>
#import <Silex/SXVideoAdViewControllerProviding-Protocol.h>
#import <Silex/SXVideoPlaybackObserver-Protocol.h>
#import <Silex/UIGestureRecognizerDelegate-Protocol.h>

@class AVPlayerViewController, NSString, SVAdPrivacyButton, SVKeyValueObserver, SVLearnMoreButton, SXAutomaticFullscreenVideoPlaybackBehaviorManager, SXPlaybackCoordinator, SXVideoAdSkipButton, SXVideoPlaybackQueue, SXVideoVolumeObserver, UIActivityIndicatorView, UIGestureRecognizer;
@protocol SVVolumeReporting, SXVideoAdProviding, SXVideoPlayerViewControllerDataSource, SXVideoPlayerViewControllerDelegate;

@interface SXVideoPlayerViewController : UIViewController <SXVideoPlaybackObserver, AVPlayerViewControllerDelegate_WebKitOnly, AVPlayerViewControllerDelegatePrivate, SXAutomaticFullscreenVideoPlaybackBehaviorManagerDelegate, UIGestureRecognizerDelegate, SXVideoAdViewControllerProviding>
{
    _Bool _fullscreen;
    id <SXVideoPlayerViewControllerDelegate> _delegate;
    id <SXVideoPlayerViewControllerDataSource> _dataSource;
    unsigned long long _mode;
    unsigned long long _fullscreenBehavior;
    SXVideoPlaybackQueue *_queue;
    SXPlaybackCoordinator *_coordinator;
    id <SXVideoAdProviding> _videoAd;
    AVPlayerViewController *_playerViewController;
    SVLearnMoreButton *_learnMoreButton;
    SXVideoAdSkipButton *_skipButton;
    SVAdPrivacyButton *_adPrivacyButton;
    UIActivityIndicatorView *_activityIndicatorView;
    SVKeyValueObserver *_videoBoundsObserver;
    SXAutomaticFullscreenVideoPlaybackBehaviorManager *_fullscreenBehaviorManager;
    id <SVVolumeReporting> _volumeReporter;
    SXVideoVolumeObserver *_volumeObserver;
    UIGestureRecognizer *_tapGesture;
}

@property(readonly, nonatomic) UIGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) SXVideoVolumeObserver *volumeObserver; // @synthesize volumeObserver=_volumeObserver;
@property(readonly, nonatomic) id <SVVolumeReporting> volumeReporter; // @synthesize volumeReporter=_volumeReporter;
@property(readonly, nonatomic) SXAutomaticFullscreenVideoPlaybackBehaviorManager *fullscreenBehaviorManager; // @synthesize fullscreenBehaviorManager=_fullscreenBehaviorManager;
@property(retain, nonatomic) SVKeyValueObserver *videoBoundsObserver; // @synthesize videoBoundsObserver=_videoBoundsObserver;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) SVAdPrivacyButton *adPrivacyButton; // @synthesize adPrivacyButton=_adPrivacyButton;
@property(retain, nonatomic) SXVideoAdSkipButton *skipButton; // @synthesize skipButton=_skipButton;
@property(retain, nonatomic) SVLearnMoreButton *learnMoreButton; // @synthesize learnMoreButton=_learnMoreButton;
@property(retain, nonatomic) AVPlayerViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
@property(retain, nonatomic) id <SXVideoAdProviding> videoAd; // @synthesize videoAd=_videoAd;
@property(retain, nonatomic) SXPlaybackCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain, nonatomic) SXVideoPlaybackQueue *queue; // @synthesize queue=_queue;
@property(nonatomic) unsigned long long fullscreenBehavior; // @synthesize fullscreenBehavior=_fullscreenBehavior;
@property(nonatomic, getter=isFullscreen) _Bool fullscreen; // @synthesize fullscreen=_fullscreen;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <SXVideoPlayerViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <SXVideoPlayerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)tapped;
@property(readonly, nonatomic) UIViewController *viewControllerForModalPresentation;
- (void)updateSkipButtonWithThreshold:(unsigned long long)arg1 time:(double)arg2;
- (_Bool)playbackAllowedForPlaybackCoordinator:(id)arg1;
- (void)startPlaybackForCoordinatorIfAllowed:(id)arg1;
- (void)finished;
- (void)transitionToCoordinator:(id)arg1;
- (void)advance;
- (void)setupQueueIfNeeded;
- (void)refreshControlsForPlaybackCoordinator:(id)arg1;
- (void)adPrivacyButtonTapped:(id)arg1;
- (void)adSkipButtonTapped:(id)arg1;
- (void)learnMoreButtonTapped:(id)arg1;
- (void)playbackCoordinatorStateChanged:(id)arg1;
- (void)playbackCoordinator:(id)arg1 timeElapsed:(double)arg2 duration:(double)arg3;
- (void)playbackCoordinator:(id)arg1 playbackFailedWithError:(id)arg2;
- (void)playbackCoordinatorFinishedPlayback:(id)arg1;
- (void)playbackCoordinatorResumedPlayback:(id)arg1;
- (void)playbackCoordinatorPausedPlayback:(id)arg1;
- (void)playbackCoordinatorStartedPlayback:(id)arg1;
- (void)playerViewController:(id)arg1 metricsCollectionEventOccured:(long long)arg2;
- (void)playerViewController:(id)arg1 willBeginFullScreenPresentationWithAnimationCoordinator:(id)arg2;
- (void)playerViewController:(id)arg1 willEndFullScreenPresentationWithAnimationCoordinator:(id)arg2;
- (void)playerViewController:(id)arg1 willTransitionToVisibilityOfPlaybackControls:(_Bool)arg2 withAnimationCoordinator:(id)arg3;
- (_Bool)playerViewController:(id)arg1 shouldExitFullScreenWithReason:(long long)arg2;
- (void)fullscreenBehaviorManagerRequiresFullscreenPlayback:(id)arg1;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
- (void)exitFullscreenWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)enterFullscreenWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)pause;
- (void)play;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (void)loadView;
- (id)initWithVolumeReporter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

