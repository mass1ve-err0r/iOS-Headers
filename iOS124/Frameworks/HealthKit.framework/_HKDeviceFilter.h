//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/_HKFilter.h>

@class NSSet;

@interface _HKDeviceFilter : _HKFilter
{
    NSSet *_devices;
    unsigned long long _operatorType;
}

+ (_Bool)supportsSecureCoding;
+ (id)_filterForInOperatorWithKeyPath:(id)arg1 value:(id)arg2 dataTypes:(id)arg3;
+ (id)_filterForComparisonWithKeyPath:(id)arg1 value:(id)arg2 operatorType:(unsigned long long)arg3 dataTypes:(id)arg4;
+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (id)filterWithDevices:(id)arg1 operatorType:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long operatorType; // @synthesize operatorType=_operatorType;
@property(readonly, nonatomic) NSSet *devices; // @synthesize devices=_devices;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)acceptsDataObject:(id)arg1;

@end

