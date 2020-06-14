/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKWorldClockRichComplicationCircularView : NTKRichComplicationCircularBaseView {
    WorldClockCity * _city;
    UILabel * _cityNameLabel;
    NSNumber * _clockTimerToken;
    struct { 
        double cityNameFontSize; 
        double cityNameBaselineOffsetNorthSide; 
        double cityNameBaselineOffsetSouthSide; 
        double dialDiameter; 
        struct CGSize { 
            double width; 
            double height; 
        } majorTickSize; 
        struct CGSize { 
            double width; 
            double height; 
        } minorTickSize; 
    }  _constants;
    UIColor * _daytimeBackgroundColor;
    UIColor * _daytimeHandsColor;
    UIColor * _daytimeHandsDotColor;
    NTKRichComplicationDialView * _dialView;
    NTKWorldClockRichComplicationHandsView * _handsView;
    UIColor * _nighttimeBackgroundColor;
    UIColor * _nighttimeHandsColor;
    UIColor * _nighttimeHandsDotColor;
    bool  _positionLabelNorthSide;
}

@property (nonatomic, retain) UIColor *daytimeBackgroundColor;
@property (nonatomic, retain) UIColor *daytimeHandsColor;
@property (nonatomic, retain) UIColor *daytimeHandsDotColor;
@property (nonatomic, retain) UIColor *nighttimeBackgroundColor;
@property (nonatomic, retain) UIColor *nighttimeHandsColor;
@property (nonatomic, retain) UIColor *nighttimeHandsDotColor;

- (void).cxx_destruct;
- (void)_applyPausedUpdate;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (bool)_shouldAnimateWithTemplateUpdateReason:(long long)arg1;
- (bool)_shouldUseDaytimeColoring;
- (void)_startClockUpdates;
- (void)_stopClockUpdates;
- (void)_updateUI;
- (id)daytimeBackgroundColor;
- (id)daytimeHandsColor;
- (id)daytimeHandsDotColor;
- (void)dealloc;
- (id)init;
- (void)layoutSubviews;
- (id)nighttimeBackgroundColor;
- (id)nighttimeHandsColor;
- (id)nighttimeHandsDotColor;
- (void)setDaytimeBackgroundColor:(id)arg1;
- (void)setDaytimeHandsColor:(id)arg1;
- (void)setDaytimeHandsDotColor:(id)arg1;
- (void)setNighttimeBackgroundColor:(id)arg1;
- (void)setNighttimeHandsColor:(id)arg1;
- (void)setNighttimeHandsDotColor:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end