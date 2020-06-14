//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKAccountServicePerformActionViewController.h>

#import <PassKitUI/PKAccountBillPaymentAmountDescriptionViewDelegate-Protocol.h>
#import <PassKitUI/PKAccountBillPaymentControllerDelegate-Protocol.h>
#import <PassKitUI/PKAddBankAccountInformationViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKBillPaymentRingViewDataSource-Protocol.h>
#import <PassKitUI/PKBillPaymentRingViewDelegate-Protocol.h>
#import <PassKitUI/UIScrollViewDelegate-Protocol.h>

@class CLInUseAssertion, NSDateFormatter, NSDecimalNumber, NSDictionary, NSMutableDictionary, NSNumberFormatter, NSString, PKAccountBillPaymentAmountDescriptionView, PKAccountBillPaymentController, PKAddBankAccountInformationViewController, PKBillPaymentRingView, PKBillPaymentSuggestedAmountController, PKBillPaymentSuggestedAmountList, PKCompoundInterestCalculator, PKContinuousButton, UIButton, UILabel, UIScrollView, UITapGestureRecognizer, _UIBackdropView;

@interface PKAccountBillPaymentViewController : PKAccountServicePerformActionViewController <PKBillPaymentRingViewDelegate, PKAccountBillPaymentControllerDelegate, PKAddBankAccountInformationViewControllerDelegate, PKBillPaymentRingViewDataSource, PKAccountBillPaymentAmountDescriptionViewDelegate, UIScrollViewDelegate>
{
    CLInUseAssertion *_CLInUse;
    unsigned long long _screenType;
    PKAccountBillPaymentController *_billPaymentCoordinator;
    PKBillPaymentSuggestedAmountController *_suggestedAmountController;
    PKBillPaymentSuggestedAmountList *_suggestionList;
    PKCompoundInterestCalculator *_interestCalculator;
    NSMutableDictionary *_cachedInterestResults;
    NSDateFormatter *_interestDateFormatter;
    NSNumberFormatter *_amountFormatter;
    NSDecimalNumber *_apr;
    NSMutableDictionary *_smallRingInterestAttributes;
    NSDictionary *_smallRingInterestDateAttributes;
    _Bool _hasAnimatedRing;
    _Bool _performingAction;
    _Bool _showingKeyboard;
    _Bool _hasAnimatedKeyboard;
    _Bool _shouldEnablePayLaterButton;
    _Bool _viewIsEnabled;
    _Bool _payButtonsEnabled;
    double _keyboardHeight;
    double _backdropWeight;
    double _navBarAlpha;
    long long _backdropStyle;
    PKAccountBillPaymentAmountDescriptionView *_amountDescriptionView;
    PKBillPaymentRingView *_ringView;
    UILabel *_makePaymentLabel;
    UILabel *_paymentDueLabel;
    UIButton *_showKeyboardButton;
    PKContinuousButton *_payNowButton;
    PKContinuousButton *_payLaterButton;
    UILabel *_smallRingInterestLabel;
    _UIBackdropView *_backdropView;
    UIScrollView *_scrollView;
    UITapGestureRecognizer *_ringViewTapRecognizer;
    PKAddBankAccountInformationViewController *_addBankAccountViewController;
}

- (void).cxx_destruct;
- (void)_presentAlertControllerForError:(id)arg1;
- (void)_showOrHideKeypad;
- (void)_showNavigationBarTitle:(_Bool)arg1;
- (_Bool)_showTitleLabels;
- (id)_interestStringForAmount:(id)arg1;
- (id)_interestPostDate;
- (_Bool)_isSmallPhone;
- (void)_showOrHideViews;
- (id)_addBankAccountInformationViewController;
- (void)_presentAddBankAccount;
- (void)_dismissViewControllerWithSuccess:(_Bool)arg1;
- (void)_setPayButtonsEnabled:(_Bool)arg1;
- (void)_setEnabled:(_Bool)arg1;
- (double)_buttonPadding;
- (double)_sideMargin;
- (id)_paymentAmount;
- (void)setAccount:(id)arg1;
- (id)_interestForAmount:(id)arg1;
- (void)_calculateBlur;
- (void)_updateNavigationBar;
- (void)_payLaterButtonTapped:(id)arg1;
- (void)_payNowButtonTapped:(id)arg1;
- (void)_changeRingStateToSmall:(_Bool)arg1;
- (void)_tappedSmallRingView:(id)arg1;
- (void)_showKeyboardButtonTapped:(id)arg1;
- (void)_cancelButtonTapped:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_performBillPaymentWithAmount:(id)arg1 billPaymentSuggestedAmountDataEvent:(id)arg2;
- (void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)arg1;
- (void)addBankAccountInformationViewControllerDidFinish:(id)arg1;
- (void)addBankAccountInformationViewController:(id)arg1 didAddFundingSource:(id)arg2;
- (void)accountBillPaymentController:(id)arg1 hasChangedState:(unsigned long long)arg2 error:(id)arg3 updatedAccount:(id)arg4;
- (void)billPaymentAmountDescriptionViewHasTappedLearnMore:(id)arg1;
- (void)billPaymentAmountDescriptionView:(id)arg1 hasChangedAmount:(id)arg2 isValidAmount:(_Bool)arg3;
- (void)_updateInterestString;
- (id)billPaymentRingViewZeroInterestText:(id)arg1;
- (id)billPaymentRingView:(id)arg1 interestTextForAmount:(id)arg2;
- (id)billPaymentRingView:(id)arg1 bottomCurvedTextForSuggestedAmount:(id)arg2;
- (id)billPaymentRingView:(id)arg1 topCurvedTextForSuggestedAmount:(id)arg2;
- (void)billPaymentRingView:(id)arg1 selectedSuggestedAmount:(id)arg2 selectedSuggestedAmountIsTarget:(_Bool)arg3;
- (double)pkui_preferredNavigationBarBackgroundOpacity;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)dealloc;
- (id)initWithBillPaymentSuggestedAmountController:(id)arg1 paymentPass:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

