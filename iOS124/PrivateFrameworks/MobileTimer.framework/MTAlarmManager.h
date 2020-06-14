//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTAlarmCache, MTAlarmManagerExportedObject, MTMetrics, MTXPCConnectionProvider, NSNotificationCenter;

@interface MTAlarmManager : NSObject
{
    MTAlarmManagerExportedObject *_exportedObject;
    struct MTXPCConnectionProvider *_connectionProvider;
    MTMetrics *_metrics;
    MTAlarmCache *_cache;
    NSNotificationCenter *_notificationCenter;
}

+ (id)daySettingToString:(unsigned long long)arg1 longVersion:(_Bool)arg2 everyWeekdayVersion:(_Bool)arg3 showNever:(_Bool)arg4;
+ (id)_filteredAlarms:(id)arg1 afterDate:(id)arg2 maxCount:(unsigned long long)arg3 filter:(CDUnknownBlockType)arg4;
+ (id)assistantSyncNotificationName;
+ (void)warmUp;
@property(retain, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) MTAlarmCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) MTMetrics *metrics; // @synthesize metrics=_metrics;
@property(readonly, nonatomic) MTXPCConnectionProvider *connectionProvider; // @synthesize connectionProvider=_connectionProvider;
@property(retain, nonatomic) MTAlarmManagerExportedObject *exportedObject; // @synthesize exportedObject=_exportedObject;
- (void).cxx_destruct;
- (id)dismissAlarmWithIdentifier:(id)arg1 dismissAction:(unsigned long long)arg2;
- (id)dismissAlarmWithIdentifier:(id)arg1;
- (id)snoozeAlarmWithIdentifier:(id)arg1 snoozeAction:(unsigned long long)arg2;
- (id)snoozeAlarmWithIdentifier:(id)arg1;
- (id)removeAlarm:(id)arg1;
- (id)updateAlarm:(id)arg1;
- (id)addAlarm:(id)arg1;
- (unsigned long long)alarmCount;
- (id)alarmAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexForAlarm:(id)arg1;
- (id)alarmWithIDString:(id)arg1;
- (id)nextAlarmSync;
- (id)sleepAlarmSync;
- (id)nextAlarmsInRangeSync:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(_Bool)arg3 includeBedtimeNotification:(_Bool)arg4;
- (id)nextAlarmsInRangeSync:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(_Bool)arg3;
- (id)nextAlarmsForDateSync:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(_Bool)arg3 includeBedtimeNotification:(_Bool)arg4;
- (id)nextAlarmsForDateSync:(id)arg1 maxCount:(unsigned long long)arg2 includeBedtimeNotification:(_Bool)arg3;
- (id)nextAlarmsForDateSync:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(_Bool)arg3;
- (id)nextAlarmsForDateSync:(id)arg1 maxCount:(unsigned long long)arg2;
- (id)_sortedNextAlarmsAfterDate:(id)arg1 includeSleepAlarm:(_Bool)arg2 includeBedtimeNotification:(_Bool)arg3;
- (id)nextAlarmsInRange:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(_Bool)arg3 includeBedtimeNotification:(_Bool)arg4;
- (id)nextAlarmsInRange:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(_Bool)arg3;
- (id)nextAlarmsForDate:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(_Bool)arg3 includeBedtimeNotification:(_Bool)arg4;
- (id)nextAlarmsForDate:(id)arg1 maxCount:(unsigned long long)arg2 includeBedtimeNotification:(_Bool)arg3;
- (id)nextAlarmsForDate:(id)arg1 maxCount:(unsigned long long)arg2 includeSleepAlarm:(_Bool)arg3;
- (id)nextAlarmsForDate:(id)arg1 maxCount:(unsigned long long)arg2;
- (id)alarms;
- (id)alarmsSyncIncludingSleepAlarm:(_Bool)arg1;
- (id)alarmsSync;
- (unsigned long long)firingAlarmCount;
- (unsigned long long)alarmCountIncludingSleepAlarm:(_Bool)arg1;
- (id)nextAlarm;
- (id)sleepAlarm;
- (id)alarmsIncludingSleepAlarm:(_Bool)arg1;
- (void)_getCachedAlarmsWithFuture:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)reconnect;
- (void)checkIn;
- (void)dealloc;
- (id)_initWithConnectionProvidingBlock:(CDUnknownBlockType)arg1 metrics:(id)arg2 notificationCenter:(id)arg3;
- (id)_initWithConnectionProvidingBlock:(CDUnknownBlockType)arg1 metrics:(id)arg2;
- (id)initWithConnectionProvider:(id)arg1 metrics:(id)arg2 notificationCenter:(id)arg3;
- (id)initWithConnectionProvider:(id)arg1 metrics:(id)arg2;
- (id)initWithMetrics:(id)arg1;
- (id)init;

@end

