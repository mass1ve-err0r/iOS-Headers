//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/CLLocationManagerDelegate-Protocol.h>
#import <HealthDaemon/HDAssertionObserver-Protocol.h>

@class CLInUseAssertion, CLLocationManager, HDAssertionManager, HKObserverSet, NSString;
@protocol HDLocationManagerUnitTestDelegate;

@interface HDLocationManager : NSObject <HDAssertionObserver, CLLocationManagerDelegate>
{
    HDAssertionManager *_assertionManager;
    CLLocationManager *_locationManager;
    CLInUseAssertion *_inUseAssertion;
    HKObserverSet *_observers;
    CDUnknownBlockType _locationManagerConfiguration;
    id <HDLocationManagerUnitTestDelegate> _unitTestDelegate;
}

@property(nonatomic) __weak id <HDLocationManagerUnitTestDelegate> unitTestDelegate; // @synthesize unitTestDelegate=_unitTestDelegate;
@property(copy, nonatomic) CDUnknownBlockType locationManagerConfiguration; // @synthesize locationManagerConfiguration=_locationManagerConfiguration;
- (void).cxx_destruct;
- (void)_unitTest_didInvalidateAssertion:(id)arg1;
- (id)_unitTest_locationManager;
- (void)_unitTest_setLocationManagerConfiguration:(CDUnknownBlockType)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)_mainQueue_releaseLocationUpdatingAssertion;
- (void)_mainQueue_takeLocationUpdatingAssertion;
- (id)_mainQueue_newLocationManagerWithEffectiveBundle:(id)arg1;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (id)takeLocationUpdatingAssertionForOwnerIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

