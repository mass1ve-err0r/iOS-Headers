//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSString, VOSubstitution;

@interface VOBundle : NSManagedObject
{
}

+ (id)fetchRequest;

// Remaining properties
@property(copy, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property(copy, nonatomic) NSString *ckRecordID; // @dynamic ckRecordID;
@property(retain, nonatomic) NSData *ckRecordSystemFields; // @dynamic ckRecordSystemFields;
@property(retain, nonatomic) VOSubstitution *iOSSubstitution; // @dynamic iOSSubstitution;
@property(retain, nonatomic) VOSubstitution *macOSSubstitution; // @dynamic macOSSubstitution;

@end

