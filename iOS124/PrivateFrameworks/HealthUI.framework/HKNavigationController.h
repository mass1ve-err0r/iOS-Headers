//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <HealthUI/HKTabBarTapObserver-Protocol.h>
#import <HealthUI/UINavigationControllerDelegate-Protocol.h>

@class HKProfileBarButtonItem, NSString;

@interface HKNavigationController : UINavigationController <HKTabBarTapObserver, UINavigationControllerDelegate>
{
    HKProfileBarButtonItem *_commonProfileBarButtonItem;
}

- (void).cxx_destruct;
- (void)didChangeToAnotherTab;
- (void)didTapTabBarIcon;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (id)commonProfileBarButtonItem;
- (id)initWithRootViewController:(id)arg1;
- (id)initLargeTitlesNavigationControllerWithRootViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

