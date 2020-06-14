//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDVenueBuilding, GEOPDVenueContainer, NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDFeatureBuilding : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOPDVenueBuilding *_building;
    NSMutableArray *_levels;
    GEOPDVenueContainer *_venueContainer;
}

+ (Class)levelType;
@property(retain, nonatomic) NSMutableArray *levels; // @synthesize levels=_levels;
@property(retain, nonatomic) GEOPDVenueBuilding *building; // @synthesize building=_building;
@property(retain, nonatomic) GEOPDVenueContainer *venueContainer; // @synthesize venueContainer=_venueContainer;
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
- (id)levelAtIndex:(unsigned long long)arg1;
- (unsigned long long)levelsCount;
- (void)addLevel:(id)arg1;
- (void)clearLevels;
@property(readonly, nonatomic) _Bool hasBuilding;
@property(readonly, nonatomic) _Bool hasVenueContainer;

@end

