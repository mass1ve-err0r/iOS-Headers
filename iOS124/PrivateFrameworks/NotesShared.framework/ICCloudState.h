//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class ICCloudSyncingObject, NSDate;

@interface ICCloudState : NSManagedObject
{
}

- (_Bool)isInCloud;

// Remaining properties
@property(retain, nonatomic) ICCloudSyncingObject *cloudSyncingObject; // @dynamic cloudSyncingObject;
@property(nonatomic) long long currentLocalVersion; // @dynamic currentLocalVersion;
@property(nonatomic) _Bool inCloud; // @dynamic inCloud;
@property(nonatomic) long long latestVersionSyncedToCloud; // @dynamic latestVersionSyncedToCloud;
@property(retain, nonatomic) NSDate *localVersionDate; // @dynamic localVersionDate;

@end

