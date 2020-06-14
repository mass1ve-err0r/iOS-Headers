//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NeutrinoKit/NUAVPlayerControllerDelegate-Protocol.h>
#import <NeutrinoKit/NUAVPlayerViewDelegate-Protocol.h>

@class NSArray, NSString, NUAVPlayerController, NUAVPlayerView, NUComposition, NUMediaViewRenderer, NURenderView, NUScrollView;
@protocol NUMediaViewDelegate;

@interface NUMediaView : UIView <NUAVPlayerControllerDelegate, NUAVPlayerViewDelegate>
{
    NURenderView *_renderView;
    NUScrollView *_scrollView;
    NUMediaViewRenderer *_renderer;
    struct UIEdgeInsets _edgeInsets;
    NUAVPlayerController *_nuAVPlayerController;
    NUAVPlayerView *_playerView;
    UIView *_livePhotoView;
    struct {
        _Bool hasDidFinishRendering;
        _Bool hasDidUpdateLivePhoto;
        _Bool hasDidFinishRenderingWithStatistics;
        _Bool hasDidZoom;
        _Bool hasWillBeginZooming;
        _Bool hasDidEndZooming;
        _Bool hasIsReadyForVideoPlayback;
        _Bool hasDidStartPreparingVideo;
        _Bool hasDidFinishPreparingVideo;
    } _delegateFlags;
    _Bool _loopsVideo;
    long long _transitionCount;
    _Bool _centerContent;
    _Bool _muted;
    _Bool _videoPlayerVisible;
    _Bool _debugEnabled;
    _Bool _scrollUpdatesSuppressed;
    id <NUMediaViewDelegate> _delegate;
    double _angle;
    struct CGSize __masterSizeWithoutGeometry;
    struct CGRect _cropRect;
}

+ (struct UIEdgeInsets)_proposedInsetsForInsets:(struct UIEdgeInsets)arg1 contentSize:(struct CGSize)arg2 inFrame:(struct CGRect)arg3 centerContent:(_Bool)arg4;
@property(nonatomic) _Bool scrollUpdatesSuppressed; // @synthesize scrollUpdatesSuppressed=_scrollUpdatesSuppressed;
@property(nonatomic, getter=isDebugEnabled) _Bool debugEnabled; // @synthesize debugEnabled=_debugEnabled;
@property(nonatomic, getter=isVideoPlayerVisible) _Bool videoPlayerVisible; // @synthesize videoPlayerVisible=_videoPlayerVisible;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) _Bool centerContent; // @synthesize centerContent=_centerContent;
@property(nonatomic) double angle; // @synthesize angle=_angle;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(nonatomic) struct CGSize _masterSizeWithoutGeometry; // @synthesize _masterSizeWithoutGeometry=__masterSizeWithoutGeometry;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) __weak id <NUMediaViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)playerControllerIsReadyForPlayback:(id)arg1;
- (void)playerController:(id)arg1 didUpdateElapsedTime:(double)arg2 duration:(double)arg3;
- (void)playerControllerDidFinishPlaying:(id)arg1 duration:(double)arg2;
- (void)playerViewReadyForDisplayDidChange:(id)arg1;
- (id)_viewRecursiveDescription;
- (id)_layerRecursiveDescription;
- (void)_updateVideoPlayerAlpha;
@property(nonatomic, getter=isVideoEnabled) _Bool videoEnabled;
- (void)_withComposition:(id)arg1 visitRenderClient:(CDUnknownBlockType)arg2;
- (void)_setPipelineFilters:(id)arg1 shouldUpdateContent:(_Bool)arg2;
@property(nonatomic) NSArray *pipelineFilters;
- (void)_setLayerFilters:(id)arg1;
- (id)_renderer;
- (id)_geometry;
- (id)_renderView;
- (id)_scrollView;
- (void)_stopLoopPlayback;
- (void)_startLoopPlayback;
@property(nonatomic) _Bool loopsVideoPlayback;
- (void)_rendererDidFinishPreparingVideo;
- (void)_rendererDidStartPreparingVideo;
- (void)_rendererDidUpdateLivePhoto;
- (void)_rendererDidFinishWithStatistics:(id)arg1;
- (void)_rendererDidCreateAVPlayerController:(id)arg1;
- (id)_livePhotoView;
- (id)_videoPlayerViewWithoutControls;
- (id)_videoPlayerView;
- (void)_transitionToInsets:(struct UIEdgeInsets)arg1;
- (void)_endTransition;
- (void)_beginTransition;
- (void)waitForRender;
- (void)_updateRenderContent;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)_updateContentInsets;
- (struct UIEdgeInsets)_edgeInsetsForContentSize:(struct CGSize)arg1 inFrame:(struct CGRect)arg2;
- (void)_setupViews;
@property(readonly, nonatomic) struct CGRect imageFrame;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromSpace:(id)arg2 toView:(id)arg3;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromView:(id)arg2 toSpace:(id)arg3;
- (struct CGPoint)convertPointFromImage:(struct CGPoint)arg1;
- (struct CGPoint)convertPointToImage:(struct CGPoint)arg1;
- (struct CGSize)_imageSize;
- (void)layoutSubviews;
- (id)_imageLayer;
- (_Bool)isReady;
@property(nonatomic) double minimumZoomScale;
@property(nonatomic) double maximumZoomScale;
@property(nonatomic) double zoomScale;
- (void)setZoomScaleToFit;
- (void)didMoveToWindow;
@property(copy, nonatomic) NUComposition *composition;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

