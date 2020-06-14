//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BLBookManifest : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_manifest;
    NSString *_manifestPath;
}

+ (id)syncedBookManifest;
+ (id)sharedPurchasedBookManifest;
+ (id)purchasedBookManifest;
+ (void)unloadPurchaseManifest;
@property(retain, nonatomic) NSString *manifestPath; // @synthesize manifestPath=_manifestPath;
@property(retain, nonatomic) NSMutableDictionary *manifest; // @synthesize manifest=_manifest;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (id)_stringFromObject:(id)arg1;
- (id)_manifest;
- (void)_invalidateAfterExternalChange;
- (id)_entries;
- (void)synchronizeData;
- (void)removeManifestEntryWithDownloadPermalink:(id)arg1;
- (void)removeManifestEntryWithStoreItemID:(id)arg1;
- (id)manifestEntriesWithProperty:(id)arg1 equalToNumber:(id)arg2 limitCount:(long long)arg3;
- (id)manifestEntriesWithProperty:(id)arg1 equalToValue:(id)arg2 limitCount:(long long)arg3;
- (id)manifestEntryForAdamID:(id)arg1 withPublicationVersion:(id)arg2;
- (id)bookPathForAdamID:(id)arg1 withPublicationVersion:(id)arg2;
- (id)bookPathPermalink:(id)arg1;
- (void)addManifestEntries:(id)arg1;
- (void)addManifestEntry:(id)arg1;
- (void)dealloc;
- (id)initWithManifestPath:(id)arg1;

@end

