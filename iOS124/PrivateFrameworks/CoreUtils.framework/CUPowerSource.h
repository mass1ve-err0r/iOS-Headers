//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface CUPowerSource : NSObject <NSSecureCoding>
{
    struct OpaqueIOPSPowerSourceID *_psID;
    _Bool _aggregate;
    _Bool _charging;
    _Bool _showChargingUI;
    _Bool _adapterSharedSource;
    _Bool _present;
    unsigned int _expectedComponents;
    int _powerState;
    int _role;
    NSString *_accessoryCategory;
    NSString *_accessoryID;
    double _chargeLevel;
    long long _familyCode;
    NSString *_groupID;
    NSArray *_LEDs;
    double _maxCapacity;
    NSString *_name;
    NSString *_partID;
    NSString *_partName;
    long long _productID;
    long long _sourceID;
    NSString *_state;
    CUPowerSource *_subLeft;
    CUPowerSource *_subRight;
    CUPowerSource *_subCase;
    CUPowerSource *_subMain;
    long long _temperature;
    NSString *_transportType;
    NSString *_type;
    long long _vendorID;
    long long _adapterErrorFlags;
    long long _adapterFamilyCode;
    NSString *_adapterName;
    long long _adapterSourceID;
    NSDictionary *_ioKitAdapterDescription;
    NSDictionary *_ioKitDescription;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool present; // @synthesize present=_present;
@property(copy, nonatomic) NSDictionary *ioKitDescription; // @synthesize ioKitDescription=_ioKitDescription;
@property(copy, nonatomic) NSDictionary *ioKitAdapterDescription; // @synthesize ioKitAdapterDescription=_ioKitAdapterDescription;
@property(nonatomic) long long adapterSourceID; // @synthesize adapterSourceID=_adapterSourceID;
@property(nonatomic) _Bool adapterSharedSource; // @synthesize adapterSharedSource=_adapterSharedSource;
@property(copy, nonatomic) NSString *adapterName; // @synthesize adapterName=_adapterName;
@property(nonatomic) long long adapterFamilyCode; // @synthesize adapterFamilyCode=_adapterFamilyCode;
@property(nonatomic) long long adapterErrorFlags; // @synthesize adapterErrorFlags=_adapterErrorFlags;
@property(nonatomic) long long vendorID; // @synthesize vendorID=_vendorID;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *transportType; // @synthesize transportType=_transportType;
@property(nonatomic) long long temperature; // @synthesize temperature=_temperature;
@property(retain, nonatomic) CUPowerSource *subMain; // @synthesize subMain=_subMain;
@property(retain, nonatomic) CUPowerSource *subCase; // @synthesize subCase=_subCase;
@property(retain, nonatomic) CUPowerSource *subRight; // @synthesize subRight=_subRight;
@property(retain, nonatomic) CUPowerSource *subLeft; // @synthesize subLeft=_subLeft;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(nonatomic) long long sourceID; // @synthesize sourceID=_sourceID;
@property(nonatomic) _Bool showChargingUI; // @synthesize showChargingUI=_showChargingUI;
@property(nonatomic) int role; // @synthesize role=_role;
@property(nonatomic) long long productID; // @synthesize productID=_productID;
@property(nonatomic) int powerState; // @synthesize powerState=_powerState;
@property(copy, nonatomic) NSString *partName; // @synthesize partName=_partName;
@property(copy, nonatomic) NSString *partID; // @synthesize partID=_partID;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) double maxCapacity; // @synthesize maxCapacity=_maxCapacity;
@property(copy, nonatomic) NSArray *LEDs; // @synthesize LEDs=_LEDs;
@property(copy, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property(nonatomic) long long familyCode; // @synthesize familyCode=_familyCode;
@property(nonatomic) unsigned int expectedComponents; // @synthesize expectedComponents=_expectedComponents;
@property(nonatomic) double chargeLevel; // @synthesize chargeLevel=_chargeLevel;
@property(nonatomic) _Bool charging; // @synthesize charging=_charging;
@property(nonatomic) _Bool aggregate; // @synthesize aggregate=_aggregate;
@property(copy, nonatomic) NSString *accessoryID; // @synthesize accessoryID=_accessoryID;
@property(copy, nonatomic) NSString *accessoryCategory; // @synthesize accessoryCategory=_accessoryCategory;
- (void).cxx_destruct;
- (unsigned int)updateWithPowerSourceDescription:(id)arg1;
- (void)updateWithPowerSource:(id)arg1;
- (unsigned int)updateWithPowerAdapterDetails:(id)arg1;
- (_Bool)isAggregateComponent;
- (void)handleSubComponentsUpdatedWithBaseSource:(id)arg1;
- (void)handleSubComponentsUpdated;
- (void)invalidate;
- (int)publish;
- (id)detailedDescription;
- (id)description;
- (unsigned long long)hash;
- (_Bool)hasAllComponents;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)_updateWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

