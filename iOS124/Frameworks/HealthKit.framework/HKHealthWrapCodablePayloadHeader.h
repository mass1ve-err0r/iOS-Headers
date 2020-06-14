//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthKit/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface HKHealthWrapCodablePayloadHeader : PBCodable <NSCopying>
{
    long long _endDate;
    long long _startDate;
    NSData *_applicationData;
    NSString *_channel;
    NSMutableArray *_keyValuePairs;
    NSString *_payloadIdentifier;
    NSString *_payloadType;
    NSData *_subjectUUID;
    struct {
        unsigned int endDate:1;
        unsigned int startDate:1;
    } _has;
}

+ (Class)keyValuePairsType;
@property(retain, nonatomic) NSMutableArray *keyValuePairs; // @synthesize keyValuePairs=_keyValuePairs;
@property(retain, nonatomic) NSData *applicationData; // @synthesize applicationData=_applicationData;
@property(retain, nonatomic) NSString *payloadIdentifier; // @synthesize payloadIdentifier=_payloadIdentifier;
@property(nonatomic) long long endDate; // @synthesize endDate=_endDate;
@property(nonatomic) long long startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSData *subjectUUID; // @synthesize subjectUUID=_subjectUUID;
@property(retain, nonatomic) NSString *payloadType; // @synthesize payloadType=_payloadType;
@property(retain, nonatomic) NSString *channel; // @synthesize channel=_channel;
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
- (id)keyValuePairsAtIndex:(unsigned long long)arg1;
- (unsigned long long)keyValuePairsCount;
- (void)addKeyValuePairs:(id)arg1;
- (void)clearKeyValuePairs;
@property(readonly, nonatomic) _Bool hasApplicationData;
@property(readonly, nonatomic) _Bool hasPayloadIdentifier;
@property(nonatomic) _Bool hasEndDate;
@property(nonatomic) _Bool hasStartDate;
@property(readonly, nonatomic) _Bool hasSubjectUUID;
@property(readonly, nonatomic) _Bool hasPayloadType;
@property(readonly, nonatomic) _Bool hasChannel;

@end

