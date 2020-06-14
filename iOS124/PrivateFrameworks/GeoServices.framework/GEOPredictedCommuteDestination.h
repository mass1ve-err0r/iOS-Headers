//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOPredictedCommuteDestination : PBCodable <NSCopying>
{
    double _confidenceScore;
    int _destinationType;
    _Bool _chosen;
    struct {
        unsigned int confidenceScore:1;
        unsigned int destinationType:1;
        unsigned int chosen:1;
    } _has;
}

@property(nonatomic) _Bool chosen; // @synthesize chosen=_chosen;
@property(nonatomic) double confidenceScore; // @synthesize confidenceScore=_confidenceScore;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasChosen;
@property(nonatomic) _Bool hasConfidenceScore;
- (int)StringAsDestinationType:(id)arg1;
- (id)destinationTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasDestinationType;
@property(nonatomic) int destinationType; // @synthesize destinationType=_destinationType;

@end

