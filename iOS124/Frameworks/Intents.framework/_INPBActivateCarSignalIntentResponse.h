//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBActivateCarSignalIntentResponse-Protocol.h>

@class NSString;

@interface _INPBActivateCarSignalIntentResponse : PBCodable <_INPBActivateCarSignalIntentResponse, NSSecureCoding, NSCopying>
{
    CDStruct_95bda58d _signals;
    struct _has;
}

- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (int)StringAsSignals:(id)arg1;
- (id)signalsAsString:(int)arg1;
- (int)signalsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long signalsCount;
- (void)addSignals:(int)arg1;
- (void)clearSignals;
@property(readonly, nonatomic) int *signals;
- (void)setSignals:(int *)arg1 count:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

