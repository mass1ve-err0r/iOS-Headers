//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AuthKit/AKAppleIDAuthenticationLimitedUIProvider-Protocol.h>
#import <AuthKit/AKAppleIDServerAuthenticationUIProvider-Protocol.h>

@class AKAccountRecoveryContext, NSString;

@protocol AKAppleIDAuthenticationUIProvider <AKAppleIDAuthenticationLimitedUIProvider, AKAppleIDServerAuthenticationUIProvider>
- (void)dismissNativeRecoveryUIWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)presentNativeRecoveryUIWithContext:(AKAccountRecoveryContext *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;

@optional
- (void)dismissKeepUsingUIWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)presentKeepUsingUIForAppleID:(NSString *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
@end

