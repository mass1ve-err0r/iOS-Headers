//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSArray, UIViewPropertyAnimator, _UIDragSetDownAnimationWindow;
@protocol _UIDraggingItemVisualTarget;

@interface _UIDragSetDownAnimation : NSObject
{
    long long _state;
    NSArray *_animationItems;
    CDUnknownBlockType _completion;
    _Bool _forSource;
    id <_UIDraggingItemVisualTarget> _defaultVisualTarget;
    _UIDragSetDownAnimationWindow *_window;
    _Bool _shouldHideWindowOnCompletion;
    CADisplayLink *_displayLink;
    UIViewPropertyAnimator *_remainingItemsPropertyAnimator;
}

+ (CDUnknownBlockType)defaultDropAnimationForPlatterView:(id)arg1;
+ (CDUnknownBlockType)defaultMultiItemAnimationForPlatterView:(id)arg1;
+ (CDUnknownBlockType)defaultSingleItemAnimationForPlatterView:(id)arg1;
+ (id)defaultSetDownPropertyAnimator;
- (void).cxx_destruct;
- (void)_beginFadeOutForAnimationItem:(id)arg1;
- (id)_viewForImageComponents:(id)arg1 crossfadingToLocalImageComponents:(id)arg2 totalComponentFrame:(struct CGRect)arg3 preview:(id)arg4 inView:(id)arg5;
- (id)_viewForImageComponents:(id)arg1 totalComponentFrame:(struct CGRect)arg2 preview:(id)arg3 inView:(id)arg4;
- (struct CGRect)_legacy_configureAnimationItem:(id)arg1 withInternalItem:(id)arg2 forDroppedItem:(id)arg3;
- (void)_allAnimationItemsDone;
- (void)_animationItemDone:(id)arg1;
- (void)_animationItemReachedTarget:(id)arg1;
- (void)displayLinkFired:(id)arg1;
- (void)_configureAnimationItem:(id)arg1 forDroppedItem:(id)arg2 crossfadingToTargetedPreview:(id)arg3;
- (void)_configureSystemDefaultAnimationForItem:(id)arg1 droppedItem:(id)arg2 isCancel:(_Bool)arg3;
- (void)begin;
- (void)_setCenterAndVelocityOfAnimationItem:(id)arg1 fromDroppedItem:(id)arg2;
- (void)takeUpdatedVisibleDroppedItems:(id)arg1;
- (id)initWithVisibleDroppedItems:(id)arg1 items:(id)arg2 forSource:(_Bool)arg3 defaultVisualTarget:(id)arg4 completion:(CDUnknownBlockType)arg5;

@end

