//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@interface DMFFetchRestrictionsRequest : DMFTaskRequest
{
    _Bool _includeProfileRestrictions;
    unsigned long long _profileFilterFlags;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)isPermittedOnUserConnection;
+ (_Bool)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (Class)whitelistedClassForResultObject;
@property(nonatomic) unsigned long long profileFilterFlags; // @synthesize profileFilterFlags=_profileFilterFlags;
@property(nonatomic) _Bool includeProfileRestrictions; // @synthesize includeProfileRestrictions=_includeProfileRestrictions;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

