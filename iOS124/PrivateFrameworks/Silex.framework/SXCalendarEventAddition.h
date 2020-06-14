//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXAddition.h>

@class NSString, NSURL, SXFormattedText;

@interface SXCalendarEventAddition : SXAddition
{
}

+ (id)typeString;
- (id)notesWithValue:(id)arg1 withType:(int)arg2;
- (id)URLWithValue:(id)arg1 withType:(int)arg2;

// Remaining properties
@property(readonly, nonatomic) NSURL *URL; // @dynamic URL;
@property(readonly, nonatomic) NSString *endDate; // @dynamic endDate;
@property(readonly, nonatomic) NSString *location; // @dynamic location;
@property(readonly, nonatomic) SXFormattedText *notes; // @dynamic notes;
@property(readonly, nonatomic) NSString *startDate; // @dynamic startDate;
@property(readonly, nonatomic) NSString *title; // @dynamic title;

@end

