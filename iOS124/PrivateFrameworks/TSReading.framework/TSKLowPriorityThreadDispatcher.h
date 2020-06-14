//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSKThreadDispatcher.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface TSKLowPriorityThreadDispatcher : TSKThreadDispatcher
{
    NSObject<OS_dispatch_queue> *_queue;
    int _suspendCount;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedLowPriorityDispatcher;
+ (id)_singletonAlloc;
- (id)p_dispatchQueue;
- (void)resume;
- (void)suspend;
@property(readonly, getter=isSuspended) _Bool suspended;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;

@end

