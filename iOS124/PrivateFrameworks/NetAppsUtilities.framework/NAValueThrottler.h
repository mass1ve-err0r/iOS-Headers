//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol NACancelable, NAScheduler;

@interface NAValueThrottler : NSObject
{
    double _throttleInterval;
    id <NAScheduler> _updateScheduler;
    id _value;
    NSMutableSet *_observerBlocks;
    id <NACancelable> _valueUpdateCancelationToken;
}

@property(retain, nonatomic) id <NACancelable> valueUpdateCancelationToken; // @synthesize valueUpdateCancelationToken=_valueUpdateCancelationToken;
@property(readonly, nonatomic) NSMutableSet *observerBlocks; // @synthesize observerBlocks=_observerBlocks;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) id <NAScheduler> updateScheduler; // @synthesize updateScheduler=_updateScheduler;
@property(readonly, nonatomic) double throttleInterval; // @synthesize throttleInterval=_throttleInterval;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasPendingValueChange;
- (void)flushValueChanges;
- (id)observeValueChangesWithBlock:(CDUnknownBlockType)arg1;
- (void)_notifyObserversOfValueUpdate;
- (void)_enqueueValueUpdateIfNecessary;
- (void)dealloc;
- (id)init;
- (id)initWithThrottleInterval:(double)arg1 initialValue:(id)arg2;
- (id)initWithThrottleInterval:(double)arg1;

@end

