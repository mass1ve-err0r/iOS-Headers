//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface AVCaptureResolvedPhotoSettingsInternal : NSObject
{
    long long uniqueID;
    CDStruct_79c71658 photoDimensions;
    CDStruct_79c71658 rawPhotoDimensions;
    CDStruct_79c71658 previewDimensions;
    CDStruct_79c71658 embeddedThumbnailDimensions;
    CDStruct_79c71658 rawEmbeddedThumbnailDimensions;
    _Bool livePhotoMovieEnabled;
    CDStruct_79c71658 livePhotoMovieDimensions;
    CDStruct_79c71658 portraitEffectsMatteDimensions;
    _Bool turboModeEnabled;
    _Bool flashEnabled;
    _Bool redEyeReductionEnabled;
    _Bool HDREnabled;
    _Bool adjustedPhotoFiltersEnabled;
    _Bool EV0PhotoDeliveryEnabled;
    _Bool stillImageStabilizationEnabled;
    _Bool dualCameraFusionEnabled;
    _Bool squareCropEnabled;
    NSArray *photoManifest;
}

- (void)dealloc;

@end

