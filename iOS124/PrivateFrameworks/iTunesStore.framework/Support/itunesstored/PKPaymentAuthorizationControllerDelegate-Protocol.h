//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class PKContact, PKPayment, PKPaymentAuthorizationController, PKPaymentMethod, PKShippingMethod;

@protocol PKPaymentAuthorizationControllerDelegate <NSObject>
- (void)paymentAuthorizationControllerDidFinish:(PKPaymentAuthorizationController *)arg1;

@optional
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didSelectPaymentMethod:(PKPaymentMethod *)arg2 completion:(void (^)(NSArray *))arg3;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didSelectShippingContact:(PKContact *)arg2 completion:(void (^)(long long, NSArray *, NSArray *))arg3;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didSelectShippingMethod:(PKShippingMethod *)arg2 completion:(void (^)(long long, NSArray *))arg3;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didSelectPaymentMethod:(PKPaymentMethod *)arg2 handler:(void (^)(PKPaymentRequestPaymentMethodUpdate *))arg3;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didSelectShippingContact:(PKContact *)arg2 handler:(void (^)(PKPaymentRequestShippingContactUpdate *))arg3;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didSelectShippingMethod:(PKShippingMethod *)arg2 handler:(void (^)(PKPaymentRequestShippingMethodUpdate *))arg3;
- (void)paymentAuthorizationControllerWillAuthorizePayment:(PKPaymentAuthorizationController *)arg1;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didAuthorizePayment:(PKPayment *)arg2 completion:(void (^)(long long))arg3;
- (void)paymentAuthorizationController:(PKPaymentAuthorizationController *)arg1 didAuthorizePayment:(PKPayment *)arg2 handler:(void (^)(PKPaymentAuthorizationResult *))arg3;
@end

