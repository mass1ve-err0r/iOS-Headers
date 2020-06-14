//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PBBridgeSupport/NSCopying-Protocol.h>

@interface PBBProtoHandshake : PBCodable <NSCopying>
{
    unsigned int _position;
    unsigned int _state;
    unsigned int _version;
}

@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
@property(nonatomic) unsigned int position; // @synthesize position=_position;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;

@end

