//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDSQLiteEntity.h>

#import <HealthDaemon/HDHealthEntityEncoding-Protocol.h>

@interface HDHealthEntity : HDSQLiteEntity <HDHealthEntityEncoding>
{
}

+ (_Bool)performPostJournalMergeCleanupWithTransaction:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (_Bool)updateProperties:(id)arg1 predicate:(id)arg2 healthDatabase:(id)arg3 error:(id *)arg4 bindingHandler:(CDUnknownBlockType)arg5;
+ (id)insertOrReplaceEntity:(_Bool)arg1 healthDatabase:(id)arg2 properties:(id)arg3 error:(id *)arg4 bindingHandler:(CDUnknownBlockType)arg5;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;
+ (unsigned long long)_transactionOptionsForWriting:(_Bool)arg1;
+ (_Bool)performWriteTransactionWithHealthDatabase:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3 inaccessibilityHandler:(CDUnknownBlockType)arg4;
+ (_Bool)performWriteTransactionWithHealthDatabase:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
+ (_Bool)performHighPriorityReadTransactionWithHealthDatabase:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
+ (_Bool)performReadTransactionWithHealthDatabase:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
+ (_Bool)_isNilDatabase:(id)arg1 error:(id *)arg2;
+ (id)defaultForeignKey;
+ (id)uniquedColumns;
+ (id)createTableSQL;
+ (id)databaseName;
+ (id)protectedDatabaseName;
+ (long long)protectionClass;
+ (id)predicateForSyncWithPredicate:(id)arg1 syncEntityClass:(Class)arg2 session:(id)arg3 syncAnchorRange:(struct HDSyncAnchorRange)arg4;
+ (id)propertyForSyncProvenance;
+ (id)propertyForSyncAnchor;
+ (id)_syncQueryWithDatabase:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 orderingDirections:(id)arg4 limit:(unsigned long long)arg5 anchorProperty:(id)arg6;
+ (id)_syncQueryDescriptorWithPredicate:(id)arg1 orderingProperties:(id)arg2 orderingDirections:(id)arg3 limit:(unsigned long long)arg4 anchorProperty:(id)arg5;
+ (long long)nextSyncAnchorWithStartAnchor:(long long)arg1 predicate:(id)arg2 syncEntityClass:(Class)arg3 session:(id)arg4 orderingProperties:(id)arg5 orderingDirections:(id)arg6 limit:(unsigned long long)arg7 healthDatabase:(id)arg8 error:(id *)arg9;
+ (long long)nextSyncAnchorWithStartAnchor:(long long)arg1 predicate:(id)arg2 session:(id)arg3 healthDatabase:(id)arg4 error:(id *)arg5;
+ (_Bool)enumerateEntitiesForSyncWithProperties:(id)arg1 predicate:(id)arg2 syncEntityClass:(Class)arg3 session:(id)arg4 syncAnchorRange:(struct HDSyncAnchorRange)arg5 orderingProperties:(id)arg6 orderingDirections:(id)arg7 limit:(unsigned long long)arg8 lastSyncAnchor:(long long *)arg9 healthDatabase:(id)arg10 error:(id *)arg11 block:(CDUnknownBlockType)arg12;
+ (_Bool)enumerateEntitiesForSyncWithProperties:(id)arg1 predicate:(id)arg2 session:(id)arg3 syncAnchorRange:(struct HDSyncAnchorRange)arg4 limit:(unsigned long long)arg5 lastSyncAnchor:(long long *)arg6 healthDatabase:(id)arg7 error:(id *)arg8 block:(CDUnknownBlockType)arg9;
+ (id)maxRowIDForPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (id)propertyValueForAnyWithProperty:(id)arg1 predicate:(id)arg2 healthDatabase:(id)arg3 error:(id *)arg4;
+ (id)anyWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (_Bool)deleteEntitiesWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (_Bool)enumerateProperties:(id)arg1 withPredicate:(id)arg2 healthDatabase:(id)arg3 error:(id *)arg4 enumerationHandler:(CDUnknownBlockType)arg5;
+ (long long)countOfObjectsWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (_Bool)performWriteTransactionWithHealthDatabase:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3 inaccessibilityHandler:(CDUnknownBlockType)arg4;
+ (_Bool)performWriteTransactionWithHealthDatabase:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (_Bool)performHighPriorityReadTransactionWithHealthDatabase:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (_Bool)performReadTransactionWithHealthDatabase:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (id)columnNamesForTimeOffset;
+ (id)updateSQLForTimeOffsetWithBindingCount:(unsigned long long *)arg1;
- (_Bool)updateProperties:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3 bindingHandler:(CDUnknownBlockType)arg4;
- (_Bool)setForeignKeyEntity:(id)arg1 forProperty:(id)arg2 transaction:(id)arg3 error:(id *)arg4;
- (id)foreignKeyEntity:(Class)arg1 forProperty:(id)arg2 transaction:(id)arg3 error:(id *)arg4;
- (_Bool)setNumber:(id)arg1 forProperty:(id)arg2 transaction:(id)arg3 error:(id *)arg4;
- (id)numberForProperty:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (_Bool)setString:(id)arg1 forProperty:(id)arg2 transaction:(id)arg3 error:(id *)arg4;
- (id)stringForProperty:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (_Bool)setDate:(id)arg1 forProperty:(id)arg2 transaction:(id)arg3 error:(id *)arg4;
- (id)dateForProperty:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)stringForProperty:(id)arg1 healthDatabase:(id)arg2 error:(out id *)arg3;
- (id)valueForProperty:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
- (_Bool)getValuesForProperties:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3 handler:(CDUnknownBlockType)arg4;

@end

