//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PurchaseManagerInterface-Protocol.h"
#import "SSPurchaseManagerDelegate-Protocol.h"

@class NSMutableArray, NSMutableSet, NSString, SSPurchaseManager;
@protocol OS_dispatch_queue;

@interface PurchaseManager : NSObject <SSPurchaseManagerDelegate, PurchaseManagerInterface>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SSPurchaseManager *_purchaseManager;
    NSMutableSet *_inflightPurchases;
    NSMutableArray *_completionBlocks;
}

+ (_Bool)_isOSThinnedVariantID:(id)arg1;
+ (id)userAgentForClientID:(id)arg1;
+ (id)sharedPurchaseManager;
- (void).cxx_destruct;
- (void)_trackInflightPurchase:(id)arg1;
- (void)_updatePurchaseWithAccountIfNeeded:(id)arg1 proxy:(id)arg2;
- (_Bool)_runAgentOperation:(id)arg1 returningError:(id *)arg2;
- (_Bool)_resetUpdateWithBundleID:(id)arg1;
- (void)_removeVendorIDForName:(id)arg1 bundleID:(id)arg2;
- (id)_purchaseWithSoftwareUpdateHelper:(id)arg1 bagKey:(id)arg2 buyParams:(id)arg3 isBackground:(_Bool)arg4;
- (void)_removeCompletedPurchases:(id)arg1;
- (void)_notifyPurchaseCompleted:(id)arg1 withResponse:(id)arg2 results:(id)arg3;
- (void)_notifyBatchResponse:(id)arg1 completedWithError:(id)arg2;
- (id)_mapTransactionIDsToStoreDownloads:(id)arg1;
- (_Bool)_processPurchaseResponse:(id)arg1 purchasesContainedSoftwareUpdates:(_Bool *)arg2 isBackgroundRequest:(_Bool)arg3;
- (id)_newManifestWithStorePurchaseResponse:(id)arg1 accountID:(id)arg2 accountName:(id)arg3 isBackgroundRequest:(_Bool)arg4 isUpdate:(_Bool)arg5 isCompatibilityUpdate:(_Bool)arg6;
- (id)_hasExistingJobForBundleID:(id)arg1 userInitiated:(_Bool)arg2;
- (void)_finishPurchaseForBundleID:(id)arg1 vendorName:(id)arg2 userInitiated:(_Bool)arg3 containsUpdates:(_Bool)arg4 error:(id)arg5;
- (void)_finishIncompatibleDownload:(id)arg1 forBundleID:(id)arg2 backgroundRequest:(_Bool)arg3 update:(_Bool)arg4 reason:(id)arg5;
- (void)_displayNetworkLimitDialogForActivity:(id)arg1;
- (void)_createCoordinatorsWithPlaceholdersForJobs:(id)arg1 createBundleIDs:(id)arg2;
- (id)_createVendorIDForName:(id)arg1 bundleID:(id)arg2;
- (id)_createStorePurchaseFromPurchase:(id)arg1 forClient:(id)arg2 vendorID:(id)arg3;
- (id)_createJobsWithPurchaseResponse:(id)arg1 isUpdate:(_Bool)arg2;
- (void)_cancelCoordinatorWithBundleID:(id)arg1 error:(id)arg2;
- (void)_addBatchResponse:(id)arg1;
- (void)purchaseManager:(id)arg1 didFinishPurchasesWithResponses:(id)arg2;
- (void)startPurchase:(id)arg1 requestToken:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;
- (void)setUpdateState:(long long)arg1 forPurchases:(id)arg2 forceNotification:(_Bool)arg3;
- (id)purchaseForSoftwareUpdate:(id)arg1 isBackground:(_Bool)arg2;
- (void)makePurchases:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)makePurchases:(id)arg1 forClient:(id)arg2 withPurchaseCompletionBlock:(CDUnknownBlockType)arg3;
- (void)makePurchases:(id)arg1 withPurchaseCompletionBlock:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

