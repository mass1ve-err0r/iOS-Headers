//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDSyncAnchorEntity : HDHealthEntity
{
}

+ (long long)protectionClass;
+ (id)uniquedColumns;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)databaseTable;
+ (id)_predicateForSyncEntityIdentifier:(id)arg1 syncStore:(id)arg2;
+ (id)_predicateForSyncStore:(id)arg1;
+ (id)_predicateForSyncEntityIdentifier:(id)arg1;
+ (long long)_syncAnchorForProperty:(id)arg1 entityIdentifier:(id)arg2 store:(id)arg3 profile:(id)arg4 error:(id *)arg5;
+ (_Bool)_setSyncAnchor:(long long)arg1 options:(unsigned long long)arg2 updatePolicy:(long long)arg3 entityIdentifier:(id)arg4 store:(id)arg5 database:(id)arg6 error:(id *)arg7;
+ (_Bool)_setSyncAnchor:(long long)arg1 options:(unsigned long long)arg2 updatePolicy:(long long)arg3 entityIdentifier:(id)arg4 store:(id)arg5 profile:(id)arg6 error:(id *)arg7;
+ (_Bool)enumerateSyncAnchorsForStoreID:(long long)arg1 database:(id)arg2 error:(id *)arg3 handler:(CDUnknownBlockType)arg4;
+ (_Bool)resetSyncStore:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (_Bool)resetReceivedAnchorsForStore:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (_Bool)_getAnchorsForProperty:(id)arg1 anchorMap:(id)arg2 store:(id)arg3 profile:(id)arg4 error:(id *)arg5;
+ (_Bool)getAckedAnchorsWithMap:(id)arg1 store:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)getNextAnchorsWithMap:(id)arg1 store:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)getReceivedAnchorsWithMap:(id)arg1 store:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (long long)receivedAnchorForEntityIdentifier:(id)arg1 store:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)setReceivedAnchor:(long long)arg1 entityIdentifier:(id)arg2 store:(id)arg3 profile:(id)arg4 error:(id *)arg5;
+ (_Bool)setAcknowledgedAnchorsWithMap:(id)arg1 store:(id)arg2 resetNext:(_Bool)arg3 resetInvalid:(_Bool)arg4 profile:(id)arg5 error:(id *)arg6;
+ (_Bool)resetNextSyncAnchor:(long long)arg1 entityIdentifier:(id)arg2 store:(id)arg3 profile:(id)arg4 error:(id *)arg5;
+ (_Bool)setNextSyncAnchor:(long long)arg1 entityIdentifier:(id)arg2 store:(id)arg3 profile:(id)arg4 error:(id *)arg5;
+ (long long)nextSyncAnchorForEntityIdentifier:(id)arg1 store:(id)arg2 profile:(id)arg3 error:(id *)arg4;

@end

