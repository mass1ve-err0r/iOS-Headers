//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WBSRecentWebSearchesController : NSObject
{
    NSMutableArray *_recentSearchEntries;
}

+ (id)_defaultsKey;
+ (unsigned long long)_maximumNumberOfSearchesToTrack;
+ (_Bool)_shouldTrackSearches;
- (void).cxx_destruct;
- (void)_addLegacySearch:(id)arg1;
- (void)_removeLegacyRecentSearchesData;
- (void)_migrateLegacyData;
- (void)_loadRecentSearchesIfNeeded;
- (id)_recentSearchDictionariesFromUserDefaultsUsingKey:(id)arg1;
- (void)_saveRecentSearchDictionaries:(id)arg1 toUserDefaultsUsingKey:(id)arg2;
- (id)_recentSearchesDictionaries;
- (void)_saveRecentSearches;
- (void)_addRecentSearchEntry:(id)arg1;
- (void)clearRecentSearchesAddedAfterDate:(id)arg1;
- (void)clearRecentSearches;
- (id)recentSearchesMatchingPrefix:(id)arg1;
- (id)recentSearches;
- (void)addRecentSearch:(id)arg1;

@end

