//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIImageView, UIVisualEffectView, UIWindow;

@interface _TVAppLoadingView : UIView
{
    UIView *_wallpaperView;
    UIWindow *_overlayWindow;
    _Bool _hiding;
    double _timeout;
    double _delay;
    UIImageView *_maskView;
    UIVisualEffectView *_visualEffectView;
    UIActivityIndicatorView *_spinner;
}

+ (id)loadingScreen;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
- (void).cxx_destruct;
- (void)didRotate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 templateImage:(id)arg2;
- (double)hideAnimationDuration;
- (_Bool)isVisible;
- (void)hide;
- (void)timeout;
- (void)showOverKeyWindow;
- (void)setLoadingDelay:(double)arg1;
- (void)setTimeout:(double)arg1;

@end

