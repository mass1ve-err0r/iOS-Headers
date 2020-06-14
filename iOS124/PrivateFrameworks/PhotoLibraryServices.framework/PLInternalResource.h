//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import <PhotoLibraryServices/PLCloudResource-Protocol.h>
#import <PhotoLibraryServices/PLResource-Protocol.h>

@class CPLScopedIdentifier, NSData, NSDate, NSManagedObjectID, NSString, PLCloudMaster, PLCodec, PLColorSpace, PLInternalResourceCloudAttributes, PLManagedAsset, PLUniformTypeIdentifier;
@protocol PLAssetID, PLCodecIdentity, PLColorSpaceIdentity, PLResourceDataStore, PLResourceDataStoreKey, PLUniformTypeIdentifierIdentity;

@interface PLInternalResource : NSManagedObject <PLResource, PLCloudResource>
{
}

+ (id)insertResourceForAssetObjectID:(id)arg1 resourceIdentity:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)resourceForManagedAsset:(id)arg1 resourceIdentity:(id)arg2 createIfNeeded:(_Bool)arg3 error:(id *)arg4;
+ (id)resourcesForAssetObjectID:(id)arg1 versions:(id)arg2 inManagedObjectContext:(id)arg3 error:(id *)arg4;
+ (int)qualitySortValueBasedOnFullSizeWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 isNativeColorSpace:(_Bool)arg3 forResource:(id)arg4;
+ (id)insertIntoManagedObjectContext:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)_persistedResourcesForManagedAsset:(id)arg1 resourceIdentity:(id)arg2 error:(id *)arg3;
+ (id)nonPersistedResourcesForManagedAsset:(id)arg1;
+ (id)predicateForAvailableResources;
+ (id)predicateForOrginalsToDownload;
+ (id)prunePredicateForCPLResourceTypes:(id)arg1;
+ (id)predicateForMaxFilesize:(long long)arg1;
+ (id)predicateForResourceCreatedAfterDate:(id)arg1;
+ (id)predicateForImageResourcePixelsLessOrEqual:(long long)arg1;
+ (id)prefetchResourcePredicateForCPLResourceType:(unsigned long long)arg1 isAssetResource:(_Bool)arg2 maxRetry:(unsigned long long)arg3 additionalResourcePredicates:(id)arg4;
+ (id)predicateForNonLocalOriginalResources_Unused;
+ (id)predicateForNonLocalFullSizeResources;
+ (id)predicateForNonLocalOriginalResources;
+ (_Bool)_countOfLocallyAvailableCloudResourcesOfType:(unsigned long long)arg1 inManagedObjectContext:(id)arg2 forMediumSized:(_Bool)arg3 localCount:(unsigned long long *)arg4 unavailableCount:(unsigned long long *)arg5 error:(id *)arg6;
+ (_Bool)countOfLocallyAvailableCloudResourcesOfType:(unsigned long long)arg1 inManagedObjectContext:(id)arg2 localCount:(unsigned long long *)arg3 unavailableCount:(unsigned long long *)arg4 error:(id *)arg5;
+ (_Bool)countOfMediumOriginalLocallyAvailableCloudResourcesInManagedObjectContext:(id)arg1 localCount:(unsigned long long *)arg2 unavailableCount:(unsigned long long *)arg3 error:(id *)arg4;
+ (unsigned long long)bytesNeededToDownloadOriginalResourcesInLibrary:(id)arg1;
+ (id)nonLocalResourcesInManagedObjectContext:(id)arg1 forAssetUUIDs:(id)arg2 cplResourceTypes:(id)arg3;
+ (void)resetPrefetchStateForResourcesWithResourceType:(long long)arg1 itemIdentifiers:(id)arg2 inLibrary:(id)arg3;
+ (void)resetCloudResourcesStateForCloudInManagedObjectContext:(id)arg1 hardReset:(_Bool)arg2;
+ (id)insertResourceForMasterObjectID:(id)arg1 withExternalCPLResource:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)resourceForManagedAsset:(id)arg1 sharedStreamsType:(unsigned int)arg2 managedObjectContext:(id)arg3 error:(id *)arg4;
- (void)prepareForDeletion;
- (void)markAsNotLocallyAvailable;
- (void)markAsLocallyAvailableWithFilePath:(id)arg1;
- (id)cplResourceIncludeFile:(_Bool)arg1;
@property(nonatomic) short cloudLocalState;
@property(retain, nonatomic) NSDate *prunedAt;
@property(retain, nonatomic) NSDate *lastOnDemandDownloadDate;
@property(retain, nonatomic) NSDate *lastPrefetchDate;
@property(nonatomic) short prefetchCount;
@property(nonatomic) _Bool isAvailable;
@property(readonly, retain, nonatomic) NSString *utiString;
@property(readonly, nonatomic) long long height;
@property(readonly, nonatomic) long long width;
@property(readonly, nonatomic) _Bool isLocallyAvailable;
@property(readonly, retain, nonatomic) CPLScopedIdentifier *scopedIdentifier;
@property(readonly, retain, nonatomic) NSString *itemIdentifier;
@property(readonly, retain, nonatomic) NSString *filePath;
@property(readonly, nonatomic) unsigned long long fileSize;
@property(readonly, retain, nonatomic) NSString *assetUuid;
@property(readonly, copy) NSString *debugDescription;
- (id)photosCTLJSONDict;
- (id)photosCTLDescription;
- (_Bool)isAdjustedResource;
- (_Bool)isDefaultOrientation;
- (_Bool)isPrimaryUTI;
- (void)setQualitySortValueBasedOnAssetWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (void)setResourceIdentity:(id)arg1 managedObjectContext:(id)arg2;
@property(readonly, nonatomic) long long orientedHeight;
@property(readonly, nonatomic) long long orientedWidth;
@property(readonly, nonatomic) id <PLUniformTypeIdentifierIdentity> uniformTypeIdentifierID;
@property(readonly, nonatomic) id <PLCodecIdentity> codecID;
@property(readonly, nonatomic) id <PLColorSpaceIdentity> colorSpaceID;
@property(readonly, copy, nonatomic) id <PLAssetID> assetID;
- (const void *)keyStruct;
@property(readonly, nonatomic) id <PLResourceDataStoreKey> dataStoreKey;
@property(readonly, nonatomic) id <PLResourceDataStore> dataStore;
@property(copy, nonatomic) NSData *dataStoreKeyData; // @dynamic dataStoreKeyData;
@property(readonly, nonatomic) _Bool isDerivative; // @dynamic isDerivative;
- (_Bool)supportsCloudUpload;
- (_Bool)_colorSpaceIsNativeForDisplay;
- (id)cplFileURL;
- (id)fileURL;
- (void)transitional_reconsiderLocalAvailabilityBasedOnExistingLocationOfCPLResourceAtFilePath:(id)arg1;
- (_Bool)isCPLAssetResource;
- (_Bool)isCPLMasterResource;
@property(nonatomic) unsigned long long cplType; // @dynamic cplType;
- (id)validatedExternalCPLResourceForFileURL:(id)arg1;
- (void)updateResourceForMasterExternalCPLResource:(id)arg1 inManagedObjectContext:(id)arg2;

