//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKCalendarEditItem.h>

@class NSMutableArray, UILabel, UISwitch, UITableViewHeaderFooterView;

@interface EKCalendarAbstractSwitchEditItem : EKCalendarEditItem
{
    UITableViewHeaderFooterView *_footerView;
    UILabel *_descriptionLabel;
    _Bool _underlyingCalendarState;
    _Bool _switchState;
    _Bool _allowEventAlerts;
    NSMutableArray *_cells;
    UISwitch *_toggleSwitch;
}

@property(retain, nonatomic) UISwitch *toggleSwitch; // @synthesize toggleSwitch=_toggleSwitch;
@property(retain, nonatomic) NSMutableArray *cells; // @synthesize cells=_cells;
@property(nonatomic) _Bool allowEventAlerts; // @synthesize allowEventAlerts=_allowEventAlerts;
@property(nonatomic) _Bool switchState; // @synthesize switchState=_switchState;
@property(nonatomic) _Bool underlyingCalendarState; // @synthesize underlyingCalendarState=_underlyingCalendarState;
- (void).cxx_destruct;
- (id)descriptionLabelText;
- (id)cellText;
- (_Bool)saveStateToCalendar:(id)arg1;
- (unsigned long long)numberOfSubitems;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)footerHeightForSection;
- (id)footerViewForSection;
- (void)_applyStyleToUILabel:(id)arg1;
- (id)footerView;
- (void)layoutForWidth:(double)arg1;
- (id)cell;
- (void)_switchStateChanged:(id)arg1;
- (void)reset;
- (void)setCalendar:(id)arg1 store:(id)arg2;

@end

