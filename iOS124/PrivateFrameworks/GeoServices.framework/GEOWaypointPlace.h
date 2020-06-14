//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, NSMutableArray, PBUnknownFields;

@interface GEOWaypointPlace : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOLatLng *_center;
    NSMutableArray *_roadAccessPoints;
}

+ (Class)roadAccessPointType;
@property(retain, nonatomic) NSMutableArray *roadAccessPoints; // @synthesize roadAccessPoints=_roadAccessPoints;
@property(retain, nonatomic) GEOLatLng *center; // @synthesize center=_center;
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
- (id)roadAccessPointAtIndex:(unsigned long long)arg1;
- (unsigned long long)roadAccessPointsCount;
- (void)addRoadAccessPoint:(id)arg1;
- (void)clearRoadAccessPoints;
@property(readonly, nonatomic) _Bool hasCenter;

@end

