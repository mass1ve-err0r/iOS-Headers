//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, SAReminderDateTimeTriggerOffset;

@interface SAReminderSnooze : SABaseClientBoundCommand
{
}

+ (id)snoozeWithDictionary:(id)arg1 context:(id)arg2;
+ (id)snooze;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSArray *reminderIdentifierList;
@property(retain, nonatomic) SAReminderDateTimeTriggerOffset *offset;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

