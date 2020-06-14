//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIArrayController.h>

#import <CloudDocsUI/_UIDocumentPickerDirectoryObserver-Protocol.h>

@class NSArray, NSDate, NSMetadataQuery, NSObject, NSOperationQueue, NSOrderedSet, NSPredicate, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface _UIDocumentPickerCloudDirectoryObserver : _UIArrayController <_UIDocumentPickerDirectoryObserver>
{
    NSOrderedSet *_staticItems;
    NSPredicate *_queryPredicate;
    NSURL *_firstURL;
    _Bool _recursive;
    _Bool _afterInitialUpdate;
    NSMetadataQuery *_query;
    NSArray *_scopes;
    NSDate *_lastSnapshotDate;
    NSObject<OS_dispatch_queue> *_queryQueue;
    NSOperationQueue *_queryWorkerQueue;
}

@property(nonatomic) _Bool afterInitialUpdate; // @synthesize afterInitialUpdate=_afterInitialUpdate;
@property(retain, nonatomic) NSOperationQueue *queryWorkerQueue; // @synthesize queryWorkerQueue=_queryWorkerQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queryQueue; // @synthesize queryQueue=_queryQueue;
@property(retain, nonatomic) NSDate *lastSnapshotDate; // @synthesize lastSnapshotDate=_lastSnapshotDate;
@property(retain, nonatomic) NSArray *scopes; // @synthesize scopes=_scopes;
@property(retain, nonatomic) NSMetadataQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)callUpdateHandler:(id)arg1 changeDictionary:(id)arg2;
- (id)isVisiblePredicate;
- (_Bool)objectAttributeModified:(id)arg1 newObject:(id)arg2;
@property(retain, nonatomic) NSOrderedSet *staticItems;
- (void)_updateObservers:(id)arg1;
- (id)_queryResultsWithChangedObjects:(id)arg1 changedResults:(id *)arg2;
- (void)_queryUpdated:(id)arg1;
- (void)_initialGatherFinished:(id)arg1;
@property(retain, nonatomic) NSPredicate *queryPredicate;
- (void)_updateQuery;
- (void)invalidate;
- (void)dealloc;
- (void)assertOnQueryQueue;
- (id)initWithRecursiveScopes:(id)arg1 delegate:(id)arg2;
- (id)initWithScopes:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

