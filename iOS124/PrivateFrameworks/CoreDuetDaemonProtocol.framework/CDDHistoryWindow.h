//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface CDDHistoryWindow : NSObject
{
    NSDate *_start;
    double _duration;
    double _recurrenceDelta;
    double _recurrenceWidth;
}

+ (id)singleDayHistoryWindowWithWidth:(double)arg1 forDate:(id)arg2;
+ (id)dailyHistoryWindowWithWidth:(double)arg1 endingOnDate:(id)arg2 historyLengthInDays:(int)arg3;
+ (id)allTimeHistoryWindow;
@property(readonly) double recurrenceWidth; // @synthesize recurrenceWidth=_recurrenceWidth;
@property(readonly) double recurrenceDelta; // @synthesize recurrenceDelta=_recurrenceDelta;
@property(readonly) double duration; // @synthesize duration=_duration;
@property(readonly) NSDate *start; // @synthesize start=_start;
- (void).cxx_destruct;
- (id)description;
- (id)initWithStart:(id)arg1 duration:(double)arg2 recurrenceDelta:(double)arg3 recurrenceWidth:(double)arg4 error:(id *)arg5;

@end

