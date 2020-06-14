//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentCredential.h>

@class NSArray, NSString, PKCurrencyAmount, PKPaymentSetupProduct, PKServiceProviderPurchase;

@interface PKPaymentDigitalIssuanceProductCredential : PKPaymentCredential
{
    NSString *_productIdentifier;
    PKServiceProviderPurchase *_purchase;
    PKCurrencyAmount *_balance;
    PKPaymentSetupProduct *_product;
}

@property(retain, nonatomic) PKPaymentSetupProduct *product; // @synthesize product=_product;
@property(copy, nonatomic) PKCurrencyAmount *balance; // @synthesize balance=_balance;
@property(retain, nonatomic) PKServiceProviderPurchase *purchase; // @synthesize purchase=_purchase;
@property(copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *metadata;
- (void)setRequirementsResponse:(id)arg1;
- (id)initWithPaymentSetupProduct:(id)arg1 purchase:(id)arg2 balance:(id)arg3;

@end

