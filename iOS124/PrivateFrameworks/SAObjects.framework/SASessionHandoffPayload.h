//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAHandoffPayload-Protocol.h>

@class NSData, NSString;

@interface SASessionHandoffPayload : AceObject <SAHandoffPayload>
{
}

+ (id)sessionHandoffPayloadWithDictionary:(id)arg1 context:(id)arg2;
+ (id)sessionHandoffPayload;
@property(copy, nonatomic) NSData *sessionHandoffData;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

