//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NTKNumeralsAnalogFaceConfiguration, UIColor;

@interface NTKNumeralsHourView : UIImageView
{
    long long _hour;
    unsigned long long _style;
    NTKNumeralsAnalogFaceConfiguration *_faceConfiguration;
    UIColor *_appliedColor;
    _Bool _isLoaded;
}

@property(readonly) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
- (void).cxx_destruct;
- (id)_imageNameForStyle:(unsigned long long)arg1 hour:(long long)arg2;
- (void)_applyTintColor:(id)arg1;
- (id)_hourColorForDevice:(id)arg1 faceColor:(unsigned long long)arg2 colorSchemeUnits:(unsigned long long)arg3;
- (void)applyTransitionFraction:(double)arg1 fromFaceColor:(unsigned long long)arg2 toFaceColor:(unsigned long long)arg3 faceConfiguration:(id)arg4;
- (void)applyFaceColorFromFaceConfiguration:(id)arg1;
- (void)layoutSubviews;
- (void)load;
- (id)initUnloadedHourViewForHour:(long long)arg1 style:(unsigned long long)arg2 faceConfiguration:(id)arg3;
- (id)initForHour:(long long)arg1 style:(unsigned long long)arg2 faceConfiguration:(id)arg3;

@end

