//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class CLSBusinessCacheEntry, NSNumber, NSString;

@interface CLSManagedBusinessItem : NSManagedObject
{
}

+ (id)entityName;
@property(nonatomic) long long venueCapacity;

// Remaining properties
@property(retain, nonatomic) NSString *businessCategories; // @dynamic businessCategories;
@property(nonatomic) unsigned int categories; // @dynamic categories;
@property(retain, nonatomic) CLSBusinessCacheEntry *entry; // @dynamic entry;
@property(retain, nonatomic) NSString *isoCountryCode; // @dynamic isoCountryCode;
@property(nonatomic) double latitude; // @dynamic latitude;
@property(nonatomic) double longitude; // @dynamic longitude;
@property(nonatomic) unsigned long long muid; // @dynamic muid;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSString *providerID; // @dynamic providerID;
@property(nonatomic) double radius; // @dynamic radius;
@property(retain, nonatomic) NSNumber *venueCapacityAsNumber; // @dynamic venueCapacityAsNumber;

@end

