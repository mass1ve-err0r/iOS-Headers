//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSSet, RMUsage;

@interface RMUsageBlock : NSManagedObject
{
}


// Remaining properties
@property(retain, nonatomic) NSSet *categories; // @dynamic categories;
@property(retain, nonatomic) NSSet *countedItems; // @dynamic countedItems;
@property(nonatomic) long long durationInMinutes; // @dynamic durationInMinutes;
@property(retain, nonatomic) NSDate *firstPickupDate; // @dynamic firstPickupDate;
@property(retain, nonatomic) NSDate *lastEventDate; // @dynamic lastEventDate;
@property(retain, nonatomic) NSDate *longestSessionEndDate; // @dynamic longestSessionEndDate;
@property(retain, nonatomic) NSDate *longestSessionStartDate; // @dynamic longestSessionStartDate;
@property(nonatomic) long long numberOfPickupsWithoutApplicationUsage; // @dynamic numberOfPickupsWithoutApplicationUsage;
@property(nonatomic) long long screenTimeInSeconds; // @dynamic screenTimeInSeconds;
@property(copy, nonatomic) NSDate *startDate; // @dynamic startDate;
@property(retain, nonatomic) RMUsage *usage; // @dynamic usage;
@end

