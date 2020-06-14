//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAML/SAMLBaseElement.h>

@class NSDate, NSString, SAMLNameId, SAMLSignature;

__attribute__((visibility("hidden")))
@interface SAMLLogoutRequestElement : SAMLBaseElement
{
}

+ (id)createElement:(id *)arg1;
@property(retain, nonatomic) NSString *sessionIndex;
@property(readonly, nonatomic) SAMLNameId *nameId;
@property(readonly, nonatomic) SAMLSignature *signature;
@property(retain, nonatomic) NSString *issuer;
@property(retain, nonatomic) NSDate *notOnOrAfter;
@property(retain, nonatomic) NSString *reason;
@property(readonly, nonatomic) NSString *consent;
@property(readonly, nonatomic) NSDate *issueInstant;
@property(retain, nonatomic) NSString *destination;
@property(readonly, nonatomic) NSString *identifier;

@end

