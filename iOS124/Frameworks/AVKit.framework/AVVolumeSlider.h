//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UISlider.h>

#import <AVKit/AVExternalGestureRecognizerPreventing-Protocol.h>
#import <AVKit/AVPlaybackControlsViewItem-Protocol.h>

@class AVVolumeWarningView, NSNumber, NSString, UIImageView;

@interface AVVolumeSlider : UISlider <AVExternalGestureRecognizerPreventing, AVPlaybackControlsViewItem>
{
    _Bool _included;
    _Bool _collapsed;
    _Bool _hasAlternateAppearance;
    _Bool _hasFullScreenAppearance;
    float _effectiveVolumeLimit;
    UIImageView *_thumbView;
    NSNumber *_unclampedValue;
    AVVolumeWarningView *_volumeWarningView;
    struct CGSize _extrinsicContentSize;
}

@property(nonatomic) __weak AVVolumeWarningView *volumeWarningView; // @synthesize volumeWarningView=_volumeWarningView;
@property(retain, nonatomic) NSNumber *unclampedValue; // @synthesize unclampedValue=_unclampedValue;
@property(nonatomic) float effectiveVolumeLimit; // @synthesize effectiveVolumeLimit=_effectiveVolumeLimit;
@property(retain, nonatomic) UIImageView *thumbView; // @synthesize thumbView=_thumbView;
@property(nonatomic) _Bool hasFullScreenAppearance; // @synthesize hasFullScreenAppearance=_hasFullScreenAppearance;
@property(nonatomic) _Bool hasAlternateAppearance; // @synthesize hasAlternateAppearance=_hasAlternateAppearance;
@property(nonatomic, getter=isCollapsed) _Bool collapsed; // @synthesize collapsed=_collapsed;
@property(nonatomic, getter=isIncluded) _Bool included; // @synthesize included=_included;
@property(nonatomic) struct CGSize extrinsicContentSize; // @synthesize extrinsicContentSize=_extrinsicContentSize;
- (void).cxx_destruct;
- (_Bool)_shouldTrackTouchAtPoint:(struct CGPoint)arg1;
- (void)setValue:(float)arg1 animated:(_Bool)arg2;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (id)createThumbView;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)hitRect;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets)alignmentRectInsets;
- (struct CGSize)intrinsicContentSize;
- (_Bool)avkit_shouldPreventExternalGestureRecognizerAtPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic, getter=isCollapsedOrExcluded) _Bool collapsedOrExcluded;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

