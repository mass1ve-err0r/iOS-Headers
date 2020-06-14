//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBWidgetPersonalizationFeatureCTRPair : PBCodable <NSCopying>
{
    float _ctr;
    NSString *_personalizationFeatureId;
    struct {
        unsigned int ctr:1;
    } _has;
}

@property(nonatomic) float ctr; // @synthesize ctr=_ctr;
@property(retain, nonatomic) NSString *personalizationFeatureId; // @synthesize personalizationFeatureId=_personalizationFeatureId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasCtr;
@property(readonly, nonatomic) _Bool hasPersonalizationFeatureId;

@end

