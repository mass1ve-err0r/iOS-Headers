//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "DatabaseChangeset.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableOrderedSet, NSMutableSet, NSOrderedSet, NSSet, NSString;

@interface DownloadChangeset : DatabaseChangeset <NSCopying>
{
    NSMutableArray *_appWakeRequests;
    NSMutableArray *_applicationWorkspaceChanges;
    NSMutableSet *_canceledAppDataRestoreIDs;
    NSMutableSet *_changedDownloadKinds;
    NSDictionary *_changedDownloadProperties;
    NSDictionary *_changedExternalDownloadProperties;
    NSMutableArray *_cookies;
    NSMutableArray *_deletedHTTPCookies;
    long long _downloadChangeTypes;
    NSMutableSet *_finishedDownloadKinds;
    NSMutableOrderedSet *_pipelineAdditions;
    NSMutableOrderedSet *_pipelineRestarts;
    NSMutableOrderedSet *_policyChangedDownloadIDs;
    NSMutableOrderedSet *_removedDownloadIDs;
    NSMutableOrderedSet *_removedPersistentDownloadIDs;
    NSMutableOrderedSet *_restorableDownloadIDs;
    NSString *_restoreReason;
    NSMutableSet *_statusChangedDownloadIDs;
    NSMutableSet *_updatedDownloadIDs;
    NSArray *_HTTPCookies;
}

@property(copy, nonatomic) NSDictionary *changedExternalDownloadProperties; // @synthesize changedExternalDownloadProperties=_changedExternalDownloadProperties;
@property(copy, nonatomic) NSDictionary *changedDownloadProperties; // @synthesize changedDownloadProperties=_changedDownloadProperties;
@property(readonly, copy, nonatomic) NSSet *updatedDownloadIDs; // @synthesize updatedDownloadIDs=_updatedDownloadIDs;
@property(readonly, copy, nonatomic) NSSet *statusChangedDownloadIDs; // @synthesize statusChangedDownloadIDs=_statusChangedDownloadIDs;
@property(copy, nonatomic) NSString *restoreReason; // @synthesize restoreReason=_restoreReason;
@property(readonly, copy, nonatomic) NSOrderedSet *restorableDownloadIDs; // @synthesize restorableDownloadIDs=_restorableDownloadIDs;
@property(readonly, copy, nonatomic) NSOrderedSet *removedPersistentDownloadIDs; // @synthesize removedPersistentDownloadIDs=_removedPersistentDownloadIDs;
@property(readonly, copy, nonatomic) NSOrderedSet *removedDownloadIDs; // @synthesize removedDownloadIDs=_removedDownloadIDs;
@property(readonly, copy, nonatomic) NSOrderedSet *pipelineRestarts; // @synthesize pipelineRestarts=_pipelineRestarts;
@property(readonly, copy, nonatomic) NSOrderedSet *pipelineAdditions; // @synthesize pipelineAdditions=_pipelineAdditions;
@property(readonly, copy, nonatomic) NSOrderedSet *policyChangedDownloadIDs; // @synthesize policyChangedDownloadIDs=_policyChangedDownloadIDs;
@property(readonly, copy, nonatomic) NSArray *HTTPCookies; // @synthesize HTTPCookies=_HTTPCookies;
@property(readonly, copy, nonatomic) NSSet *finishedDownloadKinds; // @synthesize finishedDownloadKinds=_finishedDownloadKinds;
@property(readonly, nonatomic) long long downloadChangeTypes; // @synthesize downloadChangeTypes=_downloadChangeTypes;
@property(readonly, copy, nonatomic) NSArray *deletedHTTPCookies; // @synthesize deletedHTTPCookies=_deletedHTTPCookies;
@property(readonly, copy, nonatomic) NSSet *changedDownloadKinds; // @synthesize changedDownloadKinds=_changedDownloadKinds;
@property(readonly, copy, nonatomic) NSSet *canceledAppDataRestoreIDs; // @synthesize canceledAppDataRestoreIDs=_canceledAppDataRestoreIDs;
- (void).cxx_destruct;
- (id)_policyChangedDownloadIDs;
- (id)_finishedDownloadKinds;
- (id)_deletedHTTPCookies;
- (id)_cookies;
- (id)_canceledAppDataRestoreIDs;
- (id)_applicationWorkspaceChanges;
- (id)_appWakeRequests;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)unionChangeset:(id)arg1;
- (void)restartDownloadsInPipelineWithIDs:(id)arg1;
- (void)removeDownloadFromPipelineWithID:(long long)arg1;
- (void)addUpdatedDownloadID:(long long)arg1;
- (void)addStatusChangedDownloadID:(long long)arg1;
- (void)addRestorableDownloadID:(long long)arg1;
- (void)addRemovedPersistentDownloadID:(long long)arg1;
- (void)addRemovedDownloadID:(long long)arg1;
- (void)addPolicyChangedDownloadID:(long long)arg1;
- (void)addHTTPCookie:(id)arg1;
- (void)addFinishedDownloadKind:(id)arg1;
- (void)addDownloadsToPipelineWithIDs:(id)arg1;
- (void)addDownloadToPipelineWithID:(long long)arg1;
- (void)addDownloadKind:(id)arg1;
- (void)addDownloadChangeTypes:(long long)arg1;
- (void)addDeletedHTTPCookies:(id)arg1;
- (void)addCanceledAppDataRestoreID:(id)arg1;
- (id)init;
- (id)_initDownloadChangeset;

@end

