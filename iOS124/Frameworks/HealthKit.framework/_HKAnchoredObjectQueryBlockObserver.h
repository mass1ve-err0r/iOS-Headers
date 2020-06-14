//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/_HKAnchoredObjectQueryObserver-Protocol.h>

@class NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _HKAnchoredObjectQueryBlockObserver : NSObject <_HKAnchoredObjectQueryObserver>
{
    CDUnknownBlockType _updateHandler;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

- (void).cxx_destruct;
- (void)queryManager:(id)arg1 didReceiveUpdatesForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4;
- (id)initWithHandler:(CDUnknownBlockType)arg1 dispatchQueue:(id)arg2;
- (id)initWithHandler:(CDUnknownBlockType)arg1 operationQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

