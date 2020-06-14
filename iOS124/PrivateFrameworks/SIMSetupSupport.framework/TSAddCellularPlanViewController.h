//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SetupAssistantUI/BFFSplashController.h>

#import <SIMSetupSupport/TSSetupFlowItem-Protocol.h>
#import <SIMSetupSupport/UINavigationControllerDelegate-Protocol.h>

@class NSString;
@protocol TSSIMSetupFlowDelegate;

@interface TSAddCellularPlanViewController : BFFSplashController <UINavigationControllerDelegate, TSSetupFlowItem>
{
    _Bool _allowDismiss;
    _Bool _showAddPlan;
    id <TSSIMSetupFlowDelegate> _delegate;
}

@property __weak id <TSSIMSetupFlowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_cancelButtonTapped;
- (void)viewDidLoad;
- (id)initShowAddPlan:(_Bool)arg1 allowDismiss:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

