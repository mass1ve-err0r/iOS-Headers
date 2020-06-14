//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DownloadAgentTransitionContext.h"

@class NSError, NSNumber;

@interface DownloadStateRestartingAgentTransitionContext : DownloadAgentTransitionContext
{
    long long _assetPID;
    NSError *_error;
    NSNumber *_reason;
}

+ (id)forAgentState:(id)arg1;
- (void).cxx_destruct;
- (_Bool)applyToEntity:(id)arg1 inTransaction:(id)arg2;
- (id)__apply__error:(id)arg1 blockAssetPID:(long long)arg2 withReason:(id)arg3;
- (id)__apply__error:(id)arg1 retryAssetPID:(long long)arg2;

@end
