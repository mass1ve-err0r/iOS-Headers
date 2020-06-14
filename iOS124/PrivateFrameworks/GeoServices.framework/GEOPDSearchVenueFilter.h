//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDVenueIdentifier, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchVenueFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOPDVenueIdentifier *_venueFilter;
    int _venueSearchType;
    struct {
        unsigned int venueSearchType:1;
    } _has;
}

@property(retain, nonatomic) GEOPDVenueIdentifier *venueFilter; // @synthesize venueFilter=_venueFilter;
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
- (int)StringAsVenueSearchType:(id)arg1;
- (id)venueSearchTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasVenueSearchType;
@property(nonatomic) int venueSearchType; // @synthesize venueSearchType=_venueSearchType;
@property(readonly, nonatomic) _Bool hasVenueFilter;

@end

