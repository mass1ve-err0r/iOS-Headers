//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FTSelectedPNRSubscription : NSObject
{
}

+ (id)sharedInstance;
+ (_Bool)isPhoneNumber:(id)arg1 equivalentToExistingPhoneNumber:(id)arg2;
- (_Bool)_legacy_isPhoneNumberEmergencyNumber:(id)arg1;
- (_Bool)isPhoneNumberEmergencyNumber:(id)arg1;
- (id)_legacy_carrierBundleValueForKey:(id)arg1 ofType:(Class)arg2;
- (id)selectedPhoneNumberRegistrationRegistrationCarrierBundleValueForKey:(id)arg1 ofType:(Class)arg2 withFallbackValue:(id)arg3;
- (id)_reevaluateCachedSelectedPhoneNumberWithContext:(id)arg1 error:(id *)arg2;
- (id)_reevaluateCachedSelectedPhoneNumberRegistrationWithSubscription:(id)arg1 activeContexts:(id)arg2 fallbackProhibited:(_Bool)arg3 persistUpdate:(_Bool)arg4 error:(id *)arg5;
- (id)_firstPresentSubscriptionFromAvailableSubscriptions:(id)arg1;
- (id)_subscriptionFromAvailableSubscriptions:(id)arg1 matchingSelectedLabel:(id)arg2;
- (void)_reevaluateDualIdentityModeWithSubscriptionInfo:(id)arg1;
- (_Bool)_doesSubscriptionInfoContainMultipleUniqueLabels:(id)arg1;
- (_Bool)_doesSubscriptionInfoContainMultipleLabels:(id)arg1;
- (id)_reevaluateCachedActiveSubscriptionWithError:(id *)arg1;
- (id)_reevaluateCachedSubscriptionWithError:(id *)arg1;
- (_Bool)_isIdentityFallbackProhibitedForDeviceBasedOnCapability:(long long)arg1 subscriptionInfo:(id)arg2;
- (_Bool)_isInDualPhoneIdentityModeBasedOnCapability:(long long)arg1;
- (_Bool)isDeviceInDualPhoneIdentityMode;
- (id)setSelectedPhoneNumberRegistrationSubscriptionNumber:(id)arg1;
- (id)selectedRegistrationPhoneNumberWithError:(id *)arg1;
- (_Bool)isSelectedPhoneNumberRegistrationSubscriptionContext:(id)arg1;
- (void)persistSelectedPhoneNumberRegistrationSubscriptionIfNeeded;
- (id)selectedPhoneNumberRegistrationSubscriptionWithError:(id *)arg1;
- (void)invalidateCache;
- (void)_protected_invalidateCache;
- (void)_distributed_invalidateCache;
- (id)_protected_reevaluateCacheIfNeededAndPersistUpdate:(_Bool)arg1;
- (void)dualSimCapabilityDidChange;
- (void)activeSubscriptionsDidChange;
- (void)phoneNumberAvailable:(id)arg1;
- (void)phoneNumberChanged:(id)arg1;
- (void)subscriptionInfoDidChange;
- (void)dealloc;
- (id)init;

@end

