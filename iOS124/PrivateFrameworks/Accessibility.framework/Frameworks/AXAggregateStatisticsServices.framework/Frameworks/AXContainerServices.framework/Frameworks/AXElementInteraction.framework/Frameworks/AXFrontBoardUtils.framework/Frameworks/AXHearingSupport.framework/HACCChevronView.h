//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface HACCChevronView : UIView
{
    UIView *_leftGrabberView;
    UIView *_rightGrabberView;
    double _animationDuration;
    long long _state;
    UIColor *_color;
    double _alphaComponent;
    UIView *_tintView;
    UIView *_backgroundView;
    _Bool _unified;
    UIView *_alphaContainerView;
}

@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (id)description;
- (void)setState:(long long)arg1 animated:(_Bool)arg2;
- (_Bool)_setUnified:(_Bool)arg1;
- (_Bool)_setState:(long long)arg1;
- (void)layoutSubviews;
- (void)_layoutGrabberView:(id)arg1 forState:(long long)arg2;
- (struct CGRect)_frameForGrabberView:(id)arg1 forState:(long long)arg2 unified:(_Bool)arg3;
- (struct CGAffineTransform)_transformForGrabberView:(id)arg1 forState:(long long)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)configureForLightStyle;
@property(nonatomic) double animationDuration;
- (id)initWithColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

