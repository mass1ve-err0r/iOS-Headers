//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSNumber, UIFocusAnimationCoordinator;

__attribute__((visibility("hidden")))
@interface _UIFocusAnimationCoordinatorManager : NSObject
{
    UIFocusAnimationCoordinator *_activeFocusAnimationCoordinator;
    NSHashTable *_unfocusingItems;
    double _lastFocusUpdateTime;
    UIFocusAnimationCoordinator *_lastFocusingItemAnimationCoordinator;
    NSNumber *_inheritedAnimationCoordinatorActiveAnimation;
}

@property(retain, nonatomic) NSNumber *inheritedAnimationCoordinatorActiveAnimation; // @synthesize inheritedAnimationCoordinatorActiveAnimation=_inheritedAnimationCoordinatorActiveAnimation;
@property(retain, nonatomic) UIFocusAnimationCoordinator *lastFocusingItemAnimationCoordinator; // @synthesize lastFocusingItemAnimationCoordinator=_lastFocusingItemAnimationCoordinator;
@property(nonatomic) double lastFocusUpdateTime; // @synthesize lastFocusUpdateTime=_lastFocusUpdateTime;
@property(readonly, nonatomic) NSHashTable *unfocusingItems; // @synthesize unfocusingItems=_unfocusingItems;
@property(retain, nonatomic) UIFocusAnimationCoordinator *activeFocusAnimationCoordinator; // @synthesize activeFocusAnimationCoordinator=_activeFocusAnimationCoordinator;
- (void).cxx_destruct;
- (void)_performDelayedFocusingAnimationIfNecessary;
- (void)didUpdateFocusInContext:(id)arg1 fromItem:(id)arg2;
- (id)willUpdateFocusInContext:(id)arg1;
- (id)init;

@end

