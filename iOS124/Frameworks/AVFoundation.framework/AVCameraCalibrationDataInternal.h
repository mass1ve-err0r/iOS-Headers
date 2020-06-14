//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface AVCameraCalibrationDataInternal : NSObject
{
    CDStruct_8e0628e6 intrinsicMatrix;
    struct CGSize intrinsicMatrixReferenceDimensions;
    CDStruct_14d5dc5e extrinsicMatrix;
    float pixelSize;
    NSData *lensDistortionCoefficients;
    NSData *inverseLensDistortionCoefficients;
    struct CGPoint lensDistortionCenter;
    NSData *lensDistortionLookupTable;
    NSData *inverseLensDistortionLookupTable;
}

@end

