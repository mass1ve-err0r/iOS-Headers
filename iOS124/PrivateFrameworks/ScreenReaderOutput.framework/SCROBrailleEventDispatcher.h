//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray;

@interface SCROBrailleEventDispatcher : NSObject
{
    NSLock *_queueLock;
    struct __CFRunLoop *_runLoop;
    struct __CFRunLoopSource *_queueSource;
    NSMutableArray *_queue;
    NSMutableArray *_brailleEventQueue;
    id _target;
    _Bool _isValid;
}

- (void).cxx_destruct;
- (void)_processQueue;
- (void)enqueueEvent:(id)arg1;
- (_Bool)isValid;
- (void)invalidate;
- (void)start;
- (void)dealloc;
- (id)initWithTarget:(id)arg1;

@end

