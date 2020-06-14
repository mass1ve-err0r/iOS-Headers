//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoRegistry/NSCopying-Protocol.h>

@class NRPBDeviceCollectionDiff;

@interface NRPBDeviceCollectionHistoryEntry : PBCodable <NSCopying>
{
    double _date;
    long long _index;
    NRPBDeviceCollectionDiff *_diff;
    struct {
        unsigned int date:1;
        unsigned int index:1;
    } _has;
}

@property(retain, nonatomic) NRPBDeviceCollectionDiff *diff; // @synthesize diff=_diff;
@property(nonatomic) double date; // @synthesize date=_date;
@property(nonatomic) long long index; // @synthesize index=_index;
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
@property(readonly, nonatomic) _Bool hasDiff;
@property(nonatomic) _Bool hasDate;
@property(nonatomic) _Bool hasIndex;

@end

