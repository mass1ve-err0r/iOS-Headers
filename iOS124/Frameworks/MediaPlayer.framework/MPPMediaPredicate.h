//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class MPPCompoundPredicate, MPPConditionalPredicate, MPPPersistentIDsPredicate, MPPPropertyPredicate, MPPSearchStringPredicate;

@interface MPPMediaPredicate : PBCodable <NSCopying>
{
    MPPCompoundPredicate *_compoundPredicate;
    MPPConditionalPredicate *_conditionalPredicate;
    MPPPersistentIDsPredicate *_persistentIDsPredicate;
    MPPPropertyPredicate *_propertyPredicate;
    MPPSearchStringPredicate *_searchStringPredicate;
    int _type;
    struct {
        unsigned int type:1;
    } _has;
}

@property(retain, nonatomic) MPPSearchStringPredicate *searchStringPredicate; // @synthesize searchStringPredicate=_searchStringPredicate;
@property(retain, nonatomic) MPPPersistentIDsPredicate *persistentIDsPredicate; // @synthesize persistentIDsPredicate=_persistentIDsPredicate;
@property(retain, nonatomic) MPPConditionalPredicate *conditionalPredicate; // @synthesize conditionalPredicate=_conditionalPredicate;
@property(retain, nonatomic) MPPCompoundPredicate *compoundPredicate; // @synthesize compoundPredicate=_compoundPredicate;
@property(retain, nonatomic) MPPPropertyPredicate *propertyPredicate; // @synthesize propertyPredicate=_propertyPredicate;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasSearchStringPredicate;
@property(readonly, nonatomic) _Bool hasPersistentIDsPredicate;
@property(readonly, nonatomic) _Bool hasConditionalPredicate;
@property(readonly, nonatomic) _Bool hasCompoundPredicate;
@property(readonly, nonatomic) _Bool hasPropertyPredicate;
@property(nonatomic) _Bool hasType;
- (void)dealloc;

@end

