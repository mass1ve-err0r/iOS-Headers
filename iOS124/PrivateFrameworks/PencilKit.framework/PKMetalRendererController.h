//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/PKRendererControllerProtocol-Protocol.h>

@class CAMetalLayer, NSMutableArray, NSString, PKLinedPaper, PKMetalRenderer, PKStrokeGenerator;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PKMetalRendererController : NSObject <PKRendererControllerProtocol>
{
    NSObject<OS_dispatch_queue> *_renderQueue;
    _Atomic int _cancelLongRunningRenderingCount;
    _Atomic int _cancelAllRendering;
    NSObject<OS_dispatch_semaphore> *_canBeginRenderSemaphore;
    struct atomic_flag _readyToBeginRender;
    _Atomic double _lastFrameDuration;
    _Atomic unsigned long long _lastPresentationTime;
    _Atomic int _queuedRenders;
    NSMutableArray *_postPresentCallbacks;
    _Bool _isTorndown;
    struct CGSize _pixelSize;
    struct CGSize _actualSize;
    double _presentationCount;
    double _presentationDelay;
    double _presentationDelayGrowth;
    double _presentationMaxDelay;
    CDUnknownBlockType _vSyncTimeoutBlock;
    struct PKRunningStat _strokeLatencyStat;
    PKStrokeGenerator *_inputController;
    PKLinedPaper *_linedPaper;
    CAMetalLayer *_presentationLayer;
    PKMetalRenderer *_renderer;
    double _inputScale;
    struct CGRect _viewScissor;
    struct CGAffineTransform _strokeTransform;
    struct CGAffineTransform _paperTransform;
    struct CGAffineTransform _renderTransform;
}

@property double inputScale; // @synthesize inputScale=_inputScale;
@property struct CGAffineTransform renderTransform; // @synthesize renderTransform=_renderTransform;
@property(retain, nonatomic) PKMetalRenderer *renderer; // @synthesize renderer=_renderer;
@property(nonatomic) __weak CAMetalLayer *presentationLayer; // @synthesize presentationLayer=_presentationLayer;
@property(readonly, nonatomic) struct CGSize pixelSize; // @synthesize pixelSize=_pixelSize;
@property(readonly, nonatomic) struct CGSize actualSize; // @synthesize actualSize=_actualSize;
@property(nonatomic) struct CGAffineTransform paperTransform; // @synthesize paperTransform=_paperTransform;
@property(nonatomic) struct CGRect viewScissor; // @synthesize viewScissor=_viewScissor;
@property(retain, nonatomic) PKLinedPaper *linedPaper; // @synthesize linedPaper=_linedPaper;
@property(readonly, nonatomic) PKStrokeGenerator *inputController; // @synthesize inputController=_inputController;
@property(nonatomic) struct CGAffineTransform strokeTransform; // @synthesize strokeTransform=_strokeTransform;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *renderQueue; // @synthesize renderQueue=_renderQueue;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)setupCurrentDrawable;
- (_Bool)_renderAheadWithTransform:(struct CGAffineTransform)arg1 at:(double)arg2;
- (void)callBlockAfterPresenting:(CDUnknownBlockType)arg1;
- (void)didFinishRendering:(CDUnknownBlockType)arg1;
- (_Bool)prerenderWithTransform:(struct CGAffineTransform)arg1 inputScale:(double)arg2 at:(double)arg3;
- (void)pokeEventDispatcher;
- (void)_renderLiveStrokeAndPresentWithTransform:(struct CGAffineTransform)arg1 at:(double)arg2;
- (void)_present:(double)arg1;
- (void)_renderAndPresent:(_Bool)arg1 withTransform:(struct CGAffineTransform)arg2;
- (void)_renderDrawPoints;
- (void)changeRenderSize;
- (void)drawingCancelledWithCompletion:(CDUnknownBlockType)arg1;
- (void)drawingCancelled;
- (void)drawingEnded:(id)arg1 finishStrokeBlock:(CDUnknownBlockType)arg2;
- (void)drawingBeganWithStroke:(id)arg1;
- (void)drawStrokesAfterClear:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 strokeTransform:(struct CGAffineTransform)arg3 useLayerContext:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)drawStrokesAfterClear:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;
- (void)drawStrokes:(id)arg1 renderIntermediateSteps:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)drawStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;
- (void)purgeOriginalBackFramebuffer;
- (void)flushMemoryIfPossible;
- (void)clear;
- (struct CGImage *)newCGImageWithClipRect:(struct CGRect)arg1;
- (struct CGImage *)newCGImage;
- (void)drawImage:(struct CGImage *)arg1 andMask:(struct CGImage *)arg2 clippedToStrokeSpaceRect:(struct CGRect)arg3;
- (void)drawImage:(struct CGImage *)arg1 andMask:(struct CGImage *)arg2;
- (void)renderTilesIntoTiles:(id)arg1;
- (void)renderTiles:(id)arg1 tileTransform:(struct CGAffineTransform)arg2;
- (void)_copyIntoTilesFromRenderQueue:(id)arg1 tileTransform:(struct CGAffineTransform)arg2;
- (void)copyIntoTiles:(id)arg1;
- (_Bool)drawStrokes:(id)arg1 intoTile:(id)arg2 renderCount:(long long)arg3;
- (void)didTeardownTile;
@property(nonatomic) double backboardPaperMultiply;
- (void)setBackgroundColor:(struct CGColor *)arg1;
- (void)setBackgroundImage:(struct CGImage *)arg1;
- (void)_drawStrokesAfterClear:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 strokeTransform:(struct CGAffineTransform)arg3 useLayerContext:(_Bool)arg4 renderCompletion:(CDUnknownBlockType)arg5;
- (void)buildRenderCacheForStrokes:(id)arg1;
- (void)renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 strokeTransform:(struct CGAffineTransform)arg3 imageClipRect:(struct CGRect)arg4 completion:(CDUnknownBlockType)arg5;
- (void)enableRendering;
- (void)disableRendering;
- (_Bool)isAllRenderingCancelled;
- (void)cancelAllRendering;
- (_Bool)isLongRunningRenderingCancelled;
- (void)resumeLongRunningRendersAfterAllWorkIsDone;
- (void)resumeLongRunningRenders;
- (void)cancelLongRunningRenders;
- (void)cancelVSyncTimeoutBlock;
- (void)setup;
- (void)dealloc;
- (void)teardown;
- (void)setPixelSize:(struct CGSize)arg1 actualSize:(struct CGSize)arg2;
- (id)initWithPixelSize:(struct CGSize)arg1 actualSize:(struct CGSize)arg2 renderQueue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

