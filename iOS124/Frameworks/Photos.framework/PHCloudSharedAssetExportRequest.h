//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHAssetExportRequest.h>

@interface PHCloudSharedAssetExportRequest : PHAssetExportRequest
{
    int _imageManagerImageRequestId;
    int _imageManagerVideoRequestId;
}

+ (id)exportRequestForAsset:(id)arg1 error:(id *)arg2;
- (void)_requestLivePhotoURLsForAsset:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)_requestVideoURLForAsset:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (int)_requestImageURLForAsset:(id)arg1 progressHandler:(CDUnknownBlockType)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)exportWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

