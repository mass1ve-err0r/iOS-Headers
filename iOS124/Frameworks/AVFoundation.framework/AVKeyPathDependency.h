//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVKVODispatcher, AVTwoPartKeyPath, AVWeakReference, NSString;
@protocol AVCallbackCancellation, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVKeyPathDependency : NSObject
{
    NSObject<OS_dispatch_queue> *_subObjectRegistrationQueue;
    AVKVODispatcher *_KVODispatcher;
    AVWeakReference *_weakReferenceToObject;
    NSString *_dependentKey;
    AVTwoPartKeyPath *_dependencyKeyPath;
    id <AVCallbackCancellation> _leafPropertyChangeNotifier;
}

+ (void)initialize;
- (void)_reactToSecondLevelPropertyChange:(id)arg1;
- (void)_reactToTopLevelPropertyChange:(id)arg1;
- (void)_startObservingSecondLevelPropertyOnNewCurrentValueForTopLevelDependencyProperty:(id)arg1;
- (void)initializationIsCompleteForObject:(id)arg1;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)initWithObject:(id)arg1 thatHasPropertyWithKey:(id)arg2 whoseValueDependsOnValueAtKeyPath:(id)arg3;

@end

