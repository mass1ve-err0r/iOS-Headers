//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PKPaymentSetupProductModel : NSObject
{
    NSMutableDictionary *_paymentSetupProducts;
}

- (void).cxx_destruct;
- (id)productsForFeatureIdentifier:(unsigned long long)arg1;
- (id)allSetupProducts;
- (void)setPaymentSetupProducts:(id)arg1 forType:(unsigned long long)arg2;
- (void)setPaymentSetupProducts:(id)arg1;
- (id)setupProductsOfType:(unsigned long long)arg1;
- (void)addPaymentSetupProducts:(id)arg1;
- (id)init;

@end
