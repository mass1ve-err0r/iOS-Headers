//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CALayer, CAStateController, CAStateTransition;

@protocol CAStateControllerDelegate

@optional
- (void)stateController:(CAStateController *)arg1 transitionDidStop:(CAStateTransition *)arg2 completed:(_Bool)arg3;
- (void)stateController:(CAStateController *)arg1 transitionDidStart:(CAStateTransition *)arg2 speed:(float)arg3;
- (void)stateController:(CAStateController *)arg1 didSetStateOfLayer:(CALayer *)arg2;
@end

