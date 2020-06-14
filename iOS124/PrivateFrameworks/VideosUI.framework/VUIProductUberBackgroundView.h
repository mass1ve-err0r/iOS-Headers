//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, VUIProductUberBackgroundViewLayout, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUIProductUberBackgroundView : UIView
{
    VUIProductUberBackgroundViewLayout *_layout;
    _TVImageView *_imageView;
    CAGradientLayer *_maskGradientLayer;
    UIView *_blurEffectView;
    double _contentOffset;
}

@property(nonatomic) double contentOffset; // @synthesize contentOffset=_contentOffset;
@property(retain, nonatomic) UIView *blurEffectView; // @synthesize blurEffectView=_blurEffectView;
@property(retain, nonatomic) CAGradientLayer *maskGradientLayer; // @synthesize maskGradientLayer=_maskGradientLayer;
@property(retain, nonatomic) _TVImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) VUIProductUberBackgroundViewLayout *layout; // @synthesize layout=_layout;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setImageOffset:(double)arg1;
- (void)configureBlurWithInterfaceStyle:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

