//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface TSUProgress : NSObject
{
    NSMutableSet *mProgressObservers;
    NSObject<OS_dispatch_queue> *mProgressObserversQueue;
    NSString *mMessage;
}

@property(copy) NSString *message; // @synthesize message=mMessage;
- (double)protected_minProgressObserverValueInterval;
- (_Bool)protected_hasProgressObservers;
- (void)protected_progressDidChange;
- (void)removeProgressObserver:(id)arg1;
- (id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
@property(readonly, getter=isIndeterminate) _Bool indeterminate;
@property(readonly) double maxValue;
@property(readonly) double value;
- (void)dealloc;
- (id)init;

@end

