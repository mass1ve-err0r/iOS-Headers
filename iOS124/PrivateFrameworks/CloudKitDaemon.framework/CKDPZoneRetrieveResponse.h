//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPZoneRetrieveResponse : PBCodable <NSCopying>
{
    NSMutableArray *_zoneSummarys;
}

+ (Class)zoneSummaryType;
@property(retain, nonatomic) NSMutableArray *zoneSummarys; // @synthesize zoneSummarys=_zoneSummarys;
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
- (id)zoneSummaryAtIndex:(unsigned long long)arg1;
- (unsigned long long)zoneSummarysCount;
- (void)addZoneSummary:(id)arg1;
- (void)clearZoneSummarys;

@end

