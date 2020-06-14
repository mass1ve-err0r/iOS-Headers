//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMotion/NSCopying-Protocol.h>
#import <CoreMotion/NSSecureCoding-Protocol.h>

@class CMAttitude, NSString;

@interface CMDeviceMotionLite : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _usingCompass;
    float _gyroTemperature;
    float _compassTemperature;
    CMAttitude *_attitude;
    NSString *_physicalDeviceUniqueID;
    unsigned long long _machTimestamp;
    CDStruct_31142d93 _gravity;
    CDStruct_31142d93 _userAcceleration;
    CDStruct_31142d93 _rotationRate;
    CDStruct_31142d93 _rawAcceleration;
    CDStruct_31142d93 _rawRotationRate;
    CDStruct_31142d93 _rawMagneticField;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) CDStruct_31142d93 rawMagneticField; // @synthesize rawMagneticField=_rawMagneticField;
@property(readonly, nonatomic) float compassTemperature; // @synthesize compassTemperature=_compassTemperature;
@property(readonly, nonatomic) float gyroTemperature; // @synthesize gyroTemperature=_gyroTemperature;
@property(readonly, nonatomic) unsigned long long machTimestamp; // @synthesize machTimestamp=_machTimestamp;
@property(readonly, nonatomic) CDStruct_31142d93 rawRotationRate; // @synthesize rawRotationRate=_rawRotationRate;
@property(readonly, nonatomic) CDStruct_31142d93 rawAcceleration; // @synthesize rawAcceleration=_rawAcceleration;
@property(readonly, copy, nonatomic) NSString *physicalDeviceUniqueID; // @synthesize physicalDeviceUniqueID=_physicalDeviceUniqueID;
@property(readonly, nonatomic, getter=isUsingCompass) _Bool usingCompass; // @synthesize usingCompass=_usingCompass;
@property(readonly, nonatomic) CDStruct_31142d93 rotationRate; // @synthesize rotationRate=_rotationRate;
@property(readonly, nonatomic) CMAttitude *attitude; // @synthesize attitude=_attitude;
@property(readonly, nonatomic) CDStruct_31142d93 userAcceleration; // @synthesize userAcceleration=_userAcceleration;
@property(readonly, nonatomic) CDStruct_31142d93 gravity; // @synthesize gravity=_gravity;
@property(readonly, nonatomic) float tilt;
@property(readonly, nonatomic) float tip;
- (id)debugDescription;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceMotionLite:(CDStruct_946f299f)arg1 andDeviceID:(id)arg2;

@end

