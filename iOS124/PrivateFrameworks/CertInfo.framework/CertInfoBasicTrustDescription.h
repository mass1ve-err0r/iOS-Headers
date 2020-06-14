//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CertInfo/CertInfoTrustDescription-Protocol.h>

@class NSString;

@interface CertInfoBasicTrustDescription : NSObject <CertInfoTrustDescription>
{
    struct __SecTrust *_trust;
    int _action;
}

- (id)_expirationDate;
- (id)certificatePropertiesAtIndex:(unsigned long long)arg1;
- (id)certificateExpirationDateAtIndex:(unsigned long long)arg1;
- (id)certificateIssuerSummaryAtIndex:(unsigned long long)arg1;
- (id)certificateSubjectSummaryAtIndex:(unsigned long long)arg1;
- (unsigned long long)certificateCount;
- (_Bool)isRootCertificate;
- (_Bool)isTrusted;
- (id)summaryDescriptionItems;
- (id)summarySubtitle;
- (id)summaryTitle;
- (void)dealloc;
- (id)initWithTrust:(struct __SecTrust *)arg1 action:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

