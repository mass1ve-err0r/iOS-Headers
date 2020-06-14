//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATTaskResultObject.h"

@class NSDictionary;

@interface CRKFetchIdentitiesTaskResultObject : CATTaskResultObject
{
    NSDictionary *_deviceIdentityInfo;
    NSDictionary *_courseIdentityInfosByGroupIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *courseIdentityInfosByGroupIdentifier; // @synthesize courseIdentityInfosByGroupIdentifier=_courseIdentityInfosByGroupIdentifier;
@property(copy, nonatomic) NSDictionary *deviceIdentityInfo; // @synthesize deviceIdentityInfo=_deviceIdentityInfo;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

