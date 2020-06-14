//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/_TVAppNavigationController.h>

@interface _TVAppNavigationController_iOS : _TVAppNavigationController
{
    _Bool _shouldFakeStatusBarVisible;
    _Bool _shouldPreventContentFromShiftingVertically;
    _Bool _originalValueForNavigationBarForceFullHeightInLandscape;
}

@property(nonatomic) _Bool originalValueForNavigationBarForceFullHeightInLandscape; // @synthesize originalValueForNavigationBarForceFullHeightInLandscape=_originalValueForNavigationBarForceFullHeightInLandscape;
@property(nonatomic) _Bool shouldPreventContentFromShiftingVertically; // @synthesize shouldPreventContentFromShiftingVertically=_shouldPreventContentFromShiftingVertically;
@property(nonatomic) _Bool shouldFakeStatusBarVisible; // @synthesize shouldFakeStatusBarVisible=_shouldFakeStatusBarVisible;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets)arg1;
- (id)_accessibilityButtonBackgroundDefaultTintColor;
- (void)didShowViewController:(id)arg1 animated:(_Bool)arg2;
- (void)didPresentTraitsOverridingViewController;
- (void)willPresentTraitsOverridingViewController;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;

@end

