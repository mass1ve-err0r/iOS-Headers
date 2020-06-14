//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface AXActionCoalescer : NSObject
{
    NSObject<OS_dispatch_queue> *_targetQueue;
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_queue> *_consistencyQueue;
    _Bool _coalescing;
}

+ (id)mainQueueCoalescerWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)performCoalescedAsynchronously;
- (id)initWithQueue:(id)arg1 block:(CDUnknownBlockType)arg2;

@end

