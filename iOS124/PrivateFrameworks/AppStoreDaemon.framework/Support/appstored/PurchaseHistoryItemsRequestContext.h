//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, AMSProcessInfo, NSArray, NSNumber;

@interface PurchaseHistoryItemsRequestContext : NSObject
{
    long long _accountID;
    ACAccount *_requestingAccount;
    AMSProcessInfo *_clientInfo;
    NSArray *_knownApps;
    NSNumber *_revision;
    unsigned long long _purchaseHistoryContext;
}

+ (id)newContextWithKnownApps:(id)arg1 revision:(id)arg2 forAccountID:(long long)arg3 requestingAccount:(id)arg4 client:(id)arg5 purchaseHistoryContext:(unsigned long long)arg6;
@property(readonly) unsigned long long purchaseHistoryContext; // @synthesize purchaseHistoryContext=_purchaseHistoryContext;
@property(readonly) NSNumber *revision; // @synthesize revision=_revision;
@property(readonly) NSArray *knownApps; // @synthesize knownApps=_knownApps;
@property(readonly) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(readonly) ACAccount *requestingAccount; // @synthesize requestingAccount=_requestingAccount;
@property(readonly) long long accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (id)_initWithKnownApps:(id)arg1 revision:(id)arg2 forAccountID:(long long)arg3 requestingAccount:(id)arg4 client:(id)arg5 purchaseHistoryContext:(unsigned long long)arg6;

@end

