//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVVideoComposition, NSDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVVideoCompositionRenderContextInternal : NSObject
{
    NSDictionary *_basisProperties;
    struct CGSize _size;
    struct CGAffineTransform _renderTransform;
    float _renderScale;
    CDStruct_43f4b5b8 _pixelAspectRatio;
    CDStruct_1edcc8d7 _edgeWidths;
    _Bool _highQualityRendering;
    NSDictionary *_clientRequiredPixelBufferAttributes;
    NSDictionary *_destinationDesiredPixelBufferAttributes;
    NSString *_destinationDesiredPixelBufferYCbCrMatrix;
    NSString *_destinationDesiredPixelBufferColorPrimaries;
    NSString *_destinationDesiredPixelBufferTransferFunction;
    int pixelFormatFamily;
    struct __CFDictionary *_pixelAspectRatioDict;
    struct __CFDictionary *_cleanApertureDict;
    CDStruct_79c71658 _destinationPixelBufferDimensions;
    NSObject<OS_dispatch_queue> *_pixelBufferPoolQ;
    struct __CVPixelBufferPool *_pixelBufferPool;
    AVVideoComposition *_videoComposition;
}

- (void)dealloc;
- (void)finalize;
- (void)_willDeallocOrFinalize;

@end

