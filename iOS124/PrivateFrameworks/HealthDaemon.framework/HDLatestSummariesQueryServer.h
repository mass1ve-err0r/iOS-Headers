//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDQueryServer.h>

@class HDListByTypeStatisticsBuilder_DEPRECATED, NSCalendar, NSDate, _HKFilter;

@interface HDLatestSummariesQueryServer : HDQueryServer
{
    _Bool _deliversUpdates;
    HDListByTypeStatisticsBuilder_DEPRECATED *_statisticsBuilder;
    NSDate *_startDate;
    NSDate *_endDate;
    NSCalendar *_calendar;
    _HKFilter *_nonSleepStartEndFilter;
    _HKFilter *_sleepStartEndFilter;
    _Bool _initialResultsDelivered;
}

+ (Class)queryClass;
- (void).cxx_destruct;
- (void)_queue_updateStatisticsWithSamples:(id)arg1 anchor:(id)arg2;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)_queue_start;
- (void)_queue_fetchAndDeliverAllStatisticsInitial:(_Bool)arg1;
- (_Bool)_shouldObserveAllSampleTypes;
- (_Bool)_shouldListenForUpdates;
- (_Bool)_shouldAcceptSample:(id)arg1;
- (id)latestSummariesClient;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 profile:(id)arg4 delegate:(id)arg5;

@end

