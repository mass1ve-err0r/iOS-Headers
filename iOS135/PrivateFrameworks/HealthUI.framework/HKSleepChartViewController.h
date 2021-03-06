/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKSleepChartViewController : HKInteractiveChartViewController <HKInteractiveChartViewObserver> {
    HKSleepAnnotationViewDataSource * _annotationViewDataSource;
    bool  _disableXAxisAndInteraction;
}

@property (nonatomic, retain) HKSleepAnnotationViewDataSource *annotationViewDataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableXAxisAndInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_asleepColor;
+ (id)_buildSleepAnalysisDataSourceWithHealthStore:(id)arg1 displayTypeController:(id)arg2;
+ (id)_buildSleepChartCacheWithHealthStore:(id)arg1 representativeDisplayType:(id)arg2 displayTypeController:(id)arg3 chartCacheController:(id)arg4;
+ (id)_generateDailyTimePeriodSeries;
+ (id)_goalLineStrokeStyle;
+ (id)_inBedColor;
+ (id)_lessSaturatedColorWithColor:(id)arg1;
+ (void)_titlesAndValuesWithSleepDay:(id)arg1 sleepPeriod:(id)arg2 context:(id)arg3 result:(id /* block */)arg4;
+ (id)consistencyDisplayTypesWithHealthStore:(id)arg1 unitController:(id)arg2 displayTypeController:(id)arg3 chartCacheController:(id)arg4;

- (void).cxx_destruct;
- (id)annotationViewDataSource;
- (id)calendarQueryDisplayType;
- (void)configureDisplayTypes:(id)arg1 timeScope:(long long)arg2 stackOffset:(long long)arg3;
- (id)descriptionSpansForGraphView:(id)arg1;
- (bool)disableXAxisAndInteraction;
- (id)initWithDisplayTypes:(id)arg1 healthStore:(id)arg2 unitPreferenceController:(id)arg3 dateCache:(id)arg4 chartDataCacheController:(id)arg5 selectedTimeScopeController:(id)arg6 initialXValue:(id)arg7 options:(unsigned long long)arg8;
- (id)lollipopAnnotationColor;
- (id)makeAnnotationDataSource;
- (void)primaryGraphViewControllerDidInitialize:(id)arg1;
- (id)seriesSelectionLineColorForGraphView:(id)arg1;
- (void)setAnnotationViewDataSource:(id)arg1;
- (void)setDisableXAxisAndInteraction:(bool)arg1;
- (void)updateSelectionAnnotationDataSourceForContext:(id)arg1 displayType:(id)arg2 timeScope:(long long)arg3;

@end
