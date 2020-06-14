//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/NSObject-Protocol.h>

@class UICollisionBehavior;
@protocol NSCopying, UIDynamicItem;

@protocol UICollisionBehaviorDelegate <NSObject>

@optional
- (void)collisionBehavior:(UICollisionBehavior *)arg1 endedContactForItem:(id <UIDynamicItem>)arg2 withBoundaryIdentifier:(id <NSCopying>)arg3;
- (void)collisionBehavior:(UICollisionBehavior *)arg1 beganContactForItem:(id <UIDynamicItem>)arg2 withBoundaryIdentifier:(id <NSCopying>)arg3 atPoint:(struct CGPoint)arg4;
- (void)collisionBehavior:(UICollisionBehavior *)arg1 endedContactForItem:(id <UIDynamicItem>)arg2 withItem:(id <UIDynamicItem>)arg3;
- (void)collisionBehavior:(UICollisionBehavior *)arg1 beganContactForItem:(id <UIDynamicItem>)arg2 withItem:(id <UIDynamicItem>)arg3 atPoint:(struct CGPoint)arg4;
@end
