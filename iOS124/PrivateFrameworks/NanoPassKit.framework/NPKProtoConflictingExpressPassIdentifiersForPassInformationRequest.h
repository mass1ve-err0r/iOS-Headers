//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData, NSMutableArray;

@interface NPKProtoConflictingExpressPassIdentifiersForPassInformationRequest : PBRequest <NSCopying>
{
    NSData *_expressPassInformation;
    NSMutableArray *_referenceExpressPassesInformations;
}

+ (Class)referenceExpressPassesInformationType;
@property(retain, nonatomic) NSMutableArray *referenceExpressPassesInformations; // @synthesize referenceExpressPassesInformations=_referenceExpressPassesInformations;
@property(retain, nonatomic) NSData *expressPassInformation; // @synthesize expressPassInformation=_expressPassInformation;
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
- (id)referenceExpressPassesInformationAtIndex:(unsigned long long)arg1;
- (unsigned long long)referenceExpressPassesInformationsCount;
- (void)addReferenceExpressPassesInformation:(id)arg1;
- (void)clearReferenceExpressPassesInformations;
@property(readonly, nonatomic) _Bool hasExpressPassInformation;

@end

