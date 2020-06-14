//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface AWDHomeKitUserPresenceCompute : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _compute;
    struct {
        unsigned int timestamp:1;
        unsigned int compute:1;
    } _has;
}

@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsCompute:(id)arg1;
- (id)computeAsString:(int)arg1;
@property(nonatomic) _Bool hasCompute;
@property(nonatomic) int compute; // @synthesize compute=_compute;
@property(nonatomic) _Bool hasTimestamp;

@end

