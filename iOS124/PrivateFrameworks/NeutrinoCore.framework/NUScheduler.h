//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NUJobQueue;
@protocol OS_dispatch_queue;

@interface NUScheduler : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NUJobQueue *_prepareQueue;
    NUJobQueue *_renderQueue;
    NUJobQueue *_completeQueue;
}

+ (id)sharedScheduler;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)cancelJobsForRenderContext:(id)arg1;
- (void)_cancelPreviousJobs:(id)arg1;
- (void)_enqueueRenderJob:(id)arg1 toStage:(long long)arg2;
- (void)_resumeRenderJob:(id)arg1;
- (void)_enqueueDependentJobsForRenderJob:(id)arg1;
- (void)_observeRenderJob:(id)arg1 withGroup:(id)arg2;
- (void)_enqueueJobsForRequests:(id)arg1 withGroup:(id)arg2;
- (id)_queueForStage:(long long)arg1;
- (void)submitRequests:(id)arg1 withGroup:(id)arg2;
- (id)init;

@end

