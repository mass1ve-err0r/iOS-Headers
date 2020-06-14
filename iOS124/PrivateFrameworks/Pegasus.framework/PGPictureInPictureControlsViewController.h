//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSTimer, PGPlaybackProgress, PGPlaybackProgressIndicator, UIButton;
@protocol PGPictureInPictureControlsViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PGPictureInPictureControlsViewController : UIViewController
{
    _Bool _showsAlternateActionButtonImage;
    PGPlaybackProgress *_playbackProgress;
    NSArray *_loadedTimeRanges;
    UIButton *_stopButton;
    UIButton *_actionButton;
    UIButton *_cancelButton;
    PGPlaybackProgressIndicator *_playbackProgressIndicator;
    long long _controlsSize;
    _Bool _controlsVisibilityNeedsUpdate;
    long long _controlsVisibilityCounter;
    NSTimer *_controlsVisibilityTimer;
    _Bool _shouldShowControlsIfNeeded;
    _Bool _shouldShowControlsForUserInteraction;
    _Bool _shouldShowControlsAfterUserInteraction;
    _Bool _shouldHideControlsTemporarely;
    _Bool _showsControls;
    _Bool _preventControlsVisibilityChangeAnimation;
    id <PGPictureInPictureControlsViewControllerDelegate> _delegate;
    struct {
        unsigned int pictureInPictureControlsViewControllerStopButtonTapped:1;
        unsigned int pictureInPictureControlsViewControllerActionButtonTapped:1;
        unsigned int pictureInPictureControlsViewControllerCancelButtonTapped:1;
        unsigned int pictureInPictureControlsViewControllerShouldHandleTapGesture:1;
        unsigned int pictureInPictureControlsViewControllerShouldHandleDoubleTapGesture:1;
    } _delegateRespondsTo;
    long long _controlsStyle;
}

@property(readonly, nonatomic) long long controlsStyle; // @synthesize controlsStyle=_controlsStyle;
- (void).cxx_destruct;
- (void)_handleDoubleDoubleTapGestureRecognizer:(id)arg1;
- (void)_handleDoubleTapGestureRecognizer:(id)arg1;
- (void)_handleSingleTapGestureRecognizer:(id)arg1;
- (void)_cancelButtonTapped:(id)arg1;
- (void)_actionButtonTapped:(id)arg1;
- (void)_stopButtonTapped:(id)arg1;
- (void)_userInteractionObservationControlTouchUp:(id)arg1;
- (void)_userInteractionObservationControlTouchDown:(id)arg1;
- (void)_removeControlForUserInteractionObservation:(id)arg1;
- (void)_addControlForUserInteractionObservation:(id)arg1;
- (void)_hideControlsForTouchUp;
- (void)_showControlsForTouchDown;
- (void)_updateControlsVisibility;
- (void)_updateControlsVisibilityIfNeeded;
- (void)_setControlsVisibilityNeedsUpdate;
- (void)_toggleControlsVisibilityForUserInteraction;
- (void)_hideControlsIfPossibleUntilFurtherUserInteraction;
- (void)_showControlsIfNeededAndHideIfPossibleAfterDelayIfPlayingWithDelay:(double)arg1;
- (void)_showControlsIfNeededAndHideIfPossibleAfterDelayIfPlaying;
- (void)_hideControlsIfPossibleAfterDelayIfPlaying;
- (void)_hideControlsIfPossible;
- (void)_showControlsIfNeeded;
- (id)_cancelButtonBackgroundImage;
- (id)_cancelButtonImage;
- (id)_actionButtonBackgroundImage;
- (id)_actionButtonImage;
- (id)_stopButtonBackgroundImage;
- (id)_stopButtonImage;
- (id)_buttonImageWithName:(id)arg1;
- (void)_manageControlsSize;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)stopShowingControlsAnimated:(_Bool)arg1;
- (void)startShowingControlsAnimated:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
@property(nonatomic) __weak id <PGPictureInPictureControlsViewControllerDelegate> delegate;
@property(retain, nonatomic) NSArray *loadedTimeRanges;
@property(retain, nonatomic) PGPlaybackProgress *playbackProgress;
@property(nonatomic) _Bool showsAlternateActionButtonImage;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithControlsStyle:(long long)arg1;

@end

