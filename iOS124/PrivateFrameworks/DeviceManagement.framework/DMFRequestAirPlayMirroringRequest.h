//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFRequestAirPlayMirroringRequest : DMFTaskRequest
{
    _Bool _force;
    NSString *_destinationName;
    NSString *_destinationDeviceID;
    NSString *_password;
    double _scanWaitInterval;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)isPermittedOnUserConnection;
+ (_Bool)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (Class)whitelistedClassForResultObject;
@property(nonatomic) double scanWaitInterval; // @synthesize scanWaitInterval=_scanWaitInterval;
@property(nonatomic) _Bool force; // @synthesize force=_force;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *destinationDeviceID; // @synthesize destinationDeviceID=_destinationDeviceID;
@property(copy, nonatomic) NSString *destinationName; // @synthesize destinationName=_destinationName;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

