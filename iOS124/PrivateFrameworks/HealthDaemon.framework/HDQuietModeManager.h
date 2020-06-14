//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDAssertionObserver-Protocol.h>

@class HDAssertionManager, HDDNDModeAssertionService, NSString;
@protocol OS_dispatch_queue;

@interface HDQuietModeManager : NSObject <HDAssertionObserver>
{
    NSObject<OS_dispatch_queue> *_queue;
    HDAssertionManager *_assertionManager;
    _Bool _enableDNDDuringWorkout;
    HDDNDModeAssertionService *_dndModeAssertionService;
}

- (void).cxx_destruct;
- (void)_loadWorkoutDNDDefault;
- (void)_observeDNDWorkoutDefault;
- (void)_queue_releaseQuietModeAssertion;
- (void)_queue_takeQuietModeAssertion;
- (void)unitTest_setEnableDND:(_Bool)arg1;
- (void)unitTest_setDNDModeAssertionService:(id)arg1;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (id)takeQuietModeAssertionForOwnerIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

