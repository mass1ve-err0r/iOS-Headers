//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIDocumentEnhancer : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputAmount;
}

+ (id)customAttributes;
@property(copy, nonatomic) NSNumber *inputAmount; // @synthesize inputAmount;
- (id)outputImage;

@end

