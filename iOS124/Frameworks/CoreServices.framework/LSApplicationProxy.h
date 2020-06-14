//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreServices/LSBundleProxy.h>

#import <CoreServices/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSProgress, NSString, NSUUID, _LSApplicationState, _LSDiskUsage, _LSLazyPropertyList;

@interface LSApplicationProxy : LSBundleProxy <NSSecureCoding>
{
    NSString *_deviceIdentifierVendorName;
    NSArray *_pluginUUIDs;
    NSNumber *_versionID;
    _LSLazyPropertyList *_siriActionDefinitionURLs;
    _Bool _userInitiatedUninstall;
    int _bundleModTime;
    NSArray *_plugInKitPlugins;
    NSString *_signerOrganization;
    NSString *_companionApplicationIdentifier;
    NSArray *_counterpartIdentifiers;
    NSDate *_registeredDate;
    NSNumber *_itemID;
    NSString *_vendorName;
    NSString *_itemName;
    NSString *_genre;
    NSNumber *_genreID;
    NSString *_minimumSystemVersion;
    NSString *_maximumSystemVersion;
    NSString *_shortVersionString;
    NSString *_preferredArchitecture;
    _LSDiskUsage *_diskUsage;
    _LSApplicationState *_appState;
    NSNumber *_purchaserDSID;
    NSNumber *_downloaderDSID;
    NSNumber *_familyID;
    unsigned long long _installType;
    unsigned long long _originalInstallType;
    NSArray *_deviceFamily;
    NSArray *_activityTypes;
    NSString *_teamID;
    NSNumber *_storeFront;
    NSNumber *_ratingRank;
    NSString *_ratingLabel;
    NSString *_sourceAppIdentifier;
    NSString *_applicationVariant;
    NSString *_watchKitVersion;
    NSString *_complicationPrincipalClass;
    NSArray *_supportedComplicationFamilies;
    NSNumber *_installFailureReason;
    NSString *_appStoreToolsBuildVersion;
}

