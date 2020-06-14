//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SetupAssistantUI/BFFSplashController.h>

#import <SIMSetupSupport/TSSetupFlowItem-Protocol.h>
#import <SIMSetupSupport/UINavigationControllerDelegate-Protocol.h>
#import <SIMSetupSupport/UITableViewDataSource-Protocol.h>
#import <SIMSetupSupport/UITableViewDelegate-Protocol.h>

@class CTCellularPlanItem, CTDanglingPlanItem, NSArray, NSIndexPath, NSString, UITableView, UITableViewCell;
@protocol TSSIMSetupFlowDelegate;

@interface TSCellularPlanRemapViewController : BFFSplashController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate, TSSetupFlowItem>
{
    _Bool _hasBackButton;
    _Bool _hasContinueButton;
    id <TSSIMSetupFlowDelegate> _delegate;
    UITableView *_tableView;
    NSArray *_selectedPlanItems;
    CTDanglingPlanItem *_danglingPlanItem;
    CTCellularPlanItem *_defaultVoiceItem;
    UITableViewCell *_sectionFooter;
    NSIndexPath *_chosenTargetCellularPlanItem;
}

@property _Bool hasContinueButton; // @synthesize hasContinueButton=_hasContinueButton;
@property _Bool hasBackButton; // @synthesize hasBackButton=_hasBackButton;
@property(retain) NSIndexPath *chosenTargetCellularPlanItem; // @synthesize chosenTargetCellularPlanItem=_chosenTargetCellularPlanItem;
@property(retain) UITableViewCell *sectionFooter; // @synthesize sectionFooter=_sectionFooter;
@property(retain) CTCellularPlanItem *defaultVoiceItem; // @synthesize defaultVoiceItem=_defaultVoiceItem;
@property(retain) CTDanglingPlanItem *danglingPlanItem; // @synthesize danglingPlanItem=_danglingPlanItem;
@property(retain) NSArray *selectedPlanItems; // @synthesize selectedPlanItems=_selectedPlanItems;
@property(retain) UITableView *tableView; // @synthesize tableView=_tableView;
@property __weak id <TSSIMSetupFlowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)prepare:(CDUnknownBlockType)arg1;
- (void)remapDanglingItem:(CDUnknownBlockType)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithBackButton:(_Bool)arg1 continueButton:(_Bool)arg2 danglingPlanItem:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

