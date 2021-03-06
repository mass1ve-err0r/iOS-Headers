/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLPhotoLibraryPathManagerDCIM : PLPhotoLibraryPathManagerCore {
    bool  _assetAlbumOrderStructurePathCreated;
    NSString * _changeStoreDatabasePath;
    NSString * _cmmAssetsDirectory;
    NSString * _cplAssetsDirectory;
    NSString * _dcimDirectory;
    PLImportFileManager * _importFileManager;
    NSString * _journalsDirectory;
    unsigned int  _persistedAlbumDataDirectoryExists;
    NSString * _photoDataCachesDirectory;
    NSString * _photoDataDirectory;
    NSString * _photoDataSearchDirectory;
    NSString * _projectsDirectory;
    NSString * _thumbnailsDirectory;
    NSString * _thumbnailsV2Directory;
}

@property (nonatomic, retain) PLImportFileManager *importFileManager;

+ (id)systemLibraryPathManager;

- (void).cxx_destruct;
- (id)addToPath:(id)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (id)assetBaseFilenameForAdjustmentFilePath:(id)arg1;
- (id)convertPhotoLibraryPathType:(unsigned char)arg1;
- (id)createPathsForNewLibraries;
- (id)externalDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (id)getImportFileManager;
- (id)iTunesPhotosLastSyncMetadataFilePath;
- (id)iTunesPhotosSyncCurrentLibraryUUIDPath;
- (id)iTunesPhotosSyncDirectory;
- (id)iTunesPhotosSyncMetadataFilePath;
- (id)iTunesSyncedAssetMetadataThumbnailsDirectory;
- (id)iTunesSyncedAssetSmallThumbnailsDirectory;
- (id)iTunesSyncedAssetsDirectory;
- (id)iTunesSyncedFaceAlbumThumbnailsDirectory;
- (id)iTunesSyncedFaceDataDirectory;
- (id)importFileManager;
- (id)initWithLibraryURL:(id)arg1;
- (id)pathToAssetAlbumOrderStructure;
- (id)pathToAssetsToAlbumsMapping;
- (id)pathsForClientAccess:(id)arg1;
- (id)pathsForExternalWriters;
- (id)pathsForPermissionCheck;
- (id)pathsGroupedByAssetBasePathFromFilePaths:(id)arg1 populateInvalidAdjustmentPaths:(id)arg2;
- (id)persistedAlbumDataDirectoryCreateIfNeeded:(bool)arg1 error:(id*)arg2;
- (id)photoDirectoryWithType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (id)photoMetadataDirectory;
- (id)photoMetadataDirectoryForMediaInMainDirectory:(id)arg1;
- (id)photoMutationsDirectory;
- (id)photosDatabasePath;
- (id)privateCacheDirectoryWithSubType:(unsigned char)arg1;
- (id)privateDirectoryWithSubType:(unsigned char)arg1 leafType:(unsigned char)arg2 additionalPathComponents:(id)arg3;
- (void)setImportFileManager:(id)arg1;
- (id)syncInfoPath;

@end
