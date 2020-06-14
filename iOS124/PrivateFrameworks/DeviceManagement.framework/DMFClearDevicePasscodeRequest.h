//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@class NSData, NSString;

@interface DMFClearDevicePasscodeRequest : DMFTaskRequest
{
    NSData *_unlockTokenData;
    NSString *_secret;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)isPermittedOnUserConnection;
+ (_Bool)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
@property(copy, nonatomic) NSString *secret; // @synthesize secret=_secret;
@property(copy, nonatomic) NSData *unlockTokenData; // @synthesize unlockTokenData=_unlockTokenData;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

