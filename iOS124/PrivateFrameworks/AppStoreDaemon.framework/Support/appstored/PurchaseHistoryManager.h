//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PushMessageConsumer-Protocol.h"

@class DAAPDatabase, NSString;
@protocol OS_dispatch_queue, PurchaseHistoryBagContract;

@interface PurchaseHistoryManager : NSObject <PushMessageConsumer>
{
    id <PurchaseHistoryBagContract> _bagContract;
    DAAPDatabase *_database;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (double)_forcedRefreshInterval;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_sendUpdateRequestForAccountID:(long long)arg1 withContext:(unsigned long long)arg2 withAccount:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;
- (void)_sendItemsRequestForAccountID:(long long)arg1 withContext:(unsigned long long)arg2 withAccount:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;
- (void)_updateForAccountID:(long long)arg1 withContext:(unsigned long long)arg2 withAccount:(id)arg3 replyHandler:(CDUnknownBlockType)arg4;
- (_Bool)_updateDatabaseWithDAAPResponse:(id)arg1 forAccountID:(id)arg2 error:(id *)arg3;
- (void)_handleAccountChangedNotification;
- (id)_getHideShowRequestContextToShowAllForAccount:(id)arg1 withError:(id *)arg2;
- (id)_getHideShowRequestContextToHideItem:(long long)arg1 forAccount:(id)arg2 withError:(id *)arg3;
- (id)_getUpdateRequestContextForAccountID:(long long)arg1 requestingAccount:(id)arg2 withPurchaseHistoryContext:(unsigned long long)arg3 withError:(id *)arg4;
- (id)_getItemsRequestContextForAccountID:(long long)arg1 requestingAccount:(id)arg2 withPurchaseHistoryContext:(unsigned long long)arg3 withError:(id *)arg4;
- (void)_beginObservingAccountChangeNotification;
- (void)pushService:(id)arg1 didReceiveMessage:(id)arg2;
- (void)updateWithContext:(unsigned long long)arg1 withReplyHandler:(CDUnknownBlockType)arg2;
- (void)updateForAccountID:(long long)arg1 withContext:(unsigned long long)arg2 withReplyHandler:(CDUnknownBlockType)arg3;
- (void)showAllWithReplyHandler:(CDUnknownBlockType)arg1;
- (void)setHidden:(_Bool)arg1 forStoreItemID:(long long)arg2 withReplyHandler:(CDUnknownBlockType)arg3;
- (void)executeQuery:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

