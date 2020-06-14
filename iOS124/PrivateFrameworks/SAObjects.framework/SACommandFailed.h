//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SAObjects/SAClientBoundCommand-Protocol.h>
#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSArray, NSString;

@interface SACommandFailed : SABaseClientBoundCommand <SAServerBoundCommand, SAClientBoundCommand>
{
}

+ (id)commandFailedWithReason:(id)arg1;
+ (id)commandFailedWithErrorCode:(long long)arg1;
+ (id)commandFailedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)commandFailed;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *reason;
@property(nonatomic) long long errorCode;
- (id)initWithReason:(id)arg1;
- (id)initWithErrorCode:(long long)arg1;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(copy, nonatomic) NSString *appId; // @dynamic appId;
@property(copy, nonatomic) NSArray *callbacks; // @dynamic callbacks;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

