//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBResumeTimerIntent-Protocol.h>

@class NSString, _INPBIntentMetadata, _INPBTimer;

@interface _INPBResumeTimerIntent : PBCodable <_INPBResumeTimerIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int resumeMultiple:1;
    } _has;
    _Bool _resumeMultiple;
    _INPBIntentMetadata *_intentMetadata;
    _INPBTimer *_targetTimer;
}

@property(retain, nonatomic) _INPBTimer *targetTimer; // @synthesize targetTimer=_targetTimer;
@property(nonatomic) _Bool resumeMultiple; // @synthesize resumeMultiple=_resumeMultiple;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(readonly, nonatomic) _Bool hasTargetTimer;
@property(nonatomic) _Bool hasResumeMultiple;
@property(readonly, nonatomic) _Bool hasIntentMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

