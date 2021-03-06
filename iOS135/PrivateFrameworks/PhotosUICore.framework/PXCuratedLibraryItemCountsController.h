/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCuratedLibraryItemCountsController : PXObservable <PXAssetsDataSourceManagerObserver, PXMutableCuratedLibraryItemCountsController> {
    PXCuratedLibraryAssetsDataSourceManager * _assetsDataSourceManager;
    struct { 
        unsigned long long photosCount; 
        unsigned long long videosCount; 
        unsigned long long othersCount; 
    }  _counts;
    <PXCuratedLibraryEventLogger> * _eventLogger;
    bool  _hasUsableCounts;
    bool  _isCountingAssetTypes;
    NSObject<OS_dispatch_queue> * _prepareCountsQueue;
    bool  _waitingToPrepare;
}

@property (nonatomic, readonly) PXCuratedLibraryAssetsDataSourceManager *assetsDataSourceManager;
@property (nonatomic, readonly) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } counts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <PXCuratedLibraryEventLogger> *eventLogger;
@property (nonatomic) bool hasUsableCounts;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isCountingAssetTypes;
@property (readonly) Class superclass;
@property (nonatomic) bool waitingToPrepare;

- (void).cxx_destruct;
- (void)_handlePreparationCompletion;
- (bool)_prepareCounts;
- (void)_updateCounts;
- (void)_updateEventLogging;
- (id)assetsDataSourceManager;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })counts;
- (id)eventLogger;
- (bool)hasUsableCounts;
- (id)init;
- (id)initWithAssetsDataSourceManager:(id)arg1;
- (bool)isCountingAssetTypes;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)prepareCountsIfNeeded;
- (void)setCounts:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (void)setEventLogger:(id)arg1;
- (void)setHasUsableCounts:(bool)arg1;
- (void)setIsCountingAssetTypes:(bool)arg1;
- (void)setWaitingToPrepare:(bool)arg1;
- (bool)waitingToPrepare;

@end
