//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKPaymentWebServiceTargetDeviceProtocol-Protocol.h>

@class NSString, PKAssertion, PKPassLibrary, PKPassUpgradeController, PKPaymentService, PKSecureElement;

@interface PKPaymentWebServiceTargetDevice : NSObject <PKPaymentWebServiceTargetDeviceProtocol>
{
    PKPassLibrary *_passLibrary;
    PKPaymentService *_paymentService;
    PKSecureElement *_secureElement;
    PKAssertion *_provisioningAssertion;
    _Bool _provisioningAssertionActive;
    PKAssertion *_verificationAssertion;
    _Bool _verificationAssertionActive;
    PKPassUpgradeController *_passUpgradeController;
}

+ (id)localTargetDevice;
- (void).cxx_destruct;
- (void)performProductActionRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)availableProductsWithCompletion:(CDUnknownBlockType)arg1;
- (void)paymentWebService:(id)arg1 requestPassUpgrade:(id)arg2 pass:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)paymentWebService:(id)arg1 passOwnershipTokenWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 storePassOwnershipToken:(id)arg2 withIdentifier:(id)arg3;
- (void)performDeviceCheckInWithCompletion:(CDUnknownBlockType)arg1;
- (void)paymentWebService:(id)arg1 setDefaultPaymentPassUniqueIdentifier:(id)arg2;
- (void)paymentWebService:(id)arg1 updateAccountWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 deviceMetadataWithFields:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteApplePayTrustKeyWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createApplePayTrustKeyWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)applePayTrustKeyForIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)featureApplicationsForProvisioningWithCompletion:(CDUnknownBlockType)arg1;
- (void)updatedAccountsForProvisioningWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)paymentWebServiceSupportsAccounts:(id)arg1;
- (id)supportedFeatureIdentifiersWithPaymentWebService:(id)arg1;
- (_Bool)paymentWebServiceSupportsPeerPaymentRegistration:(id)arg1;
- (_Bool)supportsCredentialType:(long long)arg1;
- (_Bool)supportsExpressForAutomaticSelectionTechnologyType:(long long)arg1;
- (_Bool)secureElementIsAvailable;
- (_Bool)felicaSecureElementIsAvailable;
- (void)paymentWebService:(id)arg1 validateTransferPreconditionsWithCompletion:(CDUnknownBlockType)arg2;
- (unsigned long long)secureElementOwnershipStateForCurrentUser;
- (void)claimSecureElementForCurrentUserWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)claimSecureElementForCurrentUser;
- (void)paymentWebService:(id)arg1 removePass:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)downloadAllPaymentPassesForPaymentWebService:(id)arg1;
- (void)_paymentWebService:(id)arg1 pass:(id)arg2 withExpressInfo:(id)arg3 hasDisqualifyingConflicts:(CDUnknownBlockType)arg4;
- (void)paymentWebService:(id)arg1 handlePotentialExpressPass:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandlerV2:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 addPaymentPass:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_validateCommonPreconditionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)paymentWebService:(id)arg1 validateAddPreconditionsWithCompletion:(CDUnknownBlockType)arg2;
- (_Bool)paymentWebService:(id)arg1 canProvisionPaymentPassWithPrimaryAccountIdentifier:(id)arg2;
- (id)paymentWebService:(id)arg1 passesOfType:(unsigned long long)arg2;
- (_Bool)paymentWebService:(id)arg1 hasPassesOfType:(unsigned long long)arg2;
- (void)paymentWebService:(id)arg1 setNewAuthRandom:(CDUnknownBlockType)arg2;
- (void)paymentWebService:(id)arg1 setNewAuthRandomIfNecessaryReturningPairingState:(CDUnknownBlockType)arg2;
- (id)deviceName;
- (id)deviceDescriptionForPaymentWebService:(id)arg1;
- (id)appleAccountInformation;
- (void)renewAppleAccountWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)paymentWebService:(id)arg1 deleteApplicationWithAID:(id)arg2;
- (int)paymentSupportedInCurrentRegionForWebService:(id)arg1;
- (id)paymentWebService:(id)arg1 filterVerificationChannels:(id)arg2;
- (void)paymentWebService:(id)arg1 didRegisterWithRegionMap:(id)arg2 primaryRegionTopic:(id)arg3;
- (void)signatureForAuthToken:(id)arg1 webService:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)trustedDeviceEnrollmentInfoForWebService:(id)arg1;
- (void)paymentWebService:(id)arg1 provisioningDataWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)paymentWebService:(id)arg1 signData:(id)arg2 signatureEntanglementMode:(unsigned long long)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)paymentWebService:(id)arg1 registrationDataWithAuthToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)paymentWebService:(id)arg1 registrationDataWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)paymentWebService:(id)arg1 configurationDataWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)paymentWebService:(id)arg1 queueConnectionToTrustedServiceManagerForPushTopic:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)paymentWebServiceDidUpdateConfiguration:(id)arg1;
- (id)secureElementIdentifiers;
- (void)startBackgroundVerificationObserverForPass:(id)arg1 verificationMethod:(id)arg2;
- (void)noteForegroundVerificationObserverActive:(_Bool)arg1;
- (void)setMaximumPaymentCards:(unsigned long long)arg1;
- (unsigned long long)maximumPaymentCards;
- (void)noteProvisioningUserInterfaceDidDisappear;
- (void)noteProvisioningUserInterfaceDidAppear;
- (void)noteProvisioningDidEnd;
- (void)noteProvisioningDidBegin;
- (_Bool)supportsAutomaticPassPresentation;
- (id)cellularNetworkRegion;
- (id)deviceRegion;
- (id)deviceVersion;
- (id)deviceClass;
- (id)bridgedClientInfo;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

