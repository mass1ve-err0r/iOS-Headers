//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCPaymentTransactionManager-Protocol.h>
#import <NewsCore/FCPaymentTransactionObserverDelegate-Protocol.h>

@class FCPaymentTransactionObserver, NSMutableDictionary, NSString;
@protocol FCPaymentTransactionManagerDelegate;

@interface FCPaymentTransactionManager : NSObject <FCPaymentTransactionObserverDelegate, FCPaymentTransactionManager>
{
    id <FCPaymentTransactionManagerDelegate> delegate;
    FCPaymentTransactionObserver *_paymentTransactionObserver;
    NSMutableDictionary *_paymentQueueByProductID;
}

@property(retain, nonatomic) NSMutableDictionary *paymentQueueByProductID; // @synthesize paymentQueueByProductID=_paymentQueueByProductID;
@property(retain, nonatomic) FCPaymentTransactionObserver *paymentTransactionObserver; // @synthesize paymentTransactionObserver=_paymentTransactionObserver;
@property(nonatomic) __weak id <FCPaymentTransactionManagerDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)paymentTransactionObserver:(id)arg1 didFinishPurchaseTransactionWithProductID:(id)arg2;
- (void)paymentTransactionObserver:(id)arg1 didFailPurchaseTransactionWithTransaction:(id)arg2;
- (id)createPaymentQueueWithProductID:(id)arg1 purchaseID:(id)arg2 webAccessOptIn:(_Bool)arg3 appAdamID:(id)arg4 storeExternalVersion:(id)arg5;
- (void)startPurchaseWithTagID:(id)arg1 productID:(id)arg2 purchaseID:(id)arg3 appAdamID:(id)arg4 storeExternalVersion:(id)arg5 price:(id)arg6 webAccessOptIn:(_Bool)arg7 payment:(id)arg8;
- (void)registerOngoingPurchaseTransactionsWithEntry:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

