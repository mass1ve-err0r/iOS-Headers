//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetResourceLoader, AVCMNotificationDispatcher, AVWeakReference;

__attribute__((visibility("hidden")))
@interface AVAssetClientURLRequestHelper : NSObject
{
    AVWeakReference *_weakReferenceToSelf;
    AVWeakReference *_weakReferenceToAsset;
    AVCMNotificationDispatcher *_figNotificationDispatcher;
    void *_URLRequestOriginator;
    CDUnknownBlockType _figAssetProvider;
    AVWeakReference *_weakReferenceToResourceLoader;
}

@property(copy, nonatomic) CDUnknownBlockType figAssetProvider; // @synthesize figAssetProvider=_figAssetProvider;
- (void)_onUnhandledContentKeyRequest:(id)arg1;
- (void)handleURLRequest:(id)arg1;
- (void)_handleRequestForAsset:(id)arg1 contentKeySession:(id)arg2 request:(id)arg3 identifier:(id)arg4;
- (void)_finishLoadingCustomURLProviderRequestWithResponseProperties:(id)arg1 context:(id)arg2;
@property(nonatomic) __weak AVAssetResourceLoader *resourceLoader;
@property(retain, nonatomic) const void *URLRequestOriginator;
@property(readonly, nonatomic) const struct OpaqueFigAsset *figAsset;
- (void)_stopHandlingURLRequestsFromRequestOriginator:(void *)arg1;
- (void)_startHandlingURLRequestsFromRequestOriginator:(void *)arg1;
- (id)URLAsset;
- (void)finalize;
- (void)dealloc;
- (id)initWithAsset:(id)arg1;

@end

