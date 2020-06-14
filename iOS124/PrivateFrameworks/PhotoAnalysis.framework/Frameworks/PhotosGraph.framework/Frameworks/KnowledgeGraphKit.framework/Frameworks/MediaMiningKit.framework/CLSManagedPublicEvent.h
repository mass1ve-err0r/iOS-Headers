//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSSet, NSString, NSTimeZone;

@interface CLSManagedPublicEvent : NSManagedObject
{
}

+ (id)entityName;
@property(nonatomic) long long expectedAttendance;
@property(readonly, nonatomic) NSTimeZone *timeZone;

// Remaining properties
@property(nonatomic) double businessItemLatitude; // @dynamic businessItemLatitude;
@property(nonatomic) double businessItemLongitude; // @dynamic businessItemLongitude;
@property(nonatomic) unsigned long long businessItemMuid; // @dynamic businessItemMuid;
@property(retain, nonatomic) NSSet *categories; // @dynamic categories;
@property(retain, nonatomic) NSNumber *expectedAttendanceAsNumber; // @dynamic expectedAttendanceAsNumber;
@property(retain, nonatomic) NSDate *localEndDate; // @dynamic localEndDate;
@property(nonatomic) double localEndTime; // @dynamic localEndTime;
@property(retain, nonatomic) NSDate *localStartDate; // @dynamic localStartDate;
@property(nonatomic) double localStartTime; // @dynamic localStartTime;
@property(nonatomic) unsigned long long muid; // @dynamic muid;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSSet *performers; // @dynamic performers;
@property(retain, nonatomic) NSSet *queryLocations; // @dynamic queryLocations;
@property(nonatomic) long long timeZoneOffset; // @dynamic timeZoneOffset;

@end

