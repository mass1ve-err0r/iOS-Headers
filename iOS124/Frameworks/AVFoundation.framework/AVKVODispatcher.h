//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCallbackContextRegistry;

@interface AVKVODispatcher : NSObject
{
    AVCallbackContextRegistry *_callbackContextRegistry;
}

+ (id)sharedKVODispatcher;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)startObservingValueAtKeyPath:(id)arg1 withoutKeepingAliveObservedObject:(id)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)startObservingValueAtTwoPartKeyPath:(id)arg1 ofObject:(id)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)startObservingValueAtKeyPath:(id)arg1 ofObject:(id)arg2 options:(unsigned long long)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithDescriptionOfHowAllObservedPropertyChangesAreSerializedWithDispatcherDeallocation:(id)arg1;
- (id)startObservingObject:(id)arg1 weakObserver:(id)arg2 forTwoPartKeyPath:(id)arg3 options:(unsigned long long)arg4 context:(void *)arg5;
- (id)startObservingObject:(id)arg1 weakObserver:(id)arg2 forKeyPath:(id)arg3 options:(unsigned long long)arg4 context:(void *)arg5;

@end

