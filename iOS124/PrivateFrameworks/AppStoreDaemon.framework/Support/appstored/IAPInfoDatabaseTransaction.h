//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IAPInfoDatabaseSession.h"

@interface IAPInfoDatabaseTransaction : IAPInfoDatabaseSession
{
}

- (_Bool)_setValue:(id)arg1 forDatabaseProperty:(id)arg2 withError:(id *)arg3;
- (_Bool)setLastUpdatedTimestamp:(id)arg1 forAccountID:(id)arg2 withError:(id *)arg3;
- (_Bool)setRevision:(id)arg1 forAccountID:(id)arg2 withError:(id *)arg3;
- (_Bool)removeAllIAPsForAccountID:(id)arg1 withError:(id *)arg2;
- (_Bool)removeAllIAPsWithError:(id *)arg1;
- (_Bool)insertIAPs:(id)arg1 forAccountID:(id)arg2 withError:(id *)arg3;
- (_Bool)deleteIAPs:(id)arg1 forAccountID:(id)arg2 withError:(id *)arg3;

@end

