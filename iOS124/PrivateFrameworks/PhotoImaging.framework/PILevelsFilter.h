//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, NSString;

@interface PILevelsFilter : CIFilter
{
    CIImage *_inputImage;
    NSNumber *_inputBlackSrcRGB;
    NSNumber *_inputBlackDstRGB;
    NSNumber *_inputShadowSrcRGB;
    NSNumber *_inputShadowDstRGB;
    NSNumber *_inputMidSrcRGB;
    NSNumber *_inputMidDstRGB;
    NSNumber *_inputHilightSrcRGB;
    NSNumber *_inputHilightDstRGB;
    NSNumber *_inputWhiteSrcRGB;
    NSNumber *_inputWhiteDstRGB;
    NSNumber *_inputBlackSrcRed;
    NSNumber *_inputBlackDstRed;
    NSNumber *_inputShadowSrcRed;
    NSNumber *_inputShadowDstRed;
    NSNumber *_inputMidSrcRed;
    NSNumber *_inputMidDstRed;
    NSNumber *_inputHilightSrcRed;
    NSNumber *_inputHilightDstRed;
    NSNumber *_inputWhiteSrcRed;
    NSNumber *_inputWhiteDstRed;
    NSNumber *_inputBlackSrcGreen;
    NSNumber *_inputBlackDstGreen;
    NSNumber *_inputShadowSrcGreen;
    NSNumber *_inputShadowDstGreen;
    NSNumber *_inputMidSrcGreen;
    NSNumber *_inputMidDstGreen;
    NSNumber *_inputHilightSrcGreen;
    NSNumber *_inputHilightDstGreen;
    NSNumber *_inputWhiteSrcGreen;
    NSNumber *_inputWhiteDstGreen;
    NSNumber *_inputBlackSrcBlue;
    NSNumber *_inputBlackDstBlue;
    NSNumber *_inputShadowSrcBlue;
    NSNumber *_inputShadowDstBlue;
    NSNumber *_inputMidSrcBlue;
    NSNumber *_inputMidDstBlue;
    NSNumber *_inputHilightSrcBlue;
    NSNumber *_inputHilightDstBlue;
    NSNumber *_inputWhiteSrcBlue;
    NSNumber *_inputWhiteDstBlue;
    NSString *_inputColorSpace;
}

