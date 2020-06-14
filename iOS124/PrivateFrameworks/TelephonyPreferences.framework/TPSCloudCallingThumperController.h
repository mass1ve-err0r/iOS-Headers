//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CTXPCServiceSubscriptionContext, NSDictionary, NSString, TPSCarrierBundleController, TUSenderIdentityCapabilities;
@protocol TPSCloudCallingThumperControllerDelegate;

@interface TPSCloudCallingThumperController : NSObject
{
    id <TPSCloudCallingThumperControllerDelegate> _delegate;
    TPSCarrierBundleController *_carrierBundleController;
    NSDictionary *_encryptedIdentityInfo;
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    TUSenderIdentityCapabilities *_subscriptionCapabilities;
}

@property(retain, nonatomic) TUSenderIdentityCapabilities *subscriptionCapabilities; // @synthesize subscriptionCapabilities=_subscriptionCapabilities;
@property(readonly, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext; // @synthesize subscriptionContext=_subscriptionContext;
@property(copy, nonatomic) NSDictionary *encryptedIdentityInfo; // @synthesize encryptedIdentityInfo=_encryptedIdentityInfo;
@property(retain, nonatomic) TPSCarrierBundleController *carrierBundleController; // @synthesize carrierBundleController=_carrierBundleController;
@property(nonatomic) __weak id <TPSCloudCallingThumperControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *localizedCarrierName;
@property(readonly, nonatomic) _Bool supportsThumperCalling;
@property(nonatomic, getter=isThumperCallingEnabled) _Bool thumperCallingEnabled;
- (id)initWithSubscriptionContext:(id)arg1;
- (id)init;

@end

