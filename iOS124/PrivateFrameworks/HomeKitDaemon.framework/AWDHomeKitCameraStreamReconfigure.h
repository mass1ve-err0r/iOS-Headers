//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface AWDHomeKitCameraStreamReconfigure : PBCodable <NSCopying>
{
    unsigned int _reconfigurationTimestamp;
    int _resolution;
    struct {
        unsigned int reconfigurationTimestamp:1;
        unsigned int resolution:1;
    } _has;
}

@property(nonatomic) unsigned int reconfigurationTimestamp; // @synthesize reconfigurationTimestamp=_reconfigurationTimestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsResolution:(id)arg1;
- (id)resolutionAsString:(int)arg1;
@property(nonatomic) _Bool hasResolution;
@property(nonatomic) int resolution; // @synthesize resolution=_resolution;
@property(nonatomic) _Bool hasReconfigurationTimestamp;

@end

