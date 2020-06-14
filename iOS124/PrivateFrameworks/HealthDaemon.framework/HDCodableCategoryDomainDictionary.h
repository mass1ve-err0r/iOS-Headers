//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDSyncCodable-Protocol.h>
#import <HealthDaemon/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface HDCodableCategoryDomainDictionary : PBCodable <HDSyncCodable, NSCopying>
{
    long long _category;
    NSString *_domain;
    NSMutableArray *_keyValuePairs;
    struct {
        unsigned int category:1;
    } _has;
}

+ (Class)keyValuePairsType;
@property(retain, nonatomic) NSMutableArray *keyValuePairs; // @synthesize keyValuePairs=_keyValuePairs;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(nonatomic) long long category; // @synthesize category=_category;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (id)keyValuePairsAtIndex:(unsigned long long)arg1;
- (unsigned long long)keyValuePairsCount;
- (void)addKeyValuePairs:(id)arg1;
- (void)clearKeyValuePairs;
@property(readonly, nonatomic) _Bool hasDomain;
@property(nonatomic) _Bool hasCategory;
- (long long)decodedCategory;
- (id)initWithCategory:(long long)arg1 domain:(id)arg2;
- (_Bool)_validateForInsertionWithError:(id *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

