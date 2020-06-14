//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, _TVImageView;

__attribute__((visibility("hidden")))
@interface _TVLoadingView : UIView
{
    _Bool _shouldShowSpinner;
    _TVImageView *_backgroundImageView;
    UIView *_loadingTitleLabel;
    UIActivityIndicatorView *_spinnerView;
    UIView *_spinnerContainer;
    UIView *_labelContainer;
}

@property(readonly, nonatomic) __weak UIView *labelContainer; // @synthesize labelContainer=_labelContainer;
@property(readonly, nonatomic) __weak UIView *spinnerContainer; // @synthesize spinnerContainer=_spinnerContainer;
@property(nonatomic) _Bool shouldShowSpinner; // @synthesize shouldShowSpinner=_shouldShowSpinner;
@property(readonly, nonatomic) __weak UIActivityIndicatorView *spinnerView; // @synthesize spinnerView=_spinnerView;
@property(nonatomic) __weak UIView *loadingTitleLabel; // @synthesize loadingTitleLabel=_loadingTitleLabel;
@property(readonly, nonatomic) __weak _TVImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void).cxx_destruct;
- (void)_showSpinner;
- (_Bool)canBecomeFocused;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

