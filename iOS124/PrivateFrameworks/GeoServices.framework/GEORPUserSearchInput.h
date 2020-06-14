//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, GEOPDAutocompleteEntry, GEOPDPlace, NSString;

@interface GEORPUserSearchInput : PBCodable <NSCopying>
{
    GEOPDAutocompleteEntry *_autocompleteEntry;
    GEOLatLng *_coordinate;
    int _origin;
    GEOPDPlace *_place;
    NSString *_searchString;
    NSString *_singleLineAddressString;
    struct {
        unsigned int origin:1;
    } _has;
}

@property(retain, nonatomic) GEOLatLng *coordinate; // @synthesize coordinate=_coordinate;
@property(retain, nonatomic) GEOPDAutocompleteEntry *autocompleteEntry; // @synthesize autocompleteEntry=_autocompleteEntry;
@property(retain, nonatomic) GEOPDPlace *place; // @synthesize place=_place;
@property(retain, nonatomic) NSString *singleLineAddressString; // @synthesize singleLineAddressString=_singleLineAddressString;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
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
- (int)StringAsOrigin:(id)arg1;
- (id)originAsString:(int)arg1;
@property(nonatomic) _Bool hasOrigin;
@property(nonatomic) int origin; // @synthesize origin=_origin;
@property(readonly, nonatomic) _Bool hasCoordinate;
@property(readonly, nonatomic) _Bool hasAutocompleteEntry;
@property(readonly, nonatomic) _Bool hasPlace;
@property(readonly, nonatomic) _Bool hasSingleLineAddressString;
@property(readonly, nonatomic) _Bool hasSearchString;

@end

