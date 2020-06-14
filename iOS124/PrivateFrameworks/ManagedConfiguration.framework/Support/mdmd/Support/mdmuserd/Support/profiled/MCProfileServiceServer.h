//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LSApplicationWorkspaceObserverProtocol-Protocol.h"

@class CoreTelephonyClient, LSApplicationWorkspace, MCBTAJobManager, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface MCProfileServiceServer : NSObject <LSApplicationWorkspaceObserverProtocol>
{
    _Bool _memberQueueNeedToRecomputeNagMetadata;
    _Bool _memberQueueHasMigrated;
    _Bool _memberQueueHasActivationRecordChangesPending;
    int _mobileKeybagLockStateChangeNotificationToken;
    NSObject<OS_dispatch_queue> *_checkInQueue;
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSObject<OS_dispatch_group> *_workerGroup;
    MCBTAJobManager *_workerQueueBTAJobManager;
    NSObject<OS_dispatch_queue> *_memberQueue;
    double _memberQueueIdleTimeInterval;
    NSObject<OS_dispatch_queue> *_clientRestrictionQueue;
    NSObject<OS_dispatch_queue> *_mailAccountsQueue;
    id _powerAssertionAssertedNotificationToken;
    id _powerAssertionDeassertedNotificationToken;
    LSApplicationWorkspace *_appWorkspace;
    CoreTelephonyClient *_coreTelephonyClient;
}

