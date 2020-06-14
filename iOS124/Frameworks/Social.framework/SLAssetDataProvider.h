//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ALAssetsLibrary, AVAssetExportSession, NSError, NSMutableArray;
@protocol OS_dispatch_queue;

@interface SLAssetDataProvider : NSObject
{
    ALAssetsLibrary *_assetsLibrary;
    int _numRequestedImages;
    unsigned long long _maxByteSize;
    NSMutableArray *_deliveryQueue;
    NSError *_lastError;
    AVAssetExportSession *_assetExportSession;
    NSObject<OS_dispatch_queue> *_downsamplingQueue;
    CDUnknownBlockType _fetchCompletion;
}

@property(copy) CDUnknownBlockType fetchCompletion; // @synthesize fetchCompletion=_fetchCompletion;
- (void).cxx_destruct;
- (void)mappedDataFromVideoAtFileURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)exportDataFromVideoAssetURL:(id)arg1 toFileURL:(id)arg2 exportPreset:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_generateTemporaryFilename;
- (void)fetchImageDataForAssetsURLs:(id)arg1 maxByteSize:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchedAsset:(id)arg1;
- (void)_downsamplingCompletedForAsset:(id)arg1 withDownsampledData:(id)arg2;
- (void)_downsamplingFailedForAsset:(id)arg1 withError:(id)arg2;
- (void)_assetFetchFailedWithError:(id)arg1;
- (void)_checkDeliveryComplete;
- (id)init;

@end

