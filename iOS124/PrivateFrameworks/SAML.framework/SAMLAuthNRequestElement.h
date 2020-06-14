//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAML/SAMLBaseElement.h>

@class NSDate, NSString, SAMLConditions, SAMLNameIdPolicy, SAMLRequestedAuthNContext, SAMLScoping, SAMLSignature, SAMLSubject;

__attribute__((visibility("hidden")))
@interface SAMLAuthNRequestElement : SAMLBaseElement
{
}

+ (id)createElement:(id *)arg1;
@property(retain, nonatomic) SAMLScoping *scoping;
@property(readonly, nonatomic) SAMLRequestedAuthNContext *context;
@property(retain, nonatomic) SAMLConditions *conditions;
@property(retain, nonatomic) SAMLNameIdPolicy *nameIdPolicy;
@property(retain, nonatomic) SAMLSubject *subject;
@property(readonly, nonatomic) SAMLSignature *signature;
@property(retain, nonatomic) NSString *issuer;
@property(retain, nonatomic) NSString *providerName;
@property(nonatomic) _Bool isPassive;
@property(nonatomic) _Bool forceAuthN;
@property(readonly, nonatomic) NSString *consent;
@property(retain, nonatomic) NSString *destination;
@property(readonly, nonatomic) NSDate *issueInstant;
@property(readonly, nonatomic) NSString *identifier;

@end

