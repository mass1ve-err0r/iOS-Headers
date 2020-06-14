//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iCalendar/ICSComponent.h>

@class ICSDate, ICSDuration, ICSUserAddress, NSArray, NSString;

@interface ICSFreeBusy : ICSComponent
{
}

+ (id)name;
@property(retain, nonatomic) NSString *x_calendarserver_extended_freebusy;
@property(retain, nonatomic) NSString *x_calendarserver_mask_uid;
@property(retain, nonatomic) NSArray *freebusy;

// Remaining properties
@property(retain) NSArray *attendee; // @dynamic attendee;
@property(retain) ICSDate *created; // @dynamic created;
@property(retain) ICSDate *dtend; // @dynamic dtend;
@property(retain) ICSDate *dtstamp; // @dynamic dtstamp;
@property(retain) ICSDate *dtstart; // @dynamic dtstart;
@property(retain) ICSDuration *duration; // @dynamic duration;
@property(retain) ICSUserAddress *organizer; // @dynamic organizer;
@property(retain) NSString *summary; // @dynamic summary;
@property(retain) NSString *uid; // @dynamic uid;

@end

