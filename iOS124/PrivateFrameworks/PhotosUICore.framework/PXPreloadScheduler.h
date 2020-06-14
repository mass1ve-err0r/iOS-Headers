//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PXPreloadScheduler : NSObject
{
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    CADisplayLink *_displayLink;
    NSMutableArray *_pendingBlocks;
    struct __CFRunLoopObserver *_runloopObserver;
    _Bool __isActive;
}

+ (id)sharedScheduler;
@property(nonatomic, setter=_setActive:) _Bool _isActive; // @synthesize _isActive=__isActive;
- (void).cxx_destruct;
- (void)_updateIsActive;
- (void)_runLoopWillStartWaiting;
- (void)_displayLinkTick:(id)arg1;
- (void)scheduleBackgroundTask:(CDUnknownBlockType)arg1;
- (void)scheduleMainQueueTaskAndWait:(CDUnknownBlockType)arg1;
- (void)scheduleMainQueueTask:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

