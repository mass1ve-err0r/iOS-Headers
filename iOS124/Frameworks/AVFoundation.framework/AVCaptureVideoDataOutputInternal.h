//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVWeakReference, AVWeakReferencingDelegateStorage, NSDictionary;
@protocol OS_dispatch_queue;

@interface AVCaptureVideoDataOutputInternal : NSObject
{
    AVWeakReference *weakReference;
    AVWeakReferencingDelegateStorage *delegateStorage;
    AVWeakReferencingDelegateStorage *delegateOverrideStorage;
    NSDictionary *videoSettings;
    CDStruct_1b6d18a9 deprecatedMinFrameDuration;
    _Bool alwaysDiscardsLateVideoFrames;
    _Bool videoSettingsDimensionsOverrideEnabled;
    NSObject<OS_dispatch_queue> *bufferQueue;
    struct OpaqueFigSimpleMutex *queueMutex;
    void *remoteQueueReceiver;
    void *localQueue;
}

- (void)dealloc;
- (id)init;

@end

