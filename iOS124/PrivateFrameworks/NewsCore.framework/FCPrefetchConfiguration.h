//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NTPBPrefetchConfig;

@interface FCPrefetchConfiguration : NSObject
{
    NTPBPrefetchConfig *_pbConfig;
    NSDictionary *_configDict;
    _Bool _backgroundFetchEnabled;
    _Bool _shouldPrefetchForYouFeed;
    double _minimumBackgroundFetchInterval;
    unsigned long long _maximumFavoritesFeedsToPrefetch;
    double _prefetchedForYouExpiration;
}

@property(readonly, nonatomic) double prefetchedForYouExpiration; // @synthesize prefetchedForYouExpiration=_prefetchedForYouExpiration;
@property(readonly, nonatomic) unsigned long long maximumFavoritesFeedsToPrefetch; // @synthesize maximumFavoritesFeedsToPrefetch=_maximumFavoritesFeedsToPrefetch;
@property(readonly, nonatomic) _Bool shouldPrefetchForYouFeed; // @synthesize shouldPrefetchForYouFeed=_shouldPrefetchForYouFeed;
@property(readonly, nonatomic) double minimumBackgroundFetchInterval; // @synthesize minimumBackgroundFetchInterval=_minimumBackgroundFetchInterval;
@property(readonly, nonatomic, getter=isBackgroundFetchEnabled) _Bool backgroundFetchEnabled; // @synthesize backgroundFetchEnabled=_backgroundFetchEnabled;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithPBPrefetchConfig:(id)arg1;
- (id)initWithDefaults;

@end

