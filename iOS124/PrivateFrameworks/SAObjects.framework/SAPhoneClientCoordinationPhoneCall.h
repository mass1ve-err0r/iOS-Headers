//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAPersonAttribute;

@interface SAPhoneClientCoordinationPhoneCall : SABaseClientBoundCommand
{
}

+ (id)clientCoordinationPhoneCallWithDictionary:(id)arg1 context:(id)arg2;
+ (id)clientCoordinationPhoneCall;
- (_Bool)requiresResponse;
@property(nonatomic) _Bool emergencyCall;
@property(retain, nonatomic) SAPersonAttribute *callRecipient;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

