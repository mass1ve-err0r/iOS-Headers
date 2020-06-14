//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString, NTPBRecordBase;

@interface NTPBChannelMembershipRecord : PBCodable <NSCopying>
{
    NTPBRecordBase *_base;
    NSString *_channelID;
    NSString *_draftArticleListID;
    NSString *_draftIssueListID;
    _Bool _canAccessDrafts;
    struct {
        unsigned int canAccessDrafts:1;
    } _has;
}

@property(retain, nonatomic) NSString *draftIssueListID; // @synthesize draftIssueListID=_draftIssueListID;
@property(retain, nonatomic) NSString *draftArticleListID; // @synthesize draftArticleListID=_draftArticleListID;
@property(nonatomic) _Bool canAccessDrafts; // @synthesize canAccessDrafts=_canAccessDrafts;
@property(retain, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
@property(retain, nonatomic) NTPBRecordBase *base; // @synthesize base=_base;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDraftIssueListID;
@property(readonly, nonatomic) _Bool hasDraftArticleListID;
@property(nonatomic) _Bool hasCanAccessDrafts;
@property(readonly, nonatomic) _Bool hasChannelID;
@property(readonly, nonatomic) _Bool hasBase;
- (void)dealloc;

@end

