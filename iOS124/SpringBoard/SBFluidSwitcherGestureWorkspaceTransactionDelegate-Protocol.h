//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBFluidSwitcherGesture, SBFluidSwitcherGestureWorkspaceTransaction;

@protocol SBFluidSwitcherGestureWorkspaceTransactionDelegate <NSObject>
- (void)fluidSwitcherGestureTransaction:(SBFluidSwitcherGestureWorkspaceTransaction *)arg1 didEndGesture:(SBFluidSwitcherGesture *)arg2;
- (void)fluidSwitcherGestureTransaction:(SBFluidSwitcherGestureWorkspaceTransaction *)arg1 didUpdateGesture:(SBFluidSwitcherGesture *)arg2;
- (void)fluidSwitcherGestureTransaction:(SBFluidSwitcherGestureWorkspaceTransaction *)arg1 didBeginGesture:(SBFluidSwitcherGesture *)arg2;
@end