// Remaining properties
@property(retain, nonatomic) PLManagedAsset *asset; // @dynamic asset;
@property(retain, nonatomic) PLInternalResourceCloudAttributes *cloudAttributes; // @dynamic cloudAttributes;
@property(retain, nonatomic) PLCloudMaster *cloudMaster; // @dynamic cloudMaster;
@property(retain, nonatomic) PLCodec *codec; // @dynamic codec;
@property(retain, nonatomic) PLColorSpace *colorSpace; // @dynamic colorSpace;
@property(nonatomic) long long dataLength; // @dynamic dataLength;
@property(nonatomic) short dataStoreID; // @dynamic dataStoreID;
@property(nonatomic) long long dataStoreSubtype; // @dynamic dataStoreSubtype;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSString *fingerprint; // @dynamic fingerprint;
@property(readonly) unsigned long long hash;
@property(nonatomic) short localAvailability; // @dynamic localAvailability;
@property(nonatomic) short localAvailabilityTarget; // @dynamic localAvailabilityTarget;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@property(nonatomic) unsigned int orientation; // @dynamic orientation;
@property(nonatomic) int qualitySortValue; // @dynamic qualitySortValue;
@property(nonatomic) unsigned int recipeID; // @dynamic recipeID;
@property(nonatomic) short remoteAvailability; // @dynamic remoteAvailability;
@property(nonatomic) short remoteAvailabilityTarget; // @dynamic remoteAvailabilityTarget;
@property(nonatomic) short resourceType; // @dynamic resourceType;
@property(readonly, nonatomic) unsigned long long sourceCplType; // @dynamic sourceCplType;
@property(readonly) Class superclass;
@property(retain, nonatomic) PLUniformTypeIdentifier *uniformTypeIdentifier; // @dynamic uniformTypeIdentifier;
@property(nonatomic) long long unorientedHeight; // @dynamic unorientedHeight;
@property(nonatomic) long long unorientedWidth; // @dynamic unorientedWidth;
@property(nonatomic) short version; // @dynamic version;

@end

