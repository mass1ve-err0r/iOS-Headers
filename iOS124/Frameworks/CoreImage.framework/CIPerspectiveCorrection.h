//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPerspectiveCorrection : CIFilter
{
    CIImage *inputImage;
    CIVector *inputTopLeft;
    CIVector *inputTopRight;
    CIVector *inputBottomRight;
    CIVector *inputBottomLeft;
    NSNumber *inputCrop;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputCrop; // @synthesize inputCrop;
@property(retain, nonatomic) CIVector *inputBottomLeft; // @synthesize inputBottomLeft;
@property(retain, nonatomic) CIVector *inputBottomRight; // @synthesize inputBottomRight;
@property(retain, nonatomic) CIVector *inputTopRight; // @synthesize inputTopRight;
@property(retain, nonatomic) CIVector *inputTopLeft; // @synthesize inputTopLeft;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_kernel;

@end

