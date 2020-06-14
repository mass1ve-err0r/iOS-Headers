//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocationManager, CRWiFiCarManager, NSArray, NSString, RTRoutineManager;
@protocol CARDNDGeofencingObserverDelegate;

@interface CARDNDGeofencingObserver : NSObject <CLLocationManagerDelegate>
{
    _Bool _DNDActive;
    _Bool _didCreateGeofenceAroundStart;
    _Bool _shouldCreateGeofenceAroundStart;
    _Bool _isCurrentlyInsideGeofence;
    _Bool _hasUnknownFenceState;
    _Bool _activelyMonitoringGeofences;
    _Bool _exitConfirmationActive;
    _Bool _locationServicesEnabled;
    _Bool _exitConfirmationOverride;
    id <CARDNDGeofencingObserverDelegate> _delegate;
    CLLocationManager *_locationManager;
    RTRoutineManager *_routineManager;
    NSArray *_monitoredRegions;
    CRWiFiCarManager *_wiFiManager;
}

@property(nonatomic) _Bool exitConfirmationOverride; // @synthesize exitConfirmationOverride=_exitConfirmationOverride;
@property(retain, nonatomic) CRWiFiCarManager *wiFiManager; // @synthesize wiFiManager=_wiFiManager;
@property(retain, nonatomic) NSArray *monitoredRegions; // @synthesize monitoredRegions=_monitoredRegions;
@property(nonatomic) _Bool locationServicesEnabled; // @synthesize locationServicesEnabled=_locationServicesEnabled;
@property(nonatomic) _Bool exitConfirmationActive; // @synthesize exitConfirmationActive=_exitConfirmationActive;
@property(retain, nonatomic) RTRoutineManager *routineManager; // @synthesize routineManager=_routineManager;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(nonatomic) _Bool activelyMonitoringGeofences; // @synthesize activelyMonitoringGeofences=_activelyMonitoringGeofences;
@property(nonatomic) _Bool hasUnknownFenceState; // @synthesize hasUnknownFenceState=_hasUnknownFenceState;
@property(nonatomic) _Bool isCurrentlyInsideGeofence; // @synthesize isCurrentlyInsideGeofence=_isCurrentlyInsideGeofence;
@property(nonatomic) _Bool shouldCreateGeofenceAroundStart; // @synthesize shouldCreateGeofenceAroundStart=_shouldCreateGeofenceAroundStart;
@property(nonatomic) _Bool didCreateGeofenceAroundStart; // @synthesize didCreateGeofenceAroundStart=_didCreateGeofenceAroundStart;
@property(nonatomic) __weak id <CARDNDGeofencingObserverDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isDNDActive) _Bool DNDActive; // @synthesize DNDActive=_DNDActive;
- (void).cxx_destruct;
- (void)_checkWiFiPowerForGeofences;
- (_Bool)_shouldCreateGeofences;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3;
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;
- (void)locationManager:(id)arg1 didStartMonitoringForRegion:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)_createGeofencesAroundHomeAndWork;
- (void)_createGeofencesAroundPredictedLocationsFromLocation:(id)arg1;
- (void)_createGeofenceForLOI:(id)arg1;
- (void)_pollFencesWithUnknownState;
- (void)_updateState:(long long)arg1 forRegion:(id)arg2;
- (void)_postNotificationForGeofence;
- (id)_addCoordinatesToMonitoredRegion:(struct CLLocationCoordinate2D)arg1 identifier:(id)arg2 radius:(unsigned long long)arg3;
@property(readonly, nonatomic) _Bool currentlyInRegion;
- (void)stopMonitoringLOIs;
- (void)beginMonitoringLOIsWithStartingLocationGeofence:(_Bool)arg1;
- (void)dealloc;
- (id)initWithRoutineManager:(id)arg1 locationManager:(id)arg2 wiFiManager:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

