//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIConvolution7X7 : CIFilter
{
    CIImage *inputImage;
    CIVector *inputWeights;
    NSNumber *inputBias;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputBias; // @synthesize inputBias;
@property(retain, nonatomic) CIVector *inputWeights; // @synthesize inputWeights;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (_Bool)_isIdentity;

@end

