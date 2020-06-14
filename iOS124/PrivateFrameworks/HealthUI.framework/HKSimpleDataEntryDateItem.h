//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKSimpleDataEntryItem.h>

@class HKSimpleDataEntryPlainTextCell, HKValueRange, NSDate, NSDateFormatter, NSString, UIDatePicker;

@interface HKSimpleDataEntryDateItem : HKSimpleDataEntryItem
{
    HKSimpleDataEntryPlainTextCell *_cell;
    NSString *_title;
    NSString *_registrantModelKey;
    NSDate *_date;
    NSDate *_defaultDate;
    HKValueRange *_dateRange;
    UIDatePicker *_datePicker;
    NSDateFormatter *_exportFormatter;
}

+ (id)gregorianGMTCalendar;
+ (id)_dateFormatter;
- (void).cxx_destruct;
- (void)datePickerValueChanged:(id)arg1;
- (void)_setTextForInputTextField:(id)arg1;
- (void)localeDidChange:(id)arg1;
- (void)beginEditing;
- (void)updateCellDisplay;
- (id)cell;
- (id)formattedKeyAndValue;
- (id)initWithTitle:(id)arg1 registrantModelKey:(id)arg2 date:(id)arg3 defaultDate:(id)arg4 dateRange:(id)arg5 exportFormatter:(id)arg6;

@end

