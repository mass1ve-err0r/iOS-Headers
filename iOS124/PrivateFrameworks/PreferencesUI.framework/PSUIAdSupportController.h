//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <PreferencesUI/UserTransparencyViewControllerDelegate-Protocol.h>

@class NSString, UITableViewCell, UIView, UserTransparencyViewController;

@interface PSUIAdSupportController : PSListController <UserTransparencyViewControllerDelegate>
{
    id _restrictionsChangedObserver;
    id _effectiveSettingsChangedObserver;
    UITableViewCell *_limitAdTrackingCell;
    UIView *_originalAccessoryView;
    long long _optInStatus;
    UserTransparencyViewController *_userTransparencyController;
}

@property(retain, nonatomic) UserTransparencyViewController *userTransparencyController; // @synthesize userTransparencyController=_userTransparencyController;
@property(nonatomic) long long optInStatus; // @synthesize optInStatus=_optInStatus;
@property(retain, nonatomic) UIView *originalAccessoryView; // @synthesize originalAccessoryView=_originalAccessoryView;
@property(retain, nonatomic) UITableViewCell *limitAdTrackingCell; // @synthesize limitAdTrackingCell=_limitAdTrackingCell;
@property(retain, nonatomic) id effectiveSettingsChangedObserver; // @synthesize effectiveSettingsChangedObserver=_effectiveSettingsChangedObserver;
@property(retain, nonatomic) id restrictionsChangedObserver; // @synthesize restrictionsChangedObserver=_restrictionsChangedObserver;
- (void).cxx_destruct;
- (void)userTransparencyViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)userTransparencyViewControllerDidDismiss:(id)arg1;
- (void)userTransparencyViewControllerDidLoad:(id)arg1;
- (void)userDidTapAdPreferences:(id)arg1;
- (void)userDidTapLearnMoreLink:(id)arg1;
- (void)userDidTapDoneButton:(id)arg1;
- (void)setLimitAdTrackingEnabled:(id)arg1 specifier:(id)arg2;
- (id)limitAdTrackingEnabled:(id)arg1;
- (_Bool)canChangeLimitAdTracking;
- (void)resetAdID;
- (void)reloadLimitAdTrackingSpecifier;
- (void)refreshOptInStatus;
- (id)specifiers;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

