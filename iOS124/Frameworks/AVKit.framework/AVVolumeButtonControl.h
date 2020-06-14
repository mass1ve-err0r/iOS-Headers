//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <AVKit/AVExternalGestureRecognizerPreventing-Protocol.h>
#import <AVKit/AVPlaybackControlsViewItem-Protocol.h>

@class AVMicaPackage, NSString, NSTimer, UISelectionFeedbackGenerator, UIViewPropertyAnimator;

@interface AVVolumeButtonControl : UIControl <AVExternalGestureRecognizerPreventing, AVPlaybackControlsViewItem>
{
    long long _trackingState;
    _Bool _included;
    _Bool _collapsed;
    _Bool _hasAlternateAppearance;
    _Bool _hasFullScreenAppearance;
    _Bool _longPressEnabled;
    _Bool _showsHighlightedAppearance;
    UISelectionFeedbackGenerator *_feedbackGenerator;
    NSString *_micaPackageStateName;
    UIViewPropertyAnimator *_highlightAnimator;
    AVMicaPackage *_micaPackage;
    NSTimer *_longPressTimer;
    struct CGSize _extrinsicContentSize;
    struct CGPoint _translationOfPanFromPreviousTouch;
    struct CGPoint _cumulativeTranslationSincePanningBegan;
    struct CGPoint _locationOfTouchInWindow;
    struct CGPoint _initialPreciseLocationOfTouch;
    struct NSDirectionalEdgeInsets _hitRectInsets;
}

@property(nonatomic) _Bool showsHighlightedAppearance; // @synthesize showsHighlightedAppearance=_showsHighlightedAppearance;
@property(nonatomic) long long trackingState; // @synthesize trackingState=_trackingState;
@property(nonatomic) __weak NSTimer *longPressTimer; // @synthesize longPressTimer=_longPressTimer;
@property(nonatomic) struct CGPoint initialPreciseLocationOfTouch; // @synthesize initialPreciseLocationOfTouch=_initialPreciseLocationOfTouch;
@property(retain, nonatomic) AVMicaPackage *micaPackage; // @synthesize micaPackage=_micaPackage;
@property(nonatomic) __weak UIViewPropertyAnimator *highlightAnimator; // @synthesize highlightAnimator=_highlightAnimator;
@property(nonatomic) struct CGPoint locationOfTouchInWindow; // @synthesize locationOfTouchInWindow=_locationOfTouchInWindow;
@property(nonatomic) struct CGPoint cumulativeTranslationSincePanningBegan; // @synthesize cumulativeTranslationSincePanningBegan=_cumulativeTranslationSincePanningBegan;
@property(nonatomic) struct CGPoint translationOfPanFromPreviousTouch; // @synthesize translationOfPanFromPreviousTouch=_translationOfPanFromPreviousTouch;
@property(nonatomic) struct NSDirectionalEdgeInsets hitRectInsets; // @synthesize hitRectInsets=_hitRectInsets;
@property(nonatomic, getter=isLongPressEnabled) _Bool longPressEnabled; // @synthesize longPressEnabled=_longPressEnabled;
@property(retain, nonatomic) NSString *micaPackageStateName; // @synthesize micaPackageStateName=_micaPackageStateName;
@property(nonatomic) _Bool hasFullScreenAppearance; // @synthesize hasFullScreenAppearance=_hasFullScreenAppearance;
@property(nonatomic) _Bool hasAlternateAppearance; // @synthesize hasAlternateAppearance=_hasAlternateAppearance;
@property(nonatomic, getter=isCollapsed) _Bool collapsed; // @synthesize collapsed=_collapsed;
@property(nonatomic, getter=isIncluded) _Bool included; // @synthesize included=_included;
@property(nonatomic) struct CGSize extrinsicContentSize; // @synthesize extrinsicContentSize=_extrinsicContentSize;
- (void).cxx_destruct;
- (void)_updateIsHiddenAndAlpha;
- (void)_updateMicaPackage:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)hitRect;
- (void)setBounds:(struct CGRect)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)willMoveToWindow:(id)arg1;
- (_Bool)avkit_shouldPreventExternalGestureRecognizerAtPoint:(struct CGPoint)arg1;
- (void)triggerSelectionChangedFeedback;
@property(readonly, nonatomic, getter=isCollapsedOrExcluded) _Bool collapsedOrExcluded;
@property(readonly, nonatomic) UISelectionFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

