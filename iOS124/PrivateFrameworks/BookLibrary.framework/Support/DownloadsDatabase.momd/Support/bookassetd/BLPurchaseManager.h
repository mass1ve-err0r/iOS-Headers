//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BLDatabaseManager, BLDownloadPolicyManager;
@protocol BLOSTransactionCoordinating, BLPurchaseManagerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BLPurchaseManager : NSObject
{
    id <BLPurchaseManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BLDatabaseManager *_databaseManager;
    BLDownloadPolicyManager *_downloadPolicyManager;
    id <BLOSTransactionCoordinating> _transactionCoordinator;
}

@property(nonatomic) __weak id <BLOSTransactionCoordinating> transactionCoordinator; // @synthesize transactionCoordinator=_transactionCoordinator;
@property(nonatomic) __weak BLDownloadPolicyManager *downloadPolicyManager; // @synthesize downloadPolicyManager=_downloadPolicyManager;
@property(nonatomic) __weak BLDatabaseManager *databaseManager; // @synthesize databaseManager=_databaseManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) __weak id <BLPurchaseManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)p_downloadIDForPermlink:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)p_downloadIDForBuyParameters:(id)arg1 storeID:(id)arg2 isRestore:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)dq_writeArtworkWithURL:(id)arg1 downloadID:(id)arg2;
- (id)dq_writeSinf:(id)arg1 downloadID:(id)arg2;
- (id)dq_writeMetadata:(id)arg1 clientIdentifier:(id)arg2 downloadID:(id)arg3;
- (void)dq_triggerDownloadForDownloadID:(id)arg1 urlToAsset:(id)arg2;
- (void)dq_performDownloadDownloadMetadata:(id)arg1 downloadID:(id)arg2 clientIdentifier:(id)arg3 isRestoreItem:(_Bool)arg4;
- (void)_sendPurchaseFailureNotificationWithPurchase:(id)arg1 downloadID:(id)arg2;
- (void)dq_performPurchaseWithBuyParameters:(id)arg1 downloadID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dq_performDownloadWithPermlink:(id)arg1 title:(id)arg2 clientIdentifier:(id)arg3 downloadID:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)requestDownloadWithMetadata:(id)arg1 isRestore:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)downloadWithPermlink:(id)arg1 title:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)purchaseWithBuyParameters:(id)arg1 storeID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithDatabaseManager:(id)arg1 downloadPolicyManager:(id)arg2 transactionCoordinator:(id)arg3;

@end

