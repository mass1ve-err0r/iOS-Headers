//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface CKBlockingAsyncQueue : NSObject
{
    unsigned int _qosClass;
    unsigned long long _width;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_queueSema;
}

@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *queueSema; // @synthesize queueSema=_queueSema;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) unsigned int qosClass; // @synthesize qosClass=_qosClass;
@property(nonatomic) unsigned long long width; // @synthesize width=_width;
- (void).cxx_destruct;
- (void)performBarrierBlock:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (id)initWithWidth:(unsigned long long)arg1;
- (id)initWithWidth:(unsigned long long)arg1 qosClass:(unsigned int)arg2;

@end

