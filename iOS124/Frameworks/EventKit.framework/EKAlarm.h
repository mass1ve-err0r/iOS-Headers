//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKObject.h>

#import <EventKit/NSCopying-Protocol.h>

@class EKCalendar, EKCalendarItem, EKStructuredLocation, NSArray, NSDate, NSString, NSURL;

@interface EKAlarm : EKObject <NSCopying>
{
    long long _type;
    NSString *_emailAddress;
    NSString *_soundName;
    NSURL *_url;
}

+ (id)noneTriggerDate;
+ (id)alarmWithAlarm:(id)arg1;
+ (double)defaultGeofencedReminderRadius;
+ (_Bool)areLocationsCurrentlyEnabled;
+ (_Bool)areLocationsAllowedWithAuthorizationStatus:(int)arg1;
+ (_Bool)areLocationsAllowed;
+ (int)_currentAuthorizationStatus;
+ (_Bool)areLocationsAvailable;
+ (long long)maxPublicProximity;
+ (id)alarmWithRelativeOffset:(double)arg1;
+ (id)alarmWithAbsoluteDate:(id)arg1;
+ (id)knownRelationshipMultiValueKeys;
+ (id)knownRelationshipSingleValueKeys;
+ (Class)frozenClass;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *soundName; // @synthesize soundName=_soundName;
@property(copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)shouldIncludeInNormalAlarms;
- (void)setIsTimeToLeaveAlarm:(_Bool)arg1;
- (_Bool)isTimeToLeaveAlarm;
- (_Bool)isVehicleAlarm;
- (void)setTriggerIsNotRelativeToTravelTime:(_Bool)arg1;
- (_Bool)triggerIsNotRelativeToTravelTime;
- (_Bool)isTopographicallyEqualToAlarm:(id)arg1;
- (long long)compare:(id)arg1;
- (_Bool)validateWithOwner:(id)arg1 error:(id *)arg2;
- (id)description;
- (id)semanticIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) _Bool isSnoozed;
- (void)removeSnoozedAlarm:(id)arg1;
- (void)addSnoozedAlarm:(id)arg1;
@property(copy, nonatomic) NSArray *snoozedAlarms;
@property(retain, nonatomic) EKAlarm *originalAlarm;
@property(nonatomic, getter=isDefaultAlarm) _Bool defaultAlarm;
- (id)ownerUUID;
@property(copy, nonatomic) EKStructuredLocation *structuredLocation;
@property(nonatomic) long long proximity;
@property(readonly, nonatomic) _Bool isAbsolute;
@property(readonly, nonatomic) NSString *externalID;
- (void)setAcknowledgedDate:(id)arg1;
- (id)acknowledgedDate;
@property(copy, nonatomic) NSDate *absoluteDate;
@property(nonatomic) double relativeOffset;
- (void)setRelativeOffsetRaw:(id)arg1;
- (id)relativeOffsetRaw;
- (void)setAlarmType:(long long)arg1;
- (long long)alarmType;
- (void)setUUID:(id)arg1;
@property(readonly, nonatomic) NSString *UUID;
@property(readonly, nonatomic) EKCalendar *calendarOwner;
@property(readonly, nonatomic) EKCalendarItem *calendarItemOwner;
@property(readonly, nonatomic) EKObject *owner;
- (id)initWithRelativeOffset:(double)arg1;
- (id)initWithAbsoluteDate:(id)arg1;
- (id)init;

@end

