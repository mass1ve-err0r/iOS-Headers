//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _UIDynamicValueConvergenceAnimation;

__attribute__((visibility("hidden")))
@interface _UIFocusMotionEffectsController : NSObject
{
    _UIDynamicValueConvergenceAnimation *_rollbackAnimation;
    struct CGPoint _currentOffset;
}

@property(readonly, nonatomic) struct CGPoint currentOffset; // @synthesize currentOffset=_currentOffset;
- (void).cxx_destruct;
- (void)cancelRollbackAnimation;
- (void)startRollbackAnimation;
- (void)reset;
- (void)updateCurrentOffset:(struct CGPoint)arg1;

@end

