//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCAssetHandleDelegate-Protocol.h>
#import <NewsCore/FCCacheCoordinatorDelegate-Protocol.h>
#import <NewsCore/FCCacheFlushing-Protocol.h>

@class FCAssetStore, FCCacheCoordinator, FCKeyValueStore, FCNetworkBehaviorMonitor, NFUnfairLock, NSMapTable, NSString, NSURL;
@protocol FCAssetKeyManagerType, OS_dispatch_queue;

@interface FCAssetManager : NSObject <FCAssetHandleDelegate, FCCacheCoordinatorDelegate, FCCacheFlushing>
{
    _Bool _shouldUseSecureConnectionForCKAssetDownloads;
    NSURL *_directoryURLForCachedAssets;
    NSString *_name;
    NSString *_parentDirectory;
    FCKeyValueStore *_keyValueStore;
    FCAssetStore *_assetStore;
    FCCacheCoordinator *_cacheCoordinator;
    NSMapTable *_assetHandles;
    NFUnfairLock *_assetHandlesLock;
    FCNetworkBehaviorMonitor *_networkBehaviorMonitor;
    id <FCAssetKeyManagerType> _keyManager;
    NSObject<OS_dispatch_queue> *_initQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *initQueue; // @synthesize initQueue=_initQueue;
@property(retain, nonatomic) id <FCAssetKeyManagerType> keyManager; // @synthesize keyManager=_keyManager;
@property(retain, nonatomic) FCNetworkBehaviorMonitor *networkBehaviorMonitor; // @synthesize networkBehaviorMonitor=_networkBehaviorMonitor;
@property(retain, nonatomic) NFUnfairLock *assetHandlesLock; // @synthesize assetHandlesLock=_assetHandlesLock;
@property(retain, nonatomic) NSMapTable *assetHandles; // @synthesize assetHandles=_assetHandles;
@property(retain, nonatomic) FCCacheCoordinator *cacheCoordinator; // @synthesize cacheCoordinator=_cacheCoordinator;
@property(retain, nonatomic) FCAssetStore *assetStore; // @synthesize assetStore=_assetStore;
@property(retain, nonatomic) FCKeyValueStore *keyValueStore; // @synthesize keyValueStore=_keyValueStore;
@property(copy, nonatomic) NSString *parentDirectory; // @synthesize parentDirectory=_parentDirectory;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSURL *directoryURLForCachedAssets; // @synthesize directoryURLForCachedAssets=_directoryURLForCachedAssets;
@property(nonatomic) _Bool shouldUseSecureConnectionForCKAssetDownloads; // @synthesize shouldUseSecureConnectionForCKAssetDownloads=_shouldUseSecureConnectionForCKAssetDownloads;
- (void).cxx_destruct;
- (long long)_anefFileDataProviderOptions;
- (void)_importFileAtPath:(id)arg1 method:(long long)arg2 key:(id)arg3 mimeType:(id)arg4 lifetimeHint:(long long)arg5;
- (_Bool)_dataIsGzipped:(id)arg1;
- (id)_transformerForAssetAtPath:(id)arg1 mimeType:(id)arg2 URL:(id)arg3;
- (id)_assetKeyForRemoteURL:(id)arg1;
- (void)_initStores;
- (void)_prepareForUseIfNeeded;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1;
- (void)cacheCoordinator:(id)arg1 flushKeysWithWriteLock:(id)arg2;
- (unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)arg1;
- (void)_fetchDataProviderForAssetHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_populateRawFilePathForAssetHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)operationToFetchDataProviderForAssetHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)assetHandleForURL:(id)arg1 prefetchedFileURL:(id)arg2 importMethod:(long long)arg3 lifetimeHint:(long long)arg4;
- (id)assetHandleForCKAssetURLString:(id)arg1 prefetchedData:(id)arg2 unzipIfNeeded:(_Bool)arg3 lifetimeHint:(long long)arg4;
- (id)assetHandleForCKAssetURL:(id)arg1 lifetimeHint:(long long)arg2;
- (id)assetHandleForCKAssetURLString:(id)arg1 lifetimeHint:(long long)arg2;
- (id)_assetHandleForCKAssetURLComponents:(id)arg1 lifetimeHint:(long long)arg2;
- (id)assetHandleForURL:(id)arg1 lifetimeHint:(long long)arg2;
- (id)initWithName:(id)arg1 directory:(id)arg2 keyManager:(id)arg3 networkBehaviorMonitor:(id)arg4;
- (id)init;
- (id)assetHandleForRecordID:(id)arg1 field:(long long)arg2 lifetimeHint:(long long)arg3 contentDatabase:(id)arg4;
- (void)t_save;
- (id)assetHandleForResourceID:(id)arg1 lifetimeHint:(long long)arg2 contentContext:(id)arg3;
- (id)assetHandleForResourceID:(id)arg1 contentContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

