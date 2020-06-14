//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/_PLManagedAlbumList.h>

#import <PhotoLibraryServices/PLAlbumContainer-Protocol.h>
#import <PhotoLibraryServices/PLDerivedAlbumListOrigin-Protocol.h>
#import <PhotoLibraryServices/PLIndexMappersDataOrigin-Protocol.h>

@class NSMutableOrderedSet, NSNumber, NSObject, NSString;
@protocol PLIndexMappingCache;

@interface PLManagedAlbumList : _PLManagedAlbumList <PLAlbumContainer, PLDerivedAlbumListOrigin, PLIndexMappersDataOrigin>
{
    NSObject<PLIndexMappingCache> *_derivedAlbumLists[5];
    _Bool isRegisteredForChanges;
    _Bool didRegisteredWithUserInterfaceContext;
}

+ (_Bool)restoreAlbumListFromPersistedDataAtPath:(id)arg1 library:(id)arg2;
+ (void)persistAlbumListUUIDs:(id)arg1 type:(short)arg2 allowsOverwrite:(_Bool)arg3;
+ (_Bool)isValidPathForPersistence:(id)arg1;
+ (_Bool)isValidTypeForPersistence:(short)arg1;
+ (void)pushChangesFromAlbumContainer:(id)arg1 toAlbumContainer:(id)arg2;
+ (id)_validAlbumsFromSource:(id)arg1 destination:(id)arg2;
+ (_Bool)_albumOrderMatchesFrom:(id)arg1 inDestination:(id)arg2;
+ (id)allStreamedAlbumsListInManagedObjectContext:(id)arg1;
+ (id)scenesAlbumListInManagedObjectContext:(id)arg1;
+ (id)placesAlbumListInManagedObjectContext:(id)arg1;
+ (id)facesAlbumListInManagedObjectContext:(id)arg1;
+ (id)eventListInManagedObjectContext:(id)arg1;
+ (id)importListInManagedObjectContext:(id)arg1;
+ (id)albumListInManagedObjectContext:(id)arg1;
+ (void)addSingletonObjectsToContext:(id)arg1;
+ (id)_albumListWithType:(short)arg1 inManagedObjectContext:(id)arg2;
+ (id)_typeDescriptionForAlbumListType:(short)arg1;
+ (unsigned long long)priorityForAlbumKind:(int)arg1;
+ (_Bool)albumKindHasFixedOrder:(int)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)allStreamedAlbumsListInPhotoLibrary:(id)arg1;
+ (id)scenesAlbumListInPhotoLibrary:(id)arg1;
+ (id)placesAlbumListInPhotoLibrary:(id)arg1;
+ (id)facesAlbumListInPhotoLibrary:(id)arg1;
+ (id)eventListInPhotoLibrary:(id)arg1;
+ (id)importListInPhotoLibrary:(id)arg1;
+ (id)albumListInPhotoLibrary:(id)arg1;
+ (id)_singletonListWithType:(short)arg1 library:(id)arg2;
+ (void)initialize;
@property(nonatomic) _Bool didRegisteredWithUserInterfaceContext; // @synthesize didRegisteredWithUserInterfaceContext;
@property(nonatomic) _Bool isRegisteredForChanges; // @synthesize isRegisteredForChanges;
- (void)didSave;
- (void)willSave;
- (void)unregisterForChanges;
- (void)registerForChanges;
- (void)enumerateDerivedIndexMappers:(CDUnknownBlockType)arg1;
- (_Bool)hasDerivedIndexMappers;
- (void)enumerateDerivedAlbumLists:(CDUnknownBlockType)arg1;
- (void)unregisterAllDerivedAlbums;
- (void)registerDerivedAlbumList:(struct NSObject *)arg1;
- (void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3;
- (void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2;
- (void)updateAlbumsOrderIfNeeded;
- (_Bool)needsReordering;
- (void)setNeedsReordering;
- (void)insertIntoOrderedAlbumsAtIndexByPriorityForAlbum:(id)arg1;
@property(readonly, copy, nonatomic) CDUnknownBlockType albumsSortingComparator;
- (_Bool)albumHasFixedOrder:(struct NSObject *)arg1;
- (id)containersRelationshipName;
- (_Bool)canEditContainers;
- (_Bool)isEmpty;
@property(readonly, nonatomic) unsigned long long containersCount;
- (id)containers;
@property(readonly, retain, nonatomic) NSString *_typeDescription;
@property(readonly, retain, nonatomic) NSString *_prettyDescription;
@property(readonly, nonatomic) int filter;
@property(readonly, nonatomic) _Bool isFolder;
@property(readonly, nonatomic) _Bool canEditAlbums;
@property(readonly, nonatomic) unsigned long long unreadAlbumsCount;
@property(readonly, nonatomic) _Bool hasAtLeastOneAlbum;
@property(readonly, nonatomic) unsigned long long albumsCount;
- (id)_albumsCountFetchRequest;
@property(readonly, retain, nonatomic) NSMutableOrderedSet *albums;
@property(nonatomic) short albumListType;
- (void)willTurnIntoFault;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSNumber *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSNumber *needsReorderingNumber; // @dynamic needsReorderingNumber;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

