//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import <AVKit/AVContentTransitioning-Protocol.h>
#import <AVKit/UIScrollViewDelegate-Protocol.h>

@class AVPlayerLayerAndContentOverlayContainerView, NSString, NSValue;
@protocol AVContentTransitioningDelegate;

@interface AVPlayerContentTransitioningView : UIScrollView <UIScrollViewDelegate, AVContentTransitioning>
{
    _Bool _playingOnSecondScreen;
    _Bool _transitionInteractive;
    id <AVContentTransitioningDelegate> _contentTransitioningDelegate;
    AVPlayerLayerAndContentOverlayContainerView *_activeContentView;
    AVPlayerLayerAndContentOverlayContainerView *_transitioningContentView;
    long long _transitionState;
    long long _transitionDirection;
    double _transitionProgress;
    NSValue *_targetContentOffset;
    NSString *_stateDescription;
    long long _boundsOrContentSizeAdjustmentCount;
    struct UIEdgeInsets _contentMargins;
    struct CGRect _frameForActiveContentView;
    struct CGRect _frameForTransitioningContentView;
}

@property(nonatomic, getter=isTransitionInteractive) _Bool transitionInteractive; // @synthesize transitionInteractive=_transitionInteractive;
@property(nonatomic) long long boundsOrContentSizeAdjustmentCount; // @synthesize boundsOrContentSizeAdjustmentCount=_boundsOrContentSizeAdjustmentCount;
@property(nonatomic) struct CGRect frameForTransitioningContentView; // @synthesize frameForTransitioningContentView=_frameForTransitioningContentView;
@property(nonatomic) struct CGRect frameForActiveContentView; // @synthesize frameForActiveContentView=_frameForActiveContentView;
@property(copy, nonatomic) NSString *stateDescription; // @synthesize stateDescription=_stateDescription;
@property(retain, nonatomic) NSValue *targetContentOffset; // @synthesize targetContentOffset=_targetContentOffset;
@property(nonatomic, getter=isPlayingOnSecondScreen) _Bool playingOnSecondScreen; // @synthesize playingOnSecondScreen=_playingOnSecondScreen;
@property(nonatomic) struct UIEdgeInsets contentMargins; // @synthesize contentMargins=_contentMargins;
@property(readonly, nonatomic) double transitionProgress; // @synthesize transitionProgress=_transitionProgress;
@property(readonly, nonatomic) long long transitionDirection; // @synthesize transitionDirection=_transitionDirection;
@property(readonly, nonatomic) long long transitionState; // @synthesize transitionState=_transitionState;
@property(readonly, nonatomic) AVPlayerLayerAndContentOverlayContainerView *transitioningContentView; // @synthesize transitioningContentView=_transitioningContentView;
@property(readonly, nonatomic) AVPlayerLayerAndContentOverlayContainerView *activeContentView; // @synthesize activeContentView=_activeContentView;
@property(nonatomic) __weak id <AVContentTransitioningDelegate> contentTransitioningDelegate; // @synthesize contentTransitioningDelegate=_contentTransitioningDelegate;
- (void).cxx_destruct;
- (id)_makeStateDescription;
- (id)_descriptionForState:(long long)arg1;
- (_Bool)_canTransitionFromState:(long long)arg1 toState:(long long)arg2;
- (struct CGRect)_frameExcludingTransitioningContent;
- (struct CGRect)_frameExcludingActiveContent;
- (void)_ensureContentViews;
- (void)_updateSizeAndContentFrame;
- (_Bool)_isAdjustingBoundsOrContentSize;
- (void)_performBoundsOrContentSizeAdjustment:(CDUnknownBlockType)arg1;
- (void)_updateTransitionStateIfPossible;
- (void)performTransition:(long long)arg1;
- (void)_setTransitionState:(id)arg1 transitionDirection:(id)arg2 transitionProgress:(id)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 playerLayerView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

