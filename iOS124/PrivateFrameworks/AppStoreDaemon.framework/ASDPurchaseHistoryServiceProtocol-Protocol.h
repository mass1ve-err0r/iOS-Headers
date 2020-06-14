//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class ASDPurchaseHistoryQuery;

@protocol ASDPurchaseHistoryServiceProtocol
- (void)updateWithContext:(unsigned long long)arg1 withReplyHandler:(void (^)(NSError *))arg2;
- (void)updateForAccountID:(long long)arg1 withContext:(unsigned long long)arg2 withReplyHandler:(void (^)(NSError *))arg3;
- (void)showAllWithReplyHandler:(void (^)(NSError *))arg1;
- (void)setHidden:(_Bool)arg1 forStoreItemID:(long long)arg2 withReplyHandler:(void (^)(NSError *))arg3;
- (void)executeQuery:(ASDPurchaseHistoryQuery *)arg1 withReplyHandler:(void (^)(NSArray *, NSError *))arg2;
@end

