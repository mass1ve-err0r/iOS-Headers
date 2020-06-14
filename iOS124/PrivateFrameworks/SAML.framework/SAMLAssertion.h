//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAML/SAMLBaseElement.h>

@class NSArray, NSDate, NSString, SAMLAdvice, SAMLAuthNStatement, SAMLConditions, SAMLSignature, SAMLSubject;

__attribute__((visibility("hidden")))
@interface SAMLAssertion : SAMLBaseElement
{
}

+ (id)createElement:(id *)arg1;
- (id)authorizationForResource:(id)arg1;
- (_Bool)isValidForRequestor:(id)arg1;
- (_Bool)meetsConditions:(id *)arg1;
- (_Bool)isValid:(id *)arg1;
@property(readonly, nonatomic) NSArray *authorizations;
@property(readonly, nonatomic) SAMLAuthNStatement *authentication;
@property(readonly, nonatomic) NSArray *samlAttributes;
@property(readonly, nonatomic) SAMLAdvice *advice;
@property(readonly, nonatomic) SAMLConditions *conditions;
@property(readonly, nonatomic) SAMLSubject *subject;
@property(readonly, nonatomic) SAMLSignature *signature;
@property(readonly, nonatomic) NSString *issuer;
@property(readonly, nonatomic) NSDate *issueInstant;
@property(readonly, nonatomic) NSString *identifier;

@end

