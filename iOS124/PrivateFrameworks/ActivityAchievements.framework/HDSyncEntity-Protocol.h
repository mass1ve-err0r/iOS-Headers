//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActivityAchievements/NSObject-Protocol.h>

@class HDProfile, HDSQLitePredicate, HDSyncEntityIdentifier, HDSyncSession, NSArray, NSData, NSSet;
@protocol HDSyncCodable, HDSyncStore;

@protocol HDSyncEntity <NSObject>
+ (HDSyncEntityIdentifier *)syncEntityIdentifier;
+ (long long)receiveSyncObjects:(NSArray *)arg1 syncStore:(id <HDSyncStore>)arg2 profile:(HDProfile *)arg3 error:(id *)arg4;
+ (id <HDSyncCodable>)decodeSyncObjectWithData:(NSData *)arg1;
+ (NSSet *)syncEntityDependenciesForSyncProtocolVersion:(int)arg1;
+ (long long)nextSyncAnchorWithSession:(HDSyncSession *)arg1 predicate:(HDSQLitePredicate *)arg2 startSyncAnchor:(long long)arg3 profile:(HDProfile *)arg4 error:(id *)arg5;
+ (_Bool)generateSyncObjectsForSession:(HDSyncSession *)arg1 predicate:(HDSQLitePredicate *)arg2 syncAnchorRange:(struct HDSyncAnchorRange)arg3 maxEncodedBytesPerMessage:(long long)arg4 profile:(HDProfile *)arg5 error:(id *)arg6 handler:(_Bool (^)(NSArray *, long long, _Bool, id *))arg7;

@optional
+ (NSSet *)excludedSyncStoresForSession:(HDSyncSession *)arg1;
+ (_Bool)supportsSyncStore:(id <HDSyncStore>)arg1;
@end

