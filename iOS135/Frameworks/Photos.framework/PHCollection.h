/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHCollection : PHObject <PXDisplayCollection> {
    NSDate * _creationDate;
    bool  _customSortAscending;
    unsigned int  _customSortKey;
    unsigned long long  _estimatedPhotosCount;
    unsigned long long  _estimatedVideosCount;
    NSString * _localizedSubtitle;
}

@property (nonatomic, readonly) bool canContainAssets;
@property (nonatomic, readonly) bool canContainCollections;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) bool customSortAscending;
@property (nonatomic, readonly) unsigned int customSortKey;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSSortDescriptor *defaultSortDescriptor;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *effectiveCustomSortDescriptors;
@property (nonatomic, readonly, copy) NSString *effectiveCustomSortKey;
@property (nonatomic, readonly) unsigned long long estimatedPhotosCount;
@property (nonatomic, readonly) unsigned long long estimatedVideosCount;
@property (nonatomic, readonly) bool hasLocalizedTitle;
@property (nonatomic, readonly) bool hasLocationInfo;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAlbumContentSort;
@property (nonatomic, readonly) bool isAlbumContentTitleSort;
@property (nonatomic, readonly) bool isUserSmartAlbum;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) NSManagedObjectID *parentFolderID;
@property (nonatomic, readonly, copy) <PHCollectionPresentationHints> *presentationHints;
@property (nonatomic, readonly) bool px_allowsAssetsDrop;
@property (nonatomic, readonly) bool px_allowsImplicitSelectionForProjectOrSharingAction;
@property (nonatomic, readonly) bool px_allowsSpringLoading;
@property (nonatomic, readonly) bool px_canRearrangeContent;
@property (nonatomic, readonly) NSDictionary *px_debugDictionary;
@property (nonatomic, readonly) bool px_isAllPhotosSmartAlbum;
@property (nonatomic, readonly) bool px_isCloudMultipleContributorsEnabled;
@property (nonatomic, readonly) bool px_isFavoriteMemoriesSmartFolder;
@property (nonatomic, readonly) bool px_isFavoritesSmartAlbum;
@property (nonatomic, readonly) bool px_isFolder;
@property (nonatomic, readonly) bool px_isHiddenSmartAlbum;
@property (nonatomic, readonly) bool px_isImportHistoryCollection;
@property (nonatomic, readonly) bool px_isImportSessionCollection;
@property (nonatomic, readonly) bool px_isImportedAlbum;
@property (nonatomic, readonly) bool px_isMacSyncedAlbum;
@property (nonatomic, readonly) bool px_isMacSyncedEventsFolder;
@property (nonatomic, readonly) bool px_isMacSyncedFacesFolder;
@property (nonatomic, readonly) bool px_isMediaTypeSmartAlbum;
@property (nonatomic, readonly) bool px_isMediaTypesFolder;
@property (nonatomic, readonly) bool px_isMemoriesVirtualCollection;
@property (nonatomic, readonly) bool px_isMomentsVirtualCollection;
@property (nonatomic, readonly) bool px_isMyPhotoStreamAlbum;
@property (nonatomic, readonly) bool px_isOwnedSharedAlbum;
@property (nonatomic, readonly) bool px_isPeopleVirtualCollection;
@property (nonatomic, readonly) bool px_isPhotosVirtualCollection;
@property (nonatomic, readonly) bool px_isPlacesSmartAlbum;
@property (nonatomic, readonly) bool px_isProject;
@property (nonatomic, readonly) bool px_isProjectsFolder;
@property (nonatomic, readonly) bool px_isRecentlyAddedSmartAlbum;
@property (nonatomic, readonly) bool px_isRecentlyDeletedSmartAlbum;
@property (nonatomic, readonly) bool px_isRecentlyEditedSmartAlbum;
@property (nonatomic, readonly) bool px_isRecentsSmartAlbum;
@property (nonatomic, readonly) bool px_isRegularAlbum;
@property (nonatomic, readonly) bool px_isRegularFolder;
@property (nonatomic, readonly) bool px_isRootSmartAlbum;
@property (nonatomic, readonly) bool px_isScreenRecordingsSmartAlbum;
@property (nonatomic, readonly) bool px_isSharedActivityVirtualCollection;
@property (nonatomic, readonly) bool px_isSharedAlbum;
@property (nonatomic, readonly) bool px_isSharedAlbumsFolder;
@property (nonatomic, readonly) bool px_isSmartAlbum;
@property (nonatomic, readonly) bool px_isSmartFolder;
@property (nonatomic, readonly) bool px_isStandInAlbum;
@property (nonatomic, readonly) bool px_isTopLevelFolder;
@property (nonatomic, readonly) bool px_isTransientPlacesCollection;
@property (nonatomic, readonly) bool px_isUserCreated;
@property (nonatomic, readonly) bool px_isUserSmartAlbum;
@property (nonatomic, readonly) PHCollectionList *px_rootCollectionList;
@property (readonly) Class superclass;
@property (getter=isTrashed, nonatomic, readonly) bool trashed;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)entityKeyMap;
+ (id)fetchCollectionsInCollectionList:(id)arg1 options:(id)arg2;
+ (id)fetchMomentsForAssetsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchMomentsForFacesWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchMomentsForPersonsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchTopLevelUserCollectionsWithOptions:(id)arg1;
+ (id)fetchType;
+ (id)managedEntityName;
+ (bool)managedObjectSupportsTrashedState;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;

