//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKFeatureAvailabilityBaseRule.h>

#import <HealthKit/HKFeatureAvailabilityRule-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityActiveWatchElectrocardiogramVersionGreaterThanRule : HKFeatureAvailabilityBaseRule <HKFeatureAvailabilityRule>
{
    CDStruct_f6aba300 _targetVersion;
}

+ (id)ruleIdentifier;
@property(nonatomic) CDStruct_f6aba300 targetVersion; // @synthesize targetVersion=_targetVersion;
- (_Bool)evaluate;
- (void)processUserInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

