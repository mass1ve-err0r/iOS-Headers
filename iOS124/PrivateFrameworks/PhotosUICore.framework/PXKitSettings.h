//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXKitSettings : PXSettings
{
    _Bool _defaultAsyncTextRenderingEnabled;
    _Bool _defaultUseShapeLayerForText;
    _Bool _defaultTextAutoscalingEnabled;
    _Bool _defaultTextTruncationEnabled;
    _Bool _allowCapitalization;
    _Bool _allowFontFallback;
    _Bool _simulateSlowTextTypesetting;
    _Bool _drawTypographicGuidelines;
    _Bool _useFancyDarkening;
    long long _defaultLabelTypesettingMode;
    double _defaultTextMinimumScaleFactor;
    double _defaultTruncatedTextMinimumScaleFactor;
    double _textAutoscalingPrecision;
    long long _deviceGraphicsQuality;
    double _simulatedSafeAreaHorizontalInsets;
}

+ (id)sharedInstance;
+ (id)settingsControllerModule;
@property(nonatomic) double simulatedSafeAreaHorizontalInsets; // @synthesize simulatedSafeAreaHorizontalInsets=_simulatedSafeAreaHorizontalInsets;
@property(nonatomic) long long deviceGraphicsQuality; // @synthesize deviceGraphicsQuality=_deviceGraphicsQuality;
@property(nonatomic) _Bool useFancyDarkening; // @synthesize useFancyDarkening=_useFancyDarkening;
@property(nonatomic) _Bool drawTypographicGuidelines; // @synthesize drawTypographicGuidelines=_drawTypographicGuidelines;
@property(nonatomic) _Bool simulateSlowTextTypesetting; // @synthesize simulateSlowTextTypesetting=_simulateSlowTextTypesetting;
@property(nonatomic) _Bool allowFontFallback; // @synthesize allowFontFallback=_allowFontFallback;
@property(nonatomic) _Bool allowCapitalization; // @synthesize allowCapitalization=_allowCapitalization;
@property(nonatomic) double textAutoscalingPrecision; // @synthesize textAutoscalingPrecision=_textAutoscalingPrecision;
@property(nonatomic) double defaultTruncatedTextMinimumScaleFactor; // @synthesize defaultTruncatedTextMinimumScaleFactor=_defaultTruncatedTextMinimumScaleFactor;
@property(nonatomic) _Bool defaultTextTruncationEnabled; // @synthesize defaultTextTruncationEnabled=_defaultTextTruncationEnabled;
@property(nonatomic) double defaultTextMinimumScaleFactor; // @synthesize defaultTextMinimumScaleFactor=_defaultTextMinimumScaleFactor;
@property(nonatomic) _Bool defaultTextAutoscalingEnabled; // @synthesize defaultTextAutoscalingEnabled=_defaultTextAutoscalingEnabled;
@property(nonatomic) _Bool defaultUseShapeLayerForText; // @synthesize defaultUseShapeLayerForText=_defaultUseShapeLayerForText;
@property(nonatomic) long long defaultLabelTypesettingMode; // @synthesize defaultLabelTypesettingMode=_defaultLabelTypesettingMode;
@property(nonatomic) _Bool defaultAsyncTextRenderingEnabled; // @synthesize defaultAsyncTextRenderingEnabled=_defaultAsyncTextRenderingEnabled;
- (void)setDefaultValues;
- (id)parentSettings;

@end

