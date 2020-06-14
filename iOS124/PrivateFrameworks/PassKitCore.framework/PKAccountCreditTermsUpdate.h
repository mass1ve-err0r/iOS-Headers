//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>
#import <PassKitCore/PKRecordObject-Protocol.h>

@class NSString, PKCreditAccountRates, PKCurrencyAmount;

@interface PKAccountCreditTermsUpdate : NSObject <NSSecureCoding, PKRecordObject>
{
    long long _type;
    long long _initiator;
    NSString *_requestIdentifier;
    NSString *_adverseActionContentIdentifier;
    PKCurrencyAmount *_creditLimit;
    PKCreditAccountRates *_rates;
}

+ (id)recordNamePrefix;
+ (id)recordType;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) PKCreditAccountRates *rates; // @synthesize rates=_rates;
@property(retain, nonatomic) PKCurrencyAmount *creditLimit; // @synthesize creditLimit=_creditLimit;
@property(copy, nonatomic) NSString *adverseActionContentIdentifier; // @synthesize adverseActionContentIdentifier=_adverseActionContentIdentifier;
@property(copy, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(nonatomic) long long initiator; // @synthesize initiator=_initiator;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithRecord:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

