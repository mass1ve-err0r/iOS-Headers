//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFInvalidating-Protocol.h>

@class NSHashTable, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AFMemoryPressureObserver : NSObject <AFInvalidating>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    unsigned long long _memoryPressureFlags;
    NSHashTable *_listeners;
}

+ (id)sharedObserver;
- (void).cxx_destruct;
- (void)_handleMemoryPressureWithFlags:(unsigned long long)arg1;
- (void)_stopObservingMemoryPressure;
- (void)_startObservingMemoryPressureWithOptions:(unsigned long long)arg1;
- (void)_removeAllListeners;
- (void)_removeListener:(id)arg1;
- (void)_addListener:(id)arg1;
- (void)invalidate;
- (void)getCurrentConditionWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeAllListeners;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)dealloc;
- (id)initWithOptions:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

