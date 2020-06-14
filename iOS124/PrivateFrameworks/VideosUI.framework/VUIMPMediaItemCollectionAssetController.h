//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/VUIMediaEntityAssetController-Protocol.h>
#import <VideosUI/VUIMediaEntityAssetControllerDelegate-Protocol.h>

@class MPMediaItemCollection, NSArray, NSString, VUIMediaEntityAssetControllerState, VUIMediaEntityType;
@protocol OS_dispatch_queue, VUIMediaEntityAssetControllerDelegate, VUIMediaEntityIdentifier;

__attribute__((visibility("hidden")))
@interface VUIMPMediaItemCollectionAssetController : NSObject <VUIMediaEntityAssetControllerDelegate, VUIMediaEntityAssetController>
{
    _Bool _supportsStartingDownload;
    NSObject<OS_dispatch_queue> *_completionDispatchQueue;
    id <VUIMediaEntityAssetControllerDelegate> _delegate;
    NSObject<VUIMediaEntityIdentifier> *_mediaEntityIdentifier;
    VUIMediaEntityAssetControllerState *_state;
    MPMediaItemCollection *_mediaItemCollection;
    NSObject<OS_dispatch_queue> *_serialProcessingDispatchQueue;
    NSArray *_assetControllers;
    unsigned long long _fullyDownloadedAssetBytes;
}

+ (id)_downloadingAssetControllersWithAssetControllers:(id)arg1;
+ (id)_stateFromDownloadingAssetControllers:(id)arg1 fullyDownloadedAssetBytes:(unsigned long long)arg2;
@property(nonatomic) unsigned long long fullyDownloadedAssetBytes; // @synthesize fullyDownloadedAssetBytes=_fullyDownloadedAssetBytes;
@property(retain, nonatomic) NSArray *assetControllers; // @synthesize assetControllers=_assetControllers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue; // @synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue;
@property(retain, nonatomic) MPMediaItemCollection *mediaItemCollection; // @synthesize mediaItemCollection=_mediaItemCollection;
@property(copy, nonatomic) VUIMediaEntityAssetControllerState *state; // @synthesize state=_state;
@property(copy, nonatomic) NSObject<VUIMediaEntityIdentifier> *mediaEntityIdentifier; // @synthesize mediaEntityIdentifier=_mediaEntityIdentifier;
@property(readonly, nonatomic) _Bool supportsStartingDownload; // @synthesize supportsStartingDownload=_supportsStartingDownload;
- (void).cxx_destruct;
- (void)_notifyDelegateStateDidChange:(id)arg1;
- (_Bool)_allAssetsDownloaded;
- (void)_enqueueCompletionQueueBlock:(CDUnknownBlockType)arg1;
- (void)_enqueueAsyncProcessingQueueStrongSelfBlock:(CDUnknownBlockType)arg1;
- (void)_onProcessingQueue_setState:(id)arg1 andNotifyDelegate:(_Bool)arg2;
- (void)_onProcessingQueue_updateStateAndNotifyDelegate:(_Bool)arg1;
- (void)_onProcessingQueue_cancelAndRemoveDownload;
- (void)_onProcessingQueue_resumeDownload;
- (void)_onProcessingQueue_pauseDownload;
- (void)_onProcessingQueue_startDownloadWithCompletion:(CDUnknownBlockType)arg1;
- (void)_onProcessingQueue_invalidate;
- (void)mediaEntityAssetController:(id)arg1 stateDidChange:(id)arg2;
- (void)cancelAndRemoveDownload;
- (void)resumeDownload;
- (void)pauseDownload;
- (void)startDownloadWithCompletion:(CDUnknownBlockType)arg1;
- (void)invalidate;
@property(readonly, copy, nonatomic) VUIMediaEntityType *mediaEntityType;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionDispatchQueue; // @synthesize completionDispatchQueue=_completionDispatchQueue;
@property(nonatomic) __weak id <VUIMediaEntityAssetControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (id)initWithMediaItemCollection:(id)arg1 mediaEntityIdentifier:(id)arg2 serialProcessingDispatchQueue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

