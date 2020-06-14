//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class CHHandle, NSSet, NSString;

@interface CHManagedHandle : NSManagedObject
{
}

+ (id)managedHandlesForHandles:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)managedHandleForHandle:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)fetchRequest;
- (id)copyWithContext:(id)arg1;
@property(readonly, nonatomic) CHHandle *chHandle;

// Remaining properties
@property(retain, nonatomic) NSSet *localParticipantCalls; // @dynamic localParticipantCalls;
@property(copy, nonatomic) NSString *normalizedValue; // @dynamic normalizedValue;
@property(retain, nonatomic) NSSet *remoteParticipantCalls; // @dynamic remoteParticipantCalls;
@property(nonatomic) short type; // @dynamic type;
@property(retain, nonatomic) NSString *value; // @dynamic value;

@end

