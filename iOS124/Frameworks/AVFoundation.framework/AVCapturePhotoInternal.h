//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVApplePortraitMetadata, AVCameraCalibrationData, AVCaptureBracketedStillImageSettings, AVCapturePhotoSettings, AVCaptureResolvedPhotoSettings, AVDepthData, AVPortraitEffectsMatte, NSDictionary, NSString;

@interface AVCapturePhotoInternal : NSObject
{
    CDStruct_1b6d18a9 timestamp;
    void *photoSurface;
    unsigned long long photoSurfaceSize;
    struct __CVBuffer *photoPixelBuffer;
    struct __CVBuffer *previewPixelBuffer;
    struct __CVBuffer *embeddedThumbnailSourcePixelBuffer;
    NSDictionary *embeddedThumbnailPhotoFormat;
    NSDictionary *metadata;
    AVCameraCalibrationData *cameraCalibrationData;
    AVCaptureResolvedPhotoSettings *resolvedSettings;
    AVCapturePhotoSettings *unresolvedSettings;
    AVDepthData *depthData;
    _Bool didTryToDecodeDepthData;
    AVPortraitEffectsMatte *portraitEffectsMatte;
    _Bool didTryToDecodePortraitEffectsMatte;
    _Bool isRawPhoto;
    AVCaptureBracketedStillImageSettings *bracketSettings;
    unsigned long long sequenceCount;
    unsigned long long photoCount;
    NSString *sourceDeviceType;
    unsigned int expectedPhotoProcessingFlags;
    unsigned int actualPhotoProcessingFlags;
    AVApplePortraitMetadata *portraitMetadata;
    _Bool lensStabilizationSupported;
}

@end

