//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlaySupport/CPSButton.h>

@class CPBarButton, NSLayoutConstraint, UIImage, UIImageView, UIView;

@interface CPSBarButton : CPSButton
{
    _Bool _showBackIndicator;
    CPBarButton *_cyBarButton;
    UIImageView *_backIndicatorImageView;
    UIImage *_backIndicatorImage;
    UIImage *_focusedBackIndicatorImage;
    UIView *_backgroundView;
    NSLayoutConstraint *_backIndicatorHeightConstraint;
}

+ (id)buttonWithCPBarButton:(id)arg1 showBackIndicator:(_Bool)arg2;
@property(retain, nonatomic) NSLayoutConstraint *backIndicatorHeightConstraint; // @synthesize backIndicatorHeightConstraint=_backIndicatorHeightConstraint;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIImage *focusedBackIndicatorImage; // @synthesize focusedBackIndicatorImage=_focusedBackIndicatorImage;
@property(retain, nonatomic) UIImage *backIndicatorImage; // @synthesize backIndicatorImage=_backIndicatorImage;
@property(retain, nonatomic) UIImageView *backIndicatorImageView; // @synthesize backIndicatorImageView=_backIndicatorImageView;
@property(nonatomic) _Bool showBackIndicator; // @synthesize showBackIndicator=_showBackIndicator;
@property(retain, nonatomic) CPBarButton *cyBarButton; // @synthesize cyBarButton=_cyBarButton;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)_resetAlpha;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)_externalUnfocusedBorderColor;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

