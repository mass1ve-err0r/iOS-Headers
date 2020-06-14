//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, PKDrawing, PKStrokeGenerator;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, PKControllerDelegate, PKRendererControllerProtocol;

@interface PKController : NSObject
{
    _Bool _liveInteraction;
    _Bool _isSuspended;
    _Bool _previewsSuspended;
    NSObject<PKControllerDelegate> *_delegate;
    NSMutableArray *_renderedStrokes;
    id <PKRendererControllerProtocol> _rendererController;
    PKDrawing *_drawing;
    NSObject<OS_dispatch_semaphore> *_interactSemaphore;
    NSObject<OS_dispatch_queue> *_interactQueue;
    NSObject<OS_dispatch_queue> *_suspendQueue;
    NSObject<OS_dispatch_queue> *_previewQueue;
    NSArray *_additionalStrokes;
    NSArray *_hideAdditionalStrokes;
}

+ (void)updatesFrom:(id)arg1 to:(id)arg2 newStrokesToRender:(id *)arg3 redrawAllInRect:(struct CGRect *)arg4;
@property(retain, nonatomic) NSArray *hideAdditionalStrokes; // @synthesize hideAdditionalStrokes=_hideAdditionalStrokes;
@property(retain, nonatomic) NSArray *additionalStrokes; // @synthesize additionalStrokes=_additionalStrokes;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *previewQueue; // @synthesize previewQueue=_previewQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *suspendQueue; // @synthesize suspendQueue=_suspendQueue;
@property(nonatomic) _Bool previewsSuspended; // @synthesize previewsSuspended=_previewsSuspended;
@property(nonatomic) _Bool isSuspended; // @synthesize isSuspended=_isSuspended;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *interactQueue; // @synthesize interactQueue=_interactQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *interactSemaphore; // @synthesize interactSemaphore=_interactSemaphore;
@property(retain, nonatomic) PKDrawing *drawing; // @synthesize drawing=_drawing;
@property _Bool liveInteraction; // @synthesize liveInteraction=_liveInteraction;
@property(retain, nonatomic) id <PKRendererControllerProtocol> rendererController; // @synthesize rendererController=_rendererController;
@property(retain, nonatomic) NSMutableArray *renderedStrokes; // @synthesize renderedStrokes=_renderedStrokes;
@property(nonatomic) __weak NSObject<PKControllerDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)addNewRenderedStroke:(id)arg1 preDrawingChangedBlock:(CDUnknownBlockType)arg2;
- (void)imageWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_renderAllInStrokeSpaceRect:(struct CGRect)arg1 selectedStrokes:(id)arg2 hideSelected:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_renderAllInStrokeSpaceRect:(struct CGRect)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(struct CGRect)arg2 completion:(CDUnknownBlockType)arg3;
- (void)drawingChanged;
- (void)_drawingChanged;
- (void)_didRenderStrokes:(id)arg1;
- (void)_renderStrokes:(id)arg1 renderIntermediateSteps:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)renderStrokes:(id)arg1 intoTile:(id)arg2;
- (void)renderTilesIntoTiles:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)renderTiles:(id)arg1 tileTransform:(struct CGAffineTransform)arg2 completion:(CDUnknownBlockType)arg3;
- (void)renderStrokes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)renderImage:(struct CGImage *)arg1 andMask:(struct CGImage *)arg2 forRenderedStrokes:(id)arg3 thenRenderStrokes:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)renderImage:(struct CGImage *)arg1 andMask:(struct CGImage *)arg2 forRenderedStrokes:(id)arg3 thenRenderStrokes:(id)arg4 inStrokeSpaceClipRect:(struct CGRect)arg5 completion:(CDUnknownBlockType)arg6;
- (void)removeStrokesInRect:(struct CGRect)arg1 from:(id)arg2;
- (void)applyCommands:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)applyCommand:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_applyCommands:(id)arg1 interactCompletion:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)clearAdditionalStrokes;
- (void)updateDrawing:(_Bool)arg1 withAdditionalStrokes:(id)arg2 hide:(_Bool)arg3 isErasing:(_Bool)arg4;
- (void)updateDrawingFrom:(id)arg1;
- (void)_updateDrawing:(id)arg1 erasedStrokes:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateDrawingWithErasedStrokes:(id)arg1;
- (void)updateDrawing;
- (void)updateOrientation:(long long)arg1;
- (void)performAsyncInteractBlock:(CDUnknownBlockType)arg1;
- (void)_renderImage:(struct CGImage *)arg1 andMask:(struct CGImage *)arg2;
- (_Bool)_updateFrom:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setDrawing:(id)arg1 initialDrawing:(id)arg2 withImage:(struct CGImage *)arg3 andMask:(struct CGImage *)arg4 setupComplete:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (void)setDrawing:(id)arg1 initialDrawing:(id)arg2 withImage:(struct CGImage *)arg3 andMask:(struct CGImage *)arg4 setupComplete:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (void)setDrawing:(id)arg1 tiles:(id)arg2 tileTransform:(struct CGAffineTransform)arg3 setupComplete:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (_Bool)_loadInitialDrawing:(id)arg1 withImage:(struct CGImage *)arg2 andMask:(struct CGImage *)arg3;
- (void)resumeDrawing;
- (void)suspendDrawingImmediately:(_Bool)arg1;
- (void)suspendDrawing;
- (void)resumePreviews;
- (void)suspendPreviews;
- (void)didEndLiveInteraction;
- (void)didStartLiveInteractionWith:(id)arg1;
- (void)cancelLongRunningRenders;
@property(readonly, nonatomic) PKStrokeGenerator *inputController;
- (void)teardown;
- (id)initWithPixelSize:(struct CGSize)arg1 actualSize:(struct CGSize)arg2 renderQueue:(id)arg3;
- (id)init;

@end

