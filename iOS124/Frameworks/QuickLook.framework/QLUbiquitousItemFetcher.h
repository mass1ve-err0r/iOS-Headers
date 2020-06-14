//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/QLItemFetcher.h>

@class FPSandboxingURLWrapper, NSFileCoordinator, NSMutableArray, NSNumber, NSURL, QLURLHandler;

__attribute__((visibility("hidden")))
@interface QLUbiquitousItemFetcher : QLItemFetcher
{
    FPSandboxingURLWrapper *_sandboxingWrapper;
    NSFileCoordinator *_fileCoordinator;
    NSMutableArray *_updateBlocks;
    id _progressSubscriber;
    NSNumber *_sizeTotalUnitCount;
    QLURLHandler *_zipPackageUrlHandler;
    _Bool _shouldZipPackageIfNeeded;
    _Bool _isAccessingURL;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_deleteTempraryZipPackageFileIfNeeded;
- (id)_createURLForPackageIfNeeded;
- (void)_removeUpdateBlockIfNeeded:(CDUnknownBlockType)arg1;
- (id)newItemProvider;
@property(readonly, nonatomic) NSURL *fileURL;
- (id)fetchedContent;
- (id)shareableItem;
- (id)itemSize;
- (_Bool)isLongFetchOperation;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)cancelFetch;
- (_Bool)canBeCanceled;
- (void)subscribeToPreviewItemProgress;
- (void)fetchContentWithAllowedOutputClasses:(id)arg1 inQueue:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)initWithURL:(id)arg1 shouldZipPackageIfNeeded:(_Bool)arg2;
- (id)initWithZippingPackageIfNeeded:(_Bool)arg1;
- (id)initWithSandboxingURLWrapper:(id)arg1 shouldZipPackageIfNeeded:(_Bool)arg2;

@end

