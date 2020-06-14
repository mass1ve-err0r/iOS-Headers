//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/CLLocationManagerDelegate-Protocol.h>
#import <PassKitCore/MKLocalSearchCompleterDelegate-Protocol.h>

@class CLGeocoder, CLLocationManager, CNContactStore, MKLocalSearch, MKLocalSearchCompleter, NSArray, NSString;
@protocol OS_dispatch_queue, PKAddressSearchModelDelegate;

@interface PKAddressSearchModel : NSObject <MKLocalSearchCompleterDelegate, CLLocationManagerDelegate>
{
    NSArray *_contactsSearchResults;
    NSArray *_completionSearchResults;
    NSArray *_recentsSearchResults;
    id <PKAddressSearchModelDelegate> _delegate;
    CLLocationManager *_locationManager;
    MKLocalSearchCompleter *_completer;
    CLGeocoder *_geocoder;
    MKLocalSearch *_localSearch;
    CNContactStore *_contactStore;
    NSObject<OS_dispatch_queue> *_resultsQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *resultsQueue; // @synthesize resultsQueue=_resultsQueue;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) MKLocalSearch *localSearch; // @synthesize localSearch=_localSearch;
@property(retain, nonatomic) CLGeocoder *geocoder; // @synthesize geocoder=_geocoder;
@property(retain, nonatomic) MKLocalSearchCompleter *completer; // @synthesize completer=_completer;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(nonatomic) __weak id <PKAddressSearchModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *recentsSearchResults; // @synthesize recentsSearchResults=_recentsSearchResults;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)_resetContactsSearchResults;
- (void)_updateRecents:(id)arg1;
- (void)completerDidUpdateResults:(id)arg1;
@property(readonly, nonatomic) NSArray *completionSearchResults;
@property(readonly, nonatomic) NSArray *contactsSearchResults;
- (void)endSearch;
- (void)selectMapSearchCompletion:(id)arg1;
- (void)beginSearch:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

