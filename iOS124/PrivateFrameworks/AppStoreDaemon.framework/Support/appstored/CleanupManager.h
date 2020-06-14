//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CleanupManager : NSObject
{
}

- (void)migrateLegacyUpdateHistory;
- (void)_cleanupUpdates:(_Bool)arg1 removedApps:(id)arg2 updateCount:(long long *)arg3 removeCount:(long long *)arg4;
- (long long)_cleanupUpdates:(_Bool)arg1 removedApps:(id)arg2;
- (void)_cleanupStaleCoordinators;
- (id)_activeJobs;
- (void)_cancelJobIDs:(id)arg1;
- (_Bool)garbageCollectionTimerIsExpired;
- (void)garbageCollectDownloads;
- (long long)cleanupUpdatesFollowingInstall:(id)arg1;
- (long long)cleanupUpdates:(id)arg1;
- (_Bool)cleanupStaleUpdateTimerIsExpired;
- (_Bool)cleanupUpUsageDatabases;
- (_Bool)removeDatabaseAtPath:(id)arg1;
- (_Bool)cleanupLegacyUpdatesDatabase;
- (_Bool)cleanupStaleJobsTimerIsExpired;
- (void)cleanupStaleJobs;
- (void)performCleanup;

@end

