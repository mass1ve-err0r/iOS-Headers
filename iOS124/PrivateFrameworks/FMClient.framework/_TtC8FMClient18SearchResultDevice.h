//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString;

@interface _TtC8FMClient18SearchResultDevice : NSObject
{
    MISSING_TYPE *firstName;
    MISSING_TYPE *lastName;
    MISSING_TYPE *ownerDsid;
    MISSING_TYPE *serverId;
    MISSING_TYPE *deviceName;
    MISSING_TYPE *deviceClass;
    MISSING_TYPE *productName;
    MISSING_TYPE *discoveryId;
    MISSING_TYPE *productType;
    MISSING_TYPE *thisDevice;
    MISSING_TYPE *needsSafety;
    MISSING_TYPE *pairedDevices;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2 ownerDsid:(id)arg3 serverId:(id)arg4 deviceName:(id)arg5 deviceClass:(id)arg6 productName:(id)arg7 discoveryId:(id)arg8 productType:(id)arg9 thisDevice:(_Bool)arg10 needsSafety:(_Bool)arg11 pairedDevices:(id)arg12;
@property(nonatomic, readonly) NSArray *pairedDevices; // @synthesize pairedDevices;
@property(nonatomic, readonly) _Bool needsSafety; // @synthesize needsSafety;
@property(nonatomic, readonly) _Bool thisDevice; // @synthesize thisDevice;
@property(nonatomic, readonly) NSString *productType; // @synthesize productType;
@property(nonatomic, readonly) NSString *discoveryId; // @synthesize discoveryId;
@property(nonatomic, readonly) NSString *productName; // @synthesize productName;
@property(nonatomic, readonly) NSString *deviceClass; // @synthesize deviceClass;
@property(nonatomic, readonly) NSString *deviceName; // @synthesize deviceName;
@property(nonatomic, readonly) NSString *serverId; // @synthesize serverId;
@property(nonatomic, readonly) NSString *ownerDsid; // @synthesize ownerDsid;
@property(nonatomic, readonly) NSString *lastName; // @synthesize lastName;
@property(nonatomic, readonly) NSString *firstName; // @synthesize firstName;

@end

