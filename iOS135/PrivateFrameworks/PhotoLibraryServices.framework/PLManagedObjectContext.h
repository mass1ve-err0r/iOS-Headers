/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLManagedObjectContext : NSManagedObjectContext {
    NSMutableSet * _avalancheUUIDsForUpdate;
    PLChangeHandlingContainer * _changeHandlingContainer;
    int  _changeSource;
    PLDelayedFiledSystemDeletions * _delayedDeletions;
    PLDelayedSaveActions * _delayedSaveActions;
    bool  _hasMetadataChanges;
    NSError * _invalidationReason;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _invalidationStateLock;
    bool  _isBackingALAssetsLibrary;
    bool  _isConnectedToChangeHandling;
    bool  _isInitializingSingletons;
    bool  _isObservingChangesForPTPNotificationDelegate;
    PLMergePolicy * _mergePolicy;
    bool  _mergingChanges;
    bool  _needsBackgroundJobProcessing;
    PLPhotoLibraryPathManager * _pathManager;
    PLPhotoLibrary * _photoLibrary;
    <PLManagedObjectContextPTPNotificationDelegate> * _ptpNotificationDelegate;
    bool  _regenerateVideoThumbnails;
    bool  _savingDuringMerge;
    bool  _syncChangeMarker;
    NSMutableDictionary * _updatedObjectsAttributes;
    NSMutableDictionary * _updatedObjectsRelationships;
    NSMutableDictionary * _uuidsForCloudDeletion;
}

@property (nonatomic) int changeSource;
@property (nonatomic, retain) PLDelayedFiledSystemDeletions *delayedDeletions;
@property (nonatomic, readonly) PLDelayedSaveActions *delayedSaveActions;
@property (nonatomic) bool hasMetadataChanges;
@property (nonatomic) bool isBackingALAssetsLibrary;
@property (nonatomic) bool isInitializingSingletons;
@property (nonatomic, readonly) bool isUserInterfaceContext;
@property (nonatomic, readonly) bool mergingChanges;
@property (nonatomic) PLPhotoLibrary *photoLibrary;
@property (nonatomic) <PLManagedObjectContextPTPNotificationDelegate> *ptpNotificationDelegate;
@property (nonatomic) bool regenerateVideoThumbnails;
@property (nonatomic, readonly) bool savingDuringMerge;

+ (void)__prepareEntityPropertyLookups;
+ (id)__processEntityByName:(id)arg1 obj:(id)arg2;
+ (id)__processSubEntityByName:(id)arg1 entity:(id)arg2 withEntityData:(id)arg3;
+ (id)_attributeNamesByIndexByEntityNames;
+ (unsigned long long)_indexValueForPropertyNames:(id)arg1 entityName:(id)arg2 indexesByPropertyNamesByEntityNames:(id)arg3;
+ (id)_indexesByAttributeNamesByEntityNames;
+ (id)_indexesByRelationshipNamesByEntityNames;
+ (bool)_isAssetLibraryFetchingAlbum:(id)arg1;
+ (id)_propertyNamesForIndexValues:(unsigned long long)arg1 entity:(id)arg2 propertyNamesByIndexByEntityNames:(id)arg3;
+ (id)_relationshipNamesByIndexByEntityNames;
+ (bool)assetsLibraryLoggingEnabled;
+ (id)attributeNamesForIndexValues:(unsigned long long)arg1 entity:(id)arg2;
+ (bool)canMergeRemoteChanges;
+ (id)changeNotificationObjectIDKeys;
+ (id)changeNotificationObjectIDMutationKeys;
+ (id)changeNotificationObjectKeys;
+ (id)changeNotificationObjectMutationKeys;
+ (id)contextForManagedObjectLookupItemCache:(id)arg1 coordinator:(id)arg2;
+ (id)contextForPhotoLibrary:(id)arg1 automaticallyMerges:(bool)arg2 name:(const char *)arg3;
+ (id)contextForRepairingSingletonObjects:(const char *)arg1 libraryURL:(id)arg2 error:(id*)arg3;
+ (void)getPersistentStoreURL:(id*)arg1 options:(id*)arg2 forDatabasePath:(id)arg3;
+ (bool)hasConfiguredPhotoLibrary;
+ (unsigned long long)indexValueForAttributeNames:(id)arg1 entity:(id)arg2;
+ (unsigned long long)indexValueForRelationshipNames:(id)arg1 entity:(id)arg2;
+ (id)managedObjectModel;
+ (id)managedObjectModelURL;
+ (void)recordChangedKeys:(id)arg1 forObjectID:(id)arg2 inAttributesByOID:(id)arg3 relationshipsByOID:(id)arg4;
+ (void)recordChangedProperties:(id)arg1 forObjectID:(id)arg2 inAttributesByOID:(id)arg3 relationshipsByOID:(id)arg4;
+ (id)relationshipNamesForIndexValues:(unsigned long long)arg1 entity:(id)arg2;
+ (void)removePhotosDatabaseWithPathManager:(id)arg1;
+ (id)sanitizedErrorFromError:(id)arg1;
+ (bool)shouldHavePhotoLibrary;

