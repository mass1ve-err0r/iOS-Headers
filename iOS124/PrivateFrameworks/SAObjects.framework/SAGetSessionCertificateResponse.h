//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSData;

@interface SAGetSessionCertificateResponse : SABaseClientBoundCommand
{
}

+ (id)getSessionCertificateResponseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getSessionCertificateResponse;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSData *certificate;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

