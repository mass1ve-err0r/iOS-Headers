//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, NSArray, NSDictionary, NSSet, NSString;

@interface AAAccount : NSObject
{
    ACAccount *_account;
    NSString *_fmipToken;
    NSArray *_appleIDAliases;
    NSString *_protocolVersion;
}

+ (id)dataclassesBoundToSingleAccount;
+ (id)dataclassesBoundToSyncAccount;
+ (id)dataclassesBoundToPrimaryAccount;
+ (id)accountTypeString;
@property(readonly, nonatomic) NSString *protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(readonly, nonatomic) NSArray *appleIDAliases; // @synthesize appleIDAliases=_appleIDAliases;
@property(copy, nonatomic) NSString *fmipToken; // @synthesize fmipToken=_fmipToken;
- (void).cxx_destruct;
@property(nonatomic) _Bool needsToVerifyTerms;
- (void)renewCredentialsForAppleIDWithHandler:(CDUnknownBlockType)arg1;
- (void)signInWithHandler:(CDUnknownBlockType)arg1;
- (void)setupChildMailAccountAndEnable:(_Bool)arg1 withEmail:(id)arg2;
- (void)authenticateWithHandler:(CDUnknownBlockType)arg1;
- (void)updateAccountPropertiesWithHandler:(CDUnknownBlockType)arg1;
- (void)flushCachedPassword;
- (void)flushCachedTokens;
- (void)removePasswordFromKeychain;
- (void)removeTokensFromKeychain;
- (void)saveFMIPTokenInKeychain;
- (void)savePasswordInKeychain;
- (void)saveTokensInKeychain;
- (_Bool)presentQuotaDepletionAlertForDataclassIfNecessary:(id)arg1;
- (_Bool)presentQuotaDepletionAlertForDataclassIfNecessary:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)presentQuotaDepletionAlertForDataclass:(id)arg1;
- (void)presentQuotaDepletionAlertForDataclass:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)notifyUserOfQuotaDepletion;
@property(readonly, nonatomic) NSArray *supportedDataclasses;
- (id)_childAccounts;
@property(readonly, nonatomic) NSString *syncStoreIdentifier;
- (int)mobileMeAccountStatus;
@property(readonly, nonatomic) _Bool needsEmailConfiguration;
- (id)_mailChildAccount;
- (void)setUseCellular:(_Bool)arg1 forDataclass:(id)arg2;
- (_Bool)useCellularForDataclass:(id)arg1;
@property(readonly, nonatomic) _Bool needsRegistration;
@property(readonly, nonatomic) NSDictionary *serviceUnavailableInfo;
@property(readonly, nonatomic) _Bool serviceUnavailable;
- (void)setAccountProperty:(id)arg1 forKey:(id)arg2;
- (id)accountPropertyForKey:(id)arg1;
- (void)updateAccountWithProvisioningResponse:(id)arg1;
- (id)propertiesForDataclass:(id)arg1;
- (_Bool)isProvisionedForDataclass:(id)arg1;
@property(readonly, nonatomic) NSDictionary *accountFirstDisplayAlert;
@property(readonly, nonatomic) NSDictionary *accountFooterButton;
@property(readonly, nonatomic) NSString *accountFooterText;
@property(copy, nonatomic) NSString *password;
@property(copy, nonatomic) NSString *authToken;
- (_Bool)isEnabledForDataclass:(id)arg1;
- (void)setEnabled:(_Bool)arg1 forDataclass:(id)arg2;
@property(readonly, nonatomic) NSSet *enabledDataclasses;
@property(readonly, nonatomic) NSSet *provisionedDataclasses;
@property(readonly, nonatomic) NSDictionary *dataclassProperties;
@property(readonly, nonatomic) _Bool primaryEmailVerified;
@property(nonatomic) _Bool primaryAccount;
@property(readonly, nonatomic) NSString *primaryEmail;
@property(readonly, nonatomic) NSString *personID;
@property(readonly, nonatomic) NSString *lastName;
@property(readonly, nonatomic) NSString *firstName;
@property(readonly, nonatomic) int accountServiceType;
@property(copy, nonatomic) NSString *accountDescription;
@property(copy, nonatomic) NSString *username;
@property(readonly, nonatomic) NSString *displayName;
- (id)account;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithAccount:(id)arg1;
- (id)initWithAccountIdentifier:(id)arg1;
- (id)init;

@end

