//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableEntityIdentifier;

@interface HDCodableNanoSyncAnchor : PBCodable <NSCopying>
{
    long long _anchor;
    HDCodableEntityIdentifier *_entityIdentifier;
    int _objectType;
    struct {
        unsigned int anchor:1;
        unsigned int objectType:1;
    } _has;
}

@property(retain, nonatomic) HDCodableEntityIdentifier *entityIdentifier; // @synthesize entityIdentifier=_entityIdentifier;
@property(nonatomic) long long anchor; // @synthesize anchor=_anchor;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasEntityIdentifier;
@property(nonatomic) _Bool hasAnchor;
- (int)StringAsObjectType:(id)arg1;
- (id)objectTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasObjectType;
@property(nonatomic) int objectType; // @synthesize objectType=_objectType;
- (id)nanoSyncDescription;

@end

