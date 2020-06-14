//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <AppleAccountUI/AAUIDataclassPickerViewControllerDelegate-Protocol.h>

@class ACAccount, ACAccountStore, NSDictionary, NSString;
@protocol AAUISignOutControllerDelegate;

@interface AAUISignOutController : UINavigationController <AAUIDataclassPickerViewControllerDelegate>
{
    ACAccountStore *_accountStore;
    NSDictionary *_dataclassOptions;
    ACAccount *_account;
}

@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(copy, nonatomic, setter=_setDataclassOptions:) NSDictionary *_dataclassOptions; // @synthesize _dataclassOptions;
@property(retain, nonatomic, setter=_setAccountStore:) ACAccountStore *_accountStore; // @synthesize _accountStore;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dataclassPickerViewController:(id)arg1 didCompleteWithDataclassActions:(struct NSDictionary *)arg2;
- (void)dataclassPickerViewControllerDidCancel:(id)arg1;
- (id)footerTextForDataclassPickerViewController:(id)arg1;
- (void)_delegate_signOutControllerDidCompleteWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)_delegate_signOutControllerDidCancel;
- (void)_mainQueue_presentSpinnerPageWithDataclassActions:(struct NSDictionary *)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_mainQueue_continueSignOutWithDataclassActions:(struct NSDictionary *)arg1;
- (void)_mainQueue_promptForConfirmationInViewController:(id)arg1 simplified:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)prepareInViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (struct NSDictionary *)_actionableDataclassOptions;
- (_Bool)_hasPaymentPasses;
- (_Bool)_hasiCloudPhotosData;
- (_Bool)_hasiCloudDriveData;
- (_Bool)_hasHealthData;
- (id)_appendToSignoutMessage:(id)arg1 appendedString:(id)arg2;
- (id)_signOutMessageSimplified:(_Bool)arg1 withConfirmation:(_Bool)arg2;
- (id)_spinnerViewControllerForActions:(struct NSDictionary *)arg1;
- (id)_dataclassViewController;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <AAUISignOutControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

