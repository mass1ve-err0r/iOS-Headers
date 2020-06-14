//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIKeyboardSplitTransitionView.h>

@class CALayer, NSMutableDictionary, UIKBCacheToken;

__attribute__((visibility("hidden")))
@interface UIKeyboardSliceTransitionView : UIKeyboardSplitTransitionView
{
    struct CGImage *_defaultKeyplaneImage;
    struct CGImage *_splitKeyplaneImage;
    CALayer *_leftKeys;
    CALayer *_rightKeys;
    CALayer *_spaceFill;
    NSMutableDictionary *_controlKeys;
    CALayer *_topEdgeHighlight;
    UIKBCacheToken *_keyplaneToken;
    long long _orientation;
    struct {
        unsigned int position:1;
        unsigned int slices:1;
        unsigned int backgroundAndShadows:1;
        unsigned int backgroundGradients:1;
        unsigned int topEdgeHighlight:1;
        unsigned int shiftKeys:1;
        unsigned int returnKeys:1;
        unsigned int moreIntlKeys:1;
    } _rebuildFlags;
}

- (_Bool)canDisplayTransition;
- (void)updateWithProgress:(double)arg1;
- (void)rebuildControlKeys:(unsigned long long)arg1;
- (void)rebuildFromKeyplane:(id)arg1 toKeyplane:(id)arg2 startToken:(id)arg3 endToken:(id)arg4 keyboardType:(long long)arg5 orientation:(long long)arg6;
- (void)updateTransition;
- (void)_delayedUpdateTransition;
- (void)setHidden:(_Bool)arg1;
- (void)transformForProgress:(double)arg1;
- (id)meshTransformForProgress:(double)arg1;
- (void)rebuildMoreIntlKeys;
- (void)rebuildReturnSlices;
- (void)rebuildShiftSlices;
- (void)rebuildSliceTransitions;
- (void)refreshKeyplaneImages;
- (void)updateTransitionForSlice:(id)arg1 withStart:(id)arg2 startContents:(id)arg3 end:(id)arg4 endContents:(id)arg5 updateContents:(_Bool)arg6;
- (void)rebuildBackgroundGradientTransitions;
- (void)rebuildBackgroundAndShadowTransitions;
- (void)rebuildShadows;
- (void)rebuildTopEdgeHighlightTransition;
- (id)crossfadeOpacityAnimation;
- (void)rebuildPositionTransition;
- (double)adjustedRightWidthAtMergePoint;
- (double)adjustedLeftWidthAtMergePoint;
- (struct CGImage *)splitKeyboardImage;
- (struct CGImage *)defaultKeyboardImage;
- (struct CGImage *)getKeyboardImageAsSplit:(_Bool)arg1;
- (void)rebuildTransitionForSplitStyleChange:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)setRebuildFlags;
- (void)initializeLayers;
- (id)initWithFrame:(struct CGRect)arg1;

@end

