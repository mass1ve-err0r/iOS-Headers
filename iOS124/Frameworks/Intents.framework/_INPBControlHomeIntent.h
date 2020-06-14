//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBControlHomeIntent-Protocol.h>

@class NSArray, NSString, _INPBHomeAttribute, _INPBIntentMetadata;

@interface _INPBControlHomeIntent : PBCodable <_INPBControlHomeIntent, NSSecureCoding, NSCopying>
{
    struct _has;
    _INPBHomeAttribute *_attribute;
    NSArray *_contents;
    NSArray *_entities;
    _INPBIntentMetadata *_intentMetadata;
}

+ (Class)entitiesType;
+ (Class)contentsType;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(copy, nonatomic) NSArray *entities; // @synthesize entities=_entities;
@property(copy, nonatomic) NSArray *contents; // @synthesize contents=_contents;
@property(retain, nonatomic) _INPBHomeAttribute *attribute; // @synthesize attribute=_attribute;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
- (id)entitiesAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long entitiesCount;
- (void)addEntities:(id)arg1;
- (void)clearEntities;
- (id)contentsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long contentsCount;
- (void)addContents:(id)arg1;
- (void)clearContents;
@property(readonly, nonatomic) _Bool hasAttribute;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

