//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iCloudQuotaUI/NSObject-Protocol.h>

@class ICQUpgradeFlowManager, UIViewController;

@protocol ICQUpgradeFlowManagerDelegate <NSObject>

@optional
- (void)upgradeFlowManager:(ICQUpgradeFlowManager *)arg1 didPresentViewController:(UIViewController *)arg2;
- (void)upgradeFlowManagerDidComplete:(ICQUpgradeFlowManager *)arg1;
- (void)upgradeFlowManagerDidCancel:(ICQUpgradeFlowManager *)arg1;
@end

