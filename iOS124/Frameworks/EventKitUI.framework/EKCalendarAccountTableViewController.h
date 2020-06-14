//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class EKCalendar, EKEventStore, NSMutableArray, NSString;

@interface EKCalendarAccountTableViewController : UITableViewController
{
    NSString *_currentSourceIdentifier;
    EKEventStore *_eventStore;
    EKCalendar *_calendar;
}

@property __weak EKCalendar *calendar; // @synthesize calendar=_calendar;
@property __weak EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
@property(retain) NSString *currentSourceIdentifier; // @synthesize currentSourceIdentifier=_currentSourceIdentifier;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(readonly) NSMutableArray *accounts;
- (void)loadView;
- (id)initWithCalendar:(id)arg1 andStore:(id)arg2;

@end

