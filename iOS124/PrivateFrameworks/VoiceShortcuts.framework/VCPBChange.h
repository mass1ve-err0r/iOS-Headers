//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <VoiceShortcuts/NSCopying-Protocol.h>
#import <VoiceShortcuts/SYChange-Protocol.h>

@class NSData, NSString;

@interface VCPBChange : PBCodable <SYChange, NSCopying>
{
    int _changeType;
    NSData *_message;
    int _messageType;
    NSString *_uniqueID;
}

@property(retain, nonatomic) NSData *message; // @synthesize message=_message;
@property(retain, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(nonatomic) int changeType; // @synthesize changeType=_changeType;
@property(nonatomic) int messageType; // @synthesize messageType=_messageType;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (int)StringAsChangeType:(id)arg1;
- (id)changeTypeAsString:(int)arg1;
- (int)StringAsMessageType:(id)arg1;
- (id)messageTypeAsString:(int)arg1;
- (id)initWithVoiceShortcutChange:(id)arg1;
@property(readonly, nonatomic) NSString *sequencer;
@property(readonly, nonatomic) NSString *objectIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