+ (id)customAttributes;
+ (id)_customAttributesForKey:(id)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (id)P3Kernel;
@property(retain, nonatomic) NSString *inputColorSpace; // @synthesize inputColorSpace=_inputColorSpace;
@property(retain, nonatomic) NSNumber *inputWhiteDstBlue; // @synthesize inputWhiteDstBlue=_inputWhiteDstBlue;
@property(retain, nonatomic) NSNumber *inputWhiteSrcBlue; // @synthesize inputWhiteSrcBlue=_inputWhiteSrcBlue;
@property(retain, nonatomic) NSNumber *inputHilightDstBlue; // @synthesize inputHilightDstBlue=_inputHilightDstBlue;
@property(retain, nonatomic) NSNumber *inputHilightSrcBlue; // @synthesize inputHilightSrcBlue=_inputHilightSrcBlue;
@property(retain, nonatomic) NSNumber *inputMidDstBlue; // @synthesize inputMidDstBlue=_inputMidDstBlue;
@property(retain, nonatomic) NSNumber *inputMidSrcBlue; // @synthesize inputMidSrcBlue=_inputMidSrcBlue;
@property(retain, nonatomic) NSNumber *inputShadowDstBlue; // @synthesize inputShadowDstBlue=_inputShadowDstBlue;
@property(retain, nonatomic) NSNumber *inputShadowSrcBlue; // @synthesize inputShadowSrcBlue=_inputShadowSrcBlue;
@property(retain, nonatomic) NSNumber *inputBlackDstBlue; // @synthesize inputBlackDstBlue=_inputBlackDstBlue;
@property(retain, nonatomic) NSNumber *inputBlackSrcBlue; // @synthesize inputBlackSrcBlue=_inputBlackSrcBlue;
@property(retain, nonatomic) NSNumber *inputWhiteDstGreen; // @synthesize inputWhiteDstGreen=_inputWhiteDstGreen;
@property(retain, nonatomic) NSNumber *inputWhiteSrcGreen; // @synthesize inputWhiteSrcGreen=_inputWhiteSrcGreen;
@property(retain, nonatomic) NSNumber *inputHilightDstGreen; // @synthesize inputHilightDstGreen=_inputHilightDstGreen;
@property(retain, nonatomic) NSNumber *inputHilightSrcGreen; // @synthesize inputHilightSrcGreen=_inputHilightSrcGreen;
@property(retain, nonatomic) NSNumber *inputMidDstGreen; // @synthesize inputMidDstGreen=_inputMidDstGreen;
@property(retain, nonatomic) NSNumber *inputMidSrcGreen; // @synthesize inputMidSrcGreen=_inputMidSrcGreen;
@property(retain, nonatomic) NSNumber *inputShadowDstGreen; // @synthesize inputShadowDstGreen=_inputShadowDstGreen;
@property(retain, nonatomic) NSNumber *inputShadowSrcGreen; // @synthesize inputShadowSrcGreen=_inputShadowSrcGreen;
@property(retain, nonatomic) NSNumber *inputBlackDstGreen; // @synthesize inputBlackDstGreen=_inputBlackDstGreen;
@property(retain, nonatomic) NSNumber *inputBlackSrcGreen; // @synthesize inputBlackSrcGreen=_inputBlackSrcGreen;
@property(retain, nonatomic) NSNumber *inputWhiteDstRed; // @synthesize inputWhiteDstRed=_inputWhiteDstRed;
@property(retain, nonatomic) NSNumber *inputWhiteSrcRed; // @synthesize inputWhiteSrcRed=_inputWhiteSrcRed;
@property(retain, nonatomic) NSNumber *inputHilightDstRed; // @synthesize inputHilightDstRed=_inputHilightDstRed;
@property(retain, nonatomic) NSNumber *inputHilightSrcRed; // @synthesize inputHilightSrcRed=_inputHilightSrcRed;
@property(retain, nonatomic) NSNumber *inputMidDstRed; // @synthesize inputMidDstRed=_inputMidDstRed;
@property(retain, nonatomic) NSNumber *inputMidSrcRed; // @synthesize inputMidSrcRed=_inputMidSrcRed;
@property(retain, nonatomic) NSNumber *inputShadowDstRed; // @synthesize inputShadowDstRed=_inputShadowDstRed;
@property(retain, nonatomic) NSNumber *inputShadowSrcRed; // @synthesize inputShadowSrcRed=_inputShadowSrcRed;
@property(retain, nonatomic) NSNumber *inputBlackDstRed; // @synthesize inputBlackDstRed=_inputBlackDstRed;
@property(retain, nonatomic) NSNumber *inputBlackSrcRed; // @synthesize inputBlackSrcRed=_inputBlackSrcRed;
@property(retain, nonatomic) NSNumber *inputWhiteDstRGB; // @synthesize inputWhiteDstRGB=_inputWhiteDstRGB;
@property(retain, nonatomic) NSNumber *inputWhiteSrcRGB; // @synthesize inputWhiteSrcRGB=_inputWhiteSrcRGB;
@property(retain, nonatomic) NSNumber *inputHilightDstRGB; // @synthesize inputHilightDstRGB=_inputHilightDstRGB;
@property(retain, nonatomic) NSNumber *inputHilightSrcRGB; // @synthesize inputHilightSrcRGB=_inputHilightSrcRGB;
@property(retain, nonatomic) NSNumber *inputMidDstRGB; // @synthesize inputMidDstRGB=_inputMidDstRGB;
@property(retain, nonatomic) NSNumber *inputMidSrcRGB; // @synthesize inputMidSrcRGB=_inputMidSrcRGB;
@property(retain, nonatomic) NSNumber *inputShadowDstRGB; // @synthesize inputShadowDstRGB=_inputShadowDstRGB;
@property(retain, nonatomic) NSNumber *inputShadowSrcRGB; // @synthesize inputShadowSrcRGB=_inputShadowSrcRGB;
@property(retain, nonatomic) NSNumber *inputBlackDstRGB; // @synthesize inputBlackDstRGB=_inputBlackDstRGB;
@property(retain, nonatomic) NSNumber *inputBlackSrcRGB; // @synthesize inputBlackSrcRGB=_inputBlackSrcRGB;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage=_inputImage;
- (void).cxx_destruct;
- (id)outputImage;
- (id)_LUTImage;
- (double)floatValueForKey:(id)arg1 defaultValue:(double)arg2 clearIfNotDefault:(_Bool *)arg3;
- (void)setDefaults;

@end

