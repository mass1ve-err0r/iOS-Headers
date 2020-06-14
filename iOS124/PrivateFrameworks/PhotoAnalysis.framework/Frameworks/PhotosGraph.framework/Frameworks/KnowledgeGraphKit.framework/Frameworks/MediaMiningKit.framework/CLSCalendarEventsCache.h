//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface CLSCalendarEventsCache : NSObject
{
    NSMutableSet *_years;
}

@property(readonly, nonatomic) NSMutableSet *years; // @synthesize years=_years;
- (void).cxx_destruct;
- (id)_storeDayForDate:(id)arg1 createIfNeeded:(_Bool)arg2;
- (void)_enumerateDaysFromStartDate:(id)arg1 toEndDate:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)hasEventsFromStartDate:(id)arg1 toEndDate:(id)arg2;
- (id)eventsForDate:(id)arg1;
- (id)eventsForStartDate:(id)arg1 endDate:(id)arg2;
- (void)enumerateEventsFromStartDate:(id)arg1 toEndDate:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)insertEvent:(id)arg1;
- (id)debugDescription;
- (id)init;

@end

