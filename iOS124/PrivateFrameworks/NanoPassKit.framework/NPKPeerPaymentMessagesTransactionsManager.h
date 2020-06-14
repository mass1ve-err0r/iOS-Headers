//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPassKit/PKPaymentServiceDelegate-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString, PKPaymentService;
@protocol OS_dispatch_queue;

@interface NPKPeerPaymentMessagesTransactionsManager : NSObject <PKPaymentServiceDelegate>
{
    NSObject<OS_dispatch_queue> *_transactionsQueue;
    NSObject<OS_dispatch_queue> *_peerPaymentPassQueue;
    NSString *_peerPaymentPassUniqueID;
    PKPaymentService *_paymentService;
    NSMutableDictionary *_transactionDetails;
    NSMutableSet *_currentLookupIdentifiers;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSMutableSet *currentLookupIdentifiers; // @synthesize currentLookupIdentifiers=_currentLookupIdentifiers;
@property(readonly, nonatomic) NSMutableDictionary *transactionDetails; // @synthesize transactionDetails=_transactionDetails;
@property(readonly, nonatomic) PKPaymentService *paymentService; // @synthesize paymentService=_paymentService;
- (void).cxx_destruct;
- (id)_sharedPeerPaymentWebService;
- (void)_fetchAllPeerPaymentTransactionsWithPeerPaymentPassID:(id)arg1;
- (void)_transactionsQueue_notifyStatusUpdateOfTransactionWithServiceIdentifier:(id)arg1;
- (id)_transactionsQueue_transactionDetailsCreatedIfNecessaryForServiceIdentifier:(id)arg1;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)lookupTransactionActionsIfNeededWithServiceIdentifier:(id)arg1;
- (id)peerPaymentTransactionWithServiceIdentifier:(id)arg1;
- (void)_transactionsQueue_setStatus:(unsigned long long)arg1 forPaymentTransactionWithServiceIdentifier:(id)arg2 notifyUpdate:(_Bool)arg3;
- (void)setStatus:(unsigned long long)arg1 forPaymentTransactionWithServiceIdentifier:(id)arg2;
- (unsigned long long)_transactionQueue_statusOfPaymentTransactionWithServiceIdentifier:(id)arg1;
- (id)availableActionsForPaymentTransactionWithServiceIdentifier:(id)arg1;
- (unsigned long long)statusOfPaymentTransactionWithServiceIdentifier:(id)arg1;
@property(copy) NSString *peerPaymentPassUniqueID; // @synthesize peerPaymentPassUniqueID=_peerPaymentPassUniqueID;
- (id)initWithPeerPaymentPassUniqueID:(id)arg1 paymentService:(id)arg2;
- (void)dealloc;
- (id)initWithPeerPaymentPassUniqueID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

