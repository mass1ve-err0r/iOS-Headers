//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface PKPaymentDeviceRegistrationData : NSObject <NSSecureCoding>
{
    _Bool _devSigned;
    NSString *_signedAuthToken;
    NSDictionary *_secureElementStateInformation;
    NSString *_secureElementIdentifier;
    NSString *_deviceSerialNumber;
    NSArray *_additionalDeviceSerialNumbers;
    NSString *_companionSerialNumber;
    NSString *_productType;
    NSData *_platformData;
    NSData *_platformDataSignature;
    NSArray *_legacyStateInformation;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *legacyStateInformation; // @synthesize legacyStateInformation=_legacyStateInformation;
@property(nonatomic) _Bool devSigned; // @synthesize devSigned=_devSigned;
@property(copy, nonatomic) NSData *platformDataSignature; // @synthesize platformDataSignature=_platformDataSignature;
@property(copy, nonatomic) NSData *platformData; // @synthesize platformData=_platformData;
@property(copy, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(copy, nonatomic) NSString *companionSerialNumber; // @synthesize companionSerialNumber=_companionSerialNumber;
@property(copy, nonatomic) NSArray *additionalDeviceSerialNumbers; // @synthesize additionalDeviceSerialNumbers=_additionalDeviceSerialNumbers;
@property(copy, nonatomic) NSString *deviceSerialNumber; // @synthesize deviceSerialNumber=_deviceSerialNumber;
@property(copy, nonatomic) NSString *secureElementIdentifier; // @synthesize secureElementIdentifier=_secureElementIdentifier;
@property(copy, nonatomic) NSDictionary *secureElementStateInformation; // @synthesize secureElementStateInformation=_secureElementStateInformation;
@property(copy, nonatomic) NSString *signedAuthToken; // @synthesize signedAuthToken=_signedAuthToken;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

