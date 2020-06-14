//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPReadCoordinatorBase.h>

#import <iWorkImport/TSPDatabaseReaderDelegate-Protocol.h>
#import <iWorkImport/TSPReadCoordinator-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSObject, NSString, NSURL, NSUUID, TSPDatabase, TSPFinalizeHandlerQueue, TSPObjectContext;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSPDatabaseReadCoordinator : TSPReadCoordinatorBase <TSPDatabaseReaderDelegate, TSPReadCoordinator>
{
    TSPObjectContext *_context;
    NSUUID *_baseObjectUUID;
    NSURL *_packageURL;
    TSPFinalizeHandlerQueue *_finalizeHandlerQueue;
    TSPDatabase *_database;
    unsigned long long _databaseVersion;
    NSMapTable *_objects;
    NSObject<OS_dispatch_queue> *_dataQueue;
    NSMapTable *_dataDictionary;
    NSObject<OS_dispatch_queue> *_appRelativeDataQueue;
    NSMutableDictionary *_appRelativeDataDictionary;
}

- (void).cxx_destruct;
- (void)reader:(id)arg1 didUnarchiveObject:(id)arg2;
- (void)reader:(id)arg1 didFindExternalRepeatedReference:(id)arg2 isWeak:(_Bool)arg3 allowUnknownObject:(_Bool)arg4 fromParentObject:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)reader:(id)arg1 didFindExternalReferenceToObjectIdentifier:(long long)arg2 componentIdentifier:(long long)arg3 isWeak:(_Bool)arg4 allowUnknownObject:(_Bool)arg5 fromParentObject:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (id)databaseReader:(id)arg1 wantsDataForAppRelativePath:(id)arg2 filename:(id)arg3;
- (id)databaseReader:(id)arg1 wantsDataForDatabaseObjectIdentifier:(long long)arg2 filename:(id)arg3;
- (id)reader:(id)arg1 wantsDataForIdentifier:(long long)arg2;
- (long long)reader:(id)arg1 wantsObjectIdentifierForUUID:(id)arg2;
- (void)didReferenceExternalObject:(id)arg1 withIdentifier:(long long)arg2;
- (id)externalObjectForIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isReadFinished:(_Bool)arg3;
- (id)unarchivedObjectForIdentifier:(long long)arg1 isReadFinished:(_Bool)arg2;
- (id)context;
@property(readonly, nonatomic) _Bool canRetainObjectReferencedByWeakLazyReference;
@property(readonly, nonatomic) long long sourceType;
@property(readonly, nonatomic) _Bool hasDocumentVersionUUID;
@property(readonly, nonatomic) _Bool isReadingFromDocument;
@property(readonly, nonatomic) NSUUID *baseObjectUUID;
@property(readonly, nonatomic) unsigned char packageIdentifier;
@property(readonly, nonatomic) unsigned long long fileFormatVersion;
- (id)createUpgradedOldAppBundleResourcePath:(id)arg1;
- (id)dataForAppRelativePath:(id)arg1 filename:(id)arg2;
- (id)documentResourceInfoForAppRelativePath:(id)arg1;
- (id)dataForReadChannel:(id)arg1 filename:(id)arg2 linkURLOrNil:(id)arg3;
- (id)dataForLinkURL:(id)arg1 filename:(id)arg2;
- (id)dataForDatabaseObject:(id)arg1 filename:(id)arg2;
- (void)readComponent:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)didUpdateLazyReferenceDelegate:(id)arg1;
- (void)readRootObjectWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)endReading;
- (id)initWithContext:(id)arg1 packageURL:(id)arg2 finalizeHandlerQueue:(id)arg3 error:(id *)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isCrossAppPaste;
@property(readonly, nonatomic) _Bool isCrossDocumentPaste;
@property(readonly) Class superclass;

@end

