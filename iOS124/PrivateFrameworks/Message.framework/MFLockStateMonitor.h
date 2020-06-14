//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MFObservable;
@protocol MFObserver, OS_dispatch_queue;

@interface MFLockStateMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    int _token;
    MFObservable<MFObserver> *_observable;
    _Bool _isLocked;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_receiveLockState:(_Bool)arg1;
@property(readonly, getter=isLocked) _Bool locked;
@property(readonly, nonatomic) MFObservable *lockStateObservable;
- (id)init;
- (void)dealloc;

@end

