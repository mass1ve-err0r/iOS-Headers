//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CLSDBCache.h"

@interface PGCurationCache : CLSDBCache
{
}

+ (id)defaultCache;
- (void)_invalidateCacheForEventsWithIdentifiers:(id)arg1;
- (void)_invalidateCacheForEventWithIdentifier:(id)arg1 precision:(unsigned long long)arg2;
- (void)_invalidateCacheForEventWithIdentifier:(id)arg1;
- (void)_setProperties:(id)arg1 forCurationObjectWithEntityName:(id)arg2 eventIdentifier:(id)arg3 precision:(unsigned long long)arg4 predicate:(id)arg5;
- (id)_fetchCurationObjectForEntityName:(id)arg1 predicate:(id)arg2;
- (void)_setCuratedKeyAsset:(id)arg1 forEventWithIdentifier:(id)arg2 options:(id)arg3;
- (id)_curatedKeyAssetIdentifierForEventWithIdentifier:(id)arg1 options:(id)arg2;
- (void)_setCuratedAssets:(id)arg1 forEventWithIdentifier:(id)arg2 options:(id)arg3;
- (id)_curatedAssetIdentifiersForEventWithIdentifier:(id)arg1 options:(id)arg2;
- (void)invalidateCacheForCollectionWithIdentifier:(id)arg1;
- (id)curatedKeyAssetIdentifierForMoment:(id)arg1 options:(id)arg2;
- (id)curatedKeyAssetIdentifierForCollectionWithIdentifier:(id)arg1 options:(id)arg2;
- (void)setCuratedKeyAsset:(id)arg1 forCollectionWithIdentifier:(id)arg2 options:(id)arg3;
- (id)curatedAssetIdentifiersForCollectionWithIdentifier:(id)arg1 options:(id)arg2;
- (void)setCuratedAssets:(id)arg1 forCollectionWithIdentifier:(id)arg2 options:(id)arg3;
- (double)contentScoreForMomentLocalIdentifier:(id)arg1 precision:(unsigned long long)arg2 isCached:(_Bool *)arg3;
- (_Bool)isMomentLocalIdentifierInteresting:(id)arg1 precision:(unsigned long long)arg2 isCached:(_Bool *)arg3;
- (double)contentScoreForMoment:(id)arg1 precision:(unsigned long long)arg2 isCached:(_Bool *)arg3;
- (_Bool)isMomentInteresting:(id)arg1 precision:(unsigned long long)arg2 isCached:(_Bool *)arg3;
- (id)curatedAssetIdentifiersForMoment:(id)arg1 options:(id)arg2;
- (void)setMeanContentScore:(double)arg1 forMoment:(id)arg2 precision:(unsigned long long)arg3;
- (void)setContentScore:(double)arg1 forMoment:(id)arg2 precision:(unsigned long long)arg3;
- (void)setMomentInteresting:(_Bool)arg1 forMoment:(id)arg2 precision:(unsigned long long)arg3;
- (void)setCuratedAssets:(id)arg1 forMoment:(id)arg2 options:(id)arg3;
- (void)setCuratedKeyAsset:(id)arg1 forMoment:(id)arg2 options:(id)arg3;
- (void)invalidateCacheForEventIdentifiers:(id)arg1;
- (void)invalidateCacheForMomentIdentifier:(id)arg1 precision:(unsigned long long)arg2;
- (void)invalidateCacheForMomentIdentifier:(id)arg1;
- (id)dataModelName;

@end

