//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOLogFrameworkMetricItem : PBCodable <NSCopying>
{
    unsigned long long _metricItemSize;
    unsigned int _metricItemCount;
    unsigned int _metricItemIdHash;
    unsigned int _metricItemQueueTime;
    unsigned int _metricItemRetryCount;
    int _metricItemType;
    struct {
        unsigned int metricItemSize:1;
        unsigned int metricItemCount:1;
        unsigned int metricItemIdHash:1;
        unsigned int metricItemQueueTime:1;
        unsigned int metricItemRetryCount:1;
        unsigned int metricItemType:1;
    } _has;
}

@property(nonatomic) unsigned int metricItemIdHash; // @synthesize metricItemIdHash=_metricItemIdHash;
@property(nonatomic) unsigned int metricItemQueueTime; // @synthesize metricItemQueueTime=_metricItemQueueTime;
@property(nonatomic) unsigned long long metricItemSize; // @synthesize metricItemSize=_metricItemSize;
@property(nonatomic) unsigned int metricItemRetryCount; // @synthesize metricItemRetryCount=_metricItemRetryCount;
@property(nonatomic) unsigned int metricItemCount; // @synthesize metricItemCount=_metricItemCount;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasMetricItemIdHash;
@property(nonatomic) _Bool hasMetricItemQueueTime;
@property(nonatomic) _Bool hasMetricItemSize;
@property(nonatomic) _Bool hasMetricItemRetryCount;
@property(nonatomic) _Bool hasMetricItemCount;
- (int)StringAsMetricItemType:(id)arg1;
- (id)metricItemTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasMetricItemType;
@property(nonatomic) int metricItemType; // @synthesize metricItemType=_metricItemType;

@end

