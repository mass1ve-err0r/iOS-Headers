//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsKit/BSDescriptionProviding-Protocol.h>
#import <UserNotificationsKit/NSCopying-Protocol.h>
#import <UserNotificationsKit/NSMutableCopying-Protocol.h>

@class NCNotificationAction, NCNotificationContent, NCNotificationOptions, NCNotificationSound, NSArray, NSDate, NSDictionary, NSSet, NSString, UNNotification;

@interface NCNotificationRequest : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying>
{
    NSString *_sectionIdentifier;
    NSString *_notificationIdentifier;
    NSString *_threadIdentifier;
    NSString *_categoryIdentifier;
    NSSet *_subSectionIdentifiers;
    NSString *_highestPrioritySubSectionIdentifier;
    NSArray *_peopleIdentifiers;
    NSString *_parentSectionIdentifier;
    _Bool _uniqueThreadIdentifier;
    NSDate *_timestamp;
    NSSet *_requestDestinations;
    NCNotificationContent *_content;
    NCNotificationOptions *_options;
    NSDictionary *_context;
    NSSet *_settingsSections;
    NCNotificationSound *_sound;
    NCNotificationAction *_clearAction;
    NCNotificationAction *_closeAction;
    NCNotificationAction *_defaultAction;
    NCNotificationAction *_silenceAction;
    NSDictionary *_supplementaryActions;
    UNNotification *_userNotification;
    _Bool _isCollapsedNotification;
    unsigned long long _collapsedNotificationsCount;
    NSDictionary *_sourceInfo;
    _Bool _criticalAlert;
}

