//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVWeakReference;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVPlayerItemOutputInternal : NSObject
{
    AVWeakReference *weakReference;
    NSObject<OS_dispatch_queue> *timebaseReadWriteQueue;
    struct OpaqueCMTimebase *timebase;
}

@end

