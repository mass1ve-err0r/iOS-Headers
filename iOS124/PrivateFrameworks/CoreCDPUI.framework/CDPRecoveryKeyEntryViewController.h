//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSKeychainSyncSecurityCodeController.h>

@class CDPRecoveryKeyCreateHeaderView, CDPRecoveryKeyEntryViewModel, NSString;

@interface CDPRecoveryKeyEntryViewController : PSKeychainSyncSecurityCodeController
{
    CDPRecoveryKeyCreateHeaderView *_headerView;
    NSString *_recoveryCode;
    CDPRecoveryKeyEntryViewModel *_context;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)enableUserInteractionAndStopSpinner;
- (void)disableUserInteractionAndStartSpinner;
- (id)footerActionButton;
- (id)footerTextLabel;
- (id)textEntryCell;
- (void)_handleRecoveryKeyValidationWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)didFinishEnteringText:(id)arg1;
- (id)headerView;
- (void)continueFlow:(id)arg1;
- (void)cancelFlow:(id)arg1;
- (id)placeholderText;
- (void)viewDidLayoutSubviews;
- (_Bool)hidesNextButton;
- (id)specifiers;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithRecoveryContext:(id)arg1;

@end

