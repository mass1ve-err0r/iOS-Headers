//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIVortexDistortion : CIFilter
{
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputRadius;
    NSNumber *inputAngle;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputAngle; // @synthesize inputAngle;
@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;
@property(retain, nonatomic) CIVector *inputCenter; // @synthesize inputCenter;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_kernel;
- (_Bool)_isIdentity;

@end

