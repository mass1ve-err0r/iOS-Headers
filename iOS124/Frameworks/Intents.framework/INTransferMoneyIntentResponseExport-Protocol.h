//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INCurrencyAmount, INDateComponentsRange, INPaymentAccount, INPaymentAmount, NSString;

@protocol INTransferMoneyIntentResponseExport <NSObject, JSExport>
@property(copy, nonatomic) INCurrencyAmount *transferFee;
@property(copy, nonatomic) NSString *transactionNote;
@property(copy, nonatomic) INDateComponentsRange *transactionScheduledDate;
@property(copy, nonatomic) INPaymentAmount *transactionAmount;
@property(copy, nonatomic) INPaymentAccount *toAccount;
@property(copy, nonatomic) INPaymentAccount *fromAccount;
@property(readonly, nonatomic) long long code;
@end

