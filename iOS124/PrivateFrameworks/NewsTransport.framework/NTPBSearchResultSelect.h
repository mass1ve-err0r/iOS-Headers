//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NTPBSearchResultSelect : PBCodable <NSCopying>
{
    NSMutableArray *_articleResultArticleIds;
    NSString *_campaignId;
    NSString *_campaignType;
    NSMutableArray *_channelResultFeedIds;
    NSString *_creativeId;
    NSMutableArray *_nonSelectedResultFeedIds;
    int _searchExecutionMethod;
    int _searchLocation;
    int _searchResultSelectLocation;
    NSMutableArray *_searchResults;
    NSString *_searchString;
    int _selectedResultActionType;
    NSString *_selectedResultArticleId;
    NSString *_selectedResultFeedId;
    int _selectedResultRankInSection;
    int _selectedResultSection;
    NSString *_selectedResultString;
    int _selectedResultType;
    NSString *_storeFrontId;
    NSString *_topResultArticleId;
    NSString *_topResultChannelId;
    NSString *_topResultFeedId;
    NSString *_topResultTopicId;
    NSMutableArray *_topicResultFeedIds;
    int _totalResults;
    int _totalResultsInSelectedSection;
    _Bool _didSelectResult;
    _Bool _selectedResultShowMore;
    struct {
        unsigned int searchExecutionMethod:1;
        unsigned int searchLocation:1;
        unsigned int searchResultSelectLocation:1;
        unsigned int selectedResultActionType:1;
        unsigned int selectedResultRankInSection:1;
        unsigned int selectedResultSection:1;
        unsigned int selectedResultType:1;
        unsigned int totalResults:1;
        unsigned int totalResultsInSelectedSection:1;
        unsigned int didSelectResult:1;
        unsigned int selectedResultShowMore:1;
    } _has;
}

