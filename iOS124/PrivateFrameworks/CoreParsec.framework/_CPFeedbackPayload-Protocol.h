//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary, _CPCBAEngagementFeedback, _CPCacheHitFeedback, _CPCardSectionEngagementFeedback, _CPCardSectionFeedback, _CPCardViewAppearFeedback, _CPCardViewDisappearFeedback, _CPClearInputFeedback, _CPClientTimingFeedback, _CPConnectionInvalidatedFeedback, _CPCustomFeedback, _CPDidGoToSearchFeedback, _CPDidGoToSiteFeedback, _CPEndLocalSearchFeedback, _CPEndNetworkSearchFeedback, _CPEndSearchFeedback, _CPErrorFeedback, _CPFeedback, _CPLateSectionsAppendedFeedback, _CPLookupHintRelevancyFeedback, _CPMapsCardSectionEngagementFeedback, _CPRankingFeedback, _CPResultEngagementFeedback, _CPResultFeedback, _CPResultGradingFeedback, _CPResultRankingFeedback, _CPResultsReceivedAfterTimeoutFeedback, _CPSearchViewAppearFeedback, _CPSearchViewDisappearFeedback, _CPSectionEngagementFeedback, _CPSectionRankingFeedback, _CPSessionEndFeedback, _CPSessionMissingResultsFeedback, _CPSessionMissingSuggestionsFeedback, _CPSkipSearchFeedback, _CPStartLocalSearchFeedback, _CPStartNetworkSearchFeedback, _CPStartSearchFeedback, _CPStoreCardSectionEngagementFeedback, _CPSuggestionEngagementFeedback, _CPVisibleResultsFeedback, _CPVisibleSectionHeaderFeedback, _CPVisibleSuggestionsFeedback;

@protocol _CPFeedbackPayload <NSObject>
@property(readonly, nonatomic) unsigned long long whichContained_Feedback;
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) unsigned long long queryId;
@property(retain, nonatomic) _CPClientTimingFeedback *clientTimingFeedback;
@property(retain, nonatomic) _CPCBAEngagementFeedback *cbaEngagementFeedback;
@property(retain, nonatomic) _CPCacheHitFeedback *cacheHitFeedback;
@property(retain, nonatomic) _CPSkipSearchFeedback *skipSearchFeedback;
@property(retain, nonatomic) _CPCardViewAppearFeedback *cardViewAppearFeedback;
@property(retain, nonatomic) _CPSessionEndFeedback *sessionEndFeedback;
@property(retain, nonatomic) _CPCardSectionEngagementFeedback *cardSectionEngagementFeedback;
@property(retain, nonatomic) _CPConnectionInvalidatedFeedback *connectionInvalidatedFeedback;
@property(retain, nonatomic) _CPLookupHintRelevancyFeedback *lookupHintRelevancyFeedback;
@property(retain, nonatomic) _CPResultGradingFeedback *resultGradingFeedback;
@property(retain, nonatomic) _CPSessionMissingSuggestionsFeedback *sessionMissingSuggestionsFeedback;
@property(retain, nonatomic) _CPSessionMissingResultsFeedback *sessionMissingResultsFeedback;
@property(retain, nonatomic) _CPDidGoToSearchFeedback *didGoToSearchFeedback;
@property(retain, nonatomic) _CPDidGoToSiteFeedback *didGoToSiteFeedback;
@property(retain, nonatomic) _CPVisibleSectionHeaderFeedback *visibleSectionHeaderFeedback;
@property(retain, nonatomic) _CPSectionEngagementFeedback *sectionEngagementFeedback;
@property(retain, nonatomic) _CPClearInputFeedback *clearInputFeedback;
@property(retain, nonatomic) _CPLateSectionsAppendedFeedback *lateSectionsAppendedFeedback;
@property(retain, nonatomic) _CPResultsReceivedAfterTimeoutFeedback *resultsReceivedAfterTimeoutFeedback;
@property(retain, nonatomic) _CPVisibleSuggestionsFeedback *visibleSuggestionsFeedback;
@property(retain, nonatomic) _CPCardViewDisappearFeedback *cardViewDisappearFeedback;
@property(retain, nonatomic) _CPSuggestionEngagementFeedback *suggestionEngagementFeedback;
@property(retain, nonatomic) _CPCustomFeedback *customFeedback;
@property(retain, nonatomic) _CPErrorFeedback *errorFeedback;
@property(retain, nonatomic) _CPEndLocalSearchFeedback *endLocalSearchFeedback;
@property(retain, nonatomic) _CPStartLocalSearchFeedback *startLocalSearchFeedback;
@property(retain, nonatomic) _CPEndNetworkSearchFeedback *endNetworkSearchFeedback;
@property(retain, nonatomic) _CPStartNetworkSearchFeedback *startNetworkSearchFeedback;
@property(retain, nonatomic) _CPEndSearchFeedback *endSearchFeedback;
@property(retain, nonatomic) _CPStartSearchFeedback *startSearchFeedback;
@property(retain, nonatomic) _CPStoreCardSectionEngagementFeedback *storeCardSectionEngagementFeedback;
@property(retain, nonatomic) _CPMapsCardSectionEngagementFeedback *mapsCardSectionEngagementFeedback;
@property(retain, nonatomic) _CPCardSectionFeedback *cardSectionFeedback;
@property(retain, nonatomic) _CPVisibleResultsFeedback *visibleResultsFeedback;
@property(retain, nonatomic) _CPResultEngagementFeedback *resultEngagementFeedback;
@property(retain, nonatomic) _CPResultFeedback *resultFeedback;
@property(retain, nonatomic) _CPResultRankingFeedback *resultRankingFeedback;
@property(retain, nonatomic) _CPSectionRankingFeedback *sectionRankingFeedback;
@property(retain, nonatomic) _CPRankingFeedback *rankingFeedback;
@property(retain, nonatomic) _CPSearchViewDisappearFeedback *searchViewDisappearFeedback;
@property(retain, nonatomic) _CPSearchViewAppearFeedback *searchViewAppearFeedback;
@property(retain, nonatomic) _CPFeedback *feedback;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

