/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
 */

@interface HDMCDaySummaryBuilder : NSObject {
    NSMutableArray * _basalBodyTemperatureSamples;
    NSMutableArray * _cervicalMucusQualitySamples;
    long long  _dayIndex;
    NSMutableArray * _intermenstrualBleedingSamples;
    NSMutableArray * _menstrualFlowSamples;
    NSMutableArray * _ovulationTestResultSamples;
    NSMutableDictionary * _sampleCountByType;
    NSMutableArray * _sexualActivitySamples;
    NSMutableArray * _symptomsSamples;
}

@property (nonatomic, readonly) long long dayIndex;

- (void).cxx_destruct;
- (id)_basalBodyTemperature;
- (long long)_cervicalMucusQuality;
- (bool)_intermenstrualBleeding;
- (long long)_menstrualFlowWithCalendarCache:(id)arg1 modificationDay:(long long*)arg2 startOfCycleFromCycleTracking:(id*)arg3;
- (long long)_ovulationTestResult;
- (long long)_sexualActivity;
- (unsigned long long)_symptoms;
- (void)addCycleTrackingSample:(id)arg1;
- (id)createDaySummaryWithDevice:(id)arg1 calendarCache:(id)arg2;
- (long long)dayIndex;
- (id)initWithDayIndex:(long long)arg1;

@end