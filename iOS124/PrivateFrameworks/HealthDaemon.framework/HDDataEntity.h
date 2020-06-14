//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

#import <HealthDaemon/HDSQLiteEntity-Protocol.h>

@class NSString;

@interface HDDataEntity : HDHealthEntity <HDSQLiteEntity>
{
}

+ (id)columnNamesForTimeOffset;
+ (long long)countOfObjectsWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id *)arg3;
+ (id)anyInDatabase:(id)arg1 predicate:(id)arg2 error:(id *)arg3;
+ (_Bool)addCodableObject:(id)arg1 toCollection:(id)arg2;
+ (id)codableObjectsFromObjectCollection:(id)arg1;
+ (_Bool)enumerateAssociatedObjectsForIdentifier:(long long)arg1 inDatabase:(id)arg2 error:(id *)arg3 associatedObjectHandler:(CDUnknownBlockType)arg4;
+ (id)deleteStatementsForRelatedEntitiesInDatabase:(id)arg1;
+ (_Bool)acceptsObject:(id)arg1;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;
+ (CDUnknownBlockType)objectInsertionFilterForProfile:(id)arg1;
+ (_Bool)participatesInInsertion;
+ (_Bool)isBackedByTable;
+ (long long)preferredEntityType;
+ (id)mergeDataObject:(id)arg1 provenance:(id)arg2 profile:(id)arg3 database:(id)arg4 error:(id *)arg5 insertHandler:(CDUnknownBlockType)arg6;
+ (_Bool)supportsObjectMerging;
+ (struct _HDDeleteObjectDataDefn)_deleteInfoForObjectWithUUID:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (_Bool)_removeObjectWithPersistentID:(long long)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)_insertBaseDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 error:(id *)arg4;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id *)arg5;
+ (id)_insertDataObject:(id)arg1 withProvenanceID:(id)arg2 inDatabase:(id)arg3 error:(id *)arg4;
+ (id)columnNameForSortIdentifier:(id)arg1;
+ (_Bool)requiresSampleTypePredicate;
+ (id)predicateMatchingPreferredEntityTypeIfRequiredWithPredicate:(id)arg1;
+ (Class)_deletedEntityClass;
+ (Class)baseDataEntityClass;
+ (id)defaultForeignKey;
+ (id)foreignKeys;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)databaseTable;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (id)disambiguatedSQLForProperty:(id)arg1;
+ (id)joinClausesForProperty:(id)arg1;
+ (_Bool)generateSyncObjectsForSession:(id)arg1 predicate:(id)arg2 syncAnchorRange:(struct HDSyncAnchorRange)arg3 maxEncodedBytesPerMessage:(long long)arg4 profile:(id)arg5 error:(id *)arg6 handler:(CDUnknownBlockType)arg7;
+ (id)_objectWithPredicate:(id)arg1 encodingOptions:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)objectWithID:(id)arg1 encodingOptions:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)objectWithUUID:(id)arg1 encodingOptions:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)predicateForObjectsFromLocalSourceWithBundleIdentifier:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)predicateForObjectsFromAppleWatchSources:(_Bool)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)sourceIDForObjectID:(id)arg1 type:(long long)arg2 profile:(id)arg3 errorOut:(id *)arg4;
+ (id)sourceIDsForObjectsOfType:(long long)arg1 profile:(id)arg2 predicate:(id)arg3 error:(id *)arg4;
+ (id)entityEnumeratorWithProfile:(id)arg1;
+ (id)dataEntityForObject:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (void)deleteDataObjects:(id)arg1 restrictedSourceEntities:(id)arg2 failIfNotFound:(_Bool)arg3 profile:(id)arg4 recursiveDeleteAuthorizationBlock:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;
+ (id)_sourceBundleIdentifierForSourceEntities:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (_Bool)journalObjects:(id)arg1 insertionContext:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (void)insertDataObjects:(id)arg1 insertionContext:(id)arg2 profile:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (_Bool)_validateObjectsToInsert:(id)arg1 insertionContext:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)_insertDataObject:(id)arg1 insertionContext:(id)arg2 provenanceEntityID:(long long)arg3 profile:(id)arg4 database:(id)arg5 insertedEntityID:(id *)arg6 error:(id *)arg7;
+ (long long)shouldInsertObject:(id)arg1 sourceID:(id)arg2 profile:(id)arg3 objectToReplace:(id *)arg4 objectID:(id *)arg5 error:(id *)arg6;
+ (_Bool)_shouldReplaceExistingObject:(id)arg1 withObject:(id)arg2;
+ (id)_primitiveInsertDataObject:(id)arg1 insertionContext:(id)arg2 entityClass:(Class)arg3 provenanceEntityID:(long long)arg4 profile:(id)arg5 database:(id)arg6 error:(id *)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

