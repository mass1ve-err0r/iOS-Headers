//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKBusinessChatContext-Protocol.h>

@class NSString, PKAccount, PKPaymentPass;

@interface PKBusinessChatAccountStateContext : NSObject <PKBusinessChatContext>
{
    PKAccount *_account;
    PKPaymentPass *_paymentPass;
}

- (void).cxx_destruct;
- (id)bodyText;
- (_Bool)requiresAuthorization;
- (id)groupParameters;
- (id)intentParameters;
- (id)businessIdentifier;
- (id)initWithAccount:(id)arg1 paymentPass:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

