//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CADObjectID, EKReminderPredicate, NSArray;

@protocol CADReminderInterface
- (void)CADScheduledTaskCacheGetDaysAndTaskCounts:(void (^)(int, NSArray *))arg1;
- (void)CADDatabaseGetProperties:(NSArray *)arg1 forReminders:(NSArray *)arg2 reply:(void (^)(int, NSArray *))arg3;
- (void)CADDatabaseGetCountOfRemindersWithPredicate:(EKReminderPredicate *)arg1 reply:(void (^)(int, int))arg2;
- (void)CADDatabaseSetDefaultCalendarForNewReminders:(CADObjectID *)arg1;
- (void)CADDatabaseGetDefaultCalendarForNewRemindersWithReply:(void (^)(int, CADObjectID *))arg1;
@end

