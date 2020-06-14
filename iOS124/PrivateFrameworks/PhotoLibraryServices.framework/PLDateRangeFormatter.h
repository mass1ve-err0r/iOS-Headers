//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSLocale;

@interface PLDateRangeFormatter : NSObject
{
    _Bool _autoUpdateOnChanges;
    _Bool _includeDayNumbers;
    _Bool _includeDayNumbersWhenMonthsDiffer;
    _Bool _useRelativeDayFormatting;
    _Bool _useShortMonths;
    _Bool _useShortDaysInRanges;
    _Bool _useTime;
    _Bool _yearOnly;
    _Bool _timeOnly;
    NSDateFormatter *__sameDayDateFormatter;
    NSDateFormatter *__sameDayNoYearDateFormatter;
    NSDateFormatter *__dayOfTheWeekDateFormatter;
    NSDateFormatter *__relativeDateFormatterDay;
    NSDateFormatter *__yearDateFormatter;
    struct UDateIntervalFormat *__monthDayIntervalFormat;
    struct UDateIntervalFormat *__monthDayNoYearIntervalFormat;
    struct UDateIntervalFormat *__differentMonthDayIntervalFormat;
    struct UDateIntervalFormat *__differentMonthDayNoYearIntervalFormat;
    struct UDateIntervalFormat *__dayOfTheWeekIntervalFormat;
    struct UDateIntervalFormat *__timeIntervalFormat;
    struct UDateIntervalFormat *__yearIntervalFormat;
    NSLocale *__currentLocale;
}

@property(retain, nonatomic, setter=_setCurrentLocale:) NSLocale *_currentLocale; // @synthesize _currentLocale=__currentLocale;
@property(nonatomic) _Bool timeOnly; // @synthesize timeOnly=_timeOnly;
@property(nonatomic) _Bool yearOnly; // @synthesize yearOnly=_yearOnly;
@property(nonatomic) _Bool useTime; // @synthesize useTime=_useTime;
@property(nonatomic) _Bool useShortDaysInRanges; // @synthesize useShortDaysInRanges=_useShortDaysInRanges;
@property(nonatomic) _Bool useShortMonths; // @synthesize useShortMonths=_useShortMonths;
@property(nonatomic) _Bool useRelativeDayFormatting; // @synthesize useRelativeDayFormatting=_useRelativeDayFormatting;
@property(nonatomic) _Bool includeDayNumbersWhenMonthsDiffer; // @synthesize includeDayNumbersWhenMonthsDiffer=_includeDayNumbersWhenMonthsDiffer;
@property(nonatomic) _Bool includeDayNumbers; // @synthesize includeDayNumbers=_includeDayNumbers;
- (void)configureForFormatPreset:(unsigned long long)arg1;
- (void)_significantTimeChange:(id)arg1;
- (void)_localeChanged:(id)arg1;
- (void)_postChangeNotification;
@property(nonatomic) _Bool autoUpdateOnChanges;
- (id)formattedDate:(id)arg1;
- (id)formattedDateRangeWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)_formattedDateRangeWithStartDate:(id)arg1 endDate:(id)arg2 currentDate:(id)arg3;
- (_Bool)_date:(id)arg1 isWithinDaysInThePast:(long long)arg2;
@property(readonly, nonatomic) struct UDateIntervalFormat *_yearIntervalFormat; // @synthesize _yearIntervalFormat=__yearIntervalFormat;
@property(readonly, nonatomic) struct UDateIntervalFormat *_timeIntervalFormat; // @synthesize _timeIntervalFormat=__timeIntervalFormat;
@property(readonly, nonatomic) struct UDateIntervalFormat *_dayOfTheWeekIntervalFormat; // @synthesize _dayOfTheWeekIntervalFormat=__dayOfTheWeekIntervalFormat;
@property(readonly, nonatomic) struct UDateIntervalFormat *_differentMonthDayNoYearIntervalFormat; // @synthesize _differentMonthDayNoYearIntervalFormat=__differentMonthDayNoYearIntervalFormat;
@property(readonly, nonatomic) struct UDateIntervalFormat *_differentMonthDayIntervalFormat; // @synthesize _differentMonthDayIntervalFormat=__differentMonthDayIntervalFormat;
@property(readonly, nonatomic) struct UDateIntervalFormat *_monthDayNoYearIntervalFormat; // @synthesize _monthDayNoYearIntervalFormat=__monthDayNoYearIntervalFormat;
@property(readonly, nonatomic) struct UDateIntervalFormat *_monthDayIntervalFormat; // @synthesize _monthDayIntervalFormat=__monthDayIntervalFormat;
@property(readonly, retain, nonatomic) NSDateFormatter *_relativeDateFormatterDay; // @synthesize _relativeDateFormatterDay=__relativeDateFormatterDay;
@property(readonly, retain, nonatomic) NSDateFormatter *_yearDateFormatter; // @synthesize _yearDateFormatter=__yearDateFormatter;
@property(readonly, retain, nonatomic) NSDateFormatter *_dayOfTheWeekDateFormatter; // @synthesize _dayOfTheWeekDateFormatter=__dayOfTheWeekDateFormatter;
@property(readonly, retain, nonatomic) NSDateFormatter *_sameDayNoYearDateFormatter; // @synthesize _sameDayNoYearDateFormatter=__sameDayNoYearDateFormatter;
@property(readonly, retain, nonatomic) NSDateFormatter *_sameDayDateFormatter; // @synthesize _sameDayDateFormatter=__sameDayDateFormatter;
- (id)_dayDifferentMonthsTemplate;
- (id)_dayTemplate;
- (id)_sameMonthTemplate;
- (void)_invalidateFormats;
- (id)_formattedDateWithUDateFormatter:(struct UDateIntervalFormat *)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (void)_releaseUDateFormatter:(struct UDateIntervalFormat *)arg1;
- (struct UDateIntervalFormat *)_newUDateFormatterForLocale:(id)arg1 template:(id)arg2;
- (void)dealloc;
- (id)init;

@end

