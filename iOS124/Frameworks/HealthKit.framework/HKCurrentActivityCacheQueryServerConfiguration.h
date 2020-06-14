//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKQueryServerConfiguration.h>

@class NSDateComponents;

__attribute__((visibility("hidden")))
@interface HKCurrentActivityCacheQueryServerConfiguration : HKQueryServerConfiguration
{
    NSDateComponents *_statisticsIntervalComponents;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDateComponents *statisticsIntervalComponents; // @synthesize statisticsIntervalComponents=_statisticsIntervalComponents;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

