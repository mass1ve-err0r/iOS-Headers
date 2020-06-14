//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKSample.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKClinicalType, HKFHIRResource, NSString;

@interface HKClinicalRecord : HKSample <NSSecureCoding, NSCopying>
{
    NSString *_displayName;
    HKFHIRResource *_FHIRResource;
}

+ (_Bool)_isConcreteObjectClass;
+ (_Bool)supportsEquivalence;
+ (_Bool)supportsSecureCoding;
+ (id)clinicalRecordWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 device:(id)arg4 metadata:(id)arg5 displayName:(id)arg6 FHIRResource:(id)arg7;
- (void).cxx_destruct;
@property(readonly, copy) HKClinicalType *clinicalType;
- (id)_validateConfiguration;
- (void)_setFHIRResource:(id)arg1;
@property(readonly, copy) HKFHIRResource *FHIRResource;
- (void)_setDisplayName:(id)arg1;
@property(readonly, copy) NSString *displayName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEquivalent:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)init;

@end

