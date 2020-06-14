//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoRegistry/NSCopying-Protocol.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface NRPBSwitchRecord : PBCodable <NSCopying>
{
    double _dateTimeInterval;
    NSData *_deviceIDBytes;
    int _switchIndex;
    struct {
        unsigned int dateTimeInterval:1;
        unsigned int switchIndex:1;
    } _has;
}

@property(nonatomic) int switchIndex; // @synthesize switchIndex=_switchIndex;
@property(nonatomic) double dateTimeInterval; // @synthesize dateTimeInterval=_dateTimeInterval;
@property(retain, nonatomic) NSData *deviceIDBytes; // @synthesize deviceIDBytes=_deviceIDBytes;
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
@property(nonatomic) _Bool hasSwitchIndex;
@property(nonatomic) _Bool hasDateTimeInterval;
@property(readonly, nonatomic) _Bool hasDeviceIDBytes;

@end

