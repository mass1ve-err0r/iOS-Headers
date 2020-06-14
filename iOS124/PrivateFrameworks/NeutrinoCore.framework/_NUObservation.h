//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface _NUObservation : NSObject
{
    id _observer;
    long long _key;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _block;
}

@property(readonly, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) long long key; // @synthesize key=_key;
@property(readonly, nonatomic) __weak id observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (id)initWithObserver:(id)arg1 key:(long long)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;
- (id)init;

@end

