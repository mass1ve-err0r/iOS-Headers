//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBUserActivityInfo-Protocol.h>

@class NSData, NSString, _SFPBURL;

@interface _SFPBUserActivityInfo : PBCodable <_SFPBUserActivityInfo, NSSecureCoding>
{
    int _valueType;
    NSString *_key;
    NSString *_stringValue;
    _SFPBURL *_urlValue;
}

@property(retain, nonatomic) _SFPBURL *urlValue; // @synthesize urlValue=_urlValue;
@property(copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(nonatomic) int valueType; // @synthesize valueType=_valueType;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

