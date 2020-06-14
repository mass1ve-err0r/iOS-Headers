//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSetSeatSettingsInCarIntent-Protocol.h>

@class NSString, _INPBDataString, _INPBInteger, _INPBIntentMetadata;

@interface _INPBSetSeatSettingsInCarIntent : PBCodable <_INPBSetSeatSettingsInCarIntent, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int enableCooling:1;
        unsigned int enableHeating:1;
        unsigned int enableMassage:1;
        unsigned int relativeLevelSetting:1;
        unsigned int seat:1;
    } _has;
    _Bool _enableCooling;
    _Bool _enableHeating;
    _Bool _enableMassage;
    int _relativeLevelSetting;
    int _seat;
    _INPBDataString *_carName;
    _INPBIntentMetadata *_intentMetadata;
    _INPBInteger *_level;
}

@property(nonatomic) int seat; // @synthesize seat=_seat;
@property(nonatomic) int relativeLevelSetting; // @synthesize relativeLevelSetting=_relativeLevelSetting;
@property(retain, nonatomic) _INPBInteger *level; // @synthesize level=_level;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property(nonatomic) _Bool enableMassage; // @synthesize enableMassage=_enableMassage;
@property(nonatomic) _Bool enableHeating; // @synthesize enableHeating=_enableHeating;
@property(nonatomic) _Bool enableCooling; // @synthesize enableCooling=_enableCooling;
@property(retain, nonatomic) _INPBDataString *carName; // @synthesize carName=_carName;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (int)StringAsSeat:(id)arg1;
- (id)seatAsString:(int)arg1;
@property(nonatomic) _Bool hasSeat;
- (int)StringAsRelativeLevelSetting:(id)arg1;
- (id)relativeLevelSettingAsString:(int)arg1;
@property(nonatomic) _Bool hasRelativeLevelSetting;
@property(readonly, nonatomic) _Bool hasLevel;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(nonatomic) _Bool hasEnableMassage;
@property(nonatomic) _Bool hasEnableHeating;
@property(nonatomic) _Bool hasEnableCooling;
@property(readonly, nonatomic) _Bool hasCarName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