+ (Class)articleResultArticleIdsType;
+ (Class)channelResultFeedIdsType;
+ (Class)topicResultFeedIdsType;
+ (Class)searchResultsType;
+ (Class)nonSelectedResultFeedIdType;
@property(retain, nonatomic) NSString *topResultTopicId; // @synthesize topResultTopicId=_topResultTopicId;
@property(retain, nonatomic) NSString *topResultChannelId; // @synthesize topResultChannelId=_topResultChannelId;
@property(retain, nonatomic) NSString *topResultArticleId; // @synthesize topResultArticleId=_topResultArticleId;
@property(retain, nonatomic) NSMutableArray *articleResultArticleIds; // @synthesize articleResultArticleIds=_articleResultArticleIds;
@property(retain, nonatomic) NSString *selectedResultArticleId; // @synthesize selectedResultArticleId=_selectedResultArticleId;
@property(retain, nonatomic) NSString *creativeId; // @synthesize creativeId=_creativeId;
@property(retain, nonatomic) NSString *campaignType; // @synthesize campaignType=_campaignType;
@property(retain, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
@property(retain, nonatomic) NSString *storeFrontId; // @synthesize storeFrontId=_storeFrontId;
@property(retain, nonatomic) NSMutableArray *channelResultFeedIds; // @synthesize channelResultFeedIds=_channelResultFeedIds;
@property(retain, nonatomic) NSMutableArray *topicResultFeedIds; // @synthesize topicResultFeedIds=_topicResultFeedIds;
@property(retain, nonatomic) NSString *topResultFeedId; // @synthesize topResultFeedId=_topResultFeedId;
@property(retain, nonatomic) NSMutableArray *searchResults; // @synthesize searchResults=_searchResults;
@property(nonatomic) _Bool didSelectResult; // @synthesize didSelectResult=_didSelectResult;
@property(retain, nonatomic) NSMutableArray *nonSelectedResultFeedIds; // @synthesize nonSelectedResultFeedIds=_nonSelectedResultFeedIds;
@property(nonatomic) int totalResultsInSelectedSection; // @synthesize totalResultsInSelectedSection=_totalResultsInSelectedSection;
@property(nonatomic) int totalResults; // @synthesize totalResults=_totalResults;
@property(nonatomic) _Bool selectedResultShowMore; // @synthesize selectedResultShowMore=_selectedResultShowMore;
@property(nonatomic) int selectedResultRankInSection; // @synthesize selectedResultRankInSection=_selectedResultRankInSection;
@property(retain, nonatomic) NSString *selectedResultFeedId; // @synthesize selectedResultFeedId=_selectedResultFeedId;
@property(retain, nonatomic) NSString *selectedResultString; // @synthesize selectedResultString=_selectedResultString;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasTopResultTopicId;
@property(readonly, nonatomic) _Bool hasTopResultChannelId;
@property(readonly, nonatomic) _Bool hasTopResultArticleId;
- (id)articleResultArticleIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)articleResultArticleIdsCount;
- (void)addArticleResultArticleIds:(id)arg1;
- (void)clearArticleResultArticleIds;
@property(readonly, nonatomic) _Bool hasSelectedResultArticleId;
@property(readonly, nonatomic) _Bool hasCreativeId;
@property(readonly, nonatomic) _Bool hasCampaignType;
@property(readonly, nonatomic) _Bool hasCampaignId;
@property(nonatomic) _Bool hasSearchResultSelectLocation;
@property(nonatomic) int searchResultSelectLocation; // @synthesize searchResultSelectLocation=_searchResultSelectLocation;
@property(readonly, nonatomic) _Bool hasStoreFrontId;
- (id)channelResultFeedIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)channelResultFeedIdsCount;
- (void)addChannelResultFeedIds:(id)arg1;
- (void)clearChannelResultFeedIds;
- (id)topicResultFeedIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topicResultFeedIdsCount;
- (void)addTopicResultFeedIds:(id)arg1;
- (void)clearTopicResultFeedIds;
@property(readonly, nonatomic) _Bool hasTopResultFeedId;
- (id)searchResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)searchResultsCount;
- (void)addSearchResults:(id)arg1;
- (void)clearSearchResults;
@property(nonatomic) _Bool hasDidSelectResult;
- (id)nonSelectedResultFeedIdAtIndex:(unsigned long long)arg1;
- (unsigned long long)nonSelectedResultFeedIdsCount;
- (void)addNonSelectedResultFeedId:(id)arg1;
- (void)clearNonSelectedResultFeedIds;
@property(nonatomic) _Bool hasTotalResultsInSelectedSection;
@property(nonatomic) _Bool hasTotalResults;
- (int)StringAsSearchExecutionMethod:(id)arg1;
- (id)searchExecutionMethodAsString:(int)arg1;
@property(nonatomic) _Bool hasSearchExecutionMethod;
@property(nonatomic) int searchExecutionMethod; // @synthesize searchExecutionMethod=_searchExecutionMethod;
@property(nonatomic) _Bool hasSelectedResultShowMore;
@property(nonatomic) _Bool hasSelectedResultRankInSection;
@property(readonly, nonatomic) _Bool hasSelectedResultFeedId;
@property(readonly, nonatomic) _Bool hasSelectedResultString;
@property(nonatomic) _Bool hasSelectedResultSection;
@property(nonatomic) int selectedResultSection; // @synthesize selectedResultSection=_selectedResultSection;
@property(nonatomic) _Bool hasSelectedResultActionType;
@property(nonatomic) int selectedResultActionType; // @synthesize selectedResultActionType=_selectedResultActionType;
@property(nonatomic) _Bool hasSelectedResultType;
@property(nonatomic) int selectedResultType; // @synthesize selectedResultType=_selectedResultType;
- (int)StringAsSearchLocation:(id)arg1;
- (id)searchLocationAsString:(int)arg1;
@property(nonatomic) _Bool hasSearchLocation;
@property(nonatomic) int searchLocation; // @synthesize searchLocation=_searchLocation;
@property(readonly, nonatomic) _Bool hasSearchString;

@end

