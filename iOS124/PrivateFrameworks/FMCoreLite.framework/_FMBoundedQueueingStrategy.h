//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMCoreLite/FMQueueingStrategy-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _FMBoundedQueueingStrategy : NSObject <FMQueueingStrategy>
{
    unsigned long long _capacity;
    CDUnknownBlockType _overflowHandler;
}

- (void).cxx_destruct;
- (void)enqueueObject:(id)arg1 buffer:(id)arg2;
- (id)initWithCapacity:(unsigned long long)arg1 overflowHandler:(CDUnknownBlockType)arg2;
- (id)initWithCapacity:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

