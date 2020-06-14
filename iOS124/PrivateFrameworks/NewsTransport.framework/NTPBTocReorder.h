//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSString;

@interface NTPBTocReorder : PBCodable <NSCopying>
{
    NSString *_feedId;
    int _feedType;
    NSData *_tocExposureId;
    int _tocNewIndex;
    int _tocOldIndex;
    struct {
        unsigned int feedType:1;
        unsigned int tocNewIndex:1;
        unsigned int tocOldIndex:1;
    } _has;
}

@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(nonatomic) int tocNewIndex; // @synthesize tocNewIndex=_tocNewIndex;
@property(nonatomic) int tocOldIndex; // @synthesize tocOldIndex=_tocOldIndex;
@property(retain, nonatomic) NSData *tocExposureId; // @synthesize tocExposureId=_tocExposureId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsFeedType:(id)arg1;
- (id)feedTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasFeedType;
@property(nonatomic) int feedType; // @synthesize feedType=_feedType;
@property(readonly, nonatomic) _Bool hasFeedId;
@property(nonatomic) _Bool hasTocNewIndex;
@property(nonatomic) _Bool hasTocOldIndex;
@property(readonly, nonatomic) _Bool hasTocExposureId;

@end