+ (id)notificationRequestWithNotificationId:(id)arg1 requestDestinations:(id)arg2 lockScreenPersistence:(unsigned long long)arg3;
+ (id)notificationRequestWithSectionId:(id)arg1 notificationId:(id)arg2 subSectionIds:(id)arg3 requestDestinations:(id)arg4;
+ (id)notificationRequestWithSectionId:(id)arg1 subSectionIds:(id)arg2;
+ (id)notificationRequestWithNotificationId:(id)arg1 requestDestinations:(id)arg2 isCritical:(_Bool)arg3;
+ (id)notificationRequestWithNotificationId:(id)arg1 requestDestinations:(id)arg2;
+ (id)notificationRequestWithNotificationId:(id)arg1 lockScreenPriority:(unsigned long long)arg2 lockScreenPersistence:(unsigned long long)arg3;
+ (id)notificationRequestWithNotificationId:(id)arg1 lockScreenPriority:(unsigned long long)arg2;
+ (id)notificationRequestWithActionWithId:(id)arg1 runner:(id)arg2;
+ (id)notificationRequest;
+ (id)notificationRequestWithTimestamp:(id)arg1;
+ (id)notificationRequestWithNotificationId:(id)arg1 threadId:(id)arg2;
+ (id)notificationRequestWithNotificationId:(id)arg1 threadId:(id)arg2 timestamp:(id)arg3;
+ (id)notificationRequestWithThreadId:(id)arg1;
+ (id)notificationRequestWithThreadId:(id)arg1 timestamp:(id)arg2;
+ (id)notificationRequestWithNotificationId:(id)arg1;
+ (id)notificationRequestWithNotificationId:(id)arg1 timestamp:(id)arg2;
+ (id)notificationRequestWithSectionId:(id)arg1;
+ (id)notificationRequestWithSectionId:(id)arg1 threadId:(id)arg2;
+ (id)notificationRequestWithSectionId:(id)arg1 notificationId:(id)arg2;
+ (id)notificationRequestWithSectionId:(id)arg1 notificationId:(id)arg2 timestamp:(id)arg3;
+ (id)notificationRequestWithSectionId:(id)arg1 notificationId:(id)arg2 requestDestination:(id)arg3;
+ (id)notificationRequestWithRequestDestinations:(id)arg1;
+ (id)notificationRequestWithRequestDestination:(id)arg1;
+ (id)notificationRequestWithSectionId:(id)arg1 threadId:(id)arg2 notificationId:(id)arg3 requestDestinations:(id)arg4;
+ (id)notificationRequestWithSectionId:(id)arg1 threadId:(id)arg2 notificationId:(id)arg3 requestDestination:(id)arg4;
+ (id)notificationRequestWithSectionId:(id)arg1 notificationId:(id)arg2 threadId:(id)arg3 timestamp:(id)arg4;
+ (id)notificationRequestWithSectionId:(id)arg1 notificationId:(id)arg2 threadId:(id)arg3 subSectionIds:(id)arg4 title:(id)arg5 message:(id)arg6 timestamp:(id)arg7 destinations:(id)arg8 options:(id)arg9;
+ (id)notificationRequestWithSectionId:(id)arg1 notificationId:(id)arg2 threadId:(id)arg3 title:(id)arg4 message:(id)arg5 timestamp:(id)arg6 destinations:(id)arg7;
+ (id)notificationRequestWithSectionId:(id)arg1 notificationId:(id)arg2 threadId:(id)arg3 title:(id)arg4 message:(id)arg5 timestamp:(id)arg6 destination:(id)arg7;
@property(readonly, nonatomic, getter=isCriticalAlert) _Bool criticalAlert; // @synthesize criticalAlert=_criticalAlert;
@property(readonly, copy, nonatomic) NSDictionary *sourceInfo; // @synthesize sourceInfo=_sourceInfo;
@property(readonly, nonatomic) unsigned long long collapsedNotificationsCount; // @synthesize collapsedNotificationsCount=_collapsedNotificationsCount;
@property(readonly, nonatomic) _Bool isCollapsedNotification; // @synthesize isCollapsedNotification=_isCollapsedNotification;
@property(readonly, nonatomic) UNNotification *userNotification; // @synthesize userNotification=_userNotification;
@property(readonly, copy, nonatomic) NSDictionary *supplementaryActions; // @synthesize supplementaryActions=_supplementaryActions;
@property(readonly, nonatomic) NCNotificationAction *silenceAction; // @synthesize silenceAction=_silenceAction;
@property(readonly, nonatomic) NCNotificationAction *defaultAction; // @synthesize defaultAction=_defaultAction;
@property(readonly, nonatomic) NCNotificationAction *closeAction; // @synthesize closeAction=_closeAction;
@property(readonly, nonatomic) NCNotificationAction *clearAction; // @synthesize clearAction=_clearAction;
@property(readonly, nonatomic) NCNotificationSound *sound; // @synthesize sound=_sound;
@property(readonly, copy, nonatomic) NSSet *settingsSections; // @synthesize settingsSections=_settingsSections;
@property(readonly, copy, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property(readonly, nonatomic) NCNotificationOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic) NCNotificationContent *content; // @synthesize content=_content;
@property(readonly, copy, nonatomic) NSSet *requestDestinations; // @synthesize requestDestinations=_requestDestinations;
@property(readonly, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic, getter=isUniqueThreadIdentifier) _Bool uniqueThreadIdentifier; // @synthesize uniqueThreadIdentifier=_uniqueThreadIdentifier;
@property(readonly, copy, nonatomic) NSString *parentSectionIdentifier; // @synthesize parentSectionIdentifier=_parentSectionIdentifier;
@property(readonly, copy, nonatomic) NSArray *peopleIdentifiers; // @synthesize peopleIdentifiers=_peopleIdentifiers;
@property(readonly, copy, nonatomic) NSString *highestPrioritySubSectionIdentifier; // @synthesize highestPrioritySubSectionIdentifier=_highestPrioritySubSectionIdentifier;
@property(readonly, copy, nonatomic) NSSet *subSectionIdentifiers; // @synthesize subSectionIdentifiers=_subSectionIdentifiers;
@property(readonly, copy, nonatomic) NSString *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property(readonly, copy, nonatomic) NSString *threadIdentifier; // @synthesize threadIdentifier=_threadIdentifier;
@property(readonly, copy, nonatomic) NSString *notificationIdentifier; // @synthesize notificationIdentifier=_notificationIdentifier;
@property(readonly, copy, nonatomic) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)matchesThreadForRequest:(id)arg1;
- (_Bool)matchesRequest:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1;
- (_Bool)isCollapsibleWithNotificationRequest:(id)arg1;
- (id)_actionsDescriptionForEnvironment:(id)arg1;
- (id)_actionsLoggingDescription;
- (id)loggingDescription;

// Remaining properties
@property(readonly) Class superclass;

@end

