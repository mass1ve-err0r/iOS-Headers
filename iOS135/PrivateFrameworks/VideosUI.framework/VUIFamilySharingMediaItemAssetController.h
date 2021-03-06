/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIFamilySharingMediaItemAssetController : NSObject <SSDownloadManagerObserver, SSPurchaseManagerDelegate, VUIMediaEntityAssetController> {
    NSObject<OS_dispatch_queue> * _completionDispatchQueueInternal;
    <VUIMediaEntityAssetControllerDelegate> * _delegateInternal;
    SSDownload * _downloadInternal;
    NSObject<VUIMediaEntityIdentifier> * _mediaEntityIdentifierInternal;
    VUIFamilySharingMediaItem * _mediaItemInternal;
    bool  _observingDownload;
    NSObject<OS_dispatch_queue> * _serialQueue;
    SSDownloadManager * _ssDownloadManager;
    VUIMediaEntityAssetControllerState * _stateInternal;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *completionDispatchQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *completionDispatchQueueInternal;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VUIMediaEntityAssetControllerDelegate> *delegate;
@property (nonatomic) <VUIMediaEntityAssetControllerDelegate> *delegateInternal;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SSDownload *downloadInternal;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSObject<VUIMediaEntityIdentifier> *mediaEntityIdentifier;
@property (nonatomic, copy) NSObject<VUIMediaEntityIdentifier> *mediaEntityIdentifierInternal;
@property (nonatomic, readonly, copy) VUIMediaEntityType *mediaEntityType;
@property (nonatomic, retain) VUIFamilySharingMediaItem *mediaItemInternal;
@property (nonatomic) bool observingDownload;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, retain) SSDownloadManager *ssDownloadManager;
@property (nonatomic, readonly, copy) VUIMediaEntityAssetControllerState *state;
@property (nonatomic, retain) VUIMediaEntityAssetControllerState *stateInternal;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsStartingDownload;

- (void).cxx_destruct;
- (void)_updateDownloadStateAndNotifyDelegates;
- (void)_updateObservedDownload;
- (void)cancelAndRemoveDownload;
- (id)completionDispatchQueue;
- (id)completionDispatchQueueInternal;
- (id)delegate;
- (id)delegateInternal;
- (id)downloadInternal;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (id)init;
- (id)initWithFamilySharingMediaItem:(id)arg1 mediaEntityIdentifier:(id)arg2;
- (id)initWithVideosPlayable:(id)arg1;
- (void)invalidate;
- (id)mediaEntityIdentifier;
- (id)mediaEntityIdentifierInternal;
- (id)mediaEntityType;
- (id)mediaItemInternal;
- (bool)observingDownload;
- (void)pauseDownload;
- (void)resumeDownload;
- (id)serialQueue;
- (void)setCompletionDispatchQueue:(id)arg1;
- (void)setCompletionDispatchQueueInternal:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateInternal:(id)arg1;
- (void)setDownloadInternal:(id)arg1;
- (void)setMediaEntityIdentifierInternal:(id)arg1;
- (void)setMediaItemInternal:(id)arg1;
- (void)setObservingDownload:(bool)arg1;
- (void)setSerialQueue:(id)arg1;
- (void)setSsDownloadManager:(id)arg1;
- (void)setStateInternal:(id)arg1;
- (id)ssDownloadManager;
- (void)startDownloadAllowingCellular:(bool)arg1 quality:(long long)arg2 completion:(id /* block */)arg3;
- (id)state;
- (id)stateInternal;
- (bool)supportsStartingDownload;

@end
