//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSArray, NSString;

@interface PushNotificationClient : NSManagedObject
{
}

+ (id)entityFromContext:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *clientIdentifier; // @dynamic clientIdentifier;
@property(copy, nonatomic) NSArray *notifications; // @dynamic notifications;

@end

