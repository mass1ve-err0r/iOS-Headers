//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PDXPCServiceExportedInterface-Protocol.h>

@class NSNumber, NSString, NSXPCListenerEndpoint, PKPaymentMerchantSession, PKPaymentRequest;

@protocol PDInAppPaymentServiceExportedInterface <PDXPCServiceExportedInterface>
- (void)enrollPaymentPassWithUniqueIdentifier:(NSString *)arg1 merchantSession:(PKPaymentMerchantSession *)arg2 completion:(void (^)(_Bool, PKPayment *))arg3;
- (void)cardDataForMerchantIdentifier:(NSString *)arg1 countryCode:(NSString *)arg2 completion:(void (^)(PKAMPCardRegistrationResponse *))arg3;
- (void)cardsAvailableForAMPWithCountryCode:(NSString *)arg1 completion:(void (^)(long long))arg2;
- (void)paymentHardwareStatusWithCompletion:(void (^)(PKPaymentHardwareStatus *))arg1;
- (void)secureElementStatusWithCompletion:(void (^)(_Bool, unsigned long long))arg1;
- (void)paymentServicesMerchantURLForAPIType:(unsigned long long)arg1 handler:(void (^)(_Bool, NSURL *))arg2;
- (void)merchantStatusCheck:(NSString *)arg1 merchantDomain:(NSString *)arg2 sourceApplicationSecondaryIdentifier:(NSString *)arg3 handler:(void (^)(_Bool, NSError *))arg4;
- (void)retrievePaymentListenerEndpointForHostIdentifier:(NSString *)arg1 handler:(void (^)(_Bool, NSXPCListenerEndpoint *))arg2;
- (void)registerPaymentListenerEndpoint:(NSXPCListenerEndpoint *)arg1 forHostIdentifier:(NSString *)arg2 handler:(void (^)(_Bool))arg3;
- (void)presentInAppPaymentInterfaceWithPaymentRequest:(PKPaymentRequest *)arg1 forHostIdentifier:(NSString *)arg2 orientation:(NSNumber *)arg3 handler:(void (^)(_Bool, NSError *))arg4;
@end

