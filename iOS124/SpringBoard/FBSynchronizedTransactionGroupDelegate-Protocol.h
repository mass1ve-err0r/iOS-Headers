//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FBSynchronizedTransactionDelegate-Protocol.h"

@class BSTransaction, FBSynchronizedTransactionGroup;
@protocol FBSynchronizedTransaction;

@protocol FBSynchronizedTransactionGroupDelegate <FBSynchronizedTransactionDelegate>

@optional
- (_Bool)synchronizedTransactionGroup:(FBSynchronizedTransactionGroup *)arg1 shouldFailForSynchronizedTransaction:(BSTransaction<FBSynchronizedTransaction> *)arg2;
@end

