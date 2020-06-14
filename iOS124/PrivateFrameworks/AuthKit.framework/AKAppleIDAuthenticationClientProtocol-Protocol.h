//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AuthKit/AKAnisetteProvisioningClientProtocol-Protocol.h>

@class AKAccountRecoveryContext, AKAppleIDAuthenticationContext, AKServerRequestConfiguration, NSDictionary, NSError, NSString, NSUUID;

@protocol AKAppleIDAuthenticationClientProtocol <AKAnisetteProvisioningClientProtocol>
- (void)shouldContinueWithAuthenticationResults:(NSDictionary *)arg1 error:(NSError *)arg2 forContextID:(NSUUID *)arg3 completion:(void (^)(_Bool, NSDictionary *))arg4;
- (void)registerSurrogateForContext:(AKAppleIDAuthenticationContext *)arg1 identifier:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)dismissNativeRecoveryUIForContext:(AKAppleIDAuthenticationContext *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)presentNativeRecoveryUIForContext:(AKAppleIDAuthenticationContext *)arg1 recoveryContext:(AKAccountRecoveryContext *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)dismissServerProvidedUIForContext:(AKAppleIDAuthenticationContext *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)presentServerProvidedUIForContext:(AKAppleIDAuthenticationContext *)arg1 withConfiguration:(AKServerRequestConfiguration *)arg2 completion:(void (^)(NSHTTPURLResponse *, NSDictionary *, NSError *))arg3;
- (void)presentSecondFactorAlertForContext:(AKAppleIDAuthenticationContext *)arg1 withError:(NSError *)arg2 title:(NSString *)arg3 message:(NSString *)arg4 completion:(void (^)(NSNumber *, NSError *))arg5;
- (void)dismissSecondFactorUIForContext:(AKAppleIDAuthenticationContext *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)presentSecondFactorUIForContext:(AKAppleIDAuthenticationContext *)arg1 completion:(void (^)(NSNumber *, NSError *))arg2;
- (void)presentLoginAlertForContext:(AKAppleIDAuthenticationContext *)arg1 withError:(NSError *)arg2 title:(NSString *)arg3 message:(NSString *)arg4 completion:(void (^)(NSString *, NSString *, NSDictionary *, NSError *))arg5;
- (void)dismissBasicLoginUIForContext:(AKAppleIDAuthenticationContext *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)presentBasicLoginUIForContext:(AKAppleIDAuthenticationContext *)arg1 completion:(void (^)(NSString *, NSString *, NSDictionary *, NSError *))arg2;
- (void)dismissKeepUsingUIForContext:(AKAppleIDAuthenticationContext *)arg1 withCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)presentKeepUsingUIForContext:(AKAppleIDAuthenticationContext *)arg1 appleID:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
@end

