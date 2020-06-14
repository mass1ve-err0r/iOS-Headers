//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSDAnimationSession-Protocol.h>

@class CALayer, KNAnimatedSlideView, KNAnimatedTextureManager, KNAnimationContext, KNAnimationTestResultLogger, KNShow, KNSlideNode, NSArray, NSMutableArray, NSString, TSDBitmapRenderingQualityInfo, TSDGLLayer, TSDMetalLayer, TSKAccessController;
@protocol MTLDevice, TSDCanvasDelegate, TSKAccessControllerReadTicket;

__attribute__((visibility("hidden")))
@interface KNPlaybackSession : NSObject <TSDAnimationSession>
{
    KNSlideNode *_currentSlideNode;
    _Bool _hasEndShowHandlerBeenCancelled;
    unsigned int _isMetalEnabledByCaller:1;
    unsigned int _isMetalCapable:1;
    unsigned int _isMetalCapableCheckInitialized:1;
    unsigned int _isDiscreteGPUAcquired:1;
    CALayer *_noMetalBadgeLayer;
    _Bool _disableAutoAnimationRemoval;
    _Bool _disableTransitionTextureCaching;
    _Bool _isExitingShow;
    _Bool _isMovieExport;
    _Bool _isShowLayerVisible;
    _Bool _shouldAlwaysSetCurrentGLContextWhenDrawing;
    _Bool _shouldAnimateTransitionOnLastSlide;
    _Bool _shouldAnimateNullTransitions;
    _Bool _shouldAutomaticallyPlayMovies;
    _Bool _shouldDrawTexturesAsynchronously;
    _Bool _shouldForceTextureGeneration;
    _Bool _shouldNotBakeActionTextures;
    _Bool _shouldPreferCARenderer;
    _Bool _shouldShowVideoReflectionsAndMasks;
    _Bool _shouldUseContentlessLayers;
    _Bool _shouldUseSourceImage;
    _Bool _shouldSkipBuilds;
    _Bool _shouldRespectSkippedSlides;
    _Bool _shouldAlwaysLoop;
    _Bool _shouldPreserveTransparency;
    _Bool _shouldExcludeFloatingComments;
    id <TSKAccessControllerReadTicket> _accessControllerReadTicket;
    KNSlideNode *_alternateNextSlideNode;
    KNAnimatedSlideView *_animatedSlideViewForNextSlide;
    KNAnimatedTextureManager *_textureManager;
    KNAnimationContext *_animationContext;
    KNAnimationTestResultLogger *_animationTestResultLogger;
    TSDBitmapRenderingQualityInfo *_bitmapRenderingQualityInfo;
    NSMutableArray *_breadCrumbTrail;
    id <TSDCanvasDelegate> _canvasDelegate;
    CDUnknownBlockType _endShowHandler;
    long long _playMode;
    CALayer *_rootLayer;
    id <MTLDevice> _metalDevice;
    TSDMetalLayer *_sharedMetalLayer;
    KNShow *_show;
    NSArray *_slideNodesWithinPlayableRange;
    TSDGLLayer *_sharedGLLayer;
    NSMutableArray *_animationDurationArray;
    NSMutableArray *_eventDurationArray;
    NSMutableArray *_workDurationArray;
    NSMutableArray *_animationStringArray;
}

