//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIGammaAdjust : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputPower;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputPower; // @synthesize inputPower;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (_Bool)_isIdentity;

@end

