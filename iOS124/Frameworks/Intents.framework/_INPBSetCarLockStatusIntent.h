//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSetCarLockStatusIntent-Protocol.h>

@class NSString, _INPBDataString, _INPBIntentMetadata;

@interface _INPBSetCarLockStatusIntent : PBCodable <_INPBSetCarLockStatusIntent, NSSecureCoding, NSCopying>
{
    CDStruct_b1e20226 _has;
    _Bool _locked;
    _INPBDataString *_carName;
    _INPBIntentMetadata *_intentMetadata;
}

@property(nonatomic) _Bool locked; // @synthesize locked=_locked;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(retain, nonatomic) _INPBDataString *carName; // @synthesize carName=_carName;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasLocked;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(readonly, nonatomic) _Bool hasCarName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