@property(retain, nonatomic) NSMutableArray *animationStringArray; // @synthesize animationStringArray=_animationStringArray;
@property(retain, nonatomic) NSMutableArray *workDurationArray; // @synthesize workDurationArray=_workDurationArray;
@property(retain, nonatomic) NSMutableArray *eventDurationArray; // @synthesize eventDurationArray=_eventDurationArray;
@property(retain, nonatomic) NSMutableArray *animationDurationArray; // @synthesize animationDurationArray=_animationDurationArray;
@property(nonatomic) _Bool shouldExcludeFloatingComments; // @synthesize shouldExcludeFloatingComments=_shouldExcludeFloatingComments;
@property(nonatomic) _Bool shouldPreserveTransparency; // @synthesize shouldPreserveTransparency=_shouldPreserveTransparency;
@property(retain, nonatomic) TSDGLLayer *sharedGLLayer; // @synthesize sharedGLLayer=_sharedGLLayer;
@property(copy, nonatomic) NSArray *slideNodesWithinPlayableRange; // @synthesize slideNodesWithinPlayableRange=_slideNodesWithinPlayableRange;
@property(nonatomic) _Bool shouldAlwaysLoop; // @synthesize shouldAlwaysLoop=_shouldAlwaysLoop;
@property(nonatomic) _Bool shouldRespectSkippedSlides; // @synthesize shouldRespectSkippedSlides=_shouldRespectSkippedSlides;
@property(nonatomic) _Bool shouldSkipBuilds; // @synthesize shouldSkipBuilds=_shouldSkipBuilds;
@property(readonly, nonatomic) KNShow *show; // @synthesize show=_show;
@property(nonatomic) _Bool shouldUseSourceImage; // @synthesize shouldUseSourceImage=_shouldUseSourceImage;
@property(nonatomic) _Bool shouldUseContentlessLayers; // @synthesize shouldUseContentlessLayers=_shouldUseContentlessLayers;
@property(nonatomic) _Bool shouldShowVideoReflectionsAndMasks; // @synthesize shouldShowVideoReflectionsAndMasks=_shouldShowVideoReflectionsAndMasks;
@property(nonatomic) _Bool shouldPreferCARenderer; // @synthesize shouldPreferCARenderer=_shouldPreferCARenderer;
@property(nonatomic) _Bool shouldNotBakeActionTextures; // @synthesize shouldNotBakeActionTextures=_shouldNotBakeActionTextures;
@property(nonatomic) _Bool shouldForceTextureGeneration; // @synthesize shouldForceTextureGeneration=_shouldForceTextureGeneration;
@property(nonatomic) _Bool shouldDrawTexturesAsynchronously; // @synthesize shouldDrawTexturesAsynchronously=_shouldDrawTexturesAsynchronously;
@property(nonatomic) _Bool shouldAutomaticallyPlayMovies; // @synthesize shouldAutomaticallyPlayMovies=_shouldAutomaticallyPlayMovies;
@property(nonatomic) _Bool shouldAnimateNullTransitions; // @synthesize shouldAnimateNullTransitions=_shouldAnimateNullTransitions;
@property(nonatomic) _Bool shouldAnimateTransitionOnLastSlide; // @synthesize shouldAnimateTransitionOnLastSlide=_shouldAnimateTransitionOnLastSlide;
@property(nonatomic) _Bool shouldAlwaysSetCurrentGLContextWhenDrawing; // @synthesize shouldAlwaysSetCurrentGLContextWhenDrawing=_shouldAlwaysSetCurrentGLContextWhenDrawing;
@property(retain, nonatomic) TSDMetalLayer *sharedMetalLayer; // @synthesize sharedMetalLayer=_sharedMetalLayer;
@property(readonly, nonatomic) id <MTLDevice> metalDevice; // @synthesize metalDevice=_metalDevice;
@property(readonly, nonatomic) CALayer *rootLayer; // @synthesize rootLayer=_rootLayer;
@property(nonatomic) long long playMode; // @synthesize playMode=_playMode;
@property(nonatomic) _Bool isShowLayerVisible; // @synthesize isShowLayerVisible=_isShowLayerVisible;
@property(nonatomic) _Bool isMovieExport; // @synthesize isMovieExport=_isMovieExport;
@property(nonatomic) _Bool isExitingShow; // @synthesize isExitingShow=_isExitingShow;
@property(copy, nonatomic) CDUnknownBlockType endShowHandler; // @synthesize endShowHandler=_endShowHandler;
@property(nonatomic) _Bool disableTransitionTextureCaching; // @synthesize disableTransitionTextureCaching=_disableTransitionTextureCaching;
@property(nonatomic) _Bool disableAutoAnimationRemoval; // @synthesize disableAutoAnimationRemoval=_disableAutoAnimationRemoval;
@property(nonatomic) __weak id <TSDCanvasDelegate> canvasDelegate; // @synthesize canvasDelegate=_canvasDelegate;
@property(retain, nonatomic) NSMutableArray *breadCrumbTrail; // @synthesize breadCrumbTrail=_breadCrumbTrail;
@property(nonatomic) TSDBitmapRenderingQualityInfo *bitmapRenderingQualityInfo; // @synthesize bitmapRenderingQualityInfo=_bitmapRenderingQualityInfo;
@property(readonly, nonatomic) KNAnimationTestResultLogger *animationTestResultLogger; // @synthesize animationTestResultLogger=_animationTestResultLogger;
@property(readonly, nonatomic) KNAnimationContext *animationContext; // @synthesize animationContext=_animationContext;
@property(retain, nonatomic) KNAnimatedTextureManager *textureManager; // @synthesize textureManager=_textureManager;
@property(readonly, nonatomic) KNAnimatedSlideView *animatedSlideViewForNextSlide; // @synthesize animatedSlideViewForNextSlide=_animatedSlideViewForNextSlide;
@property(nonatomic) __weak KNSlideNode *alternateNextSlideNode; // @synthesize alternateNextSlideNode=_alternateNextSlideNode;
@property(nonatomic) __weak id <TSKAccessControllerReadTicket> accessControllerReadTicket; // @synthesize accessControllerReadTicket=_accessControllerReadTicket;
- (void).cxx_destruct;
- (unsigned long long)p_findIndexIncludingUUID:(id)arg1 object:(id)arg2;
- (_Bool)p_checkNodeEqualityIncludingUUID:(id)arg1 secondSlideNode:(id)arg2;
- (_Bool)p_checkArrayInclusionIncludingUUID:(id)arg1 object:(id)arg2;
- (_Bool)p_slideNodeIsPlayable:(id)arg1;
- (id)p_intersectArraysWithUUIDEquality:(id)arg1 secondArray:(id)arg2;
- (void)discardDiscreteGPUIfAcquired;
- (void)acquireDiscreteGPUIfNeeded;
- (void)enableMetalBadge:(_Bool)arg1;
- (void)p_setupBadging;
@property(readonly, nonatomic) _Bool isMetalEnabled;
@property(readonly, nonatomic) _Bool isMetalCapable;
- (void)makeSharedMetalLayerVisible:(_Bool)arg1;
- (void)setSharedGLContextAsCurrentContextShouldCreate:(_Bool)arg1;
- (void)tearDownSharedGLLayer;
@property(readonly, nonatomic) NSArray *playableSlideNodes;
- (void)resizeShowLayer;
@property(readonly, nonatomic) _Bool isWideGamut;
- (_Bool)isPreCachingOperationActive;
- (void)cancelEndShowHandler;
- (void)p_executeEndShowHandler;
- (void)executeEndShowHandlerAfterDelay:(double)arg1;
- (void)waitUntilSlideTextureRenderingIsCompleteForIdentifier:(id)arg1;
- (id)repForInfo:(id)arg1 onCanvas:(id)arg2;
@property(readonly, nonatomic) double showScale;
@property(readonly, nonatomic) _Bool isOffscreenPlayback;
@property(readonly, nonatomic) _Bool isPreview;
- (unsigned long long)slideNumberForSlideNode:(id)arg1;
- (id)animatedSlideViewFor:(id)arg1;
@property(readonly, nonatomic) KNAnimatedSlideView *animatedSlideViewForCurrentSlide;
- (id)breadCrumb;
- (void)dropABreadCrumb;
- (id)gotoLastSlide;
- (id)lastSlideNode;
- (id)gotoFirstSlide;
- (id)firstSlideNode;
@property(readonly, nonatomic) _Bool atEndOfDeck;
@property(readonly, nonatomic) _Bool atBeginningOfDeck;
- (id)gotoPreviousSlide;
- (id)previousSlideNodeBeforeSlideNode:(id)arg1;
- (id)previousSlideNodeBeforeCurrent;
- (id)gotoNextSlide;
- (id)nextSlideAfterCurrent;
- (id)p_nextBestSlideNodeToSlideNode:(id)arg1;
- (id)nextSlideNodeAfterSlideNode:(id)arg1;
- (id)nextSlideNodeAfterCurrent;
- (id)currentSlideNode;
- (id)currentSlide;
- (void)gotoSlideNode:(id)arg1;
- (void)p_setCurrentSlideNode:(id)arg1;
- (void)performSlideRead:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) TSKAccessController *accessController;
- (void)tearDown;
- (void)dealloc;
- (id)init;
- (id)initWithShow:(id)arg1 viewScale:(double)arg2 showLayer:(id)arg3 canvasDelegate:(id)arg4 isMetalEnabled:(_Bool)arg5 endShowHandler:(CDUnknownBlockType)arg6;
@property(readonly, nonatomic) _Bool shouldShowInstructionalText;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

