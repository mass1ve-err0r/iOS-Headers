//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSNumber, NSSet, NSString;

@interface HAPMetadata : HMFObject
{
    NSNumber *_version;
    NSNumber *_schemaVersion;
    NSString *_hapBaseUUIDSuffix;
    NSDictionary *_rawPlist;
    NSMutableArray *_parsedUUIDs;
    NSDictionary *_hapUnitMap;
    NSDictionary *_hapPropertyMap;
    NSDictionary *_hapCharacteristicMap;
    NSDictionary *_hapServiceMap;
    NSSet *_hapSupportsAuthDataSet;
    NSDictionary *_hapCharacteristicNameTypeMap;
    NSDictionary *_hapServiceNameTypeMap;
}

+ (id)shortenHAPType:(id)arg1 baseUUIDSuffix:(id)arg2;
+ (_Bool)setSharedInstance:(id)arg1 version:(id)arg2 schemaVersion:(id)arg3;
+ (id)getSharedInstance;
+ (id)getBuiltinInstance;
+ (void)setBuiltinInstanceWithDictionary:(id)arg1;
@property(retain, nonatomic) NSDictionary *hapServiceNameTypeMap; // @synthesize hapServiceNameTypeMap=_hapServiceNameTypeMap;
@property(retain, nonatomic) NSDictionary *hapCharacteristicNameTypeMap; // @synthesize hapCharacteristicNameTypeMap=_hapCharacteristicNameTypeMap;
@property(retain, nonatomic) NSSet *hapSupportsAuthDataSet; // @synthesize hapSupportsAuthDataSet=_hapSupportsAuthDataSet;
@property(retain, nonatomic) NSDictionary *hapServiceMap; // @synthesize hapServiceMap=_hapServiceMap;
@property(retain, nonatomic) NSDictionary *hapCharacteristicMap; // @synthesize hapCharacteristicMap=_hapCharacteristicMap;
@property(retain, nonatomic) NSDictionary *hapPropertyMap; // @synthesize hapPropertyMap=_hapPropertyMap;
@property(retain, nonatomic) NSDictionary *hapUnitMap; // @synthesize hapUnitMap=_hapUnitMap;
@property(retain, nonatomic) NSMutableArray *parsedUUIDs; // @synthesize parsedUUIDs=_parsedUUIDs;
@property(readonly, nonatomic) NSDictionary *rawPlist; // @synthesize rawPlist=_rawPlist;
@property(retain, nonatomic) NSString *hapBaseUUIDSuffix; // @synthesize hapBaseUUIDSuffix=_hapBaseUUIDSuffix;
@property(retain, nonatomic) NSNumber *schemaVersion; // @synthesize schemaVersion=_schemaVersion;
@property(retain, nonatomic) NSNumber *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)generateHAPMetadataTuplesDictionary:(id)arg1;
- (id)generateDictionary;
- (_Bool)updateRawPlist;
- (id)initWithServices:(id)arg1 characteristics:(id)arg2 units:(id)arg3 properties:(id)arg4 addAuthDataTuples:(id)arg5 hapBaseUUIDSuffix:(id)arg6;
@property(readonly, nonatomic) NSArray *hapSupportsAuthDataTuples;
@property(readonly, nonatomic) NSArray *hapServices;
@property(readonly, nonatomic) NSArray *hapCharacteristics;
@property(readonly, nonatomic) NSArray *hapProperties;
@property(readonly, nonatomic) NSArray *hapValueUnits;
- (id)hapUnitFromName:(id)arg1;
- (id)hapServiceFromType:(id)arg1;
- (id)hapServiceFromName:(id)arg1;
- (id)hapCharacteristicFromType:(id)arg1;
- (id)hapCharacteristicFromName:(id)arg1;
- (id)getDefaultServiceProperties:(id)arg1;
- (id)getDefaultCharacteristicProperties:(id)arg1;
- (id)getDefaultCharacteristicMetadata:(id)arg1;
- (_Bool)supportsAdditionalAuthorizationData:(id)arg1 forService:(id)arg2;
- (id)serviceTypeToBTLE:(id)arg1;
- (id)btleToServiceType:(id)arg1;
- (id)characteristicValueUnitOfType:(id)arg1;
- (_Bool)isMandatoryCharacteristic:(id)arg1 forService:(id)arg2;
- (id)descriptionFromCharacteristicType:(id)arg1;
- (id)descriptionFromServiceType:(id)arg1;
- (_Bool)validateMandatoryCharacteristics:(id)arg1 forService:(id)arg2;
- (_Bool)allowAssociatedService:(id)arg1;
- (_Bool)isStandardHAPUnitName:(id)arg1;
- (_Bool)isStandardHAPCharacteristicName:(id)arg1;
- (_Bool)isStandardHAPCharacteristic:(id)arg1;
- (_Bool)isStandardHAPServiceName:(id)arg1;
- (_Bool)isStandardHAPService:(id)arg1;
- (id)characteristicTypeFromUTI:(id)arg1;
- (id)characteristicUTIFromType:(id)arg1;
- (id)serviceTypeFromUTI:(id)arg1;
- (id)serviceUTIFromType:(id)arg1;
- (_Bool)parseMetadata:(id)arg1;
- (id)parseCharacteristicServiceTuples:(id)arg1;
- (id)parseServices:(id)arg1;
- (id)parseServiceCharacteristics:(id)arg1;
- (id)parseCharacteristics:(id)arg1;
- (id)parseCharacteristicValue:(id)arg1;
- (id)parseProperties:(id)arg1;
- (id)parseUnits:(id)arg1;
- (_Bool)parseVersion:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end

