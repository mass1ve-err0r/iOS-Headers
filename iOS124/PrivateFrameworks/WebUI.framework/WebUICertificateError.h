//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WebUICertificateError : NSObject
{
}

+ (_Bool)isClientCertificateError:(long long)arg1;
+ (_Bool)isServerCertificateError:(long long)arg1;
+ (_Bool)proceedWithClientCertificateIdentity:(struct __SecIdentity *)arg1 context:(id)arg2;
+ (id)newAlertToListPossibleClientSideCertificatesWithContext:(id)arg1;
+ (id)newAlertToHandleClientSideCertificateErrorCode:(long long)arg1 context:(id)arg2;
+ (_Bool)canAuthenticateAgainstProtectionSpace:(id)arg1;
+ (_Bool)trustIncludesRevokedCertificate:(struct __SecTrust *)arg1;
+ (void)permanentlyAllowCertificateTrust:(struct __SecTrust *)arg1 host:(id)arg2;
+ (_Bool)promptForCertificateTrust:(struct __SecTrust *)arg1 host:(id)arg2;
+ (_Bool)userAllowsCertificateTrust:(struct __SecTrust *)arg1 host:(id)arg2 shouldPrompt:(_Bool)arg3;
+ (_Bool)userAllowsCertificateTrust:(struct __SecTrust *)arg1 host:(id)arg2;

@end

