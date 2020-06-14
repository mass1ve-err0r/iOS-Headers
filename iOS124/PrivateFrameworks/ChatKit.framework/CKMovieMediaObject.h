//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKAVMediaObject.h>

@class AVURLAsset, UIImage;

@interface CKMovieMediaObject : CKAVMediaObject
{
    _Bool _hasVideoTrack;
    _Bool _checkedVideoInfo;
    _Bool _isAutoloopVideo;
    _Bool _isAppleAutoloopVideo;
    _Bool _isJellyfishVideo;
    _Bool _isAutoloopVideoInitialized;
    _Bool _isAppleAutoloopVideoInitialized;
    _Bool _isJellyfishInitialized;
    UIImage *_thumbnail;
    AVURLAsset *_asset;
    struct CGSize _pxSize;
}

+ (id)playButtonPreviewForUIImage:(id)arg1 scale:(double)arg2 contentAlignmentInsets:(struct UIEdgeInsets)arg3;
+ (struct CGImage *)playButtonPreviewForCGImage:(struct CGImage *)arg1 scale:(double)arg2 isFromMe:(_Bool)arg3;
+ (_Bool)isPreviewable;
+ (id)attachmentSummary:(unsigned long long)arg1;
+ (id)fallbackFilenamePrefix;
+ (id)UTITypes;
+ (Class)__ck_attachmentItemClass;
@property(nonatomic) _Bool isJellyfishInitialized; // @synthesize isJellyfishInitialized=_isJellyfishInitialized;
@property(nonatomic) _Bool isAppleAutoloopVideoInitialized; // @synthesize isAppleAutoloopVideoInitialized=_isAppleAutoloopVideoInitialized;
@property(nonatomic) _Bool isAutoloopVideoInitialized; // @synthesize isAutoloopVideoInitialized=_isAutoloopVideoInitialized;
@property(nonatomic) _Bool isJellyfishVideo; // @synthesize isJellyfishVideo=_isJellyfishVideo;
@property(nonatomic) _Bool isAppleAutoloopVideo; // @synthesize isAppleAutoloopVideo=_isAppleAutoloopVideo;
@property(nonatomic) _Bool isAutoloopVideo; // @synthesize isAutoloopVideo=_isAutoloopVideo;
@property(retain, nonatomic) AVURLAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) _Bool checkedVideoInfo; // @synthesize checkedVideoInfo=_checkedVideoInfo;
@property(nonatomic) struct CGSize pxSize; // @synthesize pxSize=_pxSize;
@property(nonatomic) _Bool hasVideoTrack; // @synthesize hasVideoTrack=_hasVideoTrack;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
- (void).cxx_destruct;
- (_Bool)validatePreviewFormat;
- (_Bool)generatePreviewOutOfProcess;
- (void)updateVideoInfo;
- (_Bool)hasNoVideoTrack;
- (id)previewItemTitle;
- (void)export:(id)arg1;
- (_Bool)canExport;
- (struct CGSize)bbSize;
- (id)bbPreviewFillToSize:(struct CGSize)arg1;
- (id)generateThumbnailFillToSize:(struct CGSize)arg1 contentAlignmentInsets:(struct UIEdgeInsets)arg2;
- (id)generateThumbnailForWidth:(double)arg1 orientation:(BOOL)arg2;
- (id)generatePreviewFromThumbnail:(id)arg1 width:(double)arg2 orientation:(BOOL)arg3;
- (id)previewForWidth:(double)arg1 orientation:(BOOL)arg2;
- (Class)previewBalloonViewClass;
- (id)previewCachesFileURLWithOrientation:(BOOL)arg1 extension:(id)arg2;
- (id)previewCacheKeyWithOrientation:(BOOL)arg1;
- (_Bool)_assetContainsMetadataKey:(id)arg1;
- (int)mediaType;

@end

