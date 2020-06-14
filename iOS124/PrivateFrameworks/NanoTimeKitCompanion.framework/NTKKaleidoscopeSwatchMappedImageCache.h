//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoardUI/BSUIMappedImageCache.h>

#import <NanoTimeKitCompanion/NTKFaceCollectionObserver-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface NTKKaleidoscopeSwatchMappedImageCache : BSUIMappedImageCache <NTKFaceCollectionObserver>
{
    id _activeDeviceNotificationBlock;
    NSArray *_libraryCollections;
    NSMutableArray *_loadedCollections;
}

+ (id)keyForAsset:(id)arg1 style:(id)arg2 resourceDirectory:(id)arg3;
+ (id)sharedCache;
- (void).cxx_destruct;
- (void)faceCollectionDidLoad:(id)arg1;
- (void)_pruneUnusedKeys;
- (void)_cleanCache;
- (void)_removeImagesForKeysMatching:(CDUnknownBlockType)arg1;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

