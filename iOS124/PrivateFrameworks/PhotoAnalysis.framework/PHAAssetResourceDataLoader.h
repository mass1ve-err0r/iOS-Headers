//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoAnalysis/PHAAssetResourceDataLoading-Protocol.h>

@class NSMutableSet, NSString, PHPhotoLibrary;
@protocol OS_dispatch_queue, PHADownloadRequestManagement;

@interface PHAAssetResourceDataLoader : NSObject <PHAAssetResourceDataLoading>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_activeDownloads;
    PHPhotoLibrary *_photoLibrary;
    id <PHADownloadRequestManagement> _downloadRequestManager;
}

+ (id)dataLoaderWithDefaultConfigurationForPhotoLibrary:(id)arg1;
@property(retain, nonatomic) id <PHADownloadRequestManagement> downloadRequestManager; // @synthesize downloadRequestManager=_downloadRequestManager;
- (void).cxx_destruct;
- (void)_inq_cancelAllDownloads;
- (void)_inq_downloadAssetResource:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cancelAllDownloads;
- (void)requestDataForAssetResource:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)assetResourceFromAcceptableAssetResources:(id)arg1 options:(id)arg2;
- (id)_firstLocallyAvailableAssetResourceFromAssetResources:(id)arg1;
- (id)_localFileURLForAssetResource:(id)arg1 error:(id *)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

