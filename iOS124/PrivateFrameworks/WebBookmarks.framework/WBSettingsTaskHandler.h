//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, WBSettingsTask, WebBookmarksSettingsGateway;
@protocol OS_dispatch_queue;

@interface WBSettingsTaskHandler : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_tasks;
    WBSettingsTask *_currentTask;
    long long _currentRetryCount;
    WebBookmarksSettingsGateway *_settingsGateway;
    id _backgroundTaskAssertionToken;
    CDUnknownBlockType _startBackgroundTaskAssertionBlock;
    CDUnknownBlockType _finishBackgroundTaskAssertionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType finishBackgroundTaskAssertionBlock; // @synthesize finishBackgroundTaskAssertionBlock=_finishBackgroundTaskAssertionBlock;
@property(copy, nonatomic) CDUnknownBlockType startBackgroundTaskAssertionBlock; // @synthesize startBackgroundTaskAssertionBlock=_startBackgroundTaskAssertionBlock;
- (void).cxx_destruct;
- (void)_currentTaskAttemptDidFinishWithError:(id)arg1;
- (void)_finishCurrentTask;
- (void)_attemptCurrentTask;
- (void)_performNextTask;
- (_Bool)_shouldEnqueueTask:(id)arg1;
- (void)_enqueueTask:(id)arg1;
- (void)enqueueTask:(id)arg1;
- (id)init;

@end

