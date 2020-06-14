//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

@interface GEOCountryRegionTuple : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_countryCode;
    NSString *_region;
}

@property(retain, nonatomic) NSString *region; // @synthesize region=_region;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
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
@property(readonly, nonatomic) _Bool hasRegion;
@property(readonly, nonatomic) _Bool hasCountryCode;

@end

