//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface CKBehaviorOptions : NSObject
{
    _Bool _didReadAutomatedDeviceGroup;
    int _mcToken;
    int _ckToken;
    NSMutableDictionary *_cachedPrefs;
    NSObject<OS_dispatch_queue> *_cachedPrefsQueue;
    NSString *_automatedDeviceGroup;
    NSUserDefaults *_automatedDeviceGroupDefaults;
}

+ (id)sharedOptions;
@property(retain, nonatomic) NSUserDefaults *automatedDeviceGroupDefaults; // @synthesize automatedDeviceGroupDefaults=_automatedDeviceGroupDefaults;
@property(retain, nonatomic) NSString *automatedDeviceGroup; // @synthesize automatedDeviceGroup=_automatedDeviceGroup;
@property _Bool didReadAutomatedDeviceGroup; // @synthesize didReadAutomatedDeviceGroup=_didReadAutomatedDeviceGroup;
@property(nonatomic) int ckToken; // @synthesize ckToken=_ckToken;
@property(nonatomic) int mcToken; // @synthesize mcToken=_mcToken;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cachedPrefsQueue; // @synthesize cachedPrefsQueue=_cachedPrefsQueue;
@property(retain, nonatomic) NSMutableDictionary *cachedPrefs; // @synthesize cachedPrefs=_cachedPrefs;
- (void).cxx_destruct;
- (id)recordNamesForFakingDecryptionFailure;
- (double)minTTRPromptInterval;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (double)shareAcceptorRetrievingDialogMinPeriod;
- (double)shareAcceptorRetrievingDialogDelay;
- (double)maxRecentProxyAge;
- (unsigned long long)recentProxiesToSave;
- (unsigned long long)savedErrorCount;
- (void)setSqlBatchTime:(double)arg1;
- (double)sqlBatchTime;
- (void)setSqlBatchCount:(long long)arg1;
- (long long)sqlBatchCount;
- (_Bool)enableMMCSMetricsWithDefaultValue:(_Bool)arg1;
- (int)backgroundSessionConnectionPoolLimitWithDefaultValue:(int)arg1;
- (id)vettedEmailsTestFormat;
- (double)publicIdentitiesExpirationTimeout;
- (double)maximumWaitAfterFetchRequest;
- (double)maximumQueuedFetchWaitTime;
- (double)maximumThrottleSeconds;
- (int)defaultRetryAfter;
- (_Bool)shouldDecryptRecordsBeforeSave;
- (_Bool)allowExpiredDNSBehavior;
- (unsigned long long)maxBatchSize;
- (double)flowControlRegenerationOverride;
- (long long)flowControlBudgetOverride;
- (double)flowControlRegeneration;
- (long long)flowControlBudget;
- (void)setBuildVersion:(id)arg1;
- (id)buildVersion;
- (void)setProductVersion:(id)arg1;
- (id)productVersion;
- (void)setProductName:(id)arg1;
- (id)productName;
- (_Bool)_buildIsOverridden;
- (double)maxTimeIntervalSinceLastZoneishPCSKeyRoll;
- (void)setContainerIDToForceFatalManateeZoneDecryptionFailure:(id)arg1;
- (id)containerIDToForceFatalManateeZoneDecryptionFailure;
- (void)setUseEnhancedPCSEncryptionContext:(_Bool)arg1;
- (_Bool)useEnhancedPCSEncryptionContext;
- (void)setRollZonePCSIdentities:(_Bool)arg1;
- (_Bool)rollZonePCSIdentities;
- (void)setRollRecordMasterKeysOnUnshare:(_Bool)arg1;
- (_Bool)rollRecordMasterKeysOnUnshare;
- (void)setRollRecordPCSMasterKeys:(_Bool)arg1;
- (_Bool)rollRecordPCSMasterKeys;
- (_Bool)usePreauth;
- (void)setUsePreauth:(_Bool)arg1;
- (_Bool)useStingray;
- (void)setUseStingray:(_Bool)arg1;
- (_Bool)useEncryption;
- (void)setUseEncryption:(_Bool)arg1;
- (_Bool)optimisticPCS;
- (void)setOptimisticPCS:(_Bool)arg1;
- (int)longlivedOperationMaxRetryCount;
- (int)longlivedOperationThrottlingRetryCount;
- (int)PCSRetryCount;
- (double)PCSCacheMinTime;
- (unsigned long long)PCSCacheSize;
- (_Bool)sandboxCloudD;
- (void)setEnableMescal:(_Bool)arg1;
- (_Bool)enableMescal;
- (_Bool)isAppleInternalInstall;
- (double)packageGCPeriod;
- (double)packageGCGracePeriod;
- (unsigned long long)maxPackageUploadsPerBatchWithDefaultValue:(unsigned long long)arg1;
- (unsigned long long)maxPackageDownloadsPerBatchWithDefaultValue:(unsigned long long)arg1;
- (unsigned long long)assetEvictionGracePeriodOnHighWatermarkWithDefaultValue:(unsigned long long)arg1;
- (unsigned long long)assetEvictionGracePeriodWithDefaultValue:(unsigned long long)arg1;
- (_Bool)evictRecentAssets;
- (id)otherAccountsWithDefaultValue:(id)arg1;
- (id)testRunIDHeader;
- (void)setTestRunIDHeader:(id)arg1;
- (void)setPrimaryAccountPasswordOverride:(id)arg1;
- (id)primaryAccountPasswordOverride;
- (void)setPrimaryAccountEmailOverride:(id)arg1;
- (id)primaryAccountEmailOverride;
- (void)setCustomMetricsServiceBaseURL:(id)arg1;
- (id)customMetricsServiceBaseURL;
- (void)setCustomCodeServiceBaseURL:(id)arg1;
- (id)customCodeServiceBaseURL;
- (void)setCustomDeviceServiceBaseURL:(id)arg1;
- (id)customDeviceServiceBaseURL;
- (void)setCustomShareServiceBaseURL:(id)arg1;
- (id)customShareServiceBaseURL;
- (void)setCustomCloudDBBaseURL:(id)arg1;
- (id)customCloudDBBaseURL;
- (void)setSetupBaseURL:(id)arg1;
- (id)setupBaseURL;
- (void)setConfigBaseURL:(id)arg1;
- (id)configBaseURL;
- (id)_urlForKey:(id)arg1 defaultURLString:(id)arg2;
- (int)clientThrottleQueueWidth;
- (void)setSendDebugHeader:(_Bool)arg1;
- (_Bool)pipelineFetchAllChangesRequests;
- (_Bool)logTraffic;
- (void)setLogTraffic:(_Bool)arg1;
- (_Bool)logTrafficToTextFile;
- (void)setLogTrafficToTextFile:(_Bool)arg1;
- (_Bool)sendDebugHeader;
- (void)setModTimeInAssetCacheEviction:(_Bool)arg1;
- (_Bool)useModTimeInAssetCacheEviction;
- (void)setCompressRequests:(_Bool)arg1;
- (_Bool)compressRequests;
- (void)setShouldProfileSQL:(_Bool)arg1;
- (_Bool)shouldProfileSQL;
- (void)setDisableCaching:(_Bool)arg1;
- (_Bool)disableCaching;
- (void)setCKTimeLoggingDetailed:(_Bool)arg1;
- (_Bool)CKTimeLoggingDetailed;
- (void)setCKTimeLogging:(_Bool)arg1;
- (_Bool)CKTimeLogging;
- (void)setCFNetworkLogging:(_Bool)arg1;
- (_Bool)CFNetworkLogging;
- (void)setCKCtlPrompt:(char *)arg1;
- (const char *)CKCtlPrompt;
- (void)setTrafficLogMaximumDataSize:(int)arg1;
- (int)trafficLogQueueWidth;
- (int)trafficLogMaximumDataSize;
- (void)setOperationTimeout:(double)arg1;
- (double)operationTimeout;
- (_Bool)highPriorityURLDelegates;
- (unsigned long long)recordCacheSizeLimit;
- (void)setCachedRecordExpiryTime:(int)arg1;
- (int)cachedRecordExpiryTime;
- (void)_setPref:(id)arg1 forKey:(id)arg2;
- (id)_getArrayOptionForKey:(id)arg1 defaultValue:(id)arg2;
- (id)_getStringOptionForKey:(id)arg1 defaultValue:(id)arg2;
- (id)_getStringOptionLockedForKey:(id)arg1 defaultValue:(id)arg2;
- (double)_getDoubleOptionForKey:(id)arg1 defaultValue:(double)arg2;
- (int)_getIntOptionForKey:(id)arg1 defaultValue:(int)arg2;
- (_Bool)_getBoolOptionForKey:(id)arg1 defaultValue:(_Bool)arg2;
- (id)_behaviorContainerOptionForKey:(id)arg1;
- (id)_behaviorOptionForKey:(id)arg1;
- (void)dealloc;
- (id)_init;
- (void)_startListeningForNotifications;

@end

