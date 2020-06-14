//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturb/NSCopying-Protocol.h>
#import <DoNotDisturb/NSMutableCopying-Protocol.h>
#import <DoNotDisturb/NSSecureCoding-Protocol.h>

@class DNDScheduleTimePeriod;

@interface DNDScheduleSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    unsigned long long _scheduleEnabledSetting;
    DNDScheduleTimePeriod *_timePeriod;
    unsigned long long _bedtimeBehaviorEnabledSetting;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long bedtimeBehaviorEnabledSetting; // @synthesize bedtimeBehaviorEnabledSetting=_bedtimeBehaviorEnabledSetting;
@property(readonly, copy, nonatomic) DNDScheduleTimePeriod *timePeriod; // @synthesize timePeriod=_timePeriod;
@property(readonly, nonatomic) unsigned long long scheduleEnabledSetting; // @synthesize scheduleEnabledSetting=_scheduleEnabledSetting;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithScheduleEnabledSetting:(unsigned long long)arg1 timePeriod:(id)arg2 bedtimeBehaviorEnabledSetting:(unsigned long long)arg3;
- (id)_initWithSettings:(id)arg1;
- (id)init;

@end

