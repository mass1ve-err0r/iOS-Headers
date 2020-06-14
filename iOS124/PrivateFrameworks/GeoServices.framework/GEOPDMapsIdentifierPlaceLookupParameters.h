//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMapsIdentifierPlaceLookupParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_mapsIds;
    int _resultProviderId;
    _Bool _enablePartialClientization;
    CDStruct_2527025c _has;
}

+ (Class)mapsIdType;
@property(nonatomic) _Bool enablePartialClientization; // @synthesize enablePartialClientization=_enablePartialClientization;
@property(retain, nonatomic) NSMutableArray *mapsIds; // @synthesize mapsIds=_mapsIds;
@property(nonatomic) int resultProviderId; // @synthesize resultProviderId=_resultProviderId;
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
@property(nonatomic) _Bool hasEnablePartialClientization;
- (id)mapsIdAtIndex:(unsigned long long)arg1;
- (unsigned long long)mapsIdsCount;
- (void)addMapsId:(id)arg1;
- (void)clearMapsIds;
@property(nonatomic) _Bool hasResultProviderId;
- (id)initWithIdentifiers:(id)arg1 resultProviderID:(int)arg2;

@end

