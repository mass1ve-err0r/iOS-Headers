//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIEdgePreserveUpsampleFilter : CIFilter
{
    CIImage *inputImage;
    CIImage *inputSmallImage;
    NSNumber *inputSpatialSigma;
    NSNumber *inputLumaSigma;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputLumaSigma; // @synthesize inputLumaSigma;
@property(retain, nonatomic) NSNumber *inputSpatialSigma; // @synthesize inputSpatialSigma;
@property(retain, nonatomic) CIImage *inputSmallImage; // @synthesize inputSmallImage;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_kernelGuideMono;
- (id)_kernelGuideCombine4;
- (id)_kernelGuideCombine;
- (id)_kernelJointUpsampRG;
- (id)_kernelJointUpsamp;

@end

