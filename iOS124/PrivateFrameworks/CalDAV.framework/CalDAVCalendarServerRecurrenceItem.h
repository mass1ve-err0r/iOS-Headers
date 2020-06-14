//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVItem.h>

@class CalDAVCalendarServerChangesItem, CoreDAVItemWithNoChildren, CoreDAVLeafItem;

@interface CalDAVCalendarServerRecurrenceItem : CoreDAVItem
{
    CoreDAVItemWithNoChildren *_master;
    CoreDAVLeafItem *_recurrenceID;
    CalDAVCalendarServerChangesItem *_changes;
}

@property(retain, nonatomic) CalDAVCalendarServerChangesItem *changes; // @synthesize changes=_changes;
@property(retain, nonatomic) CoreDAVLeafItem *recurrenceID; // @synthesize recurrenceID=_recurrenceID;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *master; // @synthesize master=_master;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isMaster;
- (id)copyParseRules;
- (id)init;

@end

