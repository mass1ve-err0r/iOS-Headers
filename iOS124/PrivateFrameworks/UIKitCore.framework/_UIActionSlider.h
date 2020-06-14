//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIControl.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIBezierPath, UIColor, UIFont, UIImage, UIImageView, UILabel, UIPanGestureRecognizer, UIView, _UIActionSliderKnob, _UIBackdropView, _UIVibrantSettings;
@protocol _UIActionSliderDelegate, _UIActionSliderLabel;

@interface _UIActionSlider : UIControl <UIGestureRecognizerDelegate>
{
    UIView *_contentView;
    UIView *_trackDodgeView;
    UIView *_trackBackgroundView;
    _UIBackdropView *_trackBlurView;
    UIView *_trackSolidView;
    _UIActionSliderKnob *_knobView;
    UIImageView *_knobImageView;
    UIView<_UIActionSliderLabel> *_trackLabel;
    UIPanGestureRecognizer *_slideGestureRecognizer;
    struct CGPoint _slideGestureInitialPoint;
    double _knobPosition;
    double _trackWidthProportion;
    _Bool _showingTrackLabel;
    _Bool _animating;
    long long _style;
    long long _textStyle;
    NSString *_trackText;
    UIFont *_trackFont;
    double _trackTextBaselineFromBottom;
    id <_UIActionSliderDelegate> _delegate;
    double _knobWidth;
    double _cachedTrackMaskWidth;
    _UIVibrantSettings *_vibrantSettings;
    struct CGSize _knobImageOffset;
    struct CGSize _trackSize;
    struct UIEdgeInsets _knobInsets;
}

@property(retain, nonatomic) _UIVibrantSettings *vibrantSettings; // @synthesize vibrantSettings=_vibrantSettings;
@property(readonly, nonatomic, getter=_knobView) UIView *knobView; // @synthesize knobView=_knobView;
@property(nonatomic) double cachedTrackMaskWidth; // @synthesize cachedTrackMaskWidth=_cachedTrackMaskWidth;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic, getter=isShowingTrackLabel) _Bool showingTrackLabel; // @synthesize showingTrackLabel=_showingTrackLabel;
@property(nonatomic) double trackWidthProportion; // @synthesize trackWidthProportion=_trackWidthProportion;
@property(nonatomic) struct UIEdgeInsets knobInsets; // @synthesize knobInsets=_knobInsets;
@property(nonatomic) double knobWidth; // @synthesize knobWidth=_knobWidth;
@property(nonatomic) double knobPosition; // @synthesize knobPosition=_knobPosition;
@property(nonatomic) __weak id <_UIActionSliderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIPanGestureRecognizer *slideGestureRecognizer; // @synthesize slideGestureRecognizer=_slideGestureRecognizer;
@property(nonatomic) double trackTextBaselineFromBottom; // @synthesize trackTextBaselineFromBottom=_trackTextBaselineFromBottom;
@property(nonatomic) struct CGSize trackSize; // @synthesize trackSize=_trackSize;
@property(retain, nonatomic) UIFont *trackFont; // @synthesize trackFont=_trackFont;
@property(copy, nonatomic) NSString *trackText; // @synthesize trackText=_trackText;
@property(nonatomic) struct CGSize knobImageOffset; // @synthesize knobImageOffset=_knobImageOffset;
@property(nonatomic) long long textStyle; // @synthesize textStyle=_textStyle;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)_knobPanGesture:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_slideCompleted:(_Bool)arg1;
- (void)_hideTrackLabel:(_Bool)arg1;
- (void)_showTrackLabel;
- (void)setMaskFromImage:(id)arg1 onView:(id)arg2;
- (void)setMaskPath:(struct CGPath *)arg1 onView:(id)arg2;
- (void)updateAllTrackMasks;
- (id)trackMaskPath;
- (id)trackMaskImage;
- (void)layoutSubviews;
- (void)_makeTrackLabel;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (_Bool)shouldHideTrackLabelForXPoint:(double)arg1;
- (_Bool)xPointIsWithinTrack:(double)arg1;
- (double)_knobAvailableX;
- (double)_knobRightMostX;
- (double)_knobLeftMostX;
- (double)_knobMaxX;
- (double)_knobMinX;
- (double)_knobHorizontalPosition;
- (double)_knobVerticalInset;
- (double)_knobMaxXInset;
- (double)_knobMinXInset;
- (double)_knobWidth;
- (struct CGRect)_trackFrame;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (void)closeTrackAnimated:(_Bool)arg1;
- (void)openTrackAnimated:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) struct CGRect trackTextRect;
@property(readonly, nonatomic) struct CGRect knobRect;
@property(readonly, retain, nonatomic) UILabel *trackLabel;
@property(retain, nonatomic) UIColor *knobColor;
@property(retain, nonatomic) UIImage *knobImage;
@property(readonly, nonatomic) UIBezierPath *knobMaskPath;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 vibrantSettings:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

