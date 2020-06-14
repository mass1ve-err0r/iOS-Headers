//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsFoundation/CNObservable.h>

@protocol CNCancelable, CNObservable, CNScheduler;

@interface _CNThrottledObservable : CNObservable
{
    id <CNObservable> _observable;
    double _interval;
    unsigned long long _options;
    id <CNScheduler> _observerScheduler;
    id <CNScheduler> _resourceLock;
    id _mostRecentResult;
    id <CNCancelable> _delayToken;
    _Bool _isCoalescing;
}

@property _Bool isCoalescing; // @synthesize isCoalescing=_isCoalescing;
@property(retain) id <CNCancelable> delayToken; // @synthesize delayToken=_delayToken;
@property(retain) id mostRecentResult; // @synthesize mostRecentResult=_mostRecentResult;
@property(readonly) id <CNScheduler> resourceLock; // @synthesize resourceLock=_resourceLock;
@property(readonly) id <CNScheduler> observerScheduler; // @synthesize observerScheduler=_observerScheduler;
@property(readonly) unsigned long long options; // @synthesize options=_options;
@property(readonly) double interval; // @synthesize interval=_interval;
@property(readonly) CNObservable *observable; // @synthesize observable=_observable;
- (void).cxx_destruct;
- (void)observerScheduler_sendResultToObserver:(id)arg1;
- (id)subscribe:(id)arg1;
- (void)dealloc;
- (id)initWithInterval:(double)arg1 options:(unsigned long long)arg2 observable:(id)arg3 schedulerProvider:(id)arg4;

@end
