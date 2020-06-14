//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACHDateComponentInterval, ACHMonthlyChallengeDataSource, NSCalendar;

@interface ACHMonthlyChallengeEvaluationEnvironment : NSObject
{
    ACHMonthlyChallengeDataSource *_dataSource;
    ACHDateComponentInterval *_dateComponentInterval;
    NSCalendar *_calendar;
}

@property(retain, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(retain, nonatomic) ACHDateComponentInterval *dateComponentInterval; // @synthesize dateComponentInterval=_dateComponentInterval;
@property(nonatomic) __weak ACHMonthlyChallengeDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (double)_valueForMonthlyChallengeType:(unsigned long long)arg1;
@property(readonly, nonatomic) double numberOfDaysDoublingMoveGoalInCurrentMonth;
@property(readonly, nonatomic) double totalWalkingRunningDistanceInCurrentMonth;
@property(readonly, nonatomic) double numberOfWorkoutsCompletedInCurrentMonth;
@property(readonly, nonatomic) double totalExerciseMinutesInCurrentMonth;
@property(readonly, nonatomic) double totalEnergyBurnInCurrentMonth;
@property(readonly, nonatomic) double numberOfDaysClosingStandRingInCurrentMonth;
@property(readonly, nonatomic) double numberOfDaysClosingExerciseRingInCurrentMonth;
@property(readonly, nonatomic) double numberOfDaysClosingMoveRingInCurrentMonth;
@property(readonly, nonatomic) double numberOfDaysClosingAllThreeRingsInCurrentMonth;
- (id)initWithMonthlyChallengeDataSource:(id)arg1 dateComponentInterval:(id)arg2 calendar:(id)arg3;

@end

