//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSetAudioSourceInCarIntent-Protocol.h>

@class NSString, _INPBIntentMetadata;

@interface _INPBSetAudioSourceInCarIntent : PBCodable <_INPBSetAudioSourceInCarIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int audioSource:1;
        unsigned int relativeAudioSourceReference:1;
    } _has;
    int _audioSource;
    int _relativeAudioSourceReference;
    _INPBIntentMetadata *_intentMetadata;
}

@property(nonatomic) int relativeAudioSourceReference; // @synthesize relativeAudioSourceReference=_relativeAudioSourceReference;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(nonatomic) int audioSource; // @synthesize audioSource=_audioSource;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (int)StringAsRelativeAudioSourceReference:(id)arg1;
- (id)relativeAudioSourceReferenceAsString:(int)arg1;
@property(nonatomic) _Bool hasRelativeAudioSourceReference;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
- (int)StringAsAudioSource:(id)arg1;
- (id)audioSourceAsString:(int)arg1;
@property(nonatomic) _Bool hasAudioSource;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

