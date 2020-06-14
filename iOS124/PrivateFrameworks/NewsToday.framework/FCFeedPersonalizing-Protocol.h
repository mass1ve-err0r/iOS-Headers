//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsToday/FCTagRanking-Protocol.h>

@class FCFeedPersonalizedItems, NSArray, NSString;

@protocol FCFeedPersonalizing <FCTagRanking>
- (double)decayedPublisherDiversificationPenalty;
- (unsigned long long)whitelistLevelForTagID:(NSString *)arg1;
- (void)prepareForUseWithCompletionHandler:(void (^)(void))arg1;
- (NSArray *)limitItemsByFlowRate:(NSArray *)arg1 timeInterval:(double)arg2 publisherCount:(unsigned long long)arg3;
- (NSArray *)limitItemsByMinimumItemQuality:(NSArray *)arg1;
- (NSArray *)diversifyItems:(NSArray *)arg1 limit:(unsigned long long)arg2 preselectedItems:(NSArray *)arg3;
- (NSArray *)diversifyItems:(NSArray *)arg1 limit:(unsigned long long)arg2;
- (FCFeedPersonalizedItems *)sortItems:(NSArray *)arg1 options:(long long)arg2;
- (FCFeedPersonalizedItems *)sortItems:(NSArray *)arg1;

@optional
- (NSArray *)bestOfGroupFromItems:(NSArray *)arg1 configurationSet:(long long)arg2;
- (double)personalizedScoreForFeatureWithIdentifier:(NSString *)arg1 items:(NSArray *)arg2 baselineClicksMultiplier:(double)arg3;
- (FCFeedPersonalizedItems *)sortItems:(NSArray *)arg1 options:(long long)arg2 configurationSet:(long long)arg3;
- (FCFeedPersonalizedItems *)sortItems:(NSArray *)arg1 configurationSet:(long long)arg2;
- (void)prepareFavorites:(void (^)(void))arg1;
@end

