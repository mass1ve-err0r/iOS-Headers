//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDecimalNumber, NSLocale, NSString, SKProductSubscriptionPeriod;

@interface SKProductDiscount : NSObject
{
    id _internal;
}

- (void).cxx_destruct;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)_setType:(unsigned long long)arg1;
- (void)_setIdentifier:(id)arg1;
- (void)_setSubscriptionPeriod:(id)arg1;
- (void)_setPriceLocale:(id)arg1;
- (void)_setPrice:(id)arg1;
- (void)_setPaymentMode:(unsigned long long)arg1;
- (void)_setNumberOfPeriods:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) unsigned long long paymentMode;
@property(readonly, nonatomic) unsigned long long numberOfPeriods;
@property(readonly, nonatomic) SKProductSubscriptionPeriod *subscriptionPeriod;
@property(readonly, nonatomic) NSLocale *priceLocale;
@property(readonly, nonatomic) NSDecimalNumber *price;
- (id)init;

@end

