//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/CKDAccountInfoProvider-Protocol.h>

@class ACAccountStore, ACAccountType, CKAccountOverrideInfo, CKDBackingAccount, CKDClientContext, NSPersonNameComponents, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDAccount : NSObject <CKDAccountInfoProvider>
{
    _Bool _isUnitTestingAccount;
    _Bool _accountWantsPushRegistration;
    _Bool _accountWantsFlowControl;
    _Bool _isAnonymousAccount;
    _Bool _haveWarnedAboutServerPreferredPushEnvironment;
    CKAccountOverrideInfo *_fakeAccountInfo;
    ACAccountType *_acAccountType;
    CKDBackingAccount *_backingAccount;
    CKDClientContext *_context;
    NSObject<OS_dispatch_queue> *_authTokenCallbackQueue;
    NSString *_lastFailedCloudKitAuthToken;
    NSString *_lastFailediCloudAuthToken;
}

+ (id)globalAuthTokenQueue;
@property(copy, nonatomic) NSString *lastFailediCloudAuthToken; // @synthesize lastFailediCloudAuthToken=_lastFailediCloudAuthToken;
@property(copy, nonatomic) NSString *lastFailedCloudKitAuthToken; // @synthesize lastFailedCloudKitAuthToken=_lastFailedCloudKitAuthToken;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *authTokenCallbackQueue; // @synthesize authTokenCallbackQueue=_authTokenCallbackQueue;
@property(nonatomic) _Bool haveWarnedAboutServerPreferredPushEnvironment; // @synthesize haveWarnedAboutServerPreferredPushEnvironment=_haveWarnedAboutServerPreferredPushEnvironment;
@property(nonatomic) _Bool isAnonymousAccount; // @synthesize isAnonymousAccount=_isAnonymousAccount;
@property(nonatomic) __weak CKDClientContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) CKDBackingAccount *backingAccount; // @synthesize backingAccount=_backingAccount;
@property(retain, nonatomic) ACAccountType *acAccountType; // @synthesize acAccountType=_acAccountType;
@property(nonatomic) _Bool accountWantsFlowControl; // @synthesize accountWantsFlowControl=_accountWantsFlowControl;
@property(nonatomic) _Bool accountWantsPushRegistration; // @synthesize accountWantsPushRegistration=_accountWantsPushRegistration;
@property(nonatomic) _Bool isUnitTestingAccount; // @synthesize isUnitTestingAccount=_isUnitTestingAccount;
@property(readonly, nonatomic) CKAccountOverrideInfo *fakeAccountInfo; // @synthesize fakeAccountInfo=_fakeAccountInfo;
- (void).cxx_destruct;
- (void)noteTimeSpentInNetworking:(double)arg1;
- (void)noteFailedProtocolRequest;
- (void)noteFailedNetworkRequest;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1;
- (id)sharingURLHostname;
- (id)displayedHostname;
- (id)regionCode;
- (id)languageCode;
- (_Bool)shouldFailAllTasks;
- (void)displayAuthenticationPromptWithReason:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)validateVettingToken:(id)arg1 vettingEmail:(id)arg2 vettingPhone:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_lockediCloudAuthTokenWithError:(id *)arg1;
- (void)iCloudAuthTokenWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)renewiCloudAuthTokenWithReason:(id)arg1 shouldForce:(_Bool)arg2 failedToken:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_lockedCloudKitAuthTokenWithError:(id *)arg1;
- (void)cloudKitAuthTokenWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)renewCloudKitAuthTokenWithReason:(id)arg1 shouldForce:(_Bool)arg2 failedToken:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_lockedRenewTokenWithReason:(id)arg1 shouldForce:(_Bool)arg2 tokenFetchBlock:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *authTokenQueue;
- (_Bool)isDataclassEnabled:(id)arg1;
@property(readonly, nonatomic) _Bool canAuthWithCloudKit;
@property(readonly, nonatomic) _Bool canAccessAccount;
@property(readonly, nonatomic) _Bool iCloudDriveAllowsCellularAccess;
- (id)deviceName;
- (id)hardwareID;
- (id)containerScopedUserID;
- (id)dsid;
- (id)baseURLForServerType:(long long)arg1 partitionType:(long long)arg2;
- (id)_urlBySettingCustomBaseURL:(id)arg1 onURL:(id)arg2;
@property(readonly, copy) NSString *description;
- (id)serverPreferredPushEnvironment;
- (id)trafficContainerIdentifier;
- (id)bundleID;
- (id)containerID;
@property(readonly, nonatomic) NSString *accountID;
@property(readonly, nonatomic) _Bool isFakeAccount;
- (void)renewMescalSessionForRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)resetMescalSession;
- (id)mescalSession;
- (void)fetchDeviceIDForOperation:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)fetchServerEnvironmentForOperation:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)fetchImportantUserIDsForOperation:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)fetchPublicURLForServerType:(long long)arg1 operation:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_fetchContainerInfoForOperation:(id)arg1 requireUserIDs:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchPrivateURLForServerType:(long long)arg1 operation:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchConfigurationForOperation:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)config;
@property(readonly, nonatomic) _Bool isiCloudDevEnvironmentAccount;
- (_Bool)_userCloudDBURLisInCarryPartition;
@property(readonly, nonatomic) _Bool isCarryAccount;
@property(readonly, nonatomic) NSString *formattedUsername;
@property(readonly, nonatomic) NSString *username;
@property(readonly, nonatomic) NSString *primaryEmail;
@property(readonly, nonatomic) NSPersonNameComponents *fullName;
@property(readonly, nonatomic) NSString *accountIdentifier;
@property(readonly, nonatomic) ACAccountStore *accountStore;
- (id)initFakeAccountWithAccountOverrideInfo:(id)arg1 context:(id)arg2;
- (id)initWithAccountID:(id)arg1 context:(id)arg2;
- (id)initAnonymousAccountWithContext:(id)arg1;
- (id)initPrimaryAccountWithContext:(id)arg1;
- (id)_initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

