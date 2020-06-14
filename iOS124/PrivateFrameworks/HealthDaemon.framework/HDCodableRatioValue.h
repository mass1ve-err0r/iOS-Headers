//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableCodedQuantity;

@interface HDCodableRatioValue : PBCodable <NSCopying>
{
    HDCodableCodedQuantity *_denominator;
    HDCodableCodedQuantity *_numerator;
}

@property(retain, nonatomic) HDCodableCodedQuantity *denominator; // @synthesize denominator=_denominator;
@property(retain, nonatomic) HDCodableCodedQuantity *numerator; // @synthesize numerator=_numerator;
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
@property(readonly, nonatomic) _Bool hasDenominator;
@property(readonly, nonatomic) _Bool hasNumerator;

@end

