//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <C2/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface C2MPCloudKitOperationInfo : PBCodable <NSCopying>
{
    unsigned int _operationGroupIndex;
    NSString *_operationId;
    NSString *_operationType;
    _Bool _operationTriggered;
    struct {
        unsigned int operationGroupIndex:1;
        unsigned int operationTriggered:1;
    } _has;
}

@property(nonatomic) unsigned int operationGroupIndex; // @synthesize operationGroupIndex=_operationGroupIndex;
@property(nonatomic) _Bool operationTriggered; // @synthesize operationTriggered=_operationTriggered;
@property(retain, nonatomic) NSString *operationType; // @synthesize operationType=_operationType;
@property(retain, nonatomic) NSString *operationId; // @synthesize operationId=_operationId;
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
@property(nonatomic) _Bool hasOperationGroupIndex;
@property(nonatomic) _Bool hasOperationTriggered;
@property(readonly, nonatomic) _Bool hasOperationType;
@property(readonly, nonatomic) _Bool hasOperationId;

@end

