//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricsKit/NSObject-Protocol.h>

@class AMSBagValue;
@protocol AMSMescalBagContract, AMSMetricsBagContract;

@protocol AMSURLBagContract <NSObject>

@optional
@property(readonly, nonatomic) AMSBagValue *metricsURL;
@property(readonly, nonatomic) id <AMSMetricsBagContract> metricsContract;
@property(readonly, nonatomic) AMSBagValue *trustedDomains;
@property(readonly, nonatomic) AMSBagValue *TFOSamplingSessionDuration;
@property(readonly, nonatomic) AMSBagValue *TFOSamplingPercentage;
@property(readonly, nonatomic) AMSBagValue *TLSSamplingSessionDuration;
@property(readonly, nonatomic) AMSBagValue *TLSSamplingPercentage;
@property(readonly, nonatomic) AMSBagValue *storefrontSuffix;
@property(readonly, nonatomic) id <AMSMescalBagContract> mescalContract;
@property(readonly, nonatomic) AMSBagValue *guidSchemes;
@property(readonly, nonatomic) AMSBagValue *guidRegexes;
@property(readonly, nonatomic) AMSBagValue *apsAllowedProductTypes;
@property(readonly, nonatomic) AMSBagValue *apsSamplingPercent;
@property(readonly, nonatomic) AMSBagValue *apsEnabledPatterns;
@end

