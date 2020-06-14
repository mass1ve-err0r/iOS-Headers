//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FPFetchThumbnailsOperation, NSMutableDictionary, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface QLServerThread : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_completionBlocksQueue;
    NSMutableDictionary *_pendingRequests;
    NSOperationQueue *_downloadsOperationQueue;
    NSOperationQueue *_uncachedThumbnailRetrievalQueue;
    NSOperationQueue *_downscaledThumbnailGenerationQueue;
    NSObject<OS_dispatch_queue> *_previewThumbnailGeneratorQueue;
    NSMutableDictionary *_queuedDownloadRequests;
    FPFetchThumbnailsOperation *_currentFetchThumbnailsOperation;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_contentTypeOfRequest:(id)arg1;
- (void)_updateRequestInformationBeforeAddingToPendingRequestsIfNeeeded:(id)arg1;
- (void)_updateThumbnailRequestThumbnailVersionWithThirdPartyGeneratorInformationIfNeeded:(id)arg1;
- (_Bool)_canUseAdditionToProvideThumbnail:(id)arg1 forThumbnailRequest:(id)arg2 taggedLogicalURL:(id)arg3;
- (void)removeCachedThumbnailsFromUninstalledFileProvidersWithRemainingFileProviderIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sendResultForThumbnailRequest:(id)arg1 bitmapData:(id)arg2 format:(id)arg3 clientShouldTakeOwnership:(_Bool)arg4 error:(id)arg5;
- (void)failedToCompleteThumbnailRequest:(id)arg1 error:(id)arg2;
- (void)thumbnailRequestWasCancelled:(id)arg1;
- (void)completeThumbnailRequest:(id)arg1 bitmapData:(id)arg2 format:(id)arg3 clientShouldTakeOwnership:(_Bool)arg4;
- (void)completeThumbnailRequest:(id)arg1 thumbnailData:(id)arg2;
- (id)_imageDataForImage:(struct CGImage *)arg1;
- (void)addImageData:(id)arg1 withBitmapFormat:(id)arg2 contentRect:(struct CGRect)arg3 toCacheAndCompleteRequest:(id)arg4;
- (void)findUncachedThumbnailForThumbnailRequest:(id)arg1 downloaded:(_Bool)arg2 taggedLogicalURL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)findThumbnailInAddition:(id)arg1 request:(id)arg2 url:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)generateThumbnailForFileThumbnailRequest:(id)arg1 taggedLogicalURL:(id)arg2 shouldUpdateGenstore:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)findUncachedThumbnailForFileThumbnailRequest:(id)arg1 taggedLogicalURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)findUncachedThumbnailForFileThumbnailRequest:(id)arg1;
- (void)downloadUncachedThumbnailForUbiquitousThumbnailRequest:(id)arg1;
- (void)drainDownloadsQueueIfNeeded;
- (void)_addAllThumbnailsSizesToCacheForRequest:(id)arg1 withImageSource:(struct CGImageSource *)arg2 imageSize:(struct CGSize)arg3 alreadyCachedSize:(struct CGSize)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_saveLargeThumbnailForDocumentAtURL:(id)arg1 toGenstoreWithImage:(struct CGImage *)arg2 automaticallyGenerated:(_Bool)arg3;
- (void)_saveLargeThumbnailToGenstoreWithData:(id)arg1 url:(id)arg2;
- (void)processLargeThumbnailData:(id)arg1 withContentType:(id)arg2 cacheThumbnails:(_Bool)arg3 forRequest:(id)arg4 url:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (struct CGImage *)createImageForImageSource:(struct CGImageSource *)arg1 resizedTo:(struct CGSize)arg2 scale:(double)arg3;
- (void)findUncachedThumbnailForUndownloadedItemAtURL:(id)arg1 request:(id)arg2;
- (void)findUncachedThumbnailForUbiquitousThumbnailRequest:(id)arg1;
- (void)queueThumbnailRequest:(id)arg1 tryCache:(_Bool)arg2 tryAdditionsFirst:(_Bool)arg3;
- (void)thumbnailForRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)perform:(CDUnknownBlockType)arg1 afterDelay:(long long)arg2;
- (void)perform:(CDUnknownBlockType)arg1;
- (id)init;

@end

