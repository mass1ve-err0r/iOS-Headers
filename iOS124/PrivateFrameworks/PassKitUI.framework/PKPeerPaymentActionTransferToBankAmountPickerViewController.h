//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPeerPaymentActionViewController.h>

#import <PassKitUI/PKEnterCurrencyAmountViewDelegate-Protocol.h>
#import <PassKitUI/PKEnterValueNewBalanceViewDelegate-Protocol.h>

@class NSString, PKEnterCurrencyAmountView, PKEnterValueNewBalanceView;

@interface PKPeerPaymentActionTransferToBankAmountPickerViewController : PKPeerPaymentActionViewController <PKEnterCurrencyAmountViewDelegate, PKEnterValueNewBalanceViewDelegate>
{
    PKEnterCurrencyAmountView *_enterCurrencyAmountView;
    PKEnterValueNewBalanceView *_newBalanceView;
}

- (void).cxx_destruct;
- (_Bool)_isCurrentAmountValid;
- (_Bool)_shouldShakeWithNewAmount:(id)arg1;
- (void)_currentAmountDidChangeTo:(id)arg1 shouldGenerateNewSuggestions:(_Bool)arg2;
- (void)_updateCurrentAmount:(id)arg1 shouldGenerateNewSuggestions:(_Bool)arg2;
- (void)_nextBarButtonPressed:(id)arg1;
- (void)_updateBarButtonEnabledState;
- (id)_nextBarButton;
- (void)enterCurrencyAmountViewDidChangeAmount:(id)arg1;
- (_Bool)enterCurrencyAmountView:(id)arg1 shouldChangeAmountFrom:(id)arg2 to:(id)arg3;
- (void)setCardBalance:(id)arg1;
- (void)setMinLoadAmount:(id)arg1;
- (void)setMaxLoadAmount:(id)arg1;
- (void)setMinBalance:(id)arg1;
- (void)setMaxBalance:(id)arg1;
- (void)updateAccountValues;
- (void)updateFirstResponder;
- (void)willDismissViewController;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithPaymentPass:(id)arg1 webService:(id)arg2 context:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

