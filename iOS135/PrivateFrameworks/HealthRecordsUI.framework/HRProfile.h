/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
 */

@interface HRProfile : NSObject {
    WDClinicalSampleAccountsLoader * _clinicalSampleAccountsLoader;
    WDClinicalSourcesDataProvider * _clinicalSourcesDataProvider;
    HKConceptStore * _conceptStore;
    HKDateCache * _dateCache;
    HKHealthRecordsStore * _healthRecordsStore;
    HKHealthStore * _healthStore;
    WDMedicalRecordCountProvider * _medicalRecordCountProvider;
    HKUCUMUnitDisplayConverter * _ucumDisplayConverter;
    HKSampleTypeUpdateController * _updateController;
}

@property (nonatomic) WDClinicalSampleAccountsLoader *clinicalSampleAccountsLoader;
@property (nonatomic, readonly) WDClinicalSourcesDataProvider *clinicalSourcesDataProvider;
@property (nonatomic, readonly) HKConceptStore *conceptStore;
@property (nonatomic, readonly) HKDateCache *dateCache;
@property (nonatomic, readonly) HKHealthRecordsStore *healthRecordsStore;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) WDMedicalRecordCountProvider *medicalRecordCountProvider;
@property (nonatomic, readonly) HKUCUMUnitDisplayConverter *ucumDisplayConverter;
@property (nonatomic, readonly) HKSampleTypeUpdateController *updateController;
@property (nonatomic, readonly) HRWDUserActivityManager *userActivityManager;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_initWithHealthRecordsStore:(id)arg1;
- (id)_initWithHealthStore:(id)arg1;
- (id)clinicalSampleAccountsLoader;
- (id)clinicalSourcesDataProvider;
- (id)conceptStore;
- (id)dateCache;
- (id)healthRecordsStore;
- (id)healthStore;
- (id)medicalRecordCountProvider;
- (void)setClinicalSampleAccountsLoader:(id)arg1;
- (id)ucumDisplayConverter;
- (id)updateController;
- (id)userActivityManager;

@end