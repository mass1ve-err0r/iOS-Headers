//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVVideoOutputSettings, AVWeakReference;
@protocol AVPlayerItemOutputPullDelegate, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface AVPlayerItemVideoOutputInternal : NSObject
{
    struct OpaqueCMTimebase *timebase;
    double currentRate;
    struct OpaqueFigVisualContext *vc;
    AVWeakReference *playerItemWeakReference;
    struct OpaqueVTPixelBufferConformer *pixelBufferConformer;
    id <AVPlayerItemOutputPullDelegate> delegate;
    NSObject<OS_dispatch_queue> *stateQueue;
    NSObject<OS_dispatch_queue> *delegateQueue;
    NSObject<OS_dispatch_source> *delegateWakeupSource;
    double advanceWakeUpInterval;
    _Bool advanceWakeUpIntervalIsValid;
    CDStruct_1b6d18a9 wakeUpImageTime;
    _Bool immediateWakeUp;
    long long clientStateOnRequestedMediaDataChangeNotification;
    _Bool suppressesPlayerRendering;
    _Bool shouldTagBuffersWithInfo;
    AVVideoOutputSettings *videoSettings;
}

@end
