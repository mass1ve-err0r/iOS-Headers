/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@interface TransparencyManagedDataStore : NSObject {
    NSManagedObjectContext * _context;
    long long  _contextRefCount;
    TransparencyManagedDataStoreController * _controller;
    bool  _permanentContext;
}

@property (retain) NSManagedObjectContext *context;
@property long long contextRefCount;
@property TransparencyManagedDataStoreController *controller;
@property bool permanentContext;

+ (id)deserializeLoggableDatas:(id)arg1 error:(id*)arg2;
+ (void)reportCoreDataEventForEntity:(id)arg1 write:(bool)arg2 code:(long long)arg3 underlyingError:(id)arg4;
+ (id)serializeLoggableDatas:(id)arg1;

- (void).cxx_destruct;
- (bool)clearState:(id*)arg1;
- (bool)clearStateForApplication:(id)arg1 error:(id*)arg2;
- (id)context;
- (long long)contextRefCount;
- (id)controller;
- (id)copyStatistics:(id*)arg1;
- (unsigned long long)countOutstandingRequestsForApplication:(id)arg1 error:(id*)arg2;
- (unsigned long long)countOutstandingSMTsForApplication:(id)arg1 error:(id*)arg2;
- (unsigned long long)countOutstandingSTHsForApplication:(id)arg1 error:(id*)arg2;
- (unsigned long long)countTotalRequestsForApplication:(id)arg1 error:(id*)arg2;
- (unsigned long long)countTotalSMTsForApplication:(id)arg1 error:(id*)arg2;
- (unsigned long long)countTotalSTHsForApplication:(id)arg1 error:(id*)arg2;
- (id)createDownloadRecord:(id)arg1;
- (void)createKTRequestID:(id)arg1 request:(id)arg2;
- (id)createRequest;
- (id)createRequestFailure;
- (id)createRequestWithUri:(id)arg1 application:(id)arg2 accountID:(id)arg3 serverData:(id)arg4 queryRequest:(id)arg5 queryResponse:(id)arg6 type:(unsigned long long)arg7 error:(id*)arg8;
- (id)createRequestWithUri:(id)arg1 application:(id)arg2 accountID:(id)arg3 serverData:(id)arg4 syncedData:(id)arg5 queryRequest:(id)arg6 queryResponse:(id)arg7 type:(unsigned long long)arg8 clientId:(id)arg9 error:(id*)arg10;
- (id)createRequestWithUri:(id)arg1 application:(id)arg2 accountID:(id)arg3 serverData:(id)arg4 syncedData:(id)arg5 queryRequest:(id)arg6 queryResponse:(id)arg7 type:(unsigned long long)arg8 error:(id*)arg9;
- (id)createRequestWithUri:(id)arg1 application:(id)arg2 accountID:(id)arg3 serverData:(id)arg4 type:(unsigned long long)arg5 error:(id*)arg6;
- (id)createSignedMutationTimestamp:(id)arg1 mutationMs:(unsigned long long)arg2 receiptTime:(double)arg3;
- (id)createSignedMutationTimestampsFailure;
- (id)createSignedTreeHeadFailure;
- (id)createTreeHead;
- (id)createTreeHead:(id)arg1 application:(id)arg2 logBeginTime:(long long)arg3 logHeadHash:(id)arg4 logType:(long long)arg5 revision:(long long)arg6;
- (void)deleteCompletedRequest:(id)arg1;
- (bool)deleteDownloadRecord:(id)arg1 error:(id*)arg2;
- (bool)deleteDownloadRecordById:(id)arg1 error:(id*)arg2;
- (void)deleteObject:(id)arg1;
- (void)deleteObjectSet:(id)arg1;
- (bool)deleteSMTs:(id)arg1 mutationTimeLessThan:(unsigned long long)arg2 error:(id*)arg3;
- (bool)deleteSTHs:(id)arg1 logBeginMsLessThan:(unsigned long long)arg2 error:(id*)arg3;
- (id)downloadRecords:(id*)arg1;
- (id)fetchCompletedRequests:(id)arg1 olderThan:(id)arg2 error:(id*)arg3;
- (id)fetchDownloadRecord:(id)arg1 error:(id*)arg2;
- (id)fetchDownloadRecordById:(id)arg1 error:(id*)arg2;
- (id)fetchRequestForUUID:(id)arg1 error:(id*)arg2;
- (id)fetchRequestWithUri:(id)arg1 application:(id)arg2 accountID:(id)arg3 loggableDatas:(id)arg4 youngerThan:(id)arg5 error:(id*)arg6;
- (id)fetchRequestsForURI:(id)arg1 error:(id*)arg2;
- (id)fetchTreeHead:(id)arg1 application:(id)arg2 logBeginTime:(long long)arg3 logType:(long long)arg4 revision:(long long)arg5 error:(id*)arg6;
- (id)fetchTreeHeadsWithoutHash:(id)arg1 application:(id)arg2 logBeginTime:(long long)arg3 logType:(long long)arg4 revision:(long long)arg5 error:(id*)arg6;
- (void)garbageCollectRequests:(id)arg1 olderThan:(id)arg2 error:(id*)arg3;
- (void)garbageCollectSTHs:(id)arg1 logBeginMs:(unsigned long long)arg2 olderThan:(id)arg3 error:(id*)arg4;
- (void)gargabeCollectEntity:(id)arg1 predicate:(id)arg2 error:(id*)arg3;
- (bool)hasPendingDownloadForUUID:(id)arg1 error:(id*)arg2;
- (bool)haveTreeHead:(id)arg1 application:(id)arg2 logBeginTime:(long long)arg3 logType:(long long)arg4 revision:(long long)arg5 error:(id*)arg6;
- (id)initWithController:(id)arg1;
- (id)initWithController:(id)arg1 context:(id)arg2;
- (id)latestVerifiedTreeHeadRevision:(id)arg1 logBeginMs:(unsigned long long)arg2 error:(id*)arg3;
- (bool)logMetricsForApplication:(id)arg1 error:(id*)arg2;
- (bool)logRequestMetricsForApplication:(id)arg1 error:(id*)arg2;
- (bool)logSMTMetricsForApplication:(id)arg1 error:(id*)arg2;
- (bool)logSTHMetricsForApplication:(id)arg1 error:(id*)arg2;
- (bool)performAndWaitForDownloadId:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (bool)performAndWaitForRequestId:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (void)performBlock:(id /* block */)arg1;
- (void)performBlockAndWait:(id /* block */)arg1;
- (void)performForPendingSMTs:(id)arg1 uri:(id)arg2 accountId:(id)arg3 error:(id*)arg4 block:(id /* block */)arg5;
- (void)performForPendingSTHs:(id)arg1 olderThan:(id)arg2 error:(id*)arg3 block:(id /* block */)arg4;
- (void)performForRequestsWithPendingResponses:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (void)performForRequestsWithPendingSMTs:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (void)performForSMTsWithUnverifiedSignature:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (void)performForSTHsWithUnverifiedSignature:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (void)performOnBatchesOfEntity:(id)arg1 predicate:(id)arg2 enforceMax:(bool)arg3 error:(id*)arg4 block:(id /* block */)arg5;
- (void)performOnRequestsForPredicate:(id)arg1 enforceMax:(bool)arg2 error:(id*)arg3 block:(id /* block */)arg4;
- (bool)permanentContext;
- (bool)persistAndRefaultObject:(id)arg1 error:(id*)arg2;
- (bool)persistAndRefaultObjects:(id)arg1 error:(id*)arg2;
- (bool)persistWithError:(id*)arg1;
- (bool)populateExistingRequestsToLookupTable:(id*)arg1;
- (bool)populateMissingLogHeadHashes:(id*)arg1;
- (void)refaultObject:(id)arg1;
- (void)releaseContext;
- (unsigned long long)requestCount:(id*)arg1;
- (unsigned long long)requestFailureCount:(id*)arg1;
- (id)requestFailures:(id*)arg1;
- (id)requestIds:(id*)arg1;
- (id)requests:(id*)arg1;
- (bool)resetRequestsToPending:(id)arg1 error:(id*)arg2;
- (id)retainContext;
- (void)setContext:(id)arg1;
- (void)setContextRefCount:(long long)arg1;
- (void)setController:(id)arg1;
- (void)setPermanentContext:(bool)arg1;
- (bool)setResponse:(id)arg1 downloadId:(id)arg2 error:(id*)arg3;
- (unsigned long long)signedMutationTimestampCount:(id*)arg1;
- (id)signedMutationTimestamps:(id*)arg1;
- (unsigned long long)signedMutationTimestampsFailureCount:(id*)arg1;
- (id)signedMutationTimestampsFailures:(id*)arg1;
- (unsigned long long)signedTreeHeadFailureCount:(id*)arg1;
- (id)signedTreeHeadFailures:(id*)arg1;
- (unsigned long long)treeHeadCount:(id*)arg1;
- (id)treeHeads:(id*)arg1;
- (id)treeHeadsForApplication:(id)arg1 error:(id*)arg2;
- (id)unverifiedRevisions:(id)arg1 logBeginMs:(unsigned long long)arg2 error:(id*)arg3;

@end