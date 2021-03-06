/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLFolderJournalEntryPayload : PLGenericAlbumJournalEntryPayload

@property (nonatomic, readonly) NSOrderedSet *childCollectionUUIDs;
@property (nonatomic, readonly) bool isProjectAlbumRootFolder;
@property (nonatomic, readonly) bool isRootFolder;

+ (bool)isValidForPersistenceWithObjectDictionary:(id)arg1;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (id)modelProperties;
+ (id)modelPropertiesDescription;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (void)updateChildrenOrderingInFolder:(id)arg1 usingChildCollectionUUIDs:(id)arg2 includePendingChanges:(bool)arg3;

- (id)childCollectionUUIDs;
- (bool)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3;
- (id)insertAlbumFromDataInManagedObjectContext:(id)arg1;
- (bool)isProjectAlbumRootFolder;
- (bool)isRootFolder;
- (void)updateAlbum:(id)arg1 includePendingChanges:(bool)arg2;
- (void)updateEncodableAttributes:(id)arg1 fromPayloadAttributes:(id)arg2 forPayloadProperty:(id)arg3;
- (void)updatePayloadAttributes:(id)arg1 withDecodedAttributes:(id)arg2 forPayloadProperty:(id)arg3;
- (bool)updatePayloadAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3;

@end
