//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSDate, NSMutableArray;

@interface PGRecentPastEventsMemoryGenerator : PGMemoryGenerator
{
    NSMutableArray *_potentialMemories;
    NSDate *_localDate;
}

@property(retain, nonatomic) NSDate *localDate; // @synthesize localDate=_localDate;
- (void).cxx_destruct;
- (id)_potentialMemoriesForDryTesting;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_createMemoryDebugWithPotentialMemory:(id)arg1;
- (id)generateMemories:(unsigned long long)arg1;
- (void)_computePotentialMemories;
- (id)_computePotentialMemoriesForSubcategory:(unsigned long long)arg1 withLocalStartDate:(id)arg2 localEndDate:(id)arg3;
- (id)_computePotentialMemoriesForPeopleNodes:(id)arg1;
- (id)_peopleSeenInPreviousWeekButNotInPreviousThreeMonthsWithLocalDate:(id)arg1;
- (id)initWithController:(id)arg1;

@end

