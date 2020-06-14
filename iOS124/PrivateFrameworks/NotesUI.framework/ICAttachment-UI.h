//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/ICAttachment.h>

@class ICNotePasteboardData, NSString, UIImage;

@interface ICAttachment (UI)
+ (id)imageCache;
+ (id)imageLoadingOperationQueue;
+ (id)thumbnailOperationQueue;
- (_Bool)fetchThumbnailImageWithMinSize:(struct CGSize)arg1 scale:(double)arg2 cache:(id)arg3 cacheKey:(id)arg4 processingBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6 fallbackBlock:(CDUnknownBlockType)arg7 aboutToLoadHandler:(CDUnknownBlockType)arg8;
- (_Bool)thumbnailImage:(struct UIImage **)arg1 minSize:(struct CGSize)arg2 scale:(double)arg3 imageScaling:(unsigned long long *)arg4 showAsFileIcon:(_Bool *)arg5 isMovie:(_Bool *)arg6 movieDuration:(CDStruct_1b6d18a9 *)arg7;
- (id)updateAttachmentPreviewImageWithImage:(struct UIImage *)arg1 scale:(double)arg2 scaleWhenDrawing:(_Bool)arg3 metadata:(id)arg4 sendNotification:(_Bool)arg5 completionHandler:(CDUnknownBlockType)arg6;
@property(readonly, nonatomic) NSString *movieDurationForSpeaking;
@property(readonly, nonatomic) NSString *modificationDateForSpeaking;
- (id)activityItems;
@property(readonly, nonatomic) ICNotePasteboardData *pasteboardData;
- (id)attributedString;
- (struct UIImage *)cachedImage;
- (void)setCachedImage:(struct UIImage *)arg1;
- (CDUnknownBlockType)loadImage:(CDUnknownBlockType)arg1 aboutToLoadHandler:(CDUnknownBlockType)arg2 forceFullSizeImage:(_Bool)arg3;
- (CDUnknownBlockType)loadImage:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) UIImage *unprocessedDocumentImage;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) _Bool isUnsupportedOnCurrentPlatform;
@end

