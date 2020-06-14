//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class CLPMeta, NSMutableArray;

@interface CLPTraceCollectionRequest : PBRequest <NSCopying>
{
    NSMutableArray *_events;
    CLPMeta *_meta;
}

+ (Class)eventsType;
@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;
@property(retain, nonatomic) CLPMeta *meta; // @synthesize meta=_meta;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)eventsAtIndex:(unsigned long long)arg1;
- (unsigned long long)eventsCount;
- (void)addEvents:(id)arg1;
- (void)clearEvents;

@end

