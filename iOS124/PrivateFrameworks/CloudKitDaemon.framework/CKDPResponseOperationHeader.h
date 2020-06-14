//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPResponseOperationHeader : PBCodable <NSCopying>
{
    NSMutableArray *_assetAuthorizationResponses;
}

+ (Class)assetAuthorizationResponsesType;
@property(retain, nonatomic) NSMutableArray *assetAuthorizationResponses; // @synthesize assetAuthorizationResponses=_assetAuthorizationResponses;
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
- (id)assetAuthorizationResponsesAtIndex:(unsigned long long)arg1;
- (unsigned long long)assetAuthorizationResponsesCount;
- (void)addAssetAuthorizationResponses:(id)arg1;
- (void)clearAssetAuthorizationResponses;

@end

