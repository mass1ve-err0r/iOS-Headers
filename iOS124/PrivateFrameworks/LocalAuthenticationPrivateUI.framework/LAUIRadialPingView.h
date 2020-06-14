//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface LAUIRadialPingView : UIView
{
    UIColor *_color;
    UIView *_container;
    UIView *_primary;
    struct array<(anonymous namespace)::blur_container, 2> _blurs;
    struct periodic_animation_state _pulse;
    _Bool _animating_dirty;
    unsigned char _animating_counter;
    _Bool _animating;
}

@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_endExpand;
- (void)_startExpandWithDelay:(double)arg1;
- (void)_updateAnimatingAnimated:(_Bool)arg1;
- (void)_attachExpandAnimationToContainer:(struct blur_container *)arg1 withDelay:(double)arg2;
- (void)_updateExpandForBlurAtIndex:(unsigned long long)arg1 withDelay:(double)arg2;
- (void)_setExpand:(_Bool)arg1 forBlurAtIndex:(unsigned long long)arg2 withDelay:(double)arg3;
- (void)_attachPulseAnimationWithDelay:(double)arg1;
- (void)_setPulse:(_Bool)arg1 withDelay:(double)arg2;
- (void)_updateViewsWithColor;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)tintColorDidChange;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

