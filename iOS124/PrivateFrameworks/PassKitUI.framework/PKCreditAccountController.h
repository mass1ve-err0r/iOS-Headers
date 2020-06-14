//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKAccountFlowController.h>

@interface PKCreditAccountController : PKAccountFlowController
{
}

+ (unsigned long long)paymentEducationStateForAccount:(id)arg1 mostRecentTransactions:(id)arg2 upcomingScheduledPayments:(id)arg3;
+ (id)relevantScheduledPaymentFromScheduledPayments:(id)arg1 account:(id)arg2;
+ (_Bool)_shouldDisplayTransactionsForAccount:(id)arg1;
+ (_Bool)_shouldDisplayBalanceForAccount:(id)arg1;
+ (_Bool)_shouldDisplayBalanceAndTransactionsForPaymentPass:(id)arg1;
+ (_Bool)shouldDisplayTransactionsForPaymentPass:(id)arg1 withAccount:(id)arg2;
+ (_Bool)shouldDisplayAccountInformationForPaymentPass:(id)arg1 withAccount:(id)arg2;
+ (void)resolutionToReceiveCashbackForAccount:(id)arg1 withPeerPaymentAccount:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

