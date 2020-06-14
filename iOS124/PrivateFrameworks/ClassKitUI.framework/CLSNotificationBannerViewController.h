//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class CLSNotificationBannerView, NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface CLSNotificationBannerViewController : UIViewController
{
    _Bool _bannerVisible;
    _Bool _bannerAnimating;
    CLSNotificationBannerView *_bannerView;
    NSLayoutConstraint *_bannerYPositionConstraint;
    NSLayoutConstraint *_bannerWidthConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *bannerWidthConstraint; // @synthesize bannerWidthConstraint=_bannerWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bannerYPositionConstraint; // @synthesize bannerYPositionConstraint=_bannerYPositionConstraint;
@property(nonatomic) _Bool bannerAnimating; // @synthesize bannerAnimating=_bannerAnimating;
@property(nonatomic) _Bool bannerVisible; // @synthesize bannerVisible=_bannerVisible;
@property(retain, nonatomic) CLSNotificationBannerView *bannerView; // @synthesize bannerView=_bannerView;
- (void).cxx_destruct;
- (struct CGPoint)_visibleBannerCenterPosition:(struct CGSize)arg1;
- (struct CGPoint)_hiddenBannerPosition:(struct CGSize)arg1;
- (void)addConstraintsForBannerView;
- (double)bannerWidthForViewSize:(struct CGSize)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)hideBannerQuickly:(_Bool)arg1;
- (void)showCurrentBanner;
- (void)addBannerView:(id)arg1;
- (void)handleWindowPan:(id)arg1;
- (_Bool)windowPointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

