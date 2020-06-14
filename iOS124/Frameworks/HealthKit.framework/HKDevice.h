//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface HKDevice : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_name;
    NSString *_manufacturer;
    NSString *_model;
    NSString *_hardwareVersion;
    NSString *_firmwareVersion;
    NSString *_softwareVersion;
    NSString *_localIdentifier;
    NSString *_UDIDeviceIdentifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)localDevice;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setUDIDeviceIdentifier:(id)arg1;
@property(readonly) NSString *UDIDeviceIdentifier;
- (void)_setLocalIdentifier:(id)arg1;
@property(readonly) NSString *localIdentifier;
- (void)_setSoftwareVersion:(id)arg1;
@property(readonly) NSString *softwareVersion;
- (void)_setFirmwareVersion:(id)arg1;
@property(readonly) NSString *firmwareVersion;
- (void)_setHardwareVersion:(id)arg1;
@property(readonly) NSString *hardwareVersion;
- (void)_setModel:(id)arg1;
@property(readonly) NSString *model;
- (void)_setManufacturer:(id)arg1;
@property(readonly) NSString *manufacturer;
- (void)_setName:(id)arg1;
@property(readonly) NSString *name;
@property(readonly, nonatomic) NSString *_connectedGymDeviceFullName;
@property(readonly, nonatomic) NSString *_connectedGymDeviceTypeName;
- (_Bool)_isConnectedGymDevice;
- (unsigned long long)_fitnessMachineType;
- (void)_setFitnessMachineType:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithName:(id)arg1 manufacturer:(id)arg2 model:(id)arg3 hardwareVersion:(id)arg4 firmwareVersion:(id)arg5 softwareVersion:(id)arg6 localIdentifier:(id)arg7 UDIDeviceIdentifier:(id)arg8;
- (id)_init;
- (id)init;

@end

