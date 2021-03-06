/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKWebsiteDataStore : NSObject <NSSecureCoding, WKObject> {
    struct WeakObjCPtr<id<_WKWebsiteDataStoreDelegate> > { 
        id m_weakReference; 
    }  _delegate;
    struct ObjectStorage<WebKit::WebsiteDataStore> { 
        struct type { 
            unsigned char __lx[216]; 
        } data; 
    }  _websiteDataStore;
}

@property (setter=_setAllowsCellularAccess:, nonatomic) bool _allowsCellularAccess;
@property (setter=_setAllowsTLSFallback:, nonatomic) bool _allowsTLSFallback;
@property (readonly) struct Object { int (**x1)(); id x2; }*_apiObject;
@property (setter=_setBoundInterfaceIdentifier:, nonatomic) NSString *_boundInterfaceIdentifier;
@property (setter=_setCacheStorageDirectory:, nonatomic) NSString *_cacheStorageDirectory;
@property (nonatomic, readonly, copy) _WKWebsiteDataStoreConfiguration *_configuration;
@property (nonatomic) <_WKWebsiteDataStoreDelegate> *_delegate;
@property (nonatomic, readonly) NSURL *_indexedDBDatabaseDirectory;
@property (setter=_setPerOriginStorageQuota:, nonatomic) unsigned long long _perOriginStorageQuota;
@property (setter=_setProxyConfiguration:, nonatomic) NSDictionary *_proxyConfiguration;
@property (setter=_setResourceLoadStatisticsDebugMode:, nonatomic) bool _resourceLoadStatisticsDebugMode;
@property (setter=_setResourceLoadStatisticsEnabled:, nonatomic) bool _resourceLoadStatisticsEnabled;
@property (setter=_setServiceWorkerRegistrationDirectory:, nonatomic) NSString *_serviceWorkerRegistrationDirectory;
@property (setter=_setSourceApplicationBundleIdentifier:, nonatomic, copy) NSString *_sourceApplicationBundleIdentifier;
@property (setter=_setSourceApplicationSecondaryIdentifier:, nonatomic, copy) NSString *_sourceApplicationSecondaryIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WKHTTPCookieStore *httpCookieStore;
@property (getter=isPersistent, nonatomic, readonly) bool persistent;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

+ (id)_allWebsiteDataTypesIncludingPrivate;
+ (void)_allowWebsiteDataRecordsForAllOrigins;
+ (bool)_defaultDataStoreExists;
+ (void)_deleteDefaultDataStoreForTesting;
+ (id)allWebsiteDataTypes;
+ (id)defaultDataStore;
+ (id)nonPersistentDataStore;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_allowsCellularAccess;
- (bool)_allowsTLSFallback;
- (struct Object { int (**x1)(); id x2; }*)_apiObject;
- (id)_boundInterfaceIdentifier;
- (id)_cacheStorageDirectory;
- (void)_clearPrevalentDomain:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_clearResourceLoadStatistics:(id /* block */)arg1;
- (id)_configuration;
- (id)_delegate;
- (void)_fetchDataRecordsOfTypes:(id)arg1 withOptions:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)_getAllStorageAccessEntriesFor:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_getIsPrevalentDomain:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_getResourceLoadStatisticsDataSummary:(id /* block */)arg1;
- (bool)_hasRegisteredServiceWorker;
- (id)_indexedDBDatabaseDirectory;
- (id)_initWithConfiguration:(id)arg1;
- (void)_isRegisteredAsSubresourceUnderFirstParty:(id)arg1 thirdParty:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_logUserInteraction:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)_perOriginStorageQuota;
- (void)_processStatisticsAndDataRecords:(id /* block */)arg1;
- (id)_proxyConfiguration;
- (bool)_resourceLoadStatisticsDebugMode;
- (bool)_resourceLoadStatisticsEnabled;
- (void)_scheduleCookieBlockingUpdate:(id /* block */)arg1;
- (id)_serviceWorkerRegistrationDirectory;
- (void)_setAllowsCellularAccess:(bool)arg1;
- (void)_setAllowsTLSFallback:(bool)arg1;
- (void)_setBoundInterfaceIdentifier:(id)arg1;
- (void)_setCacheStorageDirectory:(id)arg1;
- (void)_setPerOriginStorageQuota:(unsigned long long)arg1;
- (void)_setPrevalentDomain:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_setProxyConfiguration:(id)arg1;
- (void)_setResourceLoadStatisticsDebugMode:(bool)arg1;
- (void)_setResourceLoadStatisticsEnabled:(bool)arg1;
- (void)_setResourceLoadStatisticsTestingCallback:(id /* block */)arg1;
- (void)_setServiceWorkerRegistrationDirectory:(id)arg1;
- (void)_setSourceApplicationBundleIdentifier:(id)arg1;
- (void)_setSourceApplicationSecondaryIdentifier:(id)arg1;
- (void)_setUseITPDatabase:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)_sourceApplicationBundleIdentifier;
- (id)_sourceApplicationSecondaryIdentifier;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchDataRecordsOfTypes:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)httpCookieStore;
- (id)initWithCoder:(id)arg1;
- (bool)isPersistent;
- (void)removeDataOfTypes:(id)arg1 forDataRecords:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)removeDataOfTypes:(id)arg1 modifiedSince:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)set_delegate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI

+ (id)safari_allDataTypes;
+ (void)safari_clearHSTSSuperCookies;
+ (id)safari_dataStoreWithConfiguration:(id)arg1;
+ (id)safari_defaultDataStore;
+ (id)safari_nonPersistentDataStore;
+ (void)safari_setCommonProperties:(id)arg1;

@end
