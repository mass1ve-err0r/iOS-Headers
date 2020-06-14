//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIMediaItem.h>

#import <VideosUI/VUISidebandMediaEntityImageLoadParamsCreating-Protocol.h>

@class VUISidebandMediaItemAssetController, VUIVideoManagedObject;

__attribute__((visibility("hidden")))
@interface VUISidebandMediaItem : VUIMediaItem <VUISidebandMediaEntityImageLoadParamsCreating>
{
    VUIVideoManagedObject *_videoManagedObject;
    VUISidebandMediaItemAssetController *_assetController;
}

@property(retain, nonatomic) VUISidebandMediaItemAssetController *assetController; // @synthesize assetController=_assetController;
@property(retain, nonatomic) VUIVideoManagedObject *videoManagedObject; // @synthesize videoManagedObject=_videoManagedObject;
- (void).cxx_destruct;
- (void)_videoManagedObjectPlaybackExpirationWillChange:(id)arg1;
- (id)imageLoadParamsWithImageType:(unsigned long long)arg1;
- (id)downloadExpirationDate;
- (id)episodeNumber;
- (id)seasonIdentifier;
- (id)seasonTitle;
- (id)seasonNumber;
- (id)showIdentifier;
- (id)showTitle;
- (id)isPlayable;
- (id)isLocal;
- (id)HLSColorCapability;
- (id)colorCapability;
- (id)storeID;
- (id)releaseDate;
- (id)addedDate;
- (id)genreTitle;
- (id)duration;
- (id)title;
- (id)canonicalID;
- (void)dealloc;
- (id)initWithMediaLibrary:(id)arg1 videoManagedObject:(id)arg2 requestedProperties:(id)arg3;

@end

