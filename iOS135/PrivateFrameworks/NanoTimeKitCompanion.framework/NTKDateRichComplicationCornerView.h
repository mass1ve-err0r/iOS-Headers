/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKDateRichComplicationCornerView : NTKRichComplicationCornerView <CLKMonochromeComplicationView> {
    NTKCurvedColoringLabel * _dateLabel;
    NTKCurvedRoundedRectShapeLayer * _datePlatter;
    NTKCurvedColoringLabel * _nextDateLabel;
    NTKCurvedRoundedRectShapeLayer * _nextDatePlatter;
    NSDate * _overrideDate;
    NTKCurvedColoringLabel * _previousDateLabel;
    NTKCurvedRoundedRectShapeLayer * _previousDatePlatter;
    NTKCurvedColoringLabel * _weekdayLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <CLKMonochromeFilterProvider> *filterProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createAndAddColoringLabelWithFontSize:(double)arg1 dayOffset:(long long)arg2;
- (id)_createAndAddLabelPlatterWithAngularWidth:(double)arg1 color:(id)arg2;
- (void)_enumerateLabelsWithBlock:(id /* block */)arg1;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)_timeChanged:(id)arg1;
- (void)_updateDate;
- (void)dealloc;
- (id)init;
- (void)layoutSubviews;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end