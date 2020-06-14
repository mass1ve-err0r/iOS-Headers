//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface SASyncGetAnchors : SABaseClientBoundCommand <SAServerBoundCommand>
{
}

+ (id)getAnchorsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getAnchors;
- (_Bool)mutatingCommand;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSArray *watchAppMetaDataList;
@property(copy, nonatomic) NSString *syncReason;
@property(copy, nonatomic) NSArray *sources;
@property(nonatomic) _Bool includeAllKnownAnchors;
@property(copy, nonatomic) NSDictionary *customVocabSources;
@property(copy, nonatomic) NSArray *appMetaDataList;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

