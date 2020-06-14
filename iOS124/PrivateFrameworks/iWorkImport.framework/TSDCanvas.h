//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable, NSMutableArray, NSSet, TSDInteractiveCanvasController, TSDLayoutController, TSKAccessController, TSKChangeNotifier, TSKDocumentRoot, TSPObjectContext, TSUColor, TSUPointerKeyDictionary;
@protocol OS_dispatch_queue, TSDCanvasDelegate;

__attribute__((visibility("hidden")))
@interface TSDCanvas : NSObject
{
    id <TSDCanvasDelegate> mDelegate;
    TSDInteractiveCanvasController *mCanvasController;
    NSArray *mInfos;
    NSArray *mTopLevelReps;
    NSSet *mAllReps;
    NSArray *mAllRepsOrdered;
    TSUPointerKeyDictionary *mRepsByLayout;
    TSDLayoutController *mLayoutController;
    _Bool mIsTemporaryForLayout;
    struct CGSize mUnscaledSize;
    double mViewScale;
    double mContentsScale;
    _Bool mWideGamut;
    _Bool mIsAnchoredAtRight;
    struct {
        unsigned int layout:1;
        unsigned int reps:1;
        unsigned int visibleBounds:1;
        unsigned int layers:1;
    } mInvalidFlags;
    _Bool mShouldUpdateLayersDuringLayout;
    _Bool mInLayout;
    NSArray *mPreviouslyVisibleLayouts;
    NSMutableArray *mBlocksToPerform;
    NSObject<OS_dispatch_queue> *mBlocksToPerformAccessQueue;
    NSHashTable *mCanvasLayoutObservers;
    _Bool mIgnoringClickThrough;
    TSUColor *mBackgroundColor;
    struct UIEdgeInsets mContentInset;
    _Bool mAllowsFontSubpixelQuantization;
    _Bool mSuppressesShadowsAndReflections;
    _Bool mSuppressesShapeText;
    _Bool mShouldRenderInvisibleContentForNonInteractiveCanvas;
    double i_viewScaleForAudioObjectsInNonInteractiveCanvas;
}

