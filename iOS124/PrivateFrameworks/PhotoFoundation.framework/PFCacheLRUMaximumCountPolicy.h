//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoFoundation/PFCachePolicy.h>

@class NSMutableArray, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface PFCacheLRUMaximumCountPolicy : PFCachePolicy
{
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _maximumCount;
    NSMutableSet *_considerationSet;
    NSMutableArray *_orderedConsiderationList;
}

+ (id)policyWithMaximumCount:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)willAddOrReplaceEntry:(id)arg1 add:(_Bool)arg2 contents:(id)arg3;
- (id)_keyToEvict:(id)arg1;
- (void)_buildConsiderationSet:(id)arg1;
- (void)didRemoveAllCacheEntries;
- (void)didRemoveCacheEntry:(id)arg1;
- (void)didAddCacheEntry:(id)arg1;
- (void)didGetCacheEntry:(id)arg1;
- (unsigned long long)capacityHint;
- (id)initWithMaximumCount:(unsigned long long)arg1;

@end

