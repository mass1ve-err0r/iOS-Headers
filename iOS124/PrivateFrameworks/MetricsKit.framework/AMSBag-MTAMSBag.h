//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSBag.h>

#import <MetricsKit/AMSMescalBagContract-Protocol.h>
#import <MetricsKit/AMSMetricsBagContract-Protocol.h>

@class AMSBagValue, NSString;
@protocol AMSMescalBagContract, AMSMetricsBagContract;

@interface AMSBag (MTAMSBag) <AMSMetricsBagContract, AMSMescalBagContract>
+ (id)metricsAMSBagWithProfileName:(id)arg1 profileVersion:(id)arg2;
@property(readonly, nonatomic) AMSBagValue *mescalSignSapResponses;
@property(readonly, nonatomic) AMSBagValue *mescalSignSapRequests;
@property(readonly, nonatomic) AMSBagValue *mescalSignedActions;
@property(readonly, nonatomic) AMSBagValue *mescalPrimingURL;
@property(readonly, nonatomic) AMSBagValue *mescalSetupURL;
@property(readonly, nonatomic) AMSBagValue *mescalCertificateURL;
@property(readonly, nonatomic) AMSBagValue *trustedDomains;
@property(readonly, nonatomic) AMSBagValue *metricsDictionary;

// Remaining properties
@property(readonly, nonatomic) AMSBagValue *TFOSamplingPercentage;
@property(readonly, nonatomic) AMSBagValue *TFOSamplingSessionDuration;
@property(readonly, nonatomic) AMSBagValue *TLSSamplingPercentage;
@property(readonly, nonatomic) AMSBagValue *TLSSamplingSessionDuration;
@property(readonly, nonatomic) AMSBagValue *apsAllowedProductTypes;
@property(readonly, nonatomic) AMSBagValue *apsEnabledPatterns;
@property(readonly, nonatomic) AMSBagValue *apsSamplingPercent;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) AMSBagValue *guidRegexes;
@property(readonly, nonatomic) AMSBagValue *guidSchemes;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <AMSMescalBagContract> mescalContract;
@property(readonly, nonatomic) id <AMSMetricsBagContract> metricsContract;
@property(readonly, nonatomic) AMSBagValue *metricsURL;
@property(readonly, nonatomic) AMSBagValue *metricsUrl;
@property(readonly, nonatomic) AMSBagValue *storefrontSuffix;
@property(readonly) Class superclass;
@end

