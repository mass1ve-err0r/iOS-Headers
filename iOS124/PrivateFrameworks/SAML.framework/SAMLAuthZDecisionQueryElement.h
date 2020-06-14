//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAML/SAMLBaseElement.h>

@class NSArray, NSDate, NSString, SAMLEvidence, SAMLSignature, SAMLSubject;

__attribute__((visibility("hidden")))
@interface SAMLAuthZDecisionQueryElement : SAMLBaseElement
{
}

+ (id)createElement:(id *)arg1;
@property(retain, nonatomic) SAMLEvidence *evidence;
- (void)addAction:(id)arg1;
@property(readonly, nonatomic) NSArray *actions;
@property(retain, nonatomic) SAMLSubject *subject;
@property(readonly, nonatomic) SAMLSignature *signature;
@property(retain, nonatomic) NSString *channelId;
@property(retain, nonatomic) NSString *resource;
@property(readonly, nonatomic) NSString *consent;
@property(readonly, nonatomic) NSDate *issueInstant;
@property(retain, nonatomic) NSString *destination;
@property(readonly, nonatomic) NSString *identifier;

@end

