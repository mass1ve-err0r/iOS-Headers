/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDClientContext : NSObject <CKDAccountAccessInfoProvider, CKDContainerScopedUserIDProvider, CKDContextInfoProvider> {
    CKDMMCS * _MMCS;
    CKDAccount * _account;
    CKAccountOverrideInfo * _accountInfoOverride;
    CKDAppContainerIntersectionMetadata * _appContainerIntersectionMetadata;
    CKDAppContainerTuple * _appContainerTuple;
    NSString * _applicationAssetDbDirectory;
    NSString * _applicationBundleID;
    NSString * _applicationCachesDirectory;
    NSString * _applicationContainerCloudKitDirectory;
    NSString * _applicationContainerPath;
    NSString * _applicationDisplayName;
    NSString * _applicationFileDownloadDirectory;
    NSString * _applicationFileStagingDirectory;
    NSString * _applicationFrameworkCachesDirectory;
    NSURL * _applicationIcon;
    NSString * _applicationMMCSDirectory;
    CKDApplicationMetadata * _applicationMetadata;
    NSString * _applicationPackageStagingDirectory;
    NSString * _applicationRecordCacheDirectory;
    NSString * _applicationTemporaryDirectory;
    NSString * _applicationVersion;
    CKDPublicIdentityLookupService * _backgroundPublicIdentityLookupService;
    CKDZoneGatekeeper * _backgroundZoneGatekeeper;
    bool  _bypassPCSEncryption;
    CKDCachePurger * _cachePurger;
    long long  _cachedEnvironment;
    bool  _captureResponseHTTPHeaders;
    unsigned int  _clientSDKVersion;
    CKDServerConfiguration * _config;
    NSString * _containerEncryptionServiceName;
    CKContainerID * _containerID;
    NSString * _containerScopedUserID;
    NSString * _contextID;
    long long  _contextType;
    NSString * _entitlementSpecifiedPCSServiceName;
    NSMutableDictionary * _fakeErrorsByClassName;
    NSMutableDictionary * _fakeResponseOperationLifetimeByClassName;
    NSMutableDictionary * _fakeResponseOperationResultByClassNameByItemID;
    bool  _finishedAppProxySetup;
    bool  _finishedProxySetup;
    CKDFlowControlManager * _flowControlManager;
    bool  _forceEnableReadOnlyManatee;
    CKDPublicIdentityLookupService * _foregroundPublicIdentityLookupService;
    CKDZoneGatekeeper * _foregroundZoneGatekeeper;
    NSString * _hardwareID;
    bool  _hasDataContainer;
    bool  _isForClouddInternalUse;
    bool  _isSiloedContext;
    unsigned long long  _mmcsEncryptionSupport;
    NSString * _orgAdminUserID;
    CKDPCSCache * _pcsCache;
    CKDPCSManager * _pcsManager;
    NSString * _personaID;
    NSHashTable * _proxies;
    NSObject<OS_dispatch_group> * _proxyPreparationGroup;
    NSURL * _publicCloudDBURL;
    NSURL * _publicCodeServiceURL;
    NSURL * _publicDatabaseRPCServiceURL;
    NSURL * _publicDeviceServiceURL;
    CKDKeyValueDiskCache * _publicIdentitiesDiskCache;
    NSURL * _publicMetricsServiceURL;
    NSURL * _publicShareServiceURL;
    bool  _returnPCSMetadata;
    bool  _sandboxed;
    NSObject<OS_dispatch_queue> * _setupQueue;
    NSString * _sourceApplicationBundleID;
    bool  _useZoneWidePCS;
    bool  _wasInitializedWithProxy;
}

