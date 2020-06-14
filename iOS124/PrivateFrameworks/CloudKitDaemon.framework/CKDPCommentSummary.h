//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPCommentedOnId, CKDPLikeInfo;

__attribute__((visibility("hidden")))
@interface CKDPCommentSummary : PBCodable <NSCopying>
{
    CKDPCommentedOnId *_identifier;
    CKDPLikeInfo *_likeInfo;
}

@property(retain, nonatomic) CKDPLikeInfo *likeInfo; // @synthesize likeInfo=_likeInfo;
@property(retain, nonatomic) CKDPCommentedOnId *identifier; // @synthesize identifier=_identifier;
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
@property(readonly, nonatomic) _Bool hasLikeInfo;
@property(readonly, nonatomic) _Bool hasIdentifier;

@end

