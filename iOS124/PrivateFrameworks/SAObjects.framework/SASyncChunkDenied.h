//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SAObjects/SAClientBoundCommand-Protocol.h>

@class NSArray, NSString, SASyncAnchor;

@interface SASyncChunkDenied : SABaseClientBoundCommand <SAClientBoundCommand>
{
}

+ (id)chunkDeniedWithErrorCode:(long long)arg1;
+ (id)chunkDeniedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)chunkDenied;
- (_Bool)mutatingCommand;
- (_Bool)requiresResponse;
@property(nonatomic) long long errorCode;
@property(retain, nonatomic) SASyncAnchor *current;
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

