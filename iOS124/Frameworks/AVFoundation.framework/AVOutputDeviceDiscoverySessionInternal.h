//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol AVOutputDeviceDiscoverySessionImpl, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVOutputDeviceDiscoverySessionInternal : NSObject
{
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    id <AVOutputDeviceDiscoverySessionImpl> impl;
    long long discoveryMode;
}

@end