+ (id)iconQueue;
+ (_Bool)supportsSecureCoding;
+ (id)applicationProxyForItemID:(id)arg1;
+ (id)applicationProxyForBundleURL:(id)arg1;
+ (id)applicationProxyForSystemPlaceholder:(id)arg1;
+ (id)applicationProxyForCompanionIdentifier:(id)arg1;
+ (id)applicationProxyForIdentifier:(id)arg1 placeholder:(_Bool)arg2;
+ (id)applicationProxyForIdentifier:(id)arg1;
+ (id)applicationProxyForBundleType:(unsigned long long)arg1 identifier:(id)arg2 isCompanion:(_Bool)arg3 URL:(id)arg4 itemID:(id)arg5 bundleUnit:(unsigned int *)arg6;
+ (id)applicationProxyForIdentifier:(id)arg1 withContext:(struct LSContext *)arg2;
+ (id)applicationProxyWithBundleUnitID:(unsigned int)arg1 withContext:(struct LSContext *)arg2;
@property(readonly, nonatomic) int bundleModTime; // @synthesize bundleModTime=_bundleModTime;
@property(nonatomic) _Bool userInitiatedUninstall; // @synthesize userInitiatedUninstall=_userInitiatedUninstall;
@property(readonly, nonatomic) NSString *appStoreToolsBuildVersion; // @synthesize appStoreToolsBuildVersion=_appStoreToolsBuildVersion;
@property(readonly, nonatomic) NSNumber *installFailureReason; // @synthesize installFailureReason=_installFailureReason;
@property(readonly) NSArray *supportedComplicationFamilies; // @synthesize supportedComplicationFamilies=_supportedComplicationFamilies;
@property(readonly) NSString *complicationPrincipalClass; // @synthesize complicationPrincipalClass=_complicationPrincipalClass;
@property(readonly, nonatomic) NSString *watchKitVersion; // @synthesize watchKitVersion=_watchKitVersion;
@property(readonly, nonatomic) NSString *applicationVariant; // @synthesize applicationVariant=_applicationVariant;
@property(readonly, nonatomic) NSString *sourceAppIdentifier; // @synthesize sourceAppIdentifier=_sourceAppIdentifier;
@property(readonly, nonatomic) NSString *ratingLabel; // @synthesize ratingLabel=_ratingLabel;
@property(readonly, nonatomic) NSNumber *ratingRank; // @synthesize ratingRank=_ratingRank;
@property(readonly, nonatomic) NSNumber *storeFront; // @synthesize storeFront=_storeFront;
@property(readonly, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;
@property(readonly, nonatomic) NSArray *activityTypes; // @synthesize activityTypes=_activityTypes;
@property(readonly, nonatomic) NSArray *deviceFamily; // @synthesize deviceFamily=_deviceFamily;
@property(readonly, nonatomic) unsigned long long originalInstallType; // @synthesize originalInstallType=_originalInstallType;
@property(readonly, nonatomic) unsigned long long installType; // @synthesize installType=_installType;
@property(readonly, nonatomic) NSNumber *familyID; // @synthesize familyID=_familyID;
@property(readonly, nonatomic) NSNumber *downloaderDSID; // @synthesize downloaderDSID=_downloaderDSID;
@property(readonly, nonatomic) NSNumber *purchaserDSID; // @synthesize purchaserDSID=_purchaserDSID;
@property(readonly, nonatomic) _LSApplicationState *appState; // @synthesize appState=_appState;
@property(readonly, nonatomic) _LSDiskUsage *diskUsage; // @synthesize diskUsage=_diskUsage;
@property(readonly, nonatomic) NSString *preferredArchitecture; // @synthesize preferredArchitecture=_preferredArchitecture;
@property(readonly, nonatomic) NSString *shortVersionString; // @synthesize shortVersionString=_shortVersionString;
@property(readonly, nonatomic) NSString *maximumSystemVersion; // @synthesize maximumSystemVersion=_maximumSystemVersion;
@property(readonly, nonatomic) NSString *minimumSystemVersion; // @synthesize minimumSystemVersion=_minimumSystemVersion;
@property(readonly, nonatomic) NSNumber *genreID; // @synthesize genreID=_genreID;
@property(readonly, nonatomic) NSString *genre; // @synthesize genre=_genre;
@property(readonly, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(readonly, nonatomic) NSString *vendorName; // @synthesize vendorName=_vendorName;
@property(readonly, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(readonly, nonatomic) NSDate *registeredDate; // @synthesize registeredDate=_registeredDate;
@property(readonly, nonatomic) NSArray *counterpartIdentifiers; // @synthesize counterpartIdentifiers=_counterpartIdentifiers;
@property(readonly, nonatomic) NSString *companionApplicationIdentifier; // @synthesize companionApplicationIdentifier=_companionApplicationIdentifier;
- (id)signerOrganization;
- (id)description;
@property(readonly, nonatomic) NSDictionary *siriActionDefinitionURLs;
- (void)getDeviceManagementPolicyWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) long long deviceManagementPolicy;
@property(readonly, nonatomic, getter=isRemovedSystemApp) _Bool removedSystemApp;
@property(readonly, nonatomic, getter=isRemoveableSystemApp) _Bool removeableSystemApp;
@property(readonly, nonatomic, getter=isDeletable) _Bool deletable;
@property(readonly, nonatomic) _Bool gameCenterEverEnabled;
@property(readonly, nonatomic, getter=isGameCenterEnabled) _Bool gameCenterEnabled;
@property(readonly, nonatomic) _Bool supportsPurgeableLocalStorage;
@property(readonly, nonatomic) _Bool missingRequiredSINF;
@property(readonly, nonatomic) _Bool hasMIDBasedSINF;
@property(readonly, nonatomic) _Bool shouldSkipWatchAppInstall;
@property(readonly, nonatomic) _Bool hasGlance;
@property(readonly) _Bool hasComplication;
@property(readonly, nonatomic) _Bool hasCustomNotification;
@property(readonly, nonatomic, getter=isWatchKitApp) _Bool watchKitApp;
@property(readonly, nonatomic, getter=isPurchasedReDownload) _Bool purchasedReDownload;
@property(readonly, nonatomic, getter=isBetaApp) _Bool betaApp;
@property(readonly, nonatomic, getter=isDeviceBasedVPP) _Bool deviceBasedVPP;
@property(readonly, nonatomic, getter=isAppStoreVendable) _Bool appStoreVendable;
@property(readonly, nonatomic, getter=isWhitelisted) _Bool whitelisted;
@property(readonly, nonatomic, getter=isInstalled) _Bool installed;
@property(readonly, nonatomic) _Bool hasSettingsBundle;
@property(readonly, nonatomic) _Bool supportsOpenInPlace;
@property(readonly, nonatomic) _Bool supportsExternallyPlayableContent;
@property(readonly, nonatomic) _Bool supportsODR;
@property(readonly, nonatomic, getter=isLaunchProhibited) _Bool launchProhibited;
@property(readonly, nonatomic) _Bool supportsAudiobooks;
@property(readonly, nonatomic, getter=isRestricted) _Bool restricted;
@property(readonly, nonatomic, getter=isNewsstandApp) _Bool newsstandApp;
@property(readonly, nonatomic) _Bool hasParallelPlaceholder;
@property(readonly, nonatomic, getter=isAppUpdate) _Bool appUpdate;
@property(readonly, nonatomic, getter=isPlaceholder) _Bool placeholder;
@property(readonly, nonatomic, getter=isAdHocCodeSigned) _Bool adHocCodeSigned;
- (_Bool)UPPValidated;
- (_Bool)profileValidated;
@property(readonly, nonatomic) _Bool fileSharingEnabled;
@property(readonly, nonatomic) _Bool iconUsesAssetCatalog;
@property(readonly, nonatomic) _Bool iconIsPrerendered;
@property(readonly, nonatomic) _Bool supportsAlternateIconNames;
- (id)primaryIconDataForVariant:(int)arg1;
- (id)iconDataForVariant:(int)arg1 withOptions:(int)arg2;
- (id)iconDataForVariant:(int)arg1;
- (id)iconDataForVariant:(int)arg1 preferredIconName:(id)arg2 withOptions:(int)arg3;
- (id)resourcesDirectoryURL;
- (id)installProgressSync;
@property(readonly, nonatomic) NSProgress *installProgress;
@property(readonly, nonatomic) NSNumber *betaExternalVersionIdentifier; // @dynamic betaExternalVersionIdentifier;
@property(readonly, nonatomic) NSNumber *externalVersionIdentifier; // @dynamic externalVersionIdentifier;
- (id)getBundleMetadata;
- (id)alternateIconName;
- (void)setAlternateIconName:(id)arg1 withResult:(CDUnknownBlockType)arg2;
- (void)clearAdvertisingIdentifier;
@property(readonly, nonatomic) NSUUID *deviceIdentifierForAdvertising;
@property(readonly, nonatomic) NSUUID *deviceIdentifierForVendor;
@property(readonly, nonatomic) NSArray *requiredDeviceCapabilities;
@property(readonly, nonatomic) NSArray *appTags;
@property(readonly, nonatomic) NSArray *plugInKitPlugins; // @synthesize plugInKitPlugins=_plugInKitPlugins;
@property(readonly, nonatomic) NSArray *VPNPlugins;
@property(readonly, nonatomic) NSNumber *ODRDiskUsage;
@property(readonly, nonatomic) NSNumber *dynamicDiskUsage;
@property(readonly, nonatomic) NSNumber *staticDiskUsage;
@property(readonly, nonatomic) NSArray *externalAccessoryProtocols;
@property(readonly, nonatomic) NSArray *audioComponents;
@property(readonly, nonatomic) NSArray *UIBackgroundModes;
@property(readonly, nonatomic) NSArray *directionsModes;
@property(readonly, nonatomic) NSString *applicationDSID; // @dynamic applicationDSID;
@property(readonly, nonatomic) NSArray *staticShortcutItems;
@property(readonly, nonatomic) NSArray *subgenres;
@property(readonly, nonatomic) NSString *storeCohortMetadata;
@property(readonly, nonatomic) NSString *applicationType;
@property(readonly, nonatomic) NSString *applicationIdentifier;
- (id)uniqueIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)_initWithBundleUnit:(unsigned int)arg1 context:(struct LSContext *)arg2 applicationIdentifier:(id)arg3;
- (id)localizedNameWithPreferredLocalizations:(id)arg1 useShortNameOnly:(_Bool)arg2;
- (id)localizedNameForContext:(id)arg1 preferredLocalizations:(id)arg2;
- (id)localizedNameForContext:(id)arg1;
- (id)localizedNameForContext:(id)arg1 preferredLocalizations:(id)arg2 useShortNameOnly:(_Bool)arg3;

@end

