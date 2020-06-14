//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSPObjectContext, TSUPathSet, TSUTemporaryDirectory;
@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSPDataManager : NSObject
{
    TSPObjectContext *_context;
    NSObject<OS_dispatch_queue> *_datasQueue;
    long long _nextNewIdentifier;
    struct unordered_map<const long long, TSPData *__weak, TSP::ObjectIdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSPData *__weak>>> _identifierToDataMap;
    struct unordered_map<const std::__1::array<unsigned char, 20>, TSPData *__weak, TSP::DigestHash, TSP::DigestEqualTo, std::__1::allocator<std::__1::pair<const std::__1::array<unsigned char, 20>, TSPData *__weak>>> _digestToDataMap;
    NSObject<OS_dispatch_queue> *_temporaryDirectoryQueue;
    TSUTemporaryDirectory *_temporaryDirectory;
    TSUPathSet *_temporaryDirectoryPathSet;
    _Bool _hasExternalReferences;
    NSObject<OS_dispatch_queue> *_externalReferenceRemovalQueue;
    NSObject<OS_dispatch_group> *_externalReferenceRemovalGroup;
}

+ (void)readWithChannelImpl:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (void)readWithChannel:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (void)readWithURL:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (_Bool)isSupportedURL:(id)arg1;
@property(readonly, nonatomic) __weak TSPObjectContext *context; // @synthesize context=_context;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)removeFileAtURL:(id)arg1;
- (id)checkForPersistenceWarningsWithPackageURL:(id)arg1;
- (void)addData:(id)arg1;
- (id)addNewDataForStorage:(id)arg1 digest:(id)arg2 filename:(id)arg3;
- (_Bool)attemptToMaterializeData:(id)arg1 dataURL:(id)arg2 dataURLType:(long long)arg3;
- (_Bool)shouldAttemptToMaterializeData:(id)arg1 expectedLength:(unsigned long long)arg2;
- (id)dataWithStorage:(id)arg1 digest:(id)arg2 filename:(id)arg3 skipDocumentResourcesLookup:(_Bool)arg4 accessorBlock:(CDUnknownBlockType)arg5;
- (void)dataForDigest:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)dataForDocumentResourceInfo:(id)arg1;
- (id)dataForDigest:(id)arg1;
- (id)preferredFilenameForDocumentResourceInfo:(id)arg1;
- (id)dataForDigestImpl:(id)arg1 documentResourceInfo:(id)arg2 skipDocumentResourcesLookup:(_Bool)arg3 expectedLength:(unsigned long long)arg4 accessorBlock:(CDUnknownBlockType)arg5;
- (void)removeExternalReferenceForData:(id)arg1 storage:(id)arg2;
- (void)waitForRemoveExternalReferencesToComplete;
- (void)removeExternalReferences;
- (id)dataFromExternalReferenceURL:(id)arg1 filename:(id)arg2 useFileCoordination:(_Bool)arg3;
- (id)dataWithTemporaryDataStorageURL:(id)arg1 digest:(id)arg2 filename:(id)arg3;
- (id)temporaryDataStorageURLForFilename:(id)arg1;
- (_Bool)linkOrCloneTemporaryURL:(id)arg1 fromURL:(id)arg2 canLink:(_Bool)arg3;
- (int)openTemporaryURL:(id)arg1;
- (id)dataForIdentifierImpl:(long long)arg1;
- (id)dataForIdentifier:(long long)arg1;
- (id)dataOrNilForIdentifier:(long long)arg1;
- (void)enumerateDatasUsingBlock:(CDUnknownBlockType)arg1;
- (void)addDataFromPackage:(id)arg1 packageURL:(id)arg2 dataInfo:(const struct DataInfo *)arg3 packageMetadata:(id)arg4 documentResourceInfo:(id)arg5 areExternalReferencesAllowed:(_Bool)arg6;
- (void)didSaveWithSaveOperationState:(id)arg1;
- (_Bool)prepareTemporaryDataStorageForData:(id)arg1 temporaryDataStorage:(id *)arg2;
- (_Bool)migrateDataToTemporaryStorageFromPackage:(id)arg1;
- (_Bool)prepareSaveWithOldPackage:(id)arg1 saveOperationState:(id)arg2;
- (void)loadFromPackage:(id)arg1 packageURL:(id)arg2 packageMetadata:(id)arg3 areExternalReferencesAllowed:(_Bool)arg4;
- (id)copyData:(id)arg1;
- (id)remoteDataWithURL:(id)arg1 digest:(id)arg2 filename:(id)arg3 canDownload:(_Bool)arg4 downloadPriority:(long long)arg5;
- (id)documentResourceDataForInfo:(id)arg1 withStorage:(id)arg2 filename:(id)arg3;
- (id)dataFromNSData:(id)arg1 filename:(id)arg2;
- (void)findExistingDataForReadChannel:(id)arg1 dataURL:(id)arg2 dataURLType:(long long)arg3 readHandler:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)findExistingDataForReadChannel:(id)arg1 dataURL:(id)arg2 dataURLType:(long long)arg3 temporaryDataStorageURL:(id)arg4 keepTemporaryFileOnSuccess:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (id)dataForExistingData:(id)arg1 digest:(id)arg2 filename:(id)arg3 temporaryDataStorageURL:(id)arg4;
- (void)dataFromReadChannel:(id)arg1 filename:(id)arg2 dataURLOrNil:(id)arg3 canLink:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (id)dataFromReadChannel:(id)arg1 filename:(id)arg2 dataURLOrNil:(id)arg3 canLink:(_Bool)arg4;
- (id)dataFromReadChannel:(id)arg1 filename:(id)arg2;
- (void)coordinateReadingNewFileURL:(id)arg1 byAccessor:(CDUnknownBlockType)arg2;
- (void)dataFromFileURL:(id)arg1 filename:(id)arg2 context:(id)arg3 completionQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)dataFromFileURL:(id)arg1 filename:(id)arg2 useFileCoordination:(_Bool)arg3;
- (id)dataFromURL:(id)arg1 filename:(id)arg2 useFileCoordination:(_Bool)arg3;
- (void)willCreateData;
- (void)didCloseDocument;
- (id)initWithContext:(id)arg1;
- (id)init;

@end

