//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MapsSupport/NSCopying-Protocol.h>

@class GEOMapItemStorage, NSString, PBUnknownFields;

@interface MSPPlaceDisplay : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOMapItemStorage *_placeMapItemStorage;
    NSString *_supersededSearchIdentifier;
}

@property(retain, nonatomic) NSString *supersededSearchIdentifier; // @synthesize supersededSearchIdentifier=_supersededSearchIdentifier;
@property(retain, nonatomic) GEOMapItemStorage *placeMapItemStorage; // @synthesize placeMapItemStorage=_placeMapItemStorage;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasSupersededSearchIdentifier;
@property(readonly, nonatomic) _Bool hasPlaceMapItemStorage;

@end

