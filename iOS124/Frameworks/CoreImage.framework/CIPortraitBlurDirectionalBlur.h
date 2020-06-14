//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPortraitBlurDirectionalBlur : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputMaxBlur;
    NSNumber *inputHorizontalBlur;
    NSNumber *inputAntiAliasBlurStrength;
    NSNumber *inputUseMetal;
}

@property(copy, nonatomic) NSNumber *inputUseMetal; // @synthesize inputUseMetal;
@property(copy, nonatomic) NSNumber *inputAntiAliasBlurStrength; // @synthesize inputAntiAliasBlurStrength;
@property(copy, nonatomic) NSNumber *inputMaxBlur; // @synthesize inputMaxBlur;
@property(copy, nonatomic) NSNumber *inputHorizontalBlur; // @synthesize inputHorizontalBlur;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_kernelMetal;
- (id)_kernel;

@end

