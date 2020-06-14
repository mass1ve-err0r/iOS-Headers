//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CAMStageLightAnimator, CAMStageLightOverlayCircleView, UIImageView;

@interface CAMStageLightOverlayView : UIView
{
    _Bool _active;
    _Bool _visible;
    long long _orientation;
    double _bottomContentInset;
    UIView *__tintView;
    UIImageView *__vignetteView;
    CAMStageLightOverlayCircleView *__circleView;
    unsigned long long __activeTimerID;
    CAGradientLayer *__gradientLayer;
    CAMStageLightAnimator *__animator;
}

+ (struct CGRect)circleFrameForBounds:(struct CGRect)arg1 orientation:(long long)arg2 bottomContentInset:(double)arg3;
+ (double)_circleDiameterForBounds:(struct CGRect)arg1 orientation:(long long)arg2;
+ (_Bool)_useLargeLayoutForBounds:(struct CGRect)arg1;
@property(retain, nonatomic, setter=_setAnimator:) CAMStageLightAnimator *_animator; // @synthesize _animator=__animator;
@property(readonly, nonatomic) CAGradientLayer *_gradientLayer; // @synthesize _gradientLayer=__gradientLayer;
@property(nonatomic, setter=_setActiveTimerID:) unsigned long long _activeTimerID; // @synthesize _activeTimerID=__activeTimerID;
@property(readonly, nonatomic) CAMStageLightOverlayCircleView *_circleView; // @synthesize _circleView=__circleView;
@property(readonly, nonatomic) UIImageView *_vignetteView; // @synthesize _vignetteView=__vignetteView;
@property(readonly, nonatomic) UIView *_tintView; // @synthesize _tintView=__tintView;
@property(nonatomic) double bottomContentInset; // @synthesize bottomContentInset=_bottomContentInset;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGRect)_circleFrameForOrientation:(long long)arg1;
- (void)_updateAnimatorState;
- (void)_updateShadowViewsAnimated:(_Bool)arg1;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)setActive:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

