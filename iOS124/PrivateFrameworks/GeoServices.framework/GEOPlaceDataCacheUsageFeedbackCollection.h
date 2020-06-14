//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPlaceDataCacheUsageFeedbackCollection : PBCodable <NSCopying>
{
    NSMutableArray *_cacheFeedbacks;
}

+ (Class)cacheFeedbackType;
@property(retain, nonatomic) NSMutableArray *cacheFeedbacks; // @synthesize cacheFeedbacks=_cacheFeedbacks;
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
- (id)cacheFeedbackAtIndex:(unsigned long long)arg1;
- (unsigned long long)cacheFeedbacksCount;
- (void)addCacheFeedback:(id)arg1;
- (void)clearCacheFeedbacks;

@end