+ (id)_descriptionForServiceSubscriptionContext:(id)arg1;
+ (id)sharedServer;
@property(retain, nonatomic) CoreTelephonyClient *coreTelephonyClient; // @synthesize coreTelephonyClient=_coreTelephonyClient;
@property(retain, nonatomic) LSApplicationWorkspace *appWorkspace; // @synthesize appWorkspace=_appWorkspace;
@property(nonatomic) int mobileKeybagLockStateChangeNotificationToken; // @synthesize mobileKeybagLockStateChangeNotificationToken=_mobileKeybagLockStateChangeNotificationToken;
@property(retain, nonatomic) id powerAssertionDeassertedNotificationToken; // @synthesize powerAssertionDeassertedNotificationToken=_powerAssertionDeassertedNotificationToken;
@property(retain, nonatomic) id powerAssertionAssertedNotificationToken; // @synthesize powerAssertionAssertedNotificationToken=_powerAssertionAssertedNotificationToken;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *mailAccountsQueue; // @synthesize mailAccountsQueue=_mailAccountsQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientRestrictionQueue; // @synthesize clientRestrictionQueue=_clientRestrictionQueue;
@property(nonatomic) _Bool memberQueueHasActivationRecordChangesPending; // @synthesize memberQueueHasActivationRecordChangesPending=_memberQueueHasActivationRecordChangesPending;
@property(nonatomic) _Bool memberQueueHasMigrated; // @synthesize memberQueueHasMigrated=_memberQueueHasMigrated;
@property(nonatomic) _Bool memberQueueNeedToRecomputeNagMetadata; // @synthesize memberQueueNeedToRecomputeNagMetadata=_memberQueueNeedToRecomputeNagMetadata;
@property(nonatomic) double memberQueueIdleTimeInterval; // @synthesize memberQueueIdleTimeInterval=_memberQueueIdleTimeInterval;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // @synthesize memberQueue=_memberQueue;
@property(retain, nonatomic) MCBTAJobManager *workerQueueBTAJobManager; // @synthesize workerQueueBTAJobManager=_workerQueueBTAJobManager;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *workerGroup; // @synthesize workerGroup=_workerGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue; // @synthesize workerQueue=_workerQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *checkInQueue; // @synthesize checkInQueue=_checkInQueue;
- (void).cxx_destruct;
- (void)validateAppBundleIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unstashWhitelistURLStringsWithSenderPID:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stashWhitelistURLStringsWithSenderPID:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unstashBlacklistURLStringsWithSenderPID:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stashBlacklistURLStringsWithSenderPID:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unstashUserBookmarksFromLabel:(id)arg1 senderPID:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)stashUserBookmarks:(id)arg1 withLabel:(id)arg2 senderPID:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setUserBookmarks:(id)arg1 senderPID:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (id)bookmarkDictsFromBookmarks:(id)arg1;
- (id)bookmarksFromBookmarkDicts:(id)arg1;
- (void)setURLsFromUserBookmarkDictsAsSettings:(id)arg1;
- (void)storeActivationRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createActivationLockBypassCodeWithCompletion:(CDUnknownBlockType)arg1;
- (void)cloudConfigurationStoreDetails:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)storeCloudConfigurationDetails:(id)arg1 outError:(id *)arg2;
- (_Bool)_activationRecordIndicatesCloudConfigurationIsAvailable;
- (void)cloudConfigurationMachineInfoDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchConfigurationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)rereadManagedAppAttributesWithCompletion:(CDUnknownBlockType)arg1;
- (void)resetAllSettingsToDefaultsIsUserInitiated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)markStoredProfileForPurposeAsInstalled:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)profileDataStoredForPurpose:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)storeProfileData:(id)arg1 configurationSource:(int)arg2 purpose:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeExpiredProfilesWithCompletion:(CDUnknownBlockType)arg1;
- (void)logToAggregateDictionary;
- (void)workerQueueLogToAggregateDictionary;
- (void)updateMISTrust;
- (void)workerQueueUpdateMISTrust;
- (void)revalidateManagedApps;
- (void)workerQueueRevalidateManagedApps;
- (void)removeExpiredProfiles;
- (void)workerQueueRemoveExpiredProfiles;
- (void)managedAppIDsWithFlags:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeProvisioningProfileWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)installProvisioningProfileData:(id)arg1 managingProfileIdentifer:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_badProvisioningProfileError;
- (void)storeCertificateData:(id)arg1 forIPCUIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)applicationsDidInstall:(id)arg1;
- (void)workerQueueNotifyUserLoggedIn;
- (void)notifyUserLoggedIn;
- (void)_setFirstUserLoginWorkCompleted;
- (_Bool)_isFirstUserLogin;
- (void)notifyProvisioningProfilesChanged;
- (void)notifyGracePeriodChanged;
- (void)notifyFirstUnlock;
- (void)notifyDeviceUnlockedWithCompletion:(CDUnknownBlockType)arg1;
- (void)workerQueueNotifyDeviceUnlocked;
- (void)workerQueueReadBiometricState;
- (void)checkCarrierProfileAndForceReinstallation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_workerQueueCheckCarrierProfileAtPath:(id)arg1 forceReinstallation:(_Bool)arg2;
- (void)_workerQueueRemoveAllCarrierProfiles;
- (void)openSettingsAppForProfileInstallation:(id)arg1 bundleID:(id)arg2;
- (id)URLForInstallingProfileInSettingsApp:(id)arg1 returningToBundleID:(id)arg2;
- (void)_handleSettingsJumpWithProfileData:(id)arg1 targetDeviceType:(unsigned long long)arg2 bundleID:(id)arg3;
- (void)openSensitiveURL:(id)arg1 unlock:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeValueSetting:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeBoolSetting:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setParametersForSettingsByType:(id)arg1 configurationUUID:(id)arg2 toSystem:(_Bool)arg3 user:(_Bool)arg4 passcode:(id)arg5 credentialSet:(id)arg6 senderPID:(int)arg7 completion:(CDUnknownBlockType)arg8;
- (void)migratePostMDMDataMigratorWithContext:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)migrateWithContext:(int)arg1 passcodeWasSetInBackup:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)managedWiFiNetworkNamesWithCompletion:(CDUnknownBlockType)arg1;
- (void)managedSystemConfigurationServiceIDsWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearPasscodeWithEscrowKeybagData:(id)arg1 secret:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)changePasscode:(id)arg1 oldPasscode:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)recomputePerClientUserComplianceWithCompletion:(CDUnknownBlockType)arg1;
- (void)recomputeUserComplianceWarningWithCompletion:(CDUnknownBlockType)arg1;
- (void)notifyHaveSeenComplianceMessageWithLastLockDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)notifyStartComplianceTimer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeWebContentFilterUserBlacklistedURLString:(id)arg1 senderPID:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addBookmark:(id)arg1 senderPID:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addAllowedURLString:(id)arg1 senderPID:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setAllowedURLStrings:(id)arg1 senderPID:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setSpellCheckAllowed:(_Bool)arg1 senderPID:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setKeyboardShortcutsAllowed:(_Bool)arg1 senderPID:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setPredictiveKeyboardAllowed:(_Bool)arg1 senderPID:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setSmartPunctuationAllowed:(_Bool)arg1 senderPID:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setAutoCorrectionAllowed:(_Bool)arg1 senderPID:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadMailAccountsWithAuditToken:(CDStruct_6ad76789)arg1 filteringEnabled:(_Bool)arg2 sourceAccountManagement:(int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)allowedKeyboardBundleIDsAfterApplyingFilterToBundleIDs:(id)arg1 messageSendingAppBundleID:(id)arg2 hostAppBundleID:(id)arg3 accountIsManaged:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)allowedImportFromAppBundleIDs:(id)arg1 importingAppBundleID:(id)arg2 importingIsManaged:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)allowedOpenInAppBundleIDs:(id)arg1 originatingAppBundleID:(id)arg2 originatingIsManaged:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)defaultAppBundleIDForCommunicationServiceType:(id)arg1 forAccountWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)mayShareToAirDropForOriginatingAppBundleID:(id)arg1 originatingAccountIsManaged:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)mayShareToMessagesForOriginatingAppBundleID:(id)arg1 originatingAccountIsManaged:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)shouldApplyFilterForBundleID:(id)arg1 sourceAccountManagement:(int)arg2 outAllowManagedAccounts:(_Bool *)arg3 outAllowUnmanagedAccounts:(_Bool *)arg4;
- (void)mayShareToWhitelistedSourceUnmanagedTargetAppWithServiceName:(id)arg1 originatingAppBundleID:(id)arg2 originatingAccountIsManaged:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)mayOpenFromManagedToUnmanaged;
- (_Bool)mayOpenFromUnmanagedToManaged;
- (_Bool)isOpenInRestrictionInEffect;
- (void)waitForMigrationIncludingPostRestoreMigration:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setUserInfo:(id)arg1 forClientUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeOrphanedClientRestrictionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)applyRestrictionDictionary:(id)arg1 appsAndOptions:(id)arg2 clientType:(id)arg3 clientUUID:(id)arg4 localizedClientDescription:(id)arg5 localizedWarningMessage:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)removeUninstalledProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 targetDeviceType:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateProfileIdentifier:(id)arg1 interactionClient:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)installProfileData:(id)arg1 interactionClient:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_handleProvisioningProfileData:(id)arg1 jumpToSettings:(_Bool)arg2 bundleID:(id)arg3;
- (void)queueProfileDataForInstallation:(id)arg1 originalFileName:(id)arg2 originatingBundleID:(id)arg3 transitionToUI:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)popProvisioningProfileFromHeadOfInstallationQueueWithCompletion:(CDUnknownBlockType)arg1;
- (void)peekProfileDataFromPurgatoryForDeviceType:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)popProfileDataFromPurgatoryForDeviceType:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)popProfileDataFromHeadOfInstallationQueueWithCompletion:(CDUnknownBlockType)arg1;
- (void)checkInWithCompletion:(CDUnknownBlockType)arg1;
- (void)_sendEffectiveSettingsChangedNotification;
- (void)_sendRestrictionChangedNotification;
- (void)workerQueueCheckForAutoInstallProfiles;
- (void)workerQueueRecomputeNagMessage;
- (void)workerQueueDidRecomputeNagMessageWithResult:(_Bool)arg1;
- (void)_workerQueuePrepareForService;
- (void)reapplyAppEnforcedRestrictionsWithAssertion:(id)arg1;
- (void)localeChanged;
- (void)notifyBatterySaverModeChanged;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

