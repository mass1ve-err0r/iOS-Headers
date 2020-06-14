//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocs/BRSyncedRootURLCache-Protocol.h>

@class NSArray, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRFrameworkSyncedRootURLCache : NSObject <BRSyncedRootURLCache>
{
    int _syncedLocationsChangedNotificationToken;
    NSArray *_syncedRootURLs;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(readonly, nonatomic) NSArray *syncedRootURLs;
- (void)_fetchSyncedRootURLs;
- (void)_accountWillChange;
- (void)registerForSyncedLocationsChangesNotifications;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

