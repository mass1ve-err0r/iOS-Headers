//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class _MRVirtualTouchEventProtobuf;

@interface _MRSendVirtualTouchEventMessageProtobuf : PBCodable <NSCopying>
{
    unsigned long long _virtualDeviceID;
    _MRVirtualTouchEventProtobuf *_event;
    struct {
        unsigned int virtualDeviceID:1;
    } _has;
}

@property(retain, nonatomic) _MRVirtualTouchEventProtobuf *event; // @synthesize event=_event;
@property(nonatomic) unsigned long long virtualDeviceID; // @synthesize virtualDeviceID=_virtualDeviceID;
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
@property(readonly, nonatomic) _Bool hasEvent;
@property(nonatomic) _Bool hasVirtualDeviceID;

@end

