//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPLazyReferenceDelegate-Protocol.h>
#import <iWorkImport/TSPReaderDelegate-Protocol.h>

@class NSError, NSHashTable, NSMutableArray, NSString, NSUUID, TSPCancellationState;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSPReadCoordinatorBase : NSObject <TSPReaderDelegate, TSPLazyReferenceDelegate>
{
    NSObject<OS_dispatch_queue> *_errorQueue;
    NSError *_error;
    NSObject<OS_dispatch_queue> *_lazyReferenceQueue;
    NSHashTable *_lazyReferences;
    NSHashTable *_lazyReferenceCopies;
    NSMutableArray *_lazyReferenceObserverBlocks;
    NSObject<OS_dispatch_queue> *_externalReferenceQueue;
    struct unordered_map<long long, TSP::ExternalReferenceInfo, TSP::ObjectIdentifierHash, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, TSP::ExternalReferenceInfo>>> _externalReferences;
    struct vector<TSP::RepeatedExternalReferenceCompletionInfo, std::__1::allocator<TSP::RepeatedExternalReferenceCompletionInfo>> _repeatedExternalReferences;
    _Bool _success;
    TSPCancellationState *_cancellationState;
}

@property(retain, nonatomic) TSPCancellationState *cancellationState; // @synthesize cancellationState=_cancellationState;
@property(readonly, nonatomic) _Bool success; // @synthesize success=_success;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)lazyReference:(id)arg1 didCreateCopy:(id)arg2;
- (void)addLoadObserver:(id)arg1 action:(SEL)arg2 forLazyReference:(id)arg3;
- (_Bool)readLazyReference:(id)arg1 object:(id *)arg2 error:(id *)arg3;
- (id)objectForIdentifier:(long long)arg1;
- (void)reader:(id)arg1 didReadLazyReference:(id)arg2;
- (void)reader:(id)arg1 didFindExternalRepeatedReference:(id)arg2 isWeak:(_Bool)arg3 allowUnknownObject:(_Bool)arg4 fromParentObject:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)reader:(id)arg1 didFindExternalReferenceToObjectIdentifier:(long long)arg2 componentIdentifier:(long long)arg3 isWeak:(_Bool)arg4 allowUnknownObject:(_Bool)arg5 fromParentObject:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (struct ExternalReferenceInfo *)externalReferenceInfoForObjectIdentifier:(long long)arg1 componentIdentifier:(long long)arg2;
- (id)reader:(id)arg1 wantsDataForIdentifier:(long long)arg2;
- (long long)reader:(id)arg1 wantsObjectIdentifierForUUID:(id)arg2;
- (id)cancellationStateForReader:(id)arg1;
- (id)lazyReferenceDelegateForReader:(id)arg1;
- (id)objectDelegateForReader:(id)arg1;
- (id)contextForReader:(id)arg1;
@property(readonly, nonatomic) _Bool canRetainObjectReferencedByWeakLazyReference;
@property(readonly, nonatomic) long long sourceType;
@property(readonly, nonatomic) _Bool hasDocumentVersionUUID;
@property(readonly, nonatomic) _Bool isReadingFromDocument;
@property(readonly, nonatomic) NSUUID *baseObjectUUID;
@property(readonly, nonatomic) unsigned char packageIdentifier;
@property(readonly, nonatomic) unsigned long long fileFormatVersion;
- (void)didReferenceExternalObject:(id)arg1 withIdentifier:(long long)arg2;
- (id)externalObjectForIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isReadFinished:(_Bool)arg3;
- (id)unarchivedObjectForIdentifier:(long long)arg1 isReadFinished:(_Bool)arg2;
- (id)context;
- (void)didUpdateLazyReferenceDelegate:(id)arg1;
- (void)setLazyReferencesDelegateToObjectContext;
- (_Bool)resolveExternalReferences;
@property(retain) NSError *error;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isCrossAppPaste;
@property(readonly, nonatomic) _Bool isCrossDocumentPaste;
@property(readonly) Class superclass;

@end

