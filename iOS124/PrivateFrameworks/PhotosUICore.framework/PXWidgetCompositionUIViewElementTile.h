//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXUIViewBasicTile-Protocol.h>
#import <PhotosUICore/PXWidgetContentViewTransitionCoordinator-Protocol.h>

@class NSString, PXBasicTileAnimationOptions, UIView, _PXWidgetCompositionUIViewElementTileTransitionContext;
@protocol PXWidget;

@interface PXWidgetCompositionUIViewElementTile : NSObject <PXWidgetContentViewTransitionCoordinator, PXUIViewBasicTile>
{
    _Bool __didEmbedContentView;
    id <PXWidget> _widget;
    UIView *__containerView;
    _PXWidgetCompositionUIViewElementTileTransitionContext *__currentTransitionContext;
}

@property(retain, nonatomic, setter=_setCurrentTransitionContext:) _PXWidgetCompositionUIViewElementTileTransitionContext *_currentTransitionContext; // @synthesize _currentTransitionContext=__currentTransitionContext;
@property(nonatomic, setter=_setDidEmbedContentView:) _Bool _didEmbedContentView; // @synthesize _didEmbedContentView=__didEmbedContentView;
@property(readonly, nonatomic) UIView *_containerView; // @synthesize _containerView=__containerView;
@property(readonly, nonatomic) id <PXWidget> widget; // @synthesize widget=_widget;
- (void).cxx_destruct;
- (void)animateAlongsideTransition:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) PXBasicTileAnimationOptions *animationOptions;
@property(readonly, nonatomic) UIView *view;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)_didCompleteTileAnimationWithContext:(id)arg1;
- (void)_didAnimateTileWithContext:(id)arg1;
- (id)_willAnimateTileToGeometry:(struct PXTileGeometry)arg1 withOptions:(id)arg2;
- (void)_embedContentView;
- (id)initWithWidget:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

