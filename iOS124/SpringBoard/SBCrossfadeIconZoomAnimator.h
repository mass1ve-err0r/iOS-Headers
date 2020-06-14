//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBScaleIconZoomAnimator.h"

@class SBCrossfadeZoomSettings, UIView;

@interface SBCrossfadeIconZoomAnimator : SBScaleIconZoomAnimator
{
    UIView *_crossfadeView;
    _Bool _performsTrueCrossfade;
    _Bool _masksCorners;
}

@property(nonatomic) _Bool masksCorners; // @synthesize masksCorners=_masksCorners;
@property(nonatomic) _Bool performsTrueCrossfade; // @synthesize performsTrueCrossfade=_performsTrueCrossfade;
- (void).cxx_destruct;
- (double)_appSnapshotCornerRadiusForFraction:(double)arg1;
- (struct CGPoint)_zoomedIconCenter;
- (struct CGRect)_zoomedFrame;
- (void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(_Bool)arg4 sharedCompletion:(CDUnknownBlockType)arg5;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_cleanupAnimation;
- (void)_cleanupZoom;
- (void)_setAnimationFraction:(double)arg1;
- (void)_prepareAnimation;
- (void)_delayedForRotation;
- (_Bool)fadesHomeScreen;
- (double)maxHomeScreenZoomScale;
- (id)initWithFolderController:(id)arg1 crossfadeView:(id)arg2 icon:(id)arg3;
- (void)_assertCrossfadeViewSizeIfNecessary;

// Remaining properties
@property(retain, nonatomic) SBCrossfadeZoomSettings *settings; // @dynamic settings;

@end

