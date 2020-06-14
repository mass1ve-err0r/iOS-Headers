//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/NSObject-Protocol.h>

@class NSBundle, NSString;
@protocol MNLocationProviderDelegate;

@protocol MNLocationProvider <NSObject>
@property(readonly, nonatomic) double timeScale;
@property(readonly, nonatomic) _Bool isTracePlayer;
@property(readonly, nonatomic) _Bool isSimulation;
@property(readonly, nonatomic) _Bool usesCLMapCorrection;
@property(nonatomic) long long activityType;
@property(readonly, nonatomic) int authorizationStatus;
@property(readonly, nonatomic) double expectedGpsUpdateInterval;
@property(copy, nonatomic) CDUnknownBlockType authorizationRequestBlock;
@property(nonatomic) int headingOrientation;
@property(nonatomic) _Bool matchInfoEnabled;
@property(nonatomic) double distanceFilter;
@property(nonatomic, getter=isLocationServicesPreferencesDialogEnabled) _Bool locationServicesPreferencesDialogEnabled;
@property(nonatomic) double desiredAccuracy;
@property(copy, nonatomic) NSString *effectiveBundleIdentifier;
@property(retain, nonatomic) NSBundle *effectiveBundle;
@property(nonatomic) __weak id <MNLocationProviderDelegate> delegate;
- (void)requestWhenInUseAuthorizationWithPrompt;
- (void)requestWhenInUseAuthorization;
- (void)resetForActiveTileGroupChanged;
- (void)stopUpdatingVehicleHeading;
- (void)startUpdatingVehicleHeading;
- (void)stopUpdatingVehicleSpeed;
- (void)startUpdatingVehicleSpeed;
- (void)stopUpdatingHeading;
- (void)startUpdatingHeading;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
@end

