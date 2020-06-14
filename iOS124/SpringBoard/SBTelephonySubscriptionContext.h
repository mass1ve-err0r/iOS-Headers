//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BSDebugDescriptionProviding-Protocol.h"

@class NSArray, NSString, NSTimer, SBMutableTelephonyCarrierBundleInfo, SBMutableTelephonyMobileEquipmentInfo, SBMutableTelephonySubscriptionInfo;

@interface SBTelephonySubscriptionContext : NSObject <BSDebugDescriptionProviding>
{
    _Bool _providingCellDataConnection;
    _Bool _pretendingToSearch;
    SBMutableTelephonySubscriptionInfo *_subscriptionInfo;
    NSTimer *_fakeServiceTimer;
    NSTimer *_fakeCellServiceTimer;
    NSString *_cachedCTRegistrationCellStatus;
    NSString *_cachedCTRegistrationDisplayStatus;
    unsigned long long _modemDataConnectionType;
    NSString *_cachedCTOperatorName;
    NSArray *_statusBarImages;
    SBMutableTelephonyCarrierBundleInfo *_carrierBundleInfo;
    SBMutableTelephonyMobileEquipmentInfo *_mobileEquipmentInfo;
}

@property(retain, nonatomic) SBMutableTelephonyMobileEquipmentInfo *mobileEquipmentInfo; // @synthesize mobileEquipmentInfo=_mobileEquipmentInfo;
@property(retain, nonatomic) SBMutableTelephonyCarrierBundleInfo *carrierBundleInfo; // @synthesize carrierBundleInfo=_carrierBundleInfo;
@property(copy, nonatomic) NSArray *statusBarImages; // @synthesize statusBarImages=_statusBarImages;
@property(copy, nonatomic) NSString *cachedCTOperatorName; // @synthesize cachedCTOperatorName=_cachedCTOperatorName;
@property(nonatomic) unsigned long long modemDataConnectionType; // @synthesize modemDataConnectionType=_modemDataConnectionType;
@property(copy, nonatomic) NSString *cachedCTRegistrationDisplayStatus; // @synthesize cachedCTRegistrationDisplayStatus=_cachedCTRegistrationDisplayStatus;
@property(copy, nonatomic) NSString *cachedCTRegistrationCellStatus; // @synthesize cachedCTRegistrationCellStatus=_cachedCTRegistrationCellStatus;
@property(nonatomic, getter=isPretendingToSearch) _Bool pretendingToSearch; // @synthesize pretendingToSearch=_pretendingToSearch;
@property(retain, nonatomic) NSTimer *fakeCellServiceTimer; // @synthesize fakeCellServiceTimer=_fakeCellServiceTimer;
@property(retain, nonatomic) NSTimer *fakeServiceTimer; // @synthesize fakeServiceTimer=_fakeServiceTimer;
@property(nonatomic, getter=isProvidingCellDataConnection) _Bool providingCellDataConnection; // @synthesize providingCellDataConnection=_providingCellDataConnection;
@property(retain, nonatomic) SBMutableTelephonySubscriptionInfo *subscriptionInfo; // @synthesize subscriptionInfo=_subscriptionInfo;
- (void).cxx_destruct;
- (id)debugDescriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

