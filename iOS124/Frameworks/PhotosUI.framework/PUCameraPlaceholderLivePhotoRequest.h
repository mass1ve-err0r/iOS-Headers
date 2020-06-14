//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString, NSURL, NSValue, PHAsset, UIImage;

__attribute__((visibility("hidden")))
@interface PUCameraPlaceholderLivePhotoRequest : NSObject
{
    _Bool _imageRequestFinished;
    _Bool _videoRequestFinished;
    UIImage *_image;
    NSURL *_videoURL;
    NSValue *_stillDisplayTime;
    NSString *_filterName;
    NSError *_error;
    PHAsset *_asset;
    CDUnknownBlockType _resultHandler;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) _Bool videoRequestFinished; // @synthesize videoRequestFinished=_videoRequestFinished;
@property(nonatomic) _Bool imageRequestFinished; // @synthesize imageRequestFinished=_imageRequestFinished;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSString *filterName; // @synthesize filterName=_filterName;
@property(retain, nonatomic) NSValue *stillDisplayTime; // @synthesize stillDisplayTime=_stillDisplayTime;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)initWithAsset:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;

@end

