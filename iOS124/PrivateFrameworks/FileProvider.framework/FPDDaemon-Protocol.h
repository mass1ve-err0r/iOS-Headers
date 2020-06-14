//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class FPItemID, FPSandboxingURLWrapper, NSArray, NSFileHandle, NSFileProviderDomain, NSString, NSURL;

@protocol FPDDaemon
- (void)didUpdateAlternateContentsDocumentForDocumentAtURL:(NSURL *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)fetchAlternateContentsURLForDocumentURL:(NSURL *)arg1 completionHandler:(void (^)(NSURL *, NSError *))arg2;
- (void)setAlternateContentsURL:(FPSandboxingURLWrapper *)arg1 onDocumentURL:(NSURL *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)setEnabled:(_Bool)arg1 forDomainIdentifier:(NSString *)arg2 providerIdentifier:(NSString *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)getDomainsForProviderIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)removeAllDomainsForProviderIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)removeDomain:(NSFileProviderDomain *)arg1 forProviderIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)addDomain:(NSFileProviderDomain *)arg1 forProviderIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)reindexAllSearchableItemsForBundleIDs:(NSArray *)arg1 acknowledgementHandler:(void (^)(void))arg2;
- (void)reindexAllSearchableItemsWithAcknowledgementHandler:(void (^)(void))arg1;
- (void)dumpStateTo:(NSFileHandle *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)fetchSupportedServicesForDocumentAtURL:(NSURL *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)updateLastUsedDate:(NSURL *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)trashItemAtURL:(NSURL *)arg1 completionHandler:(void (^)(NSURL *, NSError *))arg2;
- (void)endpointForItemAtURL:(NSURL *)arg1 completionHandler:(void (^)(NSArray *, NSXPCListenerEndpoint *, NSError *))arg2;
- (void)valuesForAttributes:(NSArray *)arg1 forItemAtURL:(NSURL *)arg2 completionHandler:(void (^)(NSDictionary *, NSError *))arg3;
- (void)extendBookmarkForItemID:(FPItemID *)arg1 consumerID:(NSString *)arg2 completionHandler:(void (^)(NSString *, NSError *))arg3;
- (void)fetchIndexPropertiesForItemAtURL:(NSURL *)arg1 completionHandler:(void (^)(FPItem *, NSString *, NSString *, NSError *))arg2;
- (void)itemForURL:(NSURL *)arg1 completionHandler:(void (^)(FPItem *, NSError *))arg2;
- (void)fetchRemoteServiceEndpointCreatingProviderWithIdentifier:(NSString *)arg1 itemURL:(NSURL *)arg2 handler:(void (^)(id <FPDRemoteServiceEndpointCreatingProvider>, NSError *))arg3;
- (void)fetchRemoteFileProviderWithIdentifier:(NSString *)arg1 handler:(void (^)(id <FPDRemoteFileProvider>, NSString *, NSError *))arg2;
- (void)documentURLFromBookmarkableString:(NSString *)arg1 creatingPlaceholderIfMissing:(_Bool)arg2 ignoreAlternateContentsURL:(_Bool)arg3 completionHandler:(void (^)(FPSandboxingURLWrapper *, FPSandboxingURLWrapper *, NSError *))arg4;
- (void)bookmarkableStringFromDocumentURL:(NSURL *)arg1 completionHandler:(void (^)(NSString *, NSError *))arg2;
- (void)extendBookmarkForFileURL:(NSURL *)arg1 toConsumerID:(NSString *)arg2 completionHandler:(void (^)(NSString *, NSError *))arg3;
- (void)providersCompletionHandler:(void (^)(NSError *, NSDictionary *))arg1;
- (void)evictItemAtURL:(NSURL *)arg1 evenIfEnumeratingFP:(_Bool)arg2 andClearACLForConsumer:(NSString *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)startProvidingItemAtURL:(NSURL *)arg1 fromProviderID:(NSString *)arg2 forConsumerID:(NSString *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)extendSandboxForFileURL:(NSURL *)arg1 fromProviderID:(NSString *)arg2 toConsumerID:(NSString *)arg3 completionHandler:(void (^)(FPSandboxingURLWrapper *, NSError *))arg4;
- (void)wakeUpForURL:(NSURL *)arg1 completionHandler:(void (^)(NSError *, id <FPDWakeupTransaction>))arg2;
@end

