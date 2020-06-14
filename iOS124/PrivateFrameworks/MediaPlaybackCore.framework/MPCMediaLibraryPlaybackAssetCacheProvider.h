//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPCModelPlaybackAssetCacheProviding-Protocol.h>

@class MPMediaLibrary, NSString;

@interface MPCMediaLibraryPlaybackAssetCacheProvider : NSObject <MPCModelPlaybackAssetCacheProviding>
{
    MPMediaLibrary *_mediaLibrary;
}

+ (id)_lowQualityCachedAssetDestinationDirectory;
+ (id)_highQualityCachedAssetDestinationDirectory;
+ (id)deviceLibraryProvider;
- (void).cxx_destruct;
- (void)setPlaybackAssetCacheFileAsset:(id)arg1 forGenericObject:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)getPlaybackAssetCacheDestinationURL:(id *)arg1 purchaseBundleDestinationURL:(id *)arg2 forGenericObject:(id)arg3 assetQualityType:(long long)arg4 pathExtension:(id)arg5;
- (void)clearPlaybackAssetCacheFileAssetForGenericObject:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)_initWithMediaLibrary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

