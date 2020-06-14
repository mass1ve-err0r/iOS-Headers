//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDNearestTransitParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _lineMuid;
    _Bool _isTransitOnly;
    struct {
        unsigned int lineMuid:1;
        unsigned int isTransitOnly:1;
    } _has;
}

@property(nonatomic) _Bool isTransitOnly; // @synthesize isTransitOnly=_isTransitOnly;
@property(nonatomic) unsigned long long lineMuid; // @synthesize lineMuid=_lineMuid;
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
@property(nonatomic) _Bool hasIsTransitOnly;
@property(nonatomic) _Bool hasLineMuid;

@end

