//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (CalendarAdditions)
- (void)_performBlockBehindDispatchSync:(CDUnknownBlockType)arg1 inTimeZone:(id)arg2;
- (id)dateWithoutTimeComponentsInTimeZone:(id)arg1;
- (id)dateAtHour:(unsigned long long)arg1 minute:(unsigned long long)arg2 second:(unsigned long long)arg3 inTimeZone:(id)arg4;
- (id)dateForEndOfDayInTimeZone:(id)arg1;
- (id)dateForStartOfDayInTimeZone:(id)arg1;
@end

