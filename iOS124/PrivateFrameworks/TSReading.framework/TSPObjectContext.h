//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSPDocumentResourceDownloader-Protocol.h>
#import <TSReading/TSPFileCoordinatorDelegate-Protocol.h>
#import <TSReading/TSPLazyReferenceDelegate-Protocol.h>
#import <TSReading/TSPObjectDelegate-Protocol.h>
#import <TSReading/TSPPassphraseConsumer-Protocol.h>
#import <TSReading/TSPSupportDirectoryDelegate-Protocol.h>

@class NSData, NSMapTable, NSRecursiveLock, NSString, NSURL, NSUUID, SFUCryptoKey, TSPDataManager, TSPObject, TSPObjectContainer, TSUTemporaryDirectory;
@protocol OS_dispatch_group, OS_dispatch_queue, TSPObjectContextDelegate;

@interface TSPObjectContext : NSObject <TSPFileCoordinatorDelegate, TSPObjectDelegate, TSPLazyReferenceDelegate, TSPSupportDirectoryDelegate, TSPDocumentResourceDownloader, TSPPassphraseConsumer>
{
    long long _lastObjectIdentifier;
    long long _modifyObjectToken;
    int _modifyObjectCount;
    unsigned int _mode;
    SFUCryptoKey *_decryptionKey;
    NSURL *_documentURL;
    NSURL *_supportURL;
    NSMapTable *_objects;
    NSObject<OS_dispatch_queue> *_objectsQueue;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSRecursiveLock *_readLock;
    NSObject<OS_dispatch_queue> *_documentStateQueue;
    NSObject<OS_dispatch_queue> *_loadObserversQueue;
    NSObject<OS_dispatch_queue> *_runLoadObserversQueue;
    NSObject<OS_dispatch_queue> *_documentResourceDataProviderQueue;
    _Bool _isWaitingForEndSave;
    NSObject<OS_dispatch_group> *_pendingEndSaveGroup;
    NSObject<OS_dispatch_group> *_outstandingReadsGroup;
    NSObject<OS_dispatch_queue> *_temporaryDirectoryQueue;
    TSUTemporaryDirectory *_temporaryDirectory;
    struct hash_map<const long long, NSMutableArray *, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, NSMutableArray *>>> _loadObservers;
    _Bool _isDocumentModified;
    _Bool _isSupportModified;
    _Bool _isPasswordProtected;
    _Bool _documentHasCurrentFileFormatVersion;
    NSString *_documentPasswordHint;
    TSPObject *_documentObject;
    id <TSPObjectContextDelegate> _delegate;
    TSPDataManager *_dataManager;
    TSPObjectContainer *_documentObjectContainer;
    TSPObjectContainer *_supportObjectContainer;
    NSData *_passwordVerifier;
    NSUUID *_documentUUID;
    NSUUID *_versionUUID;
    TSPObject *_supportObject;
}

+ (void)waitForPendingEndSaveGroup:(id)arg1;
@property(retain, nonatomic) TSPObject *supportObject; // @synthesize supportObject=_supportObject;
@property(readonly, nonatomic) NSUUID *versionUUID; // @synthesize versionUUID=_versionUUID;
@property(readonly, nonatomic) NSUUID *documentUUID; // @synthesize documentUUID=_documentUUID;
@property(retain, nonatomic) NSData *passwordVerifier; // @synthesize passwordVerifier=_passwordVerifier;
@property(readonly, nonatomic) _Bool documentHasCurrentFileFormatVersion; // @synthesize documentHasCurrentFileFormatVersion=_documentHasCurrentFileFormatVersion;
@property(retain, nonatomic) TSPObjectContainer *supportObjectContainer; // @synthesize supportObjectContainer=_supportObjectContainer;
@property(retain, nonatomic) TSPObjectContainer *documentObjectContainer; // @synthesize documentObjectContainer=_documentObjectContainer;
@property(readonly, nonatomic) TSPDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(nonatomic) __weak id <TSPObjectContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) TSPObject *documentObject; // @synthesize documentObject=_documentObject;
@property(copy, nonatomic) NSString *documentPasswordHint; // @synthesize documentPasswordHint=_documentPasswordHint;
@property(nonatomic) _Bool isPasswordProtected; // @synthesize isPasswordProtected=_isPasswordProtected;
@property(nonatomic) _Bool isSupportModified; // @synthesize isSupportModified=_isSupportModified;
@property(nonatomic) _Bool isDocumentModified; // @synthesize isDocumentModified=_isDocumentModified;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addLoadObserver:(id)arg1 action:(SEL)arg2 forLazyReference:(id)arg3;
- (void)addLoadObserver:(id)arg1 action:(SEL)arg2 forObjectIdentifier:(long long)arg3 objectOrNil:(id)arg4;
- (void)runObjectNotificationsInQueue:(id)arg1;
- (id)addLoadedObjectsAndEnqueueNotifications:(id)arg1;
- (long long)updateModifyObjectToken;
- (long long)incrementLastObjectIdentifier:(long long)arg1;
@property(nonatomic) long long lastObjectIdentifier;
- (long long)newObjectIdentifier;
- (void)didReadDocumentObject:(id)arg1;
- (void)setDocumentObject:(id)arg1;
@property(readonly, nonatomic) _Bool ignoreDocumentResourcesWhileReading;
@property(readonly, nonatomic) _Bool ignoreVersionCheckingWhileReading;
@property(readonly, nonatomic) _Bool ignoreUnknownContentWhileReading;
@property(readonly, nonatomic) _Bool isDocumentSupportTemporary;
@property(readonly, nonatomic) _Bool ignoreDocumentSupport;
- (id)dataOrNilForIdentifier:(long long)arg1;
- (id)supportDirectoryURL;
- (long long)modifyObjectTokenForNewObject;
@property(readonly, nonatomic) TSPObjectContext *context;
- (void)waitForSaveToFinishIfNeeded;
@property(readonly, nonatomic) SFUCryptoKey *decryptionKey;
@property(readonly, nonatomic) _Bool isEstimatedDownloadSizePrecise;
@property(readonly, nonatomic) long long estimatedDownloadSize;
@property(readonly, nonatomic) _Bool needsDownload;
- (_Bool)areExternalReferencesToDataAllowedAtURL:(id)arg1;
@property(readonly, nonatomic) _Bool areNewExternalReferencesToDataAllowed;
- (_Bool)areExternalReferencesSupported;
- (void)resumeLoadingModifiedFlushedComponents;
- (void)suspendLoadingModifiedFlushedComponentsAndWait;
- (void)didMoveSupportToURL:(id)arg1;
- (void)didMoveToURL:(id)arg1;
@property(readonly, nonatomic) NSURL *documentURL;
- (void)endIgnoringCachedObjectEviction;
- (void)beginIgnoringCachedObjectEviction;
- (void)checkforDataWarningsWithPackageURL:(id)arg1;
- (id)temporaryDirectory;
- (void)performReadOperationOnKnownObjects:(CDUnknownBlockType)arg1;
- (id)objectForIdentifier:(long long)arg1;
- (void)endAssertOnModify;
- (void)beginAssertOnModify;
- (void)performReadOperation:(CDUnknownBlockType)arg1;
- (void)endWriteOperation;
- (void)beginWriteOperation;
- (void)close;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)init;
- (id)documentRoot;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSData *keychainGenericItem;
@property(readonly, nonatomic) NSString *passphraseHint;
@property(readonly, nonatomic) NSString *service;
@property(readonly) Class superclass;

@end

