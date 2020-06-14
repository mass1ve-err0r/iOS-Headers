//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface AWDHomeKitLocationEvent : PBCodable <NSCopying>
{
    _Bool _notifyOnEntry;
    _Bool _notifyOnExit;
    struct {
        unsigned int notifyOnEntry:1;
        unsigned int notifyOnExit:1;
    } _has;
}

@property(nonatomic) _Bool notifyOnExit; // @synthesize notifyOnExit=_notifyOnExit;
@property(nonatomic) _Bool notifyOnEntry; // @synthesize notifyOnEntry=_notifyOnEntry;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasNotifyOnExit;
@property(nonatomic) _Bool hasNotifyOnEntry;

@end

