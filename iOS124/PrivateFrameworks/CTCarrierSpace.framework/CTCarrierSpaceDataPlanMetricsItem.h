//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CTCarrierSpace/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface CTCarrierSpaceDataPlanMetricsItem : NSObject <NSSecureCoding>
{
    _Bool _capacityValid;
    NSNumber *_capacityBytes;
    long long _units;
    unsigned long long _capacity;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
@property(nonatomic) long long units; // @synthesize units=_units;
@property(nonatomic) _Bool capacityValid; // @synthesize capacityValid=_capacityValid;
@property(retain, nonatomic) NSNumber *capacityBytes; // @synthesize capacityBytes=_capacityBytes;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)init;

@end

