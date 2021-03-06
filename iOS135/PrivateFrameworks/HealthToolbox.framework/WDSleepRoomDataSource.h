/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

@interface WDSleepRoomDataSource : NSObject <HKSampleTypeUpdateControllerObserver> {
    HKChartCache * _chartCache;
    WDProfile * _profile;
    unsigned long long  _selectedContext;
    HKSleepAnalysis * _sleepAnalysis;
    HKSleepAnalysisDataSource * _sleepAnalysisDataSource;
    HKUnitPreferenceController * _unitController;
}

@property (nonatomic, retain) HKChartCache *chartCache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WDProfile *profile;
@property (nonatomic) unsigned long long selectedContext;
@property (nonatomic, retain) HKSleepAnalysis *sleepAnalysis;
@property (nonatomic, retain) HKSleepAnalysisDataSource *sleepAnalysisDataSource;
@property (readonly) Class superclass;
@property (nonatomic, retain) HKUnitPreferenceController *unitController;

+ (id)availableContextTypes;
+ (id)contextItemsForTimeScope:(long long)arg1 sleepAnalysis:(id)arg2;
+ (id)detailViewForContextType:(unsigned long long)arg1 valueRange:(id)arg2 sleepAnalysis:(id)arg3;
+ (id)sleepContextItemForContextType:(unsigned long long)arg1 timeScope:(long long)arg2 sleepAnalysis:(id)arg3;
+ (id)unitLabelFont;
+ (id)valueLabelFont;

- (void).cxx_destruct;
- (id)_asleepColor;
- (id)_asleepGradientColors;
- (id)_countFormatter;
- (id)_durationFormatter;
- (id)_generateDailyTimePeriodSeriesWithLegendEntries:(id)arg1;
- (id)_generateDurationSeries;
- (id)_genericAsleepInbedLegends;
- (id)_goalLineStrokeStyle;
- (id)_inBedColor;
- (id)_inbedGradientColors;
- (id)_lessSaturatedColorWithColor:(id)arg1;
- (void)_titlesAndValuesWithSleepDay:(id)arg1 sleepPeriod:(id)arg2 context:(id)arg3 result:(id /* block */)arg4;
- (id)chartCache;
- (id)consistencyDisplayType;
- (id)displayTypesForContext:(unsigned long long)arg1;
- (id)displayTypesForSelectedContext;
- (id)durationDisplayType;
- (id)efficiencyDisplayType;
- (id)initWithProfile:(id)arg1;
- (id)profile;
- (unsigned long long)selectContextAtIndex:(long long)arg1;
- (unsigned long long)selectedContext;
- (void)setChartCache:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setSelectedContext:(unsigned long long)arg1;
- (void)setSleepAnalysis:(id)arg1;
- (void)setSleepAnalysisDataSource:(id)arg1;
- (void)setUnitController:(id)arg1;
- (id)sleepAnalysis;
- (id)sleepAnalysisDataSource;
- (void)startObservingHealthStore;
- (id)unitController;
- (void)updateController:(id)arg1 didReceiveHighFrequencyUpdateForType:(id)arg2;
- (void)updateController:(id)arg1 didReceiveUpdateForType:(id)arg2 samplesAdded:(id)arg3 objectsRemoved:(id)arg4;

@end