+ (void)p_recursivelyAddOrderedChildrenOfRep:(id)arg1 toArray:(id)arg2;
@property(readonly, nonatomic) _Bool isTemporaryForLayout; // @synthesize isTemporaryForLayout=mIsTemporaryForLayout;
@property(nonatomic) double viewScale; // @synthesize viewScale=mViewScale;
@property(nonatomic) struct CGSize unscaledSize; // @synthesize unscaledSize=mUnscaledSize;
@property(nonatomic) double i_viewScaleForAudioObjectsInNonInteractiveCanvas; // @synthesize i_viewScaleForAudioObjectsInNonInteractiveCanvas;
@property(nonatomic) _Bool shouldRenderInvisibleContentForNonInteractiveCanvas; // @synthesize shouldRenderInvisibleContentForNonInteractiveCanvas=mShouldRenderInvisibleContentForNonInteractiveCanvas;
@property(nonatomic) _Bool suppressesShapeText; // @synthesize suppressesShapeText=mSuppressesShapeText;
@property(nonatomic) _Bool suppressesShadowsAndReflections; // @synthesize suppressesShadowsAndReflections=mSuppressesShadowsAndReflections;
@property(nonatomic) _Bool allowsFontSubpixelQuantization; // @synthesize allowsFontSubpixelQuantization=mAllowsFontSubpixelQuantization;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=mContentInset;
@property(copy, nonatomic) TSUColor *backgroundColor; // @synthesize backgroundColor=mBackgroundColor;
@property(nonatomic) _Bool isAnchoredAtRight; // @synthesize isAnchoredAtRight=mIsAnchoredAtRight;
@property(readonly, nonatomic) TSDLayoutController *layoutController; // @synthesize layoutController=mLayoutController;
@property(readonly, nonatomic) NSSet *allReps; // @synthesize allReps=mAllReps;
@property(readonly, nonatomic) NSArray *topLevelReps; // @synthesize topLevelReps=mTopLevelReps;
@property(copy, nonatomic) NSArray *infosToDisplay; // @synthesize infosToDisplay=mInfos;
@property(nonatomic) __weak id <TSDCanvasDelegate> delegate; // @synthesize delegate=mDelegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect unscaledRectOfLayouts;
@property(readonly, nonatomic) NSArray *allRepsOrdered;
- (void)p_removeAllReps;
- (void)orderRepsForLayout:(id)arg1;
- (_Bool)p_updateRepsFromLayouts;
- (void)p_layoutWithReadLock;
- (struct CGRect)p_bounds;
- (struct CGImage *)i_newImageInContext:(struct CGContext *)arg1 bounds:(struct CGRect)arg2 integralBounds:(struct CGRect)arg3 distortedToMatch:(_Bool)arg4 keepingChildrenPassingTest:(CDUnknownBlockType)arg5;
- (struct CGContext *)i_createContextToDrawImageInScaledRect:(struct CGRect)arg1 withTargetIntegralSize:(struct CGSize)arg2 distortedToMatch:(_Bool)arg3 returningBounds:(struct CGRect *)arg4 integralBounds:(struct CGRect *)arg5;
- (struct CGImage *)i_imageInScaledRect:(struct CGRect)arg1 withTargetIntegralSize:(struct CGSize)arg2 distortedToMatch:(_Bool)arg3 keepingChildrenPassingTest:(CDUnknownBlockType)arg4;
- (struct CGImage *)i_imageInScaledRect:(struct CGRect)arg1 keepingChildrenPassingTest:(CDUnknownBlockType)arg2;
- (struct CGImage *)i_image;
- (void)i_drawRepsInContext:(struct CGContext *)arg1 passingTest:(CDUnknownBlockType)arg2;
- (void)i_drawRepsInContext:(struct CGContext *)arg1 passingTest:(CDUnknownBlockType)arg2 distort:(struct CGAffineTransform)arg3;
- (void)addBitmapsToRenderingQualityInfo:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)i_drawBackgroundInContext:(struct CGContext *)arg1 bounds:(struct CGRect)arg2;
- (void)i_drawBackgroundInContext:(struct CGContext *)arg1;
- (struct CGRect)i_clipRectForCreatingRepsFromLayouts;
- (struct CGRect)i_approximateScaledFrameOfEditingMenuAtPoint:(struct CGPoint)arg1;
- (void)i_unregisterRep:(id)arg1;
- (void)i_registerRep:(id)arg1;
- (_Bool)i_shouldIgnoreClickThrough;
- (void)i_performBlockWhileIgnoringClickThrough:(CDUnknownBlockType)arg1;
- (struct CGRect)visibleUnscaledRectForClippingReps;
- (struct CGSize)convertBoundsToUnscaledSize:(struct CGSize)arg1;
- (struct CGSize)convertUnscaledToBoundsSize:(struct CGSize)arg1;
- (struct CGPoint)convertBoundsToUnscaledPoint:(struct CGPoint)arg1;
- (struct CGPoint)convertUnscaledToBoundsPoint:(struct CGPoint)arg1;
- (struct CGRect)convertBoundsToUnscaledRect:(struct CGRect)arg1;
- (struct CGRect)convertUnscaledToBoundsRect:(struct CGRect)arg1;
@property(readonly, nonatomic) _Bool canvasIsWideGamut;
- (void)i_setCanvasIsWideGamut:(_Bool)arg1;
@property(readonly, nonatomic) double contentsScale;
- (void)i_setContentsScale:(double)arg1;
- (_Bool)isExportingFixedLayoutEPUB;
- (_Bool)isRenderingForKPF;
- (_Bool)isDrawingIntoPDF;
- (_Bool)shouldSuppressBackgrounds;
- (_Bool)shouldShowInstructionalText;
- (_Bool)shouldShowTextOverflowGlyphs;
- (_Bool)isPrinting;
- (_Bool)wantsEditingLayoutsForOffscreenInfos;
@property(readonly, nonatomic) _Bool isCanvasInteractive;
- (_Bool)spellCheckingSuppressed;
- (_Bool)spellCheckingSupported;
- (void)i_unregisterCanvasLayoutObserver:(id)arg1;
- (void)i_registerCanvasLayoutObserver:(id)arg1;
@property(readonly, nonatomic) _Bool supportsAdaptiveLayout;
- (_Bool)i_needsLayout;
- (void)i_layoutIfNeededUpdatingLayerTree;
- (void)i_layoutIfNeeded;
- (void)nonInteractiveLayoutIfNeeded;
- (void)invalidateLayers;
- (void)invalidateVisibleBounds;
- (void)invalidateReps;
- (void)layoutInvalidated;
- (void)recreateAllLayoutsAndReps;
- (id)repForLayout:(id)arg1;
- (void)i_updateInfosInLayoutController;
- (void)i_setInfosToDisplay:(id)arg1 updatingLayoutController:(_Bool)arg2;
@property(readonly, nonatomic) TSDInteractiveCanvasController *canvasController;
- (void)i_setCanvasController:(id)arg1;
@property(readonly, nonatomic) TSKAccessController *accessController;
@property(readonly, nonatomic) TSKChangeNotifier *changeNotifier;
@property(readonly, nonatomic) TSPObjectContext *objectContext;
@property(readonly, nonatomic) TSKDocumentRoot *documentRoot;
- (void)performBlockAfterLayoutIfNecessary:(CDUnknownBlockType)arg1;
- (Class)rootLayoutClass;
- (void)dealloc;
- (void)teardown;
- (id)initForTemporaryLayout;
- (id)initWithLayoutControllerClass:(Class)arg1 delegate:(id)arg2;
- (id)init;
- (id)textRendererForLayer:(id)arg1 context:(struct CGContext *)arg2;

@end

