//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CTBundle, CTXPCServiceSubscriptionContext, NSArray, NSDictionary, NSObject, NSString;

@protocol CTXPCServiceCarrierBundleInterface
- (void)copyBundleVersion:(CTXPCServiceSubscriptionContext *)arg1 bundleType:(CTBundle *)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (void)getWiFiCallingSettingPreferences:(CTXPCServiceSubscriptionContext *)arg1 key:(NSString *)arg2 completion:(void (^)(NSObject *, NSError *))arg3;
- (void)setWiFiCallingSettingPreferences:(CTXPCServiceSubscriptionContext *)arg1 key:(NSString *)arg2 value:(NSObject *)arg3 completion:(void (^)(NSError *))arg4;
- (void)context:(CTXPCServiceSubscriptionContext *)arg1 getAttachApnSettingsWithCompletion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)context:(CTXPCServiceSubscriptionContext *)arg1 modifyAttachApnSettings:(NSDictionary *)arg2 completion:(void (^)(NSError *))arg3;
- (void)isAttachApnSettingAllowed:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)copyCarrierBundleVersion:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)copyCarrierBookmarks:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)copyCarrierBundleLocation:(CTXPCServiceSubscriptionContext *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)copyCarrierBundleValueWithDefault:(CTXPCServiceSubscriptionContext *)arg1 keyHierarchy:(NSArray *)arg2 bundleType:(CTBundle *)arg3 completion:(void (^)(NSObject *, NSError *))arg4;
- (void)copyCarrierBundleValueWithDefault:(CTXPCServiceSubscriptionContext *)arg1 key:(NSString *)arg2 bundleType:(CTBundle *)arg3 completion:(void (^)(NSObject *, NSError *))arg4;
- (void)copyCarrierBundleValue:(CTXPCServiceSubscriptionContext *)arg1 keyHierarchy:(NSArray *)arg2 bundleType:(CTBundle *)arg3 completion:(void (^)(NSObject *, NSError *))arg4;
- (void)copyCarrierBundleValue:(CTXPCServiceSubscriptionContext *)arg1 key:(NSString *)arg2 bundleType:(CTBundle *)arg3 completion:(void (^)(NSObject *, NSError *))arg4;
@end

