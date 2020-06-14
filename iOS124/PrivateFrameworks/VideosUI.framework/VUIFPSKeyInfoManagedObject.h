//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSNumber, NSString, NSURL, VUIVideoManagedObject;

__attribute__((visibility("hidden")))
@interface VUIFPSKeyInfoManagedObject : NSManagedObject
{
}

+ (id)fetchRequest;
- (void)populateFromKeyRequest:(id)arg1 video:(id)arg2;

// Remaining properties
@property(nonatomic) _Bool allowsManualRenewal; // @dynamic allowsManualRenewal;
@property(copy, nonatomic) NSString *contentID; // @dynamic contentID;
@property(copy, nonatomic) NSDate *expirationDate; // @dynamic expirationDate;
@property(nonatomic) _Bool isLowValue; // @dynamic isLowValue;
@property(retain, nonatomic) NSData *keyData; // @dynamic keyData;
@property(copy, nonatomic) NSURL *keyURI; // @dynamic keyURI;
@property(copy, nonatomic) NSNumber *playbackDuration; // @dynamic playbackDuration;
@property(copy, nonatomic) NSDate *playbackExpirationStartDate; // @dynamic playbackExpirationStartDate;
@property(copy, nonatomic) NSDate *renewalDate; // @dynamic renewalDate;
@property(copy, nonatomic) NSNumber *renewalInterval; // @dynamic renewalInterval;
@property(copy, nonatomic) NSDate *retrievalDate; // @dynamic retrievalDate;
@property(retain, nonatomic) VUIVideoManagedObject *video; // @dynamic video;

@end

