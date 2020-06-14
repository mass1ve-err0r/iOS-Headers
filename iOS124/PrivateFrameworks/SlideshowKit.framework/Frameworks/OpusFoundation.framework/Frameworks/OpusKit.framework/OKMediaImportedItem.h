//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/OKMediaItem.h>

@interface OKMediaImportedItem : OKMediaItem
{
}

+ (id)urlForMediaObject:(id)arg1;
+ (id)scheme;
- (void)invalidateDiskCachedThumbnailImages;
- (void)setDiskCachedThumbnailImage:(id)arg1 forResolution:(unsigned long long)arg2;
- (id)diskCachedThumbnailImageForResolution:(unsigned long long)arg1;
- (_Bool)hasDiskCachedThumbnailImage:(id *)arg1 forResolution:(unsigned long long)arg2;
- (_Bool)wantsDiskCachedThumbnailForResolution:(unsigned long long)arg1;
- (id)diskCachedMetadata;
- (_Bool)hasDiskCachedMetadata:(id *)arg1;
- (_Bool)wantsDiskCachedMetadata;
- (_Bool)wantsMemoryCachedMetadata;
- (_Bool)wantsTemporaryDiskCache;
- (id)resourceURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)importMediaToDirectoryURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createThumbnailImageForResolution:(unsigned long long)arg1 withMetadata:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)createMetadataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setMediaObject:(id)arg1;
- (id)mediaObject;
- (id)initWithImportedResourceURL:(id)arg1;

@end

