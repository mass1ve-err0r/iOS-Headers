//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntent.h>

@class CLPlacemark, INObject, NSNumber, NSString;

@interface EKUICreateEventIntent : INIntent
{
}


// Remaining properties
@property(copy, nonatomic) NSNumber *allDay; // @dynamic allDay;
@property(copy, nonatomic) INObject *endDate; // @dynamic endDate;
@property(copy, nonatomic) CLPlacemark *geolocation; // @dynamic geolocation;
@property(copy, nonatomic) NSString *locationAddress; // @dynamic locationAddress;
@property(copy, nonatomic) NSString *locationName; // @dynamic locationName;
@property(copy, nonatomic) INObject *startDate; // @dynamic startDate;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@end

