//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCNetworkReachabilityType-Protocol.h>

@class CTTelephonyNetworkInfo, NFReachability, NSHashTable, NSString;

@interface FCNetworkReachability : NSObject <FCNetworkReachabilityType>
{
    _Bool _isNetworkReachable;
    _Bool _isNetworkReachableViaWiFi;
    _Bool _isNetworkReachableViaCellular;
    _Bool _isCloudKitAccessAllowed;
    _Bool _accessRestrictedBecauseOfAppVersion;
    _Bool _accessRestrictedBecauseOfOSVersion;
    _Bool _accessRestrictedBecauseOfCountry;
    _Bool _accessRestrictedBecauseOfDeviceAbandoned;
    long long _offlineReason;
    CTTelephonyNetworkInfo *_networkInfo;
    NSHashTable *_observers;
    long long _currentRadioAccessTechnology;
    NSString *_currentCellularCarrierName;
    NFReachability *_internetReachability;
}

+ (id)sharedNetworkReachability;
@property(retain, nonatomic) NFReachability *internetReachability; // @synthesize internetReachability=_internetReachability;
@property(retain, nonatomic) NSString *currentCellularCarrierName; // @synthesize currentCellularCarrierName=_currentCellularCarrierName;
@property(nonatomic) long long currentRadioAccessTechnology; // @synthesize currentRadioAccessTechnology=_currentRadioAccessTechnology;
@property(nonatomic) _Bool accessRestrictedBecauseOfDeviceAbandoned; // @synthesize accessRestrictedBecauseOfDeviceAbandoned=_accessRestrictedBecauseOfDeviceAbandoned;
@property(nonatomic) _Bool accessRestrictedBecauseOfCountry; // @synthesize accessRestrictedBecauseOfCountry=_accessRestrictedBecauseOfCountry;
@property(nonatomic) _Bool accessRestrictedBecauseOfOSVersion; // @synthesize accessRestrictedBecauseOfOSVersion=_accessRestrictedBecauseOfOSVersion;
@property(nonatomic) _Bool accessRestrictedBecauseOfAppVersion; // @synthesize accessRestrictedBecauseOfAppVersion=_accessRestrictedBecauseOfAppVersion;
@property(nonatomic) _Bool isCloudKitAccessAllowed; // @synthesize isCloudKitAccessAllowed=_isCloudKitAccessAllowed;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) CTTelephonyNetworkInfo *networkInfo; // @synthesize networkInfo=_networkInfo;
@property(nonatomic) long long offlineReason; // @synthesize offlineReason=_offlineReason;
@property(nonatomic) _Bool isNetworkReachableViaCellular; // @synthesize isNetworkReachableViaCellular=_isNetworkReachableViaCellular;
@property(nonatomic) _Bool isNetworkReachableViaWiFi; // @synthesize isNetworkReachableViaWiFi=_isNetworkReachableViaWiFi;
@property(nonatomic) _Bool isNetworkReachable; // @synthesize isNetworkReachable=_isNetworkReachable;
- (void).cxx_destruct;
- (long long)_cellularRadioAccessTechnologyFromString:(id)arg1;
@property(readonly, nonatomic) _Bool isCloudKitReachable;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, nonatomic) long long reachabilityStatus;
- (void)_accessRestrictionsChanged;
- (void)_reachabilityChanged:(id)arg1;
- (void)_updateReachability;
@property(readonly, nonatomic) _Bool isNetworkOnlyReachableViaCellular;
@property(readonly, nonatomic) NSString *cellularCarrierName;
@property(readonly, nonatomic) long long cellularRadioAccessTechnology;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

