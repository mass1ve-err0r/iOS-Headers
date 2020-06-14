//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage;

__attribute__((visibility("hidden")))
@interface CIBlendWithMask : CIFilter
{
    CIImage *inputImage;
    CIImage *inputBackgroundImage;
    CIImage *inputMaskImage;
}

+ (id)customAttributes;
@property(retain, nonatomic) CIImage *inputMaskImage; // @synthesize inputMaskImage;
@property(retain, nonatomic) CIImage *inputBackgroundImage; // @synthesize inputBackgroundImage;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (float)_maskFillColorValue;
- (id)_kernelB0;
- (id)_kernel;

@end

