//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDQuantityDatum.h>

@class HKQuantity;

@interface HDHeartRateSensorDatum : HDQuantityDatum
{
    long long _heartRateContext;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long heartRateContext; // @synthesize heartRateContext=_heartRateContext;
@property(readonly, nonatomic) HKQuantity *heartRate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 heartRate:(id)arg3 heartRateContext:(long long)arg4 resumeContext:(id)arg5;

@end

