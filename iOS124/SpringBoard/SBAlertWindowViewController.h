//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SBUIActiveOrientationObserver-Protocol.h"

@class NSArray, NSString, SBAlert, UIScreen, UIView;
@protocol SBAlertWindowViewControllerDelegate;

@interface SBAlertWindowViewController : UIViewController <SBUIActiveOrientationObserver>
{
    UIScreen *_screen;
    id <SBAlertWindowViewControllerDelegate> _alertWindowViewControllerDelegate;
    UIView *_contentView;
    SBAlert *_activeAlert;
    NSArray *_childAlerts;
    UIViewController *_activeViewController;
}

@property(retain, nonatomic) UIViewController *activeViewController; // @synthesize activeViewController=_activeViewController;
@property(retain, nonatomic) SBAlert *activeAlert; // @synthesize activeAlert=_activeAlert;
@property(nonatomic) __weak id <SBAlertWindowViewControllerDelegate> alertWindowViewControllerDelegate; // @synthesize alertWindowViewControllerDelegate=_alertWindowViewControllerDelegate;
- (void).cxx_destruct;
- (void)setNeedsStatusBarAppearanceUpdate;
- (void)updateStatusBarForAlerts:(id)arg1;
- (void)window:(id)arg1 willAnimateFromContentFrame:(struct CGRect)arg2 toContentFrame:(struct CGRect)arg3;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)wantsFullScreenLayout;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (void)noteAlertWindow:(id)arg1 didDisplayAlert:(id)arg2;
- (_Bool)alertWindow:(id)arg1 canAnimateInAlert:(id)arg2;
- (id)stackedViewForAlert:(id)arg1;
- (id)stackedAlertsIncludingActiveAlert:(_Bool)arg1;
- (long long)stackedAlertCount;
- (void)addView:(id)arg1 toBeObscuredByAlert:(id)arg2;
- (void)removeAlertController:(id)arg1;
- (void)performEndAppearanceToController:(id)arg1 withTransitionBlock:(CDUnknownBlockType)arg2;
- (void)addAlertController:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithScreen:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