@property (retain) CKDMMCS *MMCS;
@property (retain) CKDAccount *account;
@property (nonatomic, readonly) CKAccountOverrideInfo *accountInfoOverride;
@property (nonatomic, readonly) bool allowsCellularAccess;
@property (nonatomic) bool allowsPowerNapScheduling;
@property (nonatomic, retain) CKDAppContainerIntersectionMetadata *appContainerIntersectionMetadata;
@property (nonatomic, readonly) CKDAppContainerTuple *appContainerTuple;
@property (nonatomic, retain) NSString *applicationAssetDbDirectory;
@property (nonatomic, retain) NSString *applicationBundleID;
@property (nonatomic, readonly) NSString *applicationBundleIDForPush;
@property (nonatomic, readonly) NSString *applicationBundleIDForServer;
@property (nonatomic, retain) NSString *applicationCachesDirectory;
@property (nonatomic, retain) NSString *applicationContainerCloudKitDirectory;
@property (nonatomic, retain) NSString *applicationContainerPath;
@property (nonatomic, readonly) NSString *applicationDisplayName;
@property (nonatomic, retain) NSString *applicationFileDownloadDirectory;
@property (nonatomic, retain) NSString *applicationFileStagingDirectory;
@property (nonatomic, retain) NSString *applicationFrameworkCachesDirectory;
@property (nonatomic, readonly) NSURL *applicationIcon;
@property (nonatomic, retain) NSString *applicationMMCSDirectory;
@property (nonatomic, retain) CKDApplicationMetadata *applicationMetadata;
@property (nonatomic, retain) NSString *applicationPackageStagingDirectory;
@property (nonatomic, retain) NSString *applicationRecordCacheDirectory;
@property (nonatomic, readonly) NSString *applicationTemporaryDirectory;
@property (nonatomic, retain) NSString *applicationVersion;
@property (setter=setAPSEnvironmentString:, nonatomic, retain) NSString *apsEnvironmentString;
@property (nonatomic, retain) NSString *associatedApplicationBundleID;
@property (nonatomic, retain) CKDPublicIdentityLookupService *backgroundPublicIdentityLookupService;
@property (nonatomic, retain) CKDZoneGatekeeper *backgroundZoneGatekeeper;
@property (nonatomic, readonly) bool bypassPCSEncryption;
@property (nonatomic, retain) CKDCachePurger *cachePurger;
@property long long cachedEnvironment;
@property (nonatomic, readonly) bool canAccessAccount;
@property (nonatomic) bool canAccessProtectionData;
@property (nonatomic) bool canAccessZoneProtectionData;
@property (nonatomic, readonly) bool canAuthWithCloudKit;
@property (nonatomic) bool canSetDeviceIdentifier;
@property (nonatomic) bool captureResponseHTTPHeaders;
@property (nonatomic, retain) NSString *clientPrefixEntitlement;
@property (nonatomic) unsigned int clientSDKVersion;
@property (nonatomic, retain) CKDServerConfiguration *config;
@property (nonatomic, retain) NSString *containerEncryptionServiceName;
@property (nonatomic, readonly) CKContainerID *containerID;
@property (copy) NSString *containerScopedUserID;
@property (nonatomic, readonly) NSString *contextID;
@property (nonatomic) long long contextType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) NSString *encryptionServiceName;
@property (nonatomic, retain) NSString *entitlementSpecifiedPCSServiceName;
@property (nonatomic, retain) NSMutableDictionary *fakeErrorsByClassName;
@property (nonatomic, retain) NSMutableDictionary *fakeResponseOperationLifetimeByClassName;
@property (nonatomic, retain) NSMutableDictionary *fakeResponseOperationResultByClassNameByItemID;
@property (nonatomic) bool finishedAppProxySetup;
@property (nonatomic) bool finishedProxySetup;
@property (nonatomic, retain) CKDFlowControlManager *flowControlManager;
@property (nonatomic, readonly) bool forceEnableReadOnlyManatee;
@property (nonatomic, retain) CKDPublicIdentityLookupService *foregroundPublicIdentityLookupService;
@property (nonatomic, retain) CKDZoneGatekeeper *foregroundZoneGatekeeper;
@property (nonatomic, readonly) NSString *hardwareID;
@property (nonatomic) bool hasAllowAccessDuringBuddyEntitlement;
@property (nonatomic) bool hasAllowCustomAccountsEntitlement;
@property (nonatomic) bool hasAllowSetEnvironmentEntitlement;
@property (nonatomic) bool hasAllowUnverifiedAccountEntitlement;
@property (nonatomic) bool hasDataContainer;
@property (nonatomic) bool hasDisplaysSystemAcceptPromptEntitlement;
@property (nonatomic) bool hasExplicitCodeOperationURLEntitlement;
@property (nonatomic) bool hasLightweightPCSEntitlement;
@property (nonatomic) bool hasMasqueradingEntitlement;
@property (nonatomic) bool hasNonLegacyShareURLEntitlement;
@property (nonatomic) bool hasOutOfProcessUIEntitlement;
@property (nonatomic) bool hasParticipantPIIEntitlement;
@property (setter=setHasSystemServiceEntitlement:, nonatomic) bool hasSystemServiceEntitlement;
@property (nonatomic) bool hasTCCAuthorization;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isForClouddInternalUse;
@property (nonatomic, readonly) bool isSiloedContext;
@property (nonatomic, readonly) NSString *languageCode;
@property (nonatomic, readonly) unsigned long long mmcsEncryptionSupport;
@property (copy) NSString *orgAdminUserID;
@property (nonatomic, readonly) CKDPCSCache *pcsCache;
@property (nonatomic, retain) CKDPCSManager *pcsManager;
@property (nonatomic, readonly) NSString *personaID;
@property (nonatomic, readonly) NSString *processName;
@property (nonatomic, retain) NSHashTable *proxies;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *proxyPreparationGroup;
@property (copy) NSURL *publicCloudDBURL;
@property (copy) NSURL *publicCodeServiceURL;
@property (copy) NSURL *publicDatabaseRPCServiceURL;
@property (copy) NSURL *publicDeviceServiceURL;
@property (nonatomic, retain) CKDKeyValueDiskCache *publicIdentitiesDiskCache;
@property (copy) NSURL *publicMetricsServiceURL;
@property (copy) NSURL *publicShareServiceURL;
@property (nonatomic, readonly) NSString *regionCode;
@property (nonatomic) bool returnPCSMetadata;
@property (getter=isSandboxed, nonatomic) bool sandboxed;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *setupQueue;
@property (nonatomic, readonly) NSString *sourceApplicationBundleID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool useZoneWidePCS;
@property (nonatomic) bool wasInitializedWithProxy;

