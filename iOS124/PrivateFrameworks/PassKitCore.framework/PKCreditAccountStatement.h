//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>
#import <PassKitCore/PKRecordObject-Protocol.h>

@class NSDate, NSDecimalNumber, NSString;

@interface PKCreditAccountStatement : NSObject <NSSecureCoding, PKRecordObject, NSCopying>
{
    NSString *_identifier;
    NSDate *_openingDate;
    NSDate *_closingDate;
    NSDate *_paymentDueDate;
    NSString *_currencyCode;
    NSDecimalNumber *_statementBalance;
    NSDecimalNumber *_minimumDue;
    NSDecimalNumber *_purchases;
    NSDecimalNumber *_feesCharged;
    NSDecimalNumber *_interestCharged;
    NSDecimalNumber *_balanceTransfers;
    NSDecimalNumber *_paymentsAndCredits;
    NSDecimalNumber *_payments;
    NSDecimalNumber *_credits;
    NSDecimalNumber *_rewardsBalance;
    NSDecimalNumber *_rewardsEarned;
    NSDecimalNumber *_rewardsRedeemed;
    NSDecimalNumber *_rewardsYTD;
    NSDecimalNumber *_rewardsLifetime;
}

+ (id)recordNamePrefix;
+ (id)recordType;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDecimalNumber *rewardsLifetime; // @synthesize rewardsLifetime=_rewardsLifetime;
@property(copy, nonatomic) NSDecimalNumber *rewardsYTD; // @synthesize rewardsYTD=_rewardsYTD;
@property(copy, nonatomic) NSDecimalNumber *rewardsRedeemed; // @synthesize rewardsRedeemed=_rewardsRedeemed;
@property(copy, nonatomic) NSDecimalNumber *rewardsEarned; // @synthesize rewardsEarned=_rewardsEarned;
@property(copy, nonatomic) NSDecimalNumber *rewardsBalance; // @synthesize rewardsBalance=_rewardsBalance;
@property(copy, nonatomic) NSDecimalNumber *credits; // @synthesize credits=_credits;
@property(copy, nonatomic) NSDecimalNumber *payments; // @synthesize payments=_payments;
@property(copy, nonatomic) NSDecimalNumber *paymentsAndCredits; // @synthesize paymentsAndCredits=_paymentsAndCredits;
@property(copy, nonatomic) NSDecimalNumber *balanceTransfers; // @synthesize balanceTransfers=_balanceTransfers;
@property(copy, nonatomic) NSDecimalNumber *interestCharged; // @synthesize interestCharged=_interestCharged;
@property(copy, nonatomic) NSDecimalNumber *feesCharged; // @synthesize feesCharged=_feesCharged;
@property(copy, nonatomic) NSDecimalNumber *purchases; // @synthesize purchases=_purchases;
@property(copy, nonatomic) NSDecimalNumber *minimumDue; // @synthesize minimumDue=_minimumDue;
@property(copy, nonatomic) NSDecimalNumber *statementBalance; // @synthesize statementBalance=_statementBalance;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(copy, nonatomic) NSDate *paymentDueDate; // @synthesize paymentDueDate=_paymentDueDate;
@property(copy, nonatomic) NSDate *closingDate; // @synthesize closingDate=_closingDate;
@property(copy, nonatomic) NSDate *openingDate; // @synthesize openingDate=_openingDate;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithRecord:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

