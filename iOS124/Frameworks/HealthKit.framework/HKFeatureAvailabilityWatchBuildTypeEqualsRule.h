//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKFeatureAvailabilityBaseRule.h>

#import <HealthKit/HKFeatureAvailabilityRule-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityWatchBuildTypeEqualsRule : HKFeatureAvailabilityBaseRule <HKFeatureAvailabilityRule>
{
    NSString *_buildType;
}

+ (id)ruleIdentifier;
@property(retain, nonatomic) NSString *buildType; // @synthesize buildType=_buildType;
- (void).cxx_destruct;
- (_Bool)evaluate;
- (void)processUserInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

