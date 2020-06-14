//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCObject.h>

@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface VCDispatchTimer : VCObject
{
    CDUnknownBlockType _callbackBlock;
    NSObject<OS_dispatch_source> *_timer;
    int _intervalSeconds;
    _Bool _running;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

@property(readonly, nonatomic) CDUnknownBlockType callbackBlock; // @synthesize callbackBlock=_callbackBlock;
@property(readonly, nonatomic) _Bool isRunning; // @synthesize isRunning=_running;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithIntervalSeconds:(int)arg1 callbackBlock:(CDUnknownBlockType)arg2 clientQueue:(id)arg3;
- (id)initWithIntervalSeconds:(int)arg1 callbackBlock:(CDUnknownBlockType)arg2;

@end

