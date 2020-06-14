//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MCHacks : NSObject
{
}

+ (id)sharedHacks;
- (_Bool)isSetupBuddyDone;
- (_Bool)isGreenTea;
- (_Bool)sanitizedProfileSignerCertificateChainIsAllowedToInstallSupervisedRestrictionsOnUnsupervisedDevices:(id)arg1;
- (_Bool)sanitizedProfileSignerCertificateChainIsAllowedToWriteDefaults:(id)arg1;
- (_Bool)sanitizedProfileSignerCertificateChainIsAllowedToInstallUnsupportedPayload:(id)arg1;
- (id)profileTrustEvaluators;
- (void)_sendChangeNotificationsBasedOnDefaultsRemovalByDomain:(id)arg1;
- (void)_sendChangeNotificationsBasedOnDefaultsAdditionByDomain:(id)arg1;
- (id)_deviceSpecificDefaultSettings;
- (void)_setRequriesEncryptedBackupInLockdownWithEffectiveUserSettings:(id)arg1;
- (void)_applyMandatorySettingsToEffectiveUserSettings:(id)arg1;
- (void)_applyHeuristicsToEffectiveUserSettings:(id)arg1;
- (void)_applyImpliedSettingsToSettingsDictionary:(id)arg1 currentSettings:(id)arg2 restrictions:(id)arg3;
- (_Bool)_applyHeuristicsToRestrictions:(id)arg1 forProfile:(id)arg2 outError:(id *)arg3;
- (id)quantizedAutoLockInSeconds:(id)arg1;
- (id)quantizedGracePeriodInSeconds:(id)arg1;
- (id)_selectLargestNumberFromSortedArray:(id)arg1 equalToOrLessThanNumber:(id)arg2;
- (id)permittedAutoLockNumbers;
- (id)_permittedGracePeriodNumbers;
- (void)_applyServerSideChangesWithOldRestrictions:(id)arg1 newRestrictions:(id)arg2 oldEffectiveUserSettings:(id)arg3 newEffectiveUserSettings:(id)arg4;

@end

