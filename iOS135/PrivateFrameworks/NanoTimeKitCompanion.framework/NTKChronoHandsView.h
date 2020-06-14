/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKChronoHandsView : NTKAnalogHandsView {
    NTKHandView * _chronoFlybackMinuteHandView;
    NTKHandView * _chronoFlybackSecondHandView;
    NTKHandView * _chronoMinuteHandView;
    NTKHandView * _chronoSecondHandView;
    bool  _isChronoAnimationRunning;
    bool  _minuteHandUsesManualTime;
    NTKChronoPalette * _palette;
    unsigned long long  _timeScale;
}

@property (nonatomic, readonly) NTKHandView *chronoFlybackMinuteHandView;
@property (nonatomic, readonly) NTKHandView *chronoFlybackSecondHandView;
@property (nonatomic, readonly) NTKHandView *chronoMinuteHandView;
@property (nonatomic, readonly) NTKHandView *chronoSecondHandView;
@property (nonatomic) bool minuteHandUsesManualTime;
@property (nonatomic, retain) NTKChronoPalette *palette;
@property (nonatomic) unsigned long long timeScale;

+ (long long)preferredCountOfInstancesToCache;

- (void).cxx_destruct;
- (void)_enumerateChronoHandViews:(id /* block */)arg1;
- (void)_enumerateFlybackChronoHands:(id /* block */)arg1;
- (void)_enumeratePrimaryChronoHands:(id /* block */)arg1;
- (void)_enumerateSecondHandViewsWithBlock:(id /* block */)arg1;
- (double)_stopwatchCurrentLapTime;
- (double)_stopwatchCurrentTime;
- (bool)_stopwatchIsRunning;
- (bool)_stopwatchIsStopped;
- (long long)_stopwatchLapCount;
- (double)chronoDuration;
- (id)chronoFlybackMinuteHandView;
- (id)chronoFlybackSecondHandView;
- (id)chronoMinuteHandView;
- (id)chronoSecondHandView;
- (id)initForDevice:(id)arg1;
- (void)layoutSubviews;
- (bool)minuteHandUsesManualTime;
- (id)palette;
- (double)secondsAnimationFPS;
- (void)setMinuteHandUsesManualTime:(bool)arg1;
- (void)setPalette:(id)arg1;
- (void)setTimeScale:(unsigned long long)arg1;
- (void)showChronoMode;
- (void)showTimeMode;
- (void)startNewChronoAnimation;
- (void)stopChronoAnimation;
- (unsigned long long)timeScale;
- (void)updateLapHandsVisibility;
- (double)upperDuration;
- (float)zRotationForTime:(double)arg1 withDuration:(float)arg2;

@end