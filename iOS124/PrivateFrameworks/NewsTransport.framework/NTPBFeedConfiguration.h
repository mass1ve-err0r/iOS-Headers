//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBFeedConfiguration : PBCodable <NSCopying>
{
    NSString *_freeAFeedID;
    NSString *_freeBFeedID;
    NSString *_freeCFeedID;
    NSString *_paidAFeedID;
    NSString *_paidBFeedID;
    NSString *_paidCFeedID;
}

@property(retain, nonatomic) NSString *paidCFeedID; // @synthesize paidCFeedID=_paidCFeedID;
@property(retain, nonatomic) NSString *paidBFeedID; // @synthesize paidBFeedID=_paidBFeedID;
@property(retain, nonatomic) NSString *paidAFeedID; // @synthesize paidAFeedID=_paidAFeedID;
@property(retain, nonatomic) NSString *freeCFeedID; // @synthesize freeCFeedID=_freeCFeedID;
@property(retain, nonatomic) NSString *freeBFeedID; // @synthesize freeBFeedID=_freeBFeedID;
@property(retain, nonatomic) NSString *freeAFeedID; // @synthesize freeAFeedID=_freeAFeedID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasPaidCFeedID;
@property(readonly, nonatomic) _Bool hasPaidBFeedID;
@property(readonly, nonatomic) _Bool hasPaidAFeedID;
@property(readonly, nonatomic) _Bool hasFreeCFeedID;
@property(readonly, nonatomic) _Bool hasFreeBFeedID;
@property(readonly, nonatomic) _Bool hasFreeAFeedID;
- (void)dealloc;

@end

