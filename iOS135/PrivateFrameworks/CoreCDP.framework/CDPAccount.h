/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
 */

@interface CDPAccount : NSObject

+ (bool)isICDPEnabledForDSID:(id)arg1;
+ (bool)isICDPEnabledForDSID:(id)arg1 checkWithServer:(bool)arg2;
+ (id)sharedInstance;

- (id)authToken;
- (id)contextForPrimaryAccount;
- (id)escrowURL;
- (id)iCloudEnv;
- (id)primaryAccountAltDSID;
- (id)primaryAccountDSID;
- (unsigned long long)primaryAccountSecurityLevel;
- (id)primaryAccountStashedPRK;
- (id)primaryAccountUsername;
- (id)primaryAppleAccount;
- (id)sharedAccountStore;

@end