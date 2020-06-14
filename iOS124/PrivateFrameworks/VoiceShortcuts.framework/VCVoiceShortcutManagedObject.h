//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSSet, NSString, NSUUID;

@interface VCVoiceShortcutManagedObject : NSManagedObject
{
}

+ (id)nonUserDataAttributes;
+ (id)fetchRequest;
- (_Bool)populateWithVoiceShortcut:(id)arg1 error:(id *)arg2;
- (id)initWithContext:(id)arg1 voiceShortcut:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(copy, nonatomic) NSString *associatedAppBundleIdentifier; // @dynamic associatedAppBundleIdentifier;
@property(copy, nonatomic) NSDate *dateCreated; // @dynamic dateCreated;
@property(copy, nonatomic) NSDate *dateLastModified; // @dynamic dateLastModified;
@property(copy, nonatomic) NSUUID *identifier; // @dynamic identifier;
@property(nonatomic) _Bool isMarkedAsDeleted; // @dynamic isMarkedAsDeleted;
@property(retain, nonatomic) NSData *keyImageData; // @dynamic keyImageData;
@property(copy, nonatomic) NSString *phrase; // @dynamic phrase;
@property(retain, nonatomic) NSData *serializedWorkflowData; // @dynamic serializedWorkflowData;
@property(copy, nonatomic) NSString *shortcutDescription; // @dynamic shortcutDescription;
@property(copy, nonatomic) NSString *shortcutName; // @dynamic shortcutName;
@property(retain, nonatomic) NSSet *syncStates; // @dynamic syncStates;

@end

