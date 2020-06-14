//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsInternals/SGJournalBaseObserver-Protocol.h>

@class NSArray, SGStorageEvent;

@protocol SGJournalCalendarObserver <SGJournalBaseObserver>
- (void)cancelEvents:(NSArray *)arg1;
- (void)addEvents:(NSArray *)arg1;
- (void)calendarDeleted;
- (void)orphanEvent:(SGStorageEvent *)arg1;
- (void)rejectEventFromOtherDevice:(SGStorageEvent *)arg1;
- (void)rejectEventFromThisDevice:(SGStorageEvent *)arg1;
- (void)confirmEventFromOtherDevice:(SGStorageEvent *)arg1;
- (void)confirmEventFromThisDevice:(SGStorageEvent *)arg1;
- (void)cancelEvent:(SGStorageEvent *)arg1;
- (void)addEvent:(SGStorageEvent *)arg1;
@end

