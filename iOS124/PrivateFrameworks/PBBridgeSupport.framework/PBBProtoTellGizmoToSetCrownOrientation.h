//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PBBridgeSupport/NSCopying-Protocol.h>

@interface PBBProtoTellGizmoToSetCrownOrientation : PBCodable <NSCopying>
{
    _Bool _crownOrientationRight;
    struct {
        unsigned int crownOrientationRight:1;
    } _has;
}

@property(nonatomic) _Bool crownOrientationRight; // @synthesize crownOrientationRight=_crownOrientationRight;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasCrownOrientationRight;

@end

