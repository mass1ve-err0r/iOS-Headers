//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileTimer/MTTimer.h>

@class MTSound, NSDate, NSString;

@interface MTMutableTimer : MTTimer
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(copy, nonatomic) NSDate *dismissedDate; // @dynamic dismissedDate;
@property(nonatomic) double duration; // @dynamic duration;
@property(copy, nonatomic) NSDate *firedDate; // @dynamic firedDate;
@property(copy, nonatomic) NSDate *lastModifiedDate; // @dynamic lastModifiedDate;
@property(copy, nonatomic) MTSound *sound; // @dynamic sound;
@property(nonatomic) unsigned long long state; // @dynamic state;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

