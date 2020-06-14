//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import <VideosUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUICollectionView : UICollectionView <UIGestureRecognizerDelegate>
{
    struct UIEdgeInsets _gradientBoundsInsets;
    struct {
        unsigned int layoutBelowDisabled:1;
    } _flags;
}

@property(nonatomic) struct UIEdgeInsets gradientBoundsInsets; // @synthesize gradientBoundsInsets=_gradientBoundsInsets;
- (void)_getGradientMaskBounds:(out struct CGRect *)arg1 startInsets:(out struct UIEdgeInsets *)arg2 endInsets:(out struct UIEdgeInsets *)arg3 intensities:(out struct UIEdgeInsets *)arg4;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)_performWithoutLayoutBelow:(CDUnknownBlockType)arg1;
- (void)layoutBelowIfNeeded;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (_Bool)_shouldFadeCellsForBoundChangeWhileRotating;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

