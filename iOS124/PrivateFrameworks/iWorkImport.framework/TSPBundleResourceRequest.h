//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSURLSessionDelegate-Protocol.h>
#import <iWorkImport/TSPDocumentResourceBundleProvider-Protocol.h>
#import <iWorkImport/TSPDocumentResourceFileURLProvider-Protocol.h>
#import <iWorkImport/TSPResourceLocalStrategyProvider-Protocol.h>
#import <iWorkImport/TSUResourceRequest-Protocol.h>

@class NSBundle, NSMutableDictionary, NSProgress, NSSet, NSString, TSPDocumentResourceCache, TSPDocumentResourceRegistry, TSPDocumentResourceRequest;
@protocol OS_dispatch_queue, TSPResourceLocalStrategyProvider;

__attribute__((visibility("hidden")))
@interface TSPBundleResourceRequest : NSObject <NSURLSessionDelegate, TSPDocumentResourceBundleProvider, TSPDocumentResourceFileURLProvider, TSPResourceLocalStrategyProvider, TSUResourceRequest>
{
    NSSet *_tags;
    NSBundle *_bundle;
    TSPDocumentResourceCache *_documentResourceCache;
    TSPDocumentResourceRegistry *_documentResourceRegistry;
    NSSet *_documentResourceInfos;
    id <TSPResourceLocalStrategyProvider> _localStrategyProvider;
    NSProgress *_progress;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_accessQueue_documentResourceLocalURLs;
    TSPDocumentResourceRequest *_accessQueue_documentResourceRequest;
    struct {
        unsigned int hasDocumentResourceWithDataAssetLocalStrategy:1;
        unsigned int isResourcesAvailable:1;
        unsigned int didPerformResourceAccess:1;
    } _accessQueue_flags;
}

- (void).cxx_destruct;
@property(readonly) NSSet *tags;
@property(readonly) unsigned long long estimatedDownloadSize;
- (void)performResourceAccessAsynchronouslyUsingQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)performResourceAccessUsingQueue:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)conditionallyBeginAccessingResourcesWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)localStrategyForDocumentResourceInfo:(id)arg1;
- (id)fileURLForDocumentResourceInfo:(id)arg1;
@property(readonly, nonatomic) NSBundle *bundle;
@property(readonly) NSProgress *progress;
- (id)alternateFileURLForDocumentResourceInfo:(id)arg1;
- (void)accessQueue_conditionallyBeginAccessingResourcesWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSString *description;
- (id)initWithDocumentResourceInfos:(id)arg1 documentResourceCache:(id)arg2 documentResourceRegistry:(id)arg3 bundle:(id)arg4;
- (id)initWithTags:(id)arg1 documentResourceCache:(id)arg2 documentResourceRegistry:(id)arg3 bundle:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

