//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMSnapshotView, CAMViewfinderView;

@interface CAMViewfinderFlipTransition : NSObject
{
    CAMViewfinderView *__viewfinderView;
    CAMSnapshotView *__frontSnapshotView;
    CAMSnapshotView *__backSnapshotView;
    CAMSnapshotView *__targetSnapshotView;
    unsigned long long __currentAnimationID;
}

@property(nonatomic, setter=_setCurrentAnimationID:) unsigned long long _currentAnimationID; // @synthesize _currentAnimationID=__currentAnimationID;
@property(retain, nonatomic, setter=_setTargetSnapshotView:) CAMSnapshotView *_targetSnapshotView; // @synthesize _targetSnapshotView=__targetSnapshotView;
@property(retain, nonatomic, setter=_setBackSnapshotView:) CAMSnapshotView *_backSnapshotView; // @synthesize _backSnapshotView=__backSnapshotView;
@property(retain, nonatomic, setter=_setFrontSnapshotView:) CAMSnapshotView *_frontSnapshotView; // @synthesize _frontSnapshotView=__frontSnapshotView;
@property(readonly, nonatomic) __weak CAMViewfinderView *_viewfinderView; // @synthesize _viewfinderView=__viewfinderView;
- (void).cxx_destruct;
- (void)completeTransitionToLivePreviewWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_snapshotFlipAnimationFromValue:(double)arg1 toValue:(double)arg2;
- (double)_backSnapshotTargetRadiansForDirection:(unsigned long long)arg1 frontSnapshotRadians:(double)arg2;
- (double)_frontSnapshotTargetRadiansForDirection:(unsigned long long)arg1 fromRadians:(double)arg2;
- (void)_getCurrentRadians:(out double *)arg1 targetRadians:(out double *)arg2 forDirection:(unsigned long long)arg3 withAnimation:(id)arg4 onFrontSnapshotLayer:(id)arg5;
- (void)performFlipTransitionWithDirection:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_cleanupFromFlipTransition;
- (id)initWithViewfinderView:(id)arg1;

@end