- (void).cxx_destruct;
- (id)_effectiveSortDescriptorsFromCustomSortKey:(id)arg1;
- (unsigned long long)ancestryIndexOfCollectionList:(id)arg1 context:(id)arg2;
- (bool)canContainAssets;
- (bool)canContainCollections;
- (bool)canPerformEditOperation:(long long)arg1;
- (unsigned long long)collectionFixedOrderPriority;
- (bool)collectionHasFixedOrder;
- (id)creationDate;
- (bool)customSortAscending;
- (unsigned int)customSortKey;
- (id)defaultSortDescriptor;
- (id)description;
- (id)effectiveCustomSortDescriptors;
- (id)effectiveCustomSortKey;
- (unsigned long long)estimatedPhotosCount;
- (unsigned long long)estimatedVideosCount;
- (bool)hasLocalizedTitle;
- (bool)hasLocationInfo;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (bool)isAlbumContentSort;
- (bool)isAlbumContentTitleSort;
- (bool)isTrashed;
- (bool)isUserSmartAlbum;
- (id)localizedSubtitle;
- (id)localizedTitle;
- (id)objectReference;
- (id)parentFolderID;
- (id)presentationHints;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (bool)px_allowsAssetsDrop;
- (bool)px_allowsImplicitSelectionForProjectOrSharingAction;
- (bool)px_allowsSpringLoading;
- (bool)px_canRearrangeContent;
- (id)px_debugDictionary;
- (id)px_fetchAncestryIncludingRoot:(bool)arg1;
- (id)px_fetchContainedAssetCollections;
- (bool)px_fetchContainsAnyAssets;
- (bool)px_fetchIsEmpty;
- (bool)px_isAllPhotosSmartAlbum;
- (bool)px_isCloudMultipleContributorsEnabled;
- (bool)px_isFavoriteMemoriesSmartFolder;
- (bool)px_isFavoritesSmartAlbum;
- (bool)px_isFolder;
- (bool)px_isHiddenSmartAlbum;
- (bool)px_isImportHistoryCollection;
- (bool)px_isImportSessionCollection;
- (bool)px_isImportedAlbum;
- (bool)px_isMacSyncedAlbum;
- (bool)px_isMacSyncedEventsFolder;
- (bool)px_isMacSyncedFacesFolder;
- (bool)px_isMediaTypeSmartAlbum;
- (bool)px_isMediaTypesFolder;
- (bool)px_isMemoriesVirtualCollection;
- (bool)px_isMomentsVirtualCollection;
- (bool)px_isMyPhotoStreamAlbum;
- (bool)px_isOwnedSharedAlbum;
- (bool)px_isPeopleVirtualCollection;
- (bool)px_isPhotosVirtualCollection;
- (bool)px_isPlacesSmartAlbum;
- (bool)px_isProject;
- (bool)px_isProjectsFolder;
- (bool)px_isRecentlyAddedSmartAlbum;
- (bool)px_isRecentlyDeletedSmartAlbum;
- (bool)px_isRecentlyEditedSmartAlbum;
- (bool)px_isRecentsSmartAlbum;
- (bool)px_isRegularAlbum;
- (bool)px_isRegularFolder;
- (bool)px_isRootSmartAlbum;
- (bool)px_isScreenRecordingsSmartAlbum;
- (bool)px_isSharedActivityVirtualCollection;
- (bool)px_isSharedAlbum;
- (bool)px_isSharedAlbumsFolder;
- (bool)px_isSmartAlbum;
- (bool)px_isSmartFolder;
- (bool)px_isStandInAlbum;
- (bool)px_isTopLevelFolder;
- (bool)px_isTransientPlacesCollection;
- (bool)px_isUserCreated;
- (bool)px_isUserSmartAlbum;
- (id)px_rootCollectionList;

@end