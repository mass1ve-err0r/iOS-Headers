//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleIDSSOAuthentication/NSObject-Protocol.h>

@class ACAccount, ACAccountStore, AIDAServiceContext, NSArray, NSPersonNameComponents, NSString;

@protocol AIDAServiceOwnerProtocol <NSObject>
+ (NSArray *)supportedServices;
- (void)signOutService:(NSString *)arg1 withContext:(AIDAServiceContext *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)signInService:(NSString *)arg1 withContext:(AIDAServiceContext *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (NSPersonNameComponents *)nameComponentsForAccount:(ACAccount *)arg1 service:(NSString *)arg2;
- (NSString *)DSIDForAccount:(ACAccount *)arg1 service:(NSString *)arg2;
- (NSString *)altDSIDForAccount:(ACAccount *)arg1 service:(NSString *)arg2;
- (ACAccount *)accountForService:(NSString *)arg1;
- (id)initWithAccountStore:(ACAccountStore *)arg1;
@end

