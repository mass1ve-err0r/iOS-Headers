//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBatchPopularNearbySearchResult : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_popularNearbyResults;
}

+ (Class)popularNearbyResultType;
@property(retain, nonatomic) NSMutableArray *popularNearbyResults; // @synthesize popularNearbyResults=_popularNearbyResults;
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
- (id)popularNearbyResultAtIndex:(unsigned long long)arg1;
- (unsigned long long)popularNearbyResultsCount;
- (void)addPopularNearbyResult:(id)arg1;
- (void)clearPopularNearbyResults;

@end

