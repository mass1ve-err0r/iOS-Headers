//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Social/CLLocationManagerDelegate-Protocol.h>
#import <Social/SLPlaceDataSource-Protocol.h>

@class ACAccount, CLLocation, CLLocationManager, NSHTTPURLResponse, NSMutableData, NSString, NSURLConnection;
@protocol SLPlaceDataSourceDelegate;

@interface SLFacebookPlaceManager : NSObject <CLLocationManagerDelegate, SLPlaceDataSource>
{
    CLLocationManager *_locationManager;
    double _timeout;
    _Bool _isCanceled;
    _Bool _isUpdatingLocation;
    _Bool _disableTimeout;
    NSMutableData *_placeData;
    NSHTTPURLResponse *_urlResponse;
    NSURLConnection *_urlConnection;
    CDUnknownBlockType _queuedSearchRequest;
    CLLocation *_currentLocation;
    NSObject<SLPlaceDataSourceDelegate> *_delegate;
    ACAccount *_account;
}

@property(retain) ACAccount *account; // @synthesize account=_account;
@property __weak NSObject<SLPlaceDataSourceDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain) CLLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)_handleResponse:(id)arg1 error:(id)arg2;
- (id)_placesArrayWithPlacesData:(id)arg1;
- (double)distanceFromCurrentLocationToPlace:(id)arg1;
- (void)fetchPlaces;
- (void)fetchPlacesWithSearchString:(id)arg1;
- (void)locationDidTimeout;
- (void)cancelPlaceFetch;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
@property(readonly) double currentLocationAccuracy;
- (id)initWithLocationManager:(id)arg1 account:(id)arg2 desiredAccuracy:(double)arg3 timeout:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

