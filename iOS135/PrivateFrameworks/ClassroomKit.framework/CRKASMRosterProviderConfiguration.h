/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKASMRosterProviderConfiguration : NSObject {
    CRKASMCredentialStore * _credentialStore;
    NSObject<CRKClassKitRosterRequirements> * _rosterRequirements;
    NSString * _trustedUserCommonNamePrefix;
    NSString * _userCommonNamePrefix;
}

@property (nonatomic, readonly) CRKASMCredentialStore *credentialStore;
@property (nonatomic, readonly) NSObject<CRKClassKitRosterRequirements> *rosterRequirements;
@property (nonatomic, readonly, copy) NSString *trustedUserCommonNamePrefix;
@property (nonatomic, readonly, copy) NSString *userCommonNamePrefix;

+ (bool)currentPlatformRequiresPersonaAdoption;
+ (id)instructorRosterConfiguration;
+ (id)makeStandardClassKitFacade;
+ (id)makeStudentClassKitFacade;
+ (id)studentRosterConfiguration;

- (void).cxx_destruct;
- (id)credentialStore;
- (id)initWithUserCommonNamePrefix:(id)arg1 trustedUserCommonNamePrefix:(id)arg2 rosterRequirements:(id)arg3 credentialStore:(id)arg4;
- (id)rosterRequirements;
- (id)trustedUserCommonNamePrefix;
- (id)userCommonNamePrefix;

@end