//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DownloadAgentState.h"

@interface DownloadingDownloadAgentState : DownloadAgentState
{
}

- (void)_updateDatabaseMetrics:(id)arg1;
- (void)_didRestart;
- (void)_didRefreshRateLimitWithRateLimit:(long long)arg1;
- (void)_didRefreshPriorityWithPriority:(double)arg1;
- (void)_didPause;
- (void)_didCompleteWithResult:(_Bool)arg1 error:(id)arg2;
- (void)_didCancel;
- (void)onMessage:(id)arg1;
- (void)onEnter;

@end

