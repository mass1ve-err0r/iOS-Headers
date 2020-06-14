//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCStatisticsCollectorQueue : NSObject
{
    struct OpaqueFigThread *_thread;
    _Bool _isThreadRunning;
    _Bool _shouldBlockWhenFull;
    CDStruct_48a7b5a5 _messageQueue[100];
    int _firstMessageIndex;
    int _lastMessageIndex;
    int _maxQueueSize;
    CDUnknownBlockType _messageHandler;
    struct _opaque_pthread_mutex_t _queueMutex;
    struct _opaque_pthread_cond_t _queueNotFullCondition;
    struct _opaque_pthread_cond_t _queueNotEmptyCondition;
}

@property(copy) CDUnknownBlockType messageHandler; // @synthesize messageHandler=_messageHandler;
@property(readonly) _Bool isThreadRunning; // @synthesize isThreadRunning=_isThreadRunning;
- (void)processMessage:(CDStruct_48a7b5a5)arg1;
- (void)emptyMessageQueue;
- (_Bool)dequeue:(CDStruct_48a7b5a5 *)arg1;
- (_Bool)enqueue:(CDStruct_48a7b5a5)arg1;
- (_Bool)isQueueFull;
- (_Bool)addStatisticsMessage:(CDStruct_48a7b5a5)arg1;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithQueueSize:(int)arg1 shouldBlockWhenFull:(_Bool)arg2;

@end

