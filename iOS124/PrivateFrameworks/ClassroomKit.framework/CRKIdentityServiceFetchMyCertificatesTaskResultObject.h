//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATTaskResultObject.h"

@class CRKIdentityMarkedCertificate;

@interface CRKIdentityServiceFetchMyCertificatesTaskResultObject : CATTaskResultObject
{
    CRKIdentityMarkedCertificate *_activeMarkedCertificate;
    CRKIdentityMarkedCertificate *_stagedMarkedCertificate;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) CRKIdentityMarkedCertificate *stagedMarkedCertificate; // @synthesize stagedMarkedCertificate=_stagedMarkedCertificate;
@property(copy, nonatomic) CRKIdentityMarkedCertificate *activeMarkedCertificate; // @synthesize activeMarkedCertificate=_activeMarkedCertificate;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

