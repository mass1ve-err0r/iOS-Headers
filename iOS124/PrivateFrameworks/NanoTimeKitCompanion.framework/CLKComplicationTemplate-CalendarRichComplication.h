//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider, NSArray;

@interface CLKComplicationTemplate (CalendarRichComplication)
- (void)cal_setKey:(id)arg1 value:(id)arg2;
@property(nonatomic) _Bool cal_hasConflicts;
@property(retain, nonatomic) CLKTextProvider *cal_thirdText;
@property(retain, nonatomic) CLKTextProvider *cal_secondText;
@property(retain, nonatomic) CLKTextProvider *cal_firstText;
@property(retain, nonatomic) NSArray *cal_eventColors;
@end

