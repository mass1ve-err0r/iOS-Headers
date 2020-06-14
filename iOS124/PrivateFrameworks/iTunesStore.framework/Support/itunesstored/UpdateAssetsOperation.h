//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSString, NSURL, SSUpdatableAssetCacheManager;

@interface UpdateAssetsOperation : ISOperation
{
    NSURL *_bundledManifestURL;
    SSUpdatableAssetCacheManager *_cacheManager;
    CDUnknownBlockType _completion;
    NSURL *_manifestURL;
    NSString *_previousLastModified;
    _Bool _scheduledInBackground;
    NSString *_userAgent;
}

- (void).cxx_destruct;
- (id)_uncachedAssetsForManifest:(id)arg1;
- (id)_bundledManifest;
- (id)_allCachedAssetFileNames;
- (id)_downloadRemoteFile:(id)arg1 toLocalPath:(id)arg2 expectedMD5:(id)arg3 ifModifiedSince:(id)arg4 error:(id *)arg5;
- (void)run;
- (id)initWithManifestURL:(id)arg1 bundledManifestURL:(id)arg2 clientIdentifier:(id)arg3 userAgent:(id)arg4 scheduledInBackground:(_Bool)arg5 previousLastModified:(id)arg6 completion:(CDUnknownBlockType)arg7;

@end

