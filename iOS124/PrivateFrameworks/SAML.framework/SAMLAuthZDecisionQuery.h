//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAML/XMLWrapperDoc.h>

@class NSString, SAMLAuthZDecisionQueryElement;

@interface SAMLAuthZDecisionQuery : XMLWrapperDoc
{
    SAMLAuthZDecisionQueryElement *_requestElement;
}

@property(retain, nonatomic) SAMLAuthZDecisionQueryElement *requestElement; // @synthesize requestElement=_requestElement;
- (void).cxx_destruct;
- (void)setResource:(id)arg1;
- (void)addAction:(id)arg1;
- (void)setSubjectFromResponse:(id)arg1;
@property(readonly, nonatomic) NSString *channelId;
- (id)initWithElement:(id)arg1 schema:(id)arg2 error:(id *)arg3;
- (id)initWithData:(id)arg1 schema:(id)arg2 error:(id *)arg3;

@end

