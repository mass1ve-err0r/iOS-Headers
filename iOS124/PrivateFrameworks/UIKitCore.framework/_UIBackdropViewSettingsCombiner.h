//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIBackdropViewSettings.h>

__attribute__((visibility("hidden")))
@interface _UIBackdropViewSettingsCombiner : _UIBackdropViewSettings
{
    _UIBackdropViewSettings *_inputSettingsA;
    _UIBackdropViewSettings *_inputSettingsB;
    double _weighting;
    _UIBackdropViewSettings *_outputSettingsA;
    _UIBackdropViewSettings *_outputSettingsB;
}

@property(retain, nonatomic) _UIBackdropViewSettings *outputSettingsB; // @synthesize outputSettingsB=_outputSettingsB;
@property(retain, nonatomic) _UIBackdropViewSettings *outputSettingsA; // @synthesize outputSettingsA=_outputSettingsA;
@property(nonatomic) double weighting; // @synthesize weighting=_weighting;
@property(retain, nonatomic) _UIBackdropViewSettings *inputSettingsB; // @synthesize inputSettingsB=_inputSettingsB;
@property(retain, nonatomic) _UIBackdropViewSettings *inputSettingsA; // @synthesize inputSettingsA=_inputSettingsA;
- (void).cxx_destruct;
- (void)computeOutputSettingsUsingModel:(id)arg1;
- (_Bool)isBackdropVisible;
- (_Bool)requiresBackdropLayer;
- (void)setRequiresColorStatistics:(_Bool)arg1;
- (void)copyAdditionalSettingsFromSettings:(id)arg1;
- (void)setDefaultValues;

@end

