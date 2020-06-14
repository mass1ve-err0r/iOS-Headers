//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface _KSSystemTask : NSObject
{
    unsigned long long _periodSeconds;
    NSString *_name;
    CDUnknownBlockType _handler;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_executionCriteria;
}

@property(readonly, nonatomic) NSObject<OS_xpc_object> *executionCriteria; // @synthesize executionCriteria=_executionCriteria;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) unsigned long long periodSeconds; // @synthesize periodSeconds=_periodSeconds;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 delay:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initWithName:(id)arg1 isPeriodic:(_Bool)arg2 period:(unsigned long long)arg3 handler:(CDUnknownBlockType)arg4;
- (id)init;

@end

