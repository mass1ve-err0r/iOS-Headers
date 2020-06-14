//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/ICCloudSyncingObject.h>

#import <NotesShared/ICCloudObject-Protocol.h>

@class ICAttachment, NSData, NSString;

@interface ICMedia : ICCloudSyncingObject <ICCloudObject>
{
}

+ (id)keyPathsForValuesAffectingParentCloudObject;
+ (id)exportableMediaURLForMediaWithIdentifier:(id)arg1 filename:(id)arg2;
+ (id)mediaURLForMediaWithIdentifier:(id)arg1 filename:(id)arg2;
+ (id)exportableContainerDirectoryURLForMediaWithIdentifier:(id)arg1;
+ (id)containerDirectoryURLForMediaWithIdentifier:(id)arg1;
+ (id)exportableMediaDirectoryURL;
+ (id)mediaDirectoryURL;
+ (void)purgeMediaFilesForIdentifiers:(id)arg1;
+ (id)newCloudObjectForRecord:(id)arg1 context:(id)arg2;
+ (id)existingCloudObjectForRecordID:(id)arg1 context:(id)arg2;
+ (id)allMediaInContext:(id)arg1;
+ (id)mediaIdentifiersForAccount:(id)arg1;
+ (id)mediaWithIdentifier:(id)arg1 context:(id)arg2;
+ (void)purgeAllMediaFiles;
+ (void)purgeAllMediaInContext:(id)arg1;
+ (void)purgeMedia:(id)arg1;
+ (void)undeleteMedia:(id)arg1;
+ (void)deleteMedia:(id)arg1;
+ (id)newMediaWithAttachment:(id)arg1 forURL:(id)arg2 context:(id)arg3 error:(id *)arg4;
+ (id)newMediaWithAttachment:(id)arg1 forFileWrapper:(id)arg2 context:(id)arg3 error:(id *)arg4;
+ (id)newMediaWithAttachment:(id)arg1 forData:(id)arg2 filename:(id)arg3 context:(id)arg4 error:(id *)arg5;
+ (id)newMediaWithAttachment:(id)arg1 context:(id)arg2;
+ (id)newMediaWithIdentifier:(id)arg1 context:(id)arg2;
- (id)parentCloudObject;
- (_Bool)shouldFallBackToCheckAllCryptoKeys;
- (void)saveAndClearDecryptedData;
- (id)decryptedData;
@property(retain, nonatomic) NSString *filename; // @dynamic filename;
- (id)parentEncryptableObject;
- (id)encryptedMediaURL;
- (id)ic_loggingValues;
- (void)deleteExportableMedia;
- (id)exportableMediaURLWithUpdatedFileIfNecessary;
- (id)exportableMediaURL;
- (id)mediaArchiveURL;
- (id)mediaTarArchiveURL;
- (id)mediaURL;
- (id)exportableContainerDirectoryURL;
- (id)containerDirectoryURL;
- (_Bool)makeSureExportableMediaDirectoryExists:(id *)arg1;
- (_Bool)makeSureMediaDirectoryExists:(id *)arg1;
- (_Bool)writeDataWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (_Bool)writeDataFromFileWrapper:(id)arg1 error:(id *)arg2;
- (_Bool)writeData:(id)arg1 error:(id *)arg2;
- (id)dataWithoutImageMarkupMetadata:(_Bool)arg1;
- (id)data;
- (void)writeDataFromItemProvider:(id)arg1 checkForMarkupData:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)writeDataFromAsset:(id)arg1 isArchivedDirectory:(_Bool)arg2 error:(id *)arg3;
- (_Bool)writeDataFromFileURL:(id)arg1 error:(id *)arg2;
- (void)updateFlagToExcludeFromCloudBackup;
- (_Bool)isArchivedDirectory;
- (_Bool)hasFile;
- (_Bool)isValid;
@property(retain, nonatomic) ICAttachment *attachment; // @dynamic attachment;
- (void)prepareForDeletion;
- (void)resetUniqueIdentifier;
- (_Bool)supportsDeletionByTTL;
- (id)objectsToBeDeletedBeforeThisObject;
- (void)deleteFromLocalDatabase;
- (_Bool)isInICloudAccount;
- (_Bool)hasAllMandatoryFields;
- (void)fixBrokenReferences;
- (void)objectWasPushedToCloudWithOperation:(id)arg1 serverRecord:(id)arg2;
- (_Bool)needsToBePushedToCloud;
- (id)newlyCreatedRecord;
- (void)mergeDataFromRecord:(id)arg1;
- (id)recordType;
- (id)recordZoneName;

// Remaining properties
@property(retain, nonatomic) NSData *assetCryptoInitializationVector; // @dynamic assetCryptoInitializationVector;
@property(retain, nonatomic) NSData *assetCryptoTag; // @dynamic assetCryptoTag;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

