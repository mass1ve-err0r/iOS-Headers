//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

__attribute__((visibility("hidden")))
@interface CIClamp : CIFilter
{
    CIImage *inputImage;
    CIVector *inputExtent;
}

+ (id)customAttributes;
@property(retain, nonatomic) CIVector *inputExtent; // @synthesize inputExtent;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;

@end

