//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKSample.h>

#import <HealthKit/_HKBinarySample-Protocol.h>

@class HKQuantity, NSArray, NSString;

@interface HKElectrocardiogram : HKSample <_HKBinarySample>
{
    struct Electrocardiogram _reading;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)_isConcreteObjectClass;
+ (id)_electrocardiogramWithStartDate:(id)arg1 device:(id)arg2 metadata:(id)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=_localizedSymptoms) NSArray *localizedSymptoms;
@property(readonly, nonatomic, getter=_localizedClassification) NSString *localizedClassification;
@property(readonly, nonatomic, getter=_symptoms) unsigned long long symptoms;
@property(readonly, nonatomic, getter=_classification) unsigned long long classification;
@property(readonly, nonatomic, getter=_averageHeartRate) HKQuantity *averageHeartRate;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)prepareForSaving:(id *)arg1;
- (id)_validateConfiguration;
- (id)payload;
- (void)_setPayload:(id)arg1;
- (void)enumerateDataForLead:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) HKQuantity *frequency;
@property(readonly, nonatomic) long long numberOfValues;
@property(readonly, nonatomic) NSArray *leadNames;
- (void)setReading:(struct Electrocardiogram)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