- (void).cxx_destruct;
- (void)_addCloudUUID:(id)arg1 forDeletionType:(long long)arg2;
- (bool)_adjustmentTimestampChangedChangedAttribute:(id)arg1 from:(id)arg2;
- (void)_createDelayedSaveActionsWithTransaction:(id)arg1;
- (void)_destroyDelayedSaveActions;
- (void)_getInsertedIDs:(id)arg1 deletedIDs:(id)arg2 changedIDs:(id)arg3 adjustedIDs:(id)arg4 ofEntityKind:(id)arg5 fromRemoteContextDidSaveObjectIDsNotification:(id)arg6;
- (void)_informPTPDelegateAboutChangesFromRemoteContextSaveNotification:(id)arg1;
- (void)_logFaultForPotentialySlowFetchRequeset:(id)arg1;
- (void)_mergeChangesFromDidSaveDictionary:(id)arg1 usingObjectIDs:(bool)arg2;
- (void)_notifyALAssetsLibraryWithChanges:(id)arg1 usingObjectIDs:(bool)arg2;
- (void)_recordChangedKeys:(id)arg1 forObjectID:(id)arg2;
- (void)_simulateCrashIfNotAssetsd;
- (bool)_tooManyAssetChangesToHandle:(unsigned long long)arg1;
- (void)appendDelayedDeletionsToXPCMessage:(id)arg1;
- (void)breakRetainCycles;
- (int)changeSource;
- (void)connectToChangeHandling;
- (unsigned long long)countForFetchRequest:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)delayedDeletions;
- (id)delayedSaveActions;
- (void)disconnectFromChangeHandling;
- (id)executeFetchRequest:(id)arg1 error:(id*)arg2;
- (id)executeRequest:(id)arg1 error:(id*)arg2;
- (id)existingObjectWithID:(id)arg1 error:(id*)arg2;
- (id)getAndClearRecordedAvalancheUUIDsForUpdate;
- (id)getAndClearRecordedObjectsForCloudDeletion;
- (bool)getAndClearSyncChangeMarker;
- (void)getAndClearUpdatedObjectsAttributes:(id*)arg1 relationships:(id*)arg2;
- (id)globalValueForKey:(id)arg1;
- (bool)hasMetadataChanges;
- (bool)hasPreviouslyMergedDeleteForObject:(id)arg1;
- (id)initWithConcurrencyType:(unsigned long long)arg1 libraryBundle:(id)arg2;
- (id)initWithConcurrencyType:(unsigned long long)arg1 pathManager:(id)arg2 changeHandlingContainer:(id)arg3 coordinator:(id)arg4;
- (void)invalidateWithReason:(id)arg1;
- (bool)isBackingALAssetsLibrary;
- (bool)isDatabaseCreationContext;
- (bool)isInitializingSingletons;
- (bool)isReadOnly;
- (bool)isUserInterfaceContext;
- (bool)isValidForSelector:(SEL)arg1 error:(id*)arg2;
- (id)libraryBundle;
- (bool)mergingChanges;
- (bool)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2;
- (id)pathManager;
- (id)photoLibrary;
- (id)pl_fetchObjectsWithIDs:(id)arg1;
- (id)pl_fetchObjectsWithIDs:(id)arg1 rootEntity:(id)arg2;
- (bool)pl_performWithOptions:(unsigned long long)arg1 andBlock:(id /* block */)arg2;
- (id)ptpNotificationDelegate;
- (void)recordAvalancheUUIDForUpdate:(id)arg1;
- (void)recordChangesFromTriggerModifiedObjectIDs:(id)arg1;
- (void)recordCloudDeletionForObject:(id)arg1;
- (void)recordManagedObjectWillSave:(id)arg1;
- (void)recordNeedsBackgroundJobProcessing;
- (void)recordSyncChangeMarker;
- (bool)regenerateVideoThumbnails;
- (void)registerFilesystemDeletionInfo:(id)arg1;
- (void)resetAllFetchingAlbums;
- (bool)save:(id*)arg1;
- (bool)savingDuringMerge;
- (void)setChangeSource:(int)arg1;
- (void)setDelayedDeletions:(id)arg1;
- (void)setGlobalValue:(id)arg1 forKey:(id)arg2;
- (void)setHasMetadataChanges:(bool)arg1;
- (void)setIsBackingALAssetsLibrary:(bool)arg1;
- (void)setIsInitializingSingletons:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setPhotoLibrary:(id)arg1;
- (void)setPtpNotificationDelegate:(id)arg1;
- (void)setRegenerateVideoThumbnails:(bool)arg1;
- (void)setupLocalChangeNotifications;
- (void)tearDownLocalChangeNotifications;
- (void)updateTransactionAuthor;
- (void)withDispatchGroup:(id)arg1 performBlock:(id /* block */)arg2;

@end