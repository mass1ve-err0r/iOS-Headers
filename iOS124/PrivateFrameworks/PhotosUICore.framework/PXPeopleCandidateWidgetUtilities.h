//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXPeopleCandidateWidgetUtilities : NSObject
{
}

+ (_Bool)_pastMidnightBufferThreshold;
+ (id)_localTimeZoneFormatStringForDate:(id)arg1;
+ (id)_tomorrow;
+ (id)_dateKeyForDay:(id)arg1;
+ (id)_dateKeyForTomorrow;
+ (id)_dateKeyForToday;
+ (id)removeAllPreviousNotNowPersonsIfNeededForDaysDictionary:(id)arg1;
+ (_Bool)shouldFetchCandidatesForPerson:(id)arg1 forDaysDictionary:(id)arg2;
+ (id)insertPerson:(id)arg1 forDaysDictionary:(id)arg2;

@end

