//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDProfile.h>

@class HDAWDSubmissionManager, HDAppSubscriptionManager, HDCloudSyncManager, HDCurrentActivitySummaryHelper, HDDataCollectionManager, HDFitnessMachineManager, HDHealthServiceManager, HDNanoSyncManager, HDNotificationManager, HDServiceConnectionManager, HDWorkoutManager;

@interface HDPrimaryProfile : HDProfile
{
    HDAppSubscriptionManager *_appSubscriptionManager;
    HDAWDSubmissionManager *_awdSubmissionManager;
    HDCloudSyncManager *_cloudSyncManager;
    HDCurrentActivitySummaryHelper *_currentActivitySummaryHelper;
    HDDataCollectionManager *_dataCollectionManager;
    HDFitnessMachineManager *_fitnessMachineManager;
    HDNanoSyncManager *_nanoSyncManager;
    HDNotificationManager *_notificationManager;
    HDHealthServiceManager *_serviceManager;
    HDServiceConnectionManager *_serviceConnectionManager;
    HDWorkoutManager *_workoutManager;
}

- (void).cxx_destruct;
- (void)_applyPPTUpdates;
- (void)unitTest_setServiceManager:(id)arg1;
- (id)_newWorkoutManager;
- (id)_newNotificationManager;
- (id)_newNanoSyncManager;
- (id)_newCloudSyncManager;
- (id)_newAWDSubmissionManager;
- (id)_newAppSubscriptionManager;
- (id)serviceManager;
- (id)serviceConnectionManager;
- (id)notificationManager;
- (id)nanoSyncManager;
- (id)fitnessMachineManager;
- (id)workoutManager;
- (id)dataCollectionManager;
- (id)currentActivitySummaryHelper;
- (id)cloudSyncManager;
- (id)awdSubmissionManager;
- (id)appSubscriptionManager;
- (id)activityCacheManager;
- (void)terminationCleanup;
- (id)initWithDirectoryPath:(id)arg1 medicalIDDirectoryPath:(id)arg2 daemon:(id)arg3;

@end

