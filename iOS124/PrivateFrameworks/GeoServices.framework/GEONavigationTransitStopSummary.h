//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng;

@interface GEONavigationTransitStopSummary : PBCodable <NSCopying>
{
    unsigned long long _stopID;
    GEOLatLng *_coordinate;
    struct {
        unsigned int stopID:1;
    } _has;
}

@property(retain, nonatomic) GEOLatLng *coordinate; // @synthesize coordinate=_coordinate;
@property(nonatomic) unsigned long long stopID; // @synthesize stopID=_stopID;
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
@property(readonly, nonatomic) _Bool hasCoordinate;
@property(nonatomic) _Bool hasStopID;
- (id)initWithTransitStop:(id)arg1;

@end

