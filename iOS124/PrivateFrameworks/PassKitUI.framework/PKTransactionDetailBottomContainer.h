//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class PKBusinessChatController, PKContinuousButton, PKPaymentPass, PKPaymentTransaction, UILabel, _UIBackdropView;
@protocol PKPaymentDataProvider;

@interface PKTransactionDetailBottomContainer : UIView
{
    _UIBackdropView *_backdropContainerView;
    UIView *_topSeparatorView;
    UILabel *_title;
    UILabel *_message;
    PKContinuousButton *_leadingButton;
    PKContinuousButton *_trailingButton;
    _Bool _isTemplateLayout;
    PKPaymentTransaction *_transaction;
    PKPaymentPass *_paymentPass;
    id <PKPaymentDataProvider> _paymentDataProvider;
    PKBusinessChatController *_businessChatController;
    _Bool _hasContentChanged;
}

- (void).cxx_destruct;
- (void)_openBusinessChat;
- (void)_callIssuer;
- (void)_presentContactViewController;
- (void)_submitQuestionAnswer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_enableButtons:(_Bool)arg1;
- (void)_trailingButtonTapped:(id)arg1;
- (void)_leadingButtonTapped:(id)arg1;
@property(readonly, nonatomic) _Bool hasContentChanged;
- (void)setTransaction:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithPaymentPass:(id)arg1 paymentDataProvider:(id)arg2;

@end

