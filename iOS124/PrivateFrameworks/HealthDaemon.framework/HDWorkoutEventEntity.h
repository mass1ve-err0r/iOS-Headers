//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDWorkoutEventEntity : HDHealthEntity
{
}

+ (id)workoutEventsForOwner:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
+ (_Bool)enumerateEventsForOwner:(long long)arg1 withStatement:(id)arg2 error:(id *)arg3 eventHandler:(CDUnknownBlockType)arg4;
+ (id)statementForEnumeratingEventsForOwnerInDatabase:(id)arg1 error:(id *)arg2;
+ (id)deleteStatementForWorkoutEventsWithDatabase:(id)arg1;
+ (id)workoutEventsWithOwnerID:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (_Bool)insertWorkoutEventsFromWorkout:(id)arg1 ownerID:(id)arg2 database:(id)arg3 error:(id *)arg4;
+ (id)insertPersistableWorkoutEvent:(id)arg1 ownerID:(id)arg2 database:(id)arg3 error:(id *)arg4;
+ (long long)protectionClass;
+ (id)foreignKeys;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (Class)workoutEventClass;
+ (id)databaseTable;
+ (id)ownerEntityReferenceColumn;
+ (Class)ownerEntityClass;

@end

