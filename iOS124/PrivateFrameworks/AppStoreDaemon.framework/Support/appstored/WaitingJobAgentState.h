//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "JobAgentState.h"

@interface WaitingJobAgentState : JobAgentState
{
}

+ (_Bool)isInactiveState;
- (void)_didStart;
- (void)onMessage:(id)arg1;
- (void)onEnter;

@end

