//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPFeedbackJSONObject-Protocol.h>
#import <CoreParsec/_CPListValue-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface _CPListValue : PBCodable <_CPFeedbackJSONObject, _CPListValue, NSSecureCoding>
{
    NSArray *_values;
}

@property(copy, nonatomic) NSArray *values; // @synthesize values=_values;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)valuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)valuesCount;
- (void)addValues:(id)arg1;
- (void)clearValues;
- (_Bool)requiresQueryId;
@property(readonly, nonatomic) id feedbackJSON;
- (id)initWithFacade:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

