//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PUOneUpAssetTransitionInfo, UIView;

@interface PUOneUpAssetTransitionContext : NSObject
{
    _Bool _shouldHideBackground;
    UIView *_containerView;
    UIView *_fromView;
    UIView *_snapshotView;
    PUOneUpAssetTransitionInfo *_transitionInfo;
    CDUnknownBlockType _animationBlock;
}

+ (id)oneUpAssetTransitionContextWithContainerView:(id)arg1 fromView:(id)arg2 snapshotView:(id)arg3 transitionInfo:(id)arg4;
@property(copy, nonatomic, setter=_setAnimationBlock:) CDUnknownBlockType animationBlock; // @synthesize animationBlock=_animationBlock;
@property(retain, nonatomic, setter=_setTransitionInfo:) PUOneUpAssetTransitionInfo *transitionInfo; // @synthesize transitionInfo=_transitionInfo;
@property(nonatomic, setter=_setShouldHideBackground:) _Bool shouldHideBackground; // @synthesize shouldHideBackground=_shouldHideBackground;
@property(retain, nonatomic, setter=_setSnapshotView:) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(retain, nonatomic, setter=_setFromView:) UIView *fromView; // @synthesize fromView=_fromView;
@property(retain, nonatomic, setter=_setContainerView:) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (id)oneUpTransitionContextWithAnimationBlock:(CDUnknownBlockType)arg1;
- (id)oneUpTransitionContextWithContextShouldHideBackground:(_Bool)arg1;
- (id)oneUpTransitionContextWithContextWithContainerView:(id)arg1;

@end

