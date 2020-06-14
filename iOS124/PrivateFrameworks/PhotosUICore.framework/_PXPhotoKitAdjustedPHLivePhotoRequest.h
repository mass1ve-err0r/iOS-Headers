//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/_PXPhotoKitAdjustedUIMediaRequest.h>

@class AVPlayerItem, PHLivePhotoRequestOptions, UIImage, _PXPhotoKitAdjustedUIImageRequest, _PXPhotoKitAdjustedVideoRequest;

@interface _PXPhotoKitAdjustedPHLivePhotoRequest : _PXPhotoKitAdjustedUIMediaRequest
{
    _PXPhotoKitAdjustedUIImageRequest *_imageRequest;
    _PXPhotoKitAdjustedVideoRequest *_videoRequest;
    UIImage *_image;
    AVPlayerItem *_playerItem;
    long long _contentMode;
    PHLivePhotoRequestOptions *_options;
    CDUnknownBlockType _resultHandler;
    struct CGSize _targetSize;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
@property(readonly, nonatomic) PHLivePhotoRequestOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(readonly, nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
- (void).cxx_destruct;
- (void)_prepareLivePhotoIfPossible;
- (void)_handleVideoRequestResult:(id)arg1 info:(id)arg2;
- (void)_handleImageRequestResult:(id)arg1 info:(id)arg2;
- (void)cancel;
- (void)start;
- (id)initWithRenderQueue:(id)arg1 asset:(id)arg2 targetSize:(struct CGSize)arg3 contentMode:(long long)arg4 imageManager:(id)arg5 options:(id)arg6 resultHandler:(CDUnknownBlockType)arg7;

@end

