//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CTCellularPlanManager, PSListController, PSSimStatusCache, PSSpecifier, PSUICallingSubgroup, PSUICarrierSpaceGroup, PSUICellularPlanManagerCache, PSUICoreTelephonyCarrierBundleCache, PSUICoreTelephonyDataCache, PSUIMyNumberSubgroup, PSUINetworkSelectionSubgroup, PSUINetworkSettingsSubgroup, PSUISIMSubgroup;

@protocol PSUISubscriptionContextMenusFactory
- (CTCellularPlanManager *)createCellularPlanManager;
- (PSUICellularPlanManagerCache *)createCellularPlanManagerCache;
- (PSUICoreTelephonyDataCache *)createDataCache;
- (PSUICoreTelephonyCarrierBundleCache *)createCarrierBundleCache;
- (PSSimStatusCache *)createSimStatusCache;
- (PSUISIMSubgroup *)createSimSubgroup;
- (PSUINetworkSettingsSubgroup *)createNetworkSettingsSubgroup;
- (PSUIMyNumberSubgroup *)createMyNumberSubgroup;
- (PSUINetworkSelectionSubgroup *)createNetworkSelectionSubgroup;
- (PSUICarrierSpaceGroup *)createCarrierSpaceSubgroup;
- (PSUICallingSubgroup *)createCallingSubgroup;
- (_Bool)shouldPopViewControllerOnPlanRemoval;
- (PSSpecifier *)parentSpecifier;
- (PSSpecifier *)groupSpecifier;
- (PSListController *)hostController;
@end

