//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBHomeAttributeValue-Protocol.h>

@class NSString;

@interface _INPBHomeAttributeValue : PBCodable <_INPBHomeAttributeValue, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int booleanValue:1;
        unsigned int doubleValue:1;
        unsigned int integerValue:1;
        unsigned int valueType:1;
    } _has;
    _Bool _booleanValue;
    int _valueType;
    double _doubleValue;
    long long _integerValue;
    NSString *_stringValue;
}

@property(nonatomic) int valueType; // @synthesize valueType=_valueType;
@property(copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(nonatomic) long long integerValue; // @synthesize integerValue=_integerValue;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(nonatomic) _Bool booleanValue; // @synthesize booleanValue=_booleanValue;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (int)StringAsValueType:(id)arg1;
- (id)valueTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasValueType;
@property(readonly, nonatomic) _Bool hasStringValue;
@property(nonatomic) _Bool hasIntegerValue;
@property(nonatomic) _Bool hasDoubleValue;
@property(nonatomic) _Bool hasBooleanValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

