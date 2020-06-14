//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FCIntroductoryOffer : NSObject
{
    int _offerType;
    unsigned long long _numOfPeriods;
    NSString *_priceFormatted;
    NSString *_subscriptionPeriodInISO_8601;
}

@property(copy, nonatomic) NSString *subscriptionPeriodInISO_8601; // @synthesize subscriptionPeriodInISO_8601=_subscriptionPeriodInISO_8601;
@property(copy, nonatomic) NSString *priceFormatted; // @synthesize priceFormatted=_priceFormatted;
@property(nonatomic) unsigned long long numOfPeriods; // @synthesize numOfPeriods=_numOfPeriods;
@property(nonatomic) int offerType; // @synthesize offerType=_offerType;
- (void).cxx_destruct;
- (id)initWithOfferType:(int)arg1 priceFormatted:(id)arg2 recurringSubscriptionPeriod:(id)arg3 numOfPeriods:(unsigned long long)arg4;

@end

