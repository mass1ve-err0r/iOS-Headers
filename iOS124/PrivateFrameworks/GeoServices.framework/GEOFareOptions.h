//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOFareOptions : PBCodable <NSCopying>
{
    int _paymentType;
    int _preferredSurchargeType;
    struct {
        unsigned int paymentType:1;
        unsigned int preferredSurchargeType:1;
    } _has;
}

@property(nonatomic) int preferredSurchargeType; // @synthesize preferredSurchargeType=_preferredSurchargeType;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsPaymentType:(id)arg1;
- (id)paymentTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasPaymentType;
@property(nonatomic) int paymentType; // @synthesize paymentType=_paymentType;
@property(nonatomic) _Bool hasPreferredSurchargeType;

@end

