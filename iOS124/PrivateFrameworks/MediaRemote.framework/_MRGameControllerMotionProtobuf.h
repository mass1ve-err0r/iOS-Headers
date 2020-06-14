//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class _MRGameControllerAccelerationProtobuf;

@interface _MRGameControllerMotionProtobuf : PBCodable <NSCopying>
{
    _MRGameControllerAccelerationProtobuf *_attitude;
    _MRGameControllerAccelerationProtobuf *_gravity;
    _MRGameControllerAccelerationProtobuf *_rotation;
    _MRGameControllerAccelerationProtobuf *_userAcceleration;
}

@property(retain, nonatomic) _MRGameControllerAccelerationProtobuf *rotation; // @synthesize rotation=_rotation;
@property(retain, nonatomic) _MRGameControllerAccelerationProtobuf *attitude; // @synthesize attitude=_attitude;
@property(retain, nonatomic) _MRGameControllerAccelerationProtobuf *userAcceleration; // @synthesize userAcceleration=_userAcceleration;
@property(retain, nonatomic) _MRGameControllerAccelerationProtobuf *gravity; // @synthesize gravity=_gravity;
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
@property(readonly, nonatomic) _Bool hasRotation;
@property(readonly, nonatomic) _Bool hasAttitude;
@property(readonly, nonatomic) _Bool hasUserAcceleration;
@property(readonly, nonatomic) _Bool hasGravity;

@end

