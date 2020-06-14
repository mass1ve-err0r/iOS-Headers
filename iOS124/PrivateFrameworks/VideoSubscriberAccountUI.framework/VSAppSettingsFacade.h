//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSOperation, NSOperationQueue, UIViewController, VSAppSettingsViewModel, VSIdentityProvider, VSOptional, VSPersistentStorage, VSRestrictionsCenter;

@interface VSAppSettingsFacade : NSObject
{
    _Bool _needsUpdateApps;
    _Bool _needsPresentationOfMVPDAppInstallPromptIfAvailable;
    int _registrationToken;
    VSIdentityProvider *_identityProvider;
    NSArray *_decidedApps;
    NSArray *_voucherApps;
    NSOperationQueue *_privateQueue;
    NSOperation *_currentPresentationOperation;
    VSPersistentStorage *_storage;
    VSRestrictionsCenter *_restrictionsCenter;
    VSOptional *_identityProviderID;
    NSArray *_featuredAdamIDs;
    NSArray *_knownAppBundles;
    NSArray *_unredeemedVouchers;
    VSAppSettingsViewModel *_mvpdAppSettingsViewModel;
    UIViewController *_mvpdInstallPromptPresentingViewController;
}

@property(retain, nonatomic) UIViewController *mvpdInstallPromptPresentingViewController; // @synthesize mvpdInstallPromptPresentingViewController=_mvpdInstallPromptPresentingViewController;
@property(nonatomic) _Bool needsPresentationOfMVPDAppInstallPromptIfAvailable; // @synthesize needsPresentationOfMVPDAppInstallPromptIfAvailable=_needsPresentationOfMVPDAppInstallPromptIfAvailable;
@property(retain, nonatomic) VSAppSettingsViewModel *mvpdAppSettingsViewModel; // @synthesize mvpdAppSettingsViewModel=_mvpdAppSettingsViewModel;
@property(nonatomic) int registrationToken; // @synthesize registrationToken=_registrationToken;
@property(nonatomic) _Bool needsUpdateApps; // @synthesize needsUpdateApps=_needsUpdateApps;
@property(copy, nonatomic) NSArray *unredeemedVouchers; // @synthesize unredeemedVouchers=_unredeemedVouchers;
@property(copy, nonatomic) NSArray *knownAppBundles; // @synthesize knownAppBundles=_knownAppBundles;
@property(copy, nonatomic) NSArray *featuredAdamIDs; // @synthesize featuredAdamIDs=_featuredAdamIDs;
@property(copy, nonatomic) VSOptional *identityProviderID; // @synthesize identityProviderID=_identityProviderID;
@property(retain, nonatomic) VSRestrictionsCenter *restrictionsCenter; // @synthesize restrictionsCenter=_restrictionsCenter;
@property(retain, nonatomic) VSPersistentStorage *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) NSOperation *currentPresentationOperation; // @synthesize currentPresentationOperation=_currentPresentationOperation;
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(copy, nonatomic) NSArray *voucherApps; // @synthesize voucherApps=_voucherApps;
@property(copy, nonatomic) NSArray *decidedApps; // @synthesize decidedApps=_decidedApps;
@property(retain, nonatomic) VSIdentityProvider *identityProvider; // @synthesize identityProvider=_identityProvider;
- (void).cxx_destruct;
- (void)presentMVPDAppInstallPromptFromViewController:(id)arg1;
- (_Bool)shouldShowMVPDAppInstallPrompt;
- (_Bool)shouldShowMVPDAppInstallPromptFromViewController:(id)arg1;
- (void)_setNeedsUpdateApps;
- (void)_updateApps;
- (id)_fetchOperationForAdamIDs:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithStorage:(id)arg1 restrictionsCenter:(id)arg2;
- (id)autorelease;
- (oneway void)release;
- (id)retain;

@end

