//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOCompanionRouteContext : PBCodable <NSCopying>
{
    int _origin;
    unsigned int _timestamp;
    struct {
        unsigned int origin:1;
        unsigned int timestamp:1;
    } _has;
}

+ (int)defaultOrigin;
+ (id)context;
@property(nonatomic) unsigned int timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsOrigin:(id)arg1;
- (id)originAsString:(int)arg1;
@property(nonatomic) _Bool hasOrigin;
@property(nonatomic) int origin; // @synthesize origin=_origin;
@property(nonatomic) _Bool hasTimestamp;
- (id)simpleDescription;
- (_Bool)isStaleComparedToContext:(id)arg1;
- (long long)compare:(id)arg1;
- (_Bool)isForeignOrigin;

@end

