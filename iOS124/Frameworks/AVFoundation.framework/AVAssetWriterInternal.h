//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetWriterHelper, AVKeyPathDependencyManager, AVWeakReference;
@protocol AVAssetWriterFinishWritingDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAssetWriterInternal : NSObject
{
    AVWeakReference *weakReference;
    AVAssetWriterHelper *helper;
    NSObject<OS_dispatch_queue> *helperReadWriteQueue;
    AVKeyPathDependencyManager *keyPathDependencyManager;
    id <AVAssetWriterFinishWritingDelegate> finishWritingDelegate;
}

- (void).cxx_destruct;

@end

