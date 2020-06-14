//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKPassLibraryExportedInterface-Protocol.h>
#import <PassKitCore/PKXPCServiceDelegate-Protocol.h>

@class NSHashTable, NSString, PKXPCService;
@protocol NSObject, OS_dispatch_queue, PKPassLibraryDelegate;

@interface PKPassLibrary : NSObject <PKXPCServiceDelegate, PKPassLibraryExportedInterface>
{
    PKXPCService *_remoteService;
    PKPassLibrary *_remoteLibrary;
    id <NSObject> _remoteLibraryObserver;
    unsigned long long _interfaceType;
    NSHashTable *_delegates;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_asynchronousImageQueue;
    _Bool _shouldSendRemovingPassesOfTypeDidFinish;
    id <PKPassLibraryDelegate> _delegate;
}

+ (_Bool)contactlessInterfaceCanBePresentedFromSource:(long long)arg1;
+ (id)sharedInstance;
+ (id)sharedInstanceWithRemoteLibrary;
+ (_Bool)isSuppressingAutomaticPassPresentation;
+ (void)endAutomaticPassPresentationSuppressionWithRequestToken:(unsigned long long)arg1;
+ (unsigned long long)requestAutomaticPassPresentationSuppressionWithResponseHandler:(CDUnknownBlockType)arg1;
+ (_Bool)isPaymentPassActivationAvailable;
+ (_Bool)isPassLibraryAvailable;
@property(nonatomic) __weak id <PKPassLibraryDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_hasInterfaceOfType:(unsigned long long)arg1;
- (id)passesPendingActivation;
- (void)_applyDataAccessorToObject:(id)arg1;
- (void)fetchCurrentRelevantPassInfo:(CDUnknownBlockType)arg1;
- (void)fetchHasCandidatePasses:(CDUnknownBlockType)arg1;
- (void)recomputeRelevantPassesWithSearchMode:(long long)arg1;
- (void)_applyDataAccessorToObjects:(id)arg1;
- (void)_getPassesAndCatalogOfPassTypes:(unsigned long long)arg1 synchronously:(_Bool)arg2 limitResults:(_Bool)arg3 withRetries:(unsigned long long)arg4 handler:(CDUnknownBlockType)arg5;
- (id)_passesOfType:(unsigned long long)arg1 withRetries:(unsigned long long)arg2;
- (id)_passesWithRetries:(unsigned long long)arg1;
- (void)_postLibraryChangeWithUserInfo:(id)arg1;
- (void)contactlessInterfaceDidDismissFromSource:(long long)arg1;
- (void)contactlessInterfaceDidPresentFromSource:(long long)arg1;
- (void)passRemoved:(id)arg1;
- (void)passUpdated:(id)arg1;
- (void)passAdded:(id)arg1;
- (void)removingPassesOfType:(unsigned long long)arg1 didFinishWithSuccess:(_Bool)arg2;
- (void)removingPassesOfType:(unsigned long long)arg1 didUpdateWithProgress:(double)arg2;
- (void)catalogChanged:(id)arg1 withNewPasses:(id)arg2;
- (id)diffForPassUpdateUserNotificationWithIdentifier:(id)arg1;
- (void)noteAccountDeleted;
- (void)noteAccountChanged;
- (void)logDelayExitReasons;
- (void)shuffleGroups:(int)arg1;
- (void)removePassesOfType:(unsigned long long)arg1 withDiagnosticReason:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removePassesOfType:(unsigned long long)arg1 withDiagnosticReason:(id)arg2;
- (void)removePassesOfType:(unsigned long long)arg1;
- (void)removePassesWithUniqueIDs:(id)arg1 diagnosticReason:(id)arg2;
- (void)removePassWithUniqueID:(id)arg1 diagnosticReason:(id)arg2;
- (void)spotlightDeleteIndexEntriesForAllPassesWithCompletion:(CDUnknownBlockType)arg1;
- (void)spotlightReindexPassesWithUniqueIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)spotlightReindexAllPassesWithCompletion:(CDUnknownBlockType)arg1;
- (void)forceImmediateRevocationCheck;
- (void)introduceDatabaseIntegrityProblem;
- (void)removeAllScheduledActivities;
- (void)nukeDatabaseAndExit;
- (void)pendingUserNotificationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)issueWalletUserNotificationWithTitle:(id)arg1 message:(id)arg2 forPassUniqueIdentifier:(id)arg3 customActionRoute:(id)arg4;
- (void)notifyPassUsed:(id)arg1 fromSource:(long long)arg2;
- (void)sendUserEditedCatalog:(id)arg1;
- (_Bool)migrateData;
- (id)_remoteLibrary;
- (_Bool)_hasRemoteLibrary;
- (_Bool)isPaymentPassActivationAvailable;
- (long long)_currentNotificationCountForIdentifier:(id)arg1;
- (void)transitMessageDidDisplay:(id)arg1;
- (void)transitMessageForRouteInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_defaultPaymentPassForPaymentRequest:(id)arg1;
- (void)supportedTransitPartnersForDigitalIssuance:(CDUnknownBlockType)arg1;
- (id)_sortedPaymentPassesForPaymentRequest:(id)arg1;
- (void)sortedTransitPassesForAppletDataFormat:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)expressFelicaTransitPasses;
- (id)defaultPaymentPassesWithRemotePasses:(_Bool)arg1;
- (_Bool)resetSettingsForPass:(id)arg1;
- (_Bool)setSuppressPromotionsEnabled:(_Bool)arg1 forPass:(id)arg2;
- (_Bool)setSuppressNotificationsEnabled:(_Bool)arg1 forPass:(id)arg2;
- (_Bool)setAutomaticPresentationEnabled:(_Bool)arg1 forPass:(id)arg2;
- (_Bool)setNotificationServiceUpdatesEnabled:(_Bool)arg1 forPass:(id)arg2;
- (_Bool)setAutomaticUpdatesEnabled:(_Bool)arg1 forPass:(id)arg2;
- (_Bool)setShowInLockScreenEnabled:(_Bool)arg1 forPass:(id)arg2;
- (_Bool)_setSetting:(unsigned long long)arg1 enabled:(_Bool)arg2 forPass:(id)arg3;
- (void)_fetchImageSetForUniqueID:(id)arg1 ofType:(long long)arg2 displayProfile:(id)arg3 suffix:(id)arg4 usingSynchronousProxy:(_Bool)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (void)_fetchImageSetContainerForUniqueID:(id)arg1 ofType:(long long)arg2 displayProfile:(id)arg3 suffix:(id)arg4 usingSynchronousProxy:(_Bool)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (void)fetchImageSetForUniqueID:(id)arg1 ofType:(long long)arg2 displayProfile:(id)arg3 suffix:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (id)imageSetForUniqueID:(id)arg1 ofType:(long long)arg2 displayProfile:(id)arg3 suffix:(id)arg4;
- (void)_fetchContentForUniqueID:(id)arg1 usingSynchronousProxy:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)fetchContentForUniqueID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)contentForUniqueID:(id)arg1;
- (void)postUpgradedPassNotificationForMarket:(id)arg1 passUniqueID:(id)arg2;
- (void)checkForTransitNotification;
- (void)rescheduleCommutePlanRenewalReminderForPassWithUniqueID:(id)arg1;
- (void)updateSettings:(unsigned long long)arg1 forObjectWithUniqueID:(id)arg2;
- (void)noteObjectSharedWithUniqueID:(id)arg1;
- (void)getContainmentStatusAndSettingsForPass:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)removePasses:(id)arg1;
- (void)removePass:(id)arg1;
- (void)requestPersonalizationOfPassWithUniqueIdentifier:(id)arg1 contact:(id)arg2 personalizationToken:(id)arg3 requiredPersonalizationFields:(unsigned long long)arg4 personalizationSource:(unsigned long long)arg5 handler:(CDUnknownBlockType)arg6;
- (void)requestUpdateOfObjectWithUniqueIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_activatePaymentPass:(id)arg1 withActivationCode:(id)arg2 activationData:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)activatePaymentPass:(id)arg1 withActivationData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)activatePaymentPass:(id)arg1 withActivationCode:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentContactlessInterfaceForPassWithUniqueIdentifier:(id)arg1 fromSource:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentContactlessInterfaceForDefaultPassFromSource:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)hasPassesWithSupportedNetworks:(id)arg1 merchantCapabilities:(unsigned long long)arg2 webDomain:(id)arg3;
- (void)canPresentPaymentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentWalletWithRelevantPassUniqueID:(id)arg1;
- (void)presentPaymentPass:(id)arg1;
- (void)paymentSetupFeaturesForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentPaymentSetupRequest:(id)arg1 orientation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)openPaymentSetupForMerchantIdentifier:(id)arg1 domain:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)openDigitalIssuanceSetupForIdentifier:(id)arg1;
- (void)openPaymentSetup;
- (void)addPassesWithData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)addPasses:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)dataForBundleResources:(id)arg1 objectUniqueIdentifier:(id)arg2;
- (id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2 objectUniqueIdentifier:(id)arg3;
- (id)archiveForObjectWithUniqueID:(id)arg1;
- (_Bool)replacePassWithPass:(id)arg1;
- (_Bool)containsPass:(id)arg1;
- (void)getPassesAndCatalogOfPassTypes:(unsigned long long)arg1 synchronously:(_Bool)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)getPassesAndCatalog:(_Bool)arg1 synchronously:(_Bool)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)getPassesAndCatalog:(_Bool)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getRouteRelevantPassesFromLocation:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)enabledValueAddedServicePassesWithCompletion:(CDUnknownBlockType)arg1;
- (void)hasInAppPrivateLabelPaymentPassesForWebDomain:(id)arg1 issuerCountryCodes:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (id)inAppPrivateLabelPaymentPassesForWebDomain:(id)arg1 issuerCountryCodes:(id)arg2;
- (void)hasInAppPrivateLabelPaymentPassesForApplicationIdentifier:(id)arg1 issuerCountryCodes:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (id)inAppPrivateLabelPaymentPassesForApplicationIdentifier:(id)arg1 issuerCountryCodes:(id)arg2;
- (void)hasInAppPaymentPassesForNetworks:(id)arg1 capabilities:(unsigned long long)arg2 issuerCountryCodes:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (id)_filterPeerPaymentPass:(id)arg1 request:(id)arg2;
- (id)inAppPaymentPassesForPaymentRequest:(id)arg1;
- (_Bool)isPassbookVisible;
- (_Bool)isRemovingPassesOfType:(unsigned long long)arg1;
- (_Bool)canAddFelicaPass;
- (_Bool)canAddPaymentPassWithPrimaryAccountIdentifier:(id)arg1;
- (_Bool)canAddPassOfType:(unsigned long long)arg1;
- (unsigned long long)countPassesOfType:(unsigned long long)arg1;
- (id)peerPaymentPassUniqueID;
- (id)paymentPassesWithLocallyStoredValue;
- (_Bool)hasPassesOfType:(unsigned long long)arg1;
- (id)remotePaymentPasses;
- (id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (void)getPassUniqueIdentifiersForFieldProperties:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)getPassesWithUniqueIdentifiers:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)passWithDPANIdentifier:(id)arg1;
- (id)passWithFPANIdentifier:(id)arg1;
- (id)passWithUniqueID:(id)arg1;
- (id)passesOfType:(unsigned long long)arg1;
- (id)passes;
- (void)remoteService:(id)arg1 didInterruptConnection:(id)arg2;
- (void)remoteService:(id)arg1 didEstablishConnection:(id)arg2;
- (id)delegates;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (id)_synchronousInAppRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_inAppRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_inAppRemoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)_inAppRemoteObjectProxy;
- (id)_synchronousExtendedRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_extendedRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_extendedRemoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)_extendedRemoteObjectProxy;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxy;
- (void)dealloc;
- (id)initWithMachServiceName:(id)arg1 resumeNotificationName:(id)arg2 interfaceType:(unsigned long long)arg3;
- (id)_initWithRemote:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

