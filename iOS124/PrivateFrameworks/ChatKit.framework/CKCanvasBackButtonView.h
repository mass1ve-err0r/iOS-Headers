//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIColor, UIImageView, UILabel, UIView;

@interface CKCanvasBackButtonView : UIControl
{
    _Bool _shouldShowTitlePaddingView;
    UIImageView *_backButtonView;
    UILabel *_titleLabel;
    UIView *_titlePaddingView;
    UIColor *_titleLabelColor;
}

@property(retain, nonatomic) UIColor *titleLabelColor; // @synthesize titleLabelColor=_titleLabelColor;
@property(nonatomic) _Bool shouldShowTitlePaddingView; // @synthesize shouldShowTitlePaddingView=_shouldShowTitlePaddingView;
@property(retain, nonatomic) UIView *titlePaddingView; // @synthesize titlePaddingView=_titlePaddingView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *backButtonView; // @synthesize backButtonView=_backButtonView;
- (void).cxx_destruct;
- (struct CGSize)_titlePaddingViewSizeForTitle;
- (void)_setVisuallyHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)sizeToFit;
- (void)tintColorDidChange;
- (void)setBackButtonTitle:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 showPaddingTitleView:(_Bool)arg2;

@end

