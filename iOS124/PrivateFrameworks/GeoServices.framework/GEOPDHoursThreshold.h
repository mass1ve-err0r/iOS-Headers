//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDHoursThreshold : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned int _closingSoonMessageThresholdSecond;
    unsigned int _openingSoonMessageThresholdSecond;
    struct {
        unsigned int closingSoonMessageThresholdSecond:1;
        unsigned int openingSoonMessageThresholdSecond:1;
    } _has;
}

@property(nonatomic) unsigned int closingSoonMessageThresholdSecond; // @synthesize closingSoonMessageThresholdSecond=_closingSoonMessageThresholdSecond;
@property(nonatomic) unsigned int openingSoonMessageThresholdSecond; // @synthesize openingSoonMessageThresholdSecond=_openingSoonMessageThresholdSecond;
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
@property(nonatomic) _Bool hasClosingSoonMessageThresholdSecond;
@property(nonatomic) _Bool hasOpeningSoonMessageThresholdSecond;

@end

