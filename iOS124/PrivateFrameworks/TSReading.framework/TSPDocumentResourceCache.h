//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL;
@protocol OS_dispatch_queue;

@interface TSPDocumentResourceCache : NSObject
{
    NSURL *_cacheURL;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_entries;
    long long _maxCacheSizeInBytes;
}

+ (id)sharedCache;
+ (id)defaultCacheURL;
@property(nonatomic) long long maxCacheSizeInBytes; // @synthesize maxCacheSizeInBytes=_maxCacheSizeInBytes;
- (void).cxx_destruct;
- (void)reloadEntries;
- (void)enumerateEntriesFromCacheURLWithHandler:(CDUnknownBlockType)arg1;
- (void)shrinkCacheWithMaxCacheSizeInBytes:(long long)arg1;
- (void)clearCache;
- (void)shrinkCache;
- (void)endDocumentResourceAccessForDigestString:(id)arg1;
- (_Bool)beginDocumentResourceAccessForDigestString:(id)arg1;
- (_Bool)cacheDocumentResourceDigestString:(id)arg1 extension:(id)arg2 sourceURL:(id)arg3 fileSize:(long long)arg4 wasDownloaded:(_Bool)arg5;
- (id)URLForDocumentResourceDigestString:(id)arg1;
- (id)entryForDigestString:(id)arg1;
- (id)initWithCacheURL:(id)arg1;
- (id)init;

@end

