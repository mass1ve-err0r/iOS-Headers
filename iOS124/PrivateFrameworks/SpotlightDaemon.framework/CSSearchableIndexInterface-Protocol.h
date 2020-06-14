//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpotlightDaemon/NSObject-Protocol.h>

@class CSIndexJob, CSSearchableItem, CSUserAction, INInteraction, NSArray, NSData, NSDate, NSNumber, NSString;

@protocol CSSearchableIndexInterface <NSObject>
- (void)indexFromBundle:(NSString *)arg1 protectionClass:(NSString *)arg2 options:(long long)arg3 items:(NSData *)arg4 itemsText:(NSData *)arg5 itemsHTML:(NSData *)arg6 clientState:(NSData *)arg7 clientStateName:(NSString *)arg8 deletes:(NSData *)arg9 completionHandler:(void (^)(NSError *))arg10;
- (void)provideFileURLForBundle:(NSString *)arg1 identifier:(NSString *)arg2 type:(NSString *)arg3 completionHandler:(void (^)(NSURL *, NSError *))arg4;
- (void)provideDataForBundle:(NSString *)arg1 identifier:(NSString *)arg2 type:(NSString *)arg3 completionHandler:(void (^)(NSData *, NSError *))arg4;
- (void)fetchLastClientStateWithProtectionClass:(NSString *)arg1 forBundleID:(NSString *)arg2 clientStateName:(NSString *)arg3 options:(long long)arg4 completionHandler:(void (^)(NSData *, NSError *))arg5;
- (void)changeStateOfSearchableItemsWithUIDs:(NSArray *)arg1 toState:(long long)arg2 protectionClass:(NSString *)arg3 forBundleID:(NSString *)arg4 forUTIType:(NSString *)arg5 options:(long long)arg6;
- (void)deleteAllSearchableItemsWithProtectionClass:(NSString *)arg1 forBundleID:(NSString *)arg2 options:(long long)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)deleteSearchableItemsSinceDate:(NSDate *)arg1 protectionClass:(NSString *)arg2 forBundleID:(NSString *)arg3 options:(long long)arg4 completionHandler:(void (^)(NSError *))arg5;
- (void)deleteSearchableItemsWithDomainIdentifiers:(NSArray *)arg1 protectionClass:(NSString *)arg2 forBundleID:(NSString *)arg3 options:(long long)arg4 completionHandler:(void (^)(NSError *))arg5;
- (void)indexSearchableItems:(NSArray *)arg1 deleteSearchableItemsWithIdentifiers:(NSArray *)arg2 clientState:(NSData *)arg3 clientStateName:(NSString *)arg4 protectionClass:(NSString *)arg5 forBundleID:(NSString *)arg6 options:(long long)arg7 completionHandler:(void (^)(NSError *))arg8;
- (void)indexSearchableItems:(NSArray *)arg1 deleteSearchableItemsWithIdentifiers:(NSArray *)arg2 clientState:(NSData *)arg3 protectionClass:(NSString *)arg4 forBundleID:(NSString *)arg5 options:(long long)arg6 completionHandler:(void (^)(NSError *))arg7;
- (void)willModifySearchableItemsWithIdentifiers:(NSArray *)arg1 protectionClass:(NSString *)arg2 forBundleID:(NSString *)arg3 options:(long long)arg4 completionHandler:(void (^)(NSError *))arg5;

@optional
- (void)fetchAttributes:(NSArray *)arg1 protectionClass:(NSString *)arg2 bundleID:(NSString *)arg3 identifiers:(NSArray *)arg4 completionHandler:(void (^)(id, NSError *))arg5;
- (void)deleteAllInteractionsWithBundleID:(NSString *)arg1 protectionClass:(NSString *)arg2 options:(long long)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)deleteInteractionsWithGroupIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2 protectionClass:(NSString *)arg3 options:(long long)arg4 completionHandler:(void (^)(NSError *))arg5;
- (void)deleteInteractionsWithIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2 protectionClass:(NSString *)arg3 options:(long long)arg4 completionHandler:(void (^)(NSError *))arg5;
- (void)addInteraction:(INInteraction *)arg1 bundleID:(NSString *)arg2 protectionClass:(NSString *)arg3;
- (void)addInteraction:(INInteraction *)arg1 bundleID:(NSString *)arg2 protectionClass:(NSString *)arg3 options:(long long)arg4 completionHandler:(void (^)(NSError *))arg5;
- (void)_issueCommand:(NSString *)arg1 completionHandler:(void (^)(NSData *, NSError *))arg2;
- (void)_forceAppWithBundleID:(NSString *)arg1 toPerformJob:(CSIndexJob *)arg2;
- (void)performDataMigrationWithTimeout:(NSNumber *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)checkInWithProtectionClass:(NSString *)arg1 completionHandler:(void (^)(CSIndexJob *, NSError *))arg2;
- (void)flushUserActivities;
- (void)userPerformedAction:(CSUserAction *)arg1 withItem:(CSSearchableItem *)arg2 protectionClass:(NSString *)arg3;
- (void)userPerformedAction:(CSUserAction *)arg1 withItem:(CSSearchableItem *)arg2 protectionClass:(NSString *)arg3 forBundleID:(NSString *)arg4;
- (void)deleteAllSearchableItemsWithBundleID:(NSString *)arg1 protectionClass:(NSString *)arg2 shouldGC:(_Bool)arg3 completionHandler:(void (^)(NSError *))arg4;
@end

