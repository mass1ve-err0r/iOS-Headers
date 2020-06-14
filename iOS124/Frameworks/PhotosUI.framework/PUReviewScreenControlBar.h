//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSSet, UIButton;

@interface PUReviewScreenControlBar : UIView
{
    _Bool _shouldLayoutVertically;
    _Bool _useTransparentBackground;
    _Bool _useTransparentTouches;
    NSSet *_availableButtons;
    NSSet *_enabledButtons;
    UIButton *_editButton;
    UIButton *_markupButton;
    UIButton *_funEffectsButton;
    UIButton *_sendButton;
    UIView *_accessoryView;
    NSArray *__buttonsForLayout;
    struct CGPoint _layoutCenterAlignmentPoint;
}

+ (struct CGRect)sendButtonAlignmentRectInVerticalBounds:(struct CGRect)arg1 relativeCenterAlignmentPoint:(struct CGPoint)arg2 controlsCount:(unsigned long long)arg3;
+ (struct CGRect)sendButtonAlignmentRectInHorizontalBounds:(struct CGRect)arg1 relativeCenterAlignmentPoint:(struct CGPoint)arg2;
+ (id)supportedButtons;
@property(retain, nonatomic, setter=_setButtonsForLayout:) NSArray *_buttonsForLayout; // @synthesize _buttonsForLayout=__buttonsForLayout;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(readonly, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(readonly, nonatomic) UIButton *funEffectsButton; // @synthesize funEffectsButton=_funEffectsButton;
@property(readonly, nonatomic) UIButton *markupButton; // @synthesize markupButton=_markupButton;
@property(readonly, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
@property(nonatomic) _Bool useTransparentTouches; // @synthesize useTransparentTouches=_useTransparentTouches;
@property(nonatomic) _Bool useTransparentBackground; // @synthesize useTransparentBackground=_useTransparentBackground;
@property(nonatomic) struct CGPoint layoutCenterAlignmentPoint; // @synthesize layoutCenterAlignmentPoint=_layoutCenterAlignmentPoint;
@property(nonatomic) _Bool shouldLayoutVertically; // @synthesize shouldLayoutVertically=_shouldLayoutVertically;
@property(copy, nonatomic) NSSet *enabledButtons; // @synthesize enabledButtons=_enabledButtons;
@property(copy, nonatomic) NSSet *availableButtons; // @synthesize availableButtons=_availableButtons;
- (void).cxx_destruct;
- (void)_updateBackgroundTransparency;
- (void)_updateButtonText;
- (void)_updateButtonVisibility;
- (id)_buttonForButtonType:(long long)arg1;
- (_Bool)_isButtonEnabled:(long long)arg1;
- (_Bool)_isButtonAvailable:(long long)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

