//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PurchaseHistoryDatabaseSession.h"

@interface PurchaseHistoryDatabaseTransaction : PurchaseHistoryDatabaseSession
{
}

- (_Bool)_setValue:(id)arg1 forDatabaseProperty:(id)arg2 withError:(id *)arg3;
- (_Bool)setLastUpdatedTimestamp:(id)arg1 forAccountID:(id)arg2 withError:(id *)arg3;
- (_Bool)setRevision:(id)arg1 forAccountID:(id)arg2 withError:(id *)arg3;
- (_Bool)showAllWithError:(id *)arg1;
- (_Bool)setHidden:(_Bool)arg1 forStoreItemID:(long long)arg2 withError:(id *)arg3;
- (_Bool)removeAllAppsForAccountID:(id)arg1 withError:(id *)arg2;
- (_Bool)insertApps:(id)arg1 forAccountID:(id)arg2 withError:(id *)arg3;
- (_Bool)deleteAppsForLockerItemIDs:(id)arg1 forAccountID:(id)arg2 withError:(id *)arg3;

@end

