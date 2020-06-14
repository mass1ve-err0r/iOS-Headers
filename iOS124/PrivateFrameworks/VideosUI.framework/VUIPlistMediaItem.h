//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIMediaItem.h>

#import <VideosUI/VUIPlistMediaEntityImageLoadParamsCreating-Protocol.h>

@class VUIPlistMediaDatabaseItem;

__attribute__((visibility("hidden")))
@interface VUIPlistMediaItem : VUIMediaItem <VUIPlistMediaEntityImageLoadParamsCreating>
{
    VUIPlistMediaDatabaseItem *_databaseItem;
}

@property(retain, nonatomic) VUIPlistMediaDatabaseItem *databaseItem; // @synthesize databaseItem=_databaseItem;
- (void).cxx_destruct;
- (id)imageLoadParamsWithImageType:(unsigned long long)arg1;
- (id)assetType;
- (id)seasonTitle;
- (id)seasonIdentifier;
- (id)previewFrameImageIdentifier;
- (id)_valueForPropertyDescriptor:(id)arg1;
- (id)isLocal;
- (id)seasonNumber;
- (id)showTitle;
- (id)showIdentifier;
- (id)playedState;
- (id)coverArtImageIdentifier;
- (id)initWithMediaLibrary:(id)arg1 identifier:(id)arg2 requestedProperties:(id)arg3 kind:(id)arg4;
- (id)initWithMediaLibrary:(id)arg1 databaseItem:(id)arg2 requestedProperties:(id)arg3;

@end

