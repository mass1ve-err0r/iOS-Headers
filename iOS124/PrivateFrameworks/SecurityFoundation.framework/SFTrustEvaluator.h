//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/NSCopying-Protocol.h>
#import <SecurityFoundation/NSSecureCoding-Protocol.h>

@class NSArray, SFRevocationPolicy, SFTrustPolicy;

@interface SFTrustEvaluator : NSObject <NSCopying, NSSecureCoding>
{
    id _trustEvaluatorInternal;
    _Bool _allowCertificateFetching;
    _Bool _trustSystemAnchorCertificates;
    SFTrustPolicy *_trustPolicy;
    SFRevocationPolicy *_revocationPolicy;
    NSArray *_applicationAnchorCertificates;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool trustSystemAnchorCertificates; // @synthesize trustSystemAnchorCertificates=_trustSystemAnchorCertificates;
@property(nonatomic) _Bool allowCertificateFetching; // @synthesize allowCertificateFetching=_allowCertificateFetching;
@property(copy, nonatomic) NSArray *applicationAnchorCertificates; // @synthesize applicationAnchorCertificates=_applicationAnchorCertificates;
@property(copy, nonatomic) SFRevocationPolicy *revocationPolicy; // @synthesize revocationPolicy=_revocationPolicy;
@property(copy, nonatomic) SFTrustPolicy *trustPolicy; // @synthesize trustPolicy=_trustPolicy;
- (void).cxx_destruct;
- (void)evaluateCertificateChain:(id)arg1 forDate:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTrustPolicy:(id)arg1 revocationPolicy:(id)arg2 applicationAnchorCertificates:(id)arg3 allowCertificateFetching:(_Bool)arg4 trustSystemAnchorCertificates:(_Bool)arg5;
- (id)initWithTrustPolicy:(id)arg1 revocationPolicy:(id)arg2;
- (id)initWithTrustPolicy:(id)arg1;
- (id)init;

@end

