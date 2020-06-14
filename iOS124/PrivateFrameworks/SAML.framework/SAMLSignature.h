//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAML/SAMLBaseElement.h>

@class NSData, NSString, SAMLKeyInfo, SAMLSignedInfo;

__attribute__((visibility("hidden")))
@interface SAMLSignature : SAMLBaseElement
{
}

+ (id)createElement:(id *)arg1;
- (_Bool)isValid;
@property(readonly, nonatomic) SAMLKeyInfo *keyInfo;
@property(readonly, nonatomic) NSString *signatureValueId;
@property(readonly, nonatomic) NSData *signatureValue;
@property(readonly, nonatomic) SAMLSignedInfo *signedInfo;
@property(readonly, nonatomic) NSString *identifier;

@end

