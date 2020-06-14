//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateComponents;

@interface _HKBedtimeAlarm : NSObject
{
    NSDateComponents *_sleepDateComponents;
    NSDateComponents *_wakeDateComponents;
}

+ (id)bedtimeAlarmWithSleepDate:(id)arg1 wakeDate:(id)arg2 calendar:(id)arg3;
@property(readonly, nonatomic) NSDateComponents *wakeDateComponents; // @synthesize wakeDateComponents=_wakeDateComponents;
@property(readonly, nonatomic) NSDateComponents *sleepDateComponents; // @synthesize sleepDateComponents=_sleepDateComponents;
- (void).cxx_destruct;
- (id)firstDateIntervalAfterDate:(id)arg1 calendar:(id)arg2;
- (id)initWithSleepDateComponents:(id)arg1 wakeDateComponents:(id)arg2;

@end

