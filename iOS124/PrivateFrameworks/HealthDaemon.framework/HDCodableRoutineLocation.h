//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface HDCodableRoutineLocation : PBCodable <NSCopying>
{
    double _confidence;
    double _latitude;
    double _longitude;
    double _uncertainty;
    NSData *_geoData;
    int _locationOfInterestType;
    NSString *_uuid;
    NSMutableArray *_visits;
    struct {
        unsigned int confidence:1;
        unsigned int latitude:1;
        unsigned int longitude:1;
        unsigned int uncertainty:1;
        unsigned int locationOfInterestType:1;
    } _has;
}

+ (Class)visitsType;
@property(retain, nonatomic) NSMutableArray *visits; // @synthesize visits=_visits;
@property(retain, nonatomic) NSData *geoData; // @synthesize geoData=_geoData;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(nonatomic) double uncertainty; // @synthesize uncertainty=_uncertainty;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
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
- (id)visitsAtIndex:(unsigned long long)arg1;
- (unsigned long long)visitsCount;
- (void)addVisits:(id)arg1;
- (void)clearVisits;
@property(readonly, nonatomic) _Bool hasGeoData;
- (int)StringAsLocationOfInterestType:(id)arg1;
- (id)locationOfInterestTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasLocationOfInterestType;
@property(nonatomic) int locationOfInterestType; // @synthesize locationOfInterestType=_locationOfInterestType;
@property(readonly, nonatomic) _Bool hasUuid;
@property(nonatomic) _Bool hasConfidence;
@property(nonatomic) _Bool hasUncertainty;
@property(nonatomic) _Bool hasLongitude;
@property(nonatomic) _Bool hasLatitude;

@end

