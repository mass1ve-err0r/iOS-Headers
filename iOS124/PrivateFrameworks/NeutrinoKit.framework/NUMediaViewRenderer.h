//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVComposition, NSArray, NUAVPlayerController, NUCoalescer, NUColorSpace, NUComposition, NULivePhotoRenderClient, NUMediaView, NUPixelFormat, NUResponse, NUSurfaceRenderClient, NUVideoRenderClient, UIView;
@protocol NURenderStatistics, OS_dispatch_group, OS_dispatch_queue;

@interface NUMediaViewRenderer : NSObject
{
    NUSurfaceRenderClient *_zoomClient;
    NUSurfaceRenderClient *_backfillClient;
    NULivePhotoRenderClient *_livePhotoClient;
    NUVideoRenderClient *_videoClient;
    UIView *_livePhotoView;
    NUCoalescer *_livePhotoUpdateCoalescer;
    NUCoalescer *_videoUpdateCoalescer;
    _Bool _canRenderVideoLive;
    int _videoRenderInFlightCount;
    NSObject<OS_dispatch_group> *_renderGroup;
    NSObject<OS_dispatch_queue> *_renderQueue;
    NUResponse *_zoomRenderResponse;
    NUResponse *_backfillRenderResponse;
    struct CGRect _lastZoomRect;
    double _lastZoomScale;
    double _lastZoomRenderTime;
    id <NURenderStatistics> _lastZoomRenderStatistics;
    id <NURenderStatistics> _lastBackfillRenderStatictics;
    _Bool _isPanning;
    _Bool _isZooming;
    _Bool __videoEnabled;
    NUComposition *_composition;
    NUColorSpace *_colorSpace;
    NUPixelFormat *_pixelFormat;
    NUMediaView *_mediaView;
    double _backingScale;
    NSArray *_pipelineFilters;
    double _maximumZoomScale;
    NUAVPlayerController *_nuAVPlayerController;
    unsigned long long _displayType;
    unsigned long long _computedDisplayType;
    AVComposition *_previousVideo;
}

+ (_Bool)_forceUpdateForNewVideoComposition:(id)arg1 previousComposition:(id)arg2 newAsset:(id)arg3 previousAsset:(id)arg4;
@property(retain, nonatomic) AVComposition *previousVideo; // @synthesize previousVideo=_previousVideo;
@property(nonatomic, getter=_isVideoEnabled, setter=_setVideoEnabled:) _Bool _videoEnabled; // @synthesize _videoEnabled=__videoEnabled;
@property(readonly, nonatomic) unsigned long long computedDisplayType; // @synthesize computedDisplayType=_computedDisplayType;
@property(nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
@property(readonly, nonatomic) NUAVPlayerController *nuAVPlayerController; // @synthesize nuAVPlayerController=_nuAVPlayerController;
@property(nonatomic) double maximumZoomScale; // @synthesize maximumZoomScale=_maximumZoomScale;
@property(copy, nonatomic) NSArray *pipelineFilters; // @synthesize pipelineFilters=_pipelineFilters;
@property(nonatomic) double backingScale; // @synthesize backingScale=_backingScale;
@property(readonly, nonatomic) __weak NUMediaView *mediaView; // @synthesize mediaView=_mediaView;
@property(retain, nonatomic) NUPixelFormat *pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(retain, nonatomic) NUColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(copy, nonatomic) NUComposition *composition; // @synthesize composition=_composition;
- (void).cxx_destruct;
- (void)livePhotoViewDidEndScrubbing:(id)arg1;
- (void)livePhotoViewDidBeginScrubbing:(id)arg1;
- (void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(long long)arg2;
- (void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2;
@property(nonatomic, getter=isVideoEnabled) _Bool videoEnabled;
- (void)_addFullExtentConstraintsForView:(id)arg1;
- (id)_backfillRenderRequestForComposition:(id)arg1;
- (double)_lastRenderDuration;
- (struct CGRect)_zoomTargetRect;
- (double)_targetZoomScale;
- (id)_zoomRenderRequestForComposition:(id)arg1;
- (void)_updateLivePhotoWithResponse:(id)arg1;
- (id)_livePhotoFromResponse:(id)arg1;
- (void)_updateLivePhotoComposition:(id)arg1;
- (void)_coalesceUpdateLivePhotoComposition:(id)arg1;
- (void)_coalesceUpdateVideoComposition:(id)arg1;
- (void)_updateVideoViewLayoutWithGeometry:(id)arg1;
- (void)_updateVideoComposition:(id)arg1;
- (void)_updateVideoWithResult:(id)arg1;
- (id)cacheVideoRenderFilter;
- (void)_setDisplayType:(unsigned long long)arg1;
- (void)_updateDisplayForMediaType:(long long)arg1;
- (id)renderClient;
- (id)_updateImageLayer:(id)arg1 withRenderResponse:(id)arg2;
- (void)_updateBackfillLayerWithRenderResponse:(id)arg1;
- (void)_updateROILayerWithRenderResponse:(id)arg1;
- (void)_updateBackfillLayerWithLatestRenderResponse;
- (void)_updateROILayerWithLatestRenderResponse;
- (CDUnknownBlockType)_videoFrameImageRenderResponseHandler;
- (CDUnknownBlockType)_backfillRenderResponseHandler;
- (CDUnknownBlockType)_zoomRenderResponseHandler;
- (void)_updateImageRenderForComposition:(id)arg1;
- (void)_renderFinishedWithGeometry:(id)arg1 layer:(id)arg2;
- (id)_regionPolicyForZoomTargetRect:(struct CGRect)arg1;
- (struct CGRect)_scrollBounds;
- (struct CGSize)targetSize;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromImageToView:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toImageFromView:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromImageToView:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toImageFromView:(id)arg2;
@property(readonly) _Bool isReady;
@property(readonly, nonatomic, getter=isZoomedToFit) _Bool zoomedToFit;
- (void)wait;
- (void)_endAnimating;
- (void)_beginAnimating;
- (void)endZooming;
- (void)beginZooming;
- (void)endPanning;
- (void)beginPanning;
- (void)updateComposition:(id)arg1;
- (id)newRenderRequestForComposition:(id)arg1 scalePolicy:(id)arg2 regionPolicy:(id)arg3;
- (id)init;
- (id)initWithMediaView:(id)arg1;
- (void)_withComposition:(id)arg1 visitRenderClient:(CDUnknownBlockType)arg2;

@end

