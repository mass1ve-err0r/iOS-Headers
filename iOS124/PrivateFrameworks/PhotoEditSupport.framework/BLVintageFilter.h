//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface BLVintageFilter : CIFilter
{
    _Bool _needsReprocess;
    int _lastAmount;
    float _lastStrength;
    CIImage *_inputImage;
    NSNumber *_inputAmount;
    NSNumber *_inputStrength;
    CIFilter *_colorCubeFilter;
    CIFilter *_maskFilter;
}

@property(retain, nonatomic) CIFilter *maskFilter; // @synthesize maskFilter=_maskFilter;
@property(retain, nonatomic) CIFilter *colorCubeFilter; // @synthesize colorCubeFilter=_colorCubeFilter;
@property(copy, nonatomic) NSNumber *inputStrength; // @synthesize inputStrength=_inputStrength;
@property(copy, nonatomic) NSNumber *inputAmount; // @synthesize inputAmount=_inputAmount;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage=_inputImage;
- (void).cxx_destruct;
- (id)outputImage;
- (void)setDefaults;
- (id)init;

@end

