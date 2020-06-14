//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMapTable, NSMutableSet, NSSet, NSString, TSPArchiverManager, TSPComponent, TSPMutableComponentObjectUUIDMap, TSPObject, TSPObjectReferenceMap, TSPReferenceOrderedSet;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore, TSPComponentWriteChannel, TSPComponentWriterDelegate;

__attribute__((visibility("hidden")))
@interface TSPComponentWriter : NSObject
{
    TSPComponent *_component;
    NSString *_locator;
    TSPObject *_rootObject;
    id <TSPComponentWriterDelegate> _delegate;
    long long _mode;
    unsigned char _packageIdentifier;
    TSPObjectReferenceMap *_objectReferenceMap;
    id <TSPComponentWriteChannel> _writeChannel;
    TSPArchiverManager *_archiverManager;
    NSObject<OS_dispatch_semaphore> *_delegateSemaphore;
    TSPReferenceOrderedSet *_archivedObjects;
    NSMapTable *_archivedObjectsDictionary;
    TSPMutableComponentObjectUUIDMap *_componentObjectUUIDMap;
    struct vector<TSP::ObjectStackEntry, std::__1::allocator<TSP::ObjectStackEntry>> _objectStack;
    NSObject<OS_dispatch_group> *_writeGroup;
    NSObject<OS_dispatch_queue> *_writeQueue;
    TSPReferenceOrderedSet *_weakReferences;
    NSHashTable *_lazyReferences;
    NSHashTable *_dataReferences;
    NSMutableSet *_featureInfos;
    TSPReferenceOrderedSet *_analyzedCommandToModelReferences;
    TSPReferenceOrderedSet *_commandToModelReferences;
    TSPReferenceOrderedSet *_newCommandToModelReferences;
    TSPReferenceOrderedSet *_indirectCommandToModelExternalReferences;
    TSPReferenceOrderedSet *_externalReferences;
    unsigned long long _objectTargetType;
    struct {
        unsigned int success:1;
        unsigned int isErrorRecoverable:1;
        unsigned int calculatedObjectTargetType:1;
        unsigned int delegateRespondsToNeedsDocumentRecovery:1;
        unsigned int delegateRespondsToLocatorForClaimingComponent:1;
        unsigned int delegateRespondsToObjectBelongsToLinkedComponent:1;
        unsigned int delegateRespondsToExternalPackageDidWriteObject:1;
        unsigned int delegateRespondsToShouldDelayWritingObject:1;
    } _flags;
}

@property(readonly, nonatomic) NSSet *featureInfos; // @synthesize featureInfos=_featureInfos;
@property(readonly, nonatomic) TSPComponent *component; // @synthesize component=_component;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)analyzeCommandToModelReference:(id)arg1 isAnalyzingExternalComponent:(_Bool)arg2 archiver:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)commandToModelReferencesToWrite;
- (void)addCommandToModelReferences:(id)arg1 parentObject:(id)arg2;
- (void)validateExplicitComponentOwnershipForObject:(id)arg1 archiverOrNil:(id)arg2 parentObject:(id)arg3 hasArchiverAccessLock:(_Bool)arg4;
- (void)validateAmbiguousObjectOwnershipForObject:(id)arg1 explicitComponentRootObject:(id)arg2 parentObject:(id)arg3 claimingComponent:(id)arg4 claimingPackageIdentifier:(unsigned char)arg5 claimingComponentWillBeLinked:(_Bool)arg6;
- (_Bool)validateObjectContextForObject:(id)arg1;
- (_Bool)shouldDelayWritingObject:(id)arg1;
- (_Bool)isObjectExternalBecauseItAlreadyBelongsToAnotherComponent:(id)arg1 parentObject:(id)arg2 claimingComponent:(id *)arg3 claimingPackageIdentifier:(unsigned char *)arg4 claimingComponentWillBeLinked:(_Bool *)arg5;
- (_Bool)isObjectExternalBecauseOfExplicitComponentOwnership:(id)arg1 archiverOrNil:(id)arg2 claimingComponentOrNil:(id)arg3 hasArchiverAccessLock:(_Bool)arg4 explicitComponentRootObject:(id *)arg5 claimingComponent:(id *)arg6 isOwnedByDifferentPackage:(_Bool *)arg7;
- (_Bool)isObjectExternal:(id)arg1 archiverOrNil:(id)arg2 parentObject:(id)arg3 validateAmbiguousObjectOwnership:(_Bool)arg4 hasArchiverAccessLock:(_Bool)arg5 claimingComponent:(id *)arg6 isOwnedByDifferentPackage:(_Bool *)arg7;
- (_Bool)canSkipArchivingStronglyReferencedObject:(id)arg1 fromComponentRootObject:(id)arg2;
- (void)writeArchiver:(id)arg1;
- (void)writeObject:(id)arg1 archiver:(id)arg2 parentObject:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)writeWithArchiverAccessLockForObjects:(id)arg1 parentObject:(id)arg2 isCommandToModelReference:(_Bool)arg3 isAnalyzingExternalComponent:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)acquireArchiverAccessLockAndWriteObjects:(id)arg1 parentObject:(id)arg2 isCommandToModelReference:(_Bool)arg3 isAnalyzingExternalComponent:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)shouldAnalyzeCommandToModelReference:(id)arg1 isAnalyzingExternalComponent:(_Bool)arg2;
- (_Bool)shouldWriteObject:(id)arg1;
- (void)writeWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithComponent:(id)arg1 locator:(id)arg2 rootObject:(id)arg3 delegate:(id)arg4 mode:(long long)arg5 packageIdentifier:(unsigned char)arg6 objectReferenceMapOrNil:(id)arg7 writeChannel:(id)arg8 archiverManager:(id)arg9;

@end