+ (id)_sharedContextWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3 forInternalUse:(bool)arg4;
+ (id)_sharedContextWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3 forInternalUse:(bool)arg4 addToSharedContexts:(bool)arg5;
+ (id)applicationCachesPathForBundleID:(id)arg1;
+ (id)applicationCachesPathForBundleID:(id)arg1 usingHomeCachesDirectory:(bool)arg2;
+ (id)applicationContainerPathForBundleID:(id)arg1 bundleURL:(id*)arg2 contextType:(long long*)arg3;
+ (id)contextWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3;
+ (id)sharedContextForInternalUseWithAppContainerAccountTuple:(id)arg1;
+ (id)sharedContextForInternalUseWithAppContainerTuple:(id)arg1 unitTestingAccountInfoProvider:(id)arg2;
+ (id)sharedContextWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3;
+ (id)sharedContexts;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)MMCS;
- (bool)_anyAssociatedProxyHasTCCAuthorization;
- (void)_cancelAllLongLivedOperations;
- (void)_clearCaches;
- (bool)_cloudKitEnabledForCurrentClient;
- (id)_dataclassNameForContainerIdentifier:(id)arg1;
- (void)_determineHardwareInfo;
- (void)_fetchContainerInfoForOperation:(id)arg1 requireUserIDs:(bool)arg2 completionHandler:(id /* block */)arg3;
- (id)_issueSandboxExtensionForPath:(id)arg1 withAuditToken:(struct { unsigned int x1[8]; })arg2 error:(id*)arg3;
- (void)_loadApplicationContainerPathAndType;
- (void)_reloadAccount:(bool)arg1;
- (bool)_setupDirectoriesWithClientProxy:(id)arg1 sandboxExtensions:(id*)arg2 error:(id*)arg3;
- (id)_urlBySettingCustomBaseURL:(id)arg1 onURL:(id)arg2;
- (id)account;
- (id)accountInfoOverride;
- (void)addClientProxy:(id)arg1;
- (unsigned long long)aggregatedOutstandingOperationCount;
- (bool)allowsCellularAccess;
- (bool)allowsPowerNapScheduling;
- (id)appContainerIntersectionMetadata;
- (id)appContainerTuple;
- (id)applicationAssetDbDirectory;
- (id)applicationBundleID;
- (id)applicationBundleIDForPush;
- (id)applicationBundleIDForServer;
- (id)applicationCachesDirectory;
- (id)applicationContainerCloudKitDirectory;
- (id)applicationContainerPath;
- (id)applicationDisplayName;
- (id)applicationFileDownloadDirectory;
- (id)applicationFileStagingDirectory;
- (id)applicationFrameworkCachesDirectory;
- (id)applicationIcon;
- (id)applicationMMCSDirectory;
- (id)applicationMetadata;
- (id)applicationPackageStagingDirectory;
- (id)applicationRecordCacheDirectory;
- (id)applicationTemporaryDirectory;
- (id)applicationVersion;
- (id)apsEnvironmentString;
- (id)assetDirectoryContext;
- (id)associatedApplicationBundleID;
- (id)backgroundPublicIdentityLookupService;
- (id)backgroundZoneGatekeeper;
- (id)baseURLForServerType:(long long)arg1 partitionType:(long long)arg2;
- (bool)bypassPCSEncryption;
- (id)cachePurger;
- (long long)cachedEnvironment;
- (bool)canAccessAccount;
- (bool)canAccessProtectionData;
- (bool)canAccessZoneProtectionData;
- (bool)canAuthWithCloudKit;
- (bool)canSetDeviceIdentifier;
- (bool)captureResponseHTTPHeaders;
- (void)clearAssetCache;
- (void)clearAssetCacheWithDatabaseScope:(long long)arg1;
- (void)clearAuthTokensForRecordWithID:(id)arg1 databaseScope:(long long)arg2;
- (void)clearContextFromMetadataCache;
- (void)clearPILSCacheForLookupInfos:(id)arg1;
- (void)clearRecordCache;
- (void)clearRecordCacheWithDatabaseScope:(long long)arg1;
- (id)clientPrefixEntitlement;
- (unsigned int)clientSDKVersion;
- (id)config;
- (id)containerEncryptionServiceName;
- (id)containerID;
- (id)containerScopedUserID;
- (id)contextID;
- (long long)contextType;
- (unsigned long long)countAssetCacheItems;
- (unsigned long long)countAssetCacheItemsWithDatabaseScope:(long long)arg1;
- (id)createAppContainerTuple;
- (void)dealloc;
- (id)description;
- (id)deviceIDForOperation:(id)arg1;
- (id)deviceName;
- (void)dropMMCS;
- (id)encryptionServiceName;
- (id)entitlementSpecifiedPCSServiceName;
- (id)fakeErrorsByClassName;
- (id)fakeResponseOperationLifetimeByClassName;
- (id)fakeResponseOperationResultByClassNameByItemID;
- (void)fetchConfigurationForOperation:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)fetchImportantUserIDsForOperation:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)fetchPrivateURLForServerType:(long long)arg1 operation:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchPublicURLForServerType:(long long)arg1 operation:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchServerEnvironmentForOperation:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)finishSetupWithClientProxy:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)finishedAppProxySetup;
- (bool)finishedProxySetup;
- (id)flowControlManager;
- (bool)forceEnableReadOnlyManatee;
- (id)foregroundPublicIdentityLookupService;
- (id)foregroundZoneGatekeeper;
- (id)hardwareID;
- (bool)hasAccountAccessAndTCCAuth;
- (bool)hasAllowAccessDuringBuddyEntitlement;
- (bool)hasAllowCustomAccountsEntitlement;
- (bool)hasAllowSetEnvironmentEntitlement;
- (bool)hasAllowUnverifiedAccountEntitlement;
- (bool)hasDataContainer;
- (bool)hasDisplaysSystemAcceptPromptEntitlement;
- (bool)hasExplicitCodeOperationURLEntitlement;
- (bool)hasLightweightPCSEntitlement;
- (bool)hasMasqueradingEntitlement;
- (bool)hasNonLegacyShareURLEntitlement;
- (bool)hasOutOfProcessUIEntitlement;
- (bool)hasParticipantPIIEntitlement;
- (bool)hasSystemServiceEntitlement;
- (bool)hasTCCAuthorization;
- (id)initWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3;
- (bool)isForClouddInternalUse;
- (bool)isSandboxed;
- (bool)isSiloedContext;
- (id)languageCode;
- (unsigned long long)mmcsEncryptionSupport;
- (id)orgAdminUserID;
- (id)pcsCache;
- (id)pcsManager;
- (void)performRequest:(id)arg1;
- (id)personaID;
- (id)processName;
- (id)proxies;
- (id)proxyPreparationGroup;
- (id)publicCloudDBURL;
- (id)publicCodeServiceURL;
- (id)publicDatabaseRPCServiceURL;
- (id)publicDeviceServiceURL;
- (id)publicIdentitiesDiskCache;
- (double)publicIdentitiesExpirationTimeout;
- (id)publicMetricsServiceURL;
- (id)publicShareServiceURL;
- (id)regionCode;
- (void)removeClientProxy:(id)arg1;
- (bool)returnPCSMetadata;
- (void)setAPSEnvironmentString:(id)arg1;
- (void)setAccount:(id)arg1;
- (void)setAllowsPowerNapScheduling:(bool)arg1;
- (void)setAppContainerIntersectionMetadata:(id)arg1;
- (void)setApplicationAssetDbDirectory:(id)arg1;
- (void)setApplicationBundleID:(id)arg1;
- (void)setApplicationCachesDirectory:(id)arg1;
- (void)setApplicationContainerCloudKitDirectory:(id)arg1;
- (void)setApplicationContainerPath:(id)arg1;
- (void)setApplicationFileDownloadDirectory:(id)arg1;
- (void)setApplicationFileStagingDirectory:(id)arg1;
- (void)setApplicationFrameworkCachesDirectory:(id)arg1;
- (void)setApplicationMMCSDirectory:(id)arg1;
- (void)setApplicationMetadata:(id)arg1;
- (void)setApplicationPackageStagingDirectory:(id)arg1;
- (void)setApplicationRecordCacheDirectory:(id)arg1;
- (void)setApplicationVersion:(id)arg1;
- (void)setAssociatedApplicationBundleID:(id)arg1;
- (void)setBackgroundPublicIdentityLookupService:(id)arg1;
- (void)setBackgroundZoneGatekeeper:(id)arg1;
- (void)setCachePurger:(id)arg1;
- (void)setCachedEnvironment:(long long)arg1;
- (void)setCanAccessProtectionData:(bool)arg1;
- (void)setCanAccessZoneProtectionData:(bool)arg1;
- (void)setCanSetDeviceIdentifier:(bool)arg1;
- (void)setCaptureResponseHTTPHeaders:(bool)arg1;
- (void)setClientPrefixEntitlement:(id)arg1;
- (void)setClientSDKVersion:(unsigned int)arg1;
- (void)setConfig:(id)arg1;
- (void)setContainerEncryptionServiceName:(id)arg1;
- (void)setContainerScopedUserID:(id)arg1;
- (void)setContextType:(long long)arg1;
- (void)setEntitlementSpecifiedPCSServiceName:(id)arg1;
- (void)setFakeError:(id)arg1 forNextRequestOfClassName:(id)arg2;
- (void)setFakeErrorsByClassName:(id)arg1;
- (void)setFakeResponseOperationLifetimeByClassName:(id)arg1;
- (void)setFakeResponseOperationResult:(id)arg1 forNextRequestOfClassName:(id)arg2 forItemID:(id)arg3 withLifetime:(int)arg4;
- (void)setFakeResponseOperationResultByClassNameByItemID:(id)arg1;
- (void)setFinishedAppProxySetup:(bool)arg1;
- (void)setFinishedProxySetup:(bool)arg1;
- (void)setFlowControlManager:(id)arg1;
- (void)setForegroundPublicIdentityLookupService:(id)arg1;
- (void)setForegroundZoneGatekeeper:(id)arg1;
- (void)setHasAllowAccessDuringBuddyEntitlement:(bool)arg1;
- (void)setHasAllowCustomAccountsEntitlement:(bool)arg1;
- (void)setHasAllowSetEnvironmentEntitlement:(bool)arg1;
- (void)setHasAllowUnverifiedAccountEntitlement:(bool)arg1;
- (void)setHasDataContainer:(bool)arg1;
- (void)setHasDisplaysSystemAcceptPromptEntitlement:(bool)arg1;
- (void)setHasExplicitCodeOperationURLEntitlement:(bool)arg1;
- (void)setHasLightweightPCSEntitlement:(bool)arg1;
- (void)setHasMasqueradingEntitlement:(bool)arg1;
- (void)setHasNonLegacyShareURLEntitlement:(bool)arg1;
- (void)setHasOutOfProcessUIEntitlement:(bool)arg1;
- (void)setHasParticipantPIIEntitlement:(bool)arg1;
- (void)setHasSystemServiceEntitlement:(bool)arg1;
- (void)setHasTCCAuthorization:(bool)arg1;
- (void)setIsForClouddInternalUse:(bool)arg1;
- (void)setMMCS:(id)arg1;
- (void)setOrgAdminUserID:(id)arg1;
- (void)setPcsManager:(id)arg1;
- (void)setProxies:(id)arg1;
- (void)setProxyPreparationGroup:(id)arg1;
- (void)setPublicCloudDBURL:(id)arg1;
- (void)setPublicCodeServiceURL:(id)arg1;
- (void)setPublicDatabaseRPCServiceURL:(id)arg1;
- (void)setPublicDeviceServiceURL:(id)arg1;
- (void)setPublicIdentitiesDiskCache:(id)arg1;
- (void)setPublicMetricsServiceURL:(id)arg1;
- (void)setPublicShareServiceURL:(id)arg1;
- (void)setReturnPCSMetadata:(bool)arg1;
- (void)setSandboxed:(bool)arg1;
- (void)setSetupQueue:(id)arg1;
- (void)setWasInitializedWithProxy:(bool)arg1;
- (bool)setupAssetTransfersWithClientProxy:(id)arg1 error:(id*)arg2;
- (bool)setupMMCSWrapperWithError:(id*)arg1;
- (id)setupQueue;
- (bool)shouldUsePCSEncryption;
- (void)showAssetCache;
- (void)showAssetCacheWithDatabaseScope:(long long)arg1;
- (void)showUserNotification:(void*)arg1 withCompletionBlock:(id /* block */)arg2;
- (id)sourceApplicationBundleID;
- (void)startSetupWithClientProxy:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)tearDownAssetTransfers;
- (bool)useZoneWidePCS;
- (bool)wasInitializedWithProxy;

@end