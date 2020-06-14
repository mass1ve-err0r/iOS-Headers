//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreDaemon/NSObject-Protocol.h>

@class NSArray;

@protocol ASDSoftwareUpdateProtocol <NSObject>
- (void)showApplicationUpdatesBulletin;
- (void)showApplicationBadgeForPendingUpdates;
- (void)removeUpdateBulletins;
- (void)hideApplicationBadgeForPendingUpdates;
- (void)updateAllWithOrder:(NSArray *)arg1 completionBlock:(void (^)(_Bool, NSArray *, NSError *))arg2;
- (void)updateAllWithJobResults:(void (^)(_Bool, NSArray *, NSError *))arg1;
- (void)reloadFromServerInBackgroundWithCompletionBlock:(void (^)(NSArray *, NSError *))arg1;
- (void)reloadManagedUpdatesWithCompletionBlock:(void (^)(NSArray *, NSError *))arg1;
- (void)reloadFromServerWithCompletionBlock:(void (^)(NSArray *, NSError *))arg1;
- (void)refreshUpdatesWithCompletionBlock:(NSArray *)arg1 completionBlock:(void (^)(_Bool, NSError *))arg2;
- (void)refreshUpdateCountWithCompletionBlock:(void (^)(long long, NSError *))arg1;
- (void)migrateUpdatesStoreWithCompletionBlock:(void (^)(_Bool, NSError *))arg1;
- (void)getManagedUpdatesWithCompletionBlock:(void (^)(NSArray *, NSError *))arg1;
- (void)getUpdatesWithCompletionBlock:(void (^)(NSArray *, NSError *))arg1;
- (void)getUpdatesMetricsWithCompletionBlock:(void (^)(ASDSoftwareUpdateMetrics *, NSError *))arg1;
- (void)getUpdatesIncludingMetricsWithCompletionBlock:(void (^)(NSArray *, NSError *))arg1;
- (void)clearExpiredUpdateHistoryWithCompletionBlock:(void (^)(_Bool, NSError *))arg1;
@end

