//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKitUI/EKCalendarEditItem.h>

#import <EventKitUI/CalendarPublishingActivityDelegate-Protocol.h>

@class NSString, UIActivityIndicatorView, UITableViewHeaderFooterView, UIView;

@interface EKCalendarPublishingEditItem : EKCalendarEditItem <CalendarPublishingActivityDelegate>
{
    _Bool _published;
    UITableViewHeaderFooterView *_footerView;
    UIActivityIndicatorView *_spinner;
}

@property(nonatomic) _Bool published; // @synthesize published=_published;
- (void).cxx_destruct;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (id)pubishURL;
- (id)calendarTitle;
- (void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)_publishChanged:(id)arg1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (double)footerHeightForSection;
- (id)footerViewForSection;
- (unsigned long long)numberOfSubitems;
- (_Bool)configureWithCalendar:(id)arg1;
@property(readonly, nonatomic) UIView *footerView;
- (void)_applyStyleToUILabel:(id)arg1;
- (void)reset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

